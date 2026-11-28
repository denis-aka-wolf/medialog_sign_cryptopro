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
 * \version $Revision: 262669 $
 * \date $Date:: 2023-10-11 11:52:52 +0300#$
 * \author $Author: anna $
 *
 * \brief Классы расширений.
 */

#ifndef _EXTENSION_H_INCLUDED
#define _EXTENSION_H_INCLUDED

#include <cplib/Blob.h>
#include <cplib/DateTime.h>
#include <asn1/Types.h>
#include <memory>		/* Linux/autoptr */

#define sz_id_ce_invalidityDate "2.5.29.24"
#define sz_id_ce_certificateIssuer "2.5.29.29"

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

/**
 * \class CExtValue Extension.h <asn1/Extension.h>
 * \brief Значение расширения.
 *
 * Хранение закодированного в ASN.1 DER значения расширения в виде 
 * двоичной последовательностьи и типа расширения в виде OID.
 * \sa CExtension, CExtensions
 */
class CPASN1_CLASS CExtValue
{    
public:
    /// Создает пустой объект
    CExtValue();
    /// Уничтожает объект
    ~CExtValue();
    /**
     * \brief Создает и инициализирует объект
     * \param oid [in] OID, обозначающий тип расширения
     */
    CExtValue (const char * oid);
    /**
     * \brief Создает и инициализирует объект
     * \param oid [in] OID, обозначающий тип расширения
     * \param value [in] закодированное расширение
     */
    CExtValue (const char * oid, const CBlob& value);
    /**
     * \brief Создает копию заданного объекта.
     *
     * \param src [in] объект, копия которого создается
     */
    CExtValue (const CExtValue& src);
    /**
     * \brief Копирует заданный объект в текущий.
     *
     * \param src [in] объект, который копируется в текущий
     * \return Ссылка на текцщий объект.
     */
    CExtValue& operator=( const CExtValue& src);
    /// Возвращает OID расширения (ANSI).
    const char * get_oid() const;
    /// Возвращает закодированное значение расширения.
    const CBlob& get_value() const;
protected:
    CBlob& value();
private:
    CStringProxy oid_;
    CBlob value_;
};

/**
 * \class CExtension Extension.h <asn1/Extension.h>
 * \brief Расширение (RFC 3280, раздел 4.1).
 *
 * Тип расширения определяется OID'ом (extnID). Тип расширения определяет
 * тип значения расширения. Расширение может быть критичным или некритичным.
 * \sa CExtValue, CExtensions
 */
class CPASN1_CLASS CExtension
{
public:
    /**
     * \brief Создает и инициализирует объект
     * \param value [in] значение расширения
     * \param critical [in] флаг критичности расширения
     */
    CExtension(
	const CExtValue& value, 
	bool critical = false);
    /// Создает пустой объект
    CExtension();
    /**
     * \brief Создает копию заданного объекта.
     *
     * \param src [in] объект, копия которого создается
     */
    CExtension(const CExtension& src);
    /**
     * \brief Копирует заданный объект в текущий.
     *
     * \param src [in] объект, который копируется в текущий
     * \return Ссылка на текущий объект.
     */
    CExtension& operator=( const CExtension& src);
    /// Возвращает тип расширения в виде OID
    const char * get_extnID() const;
    /// Возвращает закодированное значение расширения
    const CBlob& get_extnValue() const;
    /// Возвращает криичность расширения
    bool get_critical() const;
    /**
     * \brief Кодирует расширение в формате ASN.1 DER и возвращает
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
    CExtValue value_;
    bool critical_;
};

/// Оператор проверки расширений на равенство
CPASN1_API extern bool operator==( const CExtension& lhs, const CExtension& rhs);
/// Оператор проверки расширений на неравенство
CPASN1_API extern bool operator!=( const CExtension& lhs, const CExtension& rhs);

// VS2008 bug/feature: Экспорт инстанцированных шаблонов вложенных классов
// (здесь - итераторов) должен предварять экспорт инстанцированного шаблона
// внешнего класса (здесь - CDllList<>), иначе из DLL не будут экспортированы
// методы вложенных классов.
EXPIMP_CDLLLIST_ITERATORS(CExtension, CPASN1_EXTERN_TEMPLATE, CPASN1_CLASS);

/**
 * \class CExtensions Extension.h <asn1/Extension.h>
 * \brief Список расширений (RFC 3280, раздел 4.1).
 *
 * \sa CExtValue, CExtension, CDllList
 */
class CPASN1_CLASS CExtensions: public CDllList<CExtension>
{
public:
    /**
     * \brief Удаляет расширение заданного типа из списка
     * \param oid [in] OID типа расширения
     */
    void erase(const char * oid);
    /**
     * \brief Добавляет расширение в список
     * \param extension [in] добавляемое расширение
     */
    void insert(const CExtension& extension);
    /**
     * \brief Находит расширение с заданным типом в списке
     * \param oid [in] OID типа расширения
     * \return Итератор, указывающий на найденный объект, либо на
     * элемент списка следующий за последним если объект не найден.
     */
    iterator find( const char * oid );
    /**
     * \brief Находит расширение с заданным типом в списке
     * \param oid [in] OID типа расширения
     * \return Итератор, указывающий на найденный объект, либо на
     * элемент списка следующий за последним если объект не найден.
     */
    const_iterator find( const char * oid ) const;

    /**
     * \brief Кодирует список расширений в формате ASN.1 DER и возвращает
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

/// Оператор проверки объектов на равенство
CPASN1_API extern bool operator==( const CExtensions& lhs, const CExtensions& rhs);
/// Оператор проверки объектов на неравенство
CPASN1_API extern bool operator!=( const CExtensions& lhs, const CExtensions& rhs);

/**
 * \class CExtInvalidityDate Extension.h <asn1/Extension.h>
 * \brief Значение расширения InvalidityDate (RFC 3280, раздел 5.3.3)
 *
 */
class CPASN1_CLASS CExtInvalidityDate: public CExtValue
{
public:
    /// Создает пустой объект
    CExtInvalidityDate();
    /**
     * \brief Создает и инициализирует объект
     * \param invalidityDate [in] время
     */
    CExtInvalidityDate( 
	const CDateTime& invalidityDate);
    /**
     * \brief Создает и инициализирует объект
     * \param value [in] закодированное значение расширения
     */
    CExtInvalidityDate( const CBlob& value);

    /// Уничтожает объект
    ~CExtInvalidityDate();

    //get
    /// возвращает время указанное в значении
    const CDateTime& get_invalidityDate() const;
    /// устанавливает время
    void put_invalidityDate( 
	const CDateTime& invalidityDate);
private:
    CDateTime invalidityDate_;
    void encode();
    void decode();
};

/**
 * \class CExtCertificateIssuer Extension.h <asn1/Extension.h>
 * \brief Значение расширения CertificateIssuer (RFC 3280, раздел 5.3.4)
 *
 */
class CPASN1_CLASS CExtCertificateIssuer: public CExtValue
{
public:
    /// Создает пустой объект
    CExtCertificateIssuer();
    /**
     * \brief Создает и инициализирует объект
     * \param issuer [in] имя издателя сертификата
     */
    CExtCertificateIssuer( 
	const CGeneralNames& issuer);
    /**
     * \brief Создает и инициализирует объект
     * \param value [in] закодированное значение расширения
     */
    CExtCertificateIssuer( const CBlob& value);

    /// Уничтожает объект
    ~CExtCertificateIssuer();

    //get
    /// возвращает имя издателя сертификата
    const CGeneralNames& get_issuer() const;
    //set
    /// устанавливает имя издателя сертификата
    void put_issuer( 
	const CGeneralNames& issuer);
private:
    CGeneralNames issuer_;
    void encode();
    void decode();
};

/// Причины отзыва серификатов (RFC 3280, раздел 5.3.1)
enum CrlReason {
	/// не определена причина отзыва
    CRLREASON_UNSPECIFIED = 0,
	/// скопроментирован сертификат
    CRLREASON_KEYCOMPROMISE = 1, 
	/// скомпроментирован центр сертификации
    CRLREASON_CACOMPROMISE = 2, 
	/// изменилась нформация в сертификате
    CRLREASON_AFFILIATIONCHANGED = 3,
	/// сертификат замещен
    CRLREASON_SUPERSEDED = 4, 
	/// сертификат больше не нужен для тех целей для которых выпускался
    CRLREASON_CESSATIONOFOPERATION = 5, 
	/// действие сертификата приостановлено
    CRLREASON_CERTIFICATEHOLD = 6, 
	/// убрать серификат из CRL (используется только в разностных CRL)
    CRLREASON_REMOVEFROMCRL = 8,
	/// привилегия, подтверждаемая данным сертификатом была отозвана
    CRLREASON_PRIVILEDGEWITHDRAWN = 9,
	/// скомпроментирован центр, выпускающий атрибутные сертификаты
    CRLREASON_AACOMPROMISE = 10
};

/**
 * \class CExtCRLReason Extension.h <asn1/Extension.h>
 * \brief Значение расширения CRLReason (RFC 3280, раздел 5.3.1)
 *
 */
class CPASN1_CLASS CExtCRLReason: public CExtValue
{
public:
    /// Создает пустой объект
    CExtCRLReason();
    /**
     * \brief Создает и инициализирует объект
     * \param reason [in] причина отзыва
     */
    CExtCRLReason(CrlReason reason);
    /**
     * \brief Создает и инициализирует объект
     * \param value [in] закодированное значение расширения
     */
    CExtCRLReason( const CBlob& value);

    /// Уничтожает объект
    ~CExtCRLReason();

    //get
    /// возвращает причину отзыва
    CrlReason get_reason() const;
    //set
    /// устанавливает причину отзыва
    void put_reason(CrlReason reason);
private:
    CrlReason reason_;
    void encode();
    void decode();
};

// possible code oids
#define sz_id_holdinstruction_none "1.2.840.10040.2.1"
#define sz_id_holdinstruction_callissuer "1.2.840.10040.2.2"
#define sz_id_holdinstruction_reject "1.2.840.10040.2.3"

/**
 * \class CExtHoldInstructionCode Extension.h <asn1/Extension.h>
 * \brief Значение расширения HoldInstructionCode (RFC 3280, раздел 5.3.2)
 *
 */
class CPASN1_CLASS CExtHoldInstructionCode: public CExtValue
{
public:
    /// Создает пустой объект
    CExtHoldInstructionCode();
    /**
     * \brief Создает и инициализирует объект
     * \param code [in] OID кода
     */
    CExtHoldInstructionCode( 
	const char * code);
    /**
     * \brief Создает и инициализирует объект
     * \param value [in] закодированное значение расширения
     */
    CExtHoldInstructionCode( const CBlob& value);

    /// Уничтожает объект
    ~CExtHoldInstructionCode();

    /// возвращает OID кода
    const char * get_code() const;
    /// устанавливает OID кода
    void put_code( 
	const char * code);
private:
    CStringProxy code_;
    void encode();
    void decode();
};

/**
 * \class CExtPrivateKeyUsagePeriod Extension.h <asn1/Extension.h>
 * \brief Значение расширения PrivateKeyUsagePeriod (RFC 3280, раздел 4.2.1.4)
 *
 */
class CPASN1_CLASS CExtPrivateKeyUsagePeriod: public CExtValue
{
public:
    /**
     * \brief Создает и инициализирует объект
     * \param notBefore [in] время начала действия закрытого ключа
     * \param notAfter [in] время окончания действия закрытого ключа
     */
    CExtPrivateKeyUsagePeriod( 
	const CDateTime *notBefore = 0, const CDateTime *notAfter = 0);
    /**
     * \brief Создает и инициализирует объект
     * \param value [in] закодированное значение расширения
     */
    CExtPrivateKeyUsagePeriod( const CBlob& value);

    /// Уничтожает объект
    ~CExtPrivateKeyUsagePeriod();

    /// возвращает поле notBefore
    const CDateTime *get_notBefore() const;
    /// возвращает поле notAfter
    const CDateTime *get_notAfter() const;
    /// устанавливает поле notBefore
    void put_notBefore( const CDateTime* notBefore);
    /// устанавливает поле notAfter
    void put_notAfter( const CDateTime* notAfter);
private:
    CExtPrivateKeyUsagePeriod( const CExtPrivateKeyUsagePeriod& );
    CExtPrivateKeyUsagePeriod& operator=( const CExtPrivateKeyUsagePeriod&);
    
    std::auto_ptr<CDateTime> notBefore_;
    std::auto_ptr<CDateTime> notAfter_;
    void encode();
    void decode();
};

} // namespace ASN1
} // namespace CryptoPro

#pragma warning(pop)

#endif // _EXTENSION_H_INCLUDED
