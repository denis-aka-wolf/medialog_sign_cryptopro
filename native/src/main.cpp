#define NOMINMAX
#include <windows.h>
#include <wincrypt.h>
#include <ncrypt.h>
#include <cades.h>

#include <algorithm>
#include <cctype>
#include <cstdint>
#include <cstring>
#include <cwchar>
#include <filesystem>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <map>
#include <sstream>
#include <stdexcept>
#include <string>
#include <vector>

#pragma comment(lib, "crypt32.lib")
#pragma comment(lib, "advapi32.lib")
#pragma comment(lib, "ncrypt.lib")

namespace fs = std::filesystem;

static_assert(sizeof(void*) == 8, "CryptoPro Native Bridge requires x64.");
static_assert(sizeof(CADES_SERVICE_CONNECTION_PARA) == 24, "Unexpected CryptoPro SDK ABI: CADES_SERVICE_CONNECTION_PARA.");
static_assert(sizeof(CADES_SIGN_PARA) == 56, "Unexpected CryptoPro SDK ABI: CADES_SIGN_PARA. Check CADES_PARA_HAS_EXTRA_FIELDS.");
static_assert(sizeof(CADES_ENHANCE_MESSAGE_PARA) == 16, "Unexpected CryptoPro SDK ABI: CADES_ENHANCE_MESSAGE_PARA.");
static_assert(sizeof(CADES_VERIFICATION_PARA) == 56, "Unexpected CryptoPro SDK ABI: CADES_VERIFICATION_PARA. Check CADES_PARA_HAS_EXTRA_FIELDS.");

struct BridgeError : std::runtime_error {
    std::string code;
    BridgeError(std::string c, std::string m) : std::runtime_error(std::move(m)), code(std::move(c)) {}
};

static std::wstring Utf8ToWide(const std::string& value) {
    if (value.empty()) return {};
    const int count = MultiByteToWideChar(CP_UTF8, MB_ERR_INVALID_CHARS, value.data(),
                                          static_cast<int>(value.size()), nullptr, 0);
    if (!count) throw BridgeError("INVALID_UTF8", "Строка запроса содержит некорректный UTF-8.");
    std::wstring result(count, L'\0');
    MultiByteToWideChar(CP_UTF8, MB_ERR_INVALID_CHARS, value.data(),
                        static_cast<int>(value.size()), result.data(), count);
    return result;
}

static std::string WideToUtf8(const std::wstring& value) {
    if (value.empty()) return {};
    const int count = WideCharToMultiByte(CP_UTF8, WC_ERR_INVALID_CHARS, value.data(),
                                          static_cast<int>(value.size()), nullptr, 0, nullptr, nullptr);
    if (!count) return {};
    std::string result(count, '\0');
    WideCharToMultiByte(CP_UTF8, WC_ERR_INVALID_CHARS, value.data(),
                        static_cast<int>(value.size()), result.data(), count, nullptr, nullptr);
    return result;
}

static void AppendUtf8(std::string& out, uint32_t cp) {
    if (cp <= 0x7F) out.push_back(static_cast<char>(cp));
    else if (cp <= 0x7FF) {
        out.push_back(static_cast<char>(0xC0 | (cp >> 6)));
        out.push_back(static_cast<char>(0x80 | (cp & 0x3F)));
    } else if (cp <= 0xFFFF) {
        out.push_back(static_cast<char>(0xE0 | (cp >> 12)));
        out.push_back(static_cast<char>(0x80 | ((cp >> 6) & 0x3F)));
        out.push_back(static_cast<char>(0x80 | (cp & 0x3F)));
    } else {
        out.push_back(static_cast<char>(0xF0 | (cp >> 18)));
        out.push_back(static_cast<char>(0x80 | ((cp >> 12) & 0x3F)));
        out.push_back(static_cast<char>(0x80 | ((cp >> 6) & 0x3F)));
        out.push_back(static_cast<char>(0x80 | (cp & 0x3F)));
    }
}

class FlatJsonParser {
public:
    explicit FlatJsonParser(const std::string& s) : s_(s) {}
    std::map<std::string, std::string> Parse() {
        Skip(); Expect('{'); Skip();
        std::map<std::string, std::string> result;
        if (Take('}')) { Skip(); if (pos_ != s_.size()) Fail(); return result; }
        for (;;) {
            Skip(); std::string key = ParseString(); Skip(); Expect(':'); Skip();
            if (result.find(key) != result.end()) Fail();
            if (Peek() == '"') result[key] = ParseString();
            else SkipValue();
            Skip(); if (Take('}')) break; Expect(',');
        }
        Skip(); if (pos_ != s_.size()) Fail();
        return result;
    }
private:
    const std::string& s_; size_t pos_ = 0;
    char Peek() const { return pos_ < s_.size() ? s_[pos_] : '\0'; }
    void Skip() { while (Peek() == ' ' || Peek() == '\t' || Peek() == '\r' || Peek() == '\n') ++pos_; }
    bool Take(char c) { if (Peek() == c) { ++pos_; return true; } return false; }
    void Expect(char c) { if (!Take(c)) Fail(); }
    [[noreturn]] void Fail() const { throw BridgeError("INVALID_JSON", "Не удалось разобрать JSON-запрос."); }
    uint32_t Hex4() {
        uint32_t v = 0;
        for (int i = 0; i < 4; ++i) {
            char c = Peek(); ++pos_; v <<= 4;
            if (c >= '0' && c <= '9') v |= c - '0';
            else if (c >= 'a' && c <= 'f') v |= c - 'a' + 10;
            else if (c >= 'A' && c <= 'F') v |= c - 'A' + 10;
            else Fail();
        }
        return v;
    }
    std::string ParseString() {
        Expect('"'); std::string out;
        while (Peek() && Peek() != '"') {
            unsigned char c = static_cast<unsigned char>(s_[pos_++]);
            if (c != '\\') { if (c < 0x20) Fail(); out.push_back(static_cast<char>(c)); continue; }
            char e = Peek(); ++pos_;
            switch (e) {
                case '"': out.push_back('"'); break; case '\\': out.push_back('\\'); break;
                case '/': out.push_back('/'); break; case 'b': out.push_back('\b'); break;
                case 'f': out.push_back('\f'); break; case 'n': out.push_back('\n'); break;
                case 'r': out.push_back('\r'); break; case 't': out.push_back('\t'); break;
                case 'u': {
                    uint32_t cp = Hex4();
                    if (cp >= 0xD800 && cp <= 0xDBFF) {
                        if (Peek() != '\\' || pos_ + 1 >= s_.size() || s_[pos_ + 1] != 'u') Fail();
                        pos_ += 2; uint32_t lo = Hex4();
                        if (lo < 0xDC00 || lo > 0xDFFF) Fail();
                        cp = 0x10000 + ((cp - 0xD800) << 10) + (lo - 0xDC00);
                    } else if (cp >= 0xDC00 && cp <= 0xDFFF) Fail();
                    AppendUtf8(out, cp); break;
                }
                default: Fail();
            }
        }
        Expect('"'); return out;
    }
    void SkipValue() {
        if (Peek() == '"') { (void)ParseString(); return; }
        if (Take('{')) { Skip(); if (Take('}')) return; for (;;) { Skip(); (void)ParseString(); Skip(); Expect(':'); Skip(); SkipValue(); Skip(); if (Take('}')) return; Expect(','); } }
        if (Take('[')) { Skip(); if (Take(']')) return; for (;;) { Skip(); SkipValue(); Skip(); if (Take(']')) return; Expect(','); } }
        const size_t start = pos_;
        while (Peek() && Peek() != ',' && Peek() != '}' && Peek() != ']' && Peek() != ' ' && Peek() != '\r' && Peek() != '\n' && Peek() != '\t') ++pos_;
        if (pos_ == start) Fail();
    }
};

static std::string JsonEscape(const std::string& s) {
    std::ostringstream o; o << '"';
    for (unsigned char c : s) {
        switch (c) {
            case '"': o << "\\\""; break; case '\\': o << "\\\\"; break;
            case '\b': o << "\\b"; break; case '\f': o << "\\f"; break;
            case '\n': o << "\\n"; break; case '\r': o << "\\r"; break; case '\t': o << "\\t"; break;
            default: if (c < 0x20) o << "\\u" << std::hex << std::setw(4) << std::setfill('0') << (int)c << std::dec;
                     else o << static_cast<char>(c);
        }
    }
    o << '"'; return o.str();
}

static std::string Hex(const BYTE* p, DWORD n) {
    static const char* h = "0123456789ABCDEF"; std::string s; s.reserve(n * 2);
    for (DWORD i = 0; i < n; ++i) { s.push_back(h[p[i] >> 4]); s.push_back(h[p[i] & 15]); }
    return s;
}
static std::string FileTimeIso(const FILETIME& ft) {
    SYSTEMTIME st{}; if (!FileTimeToSystemTime(&ft, &st)) return {};
    wchar_t b[40]{};
    swprintf_s(b, L"%04u-%02u-%02uT%02u:%02u:%02uZ", st.wYear, st.wMonth, st.wDay, st.wHour, st.wMinute, st.wSecond);
    return WideToUtf8(b);
}
static std::wstring CertName(PCCERT_CONTEXT c, DWORD type, DWORD flags = 0) {
    DWORD n = CertGetNameStringW(c, type, flags, nullptr, nullptr, 0);
    if (n <= 1) return {};
    std::wstring s(n, L'\0'); CertGetNameStringW(c, type, flags, nullptr, s.data(), n);
    if (!s.empty() && s.back() == L'\0') s.pop_back(); return s;
}
static std::string Thumbprint(PCCERT_CONTEXT c) {
    DWORD n = 0;
    if (!CertGetCertificateContextProperty(c, CERT_SHA1_HASH_PROP_ID, nullptr, &n) || !n) return {};
    std::vector<BYTE> b(n);
    if (!CertGetCertificateContextProperty(c, CERT_SHA1_HASH_PROP_ID, b.data(), &n)) return {};
    return Hex(b.data(), n);
}
static bool HasPrivateKeyLink(PCCERT_CONTEXT c) {
    DWORD n = 0;
    return CertGetCertificateContextProperty(c, CERT_KEY_PROV_INFO_PROP_ID, nullptr, &n) != FALSE ||
           CertGetCertificateContextProperty(c, CERT_KEY_CONTEXT_PROP_ID, nullptr, &n) != FALSE;
}
static HCERTSTORE OpenMyStore() {
    HCERTSTORE s = CertOpenStore(CERT_STORE_PROV_SYSTEM_W, 0, 0,
        CERT_SYSTEM_STORE_CURRENT_USER | CERT_STORE_OPEN_EXISTING_FLAG, L"MY");
    if (!s) throw BridgeError("CERT_STORE_OPEN_FAILED", "Не удалось открыть хранилище сертификатов CurrentUser\\MY.");
    return s;
}
static PCCERT_CONTEXT FindCertificate(HCERTSTORE store, const std::string& requested) {
    std::string normalized; for (unsigned char c : requested) if (std::isxdigit(c)) normalized.push_back(static_cast<char>(std::toupper(c)));
    if (normalized.empty()) throw BridgeError("CERTIFICATE_THUMBPRINT_REQUIRED", "Не указан thumbprint сертификата.");
    PCCERT_CONTEXT current = nullptr;
    while ((current = CertEnumCertificatesInStore(store, current)) != nullptr) {
        if (Thumbprint(current) == normalized) return current;
    }
    throw BridgeError("CERTIFICATE_NOT_FOUND", "Сертификат с указанным thumbprint не найден в CurrentUser\\MY.");
}
static std::string LastErrorHex(DWORD e);
static std::vector<BYTE> ReadFile(const std::string& utf8Path) {
    fs::path p(Utf8ToWide(utf8Path)); std::ifstream f(p, std::ios::binary);
    if (!f) throw BridgeError("INPUT_FILE_OPEN_FAILED", "Не удалось открыть входной файл.");
    f.seekg(0, std::ios::end); auto length = f.tellg();
    if (length < 0) throw BridgeError("INPUT_FILE_READ_FAILED", "Не удалось определить размер входного файла.");
    if (static_cast<uint64_t>(length) > 0xFFFFFFFFull) throw BridgeError("FILE_TOO_LARGE", "Текущая реализация CAdES API ограничивает размер одного входного буфера 4 ГиБ.");
    f.seekg(0, std::ios::beg); std::vector<BYTE> data(static_cast<size_t>(length));
    if (!data.empty() && !f.read(reinterpret_cast<char*>(data.data()), static_cast<std::streamsize>(data.size())))
        throw BridgeError("INPUT_FILE_READ_FAILED", "Ошибка чтения входного файла.");
    return data;
}
static bool SamePath(const std::string& left, const std::string& right) {
    const auto a = fs::absolute(fs::path(Utf8ToWide(left))).lexically_normal().wstring();
    const auto b = fs::absolute(fs::path(Utf8ToWide(right))).lexically_normal().wstring();
    return CompareStringOrdinal(a.c_str(), -1, b.c_str(), -1, TRUE) == CSTR_EQUAL;
}
static void WriteFile(const std::string& utf8Path, const BYTE* data, size_t size) {
    fs::path dest(Utf8ToWide(utf8Path)); if (dest.empty()) throw BridgeError("OUTPUT_PATH_REQUIRED", "Не указан путь выходного файла.");
    fs::path temp = dest; temp += L"." + std::to_wstring(GetCurrentProcessId()) + L".tmp";
    { std::ofstream f(temp, std::ios::binary | std::ios::trunc);
      if (!f) throw BridgeError("OUTPUT_FILE_OPEN_FAILED", "Не удалось создать временный выходной файл.");
      if (size && !f.write(reinterpret_cast<const char*>(data), static_cast<std::streamsize>(size))) throw BridgeError("OUTPUT_FILE_WRITE_FAILED", "Ошибка записи выходного файла.");
      f.flush(); if (!f) throw BridgeError("OUTPUT_FILE_WRITE_FAILED", "Не удалось завершить запись выходного файла."); }
    if (!MoveFileExW(temp.c_str(), dest.c_str(), MOVEFILE_REPLACE_EXISTING | MOVEFILE_WRITE_THROUGH)) {
        const DWORD error = GetLastError(); fs::remove(temp);
        throw BridgeError("OUTPUT_FILE_RENAME_FAILED", "Не удалось переместить временный файл в целевой путь: " + LastErrorHex(error));
    }
}
static const char* HashOidForCert(PCCERT_CONTEXT cert) {
    const char* oid = cert->pCertInfo->SubjectPublicKeyInfo.Algorithm.pszObjId;
    if (!oid) return nullptr;
    if (strcmp(oid, "1.2.643.2.2.19") == 0) return "1.2.643.2.2.9";
    if (strcmp(oid, "1.2.643.7.1.1.1.1") == 0) return "1.2.643.7.1.1.2.2";
    if (strcmp(oid, "1.2.643.7.1.1.1.2") == 0) return "1.2.643.7.1.1.2.3";
    return nullptr;
}
static std::string LastErrorHex(DWORD e) { std::ostringstream o; o << "0x" << std::uppercase << std::hex << e; return o.str(); }

static std::string ListCertificates() {
    HCERTSTORE store = OpenMyStore();
    std::ostringstream out; out << "{\"certificates\":["; bool first = true;
    PCCERT_CONTEXT c = nullptr;
    while ((c = CertEnumCertificatesInStore(store, c)) != nullptr) {
        std::string thumb = Thumbprint(c);
        bool hasKey = HasPrivateKeyLink(c);
        FILETIME now{}; GetSystemTimeAsFileTime(&now);
        bool validNow = CompareFileTime(&now, &c->pCertInfo->NotBefore) >= 0 && CompareFileTime(&now, &c->pCertInfo->NotAfter) <= 0;
        std::string serial = Hex(c->pCertInfo->SerialNumber.pbData, c->pCertInfo->SerialNumber.cbData);
        std::reverse(serial.begin(), serial.end());
        if (!first) out << ','; first = false;
        out << "{\"thumbprint\":" << JsonEscape(thumb)
            << ",\"subjectName\":" << JsonEscape(WideToUtf8(CertName(c, CERT_NAME_SIMPLE_DISPLAY_TYPE)))
            << ",\"issuerName\":" << JsonEscape(WideToUtf8(CertName(c, CERT_NAME_SIMPLE_DISPLAY_TYPE, CERT_NAME_ISSUER_FLAG)))
            << ",\"serialNumber\":" << JsonEscape(serial)
            << ",\"validFrom\":" << JsonEscape(FileTimeIso(c->pCertInfo->NotBefore))
            << ",\"validTo\":" << JsonEscape(FileTimeIso(c->pCertInfo->NotAfter))
            << ",\"hasPrivateKey\":" << (hasKey ? "true" : "false")
            << ",\"dateRangeValid\":" << (validNow ? "true" : "false")
            << ",\"isReadyForSigning\":" << ((hasKey && validNow) ? "true" : "false") << '}';
    }
    CertCloseStore(store, 0); out << "]}"; return out.str();
}

static DWORD CadesProfileFromName(const std::string& name) {
    if (name.empty() || name == "CAdES-BES" || name == "BES") return CADES_BES;
    if (name == "CAdES-T" || name == "T") return CADES_T;
    if (name == "CAdES-X Long Type 1" || name == "CAdES-X-LT1" || name == "X-LT1" || name == "XLT1")
        return CADES_X_LONG_TYPE_1;
    throw BridgeError("UNSUPPORTED_CADES_PROFILE", "Поддерживаются только CAdES-BES, CAdES-T и CAdES-X Long Type 1.");
}
static const char* CadesProfileName(DWORD profile) {
    switch (profile) {
        case CADES_BES: return "CAdES-BES";
        case CADES_T: return "CAdES-T";
        case CADES_X_LONG_TYPE_1: return "CAdES-X Long Type 1";
        default: return "unknown";
    }
}

static std::string Sign(const std::map<std::string, std::string>& req, bool detached) {
    auto get = [&](const char* k) -> std::string { auto i = req.find(k); return i == req.end() ? std::string() : i->second; };
    const std::string inputPath = get("inputPath"), outputPath = get("outputPath"), thumb = get("thumbprint");
    const DWORD targetProfile = CadesProfileFromName(get("profile"));
    const std::string tspUrl = get("tspUrl");
    if (inputPath.empty() || outputPath.empty()) throw BridgeError("PATH_REQUIRED", "Для подписания необходимо указать inputPath и outputPath.");
    if (SamePath(inputPath, outputPath)) throw BridgeError("INPUT_OUTPUT_PATH_COLLISION", "Входной и выходной пути не должны совпадать.");
    if (!tspUrl.empty() && tspUrl.rfind("http://", 0) != 0 && tspUrl.rfind("https://", 0) != 0)
        throw BridgeError("INVALID_TSP_URL", "tspUrl должен начинаться с http:// или https://.");
    const std::wstring tspUri = Utf8ToWide(tspUrl);

    auto content = ReadFile(inputPath);
    HCERTSTORE store = OpenMyStore();
    PCCERT_CONTEXT cert = nullptr;
    try { cert = FindCertificate(store, thumb); }
    catch (...) { CertCloseStore(store, 0); throw; }
    auto releaseCertificate = [&]() {
        if (cert) { CertFreeCertificateContext(cert); cert = nullptr; }
        if (store) { CertCloseStore(store, 0); store = nullptr; }
    };
    if (!HasPrivateKeyLink(cert)) {
        releaseCertificate();
        throw BridgeError("PRIVATE_KEY_NOT_LINKED", "У сертификата отсутствует связь с закрытым ключом.");
    }
    const char* hashOid = HashOidForCert(cert);
    if (!hashOid) {
        releaseCertificate();
        throw BridgeError("UNSUPPORTED_KEY_ALGORITHM", "Алгоритм открытого ключа сертификата не поддержан текущим сопоставлением хеш-OID.");
    }

    CRYPT_SIGN_MESSAGE_PARA crypt{}; crypt.cbSize = sizeof(crypt);
    crypt.dwMsgEncodingType = X509_ASN_ENCODING | PKCS_7_ASN_ENCODING;
    crypt.pSigningCert = cert; crypt.HashAlgorithm.pszObjId = const_cast<LPSTR>(hashOid);
    CADES_SIGN_PARA cades{}; cades.dwSize = sizeof(cades); cades.dwCadesType = CADES_BES; cades.pSignerCert = cert;
    cades.szHashAlgorithm = hashOid;
    CADES_SIGN_MESSAGE_PARA para{}; para.dwSize = sizeof(para); para.pSignMessagePara = &crypt; para.pCadesSignPara = &cades;
    BYTE emptyContent = 0;
    const BYTE* buffers[1] = { content.empty() ? &emptyContent : content.data() };
    DWORD lengths[1] = { static_cast<DWORD>(content.size()) };
    PCRYPT_DATA_BLOB signedBlob = nullptr;
    BOOL ok = CadesSignMessage(&para, detached ? TRUE : FALSE, 1, buffers, lengths, &signedBlob);
    DWORD error = ok ? ERROR_SUCCESS : GetLastError();
    if (!ok || !signedBlob) {
        if (signedBlob) CadesFreeBlob(signedBlob);
        releaseCertificate();
        throw BridgeError("CADES_SIGN_FAILED", "CadesSignMessage (BES) завершилась ошибкой: " + LastErrorHex(error));
    }

    if (targetProfile != CADES_BES) {
        CADES_SERVICE_CONNECTION_PARA tsp{}; tsp.dwSize = sizeof(tsp);
        if (!tspUri.empty()) tsp.wszUri = tspUri.c_str();

        CADES_SIGN_PARA enhanceSign{}; enhanceSign.dwSize = sizeof(enhanceSign);
        enhanceSign.dwCadesType = targetProfile;
        enhanceSign.pSignerCert = cert;
        enhanceSign.szHashAlgorithm = hashOid;
        if (!tspUrl.empty()) enhanceSign.pTspConnectionPara = &tsp;

        CADES_ENHANCE_MESSAGE_PARA enhance{}; enhance.dwSize = sizeof(enhance);
        enhance.dwMsgEncodingType = X509_ASN_ENCODING | PKCS_7_ASN_ENCODING;
        enhance.pCadesSignPara = &enhanceSign;

        PCRYPT_DATA_BLOB enhancedBlob = nullptr;
        ok = CadesEnhanceMessage(&enhance, 0, signedBlob->pbData, signedBlob->cbData, &enhancedBlob);
        error = ok ? ERROR_SUCCESS : GetLastError();
        CadesFreeBlob(signedBlob);
        signedBlob = nullptr;
        if (!ok || !enhancedBlob) {
            if (enhancedBlob) CadesFreeBlob(enhancedBlob);
            releaseCertificate();
            throw BridgeError("CADES_ENHANCE_FAILED", std::string("CadesEnhanceMessage для ") +
                CadesProfileName(targetProfile) + " завершилась ошибкой: " + LastErrorHex(error));
        }
        signedBlob = enhancedBlob;
    }

    releaseCertificate();
    try { WriteFile(outputPath, signedBlob->pbData, signedBlob->cbData); }
    catch (...) { CadesFreeBlob(signedBlob); throw; }
    const DWORD bytes = signedBlob->cbData; CadesFreeBlob(signedBlob);
    std::ostringstream out; out << "{\"outputPath\":" << JsonEscape(outputPath)
        << ",\"signatureFormat\":" << JsonEscape(CadesProfileName(targetProfile))
        << ",\"requestedProfile\":" << JsonEscape(CadesProfileName(targetProfile))
        << ",\"detached\":" << (detached ? "true" : "false")
        << ",\"bytesWritten\":" << bytes << '}';
    return out.str();
}


static std::string UpgradeSignature(const std::map<std::string, std::string>& req) {
    auto get = [&](const char* k) -> std::string { auto i = req.find(k); return i == req.end() ? std::string() : i->second; };
    const std::string inputPath = get("inputPath"), outputPath = get("outputPath");
    const DWORD targetProfile = CadesProfileFromName(get("profile"));
    const std::string tspUrl = get("tspUrl");
    if (inputPath.empty() || outputPath.empty()) throw BridgeError("PATH_REQUIRED", "Для повышения подписи необходимо указать inputPath и outputPath.");
    if (SamePath(inputPath, outputPath)) throw BridgeError("INPUT_OUTPUT_PATH_COLLISION", "Входной и выходной пути не должны совпадать.");
    if (targetProfile == CADES_BES) throw BridgeError("INVALID_UPGRADE_PROFILE", "Upgrade поддерживает только CAdES-T и CAdES-X Long Type 1.");
    if (!tspUrl.empty() && tspUrl.rfind("http://", 0) != 0 && tspUrl.rfind("https://", 0) != 0)
        throw BridgeError("INVALID_TSP_URL", "tspUrl должен начинаться с http:// или https://.");
    const std::wstring tspUri = Utf8ToWide(tspUrl);
    const auto input = ReadFile(inputPath);
    if (input.empty()) throw BridgeError("EMPTY_SIGNATURE", "Файл подписи пуст.");

    CADES_SERVICE_CONNECTION_PARA tsp{}; tsp.dwSize = sizeof(tsp);
    if (!tspUri.empty()) tsp.wszUri = tspUri.c_str();
    CADES_SIGN_PARA signPara{}; signPara.dwSize = sizeof(signPara);
    signPara.dwCadesType = targetProfile;
    if (!tspUrl.empty()) signPara.pTspConnectionPara = &tsp;
    CADES_ENHANCE_MESSAGE_PARA enhance{}; enhance.dwSize = sizeof(enhance);
    enhance.dwMsgEncodingType = X509_ASN_ENCODING | PKCS_7_ASN_ENCODING;
    enhance.pCadesSignPara = &signPara;

    DWORD signerIndex = 0;
    const std::string signerIndexText = get("signerIndex");
    if (!signerIndexText.empty()) {
        const bool digitsOnly = std::all_of(signerIndexText.begin(), signerIndexText.end(),
            [](unsigned char ch) { return ch >= '0' && ch <= '9'; });
        if (!digitsOnly)
            throw BridgeError("INVALID_SIGNER_INDEX", "signerIndex должен быть целым неотрицательным числом.");
        try {
            size_t parsed = 0;
            const unsigned long long value = std::stoull(signerIndexText, &parsed, 10);
            if (parsed != signerIndexText.size() || value > 0xFFFFFFFFull)
                throw std::out_of_range("signerIndex");
            signerIndex = static_cast<DWORD>(value);
        } catch (...) {
            throw BridgeError("INVALID_SIGNER_INDEX", "signerIndex должен быть целым неотрицательным числом в диапазоне DWORD.");
        }
    }

    PCRYPT_DATA_BLOB enhancedBlob = nullptr;
    const BOOL ok = CadesEnhanceMessage(&enhance, signerIndex, input.data(),
        static_cast<DWORD>(input.size()), &enhancedBlob);
    const DWORD error = ok ? ERROR_SUCCESS : GetLastError();
    if (!ok || !enhancedBlob) {
        if (enhancedBlob) CadesFreeBlob(enhancedBlob);
        throw BridgeError("CADES_ENHANCE_FAILED", "CadesEnhanceMessage завершилась ошибкой: " + LastErrorHex(error));
    }
    try { WriteFile(outputPath, enhancedBlob->pbData, enhancedBlob->cbData); }
    catch (...) { CadesFreeBlob(enhancedBlob); throw; }
    const DWORD bytes = enhancedBlob->cbData;
    CadesFreeBlob(enhancedBlob);
    std::ostringstream out; out << "{\"inputPath\":" << JsonEscape(inputPath)
        << ",\"outputPath\":" << JsonEscape(outputPath)
        << ",\"signatureFormat\":" << JsonEscape(CadesProfileName(targetProfile))
        << ",\"requestedProfile\":" << JsonEscape(CadesProfileName(targetProfile))
        << ",\"signerIndex\":" << signerIndex
        << ",\"bytesWritten\":" << bytes << '}';
    return out.str();
}

static const char* VerifyStatusName(DWORD s) {
    switch (s) {
        case CADES_VERIFY_SUCCESS: return "success";
        case CADES_VERIFY_INVALID_REFS_AND_VALUES: return "invalid_refs_and_values";
        case CADES_VERIFY_SIGNER_NOT_FOUND: return "signer_not_found";
        case CADES_VERIFY_NO_VALID_SIGNATURE_TIMESTAMP: return "no_valid_signature_timestamp";
        case CADES_VERIFY_REFS_AND_VALUES_NO_MATCH: return "refs_and_values_no_match";
        case CADES_VERIFY_NO_CHAIN: return "no_chain";
        case CADES_VERIFY_END_CERT_REVOCATION: return "end_cert_revocation";
        case CADES_VERIFY_CHAIN_CERT_REVOCATION: return "chain_cert_revocation";
        case CADES_VERIFY_BAD_SIGNATURE: return "bad_signature";
        case CADES_VERIFY_NO_VALID_CADES_C_TIMESTAMP: return "no_valid_cades_c_timestamp";
        case CADES_VERIFY_BAD_POLICY: return "bad_policy";
        case CADES_VERIFY_UNSUPPORTED_ATTRIBUTE: return "unsupported_attribute";
        case CADES_VERIFY_FAILED_POLICY: return "failed_policy";
        case CADES_VERIFY_ECONTENTTYPE_NO_MATCH: return "econtenttype_no_match";
        case CADES_VERIFY_NO_VALID_ARCHIVE_TIMESTAMP: return "no_valid_archive_timestamp";
        default: return "unknown";
    }
}
static std::string Verify(const std::map<std::string, std::string>& req, bool detached) {
    auto get = [&](const char* k) -> std::string { auto i = req.find(k); return i == req.end() ? std::string() : i->second; };
    const std::string inputPath = get("inputPath");
    const std::string signaturePath = detached ? get("signaturePath") : get("inputPath");
    const DWORD expectedProfile = CadesProfileFromName(get("profile"));
    if (inputPath.empty() || signaturePath.empty()) throw BridgeError("PATH_REQUIRED", "Для проверки необходимо указать пути к документу и подписи.");
    auto content = detached ? ReadFile(inputPath) : std::vector<BYTE>{};
    auto signature = ReadFile(signaturePath);
    if (signature.empty()) throw BridgeError("EMPTY_SIGNATURE", "Файл подписи пуст.");
    CRYPT_VERIFY_MESSAGE_PARA crypt{}; crypt.cbSize = sizeof(crypt);
    crypt.dwMsgAndCertEncodingType = X509_ASN_ENCODING | PKCS_7_ASN_ENCODING;
    CADES_VERIFICATION_PARA cades{}; cades.dwSize = sizeof(cades); cades.dwCadesType = expectedProfile;
    CADES_VERIFY_MESSAGE_PARA para{}; para.dwSize = sizeof(para); para.pVerifyMessagePara = &crypt; para.pCadesVerifyPara = &cades;
    PCADES_VERIFICATION_INFO info = nullptr; PCRYPT_DATA_BLOB decoded = nullptr;
    BOOL ok = FALSE;
    if (detached) {
        BYTE emptyContent = 0;
        const BYTE* buffers[1] = { content.empty() ? &emptyContent : content.data() };
        DWORD lengths[1] = { static_cast<DWORD>(content.size()) };
        ok = CadesVerifyDetachedMessage(&para, 0, signature.data(), static_cast<DWORD>(signature.size()), 1, buffers, lengths, &info);
    } else {
        ok = CadesVerifyMessage(&para, 0, signature.data(), static_cast<DWORD>(signature.size()), &decoded, &info);
    }
    DWORD apiError = ok ? ERROR_SUCCESS : GetLastError();
    DWORD status = info ? info->dwStatus : 0xFFFFFFFF;
    std::string signer, signingTime, signatureTimeStampTime;
    if (info) {
        if (info->pSignerCert) signer = WideToUtf8(CertName(info->pSignerCert, CERT_NAME_SIMPLE_DISPLAY_TYPE));
        if (info->pSigningTime) signingTime = FileTimeIso(*info->pSigningTime);
        if (info->pSignatureTimeStampTime) signatureTimeStampTime = FileTimeIso(*info->pSignatureTimeStampTime);
    }
    if (decoded) CadesFreeBlob(decoded);
    if (info) CadesFreeVerificationInfo(info);
    const bool valid = ok && status == CADES_VERIFY_SUCCESS;
    std::ostringstream out; out << "{\"valid\":" << (valid ? "true" : "false")
        << ",\"apiSucceeded\":" << (ok ? "true" : "false")
        << ",\"requestedProfile\":" << JsonEscape(CadesProfileName(expectedProfile))
        << ",\"statusCode\":" << status
        << ",\"status\":" << JsonEscape(VerifyStatusName(status))
        << ",\"signerSubject\":" << JsonEscape(signer)
        << ",\"signingTime\":" << JsonEscape(signingTime)
        << ",\"signatureTimeStampTime\":" << JsonEscape(signatureTimeStampTime);
    if (!ok) out << ",\"win32Error\":" << JsonEscape(LastErrorHex(apiError));
    out << '}'; return out.str();
}

static std::string ProviderStatus() {
    DWORD count = 0; std::ostringstream out; out << '['; bool first = true;
    for (DWORD i = 0; ; ++i) {
        DWORD requiredBytes = 0, type = 0;
        SetLastError(ERROR_SUCCESS);
        BOOL sizeOk = CryptEnumProvidersW(i, nullptr, 0, &type, nullptr, &requiredBytes);
        if (!sizeOk && GetLastError() == ERROR_NO_MORE_ITEMS) break;
        if (requiredBytes == 0) break;
        const size_t charCount = (requiredBytes + sizeof(wchar_t) - 1) / sizeof(wchar_t);
        std::vector<wchar_t> name(charCount + 1, L'\0');
        DWORD capacityBytes = static_cast<DWORD>(name.size() * sizeof(wchar_t));
        if (!CryptEnumProvidersW(i, nullptr, 0, &type, name.data(), &capacityBytes)) {
            if (GetLastError() == ERROR_NO_MORE_ITEMS) break;
            continue;
        }
        std::wstring provider(name.data());
        if (provider.find(L"Crypto-Pro") != std::wstring::npos || provider.find(L"Крипто-Про") != std::wstring::npos || provider.find(L"CryptoPro") != std::wstring::npos) {
            if (!first) out << ','; first = false; out << JsonEscape(WideToUtf8(provider)); ++count;
        }
    }
    out << ']'; return "{\"cryptoProProviders\":" + out.str() + ",\"cryptoProProviderCount\":" + std::to_string(count) + '}';
}

static std::string Dispatch(const std::map<std::string, std::string>& req, std::string& action) {
    auto it = req.find("action"); if (it == req.end() || it->second.empty()) throw BridgeError("ACTION_REQUIRED", "Не указано поле action.");
    action = it->second;
    if (action == "status") {
        std::ostringstream o; o << "{\"bridgeVersion\":\"0.1.0\",\"architecture\":\"x64\",\"cadesDllLoaded\":"
            << (GetModuleHandleW(L"cades.dll") ? "true" : "false") << "," << ProviderStatus().substr(1); return o.str();
    }
    if (action == "list-certificates") return ListCertificates();
    if (action == "sign-detached") return Sign(req, true);
    if (action == "sign-attached") return Sign(req, false);
    if (action == "upgrade-signature") return UpgradeSignature(req);
    if (action == "verify-detached") return Verify(req, true);
    if (action == "verify-attached") return Verify(req, false);
    throw BridgeError("UNKNOWN_ACTION", "Неизвестная команда Bridge: " + action);
}

int main() {
    SetConsoleOutputCP(CP_UTF8); SetConsoleCP(CP_UTF8);
    constexpr size_t kMaxRequestBytes = 1024 * 1024;
    std::string line;
    line.reserve(4096);
    char ch = 0;
    while (std::cin.get(ch)) {
        if (ch == '\\n') break;
        if (line.size() >= kMaxRequestBytes) {
            std::cout << "{\"ok\":false,\"action\":\"unknown\",\"error\":{\"code\":\"REQUEST_TOO_LARGE\",\"message\":\"JSON request exceeds 1 MiB.\"}}" << std::endl;
            return 1;
        }
        if (ch != '\\r') line.push_back(ch);
    }
    if (!std::cin && line.empty()) return 2;
    std::string trailingLine;
    if (std::getline(std::cin, trailingLine)) {
        std::cout << "{\"ok\":false,\"action\":\"unknown\",\"error\":{\"code\":\"INVALID_JSON\",\"message\":\"Only one JSON line is accepted per process.\"}}" << std::endl;
        return 1;
    }
    std::string action = "unknown";
    try {
        auto req = FlatJsonParser(line).Parse();
        std::string data = Dispatch(req, action);
        std::cout << "{\"ok\":true,\"action\":" << JsonEscape(action) << ",\"data\":" << data << "}" << std::endl;
        return 0;
    } catch (const BridgeError& e) {
        std::cout << "{\"ok\":false,\"action\":" << JsonEscape(action) << ",\"error\":{\"code\":"
                  << JsonEscape(e.code) << ",\"message\":" << JsonEscape(e.what()) << "}}" << std::endl;
        return 1;
    } catch (const std::exception& e) {
        std::cout << "{\"ok\":false,\"action\":" << JsonEscape(action) << ",\"error\":{\"code\":\"UNHANDLED_ERROR\",\"message\":"
                  << JsonEscape(e.what()) << "}}" << std::endl;
        return 1;
    }
}
