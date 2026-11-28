#ifndef _ALGIDEX_H_INCLUDED
#define _ALGIDEX_H_INCLUDED

#if !defined UNIX
#   include <windows.h>
#   include <wincrypt.h>
#endif	/* !UNIX */

#include <asn1/Types.h>

namespace CryptoPro {
namespace ASN1 {

/**
 * \brief Идентификатор алгоритма с кэшировнием ALG_ID
 * 
 * Данный класс добавляет в интерфейс класса CAlgorithmIdentifier
 * функцию получения ALG_ID. Для вычисления ALG_ID функции Crypto API
 * вызываются только один раз, после чего полученное значение кэшируется
 * внутри объекта до тех пор, пока он не будет изменен. 
 *
 * \sa CAlgorithmIdentifier
 */
class CAlgorithmIdentifierEx: public ASN1::CAlgorithmIdentifier
{
public:
    /// Создает пустой объект
    CAlgorithmIdentifierEx();
    /**
     * \brief Создает и инициализирует объект
     * \param algorithm [in] OID алгоритма
     */
    CAlgorithmIdentifierEx( const char *algorithm);
    /**
    * \brief Создает копию заданного объекта.
    *
    * \param src [in] объект, копия которого создается
    */
    CAlgorithmIdentifierEx( const CAlgorithmIdentifierEx &src );
    /**
    * \brief Создает копию заданного объекта.
    *
    * \param src [in] объект, копия которого создается
    */
    CAlgorithmIdentifierEx( const CAlgorithmIdentifier &src );
    /**
    * \brief Копирует заданный объект в текущий.
    *
    * \param src [in] объект, который копируется в текущий
    */
    CAlgorithmIdentifierEx &operator=( const CAlgorithmIdentifierEx& src );
    /**
    * \brief Копирует заданный объект в текущий.
    *
    * \param src [in] объект, который копируется в текущий
    */
    CAlgorithmIdentifierEx &operator=( const CAlgorithmIdentifier& src );
    /**
    * \brief Операция обмена объектов.
    *
    * \param src [in] объект для обмена
    * \remarks Функция не генерирует исключений.
    */
    void swap( CAlgorithmIdentifierEx &src ) throw();

    /// возвращает ALG_ID, соответсвующий значению идентификатора алгоритма
    ALG_ID get_AlgId() const;

    /// возвращает ALG_ID, соответсвующий значению идентификатора алгоритма и группе
    ALG_ID get_AlgId(DWORD dwGroupId) const;

    /// устанавливает OID алгоритма
    void put_algorithm( const char * algorithm);

    /// проверка идентификаторов алгоритмов на равенство
    bool operator==( const CAlgorithmIdentifierEx& right ) const;
    /// проверка идентификаторов алгоритмов на неравенство
    bool operator!= ( const CAlgorithmIdentifierEx& right ) const;
private:
    mutable ALG_ID cachedAlgId_;
};

} // namespace ASN1
} // namespace CryptoPro

#include "algidex.inl"

#endif // _ALGIDEX_H_INCLUDED
