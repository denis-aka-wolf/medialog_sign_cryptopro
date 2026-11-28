/*
 * Copyright(C) 2004 Проект ИОК
 *
 * Этот файл содержит информацию, являющуюся
 * собственностью компании Крипто Про.
 *
 * Любая часть этого файла не может быть скопирована,
 * исправлена, переведена на другие языки,
 * локализована или модифицирована любым способом,
 * откомпилирована, передана по сети с или на
 * любую компьютерную систему без предварительного
 * заключения соглашения с компанией Крипто Про.
 */

/*!
 * \file $RCSfile$
 * \version $Revision: 194763 $
 * \date $Date:: 2019-06-17 16:39:27 +0300#$
 * \author $Author: sdenis $
 *
 * \brief Классы и структуры относящиеся к CMS (Cryptographic Message Syntax).
 */

#ifndef _CMS_H_INCLUDED
#define _CMS_H_INCLUDED

#include <cplib/Blob.h>
#include <asn1/Types.h>

#if !defined CPASN1_DLL_DEFINES
#   define CPASN1_DLL_DEFINES
#   if defined _WIN32 && !defined CRYPTCP && !defined CPASN1_STATIC
#	ifdef CPASN1_DLL
#	    define CPASN1_CLASS __declspec(dllexport)
#	    define CPASN1_API __declspec(dllexport)
#	    define CPASN1_DATA __declspec(dllexport)
#	    define CPASN1_EXTERN_TEMPLATE
#	else // defined CPASN1_DLL
#	    define CPASN1_CLASS __declspec(dllimport)
#	    define CPASN1_API __declspec(dllimport)
#	    define CPASN1_DATA __declspec(dllimport)
#	    define CPASN1_EXTERN_TEMPLATE extern
#	    ifndef CP_IGNORE_PRAGMA_MANIFEST
#	        include "asn1_assembly.h"
#	        ifdef _WIN64
#	            pragma comment(linker,"/manifestdependency:\"type='win32' " \
 	            "name='" ASN1_ASSEMBLY_NAME_X64 "' " \
 	            "version='" ASN1_ASSEMBLY_VERSION_x64 "' " \
 	            "processorArchitecture='amd64' " \
 	            "language='*' " \
 	            "publicKeyToken='" ASN1_ASSEMBLY_PUBLICKEYTOKEN_x64 "'\"")
#	        else
#	            pragma comment(linker,"/manifestdependency:\"type='win32' " \
 	            "name='" ASN1_ASSEMBLY_NAME_X86 "' " \
 	            "version='" ASN1_ASSEMBLY_VERSION_X86 "' " \
 	            "processorArchitecture='x86' " \
 	            "language='*' " \
 	            "publicKeyToken='" ASN1_ASSEMBLY_PUBLICKEYTOKEN_X86 "'\"")
# 	        endif
#	    endif
#	endif // !defined CPASN1_DLL
#   else // defined _WIN32 && !defined CRYPTCP && !defined CPASN1_STATIC
#	define CPASN1_CLASS
#	define CPASN1_API
#	define CPASN1_DATA
#	define CPASN1_EXTERN_TEMPLATE
#       define NO_EXPIMP_CDLLLIST_ITERATORS
#   endif // !defined _WIN32 || defined CRYPTCP || defined CPASN1_STATIC
#endif // !defined CPASN1_DLL_DEFINES

#ifndef UNIX
#pragma warning(push)
#pragma warning(disable: 4251)
#endif

namespace CryptoPro
{

namespace ASN1
{

/**
 * \class CContentInfo CMS.h <asn1/CMS.h>
 * \brief ASN.1 структура ContentInfo ( RFC 3369 раздел 3 )
 * 
 * \remark Следует учитывать, что вкладываемое в ContentInfo содержимое
 * должно соответствовать заданному типу. Например, в случае типа содежимого
 * data (szOID_RSA_data), содежимое должно быть строкой октетов (OCTET STRING)
 */
class CPASN1_CLASS CContentInfo
{
public:
    /// Создает пустой объект
    CContentInfo();
    /**
     * \brief Создает и инициализирует объект
     * \param contentType [in] OID типа содержимого
     * \param content [in] содержимое
     */
    CContentInfo( const char * contentType,
	const CBlob& content = CBlob());
    /// Уничтожает объект
    ~CContentInfo();

    /**
     * \brief Создает копию заданного объекта.
     *
     * \param src [in] объект, копия которого создается
     */
    CContentInfo( const CContentInfo& src);
    /**
     * \brief Копирует заданный объект в текущий.
     *
     * \param src [in] объект, который копируется в текущий
     * \return Ссылка на текущий объект.
     */
    CContentInfo& operator=( const CContentInfo& src);

    /**
     * \brief Кодирует объект в формате ASN.1 DER и возвращает
     * получившуюся двоичную последовательность
     * \sa decode()
     */
    CBlob encode() const;
    /**
     * \brief Инициализирует объект из заданной закодированной двоичной последовательности
     * \sa encode()
     */
    void decode( const CBlob& encoded);

    //get
    /// возвращает OID типа содержимого
    const char * get_contentType() const;
    /// возвращает закодированное двоичное представление содержимого
    const CBlob& get_content() const;
    //set
    /// устанавливает OID типа содержимого
    void put_contentType( const char * contentType);
    /// устанавливает закодированное двоичное представление содержимого
    void put_content( const CBlob& content);
private:
    CStringProxy contentType_;
    CBlob content_;
};

/**
 * \class CSignerInfo CMS.h <asn1/CMS.h>
 * \brief ASN.1 струкура SignerInfo (RFC 3369 5.1)
 *
 * Структура SignerInfo содержит данные подписчика подписанного
 * CMS сообщения.
 */
class CPASN1_CLASS CSignerInfo
{
public:
    /// Создает пустой объект
    CSignerInfo();
    /// Уничтожает объект
    ~CSignerInfo();

    /**
     * \brief Создает копию заданного объекта.
     *
     * \param src [in] объект, копия которого создается
     */
    CSignerInfo( const CSignerInfo& src);
    /**
     * \brief Копирует заданный объект в текущий.
     *
     * \param src [in] объект, который копируется в текущий
     * \return Ссылка на текущий объект.
     */
    CSignerInfo& operator=( const CSignerInfo& src);

    // get
    /// возвращает версию объекта
    unsigned get_version() const;
    /// возвращает закодированное имя (Name) издателя сертификата подписчика
    const CBlob& get_issuer() const;
    /// возвращает серийный номер сертификата подписчика
    const CBigInteger& get_serialNumber() const;
    /// возвращает алгоритм подписи
    const CAlgorithmIdentifier& get_signatureAlgorithm() const;
    /// возвращает алгоритм хэша
    const CAlgorithmIdentifier& get_digestAlgorithm() const;
    /// возвращает двоичное значение подписи
    const CBlob& get_signature() const;
    // set
    /// устанавливает версию объекта
    void put_version( unsigned version);
    /// устанавливает закодированное имя (Name) издателя сертификата подписчика
    void put_issuer( const CBlob& issuer);
    /// устанавливает серийный номер сертификата подписчика
    void put_serialNumber( const CBigInteger& serialNumber);
    /// устанавливает алгоритм подписи
    void put_signatureAlgorithm(
	const CAlgorithmIdentifier& signatureAlgorithm);
    /// устанавливает алгоритм хэша
    void put_digestAlgorithm(
	const CAlgorithmIdentifier& digestAlgorithm);
    /// устанавливает двоичное значение подписи
    void put_signature( const CBlob& signature);
private:
    unsigned version_;
    CBlob issuer_;
    CBigInteger serialNumber_;
    CAlgorithmIdentifier signatureAlgorithm_;
    CAlgorithmIdentifier digestAlgorithm_;
    CBlob signature_;
};

/// Проверяет структуры SignerInfo на равенство
CPASN1_API bool operator==( const CSignerInfo& lhs, const CSignerInfo& rhs);
/// Проверяет структуры SignerInfo на неравенство
CPASN1_API bool operator!=( const CSignerInfo& lhs, const CSignerInfo& rhs);

// VS2008 bug/feature: Экспорт инстанцированных шаблонов вложенных классов
// (здесь - итераторов) должен предварять экспорт инстанцированного шаблона
// внешнего класса (здесь - CDllList<>), иначе из DLL не будут экспортированы
// методы вложенных классов.
EXPIMP_CDLLLIST_ITERATORS(CSignerInfo, CPASN1_EXTERN_TEMPLATE, CPASN1_CLASS);

/**
 * \class CSignerInfoList CMS.h <asn1/CMS.h>
 * \brief Список объектов CSignerInfo
 * \sa CSignerInfo, CDllList
 */
class CSignerInfoList: public CDllList<CSignerInfo>
{
};

} // namespace ASN1

} // namespace CryptoPro

#ifndef UNIX
#pragma warning(pop)
#endif

#endif // _CMS_H_INCLUDED
