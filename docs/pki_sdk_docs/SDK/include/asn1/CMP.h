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
 * \brief Классы и структуры перенесенные из PKIXCMP.
 */

#ifndef _ASN1CMP_H_INCLUDED
#define _ASN1CMP_H_INCLUDED

#include <cplib/Blob.h>
#include <cplib/DateTime.h>
#include <asn1/Extension.h>
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

class CPKIFreeText;

/// возможные статусы ответного сообщения (RFC 2510, раздел 3.2.3)
enum PKIStatusEnum {
    /// сообщение содержит то что запрашивали
    PKI_STATUS_GRANTED,
    /// сообщение содержит то что запрашивали с изменениями
    PKI_STATUS_GRANTEDWITHMODS,
    /// отказ в предоставлении услуги (причиниа может быть указана в другом месте)
    PKI_STATUS_REJECTION,
    /// запрос все еще обрабатывается
    PKI_STATUS_WAITING,
    /// предупреждение о предстоящем отзыве
    PKI_STATUS_REVOCATIONWARNING,
    /// предупреждение о состоявшимся отзыве
    PKI_STATUS_REVOCATIONNOTIFICATION,
    /// уже была произведена смена ключа для сертификата указанного в запросе на смену ключа
    PKI_STATUS_KEYUPDATEWARNING
};

class CRevAnnContentImpl;
/**
 * \class CRevAnnContent CMP.h <asn1/CMP.h>
 * \brief ASN.1 структура RevAnnContent (RFC 2510, раздел 3.3.15).
 *
 * Содержит в себе анонс отзыва сертификата.
 *
 */
class CPASN1_CLASS CRevAnnContent
{
public:
    /// Создает пустой объект
    CRevAnnContent();
    /**
     * \brief Создает и инициализирует объект
     * \param status [in] поле status
     * \param certId [in] поле certId
     * \param willBeRevokedAt [in] поле willBeRevokedAt
     * \param badSinceDate [in] поле badSinceDate
     */
    CRevAnnContent(
	const PKIStatusEnum& status,
	const CCertId& certId,
	const CDateTime& willBeRevokedAt,
	const CDateTime& badSinceDate);
    /// Уничтожает объект
    ~CRevAnnContent();
    /**
     * \brief Создает копию заданного объекта.
     * \param src [in] объект, копия которого создается
     */
    CRevAnnContent( const CRevAnnContent& src);
    /**
     * \brief Копирует заданный объект в текущий.
     * \param src [in] объект, который копируется в текущий
     * \return Ссылка на текущий объект.
     */
    CRevAnnContent& operator=( const CRevAnnContent& src);
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
    /// получение поля status
    const PKIStatusEnum& get_status() const;
    /// получение поля certId
    const CCertId& get_certId() const;
    /// получение поля willBeRevokedAt
    const CDateTime& get_willBeRevokedAt() const;
    /// получение поля badSinceDate
    const CDateTime& get_badSinceDate() const;
    /// получение опционального поля crlDetails
    const CExtensions* get_crlDetails() const;
    // set
    /// установка поля status
    void put_status(const PKIStatusEnum& status);
    /// установка поля certId
    void put_certId(const CCertId& certId);
    /// установка поля willBeRevokedAt
    void put_willBeRevokedAt(const CDateTime& willBeRevokedAt);
    /// установка поля badSinceDate
    void put_badSinceDate( const CDateTime& badSinceDate);
    /// установка опционального поля crlDetails
    void put_crlDetails( const CExtensions* crlDetails);
private:
    CRevAnnContentImpl *pImpl_;
};

/**
 * \class CPKIFailureInfo CMP.h <asn1/CMP.h>
 * \brief ASN.1 битовая строка (BIT STRING) PKIFailureInfo (RFC 2510, раздел 3.2.2).
 *
 * Используется для указания дополнительной информации о
 * возникнувших ошибках.
 * \sa CPKIStatusInfo, PKIStatusEnum
 */
class CPASN1_CLASS CPKIFailureInfo
{
public:
    /// Применяется для указания номера бита в поле failureInfo в структуре PKIStatusInfo
    enum Bit {
        /// неизвестный или неподдерживаемый идентификатор алгоритма
	badAlg = 0,
	/// не прошла проверка целостности сообщения (например не проверилась подпись)
	badMessageCheck = 1,
	/// транзакция запрещена или не поддерживается
	badRequest = 2,
	/// Время (поле messageTime) недостаточно близко к системному времени (определяется локальной политикой)
	badTime = 3,
	/// не найден сертификат соответствующий заданному идентификатору
	badCertId = 4,
	/// присланные данные были неправильного формата
	badDataFormat = 5,
	/// указанное в запрос имя удостоверяющего центра или сервиса не совпадает с фактическим
	wrongAuthority = 6,
        // the requester's data is incorrect (used for notary services)
	/// данные в запросе неккоректны (используется в нотариальных сервисах)
	incorrectData = 7,
	/// отсутствует обязательный штамп времени (обязательность может задаватся политикой)
	missingTimeStamp = 8,
	/// не доказано право обладания ключом
	badPOP = 9,
        /// источник времени службы штампов времени недоступен 
	timeNotAvailable = 14,
	/// запрашиваемая политика службы штампов времени не поддерживается
	unacceptedPolicy = 15,
	/// запрашиваемое расширение не поддерживается службой штампов времени
	unacceptedExtension = 16,
	/// запрашиваемая дополнительная информация непонятна или недоступна
	addInfoNotAvailable = 17,
	/// запрос не может быть обработан из-за системной ошибки
	systemFailure = 25
    };

    /**
     * \brief Создает и инициализирует объект
     * \param value [in] значение битовой строки
     */
    CPKIFailureInfo( unsigned value = 0);
    
    /// Уничтожает объект
    ~CPKIFailureInfo();

    /**
    * \brief Создает копию заданного объекта.
    * \param src [in] объект, копия которого создается
    */
    CPKIFailureInfo( const CPKIFailureInfo& src);
    /**
    * \brief Копирует заданный объект в текущий.
    * \param src [in] объект, который копируется в текущий
    * \return Ссылка на текущий объект.
    */
    CPKIFailureInfo& operator=( const CPKIFailureInfo& src);

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

    /// возвращает значение битовой строки
    unsigned get_value() const;
    /// устанавливает значение битовой строки
    void put_value( unsigned value);
    /**
     * \brief возвращает значение заданного бита
     * \param bitNumber [in] номер бита
     */
    bool get_bit( unsigned bitNumber ) const;
    /**
     * \brief устанавливает значение заданного бита
     * \param bitNumber [in] номер бита
     * \param value [in] устанавливаемое значение
     */
    void put_bit( unsigned bitNumber, bool value );
private:
    unsigned value_;
};

/// Проверка на равенство
CPASN1_API bool operator==(
    const CPKIFailureInfo& lhs, const CPKIFailureInfo& rhs);
/// Проверка на неравенство
CPASN1_API bool operator!=(
    const CPKIFailureInfo& lhs, const CPKIFailureInfo& rhs);

/**
 * \class CLanguageTag CMP.h <asn1/CMP.h>
 * \brief Тэг, обозначающий используемый язык (RFC 1766).
 *
 * Этот тег должен включатся в каждую строку структуры PKIFreeText (RFC 2510 раздел 3.1.1)
 * \sa CPKIFreeText, CPKIStatusInfo, PKIStatusEnum
 */
class CPASN1_CLASS CLanguageTag
{
public:
    /// Создает пустой объект
    CLanguageTag();
    /**
     * \brief Создает и инициализирует объект
     * \param tag [in] строковое представление языкового тэга
     */
    explicit CLanguageTag( const char *tag );
    /**
     * \brief Создает и инициализирует объект
     * \param tag [in] строковое представление языкового тэга
     */
    explicit CLanguageTag( const wchar_t *tag );
    /**
     * \brief Создает копию заданного объекта.
     *
     * \param src [in] объект, копия которого создается
     */
    CLanguageTag( const CLanguageTag &src );
    /**
     * \brief Копирует заданный объект в текущий.
     *
     * \param src [in] объект, который копируется в текущий
     * \return Ссылка на текущий объект.
     */
    CLanguageTag& operator=( const CLanguageTag &src );

    /// возвращает строковое значение тэга
    CStringProxy tostring() const;

    /// проверяет объекты на равенство
    bool operator==( const CLanguageTag &rhs ) const;
    /// проверяет объекты на неравенство
    bool operator!=( const CLanguageTag &rhs ) const;
private:
    CStringProxy tag_;
    static std::string normalize( const char *ptr );
    void assign( const CLanguageTag &right );
};

/**
 * \class CLanguageTagRuRu CMP.h <asn1/CMP.h>
 * \brief Тэг, обозначающий русский язык (ru-RU) (RFC 1766).
 *
 * \sa CLanguageTag
 */
class CPASN1_CLASS CLanguageTagRuRu: public CLanguageTag
{
public:
    /// Создает объект.
    CLanguageTagRuRu();
};

/**
 * \class CLanguageTagEnUs CMP.h <asn1/CMP.h>
 * \brief Тэг, обозначающий английский язык (en-US) (RFC 1766).
 *
 * \sa CLanguageTag
 */
class CPASN1_CLASS CLanguageTagEnUs: public CLanguageTag
{
public:
    /// Создает объект.
    CLanguageTagEnUs();
};

/**
 * \class CLanguageTagDefaultRead CMP.h <asn1/CMP.h>
 * \brief Тэг по умолчанию для чтения (*) (RFC 1766).
 *
 * \sa CLanguageTag
 */
class CPASN1_CLASS CLanguageTagDefaultRead: public CLanguageTag
{
public:
    CLanguageTagDefaultRead();
};

/// Тэг по умолчанию для записи, определен как CLanguageTagRuRu
typedef CLanguageTagRuRu CLanguageTagDefaultWrite;

/**
 * \class CPKIFreeTextString CMP.h <asn1/CMP.h>
 * \brief Строка из списка структуры PKIFreeText.
 *
 * \sa CLanguageTag, CPKIFreeText
 */
class CPASN1_CLASS CPKIFreeTextString
{
public:
    /**
     * \brief Создает и инициализирует объект
     * \param tag [in] используемый язык
     */
    CPKIFreeTextString( CLanguageTag tag = CLanguageTagDefaultWrite() );
    /**
     * \brief Создает и инициализирует объект
     * \param str [in] значение строки
     * \param tag [in] используемый язык
     */
    CPKIFreeTextString( const wchar_t *str, CLanguageTag tag = CLanguageTagDefaultWrite() );
    /**
     * \brief Создает и инициализирует объект
     * \param str [in] значение строки
     * \param tag [in] используемый язык
     */
    CPKIFreeTextString( const char* str, CLanguageTag tag = CLanguageTagDefaultWrite() );
    /**
     * \brief Создает копию заданного объекта.
     * \param src [in] объект, копия которого создается
     */
    CPKIFreeTextString( const CPKIFreeTextString& src );
    /**
     * \brief Копирует заданный объект в текущий.
     * \param src [in] объект, который копируется в текущий
     * \return Ссылка на текущий объект.
     */
    CPKIFreeTextString& operator=( const CPKIFreeTextString& src );

    /// возвращает язык строки
    const CLanguageTag& get_language() const;
    /// возвращает значение строки
    const wchar_t * get_value() const;

    /// устанавливает значение строки
    void set_value( const wchar_t * value);

    /// проверяет объекты на равенство
    bool operator==( const CPKIFreeTextString &right ) const;
    /// проверяет объекты на неравенство
    bool operator!=( const CPKIFreeTextString &right ) const;
private:
    CWStringProxy value_;
    CLanguageTag tag_;
    void assign( const CPKIFreeTextString& right );
};

// VS2008 bug/feature: Экспорт инстанцированных шаблонов вложенных классов
// (здесь - итераторов) должен предварять экспорт инстанцированного шаблона
// внешнего класса (здесь - CDllList<>), иначе из DLL не будут экспортированы
// методы вложенных классов.
EXPIMP_CDLLLIST_ITERATORS(CPKIFreeTextString, CPASN1_EXTERN_TEMPLATE, CPASN1_CLASS);

/**
 * \class CPKIFreeText CMP.h <asn1/CMP.h>
 * \brief ASN.1 структура PKIFreeText (RFC 2510, раздел 3.1.1).
 *
 * \sa CPKIStatusInfo, CPKIFreeTextString, CDllList
 */
class CPASN1_CLASS CPKIFreeText: public CDllList<CPKIFreeTextString>
{
public:
    /// Создает пустой объект
    CPKIFreeText();
    /**
     * \brief Создает объект и инициализирует его одной строкой
     * \param text [in] текст строки
     * \param tag [in] язык строки
     */
    CPKIFreeText( const wchar_t *text, CLanguageTag tag = CLanguageTagDefaultWrite() );
    /**
     * \brief Создает копию заданного объекта.
     * \param src [in] объект, копия которого создается
     */
    CPKIFreeText( const CPKIFreeTextString &src );
    /// выполняет приведение объекта к типу CPKIFreeTextString
    operator CPKIFreeTextString();
    /// выполняет приведение объекта к типу CPKIFreeTextString
    operator const CPKIFreeTextString&() const;
    /**
     * \brief находит строку с заданным языковым тэгом
     * \param tag [in] языковый тег
     * \return Итератор, указывающий на найденный объект, либо на
     * элемент списка следующий за последним если объект не найден.
     */
    const_iterator find( CLanguageTag tag = CLanguageTagDefaultRead() ) const;
    /**
     * \brief находит строку с заданным языковым тэгом
     * \param tag [in] языковый тег
     * \return Итератор, указывающий на найденный объект, либо на
     * элемент списка следующий за последним если объект не найден.
     */
    iterator find( CLanguageTag tag = CLanguageTagDefaultRead() );
    /**
     * \brief удаляет строки с заданным языковым тэгом
     * \param tag [in] языковый тэг
     */
    void remove( const CLanguageTag& tag );
    /**
     * \brief добавляет новую строку
     * \param str [in] добавляемая строка
     */
    void insert( const CPKIFreeTextString &str );
};

/**
 * \class CPKIStatusInfo CMP.h <asn1/CMP.h>
 * \brief ASN.1 структура PKIStatusInfo (RFC 2510, раздел 3.2.3).
 *
 * Используется для передачи информации о статусе в ответах на
 * запросы.
 *
 * \sa CPKIStatusEnum, CPKIFailureInfo, CPKIFreeText
 */
class CPASN1_CLASS CPKIStatusInfo
{
public:
    /**
     * \brief Создает и инициализирует объект
     * \param pkiStatus [in] поле pkiStatus
     */
    CPKIStatusInfo( PKIStatusEnum pkiStatus = PKI_STATUS_REJECTION );
    /// Уничтожает объект
    ~CPKIStatusInfo();

    /**
     * \brief Создает копию заданного объекта.
     * \param src [in] объект, копия которого создается
     */
    CPKIStatusInfo( const CPKIStatusInfo& src);
    /**
     * \brief Копирует заданный объект в текущий.
     * \param src [in] объект, который копируется в текущий
     * \return Ссылка на текущий объект.
     */
    CPKIStatusInfo& operator=( const CPKIStatusInfo& src);

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
    void decode( const CBlob&	d);

    //get
    /// возвращает поле pkiStatus
    PKIStatusEnum get_pkiStatus() const;
    /// возвращает поле failureInfo
    const CPKIFailureInfo& get_failureInfo() const;
    /// возвращает поле statusString
    const CPKIFreeText& get_statusString() const;
    //set
    /// устанавливает поле pkiStatus
    void put_pkiStatus( PKIStatusEnum pkiStatus);
    /// устанавливает поле failureInfo
    void put_failureInfo( const CPKIFailureInfo& failureInfo);
    /// устанавливает поле statusString
    void put_statusString( const CPKIFreeText& statusString);
private:
    PKIStatusEnum pkiStatus_;
    CPKIFailureInfo failureInfo_;
    CPKIFreeText statusString_;
};

/**
 * \class CInfoTypeAndValue CMP.h <asn1/CMP.h>
 * \brief ASN.1 структура InfoTypeAndValue (RFC 2510, раздел 3.3.18).
 *
 * Используется для передачи дополнительной информации.
 * \sa CInfoTypeAndValueList
 */
class CPASN1_CLASS CInfoTypeAndValue
{
public:
    /// Создает пустой объект
    CInfoTypeAndValue();
    /// Уничтожает объект
    ~CInfoTypeAndValue();
    /**
     * \brief Создает и инициализирует объект
     * \param type [in] OID типа значения
     */
    CInfoTypeAndValue( const char * type );
    /**
     * \brief Создает и инициализирует объект
     * \param type [in] OID типа значения
     * \param value [in] закодирванное значение
     */
    CInfoTypeAndValue( const char * type, const CBlob& value );
    /**
     * \brief Создает копию заданного объекта.
     * \param src [in] объект, копия которого создается
     */
    CInfoTypeAndValue( const CInfoTypeAndValue &src );
    /**
     * \brief Копирует заданный объект в текущий.
     * \param src [in] объект, который копируется в текущий
     * \return Ссылка на текущий объект.
     */
    CInfoTypeAndValue& operator=( const CInfoTypeAndValue &src );
    /// возвращает поле infoType (OID типа значения)
    const char * get_infoType() const;
    /// возвращает закодированное значение
    const CBlob& get_infoValue() const;
    /// проверяет объекты на равенство
    bool operator==( const CInfoTypeAndValue &right ) const;
    /// проверяет объекты на неравенство
    bool operator!=( const CInfoTypeAndValue &right ) const;
private:
    CStringProxy type_;
    CBlob value_;
};

// VS2008 bug/feature: Экспорт инстанцированных шаблонов вложенных классов
// (здесь - итераторов) должен предварять экспорт инстанцированного шаблона
// внешнего класса (здесь - CDllList<>), иначе из DLL не будут экспортированы
// методы вложенных классов.
EXPIMP_CDLLLIST_ITERATORS(CInfoTypeAndValue, CPASN1_EXTERN_TEMPLATE, CPASN1_CLASS);

/**
 * \class CInfoTypeAndValueList CMP.h <asn1/CMP.h>
 * \brief Список объектов СInfoTypeAndValue.
 *
 * \sa CInfoTypeAndValue, CDllList
 */
class CPASN1_CLASS CInfoTypeAndValueList: public CDllList<CInfoTypeAndValue>
{
public:
    /**
     * \brief находит объект в списке с указанным типом значения
     * \param type [in] OID типа значения
     * \return Итератор, указывающий на найденный объект, либо на
     * элемент списка следующий за последним если объект не найден.
     */
    iterator find( const char *type );
    /**
     * \brief находит объект в списке с указанным типом значения
     * \param type [in] OID типа значения
     * \return Итератор, указывающий на найденный объект, либо на
     * элемент списка следующий за последним если объект не найден.
     */
    const_iterator find( const char *type ) const;
    /**
     * \brief удаляет все объекты со значениями заданного типа из списка
     * \param type [in] OID типа значения
     */
    void remove( const char *type );
    /**
     * \brief вставляет новый объект в список
     * \param typeAndValue [in] вставляемый объект
     */
    void insert( const CInfoTypeAndValue &typeAndValue );
};

/**
 * \class CReasonFlags CMP.h <asn1/CMP.h>
 * \brief ASN.1 битовая строка (BIT STRING) ReasonFlags (RFC 3280, раздел 3.2.2).
 *
 * Используется для указания причин отзыва сертификатов.
 */
class CPASN1_CLASS CReasonFlags
{
public:
    /// флаги причин отзыва
    enum Flag
    {
	/// не определена причина отзыва
	unspecified = 0x01, //(0)
	/// скопроментирован сертификат
	keyCompromise = 0x02, //(1)
	/// скомпроментирован центр сертификации
	caCompromise = 0x04, //(2)
	/// изменилась нформация в сертификате
	affiliationChanged = 0x08, //(3)
	/// сертификат замещен
	superseded = 0x10, //(4)
	/// сертификат больше не нужен для тех целей для которых выпускался
	cessationOfOperation = 0x20, //(5)
	/// действие сертификата приостановлено
	certificateHold = 0x40, //(6)
	/// привилегия, подтверждаемая данным сертификатом была отозвана
	privilegeWithdrawn = 0x80, //(7)
	/// скомпроментирован центр, выпускающий атрибутные сертификаты
	aACompromise = 0x100 //(8)
    };
    /**
     * \brief Создает и инициализирует объект
     * \param value [in] значение битовой строки
     */
    CReasonFlags( unsigned value = 0);

    /// возвращает значение битовой строки
    unsigned get_value() const;
    /// устанавливает значение битовой строки
    void put_value( unsigned value);
    /**
     * \brief возвращает значение заданного бита
     * \param bitNumber [in] номер бита
     */
    bool get_bit( unsigned bitNumber ) const;
    /**
     * \brief устанавливает значение заданного бита
     * \param bitNumber [in] номер бита
     * \param value [in] устанавливаемое значение
     */
    void put_bit( unsigned bitNumber, bool value );
    /**
     * \brief устанавливает флаг
     * \param flag [in] устанавливаемый флаг
     */
    void add_flag( Flag flag );
    /**
     * \brief снимает флаг
     * \param flag [in] снимаемый флаг
     */
    void remove_flag( Flag flag );
    /**
     * \brief проверяет, установлен флаг или нет
     * \param flag [in] проверяемый флаг
     */
    bool get_flag( Flag flag ) const;
private:
    static unsigned sequence[9];
    unsigned value_;
};

/// проверяет объекты на равенство
CPASN1_API bool operator==(
    const CReasonFlags& lhs,
    const CReasonFlags& rhs );
/// проверяет объекты на неравенство
CPASN1_API bool operator!=(
    const CReasonFlags& lhs,
    const CReasonFlags& rhs );

} // namespace ASN1

} // namespace CryptoPro

#ifndef UNIX
#pragma warning(pop)
#endif

#endif // _ASN1CMP_H_INCLUDED
