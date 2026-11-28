/*
 * Copyright(C) 2003 Проект ИОК
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
 * \brief Классы и структуры для ASN.1 типов.
 */

#ifndef _ASN1TYPES_H
#define _ASN1TYPES_H

#include <string>
#if !defined UNIX
#   include <windows.h>
#endif	/* !UNIX */
#include <cplib/Blob.h>
#include <cplib/DateTime.h>
#include <asn1/Attribute.h>

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
 	            "version='" ASN1_ASSEMBLY_VERSION_X64 "' " \
 	            "processorArchitecture='amd64' " \
 	            "language='*' " \
 	            "publicKeyToken='" ASN1_ASSEMBLY_PUBLICKEYTOKEN_X64 "'\"")
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

#pragma warning(push)
#pragma warning(disable: 4251)

namespace CryptoPro
{

namespace ASN1
{

class CReasonFlags;

/**
 * \brief Проверяет, является ли строка OID'ом.
 *
 * \param str [in] проверяемая строка
 * \return В случае если строка является OID'ом возвращается
 * true, в противном случае - false.
 */
CPASN1_API bool isOID( const char * str);

/**
 * \class CBigInteger Types.h <asn1/Types.h>
 * \brief Большое целое беззнаковое число.
 *
 * Класс предназначен для хранения больших целых беззнаковых чисел, для
 * случая, когда размеров стандартных типов не хватает (например, для
 * хранения серийного номера)
 *
 * \sa CBlob
 */
class CPASN1_CLASS CBigInteger : public CBlob
{
public:
    /// Создает пустой объект
    CBigInteger();
    /**
     * \brief Создает и инициализирует число
     *
     * \param ptr [in] указатель на начало данных помещаемых в число
     * \param length [in] длина данных в байтах
     * \remarks При инициализации объект отводит память под хранимые
     * данные и копирует их туда из указанного в агрументе ptr места.
     */
    CBigInteger(const unsigned char *ptr, unsigned long length );
    /**
     * \brief Создает объект
     *
     * \param length [in] длина числа в байтах
     * \remarks При инициализации объект отводит указанное количество памяти
     * под число.
     */
    CBigInteger( unsigned long length );
    /**
     * \brief Создает копию заданного объекта.
     *
     * \param src [in] объект, копия которого создается
     */
    CBigInteger( const CBigInteger &src );
    /**
     * \brief Копирует заданный объект в текущий.
     *
     * \param src [in] объект, который копируется в текущий
     * \return Ссылка на текущий объект.
     */
    CBigInteger& operator=( const CBigInteger& src);
    /// Уничтожает объект
    ~CBigInteger();

    /**
     * \brief Кодирует число в ASN.1 DER представление
     *
     * \return Объект CBlob содержащий двоичную последовательность.
     */
    CBlob encode() const;
    /**
     * \brief Декодирует число из ASN.1 DER представления
     *
     * \param encoded [in] Объект CBlob содержащий двоичную последовательность.
     */
    void decode( const CBlob& encoded);

    /**
     * \brief Увеличивает значение числа на еденицу
     *
     * \param start [in] номер байта, начиная с которого проводить
     * величения (байты с номерами от 0 до start-1 всегда остаются
     * неизменными)
     */
    void increment( int start = 0);
    /**
    * \brief Добавляет к числу другое число
    * 
    * \return Если возникло переполнание, возвращает значение 
    * непоместившегося старшего байта.
    * \remark Числа должны быть одинаковой длины
    */
    unsigned char add( const CBigInteger& v);
    /// Префиксный оператор инкремента 
    CBigInteger& operator++();
    /// Постфиксный оператор инкремента
    CBigInteger operator++(int);
    /// Возвращает значение числа по модулю
    CBigInteger abs() const;

    CPASN1_API friend bool operator==( const CBigInteger& lhs, const CBigInteger& rhs);
    CPASN1_API friend bool operator!=( const CBigInteger& lhs, const CBigInteger& rhs);
    CPASN1_API friend bool operator<( const CBigInteger& lhs, const CBigInteger& rhs);
    CPASN1_API friend bool operator>( const CBigInteger& lhs, const CBigInteger& rhs);
    CPASN1_API friend bool operator<=( const CBigInteger& lhs, const CBigInteger& rhs);
    CPASN1_API friend bool operator>=( const CBigInteger& lhs, const CBigInteger& rhs);
private:
    int compare( const CBigInteger& rhs) const;
};

/// Проверка на равенство
CPASN1_API bool operator==( const CBigInteger& lhs, const CBigInteger& rhs);
/// Проверка на неравенство
CPASN1_API bool operator!=( const CBigInteger& lhs, const CBigInteger& rhs);
/// Оператор "меньше"
CPASN1_API bool operator<( const CBigInteger& lhs, const CBigInteger& rhs);
/// Оператор "больше"
CPASN1_API bool operator>( const CBigInteger& lhs, const CBigInteger& rhs);
/// Оператор "меньше или равно"
CPASN1_API bool operator<=( const CBigInteger& lhs, const CBigInteger& rhs);
/// Оператор "больше или равно"
CPASN1_API bool operator>=( const CBigInteger& lhs, const CBigInteger& rhs);

/**
 * \class CAlgorithmIdentifier Types.h <asn1/Types.h>
 * \brief Идентификатор алгоритма (RFC 3280, раздел 4.1.1.2)
 *
 * Идентификатор состоит из двух полей - OID алгоритма и
 * параметры. Поле, содержащее параметры, опционально и его
 * содержимое зависит от типа алгоритма.
 */
class CPASN1_CLASS CAlgorithmIdentifier
{
public:
    /// Создает пустой объект
    CAlgorithmIdentifier();
    /**
     * \brief Создает и инициализирует объект
     * \param algorithm [in] OID алгоритма
     */
    CAlgorithmIdentifier( const char * algorithm);
    /**
     * \brief Создает копию заданного объекта.
     *
     * \param src [in] объект, копия которого создается
     */
    CAlgorithmIdentifier( const CAlgorithmIdentifier &src );
    /**
     * \brief Копирует заданный объект в текущий.
     *
     * \param src [in] объект, который копируется в текущий
     * \return Ссылка на текущий объект.
     */
    CAlgorithmIdentifier &operator=( const CAlgorithmIdentifier &src );
    /**
     * \brief Копирует заданный объект в текущий.
     *
     * \param src [in] объект, который копируется в текущий
     */
    void assign( const CAlgorithmIdentifier &src );
    /// Уничтожает объект
    virtual ~CAlgorithmIdentifier();
    /**
    * \brief Операция обмена объектов.
    *
    * \param src [in] объект для обмена
    * \remarks Функция не генерирует исключений.
    */
    void swap( CAlgorithmIdentifier &src ) throw();

    /// Возвращает OID алгоритма
    const char * get_algorithm() const;
    /// возвращает закодированные параметры алгоритма (возможно пустые)
    const CBlob& get_parameters() const;
    /// устанавливает OID алгоритма
    virtual void put_algorithm( const char * algorithm);
    /// устанавливает параметры алгоритма (возможно пустые)
    void put_parameters( const CBlob& parameters);
    /// проверка идентификаторов алгоритмов на равенство
    bool operator==( const CAlgorithmIdentifier &right ) const;
    /// проверка идентификаторов алгоритмов на неравенство
    bool operator!= ( const CAlgorithmIdentifier &right ) const;
    /**
     * \brief Кодирует идентификатор алгоритма в формате ASN.1 DER и возвращает
     * получившуюся двоичную последовательность
     * \sa decode()
     */
    CBlob encode() const;
    /**
     * \brief Инициализирует объект из заданной закодированной двоичной последовательности
     * \sa encode()
     */
    void decode( const CBlob& encoded);
private:
    CStringProxy algorithm_;
    CBlob parameters_;
};

class CGeneralNameImpl;
/**
 * \class CGeneralName Types.h <asn1/Types.h>
 * \brief Структура ASN.1 GeneralName (RFC 3280, раздел 4.2.1.7)
 *
 * Структура GeneralName может содержать одно из нескольких типов значений.
 * Для получения значения этой структуры предоставляются функции get_() для, 
 * каждого из этих типов, возвращающие указатели. Если указатель, возвращенный
 * функцией, равен нулю, то в структуре содержится значение типа, отличного от того,
 * который возвращала данная функция. Узнать тип значения, зранящегося в структуре
 * можно с помощью функции get_type()
 */
class CPASN1_CLASS CGeneralName
{
public:
    /// типы возможных значений (RFC 3280, раздел 4.2.1.7)
    enum Type
    {
//	t_otherName = 1,
	t_rfc822Name = 2,
	t_dNSName = 3,
//	t_x400Address = 4,
	t_directoryName = 5,
//	t_ediPartyName = 6,
	t_uniformResourceIdentifier = 7,
	t_iPAddress = 8,
	t_registeredID = 9
    };
public:
    /// Создает пустой объект
    CGeneralName();
    /// Уничтожает объект
    ~CGeneralName();

    /**
     * \brief Создает копию заданного объекта.
     *
     * \param src [in] объект, копия которого создается
     */
    CGeneralName( const CGeneralName& src);
    /**
     * \brief Копирует заданный объект в текущий.
     *
     * \param src [in] объект, который копируется в текущий
     * \return Ссылка на текущий объект.
     */
    CGeneralName& operator=( const CGeneralName& src);

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

    // get
    /// Возвращает тип значения
    Type get_type() const;
    /// Возвращает rfc822Name
    const wchar_t *get_rfc822Name() const;
    /// Возвращает dNSName
    const wchar_t *get_dNSName() const;
    /// Возвращает directoryName
    const CBlob* get_directoryName() const;
    /// Возвращает uniformResourceIdentifier
    const wchar_t *get_uniformResourceIdentifier() const;
    /// Возвращает iPAddress
    const CBlob* get_iPAddress() const;
    /// Возвращает registeredID
    const wchar_t *get_registeredID() const;
    // set
    /// Устанавливает rfc822Name
    void put_rfc822Name( const wchar_t * rfc822Name);
    /// Устанавливает dNSName
    void put_dNSName( const wchar_t * dNSName);
    /// Устанавливает directoryName
    void put_directoryName( const CBlob& directoryName);
    /// Устанавливает uniformResourceIdentifier
    void put_uniformResourceIdentifier( 
	const wchar_t * uniformResourceIdentifier);
    /// Устанавливает iPAddress
    void put_iPAddress( const CBlob& iPAddress);
    /// Устанавливает registeredID
    void put_registeredID( const wchar_t * registeredID);
    /// Возвращает строковое представление объекта
    CWStringProxy toString() const;
private:
    void clear();
    CGeneralNameImpl* pImpl_;
};

/// Проверка на равенство структур GeneralName
CPASN1_API bool operator==( const CGeneralName& lhs, const CGeneralName& rhs);
/// Проверка на неравенство структур GeneralName
CPASN1_API bool operator!=( const CGeneralName& lhs, const CGeneralName& rhs);

// VS2008 bug/feature: Экспорт инстанцированных шаблонов вложенных классов
// (здесь - итераторов) должен предварять экспорт инстанцированного шаблона
// внешнего класса (здесь - CDllList<>), иначе из DLL не будут экспортированы
// методы вложенных классов.
EXPIMP_CDLLLIST_ITERATORS(CGeneralName, CPASN1_EXTERN_TEMPLATE, CPASN1_CLASS);

/**
 * \class CGeneralNames Types.h <asn1/Types.h>
 * \brief Список структур GeneralName
 * \sa CGeneralName, CDllList
 */
class CPASN1_CLASS CGeneralNames: public CDllList<CGeneralName>
{
#ifdef _WIN32
    friend CPASN1_API bool operator==( const CGeneralNames& lhs, const CGeneralNames& rhs);
#endif
};
#ifdef _WIN32
/// Проверка на равенство списка структур GeneralName
CPASN1_API bool operator==( const CGeneralNames& lhs, const CGeneralNames& rhs);
/// Проверка на неравенство списка структур GeneralName
CPASN1_API bool operator!=( const CGeneralNames& lhs, const CGeneralNames& rhs);
#endif 

/**
 * \class CPolicyInformation Types.h <asn1/Types.h>
 * \brief ASN.1 структура PolicyInformation (RFC 3280)
 *
 * Структура содержит информацию о политике
 * \sa CPolicyInformationList
 */
class CPASN1_CLASS CPolicyInformation
{
public:
     /// Создает пустой объект
    CPolicyInformation();
    /**
     * \brief Создает и инициализирует объект
     * \param policyIdentifier [in] поле policyIdentifier (OID)
     */
    CPolicyInformation( const char * policyIdentifier);
    /// Уничтожает объект
    ~CPolicyInformation();

    /**
     * \brief Создает копию заданного объекта.
     *
     * \param src [in] объект, копия которого создается
     */
    CPolicyInformation( const CPolicyInformation& src);
    /**
     * \brief Копирует заданный объект в текущий.
     *
     * \param src [in] объект, который копируется в текущий
     * \return Ссылка на текущий объект.
     */
    CPolicyInformation& operator=( const CPolicyInformation& src);

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
    /// возвращает поле policyIdentifier
    const char * get_policyIdentifier() const;
    //set
    /// устанавливает поле policyIdentifier
    void put_policyIdentifier( const char * policyIdentifier);
private:
    CStringProxy policyIdentifier_;
};

// VS2008 bug/feature: Экспорт инстанцированных шаблонов вложенных классов
// (здесь - итераторов) должен предварять экспорт инстанцированного шаблона
// внешнего класса (здесь - CDllList<>), иначе из DLL не будут экспортированы
// методы вложенных классов.
EXPIMP_CDLLLIST_ITERATORS(CPolicyInformation, CPASN1_EXTERN_TEMPLATE, CPASN1_CLASS);

/**
 * \class CPolicyInformationList Types.h <asn1/Types.h>
 * \brief Список объектов СPolicyInformation.
 *
 * \sa CPolicyInformation, CDllList
 */
class CPASN1_CLASS CPolicyInformationList: public CDllList<CPolicyInformation>
{
};

/**
 * \class CIssuerSerial Types.h <asn1/Types.h>
 * \brief ASN.1 структура IssuerSerial (RFC 2634, раздел 5.4.1).
 *
 * Структура содержит в себе имя издателя (поле issuer) и серийный
 * номер (поле serialNumber).
 * \sa CESSCertID, COtherCertID
 */
class CPASN1_CLASS CIssuerSerial
{
public:
    /// Создает пустой объект
    CIssuerSerial();
    /**
     * \brief Создает и инициализирует объект
     * \param issuer [in] поле issuer
     * \param serialNumber [in] поле serialNumber
     */
    CIssuerSerial(
	const CGeneralNames& issuer,
	const CBigInteger& serialNumber);
    /// Уничтожает объект
    ~CIssuerSerial();

    /**
     * \brief Создает копию заданного объекта.
     *
     * \param src [in] объект, копия которого создается
     */
    CIssuerSerial( const CIssuerSerial& src);
    /**
     * \brief Копирует заданный объект в текущий.
     *
     * \param src [in] объект, который копируется в текущий
     * \return Ссылка на текущий объект.
     */
    CIssuerSerial& operator=( const CIssuerSerial& src);

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
    /// возвращает поле issuer
    const CGeneralNames& get_issuer() const;
    /// возвращает поле serialNumber
    const CBigInteger& get_serialNumber() const;
    //set
    /// устанавливает поле issuer
    void put_issuer( const CGeneralNames& issuer);
    /// устанавливает поле serialNumber
    void put_serialNumber( const CBigInteger& serialNumber);
private:
    CGeneralNames issuer_;
    CBigInteger serialNumber_;
};

/// проверяет объекты на равенство
CPASN1_API bool operator==( const CIssuerSerial& lhs, const CIssuerSerial& rhs);
/// проверяет объекты на неравенство
CPASN1_API bool operator!=( const CIssuerSerial& lhs, const CIssuerSerial& rhs);

class CESSCertIDImpl;
/**
 * \class CESSCertID Types.h <asn1/Types.h>
 * \brief ASN.1 структура ESSCertID (RFC 2634, раздел 5.4.1).
 *
 * Структура служит идентификатором сертификата. Её обязательное
 * поле (certHash) содержит SHA1 хэш всего закодированного сертификата.
 * Опциональное поле issuerSerial может содержат также имя издателя
 * и серийный номер сертификата.
 * \sa CIssuerSerial, COtherCertID, CESSCertIDList
 */
class CPASN1_CLASS CESSCertID
{
public:
    /// Создает пустой объект
    CESSCertID();
    /**
     * \brief Создает и инициализирует объект
     * \param certHash [in] поле certHash
     */
    CESSCertID( const CBlob& certHash);
    /**
     * \brief Создает копию заданного объекта.
     *
     * \param src [in] объект, копия которого создается
     */
    CESSCertID( const CESSCertID& src);
    /**
     * \brief Копирует заданный объект в текущий.
     *
     * \param src [in] объект, который копируется в текущий
     * \return Ссылка на текущий объект.
     */
    CESSCertID& operator=( const CESSCertID& src);

    /// Уничтожает объект
    ~CESSCertID();

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

    // get
    /// возвращает поле certHash
    const CBlob& get_certHash() const;
    /// возвращает опциональное поле issuerSerial
    const CIssuerSerial* get_issuerSerial() const;
    // set
    /// устанавливает поле certHash
    void put_certHash( const CBlob& certHash);
    /// устанавливает опциональное поле issuerSerial
    void put_issuerSerial( const CIssuerSerial* issuerSerial);
private:
    CESSCertIDImpl *pImpl_;
};

/// проверяет объекты на равенство
CPASN1_API bool operator==( const CESSCertID& lhs, const CESSCertID& rhs);
/// проверяет объекты на неравенство
CPASN1_API bool operator!=( const CESSCertID& lhs, const CESSCertID& rhs);

// VS2008 bug/feature: Экспорт инстанцированных шаблонов вложенных классов
// (здесь - итераторов) должен предварять экспорт инстанцированного шаблона
// внешнего класса (здесь - CDllList<>), иначе из DLL не будут экспортированы
// методы вложенных классов.
EXPIMP_CDLLLIST_ITERATORS(CESSCertID, CPASN1_EXTERN_TEMPLATE, CPASN1_CLASS);

/**
 * \brief Список объектов CESSCertID.
 *
 * \sa CESSCertID, CDllList
 */
class CPASN1_CLASS CESSCertIDList: public CDllList<CESSCertID>
{
};

class CESSCertIDv2Impl;
/**
 * \class CESSCertIDv2 Types.h <asn1/Types.h>
 * \brief ASN.1 структура ESSCertID (RFC 5035, раздел 4).
 *
 * Структура служит идентификатором сертификата. Её обязательное
 * поле (certHash) содержит хэш всего закодированного сертификата.
 * Поле hashAlgorithm содержит алгоритм хэширования. Если
 * это поле не задавать, подразумевается алгоритм хэша SHA 256.
 * Опциональное поле issuerSerial может содержат также имя издателя
 * и серийный номер сертификата.
 * \sa CIssuerSerial, COtherCertID, CCertID, CESSCertIDv2List
 */
class CPASN1_CLASS CESSCertIDv2
{
public:
    /// Создает пустой объект
    CESSCertIDv2();
    /**
     * \brief Создает и инициализирует объект (алгоритм хэша по умолчанию SHA 256)
     * \param certHash [in] поле certHash
     */
    CESSCertIDv2( const CBlob& certHash);
    /**
     * \brief Создает и инициализирует объект
     * \param certHash [in] поле certHash
     * \param hashAlgorithm [in] поле hashAlgorithm
     */
    CESSCertIDv2( const CBlob& certHash, const CAlgorithmIdentifier& hashAlgorithm );
    /**
     * \brief Создает копию заданного объекта.
     *
     * \param src [in] объект, копия которого создается
     */
    CESSCertIDv2( const CESSCertIDv2& src);
    /**
     * \brief Копирует заданный объект в текущий.
     *
     * \param src [in] объект, который копируется в текущий
     * \return Ссылка на текущий объект.
     */
    CESSCertIDv2& operator=( const CESSCertIDv2& src);

    /// Уничтожает объект
    ~CESSCertIDv2();

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

    // get
    /// возвращает поле hashAlgorithm
    const CAlgorithmIdentifier& get_hashAlgorithm() const;
    /// возвращает поле certHash
    const CBlob& get_certHash() const;
    /// возвращает опциональное поле issuerSerial
    const CIssuerSerial* get_issuerSerial() const;
    // set
    /// устанавливает поле hashAlgorithm
    void put_hashAlgorithm( const CAlgorithmIdentifier& hashAlgorithm);
    /// устанавливает поле certHash
    void put_certHash( const CBlob& certHash);
    /// устанавливает опциональное поле issuerSerial
    void put_issuerSerial( const CIssuerSerial* issuerSerial);
private:
    CESSCertIDv2Impl *pImpl_;
};

/// проверяет объекты на равенство
CPASN1_API bool operator==( const CESSCertIDv2& lhs, const CESSCertIDv2& rhs);
/// проверяет объекты на неравенство
CPASN1_API bool operator!=( const CESSCertIDv2& lhs, const CESSCertIDv2& rhs);

// VS2008 bug/feature: Экспорт инстанцированных шаблонов вложенных классов
// (здесь - итераторов) должен предварять экспорт инстанцированного шаблона
// внешнего класса (здесь - CDllList<>), иначе из DLL не будут экспортированы
// методы вложенных классов.
EXPIMP_CDLLLIST_ITERATORS(CESSCertIDv2, CPASN1_EXTERN_TEMPLATE, CPASN1_CLASS);

/**
 * \brief Список объектов CESSCertIDv2.
 *
 * \sa CESSCertIDv2, CDllList
 */
class CPASN1_CLASS CESSCertIDv2List: public CDllList<CESSCertIDv2>
{
};

/**
 * \class COtherHashAlgAndValue Types.h <asn1/Types.h>
 * \brief ASN.1 структура OtherHashAlgAndValue (RFC 3126, раздел 3.8.2).
 *
 * Алгоритм хэша (поле hashAlgorithm) и его значение (поле hashValue)
 * \sa COtherCertID, COtherHash
 */
class CPASN1_CLASS COtherHashAlgAndValue
{
public:
    /// Создает пустой объект
    COtherHashAlgAndValue();
    /**
     * \brief Создает и инициализирует объект
     * \param hashValue [in] поле hashValue
     * \param hashAlgorithm [in] поле hashAlgorithm
     */
    COtherHashAlgAndValue(
	const CBlob& hashValue,
	const CAlgorithmIdentifier& hashAlgorithm);	
    /// Уничтожает объект
    ~COtherHashAlgAndValue();

    /**
     * \brief Создает копию заданного объекта.
     *
     * \param src [in] объект, копия которого создается
     */
    COtherHashAlgAndValue(
	const COtherHashAlgAndValue& src);
    /**
     * \brief Копирует заданный объект в текущий.
     *
     * \param src [in] объект, который копируется в текущий
     * \return Ссылка на текущий объект.
     */
    COtherHashAlgAndValue& operator=( 
	const COtherHashAlgAndValue& src);

    /**
    * \brief Сравнивает заданный объект с текущим по полю hashValue
    *
    * \param value [in] объект, который сравнивается с текущим
    * \return Результат сравнения.
    */
    bool compare_hashValue(
        const COtherHashAlgAndValue& value) const;

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
    /// возвращает поле hashAlgorithm
    const CAlgorithmIdentifier& get_hashAlgorithm() const;
    /// возвращает поле hashValue
    const CBlob& get_hashValue() const;
    //set
    /// устанавливает поле hashAlgorithm
    void put_hashAlgorithm( 
	const CAlgorithmIdentifier& hashAlgorithm);
    /// устанавливает поле hashValue
    void put_hashValue( const CBlob& hashValue);
private:
    CAlgorithmIdentifier hashAlgorithm_;
    CBlob hashValue_;
};

/// проверяет объекты на равенство
CPASN1_API bool operator==( 
    const COtherHashAlgAndValue& lhs, const COtherHashAlgAndValue& rhs);
/// проверяет объекты на неравенство
CPASN1_API bool operator!=(
    const COtherHashAlgAndValue& lhs, const COtherHashAlgAndValue& rhs);

class COtherHashImpl;

/**
 * \class COtherHash Types.h <asn1/Types.h>
 * \brief ASN.1 структура OtherHash (RFC 3126, раздел 3.8.2).
 *
 * Может содержать либо SHA1 хэш (тип sha1Hash), либо
 * произвольных хэш (тип otherHash).
 * \sa COtherCertID, COtherHashAlgAndValue
 */
class CPASN1_CLASS COtherHash
{
public:
    /// тип содержимого
    enum Type
    {
	/// SHA1 хэш
	t_sha1Hash = 1,
	/// произвольный хэш
	t_otherHash = 2
    };
public:
    /// Создает пустой объект
    COtherHash();
    /**
     * \brief Создает и инициализирует объект
     * \param sha1Hash [in] SHA1 хэш
     */
    explicit COtherHash( const CBlob& sha1Hash);
    /**
     * \brief Создает и инициализирует объект
     * \param otherHash [in] произвольный хэш
     */
    explicit COtherHash( const COtherHashAlgAndValue& otherHash);
    /// Уничтожает объект
    virtual ~COtherHash();
    /**
     * \brief Создает копию заданного объекта.
     * \param src [in] объект, копия которого создается
     */
    COtherHash( const COtherHash& src);
    /**
     * \brief Копирует заданный объект в текущий.
     * \param src [in] объект, который копируется в текущий
     * \return Ссылка на текущий объект.
     */
    COtherHash& operator=( const COtherHash& src);
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

    /**
    * \brief Сравнивает заданный объект с текущим по полям sha1Hash и otherHash
    * без учёта параметров алгоритма хэширования.
    * \param value [in] объект, который сравнивается с текущим
    * \return Результат сравнения.
    */
    bool compare_hashValue(const COtherHash& value) const;

    // get
    /// возвращает тип содержимого
    Type get_type() const;
    /// возвращает sha1Hash, если он содержится в структуре, иначе 0
    const CBlob* get_sha1Hash() const;
    /// возвращает otherHash, если он содержится в структуре, иначе 0
    const COtherHashAlgAndValue* get_otherHash() const;
    // set
    /// устанавливает тип и значение содержимого sha1Hash
    void put_sha1Hash( const CBlob& sha1Hash);
    /// устанавливает тип и значение содержимого otherHash
    void put_otherHash( const COtherHashAlgAndValue& otherHash);
private:
    void clear();
    COtherHashImpl* pImpl_;
};

/// проверяет объекты на равенство
CPASN1_API bool operator==( const COtherHash& lhs, const COtherHash& rhs);
/// проверяет объекты на неравенство
CPASN1_API bool operator!=( const COtherHash& lhs, const COtherHash& rhs);

class COtherCertIDImpl;
/**
 * \class COtherCertID Types.h <asn1/Types.h>
 * \brief ASN.1 структура OtherCertID (RFC 3126, раздел 3.8.2).
 *
 * Структура служит идентификатором сертификата. Её обязательное
 * поле (otherCertHash) содержит SHA1 или произвольный хэш 
 * всего закодированного сертификата.
 * Опциональное поле issuerSerial может содержат также имя издателя
 * и серийный номер сертификата.
 * \sa CESSCertID, COtherHash, CIssuerSerial
 */
class CPASN1_CLASS COtherCertID
{
public:
    /// Создает пустой объект
    COtherCertID();
    /**
     * \brief Создает и инициализирует объект SHA1 хэшом
     * \param sha1Hash [in] SHA1 хэш
     */
    COtherCertID( const CBlob& sha1Hash);
    /**
     * \brief Создает и инициализирует объект произвольным хэшом
     * \param hashValue [in] значение хэша
     * \param hashAlgorithm [in] алгоритм хэша
     */
    COtherCertID( 
	const CBlob& hashValue,
	const CAlgorithmIdentifier& hashAlgorithm);

    /**
     * \brief Создает копию заданного объекта.
     * \param src [in] объект, копия которого создается
     */
    COtherCertID( const COtherCertID& src);
    /**
     * \brief Копирует заданный объект в текущий.
     * \param src [in] объект, который копируется в текущий
     * \return Ссылка на текущий объект.
     */
    COtherCertID& operator=( const COtherCertID& src);

    /// Уничтожает объект
    ~COtherCertID();

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

    /**
    * \brief Сравнивает заданный объект с текущим без учёта параметров алгоритма хэширования
    *
    * \param value [in] объект, который сравнивается с текущим
    * \return Результат сравнения.
    */
    bool compare_noHashParam(const COtherCertID& value) const;

    // get
    /// возвращает поле otherCertHash
    const COtherHash& get_otherCertHash() const;
    /// возвращает поле issuerSerial
    const CIssuerSerial* get_issuerSerial() const;
    // set
    /// устанавливает поле otherCertHash
    void put_otherCertHash( const COtherHash& otherCertHash);
    /// устанавливает поле issuerSerial
    void put_issuerSerial( const CIssuerSerial* issuerSerial);
private:
    COtherCertIDImpl *pImpl_;
};

/// проверяет объекты на равенство
CPASN1_API bool operator==( const COtherCertID& lhs, const COtherCertID& rhs);
/// проверяет объекты на неравенство
CPASN1_API bool operator!=( const COtherCertID& lhs, const COtherCertID& rhs);

// VS2008 bug/feature: Экспорт инстанцированных шаблонов вложенных классов
// (здесь - итераторов) должен предварять экспорт инстанцированного шаблона
// внешнего класса (здесь - CDllList<>), иначе из DLL не будут экспортированы
// методы вложенных классов.
EXPIMP_CDLLLIST_ITERATORS(COtherCertID, CPASN1_EXTERN_TEMPLATE, CPASN1_CLASS);

/**
 * \class COtherCertIDList Types.h <asn1/Types.h>
 * \brief Список объектов CESSCertID.
 *
 * \sa COtherCertID, CDllList
 */
class CPASN1_CLASS COtherCertIDList: public CDllList<COtherCertID>
{
};

class CDistributionPointNameImpl;

/**
 * \class CDistributionPointName Types.h <asn1/Types.h>
 * \brief ASN.1 структура DistributionPointName (RFC 3280, раздел 4.2.1.14).
 *
 * Имя точки распространения CRL. Имеет только один тип
 * содержимого, но в дальнейшем возможно добавление других типов.
 * \sa CDistributionPoint
 */
class CPASN1_CLASS CDistributionPointName
{
public:
    /// типы содержимого
    enum Type
    {
	/// полное имя
	t_fullName = 1
    };
public:
    /// Создает пустой объект
    CDistributionPointName();
    /**
     * \brief Создает и инициализирует объект типом fullName
     * \param fullName [in] полное имя
     */
    CDistributionPointName( const CGeneralNames& fullName);
    /// Уничтожает объект
    ~CDistributionPointName();

    /**
     * \brief Создает копию заданного объекта.
     * \param src [in] объект, копия которого создается
     */
    CDistributionPointName( const CDistributionPointName& src);
    /**
     * \brief Копирует заданный объект в текущий.
     * \param src [in] объект, который копируется в текущий
     * \return Ссылка на текущий объект.
     */
    CDistributionPointName& operator=( const CDistributionPointName& src);

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

    // get
    /// возвращает тип хранимого значения
    Type get_type() const;
    /// возвращает fullName, если он содержится в структуре, иначе 0
    const CGeneralNames* get_fullName() const;
    // set
    /// устанавливает тип и значение содержимого fullName
    void put_fullName( const CGeneralNames& fullName);
private:
    void clear();
    CDistributionPointNameImpl* pImpl_;
};

/// проверяет объекты на равенство
CPASN1_API bool operator==(
    const CDistributionPointName& lhs,
    const CDistributionPointName& rhs );
/// проверяет объекты на неравенство
CPASN1_API bool operator!=(
    const CDistributionPointName& lhs,
    const CDistributionPointName& rhs );

class CDistributionPointImpl;

/**
 * \class CDistributionPoint Types.h <asn1/Types.h>
 * \brief ASN.1 структура DistributionPoint (RFC 3280, раздел 4.2.1.14).
 *
 * Точка распространения CRL.
 * \sa CDistributionPointList, CCRLDistPointsSyntax
 */
class CPASN1_CLASS CDistributionPoint
{
public:
    /// Создает пустой объект
    CDistributionPoint();
    /// Уничтожает объект
    ~CDistributionPoint();

    /**
     * \brief Создает копию заданного объекта.
     * \param src [in] объект, копия которого создается
     */
    CDistributionPoint( const CDistributionPoint& src);
    /**
     * \brief Копирует заданный объект в текущий.
     * \param src [in] объект, который копируется в текущий
     * \return Ссылка на текущий объект.
     */
    CDistributionPoint& operator=( const CDistributionPoint& src);

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

    // get
    /// возвращает опциональное поле distributionPoint
    const CDistributionPointName* get_distributionPoint() const;
    /// возвращает опциональное поле reasons
    const CReasonFlags* get_reasons() const;
    /// возвращает опциональное поле cRLIssuer
    const CGeneralNames* get_cRLIssuer() const;
    // set
    /// устанавливает опциональное поле distributionPoint
    void put_distributionPoint( 
	const CDistributionPointName* distributionPoint);
    /// устанавливает опциональное поле reasons
    void put_reasons( const CReasonFlags* reasons);
    /// устанавливает опциональное поле cRLIssuer
    void put_cRLIssuer( const CGeneralNames* cRLIssuer);
private:
    void clear();
    CDistributionPointImpl* pImpl_;
};

/// проверяет объекты на равенство
CPASN1_API bool operator==(
    const CDistributionPoint& lhs,
    const CDistributionPoint& rhs );
/// проверяет объекты на неравенство
CPASN1_API bool operator!=(
    const CDistributionPoint& lhs,
    const CDistributionPoint& rhs );

// VS2008 bug/feature: Экспорт инстанцированных шаблонов вложенных классов
// (здесь - итераторов) должен предварять экспорт инстанцированного шаблона
// внешнего класса (здесь - CDllList<>), иначе из DLL не будут экспортированы
// методы вложенных классов.
EXPIMP_CDLLLIST_ITERATORS(CDistributionPoint, CPASN1_EXTERN_TEMPLATE, CPASN1_CLASS);

/**
 * \class CCRLDistPointsSyntax Types.h <asn1/Types.h>
 * \brief Список точек распространения CRL.
 *
 * \sa CDistributionPoint, CDllList
 */
class CPASN1_CLASS CCRLDistPointsSyntax: public CDllList<CDistributionPoint>
{
#ifdef _WIN32
    friend CPASN1_API bool operator==(
	const CCRLDistPointsSyntax& lhs,
	const CCRLDistPointsSyntax& rhs );
#endif
};
#ifdef  _WIN32
/// проверяет объекты на равенство
CPASN1_API bool operator==(
    const CCRLDistPointsSyntax& lhs,
    const CCRLDistPointsSyntax& rhs );
/// проверяет объекты на неравенство
CPASN1_API bool operator!=(
    const CCRLDistPointsSyntax& lhs,
    const CCRLDistPointsSyntax& rhs );
#endif

/**
 * \struct CCertId Types.h <asn1/Types.h>
 * \brief ASN.1 структура CertId (RFC 2511, раздел 6.5)
 * 
 * Идентификатор сертификата.
 * \sa CRevAnnContent
 */
struct CPASN1_CLASS CCertId
{
    /// издатель сертификата
    CGeneralName issuer;
    /// серийный номер сертификата
    CBigInteger serialNumber;
};

/**
 * \brief Кодирование двоичной последовательности в строку октетов (OCTET STRING)
 * \param blob [in] двоичная последовательность
 * \return Закодированная в ASN.1 DER строка октетов
 */
CPASN1_API CBlob toOctetString( const CBlob& blob);
/**
 * \brief Декодирование двоичной последовательности из строки октетов (OCTET STRING)
 * \param blob [in] закодированная в ASN.1 DER строка октетов
 * \return Двоичная последовательность извлеченная из закодированной строки октетов
 */
CPASN1_API CBlob fromOctetString( const CBlob& blob);

/**
 * \class CAccessDescription Types.h <asn1/Types.h>
 * \brief ASN.1 структура AccessDescription (RFC 3280, раздел 4.2.2.1).
 *
 * Способ доступа к информации о центре сертификации
 * \sa CAuthorityInfoAccessSyntax
 */
class CPASN1_CLASS CAccessDescription
{
public:
    /// Создает пустой объект
    CAccessDescription();
    /**
     * \brief Создает и инициализирует объект
     * \param accessMethod [in] поле accessMethod
     * \param accessLocation [in] поле accessLocation
     */
    CAccessDescription(
	const char * accessMethod,
	const CGeneralName& accessLocation);
    /// Уничтожает объект
    ~CAccessDescription();

    /**
     * \brief Создает копию заданного объекта.
     * \param src [in] объект, копия которого создается
     */
    CAccessDescription( const CAccessDescription& src);
    /**
     * \brief Копирует заданный объект в текущий.
     * \param src [in] объект, который копируется в текущий
     * \return Ссылка на текущий объект.
     */
    CAccessDescription& operator=( const CAccessDescription& src);

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
    /// возвращает поле accessMethod
    const char * get_accessMethod() const;
    /// возвращает поле accessLocation
    const CGeneralName& get_accessLocation() const;
    //set
    /// устанавливает поле accessMethod
    void put_accessMethod( const char * accessMethod);
    /// устанавливает поле accessLocation
    void put_accessLocation( const CGeneralName& accessLocation); 
private:
    CStringProxy accessMethod_;
    CGeneralName accessLocation_;
};

/// проверяет объекты на равенство
CPASN1_API bool operator==( const CAccessDescription& lhs, const CAccessDescription& rhs);
/// проверяет объекты на неравенство
CPASN1_API bool operator!=( const CAccessDescription& lhs, const CAccessDescription& rhs);

// VS2008 bug/feature: Экспорт инстанцированных шаблонов вложенных классов
// (здесь - итераторов) должен предварять экспорт инстанцированного шаблона
// внешнего класса (здесь - CDllList<>), иначе из DLL не будут экспортированы
// методы вложенных классов.
EXPIMP_CDLLLIST_ITERATORS(CAccessDescription, CPASN1_EXTERN_TEMPLATE, CPASN1_CLASS);

/**
 * \class CAuthorityInfoAccessSyntax Types.h <asn1/Types.h>
 * \brief ASN.1 структура AuthorityInfoAccessSyntax (RFC 3280, раздел 4.2.2.1).
 *
 * Список объектов CAccessDescription.
 * \sa CAccessDescription
 */
class CPASN1_CLASS CAuthorityInfoAccessSyntax: public CDllList<CAccessDescription>
{
public:
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
};

class CTimeChoiceImpl;
/**
 * \class CTimeChoice Types.h <asn1/Types.h>
 * \brief ASN.1 структура Time (RFC 3280, раздел 4.1).
 *
 * Время может быть представлено двумя видами - utcTime и
 * generalizedTime. Времена до 2049 года включительно представляются
 * в виде utcTime, после 2049 года - в виде generalizedTime.
 * \sa CDateTime
 */
class CPASN1_CLASS CTimeChoice
{
public:
    /// тип содержимого
    enum Type
    {
	/// тип utcTime
	t_utcTime = 1,
	/// тип generalizedTime
	t_generalTime = 2
    };
public:
    /// Создает пустой объект
    CTimeChoice();
    /**
     * \brief Создает и инициализирует объект
     * \param time [in] время
     */
    CTimeChoice( const CDateTime& time);
    /// Уничтожает объект
    ~CTimeChoice();

    /**
     * \brief Создает копию заданного объекта.
     * \param src [in] объект, копия которого создается
     */
    CTimeChoice( const CTimeChoice& src);
    /**
     * \brief Копирует заданный объект в текущий.
     * \param src [in] объект, который копируется в текущий
     * \return Ссылка на текущий объект.
     */
    CTimeChoice& operator=( const CTimeChoice& src);

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

    // get
    /// возвращает тип времени
    Type get_type() const;
    /// возвращает время
    const CDateTime& get_time() const;
    // set
    /// устанавливает время
    void put_time( const CDateTime& time);
private:
    void clear();
    CTimeChoiceImpl* pImpl_;
};

/**
 * \class CRelativeDistinguishedName Types.h <asn1/Types.h>
 * \brief ASN.1 структура RelativeDistinguishedName (RFC 3280, раздел 4.1.2.4).
 *
 * \sa CAttributeTypeAndValueSet, CName, CRDNSequence
 */
class CPASN1_CLASS CRelativeDistinguishedName: public CAttributeTypeAndValueSet
{
public:
    /// Создает пустой объект
    CRelativeDistinguishedName();
    /**
     * \brief Создает и инициализирует объект
     * \param str [in] строковое представление RDN (например "CN=Ivan Ivanov+E=ivan@empty.com")
     */
    CRelativeDistinguishedName( const wchar_t * str);

    /// возвращает строковое представление RDN
    CWStringProxy toString() const;
    /// инициализирует объект из строкового представления RDN
    void fromString( const wchar_t * str);

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

    friend CPASN1_API bool operator==(
	const CRelativeDistinguishedName& lhs,
	const CRelativeDistinguishedName& rhs );
};

/// проверяет объекты на равенство
CPASN1_API bool operator==(
    const CRelativeDistinguishedName& lhs,
    const CRelativeDistinguishedName& rhs );
/// проверяет объекты на неравенство
CPASN1_API bool operator!=(
    const CRelativeDistinguishedName& lhs,
    const CRelativeDistinguishedName& rhs );

// VS2008 bug/feature: Экспорт инстанцированных шаблонов вложенных классов
// (здесь - итераторов) должен предварять экспорт инстанцированного шаблона
// внешнего класса (здесь - CDllList<>), иначе из DLL не будут экспортированы
// методы вложенных классов.
EXPIMP_CDLLLIST_ITERATORS(CRelativeDistinguishedName, CPASN1_EXTERN_TEMPLATE, CPASN1_CLASS);

/**
 * \class CRDNSequence Types.h <asn1/Types.h>
 * \brief ASN.1 структура RDNSequence (RFC 3280, раздел 4.1.2.4).
 *
 * \sa CAttributeTypeAndValueSet, CName, СRelativeDistinguishedName, CDllList
 */
class CPASN1_CLASS CRDNSequence: public CDllList<CRelativeDistinguishedName>
{
};

/**
 * \class CName Types.h <asn1/Types.h>
 * \brief ASN.1 структура Name (RFC 3280, раздел 4.1.2.4).
 *
 * Имя субъекта.
 * \sa CAttributeTypeAndValueSet, CRDNSequence, СRelativeDistinguishedName, CDllList
 */
class CPASN1_CLASS CName: public CRDNSequence
{
public:
    /// Создает пустой объект
    CName();
    /**
     * \brief Создает и инициализирует объект
     * \param str [in] строковое представление имени ("CN=Ivan Ivanov,E=ivan@empty.com,O=Org,C=RU")
     */
    CName( const wchar_t * str);

    /// возвращает строковое представление имени
    CWStringProxy toString() const;
    /// инициализирует объект из строкового представления имени
    void fromString( const wchar_t * str);

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
};

} // namespace ASN1

} // namespace CryptoPro

#pragma warning(pop)

#endif // _ASN1TYPES_H
