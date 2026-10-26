using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Reflection;
using System.Runtime.InteropServices;
using System.Security.Cryptography;
using System.Text;
using System.Web.Script.Serialization;

namespace MedialogSign.CryptoProBridge
{
    internal static class Program
    {
        private const int CurrentUserStore = 2;
        private const int MaxAllowed = 2;
        private const int CadesBes = 1;
        private const int Base64ToBinary = 1;

        [STAThread]
        private static int Main()
        {
            var serializer = new JavaScriptSerializer { MaxJsonLength = int.MaxValue };
            try
            {
                string requestText = Console.In.ReadToEnd();
                if (String.IsNullOrWhiteSpace(requestText))
                    throw new ArgumentException("Ожидался JSON-запрос в stdin.");

                var request = serializer.Deserialize<Dictionary<string, object>>(requestText);
                if (request == null) throw new ArgumentException("Некорректный JSON-запрос.");
                string action = GetString(request, "action", true);
                object data;
                switch (action)
                {
                    case "status": data = GetStatus(); break;
                    case "list-certificates": data = ListCertificates(); break;
                    case "sign-detached": data = SignDetached(request); break;
                    case "sign-attached": data = SignAttached(request); break;
                    case "verify-detached": data = VerifyDetached(request); break;
                    default: throw new ArgumentException("Неизвестная операция: " + action);
                }
                Console.OutputEncoding = new UTF8Encoding(false);
                Console.WriteLine(serializer.Serialize(new Dictionary<string, object>
                {
                    ["ok"] = true, ["action"] = action, ["data"] = data
                }));
                return 0;
            }
            catch (Exception ex)
            {
                Console.OutputEncoding = new UTF8Encoding(false);
                Console.WriteLine(serializer.Serialize(new Dictionary<string, object>
                {
                    ["ok"] = false,
                    ["error"] = new Dictionary<string, object>
                    {
                        ["code"] = ClassifyError(ex),
                        ["message"] = SafeMessage(ex),
                        ["details"] = ex.GetType().FullName
                    }
                }));
                return 2;
            }
        }

        private static object GetStatus()
        {
            string version = null;
            bool storeAvailable = false;
            bool signedDataAvailable = false;
            string note = "Проверяется регистрация COM-компонентов CAdESCOM. Это не заменяет проверку лицензии и версии CSP.";
            Type storeType = Type.GetTypeFromProgID("CAdESCOM.Store", false);
            Type signedDataType = Type.GetTypeFromProgID("CAdESCOM.CadesSignedData", false);
            storeAvailable = storeType != null;
            signedDataAvailable = signedDataType != null;
            if (storeAvailable)
            {
                object about = null;
                try
                {
                    Type aboutType = Type.GetTypeFromProgID("CAdESCOM.About", false);
                    if (aboutType != null)
                    {
                        about = Activator.CreateInstance(aboutType);
                        version = TryString(about, "Version");
                    }
                }
                catch { }
                finally { ReleaseCom(about); }
            }
            return new Dictionary<string, object>
            {
                ["os"] = Environment.OSVersion.ToString(),
                ["processArchitecture"] = Environment.Is64BitProcess ? "x64" : "x86",
                ["cadesStoreComRegistered"] = storeAvailable,
                ["cadesSignedDataComRegistered"] = signedDataAvailable,
                ["cadesVersion"] = version,
                ["note"] = note
            };
        }

        private static object ListCertificates()
        {
            object store = null, certificates = null;
            var result = new List<Dictionary<string, object>>();
            try
            {
                store = CreateCom("CAdESCOM.Store");
                store.Open(CurrentUserStore, "My", MaxAllowed);
                certificates = store.Certificates;
                int count = Convert.ToInt32(certificates.Count);
                for (int i = 1; i <= count; i++)
                {
                    object cert = null;
                    try
                    {
                        cert = certificates.Item(i);
                        string thumbprint = NormalizeThumbprint(TryString(cert, "Thumbprint"));
                        string validFrom = TryString(cert, "ValidFromDate");
                        string validTo = TryString(cert, "ValidToDate");
                        bool hasPrivateKey = TryBool(cert, "HasPrivateKey");
                        DateTime now = DateTime.Now;
                        DateTime from, to;
                        bool dateRangeValid = DateTime.TryParse(validFrom, out from) && DateTime.TryParse(validTo, out to) && now >= from && now <= to;
                        result.Add(new Dictionary<string, object>
                        {
                            ["thumbprint"] = thumbprint,
                            ["subjectName"] = TryString(cert, "SubjectName"),
                            ["issuerName"] = TryString(cert, "IssuerName"),
                            ["serialNumber"] = TryString(cert, "SerialNumber"),
                            ["validFrom"] = validFrom,
                            ["validTo"] = validTo,
                            ["hasPrivateKey"] = hasPrivateKey,
                            ["dateRangeValid"] = dateRangeValid,
                            ["isReadyForSigning"] = dateRangeValid && hasPrivateKey
                        });
                    }
                    finally { ReleaseCom(cert); }
                }
                return new Dictionary<string, object> { ["store"] = "CurrentUser/My", ["count"] = result.Count, ["certificates"] = result };
            }
            finally
            {
                try { if (store != null) store.Close(); } catch { }
                ReleaseCom(certificates); ReleaseCom(store);
            }
        }

        private static object SignDetached(IDictionary<string, object> request) { return Sign(request, true); }
        private static object SignAttached(IDictionary<string, object> request) { return Sign(request, false); }

        private static object Sign(IDictionary<string, object> request, bool detached)
        {
            string inputPath = GetString(request, "inputPath", true);
            string outputPath = GetString(request, "outputPath", true);
            string thumbprint = NormalizeThumbprint(GetString(request, "thumbprint", true));
            if (!File.Exists(inputPath)) throw new FileNotFoundException("Исходный файл не найден.", inputPath);
            string fullOutput = Path.GetFullPath(outputPath);
            if (String.Equals(Path.GetFullPath(inputPath), fullOutput, StringComparison.OrdinalIgnoreCase))
                throw new ArgumentException("Нельзя перезаписывать исходный файл подписью.");
            byte[] bytes = File.ReadAllBytes(inputPath);
            object store = null, certificates = null, certificate = null, signer = null, signedData = null;
            try
            {
                store = CreateCom("CAdESCOM.Store");
                store.Open(CurrentUserStore, "My", MaxAllowed);
                certificates = store.Certificates;
                int count = Convert.ToInt32(certificates.Count);
                for (int i = 1; i <= count; i++)
                {
                    object candidate = null;
                    try
                    {
                        candidate = certificates.Item(i);
                        if (String.Equals(NormalizeThumbprint(TryString(candidate, "Thumbprint")), thumbprint, StringComparison.OrdinalIgnoreCase))
                        {
                            certificate = candidate; candidate = null; break;
                        }
                    }
                    finally { ReleaseCom(candidate); }
                }
                if (certificate == null) throw new InvalidOperationException("Сертификат с указанным отпечатком не найден в хранилище CurrentUser/My.");
                if (!TryBool(certificate, "HasPrivateKey")) throw new InvalidOperationException("Для выбранного сертификата не обнаружен доступный закрытый ключ.");

                signer = CreateCom("CAdESCOM.CPSigner");
                signer.Certificate = certificate;
                signedData = CreateCom("CAdESCOM.CadesSignedData");
                signedData.ContentEncoding = Base64ToBinary;
                signedData.Content = Convert.ToBase64String(bytes);
                string signature = Convert.ToString(signedData.SignCades(signer, CadesBes, detached));
                if (String.IsNullOrWhiteSpace(signature)) throw new CryptographicException("Криптопровайдер вернул пустую подпись.");

                string directory = Path.GetDirectoryName(fullOutput);
                if (!String.IsNullOrEmpty(directory)) Directory.CreateDirectory(directory);
                string tempPath = fullOutput + ".tmp-" + Guid.NewGuid().ToString("N");
                try
                {
                    File.WriteAllText(tempPath, signature, new UTF8Encoding(false));
                    if (File.Exists(fullOutput)) File.Delete(fullOutput);
                    File.Move(tempPath, fullOutput);
                }
                finally { try { if (File.Exists(tempPath)) File.Delete(tempPath); } catch { } }

                return new Dictionary<string, object>
                {
                    ["inputPath"] = Path.GetFullPath(inputPath), ["outputPath"] = fullOutput,
                    ["signatureType"] = detached ? "CAdES-BES-detached" : "CAdES-BES-attached",
                    ["certificateThumbprint"] = thumbprint, ["inputBytes"] = bytes.Length,
                    ["inputSha256"] = Sha256(bytes), ["outputBytes"] = new FileInfo(fullOutput).Length,
                    ["signedAtLocal"] = DateTimeOffset.Now.ToString("o")
                };
            }
            finally
            {
                try { if (store != null) store.Close(); } catch { }
                ReleaseCom(signedData); ReleaseCom(signer); ReleaseCom(certificate); ReleaseCom(certificates); ReleaseCom(store);
            }
        }

        private static object VerifyDetached(IDictionary<string, object> request)
        {
            string inputPath = GetString(request, "inputPath", true);
            string signaturePath = GetString(request, "signaturePath", true);
            if (!File.Exists(inputPath)) throw new FileNotFoundException("Исходный файл не найден.", inputPath);
            if (!File.Exists(signaturePath)) throw new FileNotFoundException("Файл подписи не найден.", signaturePath);
            byte[] bytes = File.ReadAllBytes(inputPath);
            string signature = File.ReadAllText(signaturePath, Encoding.UTF8).Trim();
            object signedData = null;
            try
            {
                signedData = CreateCom("CAdESCOM.CadesSignedData");
                signedData.ContentEncoding = Base64ToBinary;
                signedData.Content = Convert.ToBase64String(bytes);
                signedData.VerifyCades(signature, CadesBes, true);
                string signerThumbprint = null, signerSubject = null;
                object signers = null, signer = null, certificate = null;
                try
                {
                    signers = signedData.Signers;
                    if (Convert.ToInt32(signers.Count) > 0)
                    {
                        signer = signers.Item(1);
                        certificate = signer.Certificate;
                        signerThumbprint = NormalizeThumbprint(TryString(certificate, "Thumbprint"));
                        signerSubject = TryString(certificate, "SubjectName");
                    }
                }
                catch { }
                finally { ReleaseCom(certificate); ReleaseCom(signer); ReleaseCom(signers); }
                return new Dictionary<string, object>
                {
                    ["valid"] = true, ["inputPath"] = Path.GetFullPath(inputPath),
                    ["signaturePath"] = Path.GetFullPath(signaturePath), ["inputSha256"] = Sha256(bytes),
                    ["signerThumbprint"] = signerThumbprint, ["signerSubject"] = signerSubject,
                    ["verifiedAtLocal"] = DateTimeOffset.Now.ToString("o"),
                    ["note"] = "Криптографическая проверка завершилась успешно. Проверка доверия к цепочке сертификата и статуса отзыва выполняется отдельно."
                };
            }
            finally { ReleaseCom(signedData); }
        }

        private static object CreateCom(string progId)
        {
            Type type = Type.GetTypeFromProgID(progId, false);
            if (type == null) throw new InvalidOperationException("COM-компонент не зарегистрирован: " + progId + ". Проверьте установку совместимых компонентов КриптоПро/CAdES.");
            return Activator.CreateInstance(type);
        }

        private static string GetString(IDictionary<string, object> source, string key, bool required)
        {
            object value;
            if (!source.TryGetValue(key, out value) || value == null || String.IsNullOrWhiteSpace(Convert.ToString(value)))
            {
                if (required) throw new ArgumentException("Не задан обязательный параметр: " + key);
                return null;
            }
            return Convert.ToString(value).Trim();
        }

        private static string TryString(object instance, string property)
        {
            try { object value = instance.GetType().InvokeMember(property, BindingFlags.GetProperty, null, instance, null); return value == null ? null : Convert.ToString(value); }
            catch { return null; }
        }

        private static bool TryBool(object instance, string property)
        {
            try { object value = instance.GetType().InvokeMember(property, BindingFlags.GetProperty, null, instance, null); return Convert.ToBoolean(value); }
            catch { return false; }
        }

        private static string NormalizeThumbprint(string value)
        {
            return (value ?? String.Empty).Replace(" ", String.Empty).Replace("\u200e", String.Empty).Replace("\u200f", String.Empty).ToUpperInvariant();
        }

        private static string Sha256(byte[] bytes)
        {
            using (var sha = SHA256.Create()) return BitConverter.ToString(sha.ComputeHash(bytes)).Replace("-", String.Empty).ToLowerInvariant();
        }

        private static string ClassifyError(Exception ex)
        {
            if (ex is FileNotFoundException) return "FILE_NOT_FOUND";
            if (ex is ArgumentException) return "INVALID_REQUEST";
            if (ex is UnauthorizedAccessException) return "ACCESS_DENIED";
            if (ex is CryptographicException) return "CRYPTOGRAPHIC_ERROR";
            if (ex is COMException) return "COM_ERROR";
            if (ex is InvalidOperationException && ex.Message.IndexOf("не зарегистрирован", StringComparison.OrdinalIgnoreCase) >= 0) return "CRYPTOPRO_COMPONENT_MISSING";
            return "OPERATION_FAILED";
        }

        private static string SafeMessage(Exception ex)
        {
            if (ex is COMException) return "Операция КриптоПро завершилась ошибкой. Проверьте сертификат, доступ к ключу, CSP и настройки рабочего места.";
            return ex.Message;
        }

        private static void ReleaseCom(object value)
        {
            if (value != null && Marshal.IsComObject(value))
            {
                try { Marshal.FinalReleaseComObject(value); } catch { }
            }
        }
    }
}
