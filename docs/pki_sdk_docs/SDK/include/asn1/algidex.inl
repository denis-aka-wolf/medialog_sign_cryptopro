
#ifndef _ALGIDEX_INL_INCLUDED
#define _ALGIDEX_INL_INCLUDED

#ifndef _ALGIDEX_H_INCLUDED
	#error algidex.inl requires algidex.h to be included first
#endif

namespace CryptoPro {
namespace ASN1 {

inline ASN1::CAlgorithmIdentifierEx::CAlgorithmIdentifierEx()
: cachedAlgId_(0)
{
}

inline ASN1::CAlgorithmIdentifierEx::CAlgorithmIdentifierEx( 
    const char * ccAlgorithm)
    : ASN1::CAlgorithmIdentifier(ccAlgorithm), cachedAlgId_(0)
{
}

inline ASN1::CAlgorithmIdentifierEx::CAlgorithmIdentifierEx( 
    const ASN1::CAlgorithmIdentifierEx &src )
    : ASN1::CAlgorithmIdentifier(src),
    cachedAlgId_(src.cachedAlgId_)
{
}

inline ASN1::CAlgorithmIdentifierEx::CAlgorithmIdentifierEx( 
    const CAlgorithmIdentifier &src )
    : ASN1::CAlgorithmIdentifier(src),
    cachedAlgId_(0)
{
}

inline void ASN1::CAlgorithmIdentifierEx::swap( 
    CAlgorithmIdentifierEx &src ) throw()
{
    CAlgorithmIdentifier::swap(src);
    std::swap(cachedAlgId_,src.cachedAlgId_);
}

inline ALG_ID ASN1::CAlgorithmIdentifierEx::get_AlgId() const
{
    if(cachedAlgId_)
	return cachedAlgId_;
    cachedAlgId_ = get_AlgId(0);
    return cachedAlgId_;
}

inline ALG_ID ASN1::CAlgorithmIdentifierEx::get_AlgId(DWORD /*dwGroupId*/) const
{
    DWORD dwAlgId = CertOIDToAlgId(get_algorithm());
    if (!dwAlgId)
    {
	SetLastError((DWORD)NTE_BAD_ALGID);
    }
    return dwAlgId;
 //   PCCRYPT_OID_INFO info =
	//CryptFindOIDInfo(CRYPT_OID_INFO_OID_KEY, (void*)get_algorithm(), dwGroupId);
 //   if (!info)
 //   {
	//SetLastError((DWORD)NTE_BAD_ALGID);
 //   }
 //   return info ? info->Algid : 0;

}

inline void ASN1::CAlgorithmIdentifierEx::put_algorithm( const char * ccAlgorithm)
{
    if( std::string(get_algorithm()) == ccAlgorithm)
	return;
    cachedAlgId_ = 0;
    ASN1::CAlgorithmIdentifier::put_algorithm(ccAlgorithm);
}

inline bool ASN1::CAlgorithmIdentifierEx::operator==( const ASN1::CAlgorithmIdentifierEx& right ) const
{
    return ( static_cast<const ASN1::CAlgorithmIdentifier&>(*this)
	  == static_cast<const ASN1::CAlgorithmIdentifier&>(right) );
}

inline bool ASN1::CAlgorithmIdentifierEx::operator!= ( const ASN1::CAlgorithmIdentifierEx& right ) const
{
    return !( *this == right );
}

inline ASN1::CAlgorithmIdentifierEx& 
ASN1::CAlgorithmIdentifierEx::operator=(
    const ASN1::CAlgorithmIdentifierEx& src )
{
    if( this == &src )
	return *this;
    CAlgorithmIdentifierEx tmp(src);
    swap(tmp);
    return *this;
}

inline CAlgorithmIdentifierEx &
ASN1::CAlgorithmIdentifierEx::operator=(
    const CAlgorithmIdentifier& src )
{
    if( this == &src )
	return *this;
    CAlgorithmIdentifierEx tmp(src);
    swap(tmp);
    return *this;
}

} // namespace ASN1
} // namespace CryptoPro

#endif // _ALGIDEX_INL_INCLUDED
