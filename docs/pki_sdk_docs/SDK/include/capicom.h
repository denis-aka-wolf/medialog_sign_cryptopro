

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0626 */
/* at Tue Jan 19 06:14:07 2038
 */
/* Compiler settings for capicom.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.01.0626 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */



/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __capicom_h__
#define __capicom_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

#ifndef DECLSPEC_XFGVIRT
#if _CONTROL_FLOW_GUARD_XFG
#define DECLSPEC_XFGVIRT(base, func) __declspec(xfg_virtual(base, func))
#else
#define DECLSPEC_XFGVIRT(base, func)
#endif
#endif

/* Forward Declarations */ 

#ifndef __IChainContext_FWD_DEFINED__
#define __IChainContext_FWD_DEFINED__
typedef interface IChainContext IChainContext;

#endif 	/* __IChainContext_FWD_DEFINED__ */


#ifndef __ISettings_FWD_DEFINED__
#define __ISettings_FWD_DEFINED__
typedef interface ISettings ISettings;

#endif 	/* __ISettings_FWD_DEFINED__ */


#ifndef __IEKU_FWD_DEFINED__
#define __IEKU_FWD_DEFINED__
typedef interface IEKU IEKU;

#endif 	/* __IEKU_FWD_DEFINED__ */


#ifndef __IEKUs_FWD_DEFINED__
#define __IEKUs_FWD_DEFINED__
typedef interface IEKUs IEKUs;

#endif 	/* __IEKUs_FWD_DEFINED__ */


#ifndef __IKeyUsage_FWD_DEFINED__
#define __IKeyUsage_FWD_DEFINED__
typedef interface IKeyUsage IKeyUsage;

#endif 	/* __IKeyUsage_FWD_DEFINED__ */


#ifndef __IExtendedKeyUsage_FWD_DEFINED__
#define __IExtendedKeyUsage_FWD_DEFINED__
typedef interface IExtendedKeyUsage IExtendedKeyUsage;

#endif 	/* __IExtendedKeyUsage_FWD_DEFINED__ */


#ifndef __IBasicConstraints_FWD_DEFINED__
#define __IBasicConstraints_FWD_DEFINED__
typedef interface IBasicConstraints IBasicConstraints;

#endif 	/* __IBasicConstraints_FWD_DEFINED__ */


#ifndef __ICertificates_FWD_DEFINED__
#define __ICertificates_FWD_DEFINED__
typedef interface ICertificates ICertificates;

#endif 	/* __ICertificates_FWD_DEFINED__ */


#ifndef __ICertificates2_FWD_DEFINED__
#define __ICertificates2_FWD_DEFINED__
typedef interface ICertificates2 ICertificates2;

#endif 	/* __ICertificates2_FWD_DEFINED__ */


#ifndef __ICCertificates_FWD_DEFINED__
#define __ICCertificates_FWD_DEFINED__
typedef interface ICCertificates ICCertificates;

#endif 	/* __ICCertificates_FWD_DEFINED__ */


#ifndef __IOID_FWD_DEFINED__
#define __IOID_FWD_DEFINED__
typedef interface IOID IOID;

#endif 	/* __IOID_FWD_DEFINED__ */


#ifndef __IOIDs_FWD_DEFINED__
#define __IOIDs_FWD_DEFINED__
typedef interface IOIDs IOIDs;

#endif 	/* __IOIDs_FWD_DEFINED__ */


#ifndef __ICertificateStatus_FWD_DEFINED__
#define __ICertificateStatus_FWD_DEFINED__
typedef interface ICertificateStatus ICertificateStatus;

#endif 	/* __ICertificateStatus_FWD_DEFINED__ */


#ifndef __ICertificateStatus2_FWD_DEFINED__
#define __ICertificateStatus2_FWD_DEFINED__
typedef interface ICertificateStatus2 ICertificateStatus2;

#endif 	/* __ICertificateStatus2_FWD_DEFINED__ */


#ifndef __ICertificateStatus3_FWD_DEFINED__
#define __ICertificateStatus3_FWD_DEFINED__
typedef interface ICertificateStatus3 ICertificateStatus3;

#endif 	/* __ICertificateStatus3_FWD_DEFINED__ */


#ifndef __ITemplate_FWD_DEFINED__
#define __ITemplate_FWD_DEFINED__
typedef interface ITemplate ITemplate;

#endif 	/* __ITemplate_FWD_DEFINED__ */


#ifndef __IEncodedData_FWD_DEFINED__
#define __IEncodedData_FWD_DEFINED__
typedef interface IEncodedData IEncodedData;

#endif 	/* __IEncodedData_FWD_DEFINED__ */


#ifndef __IPublicKey_FWD_DEFINED__
#define __IPublicKey_FWD_DEFINED__
typedef interface IPublicKey IPublicKey;

#endif 	/* __IPublicKey_FWD_DEFINED__ */


#ifndef __IPrivateKey_FWD_DEFINED__
#define __IPrivateKey_FWD_DEFINED__
typedef interface IPrivateKey IPrivateKey;

#endif 	/* __IPrivateKey_FWD_DEFINED__ */


#ifndef __ICPrivateKey_FWD_DEFINED__
#define __ICPrivateKey_FWD_DEFINED__
typedef interface ICPrivateKey ICPrivateKey;

#endif 	/* __ICPrivateKey_FWD_DEFINED__ */


#ifndef __IExtensions_FWD_DEFINED__
#define __IExtensions_FWD_DEFINED__
typedef interface IExtensions IExtensions;

#endif 	/* __IExtensions_FWD_DEFINED__ */


#ifndef __IExtendedProperty_FWD_DEFINED__
#define __IExtendedProperty_FWD_DEFINED__
typedef interface IExtendedProperty IExtendedProperty;

#endif 	/* __IExtendedProperty_FWD_DEFINED__ */


#ifndef __IExtendedProperties_FWD_DEFINED__
#define __IExtendedProperties_FWD_DEFINED__
typedef interface IExtendedProperties IExtendedProperties;

#endif 	/* __IExtendedProperties_FWD_DEFINED__ */


#ifndef __ICertificate_FWD_DEFINED__
#define __ICertificate_FWD_DEFINED__
typedef interface ICertificate ICertificate;

#endif 	/* __ICertificate_FWD_DEFINED__ */


#ifndef __ICertificate2_FWD_DEFINED__
#define __ICertificate2_FWD_DEFINED__
typedef interface ICertificate2 ICertificate2;

#endif 	/* __ICertificate2_FWD_DEFINED__ */


#ifndef __ICertContext_FWD_DEFINED__
#define __ICertContext_FWD_DEFINED__
typedef interface ICertContext ICertContext;

#endif 	/* __ICertContext_FWD_DEFINED__ */


#ifndef __IChain_FWD_DEFINED__
#define __IChain_FWD_DEFINED__
typedef interface IChain IChain;

#endif 	/* __IChain_FWD_DEFINED__ */


#ifndef __IChain2_FWD_DEFINED__
#define __IChain2_FWD_DEFINED__
typedef interface IChain2 IChain2;

#endif 	/* __IChain2_FWD_DEFINED__ */


#ifndef __IStore_FWD_DEFINED__
#define __IStore_FWD_DEFINED__
typedef interface IStore IStore;

#endif 	/* __IStore_FWD_DEFINED__ */


#ifndef __IStore2_FWD_DEFINED__
#define __IStore2_FWD_DEFINED__
typedef interface IStore2 IStore2;

#endif 	/* __IStore2_FWD_DEFINED__ */


#ifndef __IStore3_FWD_DEFINED__
#define __IStore3_FWD_DEFINED__
typedef interface IStore3 IStore3;

#endif 	/* __IStore3_FWD_DEFINED__ */


#ifndef __ICertStore_FWD_DEFINED__
#define __ICertStore_FWD_DEFINED__
typedef interface ICertStore ICertStore;

#endif 	/* __ICertStore_FWD_DEFINED__ */


#ifndef __IAttribute_FWD_DEFINED__
#define __IAttribute_FWD_DEFINED__
typedef interface IAttribute IAttribute;

#endif 	/* __IAttribute_FWD_DEFINED__ */


#ifndef __IAttributes_FWD_DEFINED__
#define __IAttributes_FWD_DEFINED__
typedef interface IAttributes IAttributes;

#endif 	/* __IAttributes_FWD_DEFINED__ */


#ifndef __ISigner_FWD_DEFINED__
#define __ISigner_FWD_DEFINED__
typedef interface ISigner ISigner;

#endif 	/* __ISigner_FWD_DEFINED__ */


#ifndef __ISigner2_FWD_DEFINED__
#define __ISigner2_FWD_DEFINED__
typedef interface ISigner2 ISigner2;

#endif 	/* __ISigner2_FWD_DEFINED__ */


#ifndef __ICSigner_FWD_DEFINED__
#define __ICSigner_FWD_DEFINED__
typedef interface ICSigner ICSigner;

#endif 	/* __ICSigner_FWD_DEFINED__ */


#ifndef __ISigners_FWD_DEFINED__
#define __ISigners_FWD_DEFINED__
typedef interface ISigners ISigners;

#endif 	/* __ISigners_FWD_DEFINED__ */


#ifndef __ISignedData_FWD_DEFINED__
#define __ISignedData_FWD_DEFINED__
typedef interface ISignedData ISignedData;

#endif 	/* __ISignedData_FWD_DEFINED__ */


#ifndef __IAlgorithm_FWD_DEFINED__
#define __IAlgorithm_FWD_DEFINED__
typedef interface IAlgorithm IAlgorithm;

#endif 	/* __IAlgorithm_FWD_DEFINED__ */


#ifndef __IRecipients_FWD_DEFINED__
#define __IRecipients_FWD_DEFINED__
typedef interface IRecipients IRecipients;

#endif 	/* __IRecipients_FWD_DEFINED__ */


#ifndef __IEnvelopedData_FWD_DEFINED__
#define __IEnvelopedData_FWD_DEFINED__
typedef interface IEnvelopedData IEnvelopedData;

#endif 	/* __IEnvelopedData_FWD_DEFINED__ */


#ifndef __IEncryptedData_FWD_DEFINED__
#define __IEncryptedData_FWD_DEFINED__
typedef interface IEncryptedData IEncryptedData;

#endif 	/* __IEncryptedData_FWD_DEFINED__ */


#ifndef __INoticeNumbers_FWD_DEFINED__
#define __INoticeNumbers_FWD_DEFINED__
typedef interface INoticeNumbers INoticeNumbers;

#endif 	/* __INoticeNumbers_FWD_DEFINED__ */


#ifndef __IQualifier_FWD_DEFINED__
#define __IQualifier_FWD_DEFINED__
typedef interface IQualifier IQualifier;

#endif 	/* __IQualifier_FWD_DEFINED__ */


#ifndef __IQualifiers_FWD_DEFINED__
#define __IQualifiers_FWD_DEFINED__
typedef interface IQualifiers IQualifiers;

#endif 	/* __IQualifiers_FWD_DEFINED__ */


#ifndef __IPolicyInformation_FWD_DEFINED__
#define __IPolicyInformation_FWD_DEFINED__
typedef interface IPolicyInformation IPolicyInformation;

#endif 	/* __IPolicyInformation_FWD_DEFINED__ */


#ifndef __IExtension_FWD_DEFINED__
#define __IExtension_FWD_DEFINED__
typedef interface IExtension IExtension;

#endif 	/* __IExtension_FWD_DEFINED__ */


#ifndef __ISignedCode_FWD_DEFINED__
#define __ISignedCode_FWD_DEFINED__
typedef interface ISignedCode ISignedCode;

#endif 	/* __ISignedCode_FWD_DEFINED__ */


#ifndef __IHashedData_FWD_DEFINED__
#define __IHashedData_FWD_DEFINED__
typedef interface IHashedData IHashedData;

#endif 	/* __IHashedData_FWD_DEFINED__ */


#ifndef __IUtilities_FWD_DEFINED__
#define __IUtilities_FWD_DEFINED__
typedef interface IUtilities IUtilities;

#endif 	/* __IUtilities_FWD_DEFINED__ */


#ifndef __Settings_FWD_DEFINED__
#define __Settings_FWD_DEFINED__

#ifdef __cplusplus
typedef class Settings Settings;
#else
typedef struct Settings Settings;
#endif /* __cplusplus */

#endif 	/* __Settings_FWD_DEFINED__ */


#ifndef __EKU_FWD_DEFINED__
#define __EKU_FWD_DEFINED__

#ifdef __cplusplus
typedef class EKU EKU;
#else
typedef struct EKU EKU;
#endif /* __cplusplus */

#endif 	/* __EKU_FWD_DEFINED__ */


#ifndef __EKUs_FWD_DEFINED__
#define __EKUs_FWD_DEFINED__

#ifdef __cplusplus
typedef class EKUs EKUs;
#else
typedef struct EKUs EKUs;
#endif /* __cplusplus */

#endif 	/* __EKUs_FWD_DEFINED__ */


#ifndef __KeyUsage_FWD_DEFINED__
#define __KeyUsage_FWD_DEFINED__

#ifdef __cplusplus
typedef class KeyUsage KeyUsage;
#else
typedef struct KeyUsage KeyUsage;
#endif /* __cplusplus */

#endif 	/* __KeyUsage_FWD_DEFINED__ */


#ifndef __ExtendedKeyUsage_FWD_DEFINED__
#define __ExtendedKeyUsage_FWD_DEFINED__

#ifdef __cplusplus
typedef class ExtendedKeyUsage ExtendedKeyUsage;
#else
typedef struct ExtendedKeyUsage ExtendedKeyUsage;
#endif /* __cplusplus */

#endif 	/* __ExtendedKeyUsage_FWD_DEFINED__ */


#ifndef __BasicConstraints_FWD_DEFINED__
#define __BasicConstraints_FWD_DEFINED__

#ifdef __cplusplus
typedef class BasicConstraints BasicConstraints;
#else
typedef struct BasicConstraints BasicConstraints;
#endif /* __cplusplus */

#endif 	/* __BasicConstraints_FWD_DEFINED__ */


#ifndef __Certificates_FWD_DEFINED__
#define __Certificates_FWD_DEFINED__

#ifdef __cplusplus
typedef class Certificates Certificates;
#else
typedef struct Certificates Certificates;
#endif /* __cplusplus */

#endif 	/* __Certificates_FWD_DEFINED__ */


#ifndef __OID_FWD_DEFINED__
#define __OID_FWD_DEFINED__

#ifdef __cplusplus
typedef class OID OID;
#else
typedef struct OID OID;
#endif /* __cplusplus */

#endif 	/* __OID_FWD_DEFINED__ */


#ifndef __OIDs_FWD_DEFINED__
#define __OIDs_FWD_DEFINED__

#ifdef __cplusplus
typedef class OIDs OIDs;
#else
typedef struct OIDs OIDs;
#endif /* __cplusplus */

#endif 	/* __OIDs_FWD_DEFINED__ */


#ifndef __CertificateStatus_FWD_DEFINED__
#define __CertificateStatus_FWD_DEFINED__

#ifdef __cplusplus
typedef class CertificateStatus CertificateStatus;
#else
typedef struct CertificateStatus CertificateStatus;
#endif /* __cplusplus */

#endif 	/* __CertificateStatus_FWD_DEFINED__ */


#ifndef __Template_FWD_DEFINED__
#define __Template_FWD_DEFINED__

#ifdef __cplusplus
typedef class Template Template;
#else
typedef struct Template Template;
#endif /* __cplusplus */

#endif 	/* __Template_FWD_DEFINED__ */


#ifndef __EncodedData_FWD_DEFINED__
#define __EncodedData_FWD_DEFINED__

#ifdef __cplusplus
typedef class EncodedData EncodedData;
#else
typedef struct EncodedData EncodedData;
#endif /* __cplusplus */

#endif 	/* __EncodedData_FWD_DEFINED__ */


#ifndef __PublicKey_FWD_DEFINED__
#define __PublicKey_FWD_DEFINED__

#ifdef __cplusplus
typedef class PublicKey PublicKey;
#else
typedef struct PublicKey PublicKey;
#endif /* __cplusplus */

#endif 	/* __PublicKey_FWD_DEFINED__ */


#ifndef __PrivateKey_FWD_DEFINED__
#define __PrivateKey_FWD_DEFINED__

#ifdef __cplusplus
typedef class PrivateKey PrivateKey;
#else
typedef struct PrivateKey PrivateKey;
#endif /* __cplusplus */

#endif 	/* __PrivateKey_FWD_DEFINED__ */


#ifndef __Extensions_FWD_DEFINED__
#define __Extensions_FWD_DEFINED__

#ifdef __cplusplus
typedef class Extensions Extensions;
#else
typedef struct Extensions Extensions;
#endif /* __cplusplus */

#endif 	/* __Extensions_FWD_DEFINED__ */


#ifndef __ExtendedProperty_FWD_DEFINED__
#define __ExtendedProperty_FWD_DEFINED__

#ifdef __cplusplus
typedef class ExtendedProperty ExtendedProperty;
#else
typedef struct ExtendedProperty ExtendedProperty;
#endif /* __cplusplus */

#endif 	/* __ExtendedProperty_FWD_DEFINED__ */


#ifndef __ExtendedProperties_FWD_DEFINED__
#define __ExtendedProperties_FWD_DEFINED__

#ifdef __cplusplus
typedef class ExtendedProperties ExtendedProperties;
#else
typedef struct ExtendedProperties ExtendedProperties;
#endif /* __cplusplus */

#endif 	/* __ExtendedProperties_FWD_DEFINED__ */


#ifndef __Certificate_FWD_DEFINED__
#define __Certificate_FWD_DEFINED__

#ifdef __cplusplus
typedef class Certificate Certificate;
#else
typedef struct Certificate Certificate;
#endif /* __cplusplus */

#endif 	/* __Certificate_FWD_DEFINED__ */


#ifndef __Chain_FWD_DEFINED__
#define __Chain_FWD_DEFINED__

#ifdef __cplusplus
typedef class Chain Chain;
#else
typedef struct Chain Chain;
#endif /* __cplusplus */

#endif 	/* __Chain_FWD_DEFINED__ */


#ifndef __Store_FWD_DEFINED__
#define __Store_FWD_DEFINED__

#ifdef __cplusplus
typedef class Store Store;
#else
typedef struct Store Store;
#endif /* __cplusplus */

#endif 	/* __Store_FWD_DEFINED__ */


#ifndef __Attribute_FWD_DEFINED__
#define __Attribute_FWD_DEFINED__

#ifdef __cplusplus
typedef class Attribute Attribute;
#else
typedef struct Attribute Attribute;
#endif /* __cplusplus */

#endif 	/* __Attribute_FWD_DEFINED__ */


#ifndef __Attributes_FWD_DEFINED__
#define __Attributes_FWD_DEFINED__

#ifdef __cplusplus
typedef class Attributes Attributes;
#else
typedef struct Attributes Attributes;
#endif /* __cplusplus */

#endif 	/* __Attributes_FWD_DEFINED__ */


#ifndef __Signer_FWD_DEFINED__
#define __Signer_FWD_DEFINED__

#ifdef __cplusplus
typedef class Signer Signer;
#else
typedef struct Signer Signer;
#endif /* __cplusplus */

#endif 	/* __Signer_FWD_DEFINED__ */


#ifndef __Signers_FWD_DEFINED__
#define __Signers_FWD_DEFINED__

#ifdef __cplusplus
typedef class Signers Signers;
#else
typedef struct Signers Signers;
#endif /* __cplusplus */

#endif 	/* __Signers_FWD_DEFINED__ */


#ifndef __SignedData_FWD_DEFINED__
#define __SignedData_FWD_DEFINED__

#ifdef __cplusplus
typedef class SignedData SignedData;
#else
typedef struct SignedData SignedData;
#endif /* __cplusplus */

#endif 	/* __SignedData_FWD_DEFINED__ */


#ifndef __Algorithm_FWD_DEFINED__
#define __Algorithm_FWD_DEFINED__

#ifdef __cplusplus
typedef class Algorithm Algorithm;
#else
typedef struct Algorithm Algorithm;
#endif /* __cplusplus */

#endif 	/* __Algorithm_FWD_DEFINED__ */


#ifndef __Recipients_FWD_DEFINED__
#define __Recipients_FWD_DEFINED__

#ifdef __cplusplus
typedef class Recipients Recipients;
#else
typedef struct Recipients Recipients;
#endif /* __cplusplus */

#endif 	/* __Recipients_FWD_DEFINED__ */


#ifndef __EnvelopedData_FWD_DEFINED__
#define __EnvelopedData_FWD_DEFINED__

#ifdef __cplusplus
typedef class EnvelopedData EnvelopedData;
#else
typedef struct EnvelopedData EnvelopedData;
#endif /* __cplusplus */

#endif 	/* __EnvelopedData_FWD_DEFINED__ */


#ifndef __EncryptedData_FWD_DEFINED__
#define __EncryptedData_FWD_DEFINED__

#ifdef __cplusplus
typedef class EncryptedData EncryptedData;
#else
typedef struct EncryptedData EncryptedData;
#endif /* __cplusplus */

#endif 	/* __EncryptedData_FWD_DEFINED__ */


#ifndef __NoticeNumbers_FWD_DEFINED__
#define __NoticeNumbers_FWD_DEFINED__

#ifdef __cplusplus
typedef class NoticeNumbers NoticeNumbers;
#else
typedef struct NoticeNumbers NoticeNumbers;
#endif /* __cplusplus */

#endif 	/* __NoticeNumbers_FWD_DEFINED__ */


#ifndef __Qualifier_FWD_DEFINED__
#define __Qualifier_FWD_DEFINED__

#ifdef __cplusplus
typedef class Qualifier Qualifier;
#else
typedef struct Qualifier Qualifier;
#endif /* __cplusplus */

#endif 	/* __Qualifier_FWD_DEFINED__ */


#ifndef __Qualifiers_FWD_DEFINED__
#define __Qualifiers_FWD_DEFINED__

#ifdef __cplusplus
typedef class Qualifiers Qualifiers;
#else
typedef struct Qualifiers Qualifiers;
#endif /* __cplusplus */

#endif 	/* __Qualifiers_FWD_DEFINED__ */


#ifndef __PolicyInformation_FWD_DEFINED__
#define __PolicyInformation_FWD_DEFINED__

#ifdef __cplusplus
typedef class PolicyInformation PolicyInformation;
#else
typedef struct PolicyInformation PolicyInformation;
#endif /* __cplusplus */

#endif 	/* __PolicyInformation_FWD_DEFINED__ */


#ifndef __Extension_FWD_DEFINED__
#define __Extension_FWD_DEFINED__

#ifdef __cplusplus
typedef class Extension Extension;
#else
typedef struct Extension Extension;
#endif /* __cplusplus */

#endif 	/* __Extension_FWD_DEFINED__ */


#ifndef __SignedCode_FWD_DEFINED__
#define __SignedCode_FWD_DEFINED__

#ifdef __cplusplus
typedef class SignedCode SignedCode;
#else
typedef struct SignedCode SignedCode;
#endif /* __cplusplus */

#endif 	/* __SignedCode_FWD_DEFINED__ */


#ifndef __HashedData_FWD_DEFINED__
#define __HashedData_FWD_DEFINED__

#ifdef __cplusplus
typedef class HashedData HashedData;
#else
typedef struct HashedData HashedData;
#endif /* __cplusplus */

#endif 	/* __HashedData_FWD_DEFINED__ */


#ifndef __Utilities_FWD_DEFINED__
#define __Utilities_FWD_DEFINED__

#ifdef __cplusplus
typedef class Utilities Utilities;
#else
typedef struct Utilities Utilities;
#endif /* __cplusplus */

#endif 	/* __Utilities_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_capicom_0000_0000 */
/* [local] */ 

// MIDL должен знать эти структуры дл€ компил€ции capicom.idl,
// но если оставить их в capicom.h, то вместе с wincrypt.h они
// приведут к повторному определению, поэтому здесь они безусловно
// выкинуты из компил€ции.
#if 0
typedef struct tag_CRYPT_KEY_PROV_PARAM
    {
    unsigned long dwParam;
    unsigned char *pbData;
    unsigned long cbData;
    unsigned long dwFlags;
    } 	CRYPT_KEY_PROV_PARAM;

typedef struct tag_CRYPT_KEY_PROV_INFO
    {
    LPWSTR pwszContainerName;
    LPWSTR pwszProvName;
    unsigned long dwProvType;
    unsigned long dwFlags;
    unsigned long cProvParam;
    CRYPT_KEY_PROV_PARAM *rgProvParam;
    unsigned long dwKeySpec;
    } 	CRYPT_KEY_PROV_INFO;

typedef struct tag_CERT_KEY_CONTEXT
    {
    unsigned long cbSize;
    unsigned long hCryptProv;
    unsigned long dwKeySpec;
    } 	CERT_KEY_CONTEXT;

#endif // 0
#include <wincrypt.h>






















































extern RPC_IF_HANDLE __MIDL_itf_capicom_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_capicom_0000_0000_v0_0_s_ifspec;

#ifndef __IChainContext_INTERFACE_DEFINED__
#define __IChainContext_INTERFACE_DEFINED__

/* interface IChainContext */
/* [object][helpstring][uuid] */ 


EXTERN_C const IID IID_IChainContext;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("B27FFB30-432E-4585-A3FD-72530108CBFD")
    IChainContext : public IUnknown
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT __stdcall get_ChainContext( 
            /* [retval][out] */ long *pChainContext) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT __stdcall put_ChainContext( 
            /* [in] */ long pChainContext) = 0;
        
        virtual /* [helpstring] */ HRESULT __stdcall FreeContext( 
            /* [in] */ long pChainContext) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IChainContextVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IChainContext * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IChainContext * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IChainContext * This);
        
        DECLSPEC_XFGVIRT(IChainContext, get_ChainContext)
        /* [helpstring][propget] */ HRESULT ( __stdcall *get_ChainContext )( 
            IChainContext * This,
            /* [retval][out] */ long *pChainContext);
        
        DECLSPEC_XFGVIRT(IChainContext, put_ChainContext)
        /* [helpstring][propput] */ HRESULT ( __stdcall *put_ChainContext )( 
            IChainContext * This,
            /* [in] */ long pChainContext);
        
        DECLSPEC_XFGVIRT(IChainContext, FreeContext)
        /* [helpstring] */ HRESULT ( __stdcall *FreeContext )( 
            IChainContext * This,
            /* [in] */ long pChainContext);
        
        END_INTERFACE
    } IChainContextVtbl;

    interface IChainContext
    {
        CONST_VTBL struct IChainContextVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IChainContext_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IChainContext_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IChainContext_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IChainContext_get_ChainContext(This,pChainContext)	\
    ( (This)->lpVtbl -> get_ChainContext(This,pChainContext) ) 

#define IChainContext_put_ChainContext(This,pChainContext)	\
    ( (This)->lpVtbl -> put_ChainContext(This,pChainContext) ) 

#define IChainContext_FreeContext(This,pChainContext)	\
    ( (This)->lpVtbl -> FreeContext(This,pChainContext) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IChainContext_INTERFACE_DEFINED__ */



#ifndef __CAPICOM_LIBRARY_DEFINED__
#define __CAPICOM_LIBRARY_DEFINED__

/* library CAPICOM */
/* [helpstring][version][uuid] */ 

typedef /* [public] */ 
enum __MIDL___MIDL_itf_capicom_0001_0066_0001
    {
        CAPICOM_E_ENCODE_INVALID_TYPE	= 0x80880100,
        CAPICOM_E_EKU_INVALID_OID	= 0x80880200,
        CAPICOM_E_EKU_OID_NOT_INITIALIZED	= 0x80880201,
        CAPICOM_E_CERTIFICATE_NOT_INITIALIZED	= 0x80880210,
        CAPICOM_E_CERTIFICATE_NO_PRIVATE_KEY	= 0x80880211,
        CAPICOM_E_CHAIN_NOT_BUILT	= 0x80880220,
        CAPICOM_E_STORE_NOT_OPENED	= 0x80880230,
        CAPICOM_E_STORE_EMPTY	= 0x80880231,
        CAPICOM_E_STORE_INVALID_OPEN_MODE	= 0x80880232,
        CAPICOM_E_STORE_INVALID_SAVE_AS_TYPE	= 0x80880233,
        CAPICOM_E_ATTRIBUTE_NAME_NOT_INITIALIZED	= 0x80880240,
        CAPICOM_E_ATTRIBUTE_VALUE_NOT_INITIALIZED	= 0x80880241,
        CAPICOM_E_ATTRIBUTE_INVALID_NAME	= 0x80880242,
        CAPICOM_E_ATTRIBUTE_INVALID_VALUE	= 0x80880243,
        CAPICOM_E_SIGNER_NOT_INITIALIZED	= 0x80880250,
        CAPICOM_E_SIGNER_NOT_FOUND	= 0x80880251,
        CAPICOM_E_SIGNER_NO_CHAIN	= 0x80880252,
        CAPICOM_E_SIGNER_INVALID_USAGE	= 0x80880253,
        CAPICOM_E_SIGN_NOT_INITIALIZED	= 0x80880260,
        CAPICOM_E_SIGN_INVALID_TYPE	= 0x80880261,
        CAPICOM_E_SIGN_NOT_SIGNED	= 0x80880262,
        CAPICOM_E_INVALID_ALGORITHM	= 0x80880270,
        CAPICOM_E_INVALID_KEY_LENGTH	= 0x80880271,
        CAPICOM_E_ENVELOP_NOT_INITIALIZED	= 0x80880280,
        CAPICOM_E_ENVELOP_INVALID_TYPE	= 0x80880281,
        CAPICOM_E_ENVELOP_NO_RECIPIENT	= 0x80880282,
        CAPICOM_E_ENVELOP_RECIPIENT_NOT_FOUND	= 0x80880283,
        CAPICOM_E_ENCRYPT_NOT_INITIALIZED	= 0x80880290,
        CAPICOM_E_ENCRYPT_INVALID_TYPE	= 0x80880291,
        CAPICOM_E_ENCRYPT_NO_SECRET	= 0x80880292,
        CAPICOM_E_NOT_SUPPORTED	= 0x80880900,
        CAPICOM_E_UI_DISABLED	= 0x80880901,
        CAPICOM_E_CANCELLED	= 0x80880902,
        CAPICOM_E_NOT_ALLOWED	= 0x80880903,
        CAPICOM_E_OUT_OF_RESOURCE	= 0x80880904,
        CAPICOM_E_INTERNAL	= 0x80880911,
        CAPICOM_E_UNKNOWN	= 0x80880999,
        CAPICOM_E_PRIVATE_KEY_NOT_INITIALIZED	= 0x80880300,
        CAPICOM_E_PRIVATE_KEY_NOT_EXPORTABLE	= 0x80880301,
        CAPICOM_E_ENCODE_NOT_INITIALIZED	= 0x80880320,
        CAPICOM_E_EXTENSION_NOT_INITIALIZED	= 0x80880330,
        CAPICOM_E_PROPERTY_NOT_INITIALIZED	= 0x80880340,
        CAPICOM_E_FIND_INVALID_TYPE	= 0x80880350,
        CAPICOM_E_FIND_INVALID_PREDEFINED_POLICY	= 0x80880351,
        CAPICOM_E_CODE_NOT_INITIALIZED	= 0x80880360,
        CAPICOM_E_CODE_NOT_SIGNED	= 0x80880361,
        CAPICOM_E_CODE_DESCRIPTION_NOT_INITIALIZED	= 0x80880362,
        CAPICOM_E_CODE_DESCRIPTION_URL_NOT_INITIALIZED	= 0x80880363,
        CAPICOM_E_CODE_INVALID_TIMESTAMP_URL	= 0x80880364,
        CAPICOM_E_HASH_NO_DATA	= 0x80880370,
        CAPICOM_E_INVALID_CONVERT_TYPE	= 0x80880380
    } 	CAPICOM_ERROR_CODE;

typedef /* [public][public][public][public][public][public][public][public][public][public][public] */ 
enum __MIDL___MIDL_itf_capicom_0001_0066_0002
    {
        CAPICOM_ENCODE_BASE64	= 0,
        CAPICOM_ENCODE_BINARY	= 1,
        CAPICOM_ENCODE_ANY	= 0xffffffff
    } 	CAPICOM_ENCODING_TYPE;

typedef /* [public][public][public] */ 
enum __MIDL___MIDL_itf_capicom_0001_0066_0003
    {
        CAPICOM_EKU_OTHER	= 0,
        CAPICOM_EKU_SERVER_AUTH	= 1,
        CAPICOM_EKU_CLIENT_AUTH	= 2,
        CAPICOM_EKU_CODE_SIGNING	= 3,
        CAPICOM_EKU_EMAIL_PROTECTION	= 4,
        CAPICOM_EKU_SMARTCARD_LOGON	= 5,
        CAPICOM_EKU_ENCRYPTING_FILE_SYSTEM	= 6
    } 	CAPICOM_EKU;

typedef /* [public][public][public] */ 
enum __MIDL___MIDL_itf_capicom_0001_0066_0004
    {
        CAPICOM_CHECK_NONE	= 0,
        CAPICOM_CHECK_TRUSTED_ROOT	= 1,
        CAPICOM_CHECK_TIME_VALIDITY	= 2,
        CAPICOM_CHECK_SIGNATURE_VALIDITY	= 4,
        CAPICOM_CHECK_ONLINE_REVOCATION_STATUS	= 8,
        CAPICOM_CHECK_OFFLINE_REVOCATION_STATUS	= 16,
        CAPICOM_CHECK_COMPLETE_CHAIN	= 32,
        CAPICOM_CHECK_NAME_CONSTRAINTS	= 64,
        CAPICOM_CHECK_BASIC_CONSTRAINTS	= 128,
        CAPICOM_CHECK_NESTED_VALIDITY_PERIOD	= 256,
        CAPICOM_CHECK_ONLINE_ALL	= 495,
        CAPICOM_CHECK_OFFLINE_ALL	= 503
    } 	CAPICOM_CHECK_FLAG;

typedef /* [public][public] */ 
enum __MIDL___MIDL_itf_capicom_0001_0066_0005
    {
        CAPICOM_CERT_INFO_SUBJECT_SIMPLE_NAME	= 0,
        CAPICOM_CERT_INFO_ISSUER_SIMPLE_NAME	= 1,
        CAPICOM_CERT_INFO_SUBJECT_EMAIL_NAME	= 2,
        CAPICOM_CERT_INFO_ISSUER_EMAIL_NAME	= 3,
        CAPICOM_CERT_INFO_SUBJECT_UPN	= 4,
        CAPICOM_CERT_INFO_ISSUER_UPN	= 5,
        CAPICOM_CERT_INFO_SUBJECT_DNS_NAME	= 6,
        CAPICOM_CERT_INFO_ISSUER_DNS_NAME	= 7
    } 	CAPICOM_CERT_INFO_TYPE;

typedef /* [public][public][public][public][public][public] */ 
enum __MIDL___MIDL_itf_capicom_0001_0066_0006
    {
        CAPICOM_MEMORY_STORE	= 0,
        CAPICOM_LOCAL_MACHINE_STORE	= 1,
        CAPICOM_CURRENT_USER_STORE	= 2,
        CAPICOM_ACTIVE_DIRECTORY_USER_STORE	= 3,
        CAPICOM_SMART_CARD_USER_STORE	= 4
    } 	CAPICOM_STORE_LOCATION;

typedef /* [public][public] */ 
enum __MIDL___MIDL_itf_capicom_0001_0066_0007
    {
        CAPICOM_STORE_OPEN_READ_ONLY	= 0,
        CAPICOM_STORE_OPEN_READ_WRITE	= 1,
        CAPICOM_STORE_OPEN_MAXIMUM_ALLOWED	= 2,
        CAPICOM_STORE_OPEN_EXISTING_ONLY	= 128,
        CAPICOM_STORE_OPEN_INCLUDE_ARCHIVED	= 256
    } 	CAPICOM_STORE_OPEN_MODE;

typedef /* [public][public][public] */ 
enum __MIDL___MIDL_itf_capicom_0001_0066_0008
    {
        CAPICOM_SEARCH_ANY	= 0,
        CAPICOM_SEARCH_GLOBAL_CATALOG	= 1,
        CAPICOM_SEARCH_DEFAULT_DOMAIN	= 2
    } 	CAPICOM_ACTIVE_DIRECTORY_SEARCH_LOCATION;

typedef /* [public][public] */ 
enum __MIDL___MIDL_itf_capicom_0001_0066_0009
    {
        CAPICOM_STORE_SAVE_AS_SERIALIZED	= 0,
        CAPICOM_STORE_SAVE_AS_PKCS7	= 1
    } 	CAPICOM_STORE_SAVE_AS_TYPE;

typedef /* [public][public][public] */ 
enum __MIDL___MIDL_itf_capicom_0001_0066_0010
    {
        CAPICOM_AUTHENTICATED_ATTRIBUTE_SIGNING_TIME	= 0,
        CAPICOM_AUTHENTICATED_ATTRIBUTE_DOCUMENT_NAME	= 1,
        CAPICOM_AUTHENTICATED_ATTRIBUTE_DOCUMENT_DESCRIPTION	= 2
    } 	CAPICOM_ATTRIBUTE;

typedef /* [public][public] */ 
enum __MIDL___MIDL_itf_capicom_0001_0066_0011
    {
        CAPICOM_VERIFY_SIGNATURE_ONLY	= 0,
        CAPICOM_VERIFY_SIGNATURE_AND_CERTIFICATE	= 1
    } 	CAPICOM_SIGNED_DATA_VERIFY_FLAG;

typedef /* [public][public][public] */ 
enum __MIDL___MIDL_itf_capicom_0001_0066_0012
    {
        CAPICOM_ENCRYPTION_ALGORITHM_RC2	= 0,
        CAPICOM_ENCRYPTION_ALGORITHM_RC4	= 1,
        CAPICOM_ENCRYPTION_ALGORITHM_DES	= 2,
        CAPICOM_ENCRYPTION_ALGORITHM_3DES	= 3,
        CAPICOM_ENCRYPTION_ALGORITHM_AES	= 4
    } 	CAPICOM_ENCRYPTION_ALGORITHM;

typedef /* [public][public][public] */ 
enum __MIDL___MIDL_itf_capicom_0001_0066_0013
    {
        CAPICOM_ENCRYPTION_KEY_LENGTH_MAXIMUM	= 0,
        CAPICOM_ENCRYPTION_KEY_LENGTH_40_BITS	= 1,
        CAPICOM_ENCRYPTION_KEY_LENGTH_56_BITS	= 2,
        CAPICOM_ENCRYPTION_KEY_LENGTH_128_BITS	= 3,
        CAPICOM_ENCRYPTION_KEY_LENGTH_192_BITS	= 4,
        CAPICOM_ENCRYPTION_KEY_LENGTH_256_BITS	= 5
    } 	CAPICOM_ENCRYPTION_KEY_LENGTH;

typedef /* [public][public] */ 
enum __MIDL___MIDL_itf_capicom_0001_0066_0014
    {
        CAPICOM_SECRET_PASSWORD	= 0
    } 	CAPICOM_SECRET_TYPE;

typedef /* [public] */ 
enum __MIDL___MIDL_itf_capicom_0001_0066_0015
    {
        CAPICOM_KEY_ALGORITHM_OTHER	= 0,
        CAPICOM_KEY_ALGORITHM_RSA	= 1,
        CAPICOM_KEY_ALGORITHM_DSS	= 2
    } 	CAPICOM_KEY_ALGORITHM;

typedef /* [public][public][public] */ 
enum __MIDL___MIDL_itf_capicom_0001_0066_0016
    {
        CAPICOM_OID_OTHER	= 0,
        CAPICOM_OID_AUTHORITY_KEY_IDENTIFIER_EXTENSION	= 1,
        CAPICOM_OID_KEY_ATTRIBUTES_EXTENSION	= 2,
        CAPICOM_OID_CERT_POLICIES_95_EXTENSION	= 3,
        CAPICOM_OID_KEY_USAGE_RESTRICTION_EXTENSION	= 4,
        CAPICOM_OID_LEGACY_POLICY_MAPPINGS_EXTENSION	= 5,
        CAPICOM_OID_SUBJECT_ALT_NAME_EXTENSION	= 6,
        CAPICOM_OID_ISSUER_ALT_NAME_EXTENSION	= 7,
        CAPICOM_OID_BASIC_CONSTRAINTS_EXTENSION	= 8,
        CAPICOM_OID_SUBJECT_KEY_IDENTIFIER_EXTENSION	= 9,
        CAPICOM_OID_KEY_USAGE_EXTENSION	= 10,
        CAPICOM_OID_PRIVATEKEY_USAGE_PERIOD_EXTENSION	= 11,
        CAPICOM_OID_SUBJECT_ALT_NAME2_EXTENSION	= 12,
        CAPICOM_OID_ISSUER_ALT_NAME2_EXTENSION	= 13,
        CAPICOM_OID_BASIC_CONSTRAINTS2_EXTENSION	= 14,
        CAPICOM_OID_NAME_CONSTRAINTS_EXTENSION	= 15,
        CAPICOM_OID_CRL_DIST_POINTS_EXTENSION	= 16,
        CAPICOM_OID_CERT_POLICIES_EXTENSION	= 17,
        CAPICOM_OID_POLICY_MAPPINGS_EXTENSION	= 18,
        CAPICOM_OID_AUTHORITY_KEY_IDENTIFIER2_EXTENSION	= 19,
        CAPICOM_OID_POLICY_CONSTRAINTS_EXTENSION	= 20,
        CAPICOM_OID_ENHANCED_KEY_USAGE_EXTENSION	= 21,
        CAPICOM_OID_CERTIFICATE_TEMPLATE_EXTENSION	= 22,
        CAPICOM_OID_APPLICATION_CERT_POLICIES_EXTENSION	= 23,
        CAPICOM_OID_APPLICATION_POLICY_MAPPINGS_EXTENSION	= 24,
        CAPICOM_OID_APPLICATION_POLICY_CONSTRAINTS_EXTENSION	= 25,
        CAPICOM_OID_AUTHORITY_INFO_ACCESS_EXTENSION	= 26,
        CAPICOM_OID_SERVER_AUTH_EKU	= 100,
        CAPICOM_OID_CLIENT_AUTH_EKU	= 101,
        CAPICOM_OID_CODE_SIGNING_EKU	= 102,
        CAPICOM_OID_EMAIL_PROTECTION_EKU	= 103,
        CAPICOM_OID_IPSEC_END_SYSTEM_EKU	= 104,
        CAPICOM_OID_IPSEC_TUNNEL_EKU	= 105,
        CAPICOM_OID_IPSEC_USER_EKU	= 106,
        CAPICOM_OID_TIME_STAMPING_EKU	= 107,
        CAPICOM_OID_CTL_USAGE_SIGNING_EKU	= 108,
        CAPICOM_OID_TIME_STAMP_SIGNING_EKU	= 109,
        CAPICOM_OID_SERVER_GATED_CRYPTO_EKU	= 110,
        CAPICOM_OID_ENCRYPTING_FILE_SYSTEM_EKU	= 111,
        CAPICOM_OID_EFS_RECOVERY_EKU	= 112,
        CAPICOM_OID_WHQL_CRYPTO_EKU	= 113,
        CAPICOM_OID_NT5_CRYPTO_EKU	= 114,
        CAPICOM_OID_OEM_WHQL_CRYPTO_EKU	= 115,
        CAPICOM_OID_EMBEDED_NT_CRYPTO_EKU	= 116,
        CAPICOM_OID_ROOT_LIST_SIGNER_EKU	= 117,
        CAPICOM_OID_QUALIFIED_SUBORDINATION_EKU	= 118,
        CAPICOM_OID_KEY_RECOVERY_EKU	= 119,
        CAPICOM_OID_DIGITAL_RIGHTS_EKU	= 120,
        CAPICOM_OID_LICENSES_EKU	= 121,
        CAPICOM_OID_LICENSE_SERVER_EKU	= 122,
        CAPICOM_OID_SMART_CARD_LOGON_EKU	= 123,
        CAPICOM_OID_PKIX_POLICY_QUALIFIER_CPS	= 124,
        CAPICOM_OID_PKIX_POLICY_QUALIFIER_USERNOTICE	= 125
    } 	CAPICOM_OID;

typedef /* [public][public][public][public] */ 
enum __MIDL___MIDL_itf_capicom_0001_0066_0017
    {
        CAPICOM_PROPID_UNKNOWN	= 0,
        CAPICOM_PROPID_KEY_PROV_HANDLE	= 1,
        CAPICOM_PROPID_KEY_PROV_INFO	= 2,
        CAPICOM_PROPID_SHA1_HASH	= 3,
        CAPICOM_PROPID_HASH_PROP	= 3,
        CAPICOM_PROPID_MD5_HASH	= 4,
        CAPICOM_PROPID_KEY_CONTEXT	= 5,
        CAPICOM_PROPID_KEY_SPEC	= 6,
        CAPICOM_PROPID_IE30_RESERVED	= 7,
        CAPICOM_PROPID_PUBKEY_HASH_RESERVED	= 8,
        CAPICOM_PROPID_ENHKEY_USAGE	= 9,
        CAPICOM_PROPID_CTL_USAGE	= 9,
        CAPICOM_PROPID_NEXT_UPDATE_LOCATION	= 10,
        CAPICOM_PROPID_FRIENDLY_NAME	= 11,
        CAPICOM_PROPID_PVK_FILE	= 12,
        CAPICOM_PROPID_DESCRIPTION	= 13,
        CAPICOM_PROPID_ACCESS_STATE	= 14,
        CAPICOM_PROPID_SIGNATURE_HASH	= 15,
        CAPICOM_PROPID_SMART_CARD_DATA	= 16,
        CAPICOM_PROPID_EFS	= 17,
        CAPICOM_PROPID_FORTEZZA_DATA	= 18,
        CAPICOM_PROPID_ARCHIVED	= 19,
        CAPICOM_PROPID_KEY_IDENTIFIER	= 20,
        CAPICOM_PROPID_AUTO_ENROLL	= 21,
        CAPICOM_PROPID_PUBKEY_ALG_PARA	= 22,
        CAPICOM_PROPID_CROSS_CERT_DIST_POINTS	= 23,
        CAPICOM_PROPID_ISSUER_PUBLIC_KEY_MD5_HASH	= 24,
        CAPICOM_PROPID_SUBJECT_PUBLIC_KEY_MD5_HASH	= 25,
        CAPICOM_PROPID_ENROLLMENT	= 26,
        CAPICOM_PROPID_DATE_STAMP	= 27,
        CAPICOM_PROPID_ISSUER_SERIAL_NUMBER_MD5_HASH	= 28,
        CAPICOM_PROPID_SUBJECT_NAME_MD5_HASH	= 29,
        CAPICOM_PROPID_EXTENDED_ERROR_INFO	= 30,
        CAPICOM_PROPID_RENEWAL	= 64,
        CAPICOM_PROPID_ARCHIVED_KEY_HASH	= 65,
        CAPICOM_PROPID_FIRST_RESERVED	= 66,
        CAPICOM_PROPID_LAST_RESERVED	= 32767,
        CAPICOM_PROPID_FIRST_USER	= 32768,
        CAPICOM_PROPID_LAST_USER	= 65535
    } 	CAPICOM_PROPID;

typedef /* [public][public][public] */ 
enum __MIDL___MIDL_itf_capicom_0001_0066_0018
    {
        CAPICOM_PROV_RSA_FULL	= 1,
        CAPICOM_PROV_RSA_SIG	= 2,
        CAPICOM_PROV_DSS	= 3,
        CAPICOM_PROV_FORTEZZA	= 4,
        CAPICOM_PROV_MS_EXCHANGE	= 5,
        CAPICOM_PROV_SSL	= 6,
        CAPICOM_PROV_RSA_SCHANNEL	= 12,
        CAPICOM_PROV_DSS_DH	= 13,
        CAPICOM_PROV_EC_ECDSA_SIG	= 14,
        CAPICOM_PROV_EC_ECNRA_SIG	= 15,
        CAPICOM_PROV_EC_ECDSA_FULL	= 16,
        CAPICOM_PROV_EC_ECNRA_FULL	= 17,
        CAPICOM_PROV_DH_SCHANNEL	= 18,
        CAPICOM_PROV_SPYRUS_LYNKS	= 20,
        CAPICOM_PROV_RNG	= 21,
        CAPICOM_PROV_INTEL_SEC	= 22,
        CAPICOM_PROV_REPLACE_OWF	= 23,
        CAPICOM_PROV_RSA_AES	= 24
    } 	CAPICOM_PROV_TYPE;

typedef /* [public][public] */ 
enum __MIDL___MIDL_itf_capicom_0001_0066_0019
    {
        CAPICOM_CERTIFICATE_SAVE_AS_PFX	= 0,
        CAPICOM_CERTIFICATE_SAVE_AS_CER	= 1
    } 	CAPICOM_CERTIFICATE_SAVE_AS_TYPE;

typedef /* [public][public] */ 
enum __MIDL___MIDL_itf_capicom_0001_0066_0020
    {
        CAPICOM_CERTIFICATES_SAVE_AS_SERIALIZED	= 0,
        CAPICOM_CERTIFICATES_SAVE_AS_PKCS7	= 1,
        CAPICOM_CERTIFICATES_SAVE_AS_PFX	= 2
    } 	CAPICOM_CERTIFICATES_SAVE_AS_TYPE;

typedef /* [public][public][public][public] */ 
enum __MIDL___MIDL_itf_capicom_0001_0066_0021
    {
        CAPICOM_CERTIFICATE_INCLUDE_CHAIN_EXCEPT_ROOT	= 0,
        CAPICOM_CERTIFICATE_INCLUDE_WHOLE_CHAIN	= 1,
        CAPICOM_CERTIFICATE_INCLUDE_END_ENTITY_ONLY	= 2
    } 	CAPICOM_CERTIFICATE_INCLUDE_OPTION;

typedef /* [public][public][public] */ 
enum __MIDL___MIDL_itf_capicom_0001_0066_0022
    {
        CAPICOM_KEY_SPEC_KEYEXCHANGE	= 1,
        CAPICOM_KEY_SPEC_SIGNATURE	= 2
    } 	CAPICOM_KEY_SPEC;

typedef /* [public][public] */ 
enum __MIDL___MIDL_itf_capicom_0001_0066_0023
    {
        CAPICOM_CURRENT_USER_KEY	= 0,
        CAPICOM_LOCAL_MACHINE_KEY	= 1
    } 	CAPICOM_KEY_LOCATION;

typedef /* [public][public][public] */ 
enum __MIDL___MIDL_itf_capicom_0001_0066_0024
    {
        CAPICOM_KEY_STORAGE_DEFAULT	= 0,
        CAPICOM_KEY_STORAGE_EXPORTABLE	= 1,
        CAPICOM_KEY_STORAGE_USER_PROTECTED	= 2
    } 	CAPICOM_KEY_STORAGE_FLAG;

typedef /* [public][public] */ 
enum __MIDL___MIDL_itf_capicom_0001_0066_0025
    {
        CAPICOM_EXPORT_DEFAULT	= 0,
        CAPICOM_EXPORT_IGNORE_PRIVATE_KEY_NOT_EXPORTABLE_ERROR	= 1
    } 	CAPICOM_EXPORT_FLAG;

typedef /* [public] */ 
enum __MIDL___MIDL_itf_capicom_0001_0066_0026
    {
        CAPICOM_DIGITAL_SIGNATURE_KEY_USAGE	= 128,
        CAPICOM_NON_REPUDIATION_KEY_USAGE	= 64,
        CAPICOM_KEY_ENCIPHERMENT_KEY_USAGE	= 32,
        CAPICOM_DATA_ENCIPHERMENT_KEY_USAGE	= 16,
        CAPICOM_KEY_AGREEMENT_KEY_USAGE	= 8,
        CAPICOM_KEY_CERT_SIGN_KEY_USAGE	= 4,
        CAPICOM_OFFLINE_CRL_SIGN_KEY_USAGE	= 2,
        CAPICOM_CRL_SIGN_KEY_USAGE	= 2,
        CAPICOM_ENCIPHER_ONLY_KEY_USAGE	= 1,
        CAPICOM_DECIPHER_ONLY_KEY_USAGE	= 32768
    } 	CAPICOM_KEY_USAGE;

typedef /* [public][public] */ 
enum __MIDL___MIDL_itf_capicom_0001_0066_0027
    {
        CAPICOM_CERTIFICATE_FIND_SHA1_HASH	= 0,
        CAPICOM_CERTIFICATE_FIND_SUBJECT_NAME	= 1,
        CAPICOM_CERTIFICATE_FIND_ISSUER_NAME	= 2,
        CAPICOM_CERTIFICATE_FIND_ROOT_NAME	= 3,
        CAPICOM_CERTIFICATE_FIND_TEMPLATE_NAME	= 4,
        CAPICOM_CERTIFICATE_FIND_EXTENSION	= 5,
        CAPICOM_CERTIFICATE_FIND_EXTENDED_PROPERTY	= 6,
        CAPICOM_CERTIFICATE_FIND_APPLICATION_POLICY	= 7,
        CAPICOM_CERTIFICATE_FIND_CERTIFICATE_POLICY	= 8,
        CAPICOM_CERTIFICATE_FIND_TIME_VALID	= 9,
        CAPICOM_CERTIFICATE_FIND_TIME_NOT_YET_VALID	= 10,
        CAPICOM_CERTIFICATE_FIND_TIME_EXPIRED	= 11,
        CAPICOM_CERTIFICATE_FIND_KEY_USAGE	= 12
    } 	CAPICOM_CERTIFICATE_FIND_TYPE;

typedef /* [public][public][public] */ 
enum __MIDL___MIDL_itf_capicom_0001_0066_0028
    {
        CAPICOM_HASH_ALGORITHM_SHA1	= 0,
        CAPICOM_HASH_ALGORITHM_MD2	= 1,
        CAPICOM_HASH_ALGORITHM_MD4	= 2,
        CAPICOM_HASH_ALGORITHM_MD5	= 3,
        CAPICOM_HASH_ALGORITHM_SHA_256	= 4,
        CAPICOM_HASH_ALGORITHM_SHA_384	= 5,
        CAPICOM_HASH_ALGORITHM_SHA_512	= 6
    } 	CAPICOM_HASH_ALGORITHM;


EXTERN_C const IID LIBID_CAPICOM;


#ifndef __Constants_MODULE_DEFINED__
#define __Constants_MODULE_DEFINED__


/* module Constants */
/* [dllname] */ 

const long CAPICOM_MAJOR_VERSION	=	2;

const long CAPICOM_MINOR_VERSION	=	1;

const long CAPICOM_RELEASE_NUMBER	=	0;

const long CAPICOM_BUILD_NUMBER	=	1;

const LPSTR CAPICOM_VERSION_INFO	=	"CAPICOM v2.1";

const LPSTR CAPICOM_COPY_RIGHT	=	"Copyright (c) Microsoft Corporation 1999-2004. All rights reserved.";

const LPSTR CAPICOM_MY_STORE	=	"My";

const LPSTR CAPICOM_CA_STORE	=	"Ca";

const LPSTR CAPICOM_ROOT_STORE	=	"Root";

const LPSTR CAPICOM_OTHER_STORE	=	"AddressBook";

const LPSTR CAPICOM_OID_SERVER_AUTH	=	"1.3.6.1.5.5.7.3.1";

const LPSTR CAPICOM_OID_CLIENT_AUTH	=	"1.3.6.1.5.5.7.3.2";

const LPSTR CAPICOM_OID_CODE_SIGNING	=	"1.3.6.1.5.5.7.3.3";

const LPSTR CAPICOM_OID_EMAIL_PROTECTION	=	"1.3.6.1.5.5.7.3.4";

const LPSTR CAPICOM_OID_IPSEC_END_SYSTEM	=	"1.3.6.1.5.5.7.3.5";

const LPSTR CAPICOM_OID_IPSEC_TUNNEL	=	"1.3.6.1.5.5.7.3.6";

const LPSTR CAPICOM_OID_IPSEC_USER	=	"1.3.6.1.5.5.7.3.7";

const LPSTR CAPICOM_OID_TIME_STAMPING	=	"1.3.6.1.5.5.7.3.8";

const LPSTR CAPICOM_OID_CTL_USAGE_SIGNING	=	"1.3.6.1.4.1.311.10.3.1";

const LPSTR CAPICOM_OID_TIME_STAMP_SIGNING	=	"1.3.6.1.4.1.311.10.3.2";

const LPSTR CAPICOM_OID_SERVER_GATED_CRYPTO	=	"1.3.6.1.4.1.311.10.3.3";

const LPSTR CAPICOM_OID_ENCRYPTING_FILE_SYSTEM	=	"1.3.6.1.4.1.311.10.3.4";

const LPSTR CAPICOM_OID_EFS_RECOVERY	=	"1.3.6.1.4.1.311.10.3.4.1";

const LPSTR CAPICOM_OID_WHQL_CRYPTO	=	"1.3.6.1.4.1.311.10.3.5";

const LPSTR CAPICOM_OID_NT5_CRYPTO	=	"1.3.6.1.4.1.311.10.3.6";

const LPSTR CAPICOM_OID_OEM_WHQL_CRYPTO	=	"1.3.6.1.4.1.311.10.3.7";

const LPSTR CAPICOM_OID_EMBEDED_NT_CRYPTO	=	"1.3.6.1.4.1.311.10.3.8";

const LPSTR CAPICOM_OID_ROOT_LIST_SIGNER	=	"1.3.6.1.4.1.311.10.3.9";

const LPSTR CAPICOM_OID_QUALIFIED_SUBORDINATION	=	"1.3.6.1.4.1.311.10.3.10";

const LPSTR CAPICOM_OID_KEY_RECOVERY	=	"1.3.6.1.4.1.311.10.3.11";

const LPSTR CAPICOM_OID_DIGITAL_RIGHTS	=	"1.3.6.1.4.1.311.10.5.1";

const LPSTR CAPICOM_OID_LICENSES	=	"1.3.6.1.4.1.311.10.6.1";

const LPSTR CAPICOM_OID_LICENSE_SERVER	=	"1.3.6.1.4.1.311.10.6.2";

const LPSTR CAPICOM_OID_SMART_CARD_LOGON	=	"1.3.6.1.4.1.311.20.2.2";

const LPSTR CAPICOM_SERVER_AUTH_OID	=	"1.3.6.1.5.5.7.3.1";

const LPSTR CAPICOM_CLIENT_AUTH_OID	=	"1.3.6.1.5.5.7.3.2";

const LPSTR CAPICOM_CODE_SIGNING_OID	=	"1.3.6.1.5.5.7.3.3";

const LPSTR CAPICOM_EMAIL_PROTECTION_OID	=	"1.3.6.1.5.5.7.3.4";

const LPSTR CAPICOM_IPSEC_END_SYSTEM_OID	=	"1.3.6.1.5.5.7.3.5";

const LPSTR CAPICOM_IPSEC_TUNNEL_OID	=	"1.3.6.1.5.5.7.3.6";

const LPSTR CAPICOM_IPSEC_USER_OID	=	"1.3.6.1.5.5.7.3.7";

const LPSTR CAPICOM_TIME_STAMPING_OID	=	"1.3.6.1.5.5.7.3.8";

const LPSTR CAPICOM_CTL_USAGE_SIGNING_OID	=	"1.3.6.1.4.1.311.10.3.1";

const LPSTR CAPICOM_TIME_STAMP_SIGNING_OID	=	"1.3.6.1.4.1.311.10.3.2";

const LPSTR CAPICOM_SERVER_GATED_CRYPTO_OID	=	"1.3.6.1.4.1.311.10.3.3";

const LPSTR CAPICOM_ENCRYPTING_FILE_SYSTEM_OID	=	"1.3.6.1.4.1.311.10.3.4";

const LPSTR CAPICOM_EFS_RECOVERY_OID	=	"1.3.6.1.4.1.311.10.3.4.1";

const LPSTR CAPICOM_WHQL_CRYPTO_OID	=	"1.3.6.1.4.1.311.10.3.5";

const LPSTR CAPICOM_NT5_CRYPTO_OID	=	"1.3.6.1.4.1.311.10.3.6";

const LPSTR CAPICOM_OEM_WHQL_CRYPTO_OID	=	"1.3.6.1.4.1.311.10.3.7";

const LPSTR CAPICOM_EMBEDED_NT_CRYPTO_OID	=	"1.3.6.1.4.1.311.10.3.8";

const LPSTR CAPICOM_ROOT_LIST_SIGNER_OID	=	"1.3.6.1.4.1.311.10.3.9";

const LPSTR CAPICOM_QUALIFIED_SUBORDINATION_OID	=	"1.3.6.1.4.1.311.10.3.10";

const LPSTR CAPICOM_KEY_RECOVERY_OID	=	"1.3.6.1.4.1.311.10.3.11";

const LPSTR CAPICOM_DIGITAL_RIGHTS_OID	=	"1.3.6.1.4.1.311.10.5.1";

const LPSTR CAPICOM_LICENSES_OID	=	"1.3.6.1.4.1.311.10.6.1";

const LPSTR CAPICOM_LICENSE_SERVER_OID	=	"1.3.6.1.4.1.311.10.6.2";

const LPSTR CAPICOM_SMART_CARD_LOGON_OID	=	"1.3.6.1.4.1.311.20.2.2";

const LPSTR CAPICOM_ANY_APPLICATION_POLICY_OID	=	"1.3.6.1.4.1.311.10.12.1";

const LPSTR CAPICOM_ANY_CERT_POLICY_OID	=	"2.5.29.32.0";

const LPSTR CAPICOM_AUTHORITY_KEY_IDENTIFIER_OID	=	"2.5.29.1";

const LPSTR CAPICOM_KEY_ATTRIBUTES_OID	=	"2.5.29.2";

const LPSTR CAPICOM_CERT_POLICIES_95_OID	=	"2.5.29.3";

const LPSTR CAPICOM_KEY_USAGE_RESTRICTION_OID	=	"2.5.29.4";

const LPSTR CAPICOM_LEGACY_POLICY_MAPPINGS_OID	=	"2.5.29.5";

const LPSTR CAPICOM_SUBJECT_ALT_NAME_OID	=	"2.5.29.7";

const LPSTR CAPICOM_ISSUER_ALT_NAME_OID	=	"2.5.29.8";

const LPSTR CAPICOM_BASIC_CONSTRAINTS_OID	=	"2.5.29.10";

const LPSTR CAPICOM_SUBJECT_KEY_IDENTIFIER_OID	=	"2.5.29.14";

const LPSTR CAPICOM_KEY_USAGE_OID	=	"2.5.29.15";

const LPSTR CAPICOM_PRIVATEKEY_USAGE_PERIOD_OID	=	"2.5.29.16";

const LPSTR CAPICOM_SUBJECT_ALT_NAME2_OID	=	"2.5.29.17";

const LPSTR CAPICOM_ISSUER_ALT_NAME2_OID	=	"2.5.29.18";

const LPSTR CAPICOM_BASIC_CONSTRAINTS2_OID	=	"2.5.29.19";

const LPSTR CAPICOM_NAME_CONSTRAINTS_OID	=	"2.5.29.30";

const LPSTR CAPICOM_CRL_DIST_POINTS_OID	=	"2.5.29.31";

const LPSTR CAPICOM_CERT_POLICIES_OID	=	"2.5.29.32";

const LPSTR CAPICOM_POLICY_MAPPINGS_OID	=	"2.5.29.33";

const LPSTR CAPICOM_AUTHORITY_KEY_IDENTIFIER2_OID	=	"2.5.29.35";

const LPSTR CAPICOM_POLICY_CONSTRAINTS_OID	=	"2.5.29.36";

const LPSTR CAPICOM_ENHANCED_KEY_USAGE_OID	=	"2.5.29.37";

const LPSTR CAPICOM_CERTIFICATE_TEMPLATE_OID	=	"1.3.6.1.4.1.311.21.7";

const LPSTR CAPICOM_APPLICATION_CERT_POLICIES_OID	=	"1.3.6.1.4.1.311.21.10";

const LPSTR CAPICOM_APPLICATION_POLICY_MAPPINGS_OID	=	"1.3.6.1.4.1.311.21.11";

const LPSTR CAPICOM_APPLICATION_POLICY_CONSTRAINTS_OID	=	"1.3.6.1.4.1.311.21.12";

const LPSTR CAPICOM_AUTHORITY_INFO_ACCESS_OID	=	"1.3.6.1.5.5.7.1.1";

const LPSTR CAPICOM_PKIX_POLICY_QUALIFIER_CPS_OID	=	"1.3.6.1.5.5.7.2.1";

const LPSTR CAPICOM_PKIX_POLICY_QUALIFIER_USERNOTICE_OID	=	"1.3.6.1.5.5.7.2.2";

const long CAPICOM_TRUST_IS_NOT_TIME_VALID	=	1;

const long CAPICOM_TRUST_IS_NOT_TIME_NESTED	=	2;

const long CAPICOM_TRUST_IS_REVOKED	=	4;

const long CAPICOM_TRUST_IS_NOT_SIGNATURE_VALID	=	8;

const long CAPICOM_TRUST_IS_NOT_VALID_FOR_USAGE	=	16;

const long CAPICOM_TRUST_IS_UNTRUSTED_ROOT	=	32;

const long CAPICOM_TRUST_REVOCATION_STATUS_UNKNOWN	=	64;

const long CAPICOM_TRUST_IS_CYCLIC	=	128;

const long CAPICOM_TRUST_INVALID_EXTENSION	=	256;

const long CAPICOM_TRUST_INVALID_POLICY_CONSTRAINTS	=	512;

const long CAPICOM_TRUST_INVALID_BASIC_CONSTRAINTS	=	1024;

const long CAPICOM_TRUST_INVALID_NAME_CONSTRAINTS	=	2048;

const long CAPICOM_TRUST_HAS_NOT_SUPPORTED_NAME_CONSTRAINT	=	4096;

const long CAPICOM_TRUST_HAS_NOT_DEFINED_NAME_CONSTRAINT	=	8192;

const long CAPICOM_TRUST_HAS_NOT_PERMITTED_NAME_CONSTRAINT	=	16384;

const long CAPICOM_TRUST_HAS_EXCLUDED_NAME_CONSTRAINT	=	32768;

const long CAPICOM_TRUST_IS_OFFLINE_REVOCATION	=	0x1000000;

const long CAPICOM_TRUST_NO_ISSUANCE_CHAIN_POLICY	=	0x2000000;

const long CAPICOM_TRUST_IS_PARTIAL_CHAIN	=	0x10000;

const long CAPICOM_TRUST_CTL_IS_NOT_TIME_VALID	=	0x20000;

const long CAPICOM_TRUST_CTL_IS_NOT_SIGNATURE_VALID	=	0x40000;

const long CAPICOM_TRUST_CTL_IS_NOT_VALID_FOR_USAGE	=	0x80000;

const LPSTR CAPICOM_PROV_MS_DEF_PROV	=	"Microsoft Base Cryptographic Provider v1.0";

const LPSTR CAPICOM_PROV_MS_ENHANCED_PROV	=	"Microsoft Enhanced Cryptographic Provider v1.0";

const LPSTR CAPICOM_PROV_MS_STRONG_PROV	=	"Microsoft Strong Cryptographic Provider";

const LPSTR CAPICOM_PROV_MS_DEF_RSA_SIG_PROV	=	"Microsoft RSA Signature Cryptographic Provider";

const LPSTR CAPICOM_PROV_MS_DEF_RSA_SCHANNEL_PROV	=	"Microsoft RSA SChannel Cryptographic Provider";

const LPSTR CAPICOM_PROV_MS_DEF_DSS_PROV	=	"Microsoft Base DSS Cryptographic Provider";

const LPSTR CAPICOM_PROV_MS_DEF_DSS_DH_PROV	=	"Microsoft Base DSS and Diffie-Hellman Cryptographic Provider";

const LPSTR CAPICOM_PROV_MS_ENH_DSS_DH_PROV	=	"Microsoft Enhanced DSS and Diffie-Hellman Cryptographic Provider";

const LPSTR CAPICOM_PROV_MS_DEF_DH_SCHANNEL_PROV	=	"Microsoft DH SChannel Cryptographic Provider";

const LPSTR CAPICOM_PROV_MS_SCARD_PROV	=	"Microsoft Base Smart Card Crypto Provider";

const LPSTR CAPICOM_PROV_MS_ENH_RSA_AES_PROV	=	"Microsoft Enhanced RSA and AES Cryptographic Provider (Prototype)";

#endif /* __Constants_MODULE_DEFINED__ */

#ifndef __ISettings_INTERFACE_DEFINED__
#define __ISettings_INTERFACE_DEFINED__

/* interface ISettings */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_ISettings;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("A24104F5-46D0-4C0F-926D-665565908E91")
    ISettings : public IDispatch
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_EnablePromptForCertificateUI( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_EnablePromptForCertificateUI( 
            /* [defaultvalue][in] */ VARIANT_BOOL pVal = 0) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ActiveDirectorySearchLocation( 
            /* [retval][out] */ CAPICOM_ACTIVE_DIRECTORY_SEARCH_LOCATION *pVal) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ActiveDirectorySearchLocation( 
            /* [defaultvalue][in] */ CAPICOM_ACTIVE_DIRECTORY_SEARCH_LOCATION pVal = CAPICOM_SEARCH_ANY) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ISettingsVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISettings * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISettings * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISettings * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISettings * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISettings * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISettings * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISettings * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        DECLSPEC_XFGVIRT(ISettings, get_EnablePromptForCertificateUI)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_EnablePromptForCertificateUI )( 
            ISettings * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        DECLSPEC_XFGVIRT(ISettings, put_EnablePromptForCertificateUI)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_EnablePromptForCertificateUI )( 
            ISettings * This,
            /* [defaultvalue][in] */ VARIANT_BOOL pVal);
        
        DECLSPEC_XFGVIRT(ISettings, get_ActiveDirectorySearchLocation)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ActiveDirectorySearchLocation )( 
            ISettings * This,
            /* [retval][out] */ CAPICOM_ACTIVE_DIRECTORY_SEARCH_LOCATION *pVal);
        
        DECLSPEC_XFGVIRT(ISettings, put_ActiveDirectorySearchLocation)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ActiveDirectorySearchLocation )( 
            ISettings * This,
            /* [defaultvalue][in] */ CAPICOM_ACTIVE_DIRECTORY_SEARCH_LOCATION pVal);
        
        END_INTERFACE
    } ISettingsVtbl;

    interface ISettings
    {
        CONST_VTBL struct ISettingsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISettings_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISettings_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISettings_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISettings_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISettings_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISettings_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISettings_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ISettings_get_EnablePromptForCertificateUI(This,pVal)	\
    ( (This)->lpVtbl -> get_EnablePromptForCertificateUI(This,pVal) ) 

#define ISettings_put_EnablePromptForCertificateUI(This,pVal)	\
    ( (This)->lpVtbl -> put_EnablePromptForCertificateUI(This,pVal) ) 

#define ISettings_get_ActiveDirectorySearchLocation(This,pVal)	\
    ( (This)->lpVtbl -> get_ActiveDirectorySearchLocation(This,pVal) ) 

#define ISettings_put_ActiveDirectorySearchLocation(This,pVal)	\
    ( (This)->lpVtbl -> put_ActiveDirectorySearchLocation(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISettings_INTERFACE_DEFINED__ */


#ifndef __IEKU_INTERFACE_DEFINED__
#define __IEKU_INTERFACE_DEFINED__

/* interface IEKU */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IEKU;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("976B7E6D-1002-4051-BFD4-824A74BD74E2")
    IEKU : public IDispatch
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ CAPICOM_EKU *pVal) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_Name( 
            /* [in] */ CAPICOM_EKU pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_OID( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_OID( 
            /* [in] */ BSTR pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IEKUVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IEKU * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IEKU * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IEKU * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IEKU * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IEKU * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IEKU * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IEKU * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        DECLSPEC_XFGVIRT(IEKU, get_Name)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IEKU * This,
            /* [retval][out] */ CAPICOM_EKU *pVal);
        
        DECLSPEC_XFGVIRT(IEKU, put_Name)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Name )( 
            IEKU * This,
            /* [in] */ CAPICOM_EKU pVal);
        
        DECLSPEC_XFGVIRT(IEKU, get_OID)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_OID )( 
            IEKU * This,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(IEKU, put_OID)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_OID )( 
            IEKU * This,
            /* [in] */ BSTR pVal);
        
        END_INTERFACE
    } IEKUVtbl;

    interface IEKU
    {
        CONST_VTBL struct IEKUVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IEKU_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IEKU_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IEKU_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IEKU_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IEKU_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IEKU_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IEKU_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IEKU_get_Name(This,pVal)	\
    ( (This)->lpVtbl -> get_Name(This,pVal) ) 

#define IEKU_put_Name(This,pVal)	\
    ( (This)->lpVtbl -> put_Name(This,pVal) ) 

#define IEKU_get_OID(This,pVal)	\
    ( (This)->lpVtbl -> get_OID(This,pVal) ) 

#define IEKU_put_OID(This,pVal)	\
    ( (This)->lpVtbl -> put_OID(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IEKU_INTERFACE_DEFINED__ */


#ifndef __IEKUs_INTERFACE_DEFINED__
#define __IEKUs_INTERFACE_DEFINED__

/* interface IEKUs */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IEKUs;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47C87CEC-8C4B-4E3C-8D22-34280274EFD1")
    IEKUs : public IDispatch
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ long Index,
            /* [retval][out] */ VARIANT *pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][restricted][propget][id] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IUnknown **pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IEKUsVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IEKUs * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IEKUs * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IEKUs * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IEKUs * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IEKUs * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IEKUs * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IEKUs * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        DECLSPEC_XFGVIRT(IEKUs, get_Item)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            IEKUs * This,
            /* [in] */ long Index,
            /* [retval][out] */ VARIANT *pVal);
        
        DECLSPEC_XFGVIRT(IEKUs, get_Count)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IEKUs * This,
            /* [retval][out] */ long *pVal);
        
        DECLSPEC_XFGVIRT(IEKUs, get__NewEnum)
        /* [helpstring][restricted][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            IEKUs * This,
            /* [retval][out] */ IUnknown **pVal);
        
        END_INTERFACE
    } IEKUsVtbl;

    interface IEKUs
    {
        CONST_VTBL struct IEKUsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IEKUs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IEKUs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IEKUs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IEKUs_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IEKUs_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IEKUs_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IEKUs_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IEKUs_get_Item(This,Index,pVal)	\
    ( (This)->lpVtbl -> get_Item(This,Index,pVal) ) 

#define IEKUs_get_Count(This,pVal)	\
    ( (This)->lpVtbl -> get_Count(This,pVal) ) 

#define IEKUs_get__NewEnum(This,pVal)	\
    ( (This)->lpVtbl -> get__NewEnum(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IEKUs_INTERFACE_DEFINED__ */


#ifndef __IKeyUsage_INTERFACE_DEFINED__
#define __IKeyUsage_INTERFACE_DEFINED__

/* interface IKeyUsage */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IKeyUsage;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("41DD35A8-9FF9-45A6-9A7C-F65B2F085D1F")
    IKeyUsage : public IDispatch
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_IsPresent( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_IsCritical( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_IsDigitalSignatureEnabled( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_IsNonRepudiationEnabled( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_IsKeyEnciphermentEnabled( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_IsDataEnciphermentEnabled( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_IsKeyAgreementEnabled( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_IsKeyCertSignEnabled( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_IsCRLSignEnabled( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_IsEncipherOnlyEnabled( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_IsDecipherOnlyEnabled( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IKeyUsageVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IKeyUsage * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IKeyUsage * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IKeyUsage * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IKeyUsage * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IKeyUsage * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IKeyUsage * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IKeyUsage * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        DECLSPEC_XFGVIRT(IKeyUsage, get_IsPresent)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_IsPresent )( 
            IKeyUsage * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        DECLSPEC_XFGVIRT(IKeyUsage, get_IsCritical)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_IsCritical )( 
            IKeyUsage * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        DECLSPEC_XFGVIRT(IKeyUsage, get_IsDigitalSignatureEnabled)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_IsDigitalSignatureEnabled )( 
            IKeyUsage * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        DECLSPEC_XFGVIRT(IKeyUsage, get_IsNonRepudiationEnabled)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_IsNonRepudiationEnabled )( 
            IKeyUsage * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        DECLSPEC_XFGVIRT(IKeyUsage, get_IsKeyEnciphermentEnabled)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_IsKeyEnciphermentEnabled )( 
            IKeyUsage * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        DECLSPEC_XFGVIRT(IKeyUsage, get_IsDataEnciphermentEnabled)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_IsDataEnciphermentEnabled )( 
            IKeyUsage * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        DECLSPEC_XFGVIRT(IKeyUsage, get_IsKeyAgreementEnabled)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_IsKeyAgreementEnabled )( 
            IKeyUsage * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        DECLSPEC_XFGVIRT(IKeyUsage, get_IsKeyCertSignEnabled)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_IsKeyCertSignEnabled )( 
            IKeyUsage * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        DECLSPEC_XFGVIRT(IKeyUsage, get_IsCRLSignEnabled)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_IsCRLSignEnabled )( 
            IKeyUsage * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        DECLSPEC_XFGVIRT(IKeyUsage, get_IsEncipherOnlyEnabled)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_IsEncipherOnlyEnabled )( 
            IKeyUsage * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        DECLSPEC_XFGVIRT(IKeyUsage, get_IsDecipherOnlyEnabled)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_IsDecipherOnlyEnabled )( 
            IKeyUsage * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        END_INTERFACE
    } IKeyUsageVtbl;

    interface IKeyUsage
    {
        CONST_VTBL struct IKeyUsageVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IKeyUsage_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IKeyUsage_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IKeyUsage_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IKeyUsage_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IKeyUsage_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IKeyUsage_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IKeyUsage_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IKeyUsage_get_IsPresent(This,pVal)	\
    ( (This)->lpVtbl -> get_IsPresent(This,pVal) ) 

#define IKeyUsage_get_IsCritical(This,pVal)	\
    ( (This)->lpVtbl -> get_IsCritical(This,pVal) ) 

#define IKeyUsage_get_IsDigitalSignatureEnabled(This,pVal)	\
    ( (This)->lpVtbl -> get_IsDigitalSignatureEnabled(This,pVal) ) 

#define IKeyUsage_get_IsNonRepudiationEnabled(This,pVal)	\
    ( (This)->lpVtbl -> get_IsNonRepudiationEnabled(This,pVal) ) 

#define IKeyUsage_get_IsKeyEnciphermentEnabled(This,pVal)	\
    ( (This)->lpVtbl -> get_IsKeyEnciphermentEnabled(This,pVal) ) 

#define IKeyUsage_get_IsDataEnciphermentEnabled(This,pVal)	\
    ( (This)->lpVtbl -> get_IsDataEnciphermentEnabled(This,pVal) ) 

#define IKeyUsage_get_IsKeyAgreementEnabled(This,pVal)	\
    ( (This)->lpVtbl -> get_IsKeyAgreementEnabled(This,pVal) ) 

#define IKeyUsage_get_IsKeyCertSignEnabled(This,pVal)	\
    ( (This)->lpVtbl -> get_IsKeyCertSignEnabled(This,pVal) ) 

#define IKeyUsage_get_IsCRLSignEnabled(This,pVal)	\
    ( (This)->lpVtbl -> get_IsCRLSignEnabled(This,pVal) ) 

#define IKeyUsage_get_IsEncipherOnlyEnabled(This,pVal)	\
    ( (This)->lpVtbl -> get_IsEncipherOnlyEnabled(This,pVal) ) 

#define IKeyUsage_get_IsDecipherOnlyEnabled(This,pVal)	\
    ( (This)->lpVtbl -> get_IsDecipherOnlyEnabled(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IKeyUsage_INTERFACE_DEFINED__ */


#ifndef __IExtendedKeyUsage_INTERFACE_DEFINED__
#define __IExtendedKeyUsage_INTERFACE_DEFINED__

/* interface IExtendedKeyUsage */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IExtendedKeyUsage;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7289D408-987D-45D1-8DEE-CF9E91C2E90E")
    IExtendedKeyUsage : public IDispatch
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_IsPresent( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_IsCritical( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_EKUs( 
            /* [retval][out] */ IEKUs **pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IExtendedKeyUsageVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IExtendedKeyUsage * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IExtendedKeyUsage * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IExtendedKeyUsage * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IExtendedKeyUsage * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IExtendedKeyUsage * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IExtendedKeyUsage * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IExtendedKeyUsage * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        DECLSPEC_XFGVIRT(IExtendedKeyUsage, get_IsPresent)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_IsPresent )( 
            IExtendedKeyUsage * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        DECLSPEC_XFGVIRT(IExtendedKeyUsage, get_IsCritical)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_IsCritical )( 
            IExtendedKeyUsage * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        DECLSPEC_XFGVIRT(IExtendedKeyUsage, get_EKUs)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_EKUs )( 
            IExtendedKeyUsage * This,
            /* [retval][out] */ IEKUs **pVal);
        
        END_INTERFACE
    } IExtendedKeyUsageVtbl;

    interface IExtendedKeyUsage
    {
        CONST_VTBL struct IExtendedKeyUsageVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IExtendedKeyUsage_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IExtendedKeyUsage_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IExtendedKeyUsage_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IExtendedKeyUsage_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IExtendedKeyUsage_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IExtendedKeyUsage_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IExtendedKeyUsage_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IExtendedKeyUsage_get_IsPresent(This,pVal)	\
    ( (This)->lpVtbl -> get_IsPresent(This,pVal) ) 

#define IExtendedKeyUsage_get_IsCritical(This,pVal)	\
    ( (This)->lpVtbl -> get_IsCritical(This,pVal) ) 

#define IExtendedKeyUsage_get_EKUs(This,pVal)	\
    ( (This)->lpVtbl -> get_EKUs(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IExtendedKeyUsage_INTERFACE_DEFINED__ */


#ifndef __IBasicConstraints_INTERFACE_DEFINED__
#define __IBasicConstraints_INTERFACE_DEFINED__

/* interface IBasicConstraints */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IBasicConstraints;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("4E298C47-ABA6-459E-851B-993D6C626EAD")
    IBasicConstraints : public IDispatch
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_IsPresent( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_IsCritical( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_IsCertificateAuthority( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_IsPathLenConstraintPresent( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_PathLenConstraint( 
            /* [retval][out] */ long *pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBasicConstraintsVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBasicConstraints * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBasicConstraints * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBasicConstraints * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IBasicConstraints * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IBasicConstraints * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IBasicConstraints * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IBasicConstraints * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        DECLSPEC_XFGVIRT(IBasicConstraints, get_IsPresent)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_IsPresent )( 
            IBasicConstraints * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        DECLSPEC_XFGVIRT(IBasicConstraints, get_IsCritical)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_IsCritical )( 
            IBasicConstraints * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        DECLSPEC_XFGVIRT(IBasicConstraints, get_IsCertificateAuthority)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_IsCertificateAuthority )( 
            IBasicConstraints * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        DECLSPEC_XFGVIRT(IBasicConstraints, get_IsPathLenConstraintPresent)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_IsPathLenConstraintPresent )( 
            IBasicConstraints * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        DECLSPEC_XFGVIRT(IBasicConstraints, get_PathLenConstraint)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PathLenConstraint )( 
            IBasicConstraints * This,
            /* [retval][out] */ long *pVal);
        
        END_INTERFACE
    } IBasicConstraintsVtbl;

    interface IBasicConstraints
    {
        CONST_VTBL struct IBasicConstraintsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBasicConstraints_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBasicConstraints_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBasicConstraints_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBasicConstraints_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IBasicConstraints_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IBasicConstraints_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IBasicConstraints_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IBasicConstraints_get_IsPresent(This,pVal)	\
    ( (This)->lpVtbl -> get_IsPresent(This,pVal) ) 

#define IBasicConstraints_get_IsCritical(This,pVal)	\
    ( (This)->lpVtbl -> get_IsCritical(This,pVal) ) 

#define IBasicConstraints_get_IsCertificateAuthority(This,pVal)	\
    ( (This)->lpVtbl -> get_IsCertificateAuthority(This,pVal) ) 

#define IBasicConstraints_get_IsPathLenConstraintPresent(This,pVal)	\
    ( (This)->lpVtbl -> get_IsPathLenConstraintPresent(This,pVal) ) 

#define IBasicConstraints_get_PathLenConstraint(This,pVal)	\
    ( (This)->lpVtbl -> get_PathLenConstraint(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBasicConstraints_INTERFACE_DEFINED__ */


#ifndef __ICertificates_INTERFACE_DEFINED__
#define __ICertificates_INTERFACE_DEFINED__

/* interface ICertificates */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_ICertificates;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("68646716-BDA0-4046-AB82-4444BC93B84A")
    ICertificates : public IDispatch
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ long Index,
            /* [retval][out] */ VARIANT *pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][restricted][propget][id] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IUnknown **pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICertificatesVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICertificates * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICertificates * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICertificates * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ICertificates * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ICertificates * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ICertificates * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICertificates * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        DECLSPEC_XFGVIRT(ICertificates, get_Item)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            ICertificates * This,
            /* [in] */ long Index,
            /* [retval][out] */ VARIANT *pVal);
        
        DECLSPEC_XFGVIRT(ICertificates, get_Count)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            ICertificates * This,
            /* [retval][out] */ long *pVal);
        
        DECLSPEC_XFGVIRT(ICertificates, get__NewEnum)
        /* [helpstring][restricted][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            ICertificates * This,
            /* [retval][out] */ IUnknown **pVal);
        
        END_INTERFACE
    } ICertificatesVtbl;

    interface ICertificates
    {
        CONST_VTBL struct ICertificatesVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICertificates_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICertificates_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICertificates_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICertificates_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ICertificates_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ICertificates_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ICertificates_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ICertificates_get_Item(This,Index,pVal)	\
    ( (This)->lpVtbl -> get_Item(This,Index,pVal) ) 

#define ICertificates_get_Count(This,pVal)	\
    ( (This)->lpVtbl -> get_Count(This,pVal) ) 

#define ICertificates_get__NewEnum(This,pVal)	\
    ( (This)->lpVtbl -> get__NewEnum(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICertificates_INTERFACE_DEFINED__ */


#ifndef __ICertificates2_INTERFACE_DEFINED__
#define __ICertificates2_INTERFACE_DEFINED__

/* interface ICertificates2 */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_ICertificates2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7B57C04B-1786-4B30-A7B6-36235CD58A14")
    ICertificates2 : public ICertificates
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Find( 
            /* [in] */ CAPICOM_CERTIFICATE_FIND_TYPE FindType,
            /* [defaultvalue][in] */ VARIANT varCriteria,
            /* [defaultvalue][in] */ VARIANT_BOOL bFindValidOnly,
            /* [retval][out] */ ICertificates2 **pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Select( 
            /* [defaultvalue][in] */ BSTR Title,
            /* [defaultvalue][in] */ BSTR DisplayString,
            /* [defaultvalue][in] */ VARIANT_BOOL bMultiSelect,
            /* [retval][out] */ ICertificates2 **pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Add( 
            /* [in] */ ICertificate2 *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Remove( 
            /* [in] */ VARIANT Index) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Clear( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Save( 
            /* [in] */ BSTR FileName,
            /* [defaultvalue][in] */ BSTR Password = (BSTR)L"",
            /* [defaultvalue][in] */ CAPICOM_CERTIFICATES_SAVE_AS_TYPE SaveAs = CAPICOM_CERTIFICATES_SAVE_AS_PFX,
            /* [defaultvalue][in] */ CAPICOM_EXPORT_FLAG ExportFlag = CAPICOM_EXPORT_DEFAULT) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICertificates2Vtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICertificates2 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICertificates2 * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICertificates2 * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ICertificates2 * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ICertificates2 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ICertificates2 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICertificates2 * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        DECLSPEC_XFGVIRT(ICertificates, get_Item)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            ICertificates2 * This,
            /* [in] */ long Index,
            /* [retval][out] */ VARIANT *pVal);
        
        DECLSPEC_XFGVIRT(ICertificates, get_Count)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            ICertificates2 * This,
            /* [retval][out] */ long *pVal);
        
        DECLSPEC_XFGVIRT(ICertificates, get__NewEnum)
        /* [helpstring][restricted][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            ICertificates2 * This,
            /* [retval][out] */ IUnknown **pVal);
        
        DECLSPEC_XFGVIRT(ICertificates2, Find)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Find )( 
            ICertificates2 * This,
            /* [in] */ CAPICOM_CERTIFICATE_FIND_TYPE FindType,
            /* [defaultvalue][in] */ VARIANT varCriteria,
            /* [defaultvalue][in] */ VARIANT_BOOL bFindValidOnly,
            /* [retval][out] */ ICertificates2 **pVal);
        
        DECLSPEC_XFGVIRT(ICertificates2, Select)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Select )( 
            ICertificates2 * This,
            /* [defaultvalue][in] */ BSTR Title,
            /* [defaultvalue][in] */ BSTR DisplayString,
            /* [defaultvalue][in] */ VARIANT_BOOL bMultiSelect,
            /* [retval][out] */ ICertificates2 **pVal);
        
        DECLSPEC_XFGVIRT(ICertificates2, Add)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Add )( 
            ICertificates2 * This,
            /* [in] */ ICertificate2 *pVal);
        
        DECLSPEC_XFGVIRT(ICertificates2, Remove)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Remove )( 
            ICertificates2 * This,
            /* [in] */ VARIANT Index);
        
        DECLSPEC_XFGVIRT(ICertificates2, Clear)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Clear )( 
            ICertificates2 * This);
        
        DECLSPEC_XFGVIRT(ICertificates2, Save)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Save )( 
            ICertificates2 * This,
            /* [in] */ BSTR FileName,
            /* [defaultvalue][in] */ BSTR Password,
            /* [defaultvalue][in] */ CAPICOM_CERTIFICATES_SAVE_AS_TYPE SaveAs,
            /* [defaultvalue][in] */ CAPICOM_EXPORT_FLAG ExportFlag);
        
        END_INTERFACE
    } ICertificates2Vtbl;

    interface ICertificates2
    {
        CONST_VTBL struct ICertificates2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICertificates2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICertificates2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICertificates2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICertificates2_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ICertificates2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ICertificates2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ICertificates2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ICertificates2_get_Item(This,Index,pVal)	\
    ( (This)->lpVtbl -> get_Item(This,Index,pVal) ) 

#define ICertificates2_get_Count(This,pVal)	\
    ( (This)->lpVtbl -> get_Count(This,pVal) ) 

#define ICertificates2_get__NewEnum(This,pVal)	\
    ( (This)->lpVtbl -> get__NewEnum(This,pVal) ) 


#define ICertificates2_Find(This,FindType,varCriteria,bFindValidOnly,pVal)	\
    ( (This)->lpVtbl -> Find(This,FindType,varCriteria,bFindValidOnly,pVal) ) 

#define ICertificates2_Select(This,Title,DisplayString,bMultiSelect,pVal)	\
    ( (This)->lpVtbl -> Select(This,Title,DisplayString,bMultiSelect,pVal) ) 

#define ICertificates2_Add(This,pVal)	\
    ( (This)->lpVtbl -> Add(This,pVal) ) 

#define ICertificates2_Remove(This,Index)	\
    ( (This)->lpVtbl -> Remove(This,Index) ) 

#define ICertificates2_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define ICertificates2_Save(This,FileName,Password,SaveAs,ExportFlag)	\
    ( (This)->lpVtbl -> Save(This,FileName,Password,SaveAs,ExportFlag) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICertificates2_INTERFACE_DEFINED__ */


#ifndef __ICCertificates_INTERFACE_DEFINED__
#define __ICCertificates_INTERFACE_DEFINED__

/* interface ICCertificates */
/* [object][restricted][helpstring][uuid] */ 


EXTERN_C const IID IID_ICCertificates;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("EBDC6DC2-684D-4425-BBB7-CB4D15A088A7")
    ICCertificates : public IUnknown
    {
    public:
        virtual /* [restricted] */ HRESULT __stdcall _ExportToStore( 
            /* [in] */ void *hCertStore) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICCertificatesVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICCertificates * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICCertificates * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICCertificates * This);
        
        DECLSPEC_XFGVIRT(ICCertificates, _ExportToStore)
        /* [restricted] */ HRESULT ( __stdcall *_ExportToStore )( 
            ICCertificates * This,
            /* [in] */ void *hCertStore);
        
        END_INTERFACE
    } ICCertificatesVtbl;

    interface ICCertificates
    {
        CONST_VTBL struct ICCertificatesVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICCertificates_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICCertificates_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICCertificates_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICCertificates__ExportToStore(This,hCertStore)	\
    ( (This)->lpVtbl -> _ExportToStore(This,hCertStore) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICCertificates_INTERFACE_DEFINED__ */


#ifndef __IOID_INTERFACE_DEFINED__
#define __IOID_INTERFACE_DEFINED__

/* interface IOID */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IOID;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("208E5E9B-58B1-4086-970F-161B582A846F")
    IOID : public IDispatch
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ CAPICOM_OID *pVal) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_Name( 
            /* [in] */ CAPICOM_OID pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_FriendlyName( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_FriendlyName( 
            /* [in] */ BSTR pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Value( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_Value( 
            /* [in] */ BSTR pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IOIDVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IOID * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IOID * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IOID * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IOID * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IOID * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IOID * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IOID * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        DECLSPEC_XFGVIRT(IOID, get_Name)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IOID * This,
            /* [retval][out] */ CAPICOM_OID *pVal);
        
        DECLSPEC_XFGVIRT(IOID, put_Name)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Name )( 
            IOID * This,
            /* [in] */ CAPICOM_OID pVal);
        
        DECLSPEC_XFGVIRT(IOID, get_FriendlyName)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_FriendlyName )( 
            IOID * This,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(IOID, put_FriendlyName)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_FriendlyName )( 
            IOID * This,
            /* [in] */ BSTR pVal);
        
        DECLSPEC_XFGVIRT(IOID, get_Value)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Value )( 
            IOID * This,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(IOID, put_Value)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Value )( 
            IOID * This,
            /* [in] */ BSTR pVal);
        
        END_INTERFACE
    } IOIDVtbl;

    interface IOID
    {
        CONST_VTBL struct IOIDVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IOID_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IOID_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IOID_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IOID_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IOID_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IOID_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IOID_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IOID_get_Name(This,pVal)	\
    ( (This)->lpVtbl -> get_Name(This,pVal) ) 

#define IOID_put_Name(This,pVal)	\
    ( (This)->lpVtbl -> put_Name(This,pVal) ) 

#define IOID_get_FriendlyName(This,pVal)	\
    ( (This)->lpVtbl -> get_FriendlyName(This,pVal) ) 

#define IOID_put_FriendlyName(This,pVal)	\
    ( (This)->lpVtbl -> put_FriendlyName(This,pVal) ) 

#define IOID_get_Value(This,pVal)	\
    ( (This)->lpVtbl -> get_Value(This,pVal) ) 

#define IOID_put_Value(This,pVal)	\
    ( (This)->lpVtbl -> put_Value(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IOID_INTERFACE_DEFINED__ */


#ifndef __IOIDs_INTERFACE_DEFINED__
#define __IOIDs_INTERFACE_DEFINED__

/* interface IOIDs */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IOIDs;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("DA55E8FC-8E27-451B-AEA8-1470D80FAD42")
    IOIDs : public IDispatch
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ VARIANT Index,
            /* [retval][out] */ VARIANT *pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][restricted][propget][id] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IUnknown **pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Add( 
            /* [in] */ IOID *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Remove( 
            /* [in] */ VARIANT Index) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Clear( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IOIDsVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IOIDs * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IOIDs * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IOIDs * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IOIDs * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IOIDs * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IOIDs * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IOIDs * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        DECLSPEC_XFGVIRT(IOIDs, get_Item)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            IOIDs * This,
            /* [in] */ VARIANT Index,
            /* [retval][out] */ VARIANT *pVal);
        
        DECLSPEC_XFGVIRT(IOIDs, get_Count)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IOIDs * This,
            /* [retval][out] */ long *pVal);
        
        DECLSPEC_XFGVIRT(IOIDs, get__NewEnum)
        /* [helpstring][restricted][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            IOIDs * This,
            /* [retval][out] */ IUnknown **pVal);
        
        DECLSPEC_XFGVIRT(IOIDs, Add)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Add )( 
            IOIDs * This,
            /* [in] */ IOID *pVal);
        
        DECLSPEC_XFGVIRT(IOIDs, Remove)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Remove )( 
            IOIDs * This,
            /* [in] */ VARIANT Index);
        
        DECLSPEC_XFGVIRT(IOIDs, Clear)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Clear )( 
            IOIDs * This);
        
        END_INTERFACE
    } IOIDsVtbl;

    interface IOIDs
    {
        CONST_VTBL struct IOIDsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IOIDs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IOIDs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IOIDs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IOIDs_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IOIDs_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IOIDs_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IOIDs_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IOIDs_get_Item(This,Index,pVal)	\
    ( (This)->lpVtbl -> get_Item(This,Index,pVal) ) 

#define IOIDs_get_Count(This,pVal)	\
    ( (This)->lpVtbl -> get_Count(This,pVal) ) 

#define IOIDs_get__NewEnum(This,pVal)	\
    ( (This)->lpVtbl -> get__NewEnum(This,pVal) ) 

#define IOIDs_Add(This,pVal)	\
    ( (This)->lpVtbl -> Add(This,pVal) ) 

#define IOIDs_Remove(This,Index)	\
    ( (This)->lpVtbl -> Remove(This,Index) ) 

#define IOIDs_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IOIDs_INTERFACE_DEFINED__ */


#ifndef __ICertificateStatus_INTERFACE_DEFINED__
#define __ICertificateStatus_INTERFACE_DEFINED__

/* interface ICertificateStatus */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_ICertificateStatus;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("AB769053-6D38-49D4-86EF-5FA85ED3AF27")
    ICertificateStatus : public IDispatch
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Result( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_CheckFlag( 
            /* [retval][out] */ CAPICOM_CHECK_FLAG *pVal) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_CheckFlag( 
            /* [in] */ CAPICOM_CHECK_FLAG pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE EKU( 
            /* [retval][out] */ IEKU **pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICertificateStatusVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICertificateStatus * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICertificateStatus * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICertificateStatus * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ICertificateStatus * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ICertificateStatus * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ICertificateStatus * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICertificateStatus * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        DECLSPEC_XFGVIRT(ICertificateStatus, get_Result)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Result )( 
            ICertificateStatus * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        DECLSPEC_XFGVIRT(ICertificateStatus, get_CheckFlag)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_CheckFlag )( 
            ICertificateStatus * This,
            /* [retval][out] */ CAPICOM_CHECK_FLAG *pVal);
        
        DECLSPEC_XFGVIRT(ICertificateStatus, put_CheckFlag)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_CheckFlag )( 
            ICertificateStatus * This,
            /* [in] */ CAPICOM_CHECK_FLAG pVal);
        
        DECLSPEC_XFGVIRT(ICertificateStatus, EKU)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *EKU )( 
            ICertificateStatus * This,
            /* [retval][out] */ IEKU **pVal);
        
        END_INTERFACE
    } ICertificateStatusVtbl;

    interface ICertificateStatus
    {
        CONST_VTBL struct ICertificateStatusVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICertificateStatus_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICertificateStatus_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICertificateStatus_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICertificateStatus_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ICertificateStatus_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ICertificateStatus_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ICertificateStatus_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ICertificateStatus_get_Result(This,pVal)	\
    ( (This)->lpVtbl -> get_Result(This,pVal) ) 

#define ICertificateStatus_get_CheckFlag(This,pVal)	\
    ( (This)->lpVtbl -> get_CheckFlag(This,pVal) ) 

#define ICertificateStatus_put_CheckFlag(This,pVal)	\
    ( (This)->lpVtbl -> put_CheckFlag(This,pVal) ) 

#define ICertificateStatus_EKU(This,pVal)	\
    ( (This)->lpVtbl -> EKU(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICertificateStatus_INTERFACE_DEFINED__ */


#ifndef __ICertificateStatus2_INTERFACE_DEFINED__
#define __ICertificateStatus2_INTERFACE_DEFINED__

/* interface ICertificateStatus2 */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_ICertificateStatus2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("BF95660E-F743-4EAC-9DE5-960787A4606C")
    ICertificateStatus2 : public ICertificateStatus
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_VerificationTime( 
            /* [retval][out] */ DATE *pVal) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_VerificationTime( 
            /* [in] */ DATE pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_UrlRetrievalTimeout( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_UrlRetrievalTimeout( 
            /* [in] */ long pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CertificatePolicies( 
            /* [retval][out] */ IOIDs **pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ApplicationPolicies( 
            /* [retval][out] */ IOIDs **pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICertificateStatus2Vtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICertificateStatus2 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICertificateStatus2 * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICertificateStatus2 * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ICertificateStatus2 * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ICertificateStatus2 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ICertificateStatus2 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICertificateStatus2 * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        DECLSPEC_XFGVIRT(ICertificateStatus, get_Result)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Result )( 
            ICertificateStatus2 * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        DECLSPEC_XFGVIRT(ICertificateStatus, get_CheckFlag)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_CheckFlag )( 
            ICertificateStatus2 * This,
            /* [retval][out] */ CAPICOM_CHECK_FLAG *pVal);
        
        DECLSPEC_XFGVIRT(ICertificateStatus, put_CheckFlag)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_CheckFlag )( 
            ICertificateStatus2 * This,
            /* [in] */ CAPICOM_CHECK_FLAG pVal);
        
        DECLSPEC_XFGVIRT(ICertificateStatus, EKU)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *EKU )( 
            ICertificateStatus2 * This,
            /* [retval][out] */ IEKU **pVal);
        
        DECLSPEC_XFGVIRT(ICertificateStatus2, get_VerificationTime)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_VerificationTime )( 
            ICertificateStatus2 * This,
            /* [retval][out] */ DATE *pVal);
        
        DECLSPEC_XFGVIRT(ICertificateStatus2, put_VerificationTime)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_VerificationTime )( 
            ICertificateStatus2 * This,
            /* [in] */ DATE pVal);
        
        DECLSPEC_XFGVIRT(ICertificateStatus2, get_UrlRetrievalTimeout)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_UrlRetrievalTimeout )( 
            ICertificateStatus2 * This,
            /* [retval][out] */ long *pVal);
        
        DECLSPEC_XFGVIRT(ICertificateStatus2, put_UrlRetrievalTimeout)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_UrlRetrievalTimeout )( 
            ICertificateStatus2 * This,
            /* [in] */ long pVal);
        
        DECLSPEC_XFGVIRT(ICertificateStatus2, CertificatePolicies)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CertificatePolicies )( 
            ICertificateStatus2 * This,
            /* [retval][out] */ IOIDs **pVal);
        
        DECLSPEC_XFGVIRT(ICertificateStatus2, ApplicationPolicies)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ApplicationPolicies )( 
            ICertificateStatus2 * This,
            /* [retval][out] */ IOIDs **pVal);
        
        END_INTERFACE
    } ICertificateStatus2Vtbl;

    interface ICertificateStatus2
    {
        CONST_VTBL struct ICertificateStatus2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICertificateStatus2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICertificateStatus2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICertificateStatus2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICertificateStatus2_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ICertificateStatus2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ICertificateStatus2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ICertificateStatus2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ICertificateStatus2_get_Result(This,pVal)	\
    ( (This)->lpVtbl -> get_Result(This,pVal) ) 

#define ICertificateStatus2_get_CheckFlag(This,pVal)	\
    ( (This)->lpVtbl -> get_CheckFlag(This,pVal) ) 

#define ICertificateStatus2_put_CheckFlag(This,pVal)	\
    ( (This)->lpVtbl -> put_CheckFlag(This,pVal) ) 

#define ICertificateStatus2_EKU(This,pVal)	\
    ( (This)->lpVtbl -> EKU(This,pVal) ) 


#define ICertificateStatus2_get_VerificationTime(This,pVal)	\
    ( (This)->lpVtbl -> get_VerificationTime(This,pVal) ) 

#define ICertificateStatus2_put_VerificationTime(This,pVal)	\
    ( (This)->lpVtbl -> put_VerificationTime(This,pVal) ) 

#define ICertificateStatus2_get_UrlRetrievalTimeout(This,pVal)	\
    ( (This)->lpVtbl -> get_UrlRetrievalTimeout(This,pVal) ) 

#define ICertificateStatus2_put_UrlRetrievalTimeout(This,pVal)	\
    ( (This)->lpVtbl -> put_UrlRetrievalTimeout(This,pVal) ) 

#define ICertificateStatus2_CertificatePolicies(This,pVal)	\
    ( (This)->lpVtbl -> CertificatePolicies(This,pVal) ) 

#define ICertificateStatus2_ApplicationPolicies(This,pVal)	\
    ( (This)->lpVtbl -> ApplicationPolicies(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICertificateStatus2_INTERFACE_DEFINED__ */


#ifndef __ICertificateStatus3_INTERFACE_DEFINED__
#define __ICertificateStatus3_INTERFACE_DEFINED__

/* interface ICertificateStatus3 */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_ICertificateStatus3;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("A4EAB890-0786-406B-9B31-2746F31F8D87")
    ICertificateStatus3 : public ICertificateStatus2
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ValidationCertificates( 
            /* [retval][out] */ ICertificates **pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICertificateStatus3Vtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICertificateStatus3 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICertificateStatus3 * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICertificateStatus3 * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ICertificateStatus3 * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ICertificateStatus3 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ICertificateStatus3 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICertificateStatus3 * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        DECLSPEC_XFGVIRT(ICertificateStatus, get_Result)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Result )( 
            ICertificateStatus3 * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        DECLSPEC_XFGVIRT(ICertificateStatus, get_CheckFlag)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_CheckFlag )( 
            ICertificateStatus3 * This,
            /* [retval][out] */ CAPICOM_CHECK_FLAG *pVal);
        
        DECLSPEC_XFGVIRT(ICertificateStatus, put_CheckFlag)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_CheckFlag )( 
            ICertificateStatus3 * This,
            /* [in] */ CAPICOM_CHECK_FLAG pVal);
        
        DECLSPEC_XFGVIRT(ICertificateStatus, EKU)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *EKU )( 
            ICertificateStatus3 * This,
            /* [retval][out] */ IEKU **pVal);
        
        DECLSPEC_XFGVIRT(ICertificateStatus2, get_VerificationTime)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_VerificationTime )( 
            ICertificateStatus3 * This,
            /* [retval][out] */ DATE *pVal);
        
        DECLSPEC_XFGVIRT(ICertificateStatus2, put_VerificationTime)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_VerificationTime )( 
            ICertificateStatus3 * This,
            /* [in] */ DATE pVal);
        
        DECLSPEC_XFGVIRT(ICertificateStatus2, get_UrlRetrievalTimeout)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_UrlRetrievalTimeout )( 
            ICertificateStatus3 * This,
            /* [retval][out] */ long *pVal);
        
        DECLSPEC_XFGVIRT(ICertificateStatus2, put_UrlRetrievalTimeout)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_UrlRetrievalTimeout )( 
            ICertificateStatus3 * This,
            /* [in] */ long pVal);
        
        DECLSPEC_XFGVIRT(ICertificateStatus2, CertificatePolicies)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CertificatePolicies )( 
            ICertificateStatus3 * This,
            /* [retval][out] */ IOIDs **pVal);
        
        DECLSPEC_XFGVIRT(ICertificateStatus2, ApplicationPolicies)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ApplicationPolicies )( 
            ICertificateStatus3 * This,
            /* [retval][out] */ IOIDs **pVal);
        
        DECLSPEC_XFGVIRT(ICertificateStatus3, get_ValidationCertificates)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ValidationCertificates )( 
            ICertificateStatus3 * This,
            /* [retval][out] */ ICertificates **pVal);
        
        END_INTERFACE
    } ICertificateStatus3Vtbl;

    interface ICertificateStatus3
    {
        CONST_VTBL struct ICertificateStatus3Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICertificateStatus3_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICertificateStatus3_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICertificateStatus3_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICertificateStatus3_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ICertificateStatus3_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ICertificateStatus3_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ICertificateStatus3_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ICertificateStatus3_get_Result(This,pVal)	\
    ( (This)->lpVtbl -> get_Result(This,pVal) ) 

#define ICertificateStatus3_get_CheckFlag(This,pVal)	\
    ( (This)->lpVtbl -> get_CheckFlag(This,pVal) ) 

#define ICertificateStatus3_put_CheckFlag(This,pVal)	\
    ( (This)->lpVtbl -> put_CheckFlag(This,pVal) ) 

#define ICertificateStatus3_EKU(This,pVal)	\
    ( (This)->lpVtbl -> EKU(This,pVal) ) 


#define ICertificateStatus3_get_VerificationTime(This,pVal)	\
    ( (This)->lpVtbl -> get_VerificationTime(This,pVal) ) 

#define ICertificateStatus3_put_VerificationTime(This,pVal)	\
    ( (This)->lpVtbl -> put_VerificationTime(This,pVal) ) 

#define ICertificateStatus3_get_UrlRetrievalTimeout(This,pVal)	\
    ( (This)->lpVtbl -> get_UrlRetrievalTimeout(This,pVal) ) 

#define ICertificateStatus3_put_UrlRetrievalTimeout(This,pVal)	\
    ( (This)->lpVtbl -> put_UrlRetrievalTimeout(This,pVal) ) 

#define ICertificateStatus3_CertificatePolicies(This,pVal)	\
    ( (This)->lpVtbl -> CertificatePolicies(This,pVal) ) 

#define ICertificateStatus3_ApplicationPolicies(This,pVal)	\
    ( (This)->lpVtbl -> ApplicationPolicies(This,pVal) ) 


#define ICertificateStatus3_get_ValidationCertificates(This,pVal)	\
    ( (This)->lpVtbl -> get_ValidationCertificates(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICertificateStatus3_INTERFACE_DEFINED__ */


#ifndef __ITemplate_INTERFACE_DEFINED__
#define __ITemplate_INTERFACE_DEFINED__

/* interface ITemplate */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_ITemplate;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("5F10FFCE-C922-476F-AA76-DF99D5BDFA2C")
    ITemplate : public IDispatch
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_IsPresent( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_IsCritical( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_OID( 
            /* [retval][out] */ IOID **pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_MajorVersion( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_MinorVersion( 
            /* [retval][out] */ long *pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ITemplateVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITemplate * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITemplate * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITemplate * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ITemplate * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ITemplate * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ITemplate * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ITemplate * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        DECLSPEC_XFGVIRT(ITemplate, get_IsPresent)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_IsPresent )( 
            ITemplate * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        DECLSPEC_XFGVIRT(ITemplate, get_IsCritical)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_IsCritical )( 
            ITemplate * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        DECLSPEC_XFGVIRT(ITemplate, get_Name)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            ITemplate * This,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(ITemplate, get_OID)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_OID )( 
            ITemplate * This,
            /* [retval][out] */ IOID **pVal);
        
        DECLSPEC_XFGVIRT(ITemplate, get_MajorVersion)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_MajorVersion )( 
            ITemplate * This,
            /* [retval][out] */ long *pVal);
        
        DECLSPEC_XFGVIRT(ITemplate, get_MinorVersion)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_MinorVersion )( 
            ITemplate * This,
            /* [retval][out] */ long *pVal);
        
        END_INTERFACE
    } ITemplateVtbl;

    interface ITemplate
    {
        CONST_VTBL struct ITemplateVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITemplate_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITemplate_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITemplate_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITemplate_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ITemplate_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ITemplate_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ITemplate_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ITemplate_get_IsPresent(This,pVal)	\
    ( (This)->lpVtbl -> get_IsPresent(This,pVal) ) 

#define ITemplate_get_IsCritical(This,pVal)	\
    ( (This)->lpVtbl -> get_IsCritical(This,pVal) ) 

#define ITemplate_get_Name(This,pVal)	\
    ( (This)->lpVtbl -> get_Name(This,pVal) ) 

#define ITemplate_get_OID(This,pVal)	\
    ( (This)->lpVtbl -> get_OID(This,pVal) ) 

#define ITemplate_get_MajorVersion(This,pVal)	\
    ( (This)->lpVtbl -> get_MajorVersion(This,pVal) ) 

#define ITemplate_get_MinorVersion(This,pVal)	\
    ( (This)->lpVtbl -> get_MinorVersion(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITemplate_INTERFACE_DEFINED__ */


#ifndef __IEncodedData_INTERFACE_DEFINED__
#define __IEncodedData_INTERFACE_DEFINED__

/* interface IEncodedData */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IEncodedData;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("D3D460F2-E7F3-4AF3-8EC6-8EB68C61C567")
    IEncodedData : public IDispatch
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Value( 
            /* [defaultvalue][in] */ CAPICOM_ENCODING_TYPE EncodingType,
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Format( 
            /* [defaultvalue][in] */ VARIANT_BOOL bMultiLines,
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Decoder( 
            /* [retval][out] */ IDispatch **pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IEncodedDataVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IEncodedData * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IEncodedData * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IEncodedData * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IEncodedData * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IEncodedData * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IEncodedData * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IEncodedData * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        DECLSPEC_XFGVIRT(IEncodedData, get_Value)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Value )( 
            IEncodedData * This,
            /* [defaultvalue][in] */ CAPICOM_ENCODING_TYPE EncodingType,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(IEncodedData, Format)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Format )( 
            IEncodedData * This,
            /* [defaultvalue][in] */ VARIANT_BOOL bMultiLines,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(IEncodedData, Decoder)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Decoder )( 
            IEncodedData * This,
            /* [retval][out] */ IDispatch **pVal);
        
        END_INTERFACE
    } IEncodedDataVtbl;

    interface IEncodedData
    {
        CONST_VTBL struct IEncodedDataVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IEncodedData_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IEncodedData_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IEncodedData_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IEncodedData_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IEncodedData_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IEncodedData_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IEncodedData_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IEncodedData_get_Value(This,EncodingType,pVal)	\
    ( (This)->lpVtbl -> get_Value(This,EncodingType,pVal) ) 

#define IEncodedData_Format(This,bMultiLines,pVal)	\
    ( (This)->lpVtbl -> Format(This,bMultiLines,pVal) ) 

#define IEncodedData_Decoder(This,pVal)	\
    ( (This)->lpVtbl -> Decoder(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IEncodedData_INTERFACE_DEFINED__ */


#ifndef __IPublicKey_INTERFACE_DEFINED__
#define __IPublicKey_INTERFACE_DEFINED__

/* interface IPublicKey */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IPublicKey;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("72BF9ADA-6817-4C31-B43E-25F7C7B091F4")
    IPublicKey : public IDispatch
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Algorithm( 
            /* [retval][out] */ IOID **pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Length( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_EncodedKey( 
            /* [retval][out] */ IEncodedData **pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_EncodedParameters( 
            /* [retval][out] */ IEncodedData **pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IPublicKeyVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IPublicKey * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IPublicKey * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IPublicKey * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IPublicKey * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IPublicKey * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IPublicKey * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IPublicKey * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        DECLSPEC_XFGVIRT(IPublicKey, get_Algorithm)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Algorithm )( 
            IPublicKey * This,
            /* [retval][out] */ IOID **pVal);
        
        DECLSPEC_XFGVIRT(IPublicKey, get_Length)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Length )( 
            IPublicKey * This,
            /* [retval][out] */ long *pVal);
        
        DECLSPEC_XFGVIRT(IPublicKey, get_EncodedKey)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_EncodedKey )( 
            IPublicKey * This,
            /* [retval][out] */ IEncodedData **pVal);
        
        DECLSPEC_XFGVIRT(IPublicKey, get_EncodedParameters)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_EncodedParameters )( 
            IPublicKey * This,
            /* [retval][out] */ IEncodedData **pVal);
        
        END_INTERFACE
    } IPublicKeyVtbl;

    interface IPublicKey
    {
        CONST_VTBL struct IPublicKeyVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPublicKey_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IPublicKey_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IPublicKey_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IPublicKey_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IPublicKey_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IPublicKey_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IPublicKey_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IPublicKey_get_Algorithm(This,pVal)	\
    ( (This)->lpVtbl -> get_Algorithm(This,pVal) ) 

#define IPublicKey_get_Length(This,pVal)	\
    ( (This)->lpVtbl -> get_Length(This,pVal) ) 

#define IPublicKey_get_EncodedKey(This,pVal)	\
    ( (This)->lpVtbl -> get_EncodedKey(This,pVal) ) 

#define IPublicKey_get_EncodedParameters(This,pVal)	\
    ( (This)->lpVtbl -> get_EncodedParameters(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IPublicKey_INTERFACE_DEFINED__ */


#ifndef __IPrivateKey_INTERFACE_DEFINED__
#define __IPrivateKey_INTERFACE_DEFINED__

/* interface IPrivateKey */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IPrivateKey;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("659DEDC3-6C85-42DB-8527-EFCB21742862")
    IPrivateKey : public IDispatch
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ContainerName( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_UniqueContainerName( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ProviderName( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ProviderType( 
            /* [retval][out] */ CAPICOM_PROV_TYPE *pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_KeySpec( 
            /* [retval][out] */ CAPICOM_KEY_SPEC *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IsAccessible( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IsProtected( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IsExportable( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IsRemovable( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IsMachineKeyset( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IsHardwareDevice( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Open( 
            /* [in] */ BSTR ContainerName,
            /* [defaultvalue][in] */ BSTR ProviderName = (BSTR)L"Microsoft Enhanced Cryptographic Provider v1.0",
            /* [defaultvalue][in] */ CAPICOM_PROV_TYPE ProviderType = CAPICOM_PROV_RSA_FULL,
            /* [defaultvalue][in] */ CAPICOM_KEY_SPEC KeySpec = CAPICOM_KEY_SPEC_SIGNATURE,
            /* [defaultvalue][in] */ CAPICOM_STORE_LOCATION StoreLocation = CAPICOM_CURRENT_USER_STORE,
            /* [defaultvalue][in] */ VARIANT_BOOL bCheckExistence = 0) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Delete( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IPrivateKeyVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IPrivateKey * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IPrivateKey * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IPrivateKey * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IPrivateKey * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IPrivateKey * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IPrivateKey * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IPrivateKey * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        DECLSPEC_XFGVIRT(IPrivateKey, get_ContainerName)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ContainerName )( 
            IPrivateKey * This,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(IPrivateKey, get_UniqueContainerName)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_UniqueContainerName )( 
            IPrivateKey * This,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(IPrivateKey, get_ProviderName)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ProviderName )( 
            IPrivateKey * This,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(IPrivateKey, get_ProviderType)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ProviderType )( 
            IPrivateKey * This,
            /* [retval][out] */ CAPICOM_PROV_TYPE *pVal);
        
        DECLSPEC_XFGVIRT(IPrivateKey, get_KeySpec)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_KeySpec )( 
            IPrivateKey * This,
            /* [retval][out] */ CAPICOM_KEY_SPEC *pVal);
        
        DECLSPEC_XFGVIRT(IPrivateKey, IsAccessible)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *IsAccessible )( 
            IPrivateKey * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        DECLSPEC_XFGVIRT(IPrivateKey, IsProtected)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *IsProtected )( 
            IPrivateKey * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        DECLSPEC_XFGVIRT(IPrivateKey, IsExportable)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *IsExportable )( 
            IPrivateKey * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        DECLSPEC_XFGVIRT(IPrivateKey, IsRemovable)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *IsRemovable )( 
            IPrivateKey * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        DECLSPEC_XFGVIRT(IPrivateKey, IsMachineKeyset)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *IsMachineKeyset )( 
            IPrivateKey * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        DECLSPEC_XFGVIRT(IPrivateKey, IsHardwareDevice)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *IsHardwareDevice )( 
            IPrivateKey * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        DECLSPEC_XFGVIRT(IPrivateKey, Open)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Open )( 
            IPrivateKey * This,
            /* [in] */ BSTR ContainerName,
            /* [defaultvalue][in] */ BSTR ProviderName,
            /* [defaultvalue][in] */ CAPICOM_PROV_TYPE ProviderType,
            /* [defaultvalue][in] */ CAPICOM_KEY_SPEC KeySpec,
            /* [defaultvalue][in] */ CAPICOM_STORE_LOCATION StoreLocation,
            /* [defaultvalue][in] */ VARIANT_BOOL bCheckExistence);
        
        DECLSPEC_XFGVIRT(IPrivateKey, Delete)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Delete )( 
            IPrivateKey * This);
        
        END_INTERFACE
    } IPrivateKeyVtbl;

    interface IPrivateKey
    {
        CONST_VTBL struct IPrivateKeyVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPrivateKey_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IPrivateKey_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IPrivateKey_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IPrivateKey_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IPrivateKey_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IPrivateKey_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IPrivateKey_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IPrivateKey_get_ContainerName(This,pVal)	\
    ( (This)->lpVtbl -> get_ContainerName(This,pVal) ) 

#define IPrivateKey_get_UniqueContainerName(This,pVal)	\
    ( (This)->lpVtbl -> get_UniqueContainerName(This,pVal) ) 

#define IPrivateKey_get_ProviderName(This,pVal)	\
    ( (This)->lpVtbl -> get_ProviderName(This,pVal) ) 

#define IPrivateKey_get_ProviderType(This,pVal)	\
    ( (This)->lpVtbl -> get_ProviderType(This,pVal) ) 

#define IPrivateKey_get_KeySpec(This,pVal)	\
    ( (This)->lpVtbl -> get_KeySpec(This,pVal) ) 

#define IPrivateKey_IsAccessible(This,pVal)	\
    ( (This)->lpVtbl -> IsAccessible(This,pVal) ) 

#define IPrivateKey_IsProtected(This,pVal)	\
    ( (This)->lpVtbl -> IsProtected(This,pVal) ) 

#define IPrivateKey_IsExportable(This,pVal)	\
    ( (This)->lpVtbl -> IsExportable(This,pVal) ) 

#define IPrivateKey_IsRemovable(This,pVal)	\
    ( (This)->lpVtbl -> IsRemovable(This,pVal) ) 

#define IPrivateKey_IsMachineKeyset(This,pVal)	\
    ( (This)->lpVtbl -> IsMachineKeyset(This,pVal) ) 

#define IPrivateKey_IsHardwareDevice(This,pVal)	\
    ( (This)->lpVtbl -> IsHardwareDevice(This,pVal) ) 

#define IPrivateKey_Open(This,ContainerName,ProviderName,ProviderType,KeySpec,StoreLocation,bCheckExistence)	\
    ( (This)->lpVtbl -> Open(This,ContainerName,ProviderName,ProviderType,KeySpec,StoreLocation,bCheckExistence) ) 

#define IPrivateKey_Delete(This)	\
    ( (This)->lpVtbl -> Delete(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IPrivateKey_INTERFACE_DEFINED__ */


#ifndef __ICPrivateKey_INTERFACE_DEFINED__
#define __ICPrivateKey_INTERFACE_DEFINED__

/* interface ICPrivateKey */
/* [object][restricted][helpstring][uuid] */ 


EXTERN_C const IID IID_ICPrivateKey;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("50F241B7-A8F2-4E0A-B982-4BD7DF0CCF3C")
    ICPrivateKey : public IUnknown
    {
    public:
        virtual /* [restricted] */ HRESULT __stdcall _GetKeyProvInfo( 
            /* [retval][out] */ CRYPT_KEY_PROV_INFO **pKeyProvInfo) = 0;
        
        virtual /* [restricted] */ HRESULT __stdcall _GetKeyContext( 
            /* [retval][out] */ CERT_KEY_CONTEXT **pKeyContext) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICPrivateKeyVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICPrivateKey * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICPrivateKey * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICPrivateKey * This);
        
        DECLSPEC_XFGVIRT(ICPrivateKey, _GetKeyProvInfo)
        /* [restricted] */ HRESULT ( __stdcall *_GetKeyProvInfo )( 
            ICPrivateKey * This,
            /* [retval][out] */ CRYPT_KEY_PROV_INFO **pKeyProvInfo);
        
        DECLSPEC_XFGVIRT(ICPrivateKey, _GetKeyContext)
        /* [restricted] */ HRESULT ( __stdcall *_GetKeyContext )( 
            ICPrivateKey * This,
            /* [retval][out] */ CERT_KEY_CONTEXT **pKeyContext);
        
        END_INTERFACE
    } ICPrivateKeyVtbl;

    interface ICPrivateKey
    {
        CONST_VTBL struct ICPrivateKeyVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICPrivateKey_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICPrivateKey_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICPrivateKey_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICPrivateKey__GetKeyProvInfo(This,pKeyProvInfo)	\
    ( (This)->lpVtbl -> _GetKeyProvInfo(This,pKeyProvInfo) ) 

#define ICPrivateKey__GetKeyContext(This,pKeyContext)	\
    ( (This)->lpVtbl -> _GetKeyContext(This,pKeyContext) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICPrivateKey_INTERFACE_DEFINED__ */


#ifndef __IExtensions_INTERFACE_DEFINED__
#define __IExtensions_INTERFACE_DEFINED__

/* interface IExtensions */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IExtensions;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("BC530D61-E692-4225-9E7A-07B90B45856A")
    IExtensions : public IDispatch
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ VARIANT Index,
            /* [retval][out] */ VARIANT *pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][restricted][propget][id] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IUnknown **pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IExtensionsVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IExtensions * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IExtensions * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IExtensions * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IExtensions * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IExtensions * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IExtensions * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IExtensions * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        DECLSPEC_XFGVIRT(IExtensions, get_Item)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            IExtensions * This,
            /* [in] */ VARIANT Index,
            /* [retval][out] */ VARIANT *pVal);
        
        DECLSPEC_XFGVIRT(IExtensions, get_Count)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IExtensions * This,
            /* [retval][out] */ long *pVal);
        
        DECLSPEC_XFGVIRT(IExtensions, get__NewEnum)
        /* [helpstring][restricted][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            IExtensions * This,
            /* [retval][out] */ IUnknown **pVal);
        
        END_INTERFACE
    } IExtensionsVtbl;

    interface IExtensions
    {
        CONST_VTBL struct IExtensionsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IExtensions_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IExtensions_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IExtensions_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IExtensions_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IExtensions_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IExtensions_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IExtensions_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IExtensions_get_Item(This,Index,pVal)	\
    ( (This)->lpVtbl -> get_Item(This,Index,pVal) ) 

#define IExtensions_get_Count(This,pVal)	\
    ( (This)->lpVtbl -> get_Count(This,pVal) ) 

#define IExtensions_get__NewEnum(This,pVal)	\
    ( (This)->lpVtbl -> get__NewEnum(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IExtensions_INTERFACE_DEFINED__ */


#ifndef __IExtendedProperty_INTERFACE_DEFINED__
#define __IExtendedProperty_INTERFACE_DEFINED__

/* interface IExtendedProperty */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IExtendedProperty;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("ECB8A5C8-562C-4989-B49D-FA37D40F8FC4")
    IExtendedProperty : public IDispatch
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_PropID( 
            /* [retval][out] */ CAPICOM_PROPID *pVal) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_PropID( 
            /* [in] */ CAPICOM_PROPID pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Value( 
            /* [defaultvalue][in] */ CAPICOM_ENCODING_TYPE EncodingType,
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_Value( 
            /* [defaultvalue][in] */ CAPICOM_ENCODING_TYPE EncodingType,
            /* [in] */ BSTR pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IExtendedPropertyVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IExtendedProperty * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IExtendedProperty * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IExtendedProperty * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IExtendedProperty * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IExtendedProperty * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IExtendedProperty * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IExtendedProperty * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        DECLSPEC_XFGVIRT(IExtendedProperty, get_PropID)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PropID )( 
            IExtendedProperty * This,
            /* [retval][out] */ CAPICOM_PROPID *pVal);
        
        DECLSPEC_XFGVIRT(IExtendedProperty, put_PropID)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_PropID )( 
            IExtendedProperty * This,
            /* [in] */ CAPICOM_PROPID pVal);
        
        DECLSPEC_XFGVIRT(IExtendedProperty, get_Value)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Value )( 
            IExtendedProperty * This,
            /* [defaultvalue][in] */ CAPICOM_ENCODING_TYPE EncodingType,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(IExtendedProperty, put_Value)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Value )( 
            IExtendedProperty * This,
            /* [defaultvalue][in] */ CAPICOM_ENCODING_TYPE EncodingType,
            /* [in] */ BSTR pVal);
        
        END_INTERFACE
    } IExtendedPropertyVtbl;

    interface IExtendedProperty
    {
        CONST_VTBL struct IExtendedPropertyVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IExtendedProperty_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IExtendedProperty_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IExtendedProperty_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IExtendedProperty_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IExtendedProperty_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IExtendedProperty_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IExtendedProperty_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IExtendedProperty_get_PropID(This,pVal)	\
    ( (This)->lpVtbl -> get_PropID(This,pVal) ) 

#define IExtendedProperty_put_PropID(This,pVal)	\
    ( (This)->lpVtbl -> put_PropID(This,pVal) ) 

#define IExtendedProperty_get_Value(This,EncodingType,pVal)	\
    ( (This)->lpVtbl -> get_Value(This,EncodingType,pVal) ) 

#define IExtendedProperty_put_Value(This,EncodingType,pVal)	\
    ( (This)->lpVtbl -> put_Value(This,EncodingType,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IExtendedProperty_INTERFACE_DEFINED__ */


#ifndef __IExtendedProperties_INTERFACE_DEFINED__
#define __IExtendedProperties_INTERFACE_DEFINED__

/* interface IExtendedProperties */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IExtendedProperties;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3B096E87-6218-4A3B-A880-F6CB951E7805")
    IExtendedProperties : public IDispatch
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ long Index,
            /* [retval][out] */ VARIANT *pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][restricted][propget][id] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IUnknown **pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Add( 
            /* [in] */ IExtendedProperty *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Remove( 
            /* [in] */ CAPICOM_PROPID PropID) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IExtendedPropertiesVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IExtendedProperties * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IExtendedProperties * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IExtendedProperties * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IExtendedProperties * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IExtendedProperties * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IExtendedProperties * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IExtendedProperties * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        DECLSPEC_XFGVIRT(IExtendedProperties, get_Item)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            IExtendedProperties * This,
            /* [in] */ long Index,
            /* [retval][out] */ VARIANT *pVal);
        
        DECLSPEC_XFGVIRT(IExtendedProperties, get_Count)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IExtendedProperties * This,
            /* [retval][out] */ long *pVal);
        
        DECLSPEC_XFGVIRT(IExtendedProperties, get__NewEnum)
        /* [helpstring][restricted][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            IExtendedProperties * This,
            /* [retval][out] */ IUnknown **pVal);
        
        DECLSPEC_XFGVIRT(IExtendedProperties, Add)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Add )( 
            IExtendedProperties * This,
            /* [in] */ IExtendedProperty *pVal);
        
        DECLSPEC_XFGVIRT(IExtendedProperties, Remove)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Remove )( 
            IExtendedProperties * This,
            /* [in] */ CAPICOM_PROPID PropID);
        
        END_INTERFACE
    } IExtendedPropertiesVtbl;

    interface IExtendedProperties
    {
        CONST_VTBL struct IExtendedPropertiesVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IExtendedProperties_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IExtendedProperties_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IExtendedProperties_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IExtendedProperties_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IExtendedProperties_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IExtendedProperties_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IExtendedProperties_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IExtendedProperties_get_Item(This,Index,pVal)	\
    ( (This)->lpVtbl -> get_Item(This,Index,pVal) ) 

#define IExtendedProperties_get_Count(This,pVal)	\
    ( (This)->lpVtbl -> get_Count(This,pVal) ) 

#define IExtendedProperties_get__NewEnum(This,pVal)	\
    ( (This)->lpVtbl -> get__NewEnum(This,pVal) ) 

#define IExtendedProperties_Add(This,pVal)	\
    ( (This)->lpVtbl -> Add(This,pVal) ) 

#define IExtendedProperties_Remove(This,PropID)	\
    ( (This)->lpVtbl -> Remove(This,PropID) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IExtendedProperties_INTERFACE_DEFINED__ */


#ifndef __ICertificate_INTERFACE_DEFINED__
#define __ICertificate_INTERFACE_DEFINED__

/* interface ICertificate */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_ICertificate;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0BBA0B86-766C-4755-A443-243FF2BD8D29")
    ICertificate : public IDispatch
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Version( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_SerialNumber( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_SubjectName( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_IssuerName( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ValidFromDate( 
            /* [retval][out] */ DATE *pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ValidToDate( 
            /* [retval][out] */ DATE *pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Thumbprint( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE HasPrivateKey( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetInfo( 
            /* [in] */ CAPICOM_CERT_INFO_TYPE InfoType,
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IsValid( 
            /* [retval][out] */ ICertificateStatus **pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE KeyUsage( 
            /* [retval][out] */ IKeyUsage **pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ExtendedKeyUsage( 
            /* [retval][out] */ IExtendedKeyUsage **pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE BasicConstraints( 
            /* [retval][out] */ IBasicConstraints **pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Export( 
            /* [defaultvalue][in] */ CAPICOM_ENCODING_TYPE EncodingType,
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Import( 
            /* [in] */ BSTR EncodedCertificate) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Display( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICertificateVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICertificate * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICertificate * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICertificate * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ICertificate * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ICertificate * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ICertificate * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICertificate * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        DECLSPEC_XFGVIRT(ICertificate, get_Version)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Version )( 
            ICertificate * This,
            /* [retval][out] */ long *pVal);
        
        DECLSPEC_XFGVIRT(ICertificate, get_SerialNumber)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SerialNumber )( 
            ICertificate * This,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(ICertificate, get_SubjectName)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SubjectName )( 
            ICertificate * This,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(ICertificate, get_IssuerName)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_IssuerName )( 
            ICertificate * This,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(ICertificate, get_ValidFromDate)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ValidFromDate )( 
            ICertificate * This,
            /* [retval][out] */ DATE *pVal);
        
        DECLSPEC_XFGVIRT(ICertificate, get_ValidToDate)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ValidToDate )( 
            ICertificate * This,
            /* [retval][out] */ DATE *pVal);
        
        DECLSPEC_XFGVIRT(ICertificate, get_Thumbprint)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Thumbprint )( 
            ICertificate * This,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(ICertificate, HasPrivateKey)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *HasPrivateKey )( 
            ICertificate * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        DECLSPEC_XFGVIRT(ICertificate, GetInfo)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetInfo )( 
            ICertificate * This,
            /* [in] */ CAPICOM_CERT_INFO_TYPE InfoType,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(ICertificate, IsValid)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *IsValid )( 
            ICertificate * This,
            /* [retval][out] */ ICertificateStatus **pVal);
        
        DECLSPEC_XFGVIRT(ICertificate, KeyUsage)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *KeyUsage )( 
            ICertificate * This,
            /* [retval][out] */ IKeyUsage **pVal);
        
        DECLSPEC_XFGVIRT(ICertificate, ExtendedKeyUsage)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ExtendedKeyUsage )( 
            ICertificate * This,
            /* [retval][out] */ IExtendedKeyUsage **pVal);
        
        DECLSPEC_XFGVIRT(ICertificate, BasicConstraints)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *BasicConstraints )( 
            ICertificate * This,
            /* [retval][out] */ IBasicConstraints **pVal);
        
        DECLSPEC_XFGVIRT(ICertificate, Export)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Export )( 
            ICertificate * This,
            /* [defaultvalue][in] */ CAPICOM_ENCODING_TYPE EncodingType,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(ICertificate, Import)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Import )( 
            ICertificate * This,
            /* [in] */ BSTR EncodedCertificate);
        
        DECLSPEC_XFGVIRT(ICertificate, Display)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Display )( 
            ICertificate * This);
        
        END_INTERFACE
    } ICertificateVtbl;

    interface ICertificate
    {
        CONST_VTBL struct ICertificateVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICertificate_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICertificate_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICertificate_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICertificate_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ICertificate_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ICertificate_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ICertificate_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ICertificate_get_Version(This,pVal)	\
    ( (This)->lpVtbl -> get_Version(This,pVal) ) 

#define ICertificate_get_SerialNumber(This,pVal)	\
    ( (This)->lpVtbl -> get_SerialNumber(This,pVal) ) 

#define ICertificate_get_SubjectName(This,pVal)	\
    ( (This)->lpVtbl -> get_SubjectName(This,pVal) ) 

#define ICertificate_get_IssuerName(This,pVal)	\
    ( (This)->lpVtbl -> get_IssuerName(This,pVal) ) 

#define ICertificate_get_ValidFromDate(This,pVal)	\
    ( (This)->lpVtbl -> get_ValidFromDate(This,pVal) ) 

#define ICertificate_get_ValidToDate(This,pVal)	\
    ( (This)->lpVtbl -> get_ValidToDate(This,pVal) ) 

#define ICertificate_get_Thumbprint(This,pVal)	\
    ( (This)->lpVtbl -> get_Thumbprint(This,pVal) ) 

#define ICertificate_HasPrivateKey(This,pVal)	\
    ( (This)->lpVtbl -> HasPrivateKey(This,pVal) ) 

#define ICertificate_GetInfo(This,InfoType,pVal)	\
    ( (This)->lpVtbl -> GetInfo(This,InfoType,pVal) ) 

#define ICertificate_IsValid(This,pVal)	\
    ( (This)->lpVtbl -> IsValid(This,pVal) ) 

#define ICertificate_KeyUsage(This,pVal)	\
    ( (This)->lpVtbl -> KeyUsage(This,pVal) ) 

#define ICertificate_ExtendedKeyUsage(This,pVal)	\
    ( (This)->lpVtbl -> ExtendedKeyUsage(This,pVal) ) 

#define ICertificate_BasicConstraints(This,pVal)	\
    ( (This)->lpVtbl -> BasicConstraints(This,pVal) ) 

#define ICertificate_Export(This,EncodingType,pVal)	\
    ( (This)->lpVtbl -> Export(This,EncodingType,pVal) ) 

#define ICertificate_Import(This,EncodedCertificate)	\
    ( (This)->lpVtbl -> Import(This,EncodedCertificate) ) 

#define ICertificate_Display(This)	\
    ( (This)->lpVtbl -> Display(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICertificate_INTERFACE_DEFINED__ */


#ifndef __ICertificate2_INTERFACE_DEFINED__
#define __ICertificate2_INTERFACE_DEFINED__

/* interface ICertificate2 */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_ICertificate2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6FE450DC-AD32-48D4-A366-01EE7E0B1374")
    ICertificate2 : public ICertificate
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Archived( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_Archived( 
            /* [in] */ VARIANT_BOOL pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Template( 
            /* [retval][out] */ ITemplate **pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE PublicKey( 
            /* [retval][out] */ IPublicKey **pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_PrivateKey( 
            /* [retval][out] */ IPrivateKey **pVal) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_PrivateKey( 
            /* [in] */ IPrivateKey *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Extensions( 
            /* [retval][out] */ IExtensions **pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ExtendedProperties( 
            /* [retval][out] */ IExtendedProperties **pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Load( 
            /* [in] */ BSTR FileName,
            /* [defaultvalue][in] */ BSTR Password = (BSTR)L"",
            /* [defaultvalue][in] */ CAPICOM_KEY_STORAGE_FLAG KeyStorageFlag = CAPICOM_KEY_STORAGE_DEFAULT,
            /* [defaultvalue][in] */ CAPICOM_KEY_LOCATION KeyLocation = CAPICOM_CURRENT_USER_KEY) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Save( 
            /* [in] */ BSTR FileName,
            /* [defaultvalue][in] */ BSTR Password = (BSTR)L"",
            /* [defaultvalue][in] */ CAPICOM_CERTIFICATE_SAVE_AS_TYPE SaveAs = CAPICOM_CERTIFICATE_SAVE_AS_CER,
            /* [defaultvalue][in] */ CAPICOM_CERTIFICATE_INCLUDE_OPTION IncludeOption = CAPICOM_CERTIFICATE_INCLUDE_END_ENTITY_ONLY) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICertificate2Vtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICertificate2 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICertificate2 * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICertificate2 * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ICertificate2 * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ICertificate2 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ICertificate2 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICertificate2 * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        DECLSPEC_XFGVIRT(ICertificate, get_Version)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Version )( 
            ICertificate2 * This,
            /* [retval][out] */ long *pVal);
        
        DECLSPEC_XFGVIRT(ICertificate, get_SerialNumber)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SerialNumber )( 
            ICertificate2 * This,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(ICertificate, get_SubjectName)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SubjectName )( 
            ICertificate2 * This,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(ICertificate, get_IssuerName)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_IssuerName )( 
            ICertificate2 * This,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(ICertificate, get_ValidFromDate)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ValidFromDate )( 
            ICertificate2 * This,
            /* [retval][out] */ DATE *pVal);
        
        DECLSPEC_XFGVIRT(ICertificate, get_ValidToDate)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ValidToDate )( 
            ICertificate2 * This,
            /* [retval][out] */ DATE *pVal);
        
        DECLSPEC_XFGVIRT(ICertificate, get_Thumbprint)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Thumbprint )( 
            ICertificate2 * This,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(ICertificate, HasPrivateKey)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *HasPrivateKey )( 
            ICertificate2 * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        DECLSPEC_XFGVIRT(ICertificate, GetInfo)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetInfo )( 
            ICertificate2 * This,
            /* [in] */ CAPICOM_CERT_INFO_TYPE InfoType,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(ICertificate, IsValid)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *IsValid )( 
            ICertificate2 * This,
            /* [retval][out] */ ICertificateStatus **pVal);
        
        DECLSPEC_XFGVIRT(ICertificate, KeyUsage)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *KeyUsage )( 
            ICertificate2 * This,
            /* [retval][out] */ IKeyUsage **pVal);
        
        DECLSPEC_XFGVIRT(ICertificate, ExtendedKeyUsage)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ExtendedKeyUsage )( 
            ICertificate2 * This,
            /* [retval][out] */ IExtendedKeyUsage **pVal);
        
        DECLSPEC_XFGVIRT(ICertificate, BasicConstraints)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *BasicConstraints )( 
            ICertificate2 * This,
            /* [retval][out] */ IBasicConstraints **pVal);
        
        DECLSPEC_XFGVIRT(ICertificate, Export)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Export )( 
            ICertificate2 * This,
            /* [defaultvalue][in] */ CAPICOM_ENCODING_TYPE EncodingType,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(ICertificate, Import)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Import )( 
            ICertificate2 * This,
            /* [in] */ BSTR EncodedCertificate);
        
        DECLSPEC_XFGVIRT(ICertificate, Display)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Display )( 
            ICertificate2 * This);
        
        DECLSPEC_XFGVIRT(ICertificate2, get_Archived)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Archived )( 
            ICertificate2 * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        DECLSPEC_XFGVIRT(ICertificate2, put_Archived)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Archived )( 
            ICertificate2 * This,
            /* [in] */ VARIANT_BOOL pVal);
        
        DECLSPEC_XFGVIRT(ICertificate2, Template)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Template )( 
            ICertificate2 * This,
            /* [retval][out] */ ITemplate **pVal);
        
        DECLSPEC_XFGVIRT(ICertificate2, PublicKey)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *PublicKey )( 
            ICertificate2 * This,
            /* [retval][out] */ IPublicKey **pVal);
        
        DECLSPEC_XFGVIRT(ICertificate2, get_PrivateKey)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PrivateKey )( 
            ICertificate2 * This,
            /* [retval][out] */ IPrivateKey **pVal);
        
        DECLSPEC_XFGVIRT(ICertificate2, put_PrivateKey)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_PrivateKey )( 
            ICertificate2 * This,
            /* [in] */ IPrivateKey *pVal);
        
        DECLSPEC_XFGVIRT(ICertificate2, Extensions)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Extensions )( 
            ICertificate2 * This,
            /* [retval][out] */ IExtensions **pVal);
        
        DECLSPEC_XFGVIRT(ICertificate2, ExtendedProperties)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ExtendedProperties )( 
            ICertificate2 * This,
            /* [retval][out] */ IExtendedProperties **pVal);
        
        DECLSPEC_XFGVIRT(ICertificate2, Load)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Load )( 
            ICertificate2 * This,
            /* [in] */ BSTR FileName,
            /* [defaultvalue][in] */ BSTR Password,
            /* [defaultvalue][in] */ CAPICOM_KEY_STORAGE_FLAG KeyStorageFlag,
            /* [defaultvalue][in] */ CAPICOM_KEY_LOCATION KeyLocation);
        
        DECLSPEC_XFGVIRT(ICertificate2, Save)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Save )( 
            ICertificate2 * This,
            /* [in] */ BSTR FileName,
            /* [defaultvalue][in] */ BSTR Password,
            /* [defaultvalue][in] */ CAPICOM_CERTIFICATE_SAVE_AS_TYPE SaveAs,
            /* [defaultvalue][in] */ CAPICOM_CERTIFICATE_INCLUDE_OPTION IncludeOption);
        
        END_INTERFACE
    } ICertificate2Vtbl;

    interface ICertificate2
    {
        CONST_VTBL struct ICertificate2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICertificate2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICertificate2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICertificate2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICertificate2_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ICertificate2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ICertificate2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ICertificate2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ICertificate2_get_Version(This,pVal)	\
    ( (This)->lpVtbl -> get_Version(This,pVal) ) 

#define ICertificate2_get_SerialNumber(This,pVal)	\
    ( (This)->lpVtbl -> get_SerialNumber(This,pVal) ) 

#define ICertificate2_get_SubjectName(This,pVal)	\
    ( (This)->lpVtbl -> get_SubjectName(This,pVal) ) 

#define ICertificate2_get_IssuerName(This,pVal)	\
    ( (This)->lpVtbl -> get_IssuerName(This,pVal) ) 

#define ICertificate2_get_ValidFromDate(This,pVal)	\
    ( (This)->lpVtbl -> get_ValidFromDate(This,pVal) ) 

#define ICertificate2_get_ValidToDate(This,pVal)	\
    ( (This)->lpVtbl -> get_ValidToDate(This,pVal) ) 

#define ICertificate2_get_Thumbprint(This,pVal)	\
    ( (This)->lpVtbl -> get_Thumbprint(This,pVal) ) 

#define ICertificate2_HasPrivateKey(This,pVal)	\
    ( (This)->lpVtbl -> HasPrivateKey(This,pVal) ) 

#define ICertificate2_GetInfo(This,InfoType,pVal)	\
    ( (This)->lpVtbl -> GetInfo(This,InfoType,pVal) ) 

#define ICertificate2_IsValid(This,pVal)	\
    ( (This)->lpVtbl -> IsValid(This,pVal) ) 

#define ICertificate2_KeyUsage(This,pVal)	\
    ( (This)->lpVtbl -> KeyUsage(This,pVal) ) 

#define ICertificate2_ExtendedKeyUsage(This,pVal)	\
    ( (This)->lpVtbl -> ExtendedKeyUsage(This,pVal) ) 

#define ICertificate2_BasicConstraints(This,pVal)	\
    ( (This)->lpVtbl -> BasicConstraints(This,pVal) ) 

#define ICertificate2_Export(This,EncodingType,pVal)	\
    ( (This)->lpVtbl -> Export(This,EncodingType,pVal) ) 

#define ICertificate2_Import(This,EncodedCertificate)	\
    ( (This)->lpVtbl -> Import(This,EncodedCertificate) ) 

#define ICertificate2_Display(This)	\
    ( (This)->lpVtbl -> Display(This) ) 


#define ICertificate2_get_Archived(This,pVal)	\
    ( (This)->lpVtbl -> get_Archived(This,pVal) ) 

#define ICertificate2_put_Archived(This,pVal)	\
    ( (This)->lpVtbl -> put_Archived(This,pVal) ) 

#define ICertificate2_Template(This,pVal)	\
    ( (This)->lpVtbl -> Template(This,pVal) ) 

#define ICertificate2_PublicKey(This,pVal)	\
    ( (This)->lpVtbl -> PublicKey(This,pVal) ) 

#define ICertificate2_get_PrivateKey(This,pVal)	\
    ( (This)->lpVtbl -> get_PrivateKey(This,pVal) ) 

#define ICertificate2_put_PrivateKey(This,pVal)	\
    ( (This)->lpVtbl -> put_PrivateKey(This,pVal) ) 

#define ICertificate2_Extensions(This,pVal)	\
    ( (This)->lpVtbl -> Extensions(This,pVal) ) 

#define ICertificate2_ExtendedProperties(This,pVal)	\
    ( (This)->lpVtbl -> ExtendedProperties(This,pVal) ) 

#define ICertificate2_Load(This,FileName,Password,KeyStorageFlag,KeyLocation)	\
    ( (This)->lpVtbl -> Load(This,FileName,Password,KeyStorageFlag,KeyLocation) ) 

#define ICertificate2_Save(This,FileName,Password,SaveAs,IncludeOption)	\
    ( (This)->lpVtbl -> Save(This,FileName,Password,SaveAs,IncludeOption) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICertificate2_INTERFACE_DEFINED__ */


#ifndef __ICertContext_INTERFACE_DEFINED__
#define __ICertContext_INTERFACE_DEFINED__

/* interface ICertContext */
/* [object][helpstring][uuid] */ 


EXTERN_C const IID IID_ICertContext;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("9E7D3477-4F63-423E-8A45-E13B2BB851A2")
    ICertContext : public IUnknown
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT __stdcall get_CertContext( 
            /* [retval][out] */ long *ppCertContext) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT __stdcall put_CertContext( 
            /* [in] */ long ppCertContext) = 0;
        
        virtual /* [helpstring] */ HRESULT __stdcall FreeContext( 
            /* [in] */ long pCertContext) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICertContextVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICertContext * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICertContext * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICertContext * This);
        
        DECLSPEC_XFGVIRT(ICertContext, get_CertContext)
        /* [helpstring][propget] */ HRESULT ( __stdcall *get_CertContext )( 
            ICertContext * This,
            /* [retval][out] */ long *ppCertContext);
        
        DECLSPEC_XFGVIRT(ICertContext, put_CertContext)
        /* [helpstring][propput] */ HRESULT ( __stdcall *put_CertContext )( 
            ICertContext * This,
            /* [in] */ long ppCertContext);
        
        DECLSPEC_XFGVIRT(ICertContext, FreeContext)
        /* [helpstring] */ HRESULT ( __stdcall *FreeContext )( 
            ICertContext * This,
            /* [in] */ long pCertContext);
        
        END_INTERFACE
    } ICertContextVtbl;

    interface ICertContext
    {
        CONST_VTBL struct ICertContextVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICertContext_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICertContext_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICertContext_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICertContext_get_CertContext(This,ppCertContext)	\
    ( (This)->lpVtbl -> get_CertContext(This,ppCertContext) ) 

#define ICertContext_put_CertContext(This,ppCertContext)	\
    ( (This)->lpVtbl -> put_CertContext(This,ppCertContext) ) 

#define ICertContext_FreeContext(This,pCertContext)	\
    ( (This)->lpVtbl -> FreeContext(This,pCertContext) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICertContext_INTERFACE_DEFINED__ */


#ifndef __IChain_INTERFACE_DEFINED__
#define __IChain_INTERFACE_DEFINED__

/* interface IChain */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IChain;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("77F6F881-5D3A-4F2F-AEF0-E4A2F9AA689D")
    IChain : public IDispatch
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Certificates( 
            /* [retval][out] */ ICertificates **pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Status( 
            /* [defaultvalue][in] */ long Index,
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Build( 
            /* [in] */ ICertificate *pICertificate,
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IChainVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IChain * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IChain * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IChain * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IChain * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IChain * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IChain * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IChain * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        DECLSPEC_XFGVIRT(IChain, get_Certificates)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Certificates )( 
            IChain * This,
            /* [retval][out] */ ICertificates **pVal);
        
        DECLSPEC_XFGVIRT(IChain, get_Status)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Status )( 
            IChain * This,
            /* [defaultvalue][in] */ long Index,
            /* [retval][out] */ long *pVal);
        
        DECLSPEC_XFGVIRT(IChain, Build)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Build )( 
            IChain * This,
            /* [in] */ ICertificate *pICertificate,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        END_INTERFACE
    } IChainVtbl;

    interface IChain
    {
        CONST_VTBL struct IChainVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IChain_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IChain_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IChain_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IChain_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IChain_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IChain_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IChain_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IChain_get_Certificates(This,pVal)	\
    ( (This)->lpVtbl -> get_Certificates(This,pVal) ) 

#define IChain_get_Status(This,Index,pVal)	\
    ( (This)->lpVtbl -> get_Status(This,Index,pVal) ) 

#define IChain_Build(This,pICertificate,pVal)	\
    ( (This)->lpVtbl -> Build(This,pICertificate,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IChain_INTERFACE_DEFINED__ */


#ifndef __IChain2_INTERFACE_DEFINED__
#define __IChain2_INTERFACE_DEFINED__

/* interface IChain2 */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IChain2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("CA65D842-2110-4073-AEE3-D0AA5F56C421")
    IChain2 : public IChain
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CertificatePolicies( 
            /* [retval][out] */ IOIDs **pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ApplicationPolicies( 
            /* [retval][out] */ IOIDs **pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ExtendedErrorInfo( 
            /* [defaultvalue][in] */ long Index,
            /* [retval][out] */ BSTR *pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IChain2Vtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IChain2 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IChain2 * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IChain2 * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IChain2 * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IChain2 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IChain2 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IChain2 * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        DECLSPEC_XFGVIRT(IChain, get_Certificates)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Certificates )( 
            IChain2 * This,
            /* [retval][out] */ ICertificates **pVal);
        
        DECLSPEC_XFGVIRT(IChain, get_Status)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Status )( 
            IChain2 * This,
            /* [defaultvalue][in] */ long Index,
            /* [retval][out] */ long *pVal);
        
        DECLSPEC_XFGVIRT(IChain, Build)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Build )( 
            IChain2 * This,
            /* [in] */ ICertificate *pICertificate,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        DECLSPEC_XFGVIRT(IChain2, CertificatePolicies)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CertificatePolicies )( 
            IChain2 * This,
            /* [retval][out] */ IOIDs **pVal);
        
        DECLSPEC_XFGVIRT(IChain2, ApplicationPolicies)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ApplicationPolicies )( 
            IChain2 * This,
            /* [retval][out] */ IOIDs **pVal);
        
        DECLSPEC_XFGVIRT(IChain2, ExtendedErrorInfo)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ExtendedErrorInfo )( 
            IChain2 * This,
            /* [defaultvalue][in] */ long Index,
            /* [retval][out] */ BSTR *pVal);
        
        END_INTERFACE
    } IChain2Vtbl;

    interface IChain2
    {
        CONST_VTBL struct IChain2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IChain2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IChain2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IChain2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IChain2_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IChain2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IChain2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IChain2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IChain2_get_Certificates(This,pVal)	\
    ( (This)->lpVtbl -> get_Certificates(This,pVal) ) 

#define IChain2_get_Status(This,Index,pVal)	\
    ( (This)->lpVtbl -> get_Status(This,Index,pVal) ) 

#define IChain2_Build(This,pICertificate,pVal)	\
    ( (This)->lpVtbl -> Build(This,pICertificate,pVal) ) 


#define IChain2_CertificatePolicies(This,pVal)	\
    ( (This)->lpVtbl -> CertificatePolicies(This,pVal) ) 

#define IChain2_ApplicationPolicies(This,pVal)	\
    ( (This)->lpVtbl -> ApplicationPolicies(This,pVal) ) 

#define IChain2_ExtendedErrorInfo(This,Index,pVal)	\
    ( (This)->lpVtbl -> ExtendedErrorInfo(This,Index,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IChain2_INTERFACE_DEFINED__ */


#ifndef __IStore_INTERFACE_DEFINED__
#define __IStore_INTERFACE_DEFINED__

/* interface IStore */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IStore;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("E860EF75-1B63-4254-AF47-960DAA3DD337")
    IStore : public IDispatch
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Certificates( 
            /* [retval][out] */ ICertificates **pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Open( 
            /* [defaultvalue][in] */ CAPICOM_STORE_LOCATION StoreLocation = CAPICOM_CURRENT_USER_STORE,
            /* [defaultvalue][in] */ BSTR StoreName = (BSTR)L"My",
            /* [defaultvalue][in] */ CAPICOM_STORE_OPEN_MODE OpenMode = CAPICOM_STORE_OPEN_READ_ONLY) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Add( 
            /* [in] */ ICertificate *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Remove( 
            /* [in] */ ICertificate *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Export( 
            /* [defaultvalue][in] */ CAPICOM_STORE_SAVE_AS_TYPE SaveAs,
            /* [defaultvalue][in] */ CAPICOM_ENCODING_TYPE EncodingType,
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Import( 
            /* [in] */ BSTR EncodedStore) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IStoreVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IStore * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IStore * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IStore * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IStore * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IStore * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IStore * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IStore * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        DECLSPEC_XFGVIRT(IStore, get_Certificates)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Certificates )( 
            IStore * This,
            /* [retval][out] */ ICertificates **pVal);
        
        DECLSPEC_XFGVIRT(IStore, Open)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Open )( 
            IStore * This,
            /* [defaultvalue][in] */ CAPICOM_STORE_LOCATION StoreLocation,
            /* [defaultvalue][in] */ BSTR StoreName,
            /* [defaultvalue][in] */ CAPICOM_STORE_OPEN_MODE OpenMode);
        
        DECLSPEC_XFGVIRT(IStore, Add)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Add )( 
            IStore * This,
            /* [in] */ ICertificate *pVal);
        
        DECLSPEC_XFGVIRT(IStore, Remove)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Remove )( 
            IStore * This,
            /* [in] */ ICertificate *pVal);
        
        DECLSPEC_XFGVIRT(IStore, Export)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Export )( 
            IStore * This,
            /* [defaultvalue][in] */ CAPICOM_STORE_SAVE_AS_TYPE SaveAs,
            /* [defaultvalue][in] */ CAPICOM_ENCODING_TYPE EncodingType,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(IStore, Import)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Import )( 
            IStore * This,
            /* [in] */ BSTR EncodedStore);
        
        END_INTERFACE
    } IStoreVtbl;

    interface IStore
    {
        CONST_VTBL struct IStoreVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IStore_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IStore_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IStore_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IStore_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IStore_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IStore_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IStore_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IStore_get_Certificates(This,pVal)	\
    ( (This)->lpVtbl -> get_Certificates(This,pVal) ) 

#define IStore_Open(This,StoreLocation,StoreName,OpenMode)	\
    ( (This)->lpVtbl -> Open(This,StoreLocation,StoreName,OpenMode) ) 

#define IStore_Add(This,pVal)	\
    ( (This)->lpVtbl -> Add(This,pVal) ) 

#define IStore_Remove(This,pVal)	\
    ( (This)->lpVtbl -> Remove(This,pVal) ) 

#define IStore_Export(This,SaveAs,EncodingType,pVal)	\
    ( (This)->lpVtbl -> Export(This,SaveAs,EncodingType,pVal) ) 

#define IStore_Import(This,EncodedStore)	\
    ( (This)->lpVtbl -> Import(This,EncodedStore) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IStore_INTERFACE_DEFINED__ */


#ifndef __IStore2_INTERFACE_DEFINED__
#define __IStore2_INTERFACE_DEFINED__

/* interface IStore2 */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IStore2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("4DA6ABC4-BDCD-4317-B650-262075B93A9C")
    IStore2 : public IStore
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Load( 
            /* [in] */ BSTR FileName,
            /* [defaultvalue][in] */ BSTR Password = (BSTR)L"",
            /* [defaultvalue][in] */ CAPICOM_KEY_STORAGE_FLAG KeyStorageFlag = CAPICOM_KEY_STORAGE_DEFAULT) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IStore2Vtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IStore2 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IStore2 * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IStore2 * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IStore2 * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IStore2 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IStore2 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IStore2 * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        DECLSPEC_XFGVIRT(IStore, get_Certificates)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Certificates )( 
            IStore2 * This,
            /* [retval][out] */ ICertificates **pVal);
        
        DECLSPEC_XFGVIRT(IStore, Open)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Open )( 
            IStore2 * This,
            /* [defaultvalue][in] */ CAPICOM_STORE_LOCATION StoreLocation,
            /* [defaultvalue][in] */ BSTR StoreName,
            /* [defaultvalue][in] */ CAPICOM_STORE_OPEN_MODE OpenMode);
        
        DECLSPEC_XFGVIRT(IStore, Add)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Add )( 
            IStore2 * This,
            /* [in] */ ICertificate *pVal);
        
        DECLSPEC_XFGVIRT(IStore, Remove)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Remove )( 
            IStore2 * This,
            /* [in] */ ICertificate *pVal);
        
        DECLSPEC_XFGVIRT(IStore, Export)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Export )( 
            IStore2 * This,
            /* [defaultvalue][in] */ CAPICOM_STORE_SAVE_AS_TYPE SaveAs,
            /* [defaultvalue][in] */ CAPICOM_ENCODING_TYPE EncodingType,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(IStore, Import)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Import )( 
            IStore2 * This,
            /* [in] */ BSTR EncodedStore);
        
        DECLSPEC_XFGVIRT(IStore2, Load)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Load )( 
            IStore2 * This,
            /* [in] */ BSTR FileName,
            /* [defaultvalue][in] */ BSTR Password,
            /* [defaultvalue][in] */ CAPICOM_KEY_STORAGE_FLAG KeyStorageFlag);
        
        END_INTERFACE
    } IStore2Vtbl;

    interface IStore2
    {
        CONST_VTBL struct IStore2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IStore2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IStore2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IStore2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IStore2_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IStore2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IStore2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IStore2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IStore2_get_Certificates(This,pVal)	\
    ( (This)->lpVtbl -> get_Certificates(This,pVal) ) 

#define IStore2_Open(This,StoreLocation,StoreName,OpenMode)	\
    ( (This)->lpVtbl -> Open(This,StoreLocation,StoreName,OpenMode) ) 

#define IStore2_Add(This,pVal)	\
    ( (This)->lpVtbl -> Add(This,pVal) ) 

#define IStore2_Remove(This,pVal)	\
    ( (This)->lpVtbl -> Remove(This,pVal) ) 

#define IStore2_Export(This,SaveAs,EncodingType,pVal)	\
    ( (This)->lpVtbl -> Export(This,SaveAs,EncodingType,pVal) ) 

#define IStore2_Import(This,EncodedStore)	\
    ( (This)->lpVtbl -> Import(This,EncodedStore) ) 


#define IStore2_Load(This,FileName,Password,KeyStorageFlag)	\
    ( (This)->lpVtbl -> Load(This,FileName,Password,KeyStorageFlag) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IStore2_INTERFACE_DEFINED__ */


#ifndef __IStore3_INTERFACE_DEFINED__
#define __IStore3_INTERFACE_DEFINED__

/* interface IStore3 */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IStore3;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("F701F8EC-31C7-48FB-B621-5DE417C3A607")
    IStore3 : public IStore2
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Location( 
            /* [retval][out] */ CAPICOM_STORE_LOCATION *pStoreLocation) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Delete( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Close( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IStore3Vtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IStore3 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IStore3 * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IStore3 * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IStore3 * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IStore3 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IStore3 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IStore3 * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        DECLSPEC_XFGVIRT(IStore, get_Certificates)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Certificates )( 
            IStore3 * This,
            /* [retval][out] */ ICertificates **pVal);
        
        DECLSPEC_XFGVIRT(IStore, Open)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Open )( 
            IStore3 * This,
            /* [defaultvalue][in] */ CAPICOM_STORE_LOCATION StoreLocation,
            /* [defaultvalue][in] */ BSTR StoreName,
            /* [defaultvalue][in] */ CAPICOM_STORE_OPEN_MODE OpenMode);
        
        DECLSPEC_XFGVIRT(IStore, Add)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Add )( 
            IStore3 * This,
            /* [in] */ ICertificate *pVal);
        
        DECLSPEC_XFGVIRT(IStore, Remove)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Remove )( 
            IStore3 * This,
            /* [in] */ ICertificate *pVal);
        
        DECLSPEC_XFGVIRT(IStore, Export)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Export )( 
            IStore3 * This,
            /* [defaultvalue][in] */ CAPICOM_STORE_SAVE_AS_TYPE SaveAs,
            /* [defaultvalue][in] */ CAPICOM_ENCODING_TYPE EncodingType,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(IStore, Import)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Import )( 
            IStore3 * This,
            /* [in] */ BSTR EncodedStore);
        
        DECLSPEC_XFGVIRT(IStore2, Load)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Load )( 
            IStore3 * This,
            /* [in] */ BSTR FileName,
            /* [defaultvalue][in] */ BSTR Password,
            /* [defaultvalue][in] */ CAPICOM_KEY_STORAGE_FLAG KeyStorageFlag);
        
        DECLSPEC_XFGVIRT(IStore3, get_Name)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IStore3 * This,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(IStore3, get_Location)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Location )( 
            IStore3 * This,
            /* [retval][out] */ CAPICOM_STORE_LOCATION *pStoreLocation);
        
        DECLSPEC_XFGVIRT(IStore3, Delete)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Delete )( 
            IStore3 * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        DECLSPEC_XFGVIRT(IStore3, Close)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Close )( 
            IStore3 * This);
        
        END_INTERFACE
    } IStore3Vtbl;

    interface IStore3
    {
        CONST_VTBL struct IStore3Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IStore3_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IStore3_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IStore3_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IStore3_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IStore3_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IStore3_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IStore3_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IStore3_get_Certificates(This,pVal)	\
    ( (This)->lpVtbl -> get_Certificates(This,pVal) ) 

#define IStore3_Open(This,StoreLocation,StoreName,OpenMode)	\
    ( (This)->lpVtbl -> Open(This,StoreLocation,StoreName,OpenMode) ) 

#define IStore3_Add(This,pVal)	\
    ( (This)->lpVtbl -> Add(This,pVal) ) 

#define IStore3_Remove(This,pVal)	\
    ( (This)->lpVtbl -> Remove(This,pVal) ) 

#define IStore3_Export(This,SaveAs,EncodingType,pVal)	\
    ( (This)->lpVtbl -> Export(This,SaveAs,EncodingType,pVal) ) 

#define IStore3_Import(This,EncodedStore)	\
    ( (This)->lpVtbl -> Import(This,EncodedStore) ) 


#define IStore3_Load(This,FileName,Password,KeyStorageFlag)	\
    ( (This)->lpVtbl -> Load(This,FileName,Password,KeyStorageFlag) ) 


#define IStore3_get_Name(This,pVal)	\
    ( (This)->lpVtbl -> get_Name(This,pVal) ) 

#define IStore3_get_Location(This,pStoreLocation)	\
    ( (This)->lpVtbl -> get_Location(This,pStoreLocation) ) 

#define IStore3_Delete(This,pVal)	\
    ( (This)->lpVtbl -> Delete(This,pVal) ) 

#define IStore3_Close(This)	\
    ( (This)->lpVtbl -> Close(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IStore3_INTERFACE_DEFINED__ */


#ifndef __ICertStore_INTERFACE_DEFINED__
#define __ICertStore_INTERFACE_DEFINED__

/* interface ICertStore */
/* [object][helpstring][uuid] */ 


EXTERN_C const IID IID_ICertStore;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("BB3ECB9C-A83A-445C-BDB5-EFBEF691B731")
    ICertStore : public IUnknown
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT __stdcall get_StoreHandle( 
            /* [retval][out] */ long *phCertStore) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT __stdcall put_StoreHandle( 
            /* [in] */ long phCertStore) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT __stdcall get_StoreLocation( 
            /* [retval][out] */ CAPICOM_STORE_LOCATION *pStoreLocation) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT __stdcall put_StoreLocation( 
            /* [in] */ CAPICOM_STORE_LOCATION pStoreLocation) = 0;
        
        virtual /* [helpstring] */ HRESULT __stdcall CloseHandle( 
            /* [in] */ long hCertStore) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICertStoreVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICertStore * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICertStore * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICertStore * This);
        
        DECLSPEC_XFGVIRT(ICertStore, get_StoreHandle)
        /* [helpstring][propget] */ HRESULT ( __stdcall *get_StoreHandle )( 
            ICertStore * This,
            /* [retval][out] */ long *phCertStore);
        
        DECLSPEC_XFGVIRT(ICertStore, put_StoreHandle)
        /* [helpstring][propput] */ HRESULT ( __stdcall *put_StoreHandle )( 
            ICertStore * This,
            /* [in] */ long phCertStore);
        
        DECLSPEC_XFGVIRT(ICertStore, get_StoreLocation)
        /* [helpstring][propget] */ HRESULT ( __stdcall *get_StoreLocation )( 
            ICertStore * This,
            /* [retval][out] */ CAPICOM_STORE_LOCATION *pStoreLocation);
        
        DECLSPEC_XFGVIRT(ICertStore, put_StoreLocation)
        /* [helpstring][propput] */ HRESULT ( __stdcall *put_StoreLocation )( 
            ICertStore * This,
            /* [in] */ CAPICOM_STORE_LOCATION pStoreLocation);
        
        DECLSPEC_XFGVIRT(ICertStore, CloseHandle)
        /* [helpstring] */ HRESULT ( __stdcall *CloseHandle )( 
            ICertStore * This,
            /* [in] */ long hCertStore);
        
        END_INTERFACE
    } ICertStoreVtbl;

    interface ICertStore
    {
        CONST_VTBL struct ICertStoreVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICertStore_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICertStore_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICertStore_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICertStore_get_StoreHandle(This,phCertStore)	\
    ( (This)->lpVtbl -> get_StoreHandle(This,phCertStore) ) 

#define ICertStore_put_StoreHandle(This,phCertStore)	\
    ( (This)->lpVtbl -> put_StoreHandle(This,phCertStore) ) 

#define ICertStore_get_StoreLocation(This,pStoreLocation)	\
    ( (This)->lpVtbl -> get_StoreLocation(This,pStoreLocation) ) 

#define ICertStore_put_StoreLocation(This,pStoreLocation)	\
    ( (This)->lpVtbl -> put_StoreLocation(This,pStoreLocation) ) 

#define ICertStore_CloseHandle(This,hCertStore)	\
    ( (This)->lpVtbl -> CloseHandle(This,hCertStore) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICertStore_INTERFACE_DEFINED__ */


#ifndef __IAttribute_INTERFACE_DEFINED__
#define __IAttribute_INTERFACE_DEFINED__

/* interface IAttribute */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IAttribute;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("B17A8D78-B5A6-45F7-BA21-01AB94B08415")
    IAttribute : public IDispatch
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ CAPICOM_ATTRIBUTE *pVal) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_Name( 
            /* [in] */ CAPICOM_ATTRIBUTE pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Value( 
            /* [retval][out] */ VARIANT *pVal) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_Value( 
            /* [in] */ VARIANT pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAttributeVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAttribute * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAttribute * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAttribute * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAttribute * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAttribute * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAttribute * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAttribute * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        DECLSPEC_XFGVIRT(IAttribute, get_Name)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IAttribute * This,
            /* [retval][out] */ CAPICOM_ATTRIBUTE *pVal);
        
        DECLSPEC_XFGVIRT(IAttribute, put_Name)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Name )( 
            IAttribute * This,
            /* [in] */ CAPICOM_ATTRIBUTE pVal);
        
        DECLSPEC_XFGVIRT(IAttribute, get_Value)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Value )( 
            IAttribute * This,
            /* [retval][out] */ VARIANT *pVal);
        
        DECLSPEC_XFGVIRT(IAttribute, put_Value)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Value )( 
            IAttribute * This,
            /* [in] */ VARIANT pVal);
        
        END_INTERFACE
    } IAttributeVtbl;

    interface IAttribute
    {
        CONST_VTBL struct IAttributeVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAttribute_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAttribute_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAttribute_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAttribute_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IAttribute_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IAttribute_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IAttribute_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IAttribute_get_Name(This,pVal)	\
    ( (This)->lpVtbl -> get_Name(This,pVal) ) 

#define IAttribute_put_Name(This,pVal)	\
    ( (This)->lpVtbl -> put_Name(This,pVal) ) 

#define IAttribute_get_Value(This,pVal)	\
    ( (This)->lpVtbl -> get_Value(This,pVal) ) 

#define IAttribute_put_Value(This,pVal)	\
    ( (This)->lpVtbl -> put_Value(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAttribute_INTERFACE_DEFINED__ */


#ifndef __IAttributes_INTERFACE_DEFINED__
#define __IAttributes_INTERFACE_DEFINED__

/* interface IAttributes */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IAttributes;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6ADC653E-D5B9-422A-991A-A2B0119CEDAC")
    IAttributes : public IDispatch
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ long Index,
            /* [retval][out] */ VARIANT *pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][restricted][propget][id] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IUnknown **pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Add( 
            /* [in] */ IAttribute *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Remove( 
            /* [in] */ long Index) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Clear( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAttributesVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAttributes * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAttributes * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAttributes * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAttributes * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAttributes * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAttributes * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAttributes * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        DECLSPEC_XFGVIRT(IAttributes, get_Item)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            IAttributes * This,
            /* [in] */ long Index,
            /* [retval][out] */ VARIANT *pVal);
        
        DECLSPEC_XFGVIRT(IAttributes, get_Count)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IAttributes * This,
            /* [retval][out] */ long *pVal);
        
        DECLSPEC_XFGVIRT(IAttributes, get__NewEnum)
        /* [helpstring][restricted][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            IAttributes * This,
            /* [retval][out] */ IUnknown **pVal);
        
        DECLSPEC_XFGVIRT(IAttributes, Add)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Add )( 
            IAttributes * This,
            /* [in] */ IAttribute *pVal);
        
        DECLSPEC_XFGVIRT(IAttributes, Remove)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Remove )( 
            IAttributes * This,
            /* [in] */ long Index);
        
        DECLSPEC_XFGVIRT(IAttributes, Clear)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Clear )( 
            IAttributes * This);
        
        END_INTERFACE
    } IAttributesVtbl;

    interface IAttributes
    {
        CONST_VTBL struct IAttributesVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAttributes_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAttributes_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAttributes_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAttributes_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IAttributes_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IAttributes_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IAttributes_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IAttributes_get_Item(This,Index,pVal)	\
    ( (This)->lpVtbl -> get_Item(This,Index,pVal) ) 

#define IAttributes_get_Count(This,pVal)	\
    ( (This)->lpVtbl -> get_Count(This,pVal) ) 

#define IAttributes_get__NewEnum(This,pVal)	\
    ( (This)->lpVtbl -> get__NewEnum(This,pVal) ) 

#define IAttributes_Add(This,pVal)	\
    ( (This)->lpVtbl -> Add(This,pVal) ) 

#define IAttributes_Remove(This,Index)	\
    ( (This)->lpVtbl -> Remove(This,Index) ) 

#define IAttributes_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAttributes_INTERFACE_DEFINED__ */


#ifndef __ISigner_INTERFACE_DEFINED__
#define __ISigner_INTERFACE_DEFINED__

/* interface ISigner */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_ISigner;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("51017B88-1913-49AD-82BE-6BB7C417DCF2")
    ISigner : public IDispatch
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Certificate( 
            /* [retval][out] */ ICertificate **pVal) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_Certificate( 
            /* [in] */ ICertificate *pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_AuthenticatedAttributes( 
            /* [retval][out] */ IAttributes **pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ISignerVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISigner * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISigner * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISigner * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISigner * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISigner * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISigner * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISigner * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        DECLSPEC_XFGVIRT(ISigner, get_Certificate)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Certificate )( 
            ISigner * This,
            /* [retval][out] */ ICertificate **pVal);
        
        DECLSPEC_XFGVIRT(ISigner, put_Certificate)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Certificate )( 
            ISigner * This,
            /* [in] */ ICertificate *pVal);
        
        DECLSPEC_XFGVIRT(ISigner, get_AuthenticatedAttributes)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_AuthenticatedAttributes )( 
            ISigner * This,
            /* [retval][out] */ IAttributes **pVal);
        
        END_INTERFACE
    } ISignerVtbl;

    interface ISigner
    {
        CONST_VTBL struct ISignerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISigner_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISigner_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISigner_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISigner_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISigner_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISigner_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISigner_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ISigner_get_Certificate(This,pVal)	\
    ( (This)->lpVtbl -> get_Certificate(This,pVal) ) 

#define ISigner_put_Certificate(This,pVal)	\
    ( (This)->lpVtbl -> put_Certificate(This,pVal) ) 

#define ISigner_get_AuthenticatedAttributes(This,pVal)	\
    ( (This)->lpVtbl -> get_AuthenticatedAttributes(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISigner_INTERFACE_DEFINED__ */


#ifndef __ISigner2_INTERFACE_DEFINED__
#define __ISigner2_INTERFACE_DEFINED__

/* interface ISigner2 */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_ISigner2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("625B1F55-C720-41D6-9ECF-BA59F9B85F17")
    ISigner2 : public ISigner
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Chain( 
            /* [retval][out] */ IChain **pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Options( 
            /* [retval][out] */ CAPICOM_CERTIFICATE_INCLUDE_OPTION *pVal) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_Options( 
            /* [defaultvalue][in] */ CAPICOM_CERTIFICATE_INCLUDE_OPTION pVal = CAPICOM_CERTIFICATE_INCLUDE_CHAIN_EXCEPT_ROOT) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Load( 
            /* [in] */ BSTR FileName,
            /* [defaultvalue][in] */ BSTR Password = (BSTR)L"") = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ISigner2Vtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISigner2 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISigner2 * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISigner2 * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISigner2 * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISigner2 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISigner2 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISigner2 * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        DECLSPEC_XFGVIRT(ISigner, get_Certificate)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Certificate )( 
            ISigner2 * This,
            /* [retval][out] */ ICertificate **pVal);
        
        DECLSPEC_XFGVIRT(ISigner, put_Certificate)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Certificate )( 
            ISigner2 * This,
            /* [in] */ ICertificate *pVal);
        
        DECLSPEC_XFGVIRT(ISigner, get_AuthenticatedAttributes)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_AuthenticatedAttributes )( 
            ISigner2 * This,
            /* [retval][out] */ IAttributes **pVal);
        
        DECLSPEC_XFGVIRT(ISigner2, get_Chain)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Chain )( 
            ISigner2 * This,
            /* [retval][out] */ IChain **pVal);
        
        DECLSPEC_XFGVIRT(ISigner2, get_Options)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Options )( 
            ISigner2 * This,
            /* [retval][out] */ CAPICOM_CERTIFICATE_INCLUDE_OPTION *pVal);
        
        DECLSPEC_XFGVIRT(ISigner2, put_Options)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Options )( 
            ISigner2 * This,
            /* [defaultvalue][in] */ CAPICOM_CERTIFICATE_INCLUDE_OPTION pVal);
        
        DECLSPEC_XFGVIRT(ISigner2, Load)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Load )( 
            ISigner2 * This,
            /* [in] */ BSTR FileName,
            /* [defaultvalue][in] */ BSTR Password);
        
        END_INTERFACE
    } ISigner2Vtbl;

    interface ISigner2
    {
        CONST_VTBL struct ISigner2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISigner2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISigner2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISigner2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISigner2_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISigner2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISigner2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISigner2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ISigner2_get_Certificate(This,pVal)	\
    ( (This)->lpVtbl -> get_Certificate(This,pVal) ) 

#define ISigner2_put_Certificate(This,pVal)	\
    ( (This)->lpVtbl -> put_Certificate(This,pVal) ) 

#define ISigner2_get_AuthenticatedAttributes(This,pVal)	\
    ( (This)->lpVtbl -> get_AuthenticatedAttributes(This,pVal) ) 


#define ISigner2_get_Chain(This,pVal)	\
    ( (This)->lpVtbl -> get_Chain(This,pVal) ) 

#define ISigner2_get_Options(This,pVal)	\
    ( (This)->lpVtbl -> get_Options(This,pVal) ) 

#define ISigner2_put_Options(This,pVal)	\
    ( (This)->lpVtbl -> put_Options(This,pVal) ) 

#define ISigner2_Load(This,FileName,Password)	\
    ( (This)->lpVtbl -> Load(This,FileName,Password) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISigner2_INTERFACE_DEFINED__ */


#ifndef __ICSigner_INTERFACE_DEFINED__
#define __ICSigner_INTERFACE_DEFINED__

/* interface ICSigner */
/* [object][restricted][helpstring][uuid] */ 


EXTERN_C const IID IID_ICSigner;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8F83F792-014C-4E22-BD57-5C381E622F34")
    ICSigner : public IUnknown
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT __stdcall get_AdditionalStore( 
            /* [retval][out] */ long *phAdditionalStore) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT __stdcall put_AdditionalStore( 
            /* [in] */ long phAdditionalStore) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICSignerVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICSigner * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICSigner * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICSigner * This);
        
        DECLSPEC_XFGVIRT(ICSigner, get_AdditionalStore)
        /* [helpstring][propget] */ HRESULT ( __stdcall *get_AdditionalStore )( 
            ICSigner * This,
            /* [retval][out] */ long *phAdditionalStore);
        
        DECLSPEC_XFGVIRT(ICSigner, put_AdditionalStore)
        /* [helpstring][propput] */ HRESULT ( __stdcall *put_AdditionalStore )( 
            ICSigner * This,
            /* [in] */ long phAdditionalStore);
        
        END_INTERFACE
    } ICSignerVtbl;

    interface ICSigner
    {
        CONST_VTBL struct ICSignerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICSigner_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICSigner_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICSigner_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICSigner_get_AdditionalStore(This,phAdditionalStore)	\
    ( (This)->lpVtbl -> get_AdditionalStore(This,phAdditionalStore) ) 

#define ICSigner_put_AdditionalStore(This,phAdditionalStore)	\
    ( (This)->lpVtbl -> put_AdditionalStore(This,phAdditionalStore) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICSigner_INTERFACE_DEFINED__ */


#ifndef __ISigners_INTERFACE_DEFINED__
#define __ISigners_INTERFACE_DEFINED__

/* interface ISigners */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_ISigners;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("5A0780F8-9E6B-4BB0-BF54-87CD9627A8B4")
    ISigners : public IDispatch
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ long Index,
            /* [retval][out] */ VARIANT *pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][restricted][propget][id] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IUnknown **pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ISignersVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISigners * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISigners * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISigners * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISigners * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISigners * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISigners * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISigners * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        DECLSPEC_XFGVIRT(ISigners, get_Item)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            ISigners * This,
            /* [in] */ long Index,
            /* [retval][out] */ VARIANT *pVal);
        
        DECLSPEC_XFGVIRT(ISigners, get_Count)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            ISigners * This,
            /* [retval][out] */ long *pVal);
        
        DECLSPEC_XFGVIRT(ISigners, get__NewEnum)
        /* [helpstring][restricted][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            ISigners * This,
            /* [retval][out] */ IUnknown **pVal);
        
        END_INTERFACE
    } ISignersVtbl;

    interface ISigners
    {
        CONST_VTBL struct ISignersVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISigners_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISigners_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISigners_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISigners_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISigners_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISigners_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISigners_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ISigners_get_Item(This,Index,pVal)	\
    ( (This)->lpVtbl -> get_Item(This,Index,pVal) ) 

#define ISigners_get_Count(This,pVal)	\
    ( (This)->lpVtbl -> get_Count(This,pVal) ) 

#define ISigners_get__NewEnum(This,pVal)	\
    ( (This)->lpVtbl -> get__NewEnum(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISigners_INTERFACE_DEFINED__ */


#ifndef __ISignedData_INTERFACE_DEFINED__
#define __ISignedData_INTERFACE_DEFINED__

/* interface ISignedData */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_ISignedData;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("AE9C454B-FC65-4C10-B130-CD9B45BA948B")
    ISignedData : public IDispatch
    {
    public:
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_Content( 
            /* [in] */ BSTR pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Content( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Signers( 
            /* [retval][out] */ ISigners **pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Certificates( 
            /* [retval][out] */ ICertificates **pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Sign( 
            /* [defaultvalue][in] */ ISigner *pSigner,
            /* [defaultvalue][in] */ VARIANT_BOOL bDetached,
            /* [defaultvalue][in] */ CAPICOM_ENCODING_TYPE EncodingType,
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CoSign( 
            /* [defaultvalue][in] */ ISigner *pSigner,
            /* [defaultvalue][in] */ CAPICOM_ENCODING_TYPE EncodingType,
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Verify( 
            /* [in] */ BSTR SignedMessage,
            /* [defaultvalue][in] */ VARIANT_BOOL bDetached = 0,
            /* [defaultvalue][in] */ CAPICOM_SIGNED_DATA_VERIFY_FLAG VerifyFlag = CAPICOM_VERIFY_SIGNATURE_AND_CERTIFICATE) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ISignedDataVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISignedData * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISignedData * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISignedData * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISignedData * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISignedData * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISignedData * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISignedData * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        DECLSPEC_XFGVIRT(ISignedData, put_Content)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Content )( 
            ISignedData * This,
            /* [in] */ BSTR pVal);
        
        DECLSPEC_XFGVIRT(ISignedData, get_Content)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Content )( 
            ISignedData * This,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(ISignedData, get_Signers)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Signers )( 
            ISignedData * This,
            /* [retval][out] */ ISigners **pVal);
        
        DECLSPEC_XFGVIRT(ISignedData, get_Certificates)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Certificates )( 
            ISignedData * This,
            /* [retval][out] */ ICertificates **pVal);
        
        DECLSPEC_XFGVIRT(ISignedData, Sign)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Sign )( 
            ISignedData * This,
            /* [defaultvalue][in] */ ISigner *pSigner,
            /* [defaultvalue][in] */ VARIANT_BOOL bDetached,
            /* [defaultvalue][in] */ CAPICOM_ENCODING_TYPE EncodingType,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(ISignedData, CoSign)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CoSign )( 
            ISignedData * This,
            /* [defaultvalue][in] */ ISigner *pSigner,
            /* [defaultvalue][in] */ CAPICOM_ENCODING_TYPE EncodingType,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(ISignedData, Verify)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Verify )( 
            ISignedData * This,
            /* [in] */ BSTR SignedMessage,
            /* [defaultvalue][in] */ VARIANT_BOOL bDetached,
            /* [defaultvalue][in] */ CAPICOM_SIGNED_DATA_VERIFY_FLAG VerifyFlag);
        
        END_INTERFACE
    } ISignedDataVtbl;

    interface ISignedData
    {
        CONST_VTBL struct ISignedDataVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISignedData_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISignedData_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISignedData_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISignedData_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISignedData_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISignedData_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISignedData_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ISignedData_put_Content(This,pVal)	\
    ( (This)->lpVtbl -> put_Content(This,pVal) ) 

#define ISignedData_get_Content(This,pVal)	\
    ( (This)->lpVtbl -> get_Content(This,pVal) ) 

#define ISignedData_get_Signers(This,pVal)	\
    ( (This)->lpVtbl -> get_Signers(This,pVal) ) 

#define ISignedData_get_Certificates(This,pVal)	\
    ( (This)->lpVtbl -> get_Certificates(This,pVal) ) 

#define ISignedData_Sign(This,pSigner,bDetached,EncodingType,pVal)	\
    ( (This)->lpVtbl -> Sign(This,pSigner,bDetached,EncodingType,pVal) ) 

#define ISignedData_CoSign(This,pSigner,EncodingType,pVal)	\
    ( (This)->lpVtbl -> CoSign(This,pSigner,EncodingType,pVal) ) 

#define ISignedData_Verify(This,SignedMessage,bDetached,VerifyFlag)	\
    ( (This)->lpVtbl -> Verify(This,SignedMessage,bDetached,VerifyFlag) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISignedData_INTERFACE_DEFINED__ */


#ifndef __IAlgorithm_INTERFACE_DEFINED__
#define __IAlgorithm_INTERFACE_DEFINED__

/* interface IAlgorithm */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IAlgorithm;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("BF3D04A9-B0DA-4153-B45E-6CCFA5AC715B")
    IAlgorithm : public IDispatch
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ CAPICOM_ENCRYPTION_ALGORITHM *pVal) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_Name( 
            /* [in] */ CAPICOM_ENCRYPTION_ALGORITHM pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_KeyLength( 
            /* [retval][out] */ CAPICOM_ENCRYPTION_KEY_LENGTH *pVal) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_KeyLength( 
            /* [in] */ CAPICOM_ENCRYPTION_KEY_LENGTH pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAlgorithmVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAlgorithm * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAlgorithm * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAlgorithm * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAlgorithm * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAlgorithm * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAlgorithm * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAlgorithm * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        DECLSPEC_XFGVIRT(IAlgorithm, get_Name)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IAlgorithm * This,
            /* [retval][out] */ CAPICOM_ENCRYPTION_ALGORITHM *pVal);
        
        DECLSPEC_XFGVIRT(IAlgorithm, put_Name)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Name )( 
            IAlgorithm * This,
            /* [in] */ CAPICOM_ENCRYPTION_ALGORITHM pVal);
        
        DECLSPEC_XFGVIRT(IAlgorithm, get_KeyLength)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_KeyLength )( 
            IAlgorithm * This,
            /* [retval][out] */ CAPICOM_ENCRYPTION_KEY_LENGTH *pVal);
        
        DECLSPEC_XFGVIRT(IAlgorithm, put_KeyLength)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_KeyLength )( 
            IAlgorithm * This,
            /* [in] */ CAPICOM_ENCRYPTION_KEY_LENGTH pVal);
        
        END_INTERFACE
    } IAlgorithmVtbl;

    interface IAlgorithm
    {
        CONST_VTBL struct IAlgorithmVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAlgorithm_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAlgorithm_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAlgorithm_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAlgorithm_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IAlgorithm_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IAlgorithm_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IAlgorithm_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IAlgorithm_get_Name(This,pVal)	\
    ( (This)->lpVtbl -> get_Name(This,pVal) ) 

#define IAlgorithm_put_Name(This,pVal)	\
    ( (This)->lpVtbl -> put_Name(This,pVal) ) 

#define IAlgorithm_get_KeyLength(This,pVal)	\
    ( (This)->lpVtbl -> get_KeyLength(This,pVal) ) 

#define IAlgorithm_put_KeyLength(This,pVal)	\
    ( (This)->lpVtbl -> put_KeyLength(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAlgorithm_INTERFACE_DEFINED__ */


#ifndef __IRecipients_INTERFACE_DEFINED__
#define __IRecipients_INTERFACE_DEFINED__

/* interface IRecipients */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IRecipients;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("A694C896-FC38-4C34-AE61-3B1A95984C14")
    IRecipients : public IDispatch
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ long Index,
            /* [retval][out] */ VARIANT *pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][restricted][propget][id] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IUnknown **pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Add( 
            /* [in] */ ICertificate *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Remove( 
            /* [in] */ long Index) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Clear( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IRecipientsVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IRecipients * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IRecipients * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IRecipients * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IRecipients * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IRecipients * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IRecipients * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IRecipients * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        DECLSPEC_XFGVIRT(IRecipients, get_Item)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            IRecipients * This,
            /* [in] */ long Index,
            /* [retval][out] */ VARIANT *pVal);
        
        DECLSPEC_XFGVIRT(IRecipients, get_Count)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IRecipients * This,
            /* [retval][out] */ long *pVal);
        
        DECLSPEC_XFGVIRT(IRecipients, get__NewEnum)
        /* [helpstring][restricted][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            IRecipients * This,
            /* [retval][out] */ IUnknown **pVal);
        
        DECLSPEC_XFGVIRT(IRecipients, Add)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Add )( 
            IRecipients * This,
            /* [in] */ ICertificate *pVal);
        
        DECLSPEC_XFGVIRT(IRecipients, Remove)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Remove )( 
            IRecipients * This,
            /* [in] */ long Index);
        
        DECLSPEC_XFGVIRT(IRecipients, Clear)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Clear )( 
            IRecipients * This);
        
        END_INTERFACE
    } IRecipientsVtbl;

    interface IRecipients
    {
        CONST_VTBL struct IRecipientsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IRecipients_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IRecipients_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IRecipients_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IRecipients_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IRecipients_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IRecipients_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IRecipients_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IRecipients_get_Item(This,Index,pVal)	\
    ( (This)->lpVtbl -> get_Item(This,Index,pVal) ) 

#define IRecipients_get_Count(This,pVal)	\
    ( (This)->lpVtbl -> get_Count(This,pVal) ) 

#define IRecipients_get__NewEnum(This,pVal)	\
    ( (This)->lpVtbl -> get__NewEnum(This,pVal) ) 

#define IRecipients_Add(This,pVal)	\
    ( (This)->lpVtbl -> Add(This,pVal) ) 

#define IRecipients_Remove(This,Index)	\
    ( (This)->lpVtbl -> Remove(This,Index) ) 

#define IRecipients_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IRecipients_INTERFACE_DEFINED__ */


#ifndef __IEnvelopedData_INTERFACE_DEFINED__
#define __IEnvelopedData_INTERFACE_DEFINED__

/* interface IEnvelopedData */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IEnvelopedData;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("F6CB6A20-CC18-4424-AE57-6F2AA3DC2059")
    IEnvelopedData : public IDispatch
    {
    public:
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_Content( 
            /* [in] */ BSTR pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Content( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Algorithm( 
            /* [retval][out] */ IAlgorithm **pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Recipients( 
            /* [retval][out] */ IRecipients **pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Encrypt( 
            /* [defaultvalue][in] */ CAPICOM_ENCODING_TYPE EncodingType,
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Decrypt( 
            /* [in] */ BSTR EnvelopedMessage) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IEnvelopedDataVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IEnvelopedData * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IEnvelopedData * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IEnvelopedData * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IEnvelopedData * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IEnvelopedData * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IEnvelopedData * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IEnvelopedData * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        DECLSPEC_XFGVIRT(IEnvelopedData, put_Content)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Content )( 
            IEnvelopedData * This,
            /* [in] */ BSTR pVal);
        
        DECLSPEC_XFGVIRT(IEnvelopedData, get_Content)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Content )( 
            IEnvelopedData * This,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(IEnvelopedData, get_Algorithm)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Algorithm )( 
            IEnvelopedData * This,
            /* [retval][out] */ IAlgorithm **pVal);
        
        DECLSPEC_XFGVIRT(IEnvelopedData, get_Recipients)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Recipients )( 
            IEnvelopedData * This,
            /* [retval][out] */ IRecipients **pVal);
        
        DECLSPEC_XFGVIRT(IEnvelopedData, Encrypt)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Encrypt )( 
            IEnvelopedData * This,
            /* [defaultvalue][in] */ CAPICOM_ENCODING_TYPE EncodingType,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(IEnvelopedData, Decrypt)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Decrypt )( 
            IEnvelopedData * This,
            /* [in] */ BSTR EnvelopedMessage);
        
        END_INTERFACE
    } IEnvelopedDataVtbl;

    interface IEnvelopedData
    {
        CONST_VTBL struct IEnvelopedDataVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IEnvelopedData_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IEnvelopedData_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IEnvelopedData_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IEnvelopedData_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IEnvelopedData_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IEnvelopedData_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IEnvelopedData_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IEnvelopedData_put_Content(This,pVal)	\
    ( (This)->lpVtbl -> put_Content(This,pVal) ) 

#define IEnvelopedData_get_Content(This,pVal)	\
    ( (This)->lpVtbl -> get_Content(This,pVal) ) 

#define IEnvelopedData_get_Algorithm(This,pVal)	\
    ( (This)->lpVtbl -> get_Algorithm(This,pVal) ) 

#define IEnvelopedData_get_Recipients(This,pVal)	\
    ( (This)->lpVtbl -> get_Recipients(This,pVal) ) 

#define IEnvelopedData_Encrypt(This,EncodingType,pVal)	\
    ( (This)->lpVtbl -> Encrypt(This,EncodingType,pVal) ) 

#define IEnvelopedData_Decrypt(This,EnvelopedMessage)	\
    ( (This)->lpVtbl -> Decrypt(This,EnvelopedMessage) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IEnvelopedData_INTERFACE_DEFINED__ */


#ifndef __IEncryptedData_INTERFACE_DEFINED__
#define __IEncryptedData_INTERFACE_DEFINED__

/* interface IEncryptedData */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IEncryptedData;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("C4778A66-972F-42E4-87C5-5CC16F7931CA")
    IEncryptedData : public IDispatch
    {
    public:
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_Content( 
            /* [in] */ BSTR pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Content( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Algorithm( 
            /* [retval][out] */ IAlgorithm **pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetSecret( 
            /* [in] */ BSTR newVal,
            /* [defaultvalue][in] */ CAPICOM_SECRET_TYPE SecretType = CAPICOM_SECRET_PASSWORD) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Encrypt( 
            /* [defaultvalue][in] */ CAPICOM_ENCODING_TYPE EncodingType,
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Decrypt( 
            /* [in] */ BSTR EncryptedMessage) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IEncryptedDataVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IEncryptedData * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IEncryptedData * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IEncryptedData * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IEncryptedData * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IEncryptedData * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IEncryptedData * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IEncryptedData * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        DECLSPEC_XFGVIRT(IEncryptedData, put_Content)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Content )( 
            IEncryptedData * This,
            /* [in] */ BSTR pVal);
        
        DECLSPEC_XFGVIRT(IEncryptedData, get_Content)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Content )( 
            IEncryptedData * This,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(IEncryptedData, get_Algorithm)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Algorithm )( 
            IEncryptedData * This,
            /* [retval][out] */ IAlgorithm **pVal);
        
        DECLSPEC_XFGVIRT(IEncryptedData, SetSecret)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetSecret )( 
            IEncryptedData * This,
            /* [in] */ BSTR newVal,
            /* [defaultvalue][in] */ CAPICOM_SECRET_TYPE SecretType);
        
        DECLSPEC_XFGVIRT(IEncryptedData, Encrypt)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Encrypt )( 
            IEncryptedData * This,
            /* [defaultvalue][in] */ CAPICOM_ENCODING_TYPE EncodingType,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(IEncryptedData, Decrypt)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Decrypt )( 
            IEncryptedData * This,
            /* [in] */ BSTR EncryptedMessage);
        
        END_INTERFACE
    } IEncryptedDataVtbl;

    interface IEncryptedData
    {
        CONST_VTBL struct IEncryptedDataVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IEncryptedData_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IEncryptedData_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IEncryptedData_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IEncryptedData_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IEncryptedData_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IEncryptedData_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IEncryptedData_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IEncryptedData_put_Content(This,pVal)	\
    ( (This)->lpVtbl -> put_Content(This,pVal) ) 

#define IEncryptedData_get_Content(This,pVal)	\
    ( (This)->lpVtbl -> get_Content(This,pVal) ) 

#define IEncryptedData_get_Algorithm(This,pVal)	\
    ( (This)->lpVtbl -> get_Algorithm(This,pVal) ) 

#define IEncryptedData_SetSecret(This,newVal,SecretType)	\
    ( (This)->lpVtbl -> SetSecret(This,newVal,SecretType) ) 

#define IEncryptedData_Encrypt(This,EncodingType,pVal)	\
    ( (This)->lpVtbl -> Encrypt(This,EncodingType,pVal) ) 

#define IEncryptedData_Decrypt(This,EncryptedMessage)	\
    ( (This)->lpVtbl -> Decrypt(This,EncryptedMessage) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IEncryptedData_INTERFACE_DEFINED__ */


#ifndef __INoticeNumbers_INTERFACE_DEFINED__
#define __INoticeNumbers_INTERFACE_DEFINED__

/* interface INoticeNumbers */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_INoticeNumbers;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("EE2C051D-33A1-4157-86B4-9280E29782F2")
    INoticeNumbers : public IDispatch
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ long Index,
            /* [retval][out] */ VARIANT *pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][restricted][propget][id] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IUnknown **pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct INoticeNumbersVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            INoticeNumbers * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            INoticeNumbers * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            INoticeNumbers * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            INoticeNumbers * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            INoticeNumbers * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            INoticeNumbers * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            INoticeNumbers * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        DECLSPEC_XFGVIRT(INoticeNumbers, get_Item)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            INoticeNumbers * This,
            /* [in] */ long Index,
            /* [retval][out] */ VARIANT *pVal);
        
        DECLSPEC_XFGVIRT(INoticeNumbers, get_Count)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            INoticeNumbers * This,
            /* [retval][out] */ long *pVal);
        
        DECLSPEC_XFGVIRT(INoticeNumbers, get__NewEnum)
        /* [helpstring][restricted][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            INoticeNumbers * This,
            /* [retval][out] */ IUnknown **pVal);
        
        END_INTERFACE
    } INoticeNumbersVtbl;

    interface INoticeNumbers
    {
        CONST_VTBL struct INoticeNumbersVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define INoticeNumbers_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define INoticeNumbers_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define INoticeNumbers_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define INoticeNumbers_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define INoticeNumbers_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define INoticeNumbers_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define INoticeNumbers_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define INoticeNumbers_get_Item(This,Index,pVal)	\
    ( (This)->lpVtbl -> get_Item(This,Index,pVal) ) 

#define INoticeNumbers_get_Count(This,pVal)	\
    ( (This)->lpVtbl -> get_Count(This,pVal) ) 

#define INoticeNumbers_get__NewEnum(This,pVal)	\
    ( (This)->lpVtbl -> get__NewEnum(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __INoticeNumbers_INTERFACE_DEFINED__ */


#ifndef __IQualifier_INTERFACE_DEFINED__
#define __IQualifier_INTERFACE_DEFINED__

/* interface IQualifier */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IQualifier;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3604C9DD-A22E-4A15-A469-8181C0C113DE")
    IQualifier : public IDispatch
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_OID( 
            /* [retval][out] */ IOID **pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_CPSPointer( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_OrganizationName( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_NoticeNumbers( 
            /* [retval][out] */ INoticeNumbers **pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ExplicitText( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IQualifierVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IQualifier * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IQualifier * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IQualifier * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IQualifier * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IQualifier * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IQualifier * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IQualifier * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        DECLSPEC_XFGVIRT(IQualifier, get_OID)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_OID )( 
            IQualifier * This,
            /* [retval][out] */ IOID **pVal);
        
        DECLSPEC_XFGVIRT(IQualifier, get_CPSPointer)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_CPSPointer )( 
            IQualifier * This,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(IQualifier, get_OrganizationName)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_OrganizationName )( 
            IQualifier * This,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(IQualifier, get_NoticeNumbers)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_NoticeNumbers )( 
            IQualifier * This,
            /* [retval][out] */ INoticeNumbers **pVal);
        
        DECLSPEC_XFGVIRT(IQualifier, get_ExplicitText)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ExplicitText )( 
            IQualifier * This,
            /* [retval][out] */ BSTR *pVal);
        
        END_INTERFACE
    } IQualifierVtbl;

    interface IQualifier
    {
        CONST_VTBL struct IQualifierVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IQualifier_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IQualifier_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IQualifier_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IQualifier_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IQualifier_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IQualifier_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IQualifier_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IQualifier_get_OID(This,pVal)	\
    ( (This)->lpVtbl -> get_OID(This,pVal) ) 

#define IQualifier_get_CPSPointer(This,pVal)	\
    ( (This)->lpVtbl -> get_CPSPointer(This,pVal) ) 

#define IQualifier_get_OrganizationName(This,pVal)	\
    ( (This)->lpVtbl -> get_OrganizationName(This,pVal) ) 

#define IQualifier_get_NoticeNumbers(This,pVal)	\
    ( (This)->lpVtbl -> get_NoticeNumbers(This,pVal) ) 

#define IQualifier_get_ExplicitText(This,pVal)	\
    ( (This)->lpVtbl -> get_ExplicitText(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IQualifier_INTERFACE_DEFINED__ */


#ifndef __IQualifiers_INTERFACE_DEFINED__
#define __IQualifiers_INTERFACE_DEFINED__

/* interface IQualifiers */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IQualifiers;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6B5A8AB6-597D-4398-AC63-1036EF546348")
    IQualifiers : public IDispatch
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ long Index,
            /* [retval][out] */ VARIANT *pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][restricted][propget][id] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IUnknown **pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IQualifiersVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IQualifiers * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IQualifiers * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IQualifiers * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IQualifiers * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IQualifiers * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IQualifiers * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IQualifiers * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        DECLSPEC_XFGVIRT(IQualifiers, get_Item)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            IQualifiers * This,
            /* [in] */ long Index,
            /* [retval][out] */ VARIANT *pVal);
        
        DECLSPEC_XFGVIRT(IQualifiers, get_Count)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IQualifiers * This,
            /* [retval][out] */ long *pVal);
        
        DECLSPEC_XFGVIRT(IQualifiers, get__NewEnum)
        /* [helpstring][restricted][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            IQualifiers * This,
            /* [retval][out] */ IUnknown **pVal);
        
        END_INTERFACE
    } IQualifiersVtbl;

    interface IQualifiers
    {
        CONST_VTBL struct IQualifiersVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IQualifiers_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IQualifiers_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IQualifiers_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IQualifiers_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IQualifiers_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IQualifiers_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IQualifiers_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IQualifiers_get_Item(This,Index,pVal)	\
    ( (This)->lpVtbl -> get_Item(This,Index,pVal) ) 

#define IQualifiers_get_Count(This,pVal)	\
    ( (This)->lpVtbl -> get_Count(This,pVal) ) 

#define IQualifiers_get__NewEnum(This,pVal)	\
    ( (This)->lpVtbl -> get__NewEnum(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IQualifiers_INTERFACE_DEFINED__ */


#ifndef __IPolicyInformation_INTERFACE_DEFINED__
#define __IPolicyInformation_INTERFACE_DEFINED__

/* interface IPolicyInformation */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IPolicyInformation;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8973710C-8411-4951-9E65-D45FD524FFDF")
    IPolicyInformation : public IDispatch
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_OID( 
            /* [retval][out] */ IOID **pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Qualifiers( 
            /* [retval][out] */ IQualifiers **pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IPolicyInformationVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IPolicyInformation * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IPolicyInformation * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IPolicyInformation * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IPolicyInformation * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IPolicyInformation * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IPolicyInformation * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IPolicyInformation * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        DECLSPEC_XFGVIRT(IPolicyInformation, get_OID)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_OID )( 
            IPolicyInformation * This,
            /* [retval][out] */ IOID **pVal);
        
        DECLSPEC_XFGVIRT(IPolicyInformation, get_Qualifiers)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Qualifiers )( 
            IPolicyInformation * This,
            /* [retval][out] */ IQualifiers **pVal);
        
        END_INTERFACE
    } IPolicyInformationVtbl;

    interface IPolicyInformation
    {
        CONST_VTBL struct IPolicyInformationVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPolicyInformation_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IPolicyInformation_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IPolicyInformation_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IPolicyInformation_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IPolicyInformation_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IPolicyInformation_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IPolicyInformation_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IPolicyInformation_get_OID(This,pVal)	\
    ( (This)->lpVtbl -> get_OID(This,pVal) ) 

#define IPolicyInformation_get_Qualifiers(This,pVal)	\
    ( (This)->lpVtbl -> get_Qualifiers(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IPolicyInformation_INTERFACE_DEFINED__ */


#ifndef __IExtension_INTERFACE_DEFINED__
#define __IExtension_INTERFACE_DEFINED__

/* interface IExtension */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IExtension;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("ED4E4ED4-FDD8-476E-AED9-5239E7948257")
    IExtension : public IDispatch
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_OID( 
            /* [retval][out] */ IOID **pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_IsCritical( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_EncodedData( 
            /* [retval][out] */ IEncodedData **pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IExtensionVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IExtension * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IExtension * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IExtension * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IExtension * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IExtension * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IExtension * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IExtension * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        DECLSPEC_XFGVIRT(IExtension, get_OID)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_OID )( 
            IExtension * This,
            /* [retval][out] */ IOID **pVal);
        
        DECLSPEC_XFGVIRT(IExtension, get_IsCritical)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_IsCritical )( 
            IExtension * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        DECLSPEC_XFGVIRT(IExtension, get_EncodedData)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_EncodedData )( 
            IExtension * This,
            /* [retval][out] */ IEncodedData **pVal);
        
        END_INTERFACE
    } IExtensionVtbl;

    interface IExtension
    {
        CONST_VTBL struct IExtensionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IExtension_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IExtension_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IExtension_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IExtension_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IExtension_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IExtension_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IExtension_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IExtension_get_OID(This,pVal)	\
    ( (This)->lpVtbl -> get_OID(This,pVal) ) 

#define IExtension_get_IsCritical(This,pVal)	\
    ( (This)->lpVtbl -> get_IsCritical(This,pVal) ) 

#define IExtension_get_EncodedData(This,pVal)	\
    ( (This)->lpVtbl -> get_EncodedData(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IExtension_INTERFACE_DEFINED__ */


#ifndef __ISignedCode_INTERFACE_DEFINED__
#define __ISignedCode_INTERFACE_DEFINED__

/* interface ISignedCode */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_ISignedCode;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("84FBCB95-5600-404C-9187-AC25B4CD6E94")
    ISignedCode : public IDispatch
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_FileName( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_FileName( 
            /* [in] */ BSTR pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Description( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_Description( 
            /* [in] */ BSTR pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_DescriptionURL( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_DescriptionURL( 
            /* [in] */ BSTR pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Signer( 
            /* [retval][out] */ ISigner2 **pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_TimeStamper( 
            /* [retval][out] */ ISigner2 **pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Certificates( 
            /* [retval][out] */ ICertificates2 **pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Sign( 
            /* [defaultvalue][in] */ ISigner2 *pISigner2 = 0) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Timestamp( 
            /* [in] */ BSTR URL) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Verify( 
            /* [defaultvalue][in] */ VARIANT_BOOL bUIAllowed = 0) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ISignedCodeVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISignedCode * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISignedCode * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISignedCode * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISignedCode * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISignedCode * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISignedCode * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISignedCode * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        DECLSPEC_XFGVIRT(ISignedCode, get_FileName)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_FileName )( 
            ISignedCode * This,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(ISignedCode, put_FileName)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_FileName )( 
            ISignedCode * This,
            /* [in] */ BSTR pVal);
        
        DECLSPEC_XFGVIRT(ISignedCode, get_Description)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Description )( 
            ISignedCode * This,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(ISignedCode, put_Description)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Description )( 
            ISignedCode * This,
            /* [in] */ BSTR pVal);
        
        DECLSPEC_XFGVIRT(ISignedCode, get_DescriptionURL)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DescriptionURL )( 
            ISignedCode * This,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(ISignedCode, put_DescriptionURL)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_DescriptionURL )( 
            ISignedCode * This,
            /* [in] */ BSTR pVal);
        
        DECLSPEC_XFGVIRT(ISignedCode, get_Signer)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Signer )( 
            ISignedCode * This,
            /* [retval][out] */ ISigner2 **pVal);
        
        DECLSPEC_XFGVIRT(ISignedCode, get_TimeStamper)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_TimeStamper )( 
            ISignedCode * This,
            /* [retval][out] */ ISigner2 **pVal);
        
        DECLSPEC_XFGVIRT(ISignedCode, get_Certificates)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Certificates )( 
            ISignedCode * This,
            /* [retval][out] */ ICertificates2 **pVal);
        
        DECLSPEC_XFGVIRT(ISignedCode, Sign)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Sign )( 
            ISignedCode * This,
            /* [defaultvalue][in] */ ISigner2 *pISigner2);
        
        DECLSPEC_XFGVIRT(ISignedCode, Timestamp)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Timestamp )( 
            ISignedCode * This,
            /* [in] */ BSTR URL);
        
        DECLSPEC_XFGVIRT(ISignedCode, Verify)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Verify )( 
            ISignedCode * This,
            /* [defaultvalue][in] */ VARIANT_BOOL bUIAllowed);
        
        END_INTERFACE
    } ISignedCodeVtbl;

    interface ISignedCode
    {
        CONST_VTBL struct ISignedCodeVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISignedCode_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISignedCode_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISignedCode_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISignedCode_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISignedCode_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISignedCode_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISignedCode_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ISignedCode_get_FileName(This,pVal)	\
    ( (This)->lpVtbl -> get_FileName(This,pVal) ) 

#define ISignedCode_put_FileName(This,pVal)	\
    ( (This)->lpVtbl -> put_FileName(This,pVal) ) 

#define ISignedCode_get_Description(This,pVal)	\
    ( (This)->lpVtbl -> get_Description(This,pVal) ) 

#define ISignedCode_put_Description(This,pVal)	\
    ( (This)->lpVtbl -> put_Description(This,pVal) ) 

#define ISignedCode_get_DescriptionURL(This,pVal)	\
    ( (This)->lpVtbl -> get_DescriptionURL(This,pVal) ) 

#define ISignedCode_put_DescriptionURL(This,pVal)	\
    ( (This)->lpVtbl -> put_DescriptionURL(This,pVal) ) 

#define ISignedCode_get_Signer(This,pVal)	\
    ( (This)->lpVtbl -> get_Signer(This,pVal) ) 

#define ISignedCode_get_TimeStamper(This,pVal)	\
    ( (This)->lpVtbl -> get_TimeStamper(This,pVal) ) 

#define ISignedCode_get_Certificates(This,pVal)	\
    ( (This)->lpVtbl -> get_Certificates(This,pVal) ) 

#define ISignedCode_Sign(This,pISigner2)	\
    ( (This)->lpVtbl -> Sign(This,pISigner2) ) 

#define ISignedCode_Timestamp(This,URL)	\
    ( (This)->lpVtbl -> Timestamp(This,URL) ) 

#define ISignedCode_Verify(This,bUIAllowed)	\
    ( (This)->lpVtbl -> Verify(This,bUIAllowed) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISignedCode_INTERFACE_DEFINED__ */


#ifndef __IHashedData_INTERFACE_DEFINED__
#define __IHashedData_INTERFACE_DEFINED__

/* interface IHashedData */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IHashedData;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("9F7F23E8-06F4-42E8-B965-5CBD044BF27F")
    IHashedData : public IDispatch
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Value( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Algorithm( 
            /* [retval][out] */ CAPICOM_HASH_ALGORITHM *pVal) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_Algorithm( 
            /* [in] */ CAPICOM_HASH_ALGORITHM pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Hash( 
            /* [in] */ BSTR newVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IHashedDataVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IHashedData * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IHashedData * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IHashedData * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IHashedData * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IHashedData * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IHashedData * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IHashedData * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        DECLSPEC_XFGVIRT(IHashedData, get_Value)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Value )( 
            IHashedData * This,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(IHashedData, get_Algorithm)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Algorithm )( 
            IHashedData * This,
            /* [retval][out] */ CAPICOM_HASH_ALGORITHM *pVal);
        
        DECLSPEC_XFGVIRT(IHashedData, put_Algorithm)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Algorithm )( 
            IHashedData * This,
            /* [in] */ CAPICOM_HASH_ALGORITHM pVal);
        
        DECLSPEC_XFGVIRT(IHashedData, Hash)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Hash )( 
            IHashedData * This,
            /* [in] */ BSTR newVal);
        
        END_INTERFACE
    } IHashedDataVtbl;

    interface IHashedData
    {
        CONST_VTBL struct IHashedDataVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IHashedData_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IHashedData_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IHashedData_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IHashedData_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IHashedData_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IHashedData_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IHashedData_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IHashedData_get_Value(This,pVal)	\
    ( (This)->lpVtbl -> get_Value(This,pVal) ) 

#define IHashedData_get_Algorithm(This,pVal)	\
    ( (This)->lpVtbl -> get_Algorithm(This,pVal) ) 

#define IHashedData_put_Algorithm(This,pVal)	\
    ( (This)->lpVtbl -> put_Algorithm(This,pVal) ) 

#define IHashedData_Hash(This,newVal)	\
    ( (This)->lpVtbl -> Hash(This,newVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IHashedData_INTERFACE_DEFINED__ */


#ifndef __IUtilities_INTERFACE_DEFINED__
#define __IUtilities_INTERFACE_DEFINED__

/* interface IUtilities */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IUtilities;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("EB166CF6-2AE6-44DA-BD96-0C1635D183FE")
    IUtilities : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetRandom( 
            /* [defaultvalue][in] */ long Length,
            /* [defaultvalue][in] */ CAPICOM_ENCODING_TYPE EncodingType,
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Base64Encode( 
            /* [in] */ BSTR SrcString,
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Base64Decode( 
            /* [in] */ BSTR EncodedString,
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE BinaryToHex( 
            /* [in] */ BSTR BinaryString,
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE HexToBinary( 
            /* [in] */ BSTR HexString,
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE BinaryStringToByteArray( 
            /* [in] */ BSTR BinaryString,
            /* [retval][out] */ VARIANT *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ByteArrayToBinaryString( 
            /* [in] */ VARIANT varByteArray,
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE LocalTimeToUTCTime( 
            /* [in] */ DATE LocalTime,
            /* [retval][out] */ DATE *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE UTCTimeToLocalTime( 
            /* [in] */ DATE UTCTime,
            /* [retval][out] */ DATE *pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IUtilitiesVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IUtilities * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IUtilities * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IUtilities * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IUtilities * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IUtilities * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IUtilities * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IUtilities * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        DECLSPEC_XFGVIRT(IUtilities, GetRandom)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetRandom )( 
            IUtilities * This,
            /* [defaultvalue][in] */ long Length,
            /* [defaultvalue][in] */ CAPICOM_ENCODING_TYPE EncodingType,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(IUtilities, Base64Encode)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Base64Encode )( 
            IUtilities * This,
            /* [in] */ BSTR SrcString,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(IUtilities, Base64Decode)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Base64Decode )( 
            IUtilities * This,
            /* [in] */ BSTR EncodedString,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(IUtilities, BinaryToHex)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *BinaryToHex )( 
            IUtilities * This,
            /* [in] */ BSTR BinaryString,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(IUtilities, HexToBinary)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *HexToBinary )( 
            IUtilities * This,
            /* [in] */ BSTR HexString,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(IUtilities, BinaryStringToByteArray)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *BinaryStringToByteArray )( 
            IUtilities * This,
            /* [in] */ BSTR BinaryString,
            /* [retval][out] */ VARIANT *pVal);
        
        DECLSPEC_XFGVIRT(IUtilities, ByteArrayToBinaryString)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ByteArrayToBinaryString )( 
            IUtilities * This,
            /* [in] */ VARIANT varByteArray,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(IUtilities, LocalTimeToUTCTime)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *LocalTimeToUTCTime )( 
            IUtilities * This,
            /* [in] */ DATE LocalTime,
            /* [retval][out] */ DATE *pVal);
        
        DECLSPEC_XFGVIRT(IUtilities, UTCTimeToLocalTime)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *UTCTimeToLocalTime )( 
            IUtilities * This,
            /* [in] */ DATE UTCTime,
            /* [retval][out] */ DATE *pVal);
        
        END_INTERFACE
    } IUtilitiesVtbl;

    interface IUtilities
    {
        CONST_VTBL struct IUtilitiesVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUtilities_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IUtilities_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IUtilities_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IUtilities_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IUtilities_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IUtilities_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IUtilities_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IUtilities_GetRandom(This,Length,EncodingType,pVal)	\
    ( (This)->lpVtbl -> GetRandom(This,Length,EncodingType,pVal) ) 

#define IUtilities_Base64Encode(This,SrcString,pVal)	\
    ( (This)->lpVtbl -> Base64Encode(This,SrcString,pVal) ) 

#define IUtilities_Base64Decode(This,EncodedString,pVal)	\
    ( (This)->lpVtbl -> Base64Decode(This,EncodedString,pVal) ) 

#define IUtilities_BinaryToHex(This,BinaryString,pVal)	\
    ( (This)->lpVtbl -> BinaryToHex(This,BinaryString,pVal) ) 

#define IUtilities_HexToBinary(This,HexString,pVal)	\
    ( (This)->lpVtbl -> HexToBinary(This,HexString,pVal) ) 

#define IUtilities_BinaryStringToByteArray(This,BinaryString,pVal)	\
    ( (This)->lpVtbl -> BinaryStringToByteArray(This,BinaryString,pVal) ) 

#define IUtilities_ByteArrayToBinaryString(This,varByteArray,pVal)	\
    ( (This)->lpVtbl -> ByteArrayToBinaryString(This,varByteArray,pVal) ) 

#define IUtilities_LocalTimeToUTCTime(This,LocalTime,pVal)	\
    ( (This)->lpVtbl -> LocalTimeToUTCTime(This,LocalTime,pVal) ) 

#define IUtilities_UTCTimeToLocalTime(This,UTCTime,pVal)	\
    ( (This)->lpVtbl -> UTCTimeToLocalTime(This,UTCTime,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IUtilities_INTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_Settings;

#ifdef __cplusplus

class DECLSPEC_UUID("A996E48C-D3DC-4244-89F7-AFA33EC60679")
Settings;
#endif

EXTERN_C const CLSID CLSID_EKU;

#ifdef __cplusplus

class DECLSPEC_UUID("8535F9A1-738A-40D0-8FB1-10CC8F74E7D3")
EKU;
#endif

EXTERN_C const CLSID CLSID_EKUs;

#ifdef __cplusplus

class DECLSPEC_UUID("F1800663-5BFC-4D1A-8D44-56CE02DDA34F")
EKUs;
#endif

EXTERN_C const CLSID CLSID_KeyUsage;

#ifdef __cplusplus

class DECLSPEC_UUID("9226C95C-38BE-4CC4-B3A2-A867F5199C13")
KeyUsage;
#endif

EXTERN_C const CLSID CLSID_ExtendedKeyUsage;

#ifdef __cplusplus

class DECLSPEC_UUID("42C18607-1B4B-4126-8F1B-76E2DC7F631A")
ExtendedKeyUsage;
#endif

EXTERN_C const CLSID CLSID_BasicConstraints;

#ifdef __cplusplus

class DECLSPEC_UUID("C05AAC6E-3A58-45A9-A203-56952E961E48")
BasicConstraints;
#endif

EXTERN_C const CLSID CLSID_Certificates;

#ifdef __cplusplus

class DECLSPEC_UUID("3605B612-C3CF-4AB4-A426-2D853391DB2E")
Certificates;
#endif

EXTERN_C const CLSID CLSID_OID;

#ifdef __cplusplus

class DECLSPEC_UUID("7BF3AC5C-CC84-429A-ACA5-74D916AD6B8C")
OID;
#endif

EXTERN_C const CLSID CLSID_OIDs;

#ifdef __cplusplus

class DECLSPEC_UUID("FD661131-D716-4D15-A187-AEAAB161C8AD")
OIDs;
#endif

EXTERN_C const CLSID CLSID_CertificateStatus;

#ifdef __cplusplus

class DECLSPEC_UUID("0EF24D18-BD9B-47D4-9458-E05B489FB7BA")
CertificateStatus;
#endif

EXTERN_C const CLSID CLSID_Template;

#ifdef __cplusplus

class DECLSPEC_UUID("61F0D2BD-373E-4F3C-962E-59B7C42C1B22")
Template;
#endif

EXTERN_C const CLSID CLSID_EncodedData;

#ifdef __cplusplus

class DECLSPEC_UUID("7083C0AA-E7B9-48A4-8EFB-D6A109EBEC13")
EncodedData;
#endif

EXTERN_C const CLSID CLSID_PublicKey;

#ifdef __cplusplus

class DECLSPEC_UUID("301FC658-4055-4D76-9703-AA38E6D7236A")
PublicKey;
#endif

EXTERN_C const CLSID CLSID_PrivateKey;

#ifdef __cplusplus

class DECLSPEC_UUID("03ACC284-B757-4B8F-9951-86E600D2CD06")
PrivateKey;
#endif

EXTERN_C const CLSID CLSID_Extensions;

#ifdef __cplusplus

class DECLSPEC_UUID("7C92E131-C1DC-4CA1-B02C-F513A08B41ED")
Extensions;
#endif

EXTERN_C const CLSID CLSID_ExtendedProperty;

#ifdef __cplusplus

class DECLSPEC_UUID("9E7EA907-5810-4FCA-B817-CD0BBA8496FC")
ExtendedProperty;
#endif

EXTERN_C const CLSID CLSID_ExtendedProperties;

#ifdef __cplusplus

class DECLSPEC_UUID("90E7143D-1A07-438D-8F85-3DBB0B73D314")
ExtendedProperties;
#endif

EXTERN_C const CLSID CLSID_Certificate;

#ifdef __cplusplus

class DECLSPEC_UUID("9171C115-7DD9-46BA-B1E5-0ED50AFFC1B8")
Certificate;
#endif

EXTERN_C const CLSID CLSID_Chain;

#ifdef __cplusplus

class DECLSPEC_UUID("550C8FFB-4DC0-4756-828C-862E6D0AE74F")
Chain;
#endif

EXTERN_C const CLSID CLSID_Store;

#ifdef __cplusplus

class DECLSPEC_UUID("91D221C4-0CD4-461C-A728-01D509321556")
Store;
#endif

EXTERN_C const CLSID CLSID_Attribute;

#ifdef __cplusplus

class DECLSPEC_UUID("54BA1E8F-818D-407F-949D-BAE1692C5C18")
Attribute;
#endif

EXTERN_C const CLSID CLSID_Attributes;

#ifdef __cplusplus

class DECLSPEC_UUID("933013A9-64C8-4485-ACEF-4908C3692A33")
Attributes;
#endif

EXTERN_C const CLSID CLSID_Signer;

#ifdef __cplusplus

class DECLSPEC_UUID("60A9863A-11FD-4080-850E-A8E184FC3A3C")
Signer;
#endif

EXTERN_C const CLSID CLSID_Signers;

#ifdef __cplusplus

class DECLSPEC_UUID("1314C1D8-D3A8-4F8A-BED0-811FD7A8A633")
Signers;
#endif

EXTERN_C const CLSID CLSID_SignedData;

#ifdef __cplusplus

class DECLSPEC_UUID("94AFFFCC-6C05-4814-B123-A941105AA77F")
SignedData;
#endif

EXTERN_C const CLSID CLSID_Algorithm;

#ifdef __cplusplus

class DECLSPEC_UUID("A1EEF42F-5026-4A32-BC5C-2E552B70FD96")
Algorithm;
#endif

EXTERN_C const CLSID CLSID_Recipients;

#ifdef __cplusplus

class DECLSPEC_UUID("96A1B8B0-8F9A-436A-84DE-E23CD6818DA5")
Recipients;
#endif

EXTERN_C const CLSID CLSID_EnvelopedData;

#ifdef __cplusplus

class DECLSPEC_UUID("F3A12E08-EDE9-4160-8B51-334D982A9AD0")
EnvelopedData;
#endif

EXTERN_C const CLSID CLSID_EncryptedData;

#ifdef __cplusplus

class DECLSPEC_UUID("A440BD76-CFE1-4D46-AB1F-15F238437A3D")
EncryptedData;
#endif

EXTERN_C const CLSID CLSID_NoticeNumbers;

#ifdef __cplusplus

class DECLSPEC_UUID("A6FDF22A-8E00-464B-B15D-1A891D88B6ED")
NoticeNumbers;
#endif

EXTERN_C const CLSID CLSID_Qualifier;

#ifdef __cplusplus

class DECLSPEC_UUID("E5F29B74-0902-4654-8A9A-21C5201DFA61")
Qualifier;
#endif

EXTERN_C const CLSID CLSID_Qualifiers;

#ifdef __cplusplus

class DECLSPEC_UUID("6C8006C0-F649-4783-B4A6-617DD0B270C7")
Qualifiers;
#endif

EXTERN_C const CLSID CLSID_PolicyInformation;

#ifdef __cplusplus

class DECLSPEC_UUID("0AAF88F4-1C22-4F65-A0E3-289D97DCE994")
PolicyInformation;
#endif

EXTERN_C const CLSID CLSID_Extension;

#ifdef __cplusplus

class DECLSPEC_UUID("D2359E2C-82D6-458F-BB6F-41559155E693")
Extension;
#endif

EXTERN_C const CLSID CLSID_SignedCode;

#ifdef __cplusplus

class DECLSPEC_UUID("8C3E4934-9FA4-4693-9253-A29A05F99186")
SignedCode;
#endif

EXTERN_C const CLSID CLSID_HashedData;

#ifdef __cplusplus

class DECLSPEC_UUID("CE32ABF6-475D-41F6-BF82-D27F03E3D38B")
HashedData;
#endif

EXTERN_C const CLSID CLSID_Utilities;

#ifdef __cplusplus

class DECLSPEC_UUID("22A85CE1-F011-4231-B9E4-7E7A0438F71B")
Utilities;
#endif
#endif /* __CAPICOM_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


