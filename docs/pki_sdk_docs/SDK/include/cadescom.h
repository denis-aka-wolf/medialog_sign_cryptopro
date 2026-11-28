

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0626 */
/* at Tue Jan 19 06:14:07 2038
 */
/* Compiler settings for cadescom.idl:
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


#ifndef __cadescom_h__
#define __cadescom_h__

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

#ifndef __ICPCertificate_FWD_DEFINED__
#define __ICPCertificate_FWD_DEFINED__
typedef interface ICPCertificate ICPCertificate;

#endif 	/* __ICPCertificate_FWD_DEFINED__ */


#ifndef __ICPStore_FWD_DEFINED__
#define __ICPStore_FWD_DEFINED__
typedef interface ICPStore ICPStore;

#endif 	/* __ICPStore_FWD_DEFINED__ */


#ifndef __ICPX509CertificateRequestPkcs10_FWD_DEFINED__
#define __ICPX509CertificateRequestPkcs10_FWD_DEFINED__
typedef interface ICPX509CertificateRequestPkcs10 ICPX509CertificateRequestPkcs10;

#endif 	/* __ICPX509CertificateRequestPkcs10_FWD_DEFINED__ */


#ifndef __ICPX509Enrollment_FWD_DEFINED__
#define __ICPX509Enrollment_FWD_DEFINED__
typedef interface ICPX509Enrollment ICPX509Enrollment;

#endif 	/* __ICPX509Enrollment_FWD_DEFINED__ */


#ifndef __ICPCertificateStatus_FWD_DEFINED__
#define __ICPCertificateStatus_FWD_DEFINED__
typedef interface ICPCertificateStatus ICPCertificateStatus;

#endif 	/* __ICPCertificateStatus_FWD_DEFINED__ */


#ifndef __ICPCspInformation_FWD_DEFINED__
#define __ICPCspInformation_FWD_DEFINED__
typedef interface ICPCspInformation ICPCspInformation;

#endif 	/* __ICPCspInformation_FWD_DEFINED__ */


#ifndef __ICPCspInformation2_FWD_DEFINED__
#define __ICPCspInformation2_FWD_DEFINED__
typedef interface ICPCspInformation2 ICPCspInformation2;

#endif 	/* __ICPCspInformation2_FWD_DEFINED__ */


#ifndef __ICPCspInformation3_FWD_DEFINED__
#define __ICPCspInformation3_FWD_DEFINED__
typedef interface ICPCspInformation3 ICPCspInformation3;

#endif 	/* __ICPCspInformation3_FWD_DEFINED__ */


#ifndef __ISymmetricAlgorithm_FWD_DEFINED__
#define __ISymmetricAlgorithm_FWD_DEFINED__
typedef interface ISymmetricAlgorithm ISymmetricAlgorithm;

#endif 	/* __ISymmetricAlgorithm_FWD_DEFINED__ */


#ifndef __ISymmetricAlgorithm2_FWD_DEFINED__
#define __ISymmetricAlgorithm2_FWD_DEFINED__
typedef interface ISymmetricAlgorithm2 ISymmetricAlgorithm2;

#endif 	/* __ISymmetricAlgorithm2_FWD_DEFINED__ */


#ifndef __ISymmetricAlgorithm3_FWD_DEFINED__
#define __ISymmetricAlgorithm3_FWD_DEFINED__
typedef interface ISymmetricAlgorithm3 ISymmetricAlgorithm3;

#endif 	/* __ISymmetricAlgorithm3_FWD_DEFINED__ */


#ifndef __ICPPrivateKey_FWD_DEFINED__
#define __ICPPrivateKey_FWD_DEFINED__
typedef interface ICPPrivateKey ICPPrivateKey;

#endif 	/* __ICPPrivateKey_FWD_DEFINED__ */


#ifndef __ICPPrivateKey2_FWD_DEFINED__
#define __ICPPrivateKey2_FWD_DEFINED__
typedef interface ICPPrivateKey2 ICPPrivateKey2;

#endif 	/* __ICPPrivateKey2_FWD_DEFINED__ */


#ifndef __ICPPrivateKey3_FWD_DEFINED__
#define __ICPPrivateKey3_FWD_DEFINED__
typedef interface ICPPrivateKey3 ICPPrivateKey3;

#endif 	/* __ICPPrivateKey3_FWD_DEFINED__ */


#ifndef __ICPPrivateKey4_FWD_DEFINED__
#define __ICPPrivateKey4_FWD_DEFINED__
typedef interface ICPPrivateKey4 ICPPrivateKey4;

#endif 	/* __ICPPrivateKey4_FWD_DEFINED__ */


#ifndef __ICPSignedData_FWD_DEFINED__
#define __ICPSignedData_FWD_DEFINED__
typedef interface ICPSignedData ICPSignedData;

#endif 	/* __ICPSignedData_FWD_DEFINED__ */


#ifndef __ICPSignedData2_FWD_DEFINED__
#define __ICPSignedData2_FWD_DEFINED__
typedef interface ICPSignedData2 ICPSignedData2;

#endif 	/* __ICPSignedData2_FWD_DEFINED__ */


#ifndef __ICPSignedData3_FWD_DEFINED__
#define __ICPSignedData3_FWD_DEFINED__
typedef interface ICPSignedData3 ICPSignedData3;

#endif 	/* __ICPSignedData3_FWD_DEFINED__ */


#ifndef __ICPSignedData4_FWD_DEFINED__
#define __ICPSignedData4_FWD_DEFINED__
typedef interface ICPSignedData4 ICPSignedData4;

#endif 	/* __ICPSignedData4_FWD_DEFINED__ */


#ifndef __ICPSignedData5_FWD_DEFINED__
#define __ICPSignedData5_FWD_DEFINED__
typedef interface ICPSignedData5 ICPSignedData5;

#endif 	/* __ICPSignedData5_FWD_DEFINED__ */


#ifndef __ICPSigner_FWD_DEFINED__
#define __ICPSigner_FWD_DEFINED__
typedef interface ICPSigner ICPSigner;

#endif 	/* __ICPSigner_FWD_DEFINED__ */


#ifndef __ICPSigner2_FWD_DEFINED__
#define __ICPSigner2_FWD_DEFINED__
typedef interface ICPSigner2 ICPSigner2;

#endif 	/* __ICPSigner2_FWD_DEFINED__ */


#ifndef __ICPSigner3_FWD_DEFINED__
#define __ICPSigner3_FWD_DEFINED__
typedef interface ICPSigner3 ICPSigner3;

#endif 	/* __ICPSigner3_FWD_DEFINED__ */


#ifndef __ICPSigner4_FWD_DEFINED__
#define __ICPSigner4_FWD_DEFINED__
typedef interface ICPSigner4 ICPSigner4;

#endif 	/* __ICPSigner4_FWD_DEFINED__ */


#ifndef __ISignatureStatus_FWD_DEFINED__
#define __ISignatureStatus_FWD_DEFINED__
typedef interface ISignatureStatus ISignatureStatus;

#endif 	/* __ISignatureStatus_FWD_DEFINED__ */


#ifndef __ICPSigner5_FWD_DEFINED__
#define __ICPSigner5_FWD_DEFINED__
typedef interface ICPSigner5 ICPSigner5;

#endif 	/* __ICPSigner5_FWD_DEFINED__ */


#ifndef __ICPSigner6_FWD_DEFINED__
#define __ICPSigner6_FWD_DEFINED__
typedef interface ICPSigner6 ICPSigner6;

#endif 	/* __ICPSigner6_FWD_DEFINED__ */


#ifndef __ICPSigner7_FWD_DEFINED__
#define __ICPSigner7_FWD_DEFINED__
typedef interface ICPSigner7 ICPSigner7;

#endif 	/* __ICPSigner7_FWD_DEFINED__ */


#ifndef __ICPBlobs_FWD_DEFINED__
#define __ICPBlobs_FWD_DEFINED__
typedef interface ICPBlobs ICPBlobs;

#endif 	/* __ICPBlobs_FWD_DEFINED__ */


#ifndef __ICPAttribute_FWD_DEFINED__
#define __ICPAttribute_FWD_DEFINED__
typedef interface ICPAttribute ICPAttribute;

#endif 	/* __ICPAttribute_FWD_DEFINED__ */


#ifndef __ICPAttribute2_FWD_DEFINED__
#define __ICPAttribute2_FWD_DEFINED__
typedef interface ICPAttribute2 ICPAttribute2;

#endif 	/* __ICPAttribute2_FWD_DEFINED__ */


#ifndef __ICPAttributes_FWD_DEFINED__
#define __ICPAttributes_FWD_DEFINED__
typedef interface ICPAttributes ICPAttributes;

#endif 	/* __ICPAttributes_FWD_DEFINED__ */


#ifndef __ICPEnvelopedData_FWD_DEFINED__
#define __ICPEnvelopedData_FWD_DEFINED__
typedef interface ICPEnvelopedData ICPEnvelopedData;

#endif 	/* __ICPEnvelopedData_FWD_DEFINED__ */


#ifndef __ICPEnvelopedData2_FWD_DEFINED__
#define __ICPEnvelopedData2_FWD_DEFINED__
typedef interface ICPEnvelopedData2 ICPEnvelopedData2;

#endif 	/* __ICPEnvelopedData2_FWD_DEFINED__ */


#ifndef __ICPHashedData_FWD_DEFINED__
#define __ICPHashedData_FWD_DEFINED__
typedef interface ICPHashedData ICPHashedData;

#endif 	/* __ICPHashedData_FWD_DEFINED__ */


#ifndef __ICPHashedData2_FWD_DEFINED__
#define __ICPHashedData2_FWD_DEFINED__
typedef interface ICPHashedData2 ICPHashedData2;

#endif 	/* __ICPHashedData2_FWD_DEFINED__ */


#ifndef __ISignedXML_FWD_DEFINED__
#define __ISignedXML_FWD_DEFINED__
typedef interface ISignedXML ISignedXML;

#endif 	/* __ISignedXML_FWD_DEFINED__ */


#ifndef __ISignedXML2_FWD_DEFINED__
#define __ISignedXML2_FWD_DEFINED__
typedef interface ISignedXML2 ISignedXML2;

#endif 	/* __ISignedXML2_FWD_DEFINED__ */


#ifndef __IEnvelopedXML_FWD_DEFINED__
#define __IEnvelopedXML_FWD_DEFINED__
typedef interface IEnvelopedXML IEnvelopedXML;

#endif 	/* __IEnvelopedXML_FWD_DEFINED__ */


#ifndef __ICardholderData_FWD_DEFINED__
#define __ICardholderData_FWD_DEFINED__
typedef interface ICardholderData ICardholderData;

#endif 	/* __ICardholderData_FWD_DEFINED__ */


#ifndef __IIdentityCard_FWD_DEFINED__
#define __IIdentityCard_FWD_DEFINED__
typedef interface IIdentityCard IIdentityCard;

#endif 	/* __IIdentityCard_FWD_DEFINED__ */


#ifndef __IPersonalCardholderData_FWD_DEFINED__
#define __IPersonalCardholderData_FWD_DEFINED__
typedef interface IPersonalCardholderData IPersonalCardholderData;

#endif 	/* __IPersonalCardholderData_FWD_DEFINED__ */


#ifndef __IOMSData_FWD_DEFINED__
#define __IOMSData_FWD_DEFINED__
typedef interface IOMSData IOMSData;

#endif 	/* __IOMSData_FWD_DEFINED__ */


#ifndef __IUECard_FWD_DEFINED__
#define __IUECard_FWD_DEFINED__
typedef interface IUECard IUECard;

#endif 	/* __IUECard_FWD_DEFINED__ */


#ifndef __IUECard2_FWD_DEFINED__
#define __IUECard2_FWD_DEFINED__
typedef interface IUECard2 IUECard2;

#endif 	/* __IUECard2_FWD_DEFINED__ */


#ifndef __IUECard3_FWD_DEFINED__
#define __IUECard3_FWD_DEFINED__
typedef interface IUECard3 IUECard3;

#endif 	/* __IUECard3_FWD_DEFINED__ */


#ifndef __IAdditionalStore_FWD_DEFINED__
#define __IAdditionalStore_FWD_DEFINED__
typedef interface IAdditionalStore IAdditionalStore;

#endif 	/* __IAdditionalStore_FWD_DEFINED__ */


#ifndef __IEventSource_FWD_DEFINED__
#define __IEventSource_FWD_DEFINED__
typedef interface IEventSource IEventSource;

#endif 	/* __IEventSource_FWD_DEFINED__ */


#ifndef __ITrustedSites_FWD_DEFINED__
#define __ITrustedSites_FWD_DEFINED__
typedef interface ITrustedSites ITrustedSites;

#endif 	/* __ITrustedSites_FWD_DEFINED__ */


#ifndef __IPluginConfiguration_FWD_DEFINED__
#define __IPluginConfiguration_FWD_DEFINED__
typedef interface IPluginConfiguration IPluginConfiguration;

#endif 	/* __IPluginConfiguration_FWD_DEFINED__ */


#ifndef __TrustedSites_FWD_DEFINED__
#define __TrustedSites_FWD_DEFINED__

#ifdef __cplusplus
typedef class TrustedSites TrustedSites;
#else
typedef struct TrustedSites TrustedSites;
#endif /* __cplusplus */

#endif 	/* __TrustedSites_FWD_DEFINED__ */


#ifndef __PluginConfiguration_FWD_DEFINED__
#define __PluginConfiguration_FWD_DEFINED__

#ifdef __cplusplus
typedef class PluginConfiguration PluginConfiguration;
#else
typedef struct PluginConfiguration PluginConfiguration;
#endif /* __cplusplus */

#endif 	/* __PluginConfiguration_FWD_DEFINED__ */


#ifndef __IRawSignature_FWD_DEFINED__
#define __IRawSignature_FWD_DEFINED__
typedef interface IRawSignature IRawSignature;

#endif 	/* __IRawSignature_FWD_DEFINED__ */


#ifndef __ICPLicense_FWD_DEFINED__
#define __ICPLicense_FWD_DEFINED__
typedef interface ICPLicense ICPLicense;

#endif 	/* __ICPLicense_FWD_DEFINED__ */


#ifndef __ICPLicense2_FWD_DEFINED__
#define __ICPLicense2_FWD_DEFINED__
typedef interface ICPLicense2 ICPLicense2;

#endif 	/* __ICPLicense2_FWD_DEFINED__ */


#ifndef __ICadesTools_FWD_DEFINED__
#define __ICadesTools_FWD_DEFINED__
typedef interface ICadesTools ICadesTools;

#endif 	/* __ICadesTools_FWD_DEFINED__ */


#ifndef __ICadesTools2_FWD_DEFINED__
#define __ICadesTools2_FWD_DEFINED__
typedef interface ICadesTools2 ICadesTools2;

#endif 	/* __ICadesTools2_FWD_DEFINED__ */


#ifndef __IX509ExtensionSubjectSignTool_FWD_DEFINED__
#define __IX509ExtensionSubjectSignTool_FWD_DEFINED__
typedef interface IX509ExtensionSubjectSignTool IX509ExtensionSubjectSignTool;

#endif 	/* __IX509ExtensionSubjectSignTool_FWD_DEFINED__ */


#ifndef __ICPReaderMode_FWD_DEFINED__
#define __ICPReaderMode_FWD_DEFINED__
typedef interface ICPReaderMode ICPReaderMode;

#endif 	/* __ICPReaderMode_FWD_DEFINED__ */


#ifndef __ICPReaderModes_FWD_DEFINED__
#define __ICPReaderModes_FWD_DEFINED__
typedef interface ICPReaderModes ICPReaderModes;

#endif 	/* __ICPReaderModes_FWD_DEFINED__ */


#ifndef __IX509ExtensionIdentificationKind_FWD_DEFINED__
#define __IX509ExtensionIdentificationKind_FWD_DEFINED__
typedef interface IX509ExtensionIdentificationKind IX509ExtensionIdentificationKind;

#endif 	/* __IX509ExtensionIdentificationKind_FWD_DEFINED__ */


#ifndef __ICPContainers_FWD_DEFINED__
#define __ICPContainers_FWD_DEFINED__
typedef interface ICPContainers ICPContainers;

#endif 	/* __ICPContainers_FWD_DEFINED__ */


#ifndef __ICPContainer_FWD_DEFINED__
#define __ICPContainer_FWD_DEFINED__
typedef interface ICPContainer ICPContainer;

#endif 	/* __ICPContainer_FWD_DEFINED__ */


#ifndef __ICPContainerKeys_FWD_DEFINED__
#define __ICPContainerKeys_FWD_DEFINED__
typedef interface ICPContainerKeys ICPContainerKeys;

#endif 	/* __ICPContainerKeys_FWD_DEFINED__ */


#ifndef __ICPContainerKey_FWD_DEFINED__
#define __ICPContainerKey_FWD_DEFINED__
typedef interface ICPContainerKey ICPContainerKey;

#endif 	/* __ICPContainerKey_FWD_DEFINED__ */


#ifndef __ICPContainerKey2_FWD_DEFINED__
#define __ICPContainerKey2_FWD_DEFINED__
typedef interface ICPContainerKey2 ICPContainerKey2;

#endif 	/* __ICPContainerKey2_FWD_DEFINED__ */


#ifndef __ICPReaders_FWD_DEFINED__
#define __ICPReaders_FWD_DEFINED__
typedef interface ICPReaders ICPReaders;

#endif 	/* __ICPReaders_FWD_DEFINED__ */


#ifndef __ICPErrorStatuses_FWD_DEFINED__
#define __ICPErrorStatuses_FWD_DEFINED__
typedef interface ICPErrorStatuses ICPErrorStatuses;

#endif 	/* __ICPErrorStatuses_FWD_DEFINED__ */


#ifndef __ICPCRL_FWD_DEFINED__
#define __ICPCRL_FWD_DEFINED__
typedef interface ICPCRL ICPCRL;

#endif 	/* __ICPCRL_FWD_DEFINED__ */


#ifndef __IAbout_FWD_DEFINED__
#define __IAbout_FWD_DEFINED__
typedef interface IAbout IAbout;

#endif 	/* __IAbout_FWD_DEFINED__ */


#ifndef __IVersion_FWD_DEFINED__
#define __IVersion_FWD_DEFINED__
typedef interface IVersion IVersion;

#endif 	/* __IVersion_FWD_DEFINED__ */


#ifndef __IAbout2_FWD_DEFINED__
#define __IAbout2_FWD_DEFINED__
typedef interface IAbout2 IAbout2;

#endif 	/* __IAbout2_FWD_DEFINED__ */


#ifndef __IAbout3_FWD_DEFINED__
#define __IAbout3_FWD_DEFINED__
typedef interface IAbout3 IAbout3;

#endif 	/* __IAbout3_FWD_DEFINED__ */


#ifndef __IAbout4_FWD_DEFINED__
#define __IAbout4_FWD_DEFINED__
typedef interface IAbout4 IAbout4;

#endif 	/* __IAbout4_FWD_DEFINED__ */


#ifndef __IAbout5_FWD_DEFINED__
#define __IAbout5_FWD_DEFINED__
typedef interface IAbout5 IAbout5;

#endif 	/* __IAbout5_FWD_DEFINED__ */


#ifndef __IMyDss_FWD_DEFINED__
#define __IMyDss_FWD_DEFINED__
typedef interface IMyDss IMyDss;

#endif 	/* __IMyDss_FWD_DEFINED__ */


#ifndef __CPAttribute_FWD_DEFINED__
#define __CPAttribute_FWD_DEFINED__

#ifdef __cplusplus
typedef class CPAttribute CPAttribute;
#else
typedef struct CPAttribute CPAttribute;
#endif /* __cplusplus */

#endif 	/* __CPAttribute_FWD_DEFINED__ */


#ifndef __CPAttributes_FWD_DEFINED__
#define __CPAttributes_FWD_DEFINED__

#ifdef __cplusplus
typedef class CPAttributes CPAttributes;
#else
typedef struct CPAttributes CPAttributes;
#endif /* __cplusplus */

#endif 	/* __CPAttributes_FWD_DEFINED__ */


#ifndef __CPSigner_FWD_DEFINED__
#define __CPSigner_FWD_DEFINED__

#ifdef __cplusplus
typedef class CPSigner CPSigner;
#else
typedef struct CPSigner CPSigner;
#endif /* __cplusplus */

#endif 	/* __CPSigner_FWD_DEFINED__ */


#ifndef __CPSigners_FWD_DEFINED__
#define __CPSigners_FWD_DEFINED__

#ifdef __cplusplus
typedef class CPSigners CPSigners;
#else
typedef struct CPSigners CPSigners;
#endif /* __cplusplus */

#endif 	/* __CPSigners_FWD_DEFINED__ */


#ifndef __CPBlobs_FWD_DEFINED__
#define __CPBlobs_FWD_DEFINED__

#ifdef __cplusplus
typedef class CPBlobs CPBlobs;
#else
typedef struct CPBlobs CPBlobs;
#endif /* __cplusplus */

#endif 	/* __CPBlobs_FWD_DEFINED__ */


#ifndef __SignatureStatus_FWD_DEFINED__
#define __SignatureStatus_FWD_DEFINED__

#ifdef __cplusplus
typedef class SignatureStatus SignatureStatus;
#else
typedef struct SignatureStatus SignatureStatus;
#endif /* __cplusplus */

#endif 	/* __SignatureStatus_FWD_DEFINED__ */


#ifndef __CPLicense_FWD_DEFINED__
#define __CPLicense_FWD_DEFINED__

#ifdef __cplusplus
typedef class CPLicense CPLicense;
#else
typedef struct CPLicense CPLicense;
#endif /* __cplusplus */

#endif 	/* __CPLicense_FWD_DEFINED__ */


#ifndef __CPCRL_FWD_DEFINED__
#define __CPCRL_FWD_DEFINED__

#ifdef __cplusplus
typedef class CPCRL CPCRL;
#else
typedef struct CPCRL CPCRL;
#endif /* __cplusplus */

#endif 	/* __CPCRL_FWD_DEFINED__ */


#ifndef __CPReaders_FWD_DEFINED__
#define __CPReaders_FWD_DEFINED__

#ifdef __cplusplus
typedef class CPReaders CPReaders;
#else
typedef struct CPReaders CPReaders;
#endif /* __cplusplus */

#endif 	/* __CPReaders_FWD_DEFINED__ */


#ifndef __CPErrorStatuses_FWD_DEFINED__
#define __CPErrorStatuses_FWD_DEFINED__

#ifdef __cplusplus
typedef class CPErrorStatuses CPErrorStatuses;
#else
typedef struct CPErrorStatuses CPErrorStatuses;
#endif /* __cplusplus */

#endif 	/* __CPErrorStatuses_FWD_DEFINED__ */


#ifndef __CadesTools_FWD_DEFINED__
#define __CadesTools_FWD_DEFINED__

#ifdef __cplusplus
typedef class CadesTools CadesTools;
#else
typedef struct CadesTools CadesTools;
#endif /* __cplusplus */

#endif 	/* __CadesTools_FWD_DEFINED__ */


#ifndef __EnrollX509ExtensionSubjectSignTool_FWD_DEFINED__
#define __EnrollX509ExtensionSubjectSignTool_FWD_DEFINED__

#ifdef __cplusplus
typedef class EnrollX509ExtensionSubjectSignTool EnrollX509ExtensionSubjectSignTool;
#else
typedef struct EnrollX509ExtensionSubjectSignTool EnrollX509ExtensionSubjectSignTool;
#endif /* __cplusplus */

#endif 	/* __EnrollX509ExtensionSubjectSignTool_FWD_DEFINED__ */


#ifndef __EnrollX509NameValuePair_FWD_DEFINED__
#define __EnrollX509NameValuePair_FWD_DEFINED__

#ifdef __cplusplus
typedef class EnrollX509NameValuePair EnrollX509NameValuePair;
#else
typedef struct EnrollX509NameValuePair EnrollX509NameValuePair;
#endif /* __cplusplus */

#endif 	/* __EnrollX509NameValuePair_FWD_DEFINED__ */


#ifndef __EnrollX509NameValuePairs_FWD_DEFINED__
#define __EnrollX509NameValuePairs_FWD_DEFINED__

#ifdef __cplusplus
typedef class EnrollX509NameValuePairs EnrollX509NameValuePairs;
#else
typedef struct EnrollX509NameValuePairs EnrollX509NameValuePairs;
#endif /* __cplusplus */

#endif 	/* __EnrollX509NameValuePairs_FWD_DEFINED__ */


#ifndef __EnrollReaderMode_FWD_DEFINED__
#define __EnrollReaderMode_FWD_DEFINED__

#ifdef __cplusplus
typedef class EnrollReaderMode EnrollReaderMode;
#else
typedef struct EnrollReaderMode EnrollReaderMode;
#endif /* __cplusplus */

#endif 	/* __EnrollReaderMode_FWD_DEFINED__ */


#ifndef __EnrollReaderModes_FWD_DEFINED__
#define __EnrollReaderModes_FWD_DEFINED__

#ifdef __cplusplus
typedef class EnrollReaderModes EnrollReaderModes;
#else
typedef struct EnrollReaderModes EnrollReaderModes;
#endif /* __cplusplus */

#endif 	/* __EnrollReaderModes_FWD_DEFINED__ */


#ifndef __CPContainers_FWD_DEFINED__
#define __CPContainers_FWD_DEFINED__

#ifdef __cplusplus
typedef class CPContainers CPContainers;
#else
typedef struct CPContainers CPContainers;
#endif /* __cplusplus */

#endif 	/* __CPContainers_FWD_DEFINED__ */


#ifndef __CPContainer_FWD_DEFINED__
#define __CPContainer_FWD_DEFINED__

#ifdef __cplusplus
typedef class CPContainer CPContainer;
#else
typedef struct CPContainer CPContainer;
#endif /* __cplusplus */

#endif 	/* __CPContainer_FWD_DEFINED__ */


#ifndef __CPContainerKeys_FWD_DEFINED__
#define __CPContainerKeys_FWD_DEFINED__

#ifdef __cplusplus
typedef class CPContainerKeys CPContainerKeys;
#else
typedef struct CPContainerKeys CPContainerKeys;
#endif /* __cplusplus */

#endif 	/* __CPContainerKeys_FWD_DEFINED__ */


#ifndef __CPContainerKey_FWD_DEFINED__
#define __CPContainerKey_FWD_DEFINED__

#ifdef __cplusplus
typedef class CPContainerKey CPContainerKey;
#else
typedef struct CPContainerKey CPContainerKey;
#endif /* __cplusplus */

#endif 	/* __CPContainerKey_FWD_DEFINED__ */


#ifndef __EnrollX509ExtensionIdentificationKind_FWD_DEFINED__
#define __EnrollX509ExtensionIdentificationKind_FWD_DEFINED__

#ifdef __cplusplus
typedef class EnrollX509ExtensionIdentificationKind EnrollX509ExtensionIdentificationKind;
#else
typedef struct EnrollX509ExtensionIdentificationKind EnrollX509ExtensionIdentificationKind;
#endif /* __cplusplus */

#endif 	/* __EnrollX509ExtensionIdentificationKind_FWD_DEFINED__ */


#ifndef __EnrollAlternativeName_FWD_DEFINED__
#define __EnrollAlternativeName_FWD_DEFINED__

#ifdef __cplusplus
typedef class EnrollAlternativeName EnrollAlternativeName;
#else
typedef struct EnrollAlternativeName EnrollAlternativeName;
#endif /* __cplusplus */

#endif 	/* __EnrollAlternativeName_FWD_DEFINED__ */


#ifndef __EnrollAlternativeNames_FWD_DEFINED__
#define __EnrollAlternativeNames_FWD_DEFINED__

#ifdef __cplusplus
typedef class EnrollAlternativeNames EnrollAlternativeNames;
#else
typedef struct EnrollAlternativeNames EnrollAlternativeNames;
#endif /* __cplusplus */

#endif 	/* __EnrollAlternativeNames_FWD_DEFINED__ */


#ifndef __EnrollX509ExtensionAlternativeNames_FWD_DEFINED__
#define __EnrollX509ExtensionAlternativeNames_FWD_DEFINED__

#ifdef __cplusplus
typedef class EnrollX509ExtensionAlternativeNames EnrollX509ExtensionAlternativeNames;
#else
typedef struct EnrollX509ExtensionAlternativeNames EnrollX509ExtensionAlternativeNames;
#endif /* __cplusplus */

#endif 	/* __EnrollX509ExtensionAlternativeNames_FWD_DEFINED__ */


#ifndef __About_FWD_DEFINED__
#define __About_FWD_DEFINED__

#ifdef __cplusplus
typedef class About About;
#else
typedef struct About About;
#endif /* __cplusplus */

#endif 	/* __About_FWD_DEFINED__ */


#ifndef __Version_FWD_DEFINED__
#define __Version_FWD_DEFINED__

#ifdef __cplusplus
typedef class Version Version;
#else
typedef struct Version Version;
#endif /* __cplusplus */

#endif 	/* __Version_FWD_DEFINED__ */


#ifndef __CadesSignedData_FWD_DEFINED__
#define __CadesSignedData_FWD_DEFINED__

#ifdef __cplusplus
typedef class CadesSignedData CadesSignedData;
#else
typedef struct CadesSignedData CadesSignedData;
#endif /* __cplusplus */

#endif 	/* __CadesSignedData_FWD_DEFINED__ */


#ifndef __SignedXML_FWD_DEFINED__
#define __SignedXML_FWD_DEFINED__

#ifdef __cplusplus
typedef class SignedXML SignedXML;
#else
typedef struct SignedXML SignedXML;
#endif /* __cplusplus */

#endif 	/* __SignedXML_FWD_DEFINED__ */


#ifndef __EnvelopedXML_FWD_DEFINED__
#define __EnvelopedXML_FWD_DEFINED__

#ifdef __cplusplus
typedef class EnvelopedXML EnvelopedXML;
#else
typedef struct EnvelopedXML EnvelopedXML;
#endif /* __cplusplus */

#endif 	/* __EnvelopedXML_FWD_DEFINED__ */


#ifndef __CPEnvelopedData_FWD_DEFINED__
#define __CPEnvelopedData_FWD_DEFINED__

#ifdef __cplusplus
typedef class CPEnvelopedData CPEnvelopedData;
#else
typedef struct CPEnvelopedData CPEnvelopedData;
#endif /* __cplusplus */

#endif 	/* __CPEnvelopedData_FWD_DEFINED__ */


#ifndef __CPHashedData_FWD_DEFINED__
#define __CPHashedData_FWD_DEFINED__

#ifdef __cplusplus
typedef class CPHashedData CPHashedData;
#else
typedef struct CPHashedData CPHashedData;
#endif /* __cplusplus */

#endif 	/* __CPHashedData_FWD_DEFINED__ */


#ifndef __RawSignature_FWD_DEFINED__
#define __RawSignature_FWD_DEFINED__

#ifdef __cplusplus
typedef class RawSignature RawSignature;
#else
typedef struct RawSignature RawSignature;
#endif /* __cplusplus */

#endif 	/* __RawSignature_FWD_DEFINED__ */


#ifndef __CPExtension_FWD_DEFINED__
#define __CPExtension_FWD_DEFINED__

#ifdef __cplusplus
typedef class CPExtension CPExtension;
#else
typedef struct CPExtension CPExtension;
#endif /* __cplusplus */

#endif 	/* __CPExtension_FWD_DEFINED__ */


#ifndef __CPExtensions_FWD_DEFINED__
#define __CPExtensions_FWD_DEFINED__

#ifdef __cplusplus
typedef class CPExtensions CPExtensions;
#else
typedef struct CPExtensions CPExtensions;
#endif /* __cplusplus */

#endif 	/* __CPExtensions_FWD_DEFINED__ */


#ifndef __CPCertificate_FWD_DEFINED__
#define __CPCertificate_FWD_DEFINED__

#ifdef __cplusplus
typedef class CPCertificate CPCertificate;
#else
typedef struct CPCertificate CPCertificate;
#endif /* __cplusplus */

#endif 	/* __CPCertificate_FWD_DEFINED__ */


#ifndef __SymmetricAlgorithm_FWD_DEFINED__
#define __SymmetricAlgorithm_FWD_DEFINED__

#ifdef __cplusplus
typedef class SymmetricAlgorithm SymmetricAlgorithm;
#else
typedef struct SymmetricAlgorithm SymmetricAlgorithm;
#endif /* __cplusplus */

#endif 	/* __SymmetricAlgorithm_FWD_DEFINED__ */


#ifndef __MyDss_FWD_DEFINED__
#define __MyDss_FWD_DEFINED__

#ifdef __cplusplus
typedef class MyDss MyDss;
#else
typedef struct MyDss MyDss;
#endif /* __cplusplus */

#endif 	/* __MyDss_FWD_DEFINED__ */


#ifndef __CPPrivateKey_FWD_DEFINED__
#define __CPPrivateKey_FWD_DEFINED__

#ifdef __cplusplus
typedef class CPPrivateKey CPPrivateKey;
#else
typedef struct CPPrivateKey CPPrivateKey;
#endif /* __cplusplus */

#endif 	/* __CPPrivateKey_FWD_DEFINED__ */


#ifndef __CPStore_FWD_DEFINED__
#define __CPStore_FWD_DEFINED__

#ifdef __cplusplus
typedef class CPStore CPStore;
#else
typedef struct CPStore CPStore;
#endif /* __cplusplus */

#endif 	/* __CPStore_FWD_DEFINED__ */


#ifndef __EnrollObjectId_FWD_DEFINED__
#define __EnrollObjectId_FWD_DEFINED__

#ifdef __cplusplus
typedef class EnrollObjectId EnrollObjectId;
#else
typedef struct EnrollObjectId EnrollObjectId;
#endif /* __cplusplus */

#endif 	/* __EnrollObjectId_FWD_DEFINED__ */


#ifndef __EnrollObjectIds_FWD_DEFINED__
#define __EnrollObjectIds_FWD_DEFINED__

#ifdef __cplusplus
typedef class EnrollObjectIds EnrollObjectIds;
#else
typedef struct EnrollObjectIds EnrollObjectIds;
#endif /* __cplusplus */

#endif 	/* __EnrollObjectIds_FWD_DEFINED__ */


#ifndef __EnrollX500DistinguishedName_FWD_DEFINED__
#define __EnrollX500DistinguishedName_FWD_DEFINED__

#ifdef __cplusplus
typedef class EnrollX500DistinguishedName EnrollX500DistinguishedName;
#else
typedef struct EnrollX500DistinguishedName EnrollX500DistinguishedName;
#endif /* __cplusplus */

#endif 	/* __EnrollX500DistinguishedName_FWD_DEFINED__ */


#ifndef __EnrollX509PrivateKey_FWD_DEFINED__
#define __EnrollX509PrivateKey_FWD_DEFINED__

#ifdef __cplusplus
typedef class EnrollX509PrivateKey EnrollX509PrivateKey;
#else
typedef struct EnrollX509PrivateKey EnrollX509PrivateKey;
#endif /* __cplusplus */

#endif 	/* __EnrollX509PrivateKey_FWD_DEFINED__ */


#ifndef __EnrollX509Extension_FWD_DEFINED__
#define __EnrollX509Extension_FWD_DEFINED__

#ifdef __cplusplus
typedef class EnrollX509Extension EnrollX509Extension;
#else
typedef struct EnrollX509Extension EnrollX509Extension;
#endif /* __cplusplus */

#endif 	/* __EnrollX509Extension_FWD_DEFINED__ */


#ifndef __EnrollX509Extensions_FWD_DEFINED__
#define __EnrollX509Extensions_FWD_DEFINED__

#ifdef __cplusplus
typedef class EnrollX509Extensions EnrollX509Extensions;
#else
typedef struct EnrollX509Extensions EnrollX509Extensions;
#endif /* __cplusplus */

#endif 	/* __EnrollX509Extensions_FWD_DEFINED__ */


#ifndef __EnrollCspAlgorithm_FWD_DEFINED__
#define __EnrollCspAlgorithm_FWD_DEFINED__

#ifdef __cplusplus
typedef class EnrollCspAlgorithm EnrollCspAlgorithm;
#else
typedef struct EnrollCspAlgorithm EnrollCspAlgorithm;
#endif /* __cplusplus */

#endif 	/* __EnrollCspAlgorithm_FWD_DEFINED__ */


#ifndef __EnrollCspAlgorithms_FWD_DEFINED__
#define __EnrollCspAlgorithms_FWD_DEFINED__

#ifdef __cplusplus
typedef class EnrollCspAlgorithms EnrollCspAlgorithms;
#else
typedef struct EnrollCspAlgorithms EnrollCspAlgorithms;
#endif /* __cplusplus */

#endif 	/* __EnrollCspAlgorithms_FWD_DEFINED__ */


#ifndef __EnrollCspInformation_FWD_DEFINED__
#define __EnrollCspInformation_FWD_DEFINED__

#ifdef __cplusplus
typedef class EnrollCspInformation EnrollCspInformation;
#else
typedef struct EnrollCspInformation EnrollCspInformation;
#endif /* __cplusplus */

#endif 	/* __EnrollCspInformation_FWD_DEFINED__ */


#ifndef __EnrollCspInformations_FWD_DEFINED__
#define __EnrollCspInformations_FWD_DEFINED__

#ifdef __cplusplus
typedef class EnrollCspInformations EnrollCspInformations;
#else
typedef struct EnrollCspInformations EnrollCspInformations;
#endif /* __cplusplus */

#endif 	/* __EnrollCspInformations_FWD_DEFINED__ */


#ifndef __EnrollCspStatus_FWD_DEFINED__
#define __EnrollCspStatus_FWD_DEFINED__

#ifdef __cplusplus
typedef class EnrollCspStatus EnrollCspStatus;
#else
typedef struct EnrollCspStatus EnrollCspStatus;
#endif /* __cplusplus */

#endif 	/* __EnrollCspStatus_FWD_DEFINED__ */


#ifndef __EnrollCspStatuses_FWD_DEFINED__
#define __EnrollCspStatuses_FWD_DEFINED__

#ifdef __cplusplus
typedef class EnrollCspStatuses EnrollCspStatuses;
#else
typedef struct EnrollCspStatuses EnrollCspStatuses;
#endif /* __cplusplus */

#endif 	/* __EnrollCspStatuses_FWD_DEFINED__ */


#ifndef __EnrollX509CertificateRequestPkcs10_FWD_DEFINED__
#define __EnrollX509CertificateRequestPkcs10_FWD_DEFINED__

#ifdef __cplusplus
typedef class EnrollX509CertificateRequestPkcs10 EnrollX509CertificateRequestPkcs10;
#else
typedef struct EnrollX509CertificateRequestPkcs10 EnrollX509CertificateRequestPkcs10;
#endif /* __cplusplus */

#endif 	/* __EnrollX509CertificateRequestPkcs10_FWD_DEFINED__ */


#ifndef __EnrollX509Enrollment_FWD_DEFINED__
#define __EnrollX509Enrollment_FWD_DEFINED__

#ifdef __cplusplus
typedef class EnrollX509Enrollment EnrollX509Enrollment;
#else
typedef struct EnrollX509Enrollment EnrollX509Enrollment;
#endif /* __cplusplus */

#endif 	/* __EnrollX509Enrollment_FWD_DEFINED__ */


#ifndef __EnrollX509ExtensionKeyUsage_FWD_DEFINED__
#define __EnrollX509ExtensionKeyUsage_FWD_DEFINED__

#ifdef __cplusplus
typedef class EnrollX509ExtensionKeyUsage EnrollX509ExtensionKeyUsage;
#else
typedef struct EnrollX509ExtensionKeyUsage EnrollX509ExtensionKeyUsage;
#endif /* __cplusplus */

#endif 	/* __EnrollX509ExtensionKeyUsage_FWD_DEFINED__ */


#ifndef __EnrollX509ExtensionEnhancedKeyUsage_FWD_DEFINED__
#define __EnrollX509ExtensionEnhancedKeyUsage_FWD_DEFINED__

#ifdef __cplusplus
typedef class EnrollX509ExtensionEnhancedKeyUsage EnrollX509ExtensionEnhancedKeyUsage;
#else
typedef struct EnrollX509ExtensionEnhancedKeyUsage EnrollX509ExtensionEnhancedKeyUsage;
#endif /* __cplusplus */

#endif 	/* __EnrollX509ExtensionEnhancedKeyUsage_FWD_DEFINED__ */


#ifndef __EnrollPolicyQualifier_FWD_DEFINED__
#define __EnrollPolicyQualifier_FWD_DEFINED__

#ifdef __cplusplus
typedef class EnrollPolicyQualifier EnrollPolicyQualifier;
#else
typedef struct EnrollPolicyQualifier EnrollPolicyQualifier;
#endif /* __cplusplus */

#endif 	/* __EnrollPolicyQualifier_FWD_DEFINED__ */


#ifndef __EnrollPolicyQualifiers_FWD_DEFINED__
#define __EnrollPolicyQualifiers_FWD_DEFINED__

#ifdef __cplusplus
typedef class EnrollPolicyQualifiers EnrollPolicyQualifiers;
#else
typedef struct EnrollPolicyQualifiers EnrollPolicyQualifiers;
#endif /* __cplusplus */

#endif 	/* __EnrollPolicyQualifiers_FWD_DEFINED__ */


#ifndef __EnrollCertificatePolicy_FWD_DEFINED__
#define __EnrollCertificatePolicy_FWD_DEFINED__

#ifdef __cplusplus
typedef class EnrollCertificatePolicy EnrollCertificatePolicy;
#else
typedef struct EnrollCertificatePolicy EnrollCertificatePolicy;
#endif /* __cplusplus */

#endif 	/* __EnrollCertificatePolicy_FWD_DEFINED__ */


#ifndef __EnrollCertificatePolicies_FWD_DEFINED__
#define __EnrollCertificatePolicies_FWD_DEFINED__

#ifdef __cplusplus
typedef class EnrollCertificatePolicies EnrollCertificatePolicies;
#else
typedef struct EnrollCertificatePolicies EnrollCertificatePolicies;
#endif /* __cplusplus */

#endif 	/* __EnrollCertificatePolicies_FWD_DEFINED__ */


#ifndef __EnrollX509ExtensionCertificatePolicies_FWD_DEFINED__
#define __EnrollX509ExtensionCertificatePolicies_FWD_DEFINED__

#ifdef __cplusplus
typedef class EnrollX509ExtensionCertificatePolicies EnrollX509ExtensionCertificatePolicies;
#else
typedef struct EnrollX509ExtensionCertificatePolicies EnrollX509ExtensionCertificatePolicies;
#endif /* __cplusplus */

#endif 	/* __EnrollX509ExtensionCertificatePolicies_FWD_DEFINED__ */


#ifndef __EnrollX509ExtensionTemplate_FWD_DEFINED__
#define __EnrollX509ExtensionTemplate_FWD_DEFINED__

#ifdef __cplusplus
typedef class EnrollX509ExtensionTemplate EnrollX509ExtensionTemplate;
#else
typedef struct EnrollX509ExtensionTemplate EnrollX509ExtensionTemplate;
#endif /* __cplusplus */

#endif 	/* __EnrollX509ExtensionTemplate_FWD_DEFINED__ */


#ifndef __UECard_FWD_DEFINED__
#define __UECard_FWD_DEFINED__

#ifdef __cplusplus
typedef class UECard UECard;
#else
typedef struct UECard UECard;
#endif /* __cplusplus */

#endif 	/* __UECard_FWD_DEFINED__ */


#ifndef __CardholderData_FWD_DEFINED__
#define __CardholderData_FWD_DEFINED__

#ifdef __cplusplus
typedef class CardholderData CardholderData;
#else
typedef struct CardholderData CardholderData;
#endif /* __cplusplus */

#endif 	/* __CardholderData_FWD_DEFINED__ */


#ifndef __PersonalCardholderData_FWD_DEFINED__
#define __PersonalCardholderData_FWD_DEFINED__

#ifdef __cplusplus
typedef class PersonalCardholderData PersonalCardholderData;
#else
typedef struct PersonalCardholderData PersonalCardholderData;
#endif /* __cplusplus */

#endif 	/* __PersonalCardholderData_FWD_DEFINED__ */


#ifndef __IdentityCard_FWD_DEFINED__
#define __IdentityCard_FWD_DEFINED__

#ifdef __cplusplus
typedef class IdentityCard IdentityCard;
#else
typedef struct IdentityCard IdentityCard;
#endif /* __cplusplus */

#endif 	/* __IdentityCard_FWD_DEFINED__ */


#ifndef __OMSData_FWD_DEFINED__
#define __OMSData_FWD_DEFINED__

#ifdef __cplusplus
typedef class OMSData OMSData;
#else
typedef struct OMSData OMSData;
#endif /* __cplusplus */

#endif 	/* __OMSData_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_cadescom_0000_0000 */
/* [local] */ 

#include "capicom.h"
#include "certenroll.h"










































// √лупый MIDL не умеет генерить ссылки на enum'ы,
// определЄнные в другой библиотеке типов без алиаса,
// поэтому в cadescom.idl повторено определение используемых
// enum'ов CAPICOM. ¬ cadescom.h эти определени€
// не нужны, да к тому же ещЄ привод€т к ошибкам компил€ции,
// поэтому здесь они безусловно выкинуты из компил€ции.
#if 0
typedef /* [public][public][public][public][public][public][public][public][public] */ 
enum __MIDL___MIDL_itf_cadescom_0000_0000_0001
    {
        CAPICOM_ENCODE_BASE64	= 0,
        CAPICOM_ENCODE_BINARY	= 1,
        CAPICOM_ENCODE_ANY	= 0xffffffff
    } 	CAPICOM_ENCODING_TYPE;

#endif //0


extern RPC_IF_HANDLE __MIDL_itf_cadescom_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_cadescom_0000_0000_v0_0_s_ifspec;


#ifndef __CAdESCOM_LIBRARY_DEFINED__
#define __CAdESCOM_LIBRARY_DEFINED__

/* library CAdESCOM */
/* [helpstring][version][uuid] */ 

typedef /* [public][public][public] */ 
enum __MIDL___MIDL_itf_cadescom_0000_0000_0002
    {
        CADESCOM_DISPLAY_DATA_NONE	= 0,
        CADESCOM_DISPLAY_DATA_CONTENT	= 0x1,
        CADESCOM_DISPLAY_DATA_ATTRIBUTE	= 0x2
    } 	CADESCOM_DISPLAY_DATA;

typedef /* [public][public][public][public][public][public][public][public] */ 
enum __MIDL___MIDL_itf_cadescom_0000_0000_0003
    {
        CADESCOM_CADES_DEFAULT	= 0,
        CADESCOM_CADES_BES	= 0x1,
        CADESCOM_CADES_T	= 0x5,
        CADESCOM_CADES_X_LONG_TYPE_1	= 0x5d,
        CADESCOM_PKCS7_TYPE	= 0xffff
    } 	CADESCOM_CADES_TYPE;

typedef /* [public][public][public][public][public][public][public] */ 
enum __MIDL___MIDL_itf_cadescom_0000_0000_0004
    {
        CADESCOM_STRING_TO_UCS2LE	= 0,
        CADESCOM_BASE64_TO_BINARY	= 0x1
    } 	CADESCOM_CONTENT_ENCODING_TYPE;

typedef /* [public][public][public] */ 
enum __MIDL___MIDL_itf_cadescom_0000_0000_0005
    {
        CADESCOM_XML_SIGNATURE_TYPE_ENVELOPED	= 0,
        CADESCOM_XML_SIGNATURE_TYPE_ENVELOPING	= 1,
        CADESCOM_XML_SIGNATURE_TYPE_TEMPLATE	= 2
    } 	CADESCOM_XML_SIGNATURE_TYPE;

typedef /* [public] */ 
enum __MIDL___MIDL_itf_cadescom_0000_0000_0006
    {
        CADESCOM_XADES_DEFAULT	= 0x10,
        CADESCOM_XADES_BES	= 0x20,
        CADESCOM_XADES_T	= 0x50,
        CADESCOM_XADES_X_LONG_TYPE_1	= 0x5d0,
        CADESCOM_XADES_A	= 0x7d0,
        CADESCOM_XMLDSIG_TYPE	= 0
    } 	CADESCOM_XADES_TYPE;

typedef /* [public][public][public] */ 
enum __MIDL___MIDL_itf_cadescom_0000_0000_0007
    {
        CADESCOM_XADES_ADDITIONAL_OPTIONS_NONE	= 0,
        CADESCOM_XADES_ACCEPT_ANY_ID_ATTR_NAMESPACE	= 0x1
    } 	CADESCOM_XADES_ADDITIONAL_OPTIONS;

typedef /* [public][public][public] */ 
enum __MIDL___MIDL_itf_cadescom_0000_0000_0008
    {
        CADESCOM_AUTHENTICATED_ATTRIBUTE_SIGNING_TIME	= 0,
        CADESCOM_AUTHENTICATED_ATTRIBUTE_DOCUMENT_NAME	= 1,
        CADESCOM_AUTHENTICATED_ATTRIBUTE_DOCUMENT_DESCRIPTION	= 2,
        CADESCOM_AUTHENTICATED_ATTRIBUTE_MACHINE_INFO	= 0x100,
        CADESCOM_ATTRIBUTE_OTHER	= 0xffffffff
    } 	CADESCOM_ATTRIBUTE;

typedef /* [public] */ 
enum __MIDL___MIDL_itf_cadescom_0000_0000_0009
    {
        CADESCOM_HASH_ALGORITHM_SHA1	= 0,
        CADESCOM_HASH_ALGORITHM_MD2	= 1,
        CADESCOM_HASH_ALGORITHM_MD4	= 2,
        CADESCOM_HASH_ALGORITHM_MD5	= 3,
        CADESCOM_HASH_ALGORITHM_SHA_256	= 4,
        CADESCOM_HASH_ALGORITHM_SHA_384	= 5,
        CADESCOM_HASH_ALGORITHM_SHA_512	= 6,
        CADESCOM_HASH_ALGORITHM_CP_GOST_3411	= 100,
        CADESCOM_HASH_ALGORITHM_CP_GOST_3411_2012_256	= 101,
        CADESCOM_HASH_ALGORITHM_CP_GOST_3411_2012_512	= 102,
        CADESCOM_HASH_ALGORITHM_CP_GOST_3411_HMAC	= 110,
        CADESCOM_HASH_ALGORITHM_CP_GOST_3411_2012_256_HMAC	= 111,
        CADESCOM_HASH_ALGORITHM_CP_GOST_3411_2012_512_HMAC	= 112
    } 	CADESCOM_HASH_ALGORITHM;

typedef /* [public][public] */ 
enum __MIDL___MIDL_itf_cadescom_0000_0000_0010
    {
        CADESCOM_ENCRYPTION_ALGORITHM_RC2	= 0,
        CADESCOM_ENCRYPTION_ALGORITHM_RC4	= 1,
        CADESCOM_ENCRYPTION_ALGORITHM_DES	= 2,
        CADESCOM_ENCRYPTION_ALGORITHM_3DES	= 3,
        CADESCOM_ENCRYPTION_ALGORITHM_AES	= 4,
        CADESCOM_ENCRYPTION_ALGORITHM_GOST_28147_89	= 25
    } 	CADESCOM_ENCRYPTION_ALGORITHM;

typedef /* [public] */ 
enum __MIDL___MIDL_itf_cadescom_0000_0000_0011
    {
        CADESCOM_AllowNone	= 0,
        CADESCOM_AllowNoOutstandingRequest	= 0x1,
        CADESCOM_AllowUntrustedCertificate	= 0x2,
        CADESCOM_AllowUntrustedRoot	= 0x4,
        CADESCOM_SkipInstallToStore	= 0x10000000,
        CADESCOM_InstallCertChainToContainer	= 0x20000000,
        CADESCOM_UseContainerStore	= 0x40000000
    } 	CADESCOM_InstallResponseRestrictionFlags;

typedef /* [public] */ 
enum __MIDL___MIDL_itf_cadescom_0000_0000_0012
    {
        CADESCOM_MEMORY_STORE	= 0,
        CADESCOM_LOCAL_MACHINE_STORE	= 1,
        CADESCOM_CURRENT_USER_STORE	= 2,
        CADESCOM_ACTIVE_DIRECTORY_USER_STORE	= 3,
        CADESCOM_SMART_CARD_USER_STORE	= 4,
        CADESCOM_CONTAINER_STORE	= 100
    } 	CADESCOM_STORE_LOCATION;

typedef /* [public] */ 
enum __MIDL___MIDL_itf_cadescom_0000_0000_0013
    {
        CADESCOM_PRODUCT_CSP	= 0,
        CADESCOM_PRODUCT_OCSP	= 1,
        CADESCOM_PRODUCT_TSP	= 2
    } 	CADESCOM_PRODUCT;

typedef /* [public] */ 
enum __MIDL___MIDL_itf_cadescom_0000_0000_0014
    {
        MEDIA_TYPE_REGISTRY	= 0x1,
        MEDIA_TYPE_HDIMAGE	= 0x2,
        MEDIA_TYPE_CLOUD	= 0x4,
        MEDIA_TYPE_SCARD	= 0x8
    } 	CADESCOM_MEDIA_TYPE;

typedef 
enum _CADESCOM_HUMAN_SEXES
    {
        CADESCOM_SEX_NOT_KNOWN	= 0,
        CADESCOM_SEX_MALE	= 1,
        CADESCOM_SEX_FEMALE	= 2,
        CADESCOM_SEX_NOT_APPLICABLE	= 9
    } 	CADESCOM_HUMAN_SEXES;


EXTERN_C const IID LIBID_CAdESCOM;

#ifndef __ICPCertificate_INTERFACE_DEFINED__
#define __ICPCertificate_INTERFACE_DEFINED__

/* interface ICPCertificate */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ICPCertificate;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("4552F41D-0C10-4C60-90FA-0D33709575CD")
    ICPCertificate : public ICertificate2
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE FindPrivateKey( 
            /* [optional][in] */ VARIANT varCriteria) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICPCertificateVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(ICertificate2, QueryInterface)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICPCertificate * This,
            /* [in][idldescattr] */ struct GUID *riid,
            /* [out][idldescattr] */ void **ppvObj,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(ICertificate2, AddRef)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *AddRef )( 
            ICPCertificate * This,
            /* [retval][out] */ unsigned long *retval);
        
        DECLSPEC_XFGVIRT(ICertificate2, Release)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *Release )( 
            ICPCertificate * This,
            /* [retval][out] */ unsigned long *retval);
        
        DECLSPEC_XFGVIRT(ICertificate2, GetTypeInfoCount)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ICPCertificate * This,
            /* [out][idldescattr] */ unsigned UINT *pctinfo,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(ICertificate2, GetTypeInfo)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ICPCertificate * This,
            /* [in][idldescattr] */ unsigned UINT itinfo,
            /* [in][idldescattr] */ unsigned long lcid,
            /* [out][idldescattr] */ void **pptinfo,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(ICertificate2, GetIDsOfNames)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ICPCertificate * This,
            /* [in][idldescattr] */ struct GUID *riid,
            /* [in][idldescattr] */ signed char **rgszNames,
            /* [in][idldescattr] */ unsigned UINT cNames,
            /* [in][idldescattr] */ unsigned long lcid,
            /* [out][idldescattr] */ signed long *rgdispid,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(ICertificate2, Invoke)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICPCertificate * This,
            /* [in][idldescattr] */ signed long dispidMember,
            /* [in][idldescattr] */ struct GUID *riid,
            /* [in][idldescattr] */ unsigned long lcid,
            /* [in][idldescattr] */ unsigned short wFlags,
            /* [in][idldescattr] */ struct DISPPARAMS *pdispparams,
            /* [out][idldescattr] */ VARIANT *pvarResult,
            /* [out][idldescattr] */ struct EXCEPINFO *pexcepinfo,
            /* [out][idldescattr] */ unsigned UINT *puArgErr,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(ICertificate2, get_Version)
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_Version )( 
            ICPCertificate * This,
            /* [retval][out] */ signed long *retval);
        
        DECLSPEC_XFGVIRT(ICertificate2, get_SerialNumber)
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_SerialNumber )( 
            ICPCertificate * This,
            /* [retval][out] */ BSTR *retval);
        
        DECLSPEC_XFGVIRT(ICertificate2, get_SubjectName)
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_SubjectName )( 
            ICPCertificate * This,
            /* [retval][out] */ BSTR *retval);
        
        DECLSPEC_XFGVIRT(ICertificate2, get_IssuerName)
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_IssuerName )( 
            ICPCertificate * This,
            /* [retval][out] */ BSTR *retval);
        
        DECLSPEC_XFGVIRT(ICertificate2, get_ValidFromDate)
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_ValidFromDate )( 
            ICPCertificate * This,
            /* [retval][out] */ DATE *retval);
        
        DECLSPEC_XFGVIRT(ICertificate2, get_ValidToDate)
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_ValidToDate )( 
            ICPCertificate * This,
            /* [retval][out] */ DATE *retval);
        
        DECLSPEC_XFGVIRT(ICertificate2, get_Thumbprint)
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_Thumbprint )( 
            ICPCertificate * This,
            /* [retval][out] */ BSTR *retval);
        
        DECLSPEC_XFGVIRT(ICertificate2, HasPrivateKey)
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *HasPrivateKey )( 
            ICPCertificate * This,
            /* [retval][out] */ BOOLEAN *retval);
        
        DECLSPEC_XFGVIRT(ICertificate2, GetInfo)
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *GetInfo )( 
            ICPCertificate * This,
            /* [in][idldescattr] */ CAPICOM_CERT_INFO_TYPE InfoType,
            /* [retval][out] */ BSTR *retval);
        
        DECLSPEC_XFGVIRT(ICertificate2, IsValid)
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *IsValid )( 
            ICPCertificate * This,
            /* [retval][out] */ ICertificateStatus **retval);
        
        DECLSPEC_XFGVIRT(ICertificate2, KeyUsage)
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *KeyUsage )( 
            ICPCertificate * This,
            /* [retval][out] */ IKeyUsage **retval);
        
        DECLSPEC_XFGVIRT(ICertificate2, ExtendedKeyUsage)
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *ExtendedKeyUsage )( 
            ICPCertificate * This,
            /* [retval][out] */ IExtendedKeyUsage **retval);
        
        DECLSPEC_XFGVIRT(ICertificate2, BasicConstraints)
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *BasicConstraints )( 
            ICPCertificate * This,
            /* [retval][out] */ IBasicConstraints **retval);
        
        DECLSPEC_XFGVIRT(ICertificate2, Export)
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *Export )( 
            ICPCertificate * This,
            /* [in][idldescattr] */ CAPICOM_ENCODING_TYPE EncodingType,
            /* [retval][out] */ BSTR *retval);
        
        DECLSPEC_XFGVIRT(ICertificate2, Import)
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *Import )( 
            ICPCertificate * This,
            /* [in][idldescattr] */ BSTR EncodedCertificate,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(ICertificate2, Display)
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *Display )( 
            ICPCertificate * This,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(ICertificate2, get_Archived)
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_Archived )( 
            ICPCertificate * This,
            /* [retval][out] */ BOOLEAN *retval);
        
        DECLSPEC_XFGVIRT(ICertificate2, put_Archived)
        /* [id][propput][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *put_Archived )( 
            ICPCertificate * This,
            /* [in][idldescattr] */ BOOLEAN noname,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(ICertificate2, Template)
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *Template )( 
            ICPCertificate * This,
            /* [retval][out] */ ITemplate **retval);
        
        DECLSPEC_XFGVIRT(ICertificate2, PublicKey)
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *PublicKey )( 
            ICPCertificate * This,
            /* [retval][out] */ IPublicKey **retval);
        
        DECLSPEC_XFGVIRT(ICertificate2, get_PrivateKey)
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_PrivateKey )( 
            ICPCertificate * This,
            /* [retval][out] */ IPrivateKey **retval);
        
        DECLSPEC_XFGVIRT(ICertificate2, put_PrivateKey)
        /* [id][propput][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *put_PrivateKey )( 
            ICPCertificate * This,
            /* [in][idldescattr] */ IPrivateKey *noname,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(ICertificate2, Extensions)
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *Extensions )( 
            ICPCertificate * This,
            /* [retval][out] */ IExtensions **retval);
        
        DECLSPEC_XFGVIRT(ICertificate2, ExtendedProperties)
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *ExtendedProperties )( 
            ICPCertificate * This,
            /* [retval][out] */ IExtendedProperties **retval);
        
        DECLSPEC_XFGVIRT(ICertificate2, Load)
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *Load )( 
            ICPCertificate * This,
            /* [in][idldescattr] */ BSTR FileName,
            /* [in][idldescattr] */ BSTR Password,
            /* [in][idldescattr] */ CAPICOM_KEY_STORAGE_FLAG KeyStorageFlag,
            /* [in][idldescattr] */ CAPICOM_KEY_LOCATION KeyLocation,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(ICertificate2, Save)
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *Save )( 
            ICPCertificate * This,
            /* [in][idldescattr] */ BSTR FileName,
            /* [in][idldescattr] */ BSTR Password,
            /* [in][idldescattr] */ CAPICOM_CERTIFICATE_SAVE_AS_TYPE SaveAs,
            /* [in][idldescattr] */ CAPICOM_CERTIFICATE_INCLUDE_OPTION IncludeOption,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(ICPCertificate, FindPrivateKey)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *FindPrivateKey )( 
            ICPCertificate * This,
            /* [optional][in] */ VARIANT varCriteria);
        
        END_INTERFACE
    } ICPCertificateVtbl;

    interface ICPCertificate
    {
        CONST_VTBL struct ICPCertificateVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICPCertificate_QueryInterface(This,riid,ppvObj,retval)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObj,retval) ) 

#define ICPCertificate_AddRef(This,retval)	\
    ( (This)->lpVtbl -> AddRef(This,retval) ) 

#define ICPCertificate_Release(This,retval)	\
    ( (This)->lpVtbl -> Release(This,retval) ) 

#define ICPCertificate_GetTypeInfoCount(This,pctinfo,retval)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo,retval) ) 

#define ICPCertificate_GetTypeInfo(This,itinfo,lcid,pptinfo,retval)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,itinfo,lcid,pptinfo,retval) ) 

#define ICPCertificate_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgdispid,retval)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgdispid,retval) ) 

#define ICPCertificate_Invoke(This,dispidMember,riid,lcid,wFlags,pdispparams,pvarResult,pexcepinfo,puArgErr,retval)	\
    ( (This)->lpVtbl -> Invoke(This,dispidMember,riid,lcid,wFlags,pdispparams,pvarResult,pexcepinfo,puArgErr,retval) ) 

#define ICPCertificate_get_Version(This,retval)	\
    ( (This)->lpVtbl -> get_Version(This,retval) ) 

#define ICPCertificate_get_SerialNumber(This,retval)	\
    ( (This)->lpVtbl -> get_SerialNumber(This,retval) ) 

#define ICPCertificate_get_SubjectName(This,retval)	\
    ( (This)->lpVtbl -> get_SubjectName(This,retval) ) 

#define ICPCertificate_get_IssuerName(This,retval)	\
    ( (This)->lpVtbl -> get_IssuerName(This,retval) ) 

#define ICPCertificate_get_ValidFromDate(This,retval)	\
    ( (This)->lpVtbl -> get_ValidFromDate(This,retval) ) 

#define ICPCertificate_get_ValidToDate(This,retval)	\
    ( (This)->lpVtbl -> get_ValidToDate(This,retval) ) 

#define ICPCertificate_get_Thumbprint(This,retval)	\
    ( (This)->lpVtbl -> get_Thumbprint(This,retval) ) 

#define ICPCertificate_HasPrivateKey(This,retval)	\
    ( (This)->lpVtbl -> HasPrivateKey(This,retval) ) 

#define ICPCertificate_GetInfo(This,InfoType,retval)	\
    ( (This)->lpVtbl -> GetInfo(This,InfoType,retval) ) 

#define ICPCertificate_IsValid(This,retval)	\
    ( (This)->lpVtbl -> IsValid(This,retval) ) 

#define ICPCertificate_KeyUsage(This,retval)	\
    ( (This)->lpVtbl -> KeyUsage(This,retval) ) 

#define ICPCertificate_ExtendedKeyUsage(This,retval)	\
    ( (This)->lpVtbl -> ExtendedKeyUsage(This,retval) ) 

#define ICPCertificate_BasicConstraints(This,retval)	\
    ( (This)->lpVtbl -> BasicConstraints(This,retval) ) 

#define ICPCertificate_Export(This,EncodingType,retval)	\
    ( (This)->lpVtbl -> Export(This,EncodingType,retval) ) 

#define ICPCertificate_Import(This,EncodedCertificate,retval)	\
    ( (This)->lpVtbl -> Import(This,EncodedCertificate,retval) ) 

#define ICPCertificate_Display(This,retval)	\
    ( (This)->lpVtbl -> Display(This,retval) ) 

#define ICPCertificate_get_Archived(This,retval)	\
    ( (This)->lpVtbl -> get_Archived(This,retval) ) 

#define ICPCertificate_put_Archived(This,noname,retval)	\
    ( (This)->lpVtbl -> put_Archived(This,noname,retval) ) 

#define ICPCertificate_Template(This,retval)	\
    ( (This)->lpVtbl -> Template(This,retval) ) 

#define ICPCertificate_PublicKey(This,retval)	\
    ( (This)->lpVtbl -> PublicKey(This,retval) ) 

#define ICPCertificate_get_PrivateKey(This,retval)	\
    ( (This)->lpVtbl -> get_PrivateKey(This,retval) ) 

#define ICPCertificate_put_PrivateKey(This,noname,retval)	\
    ( (This)->lpVtbl -> put_PrivateKey(This,noname,retval) ) 

#define ICPCertificate_Extensions(This,retval)	\
    ( (This)->lpVtbl -> Extensions(This,retval) ) 

#define ICPCertificate_ExtendedProperties(This,retval)	\
    ( (This)->lpVtbl -> ExtendedProperties(This,retval) ) 

#define ICPCertificate_Load(This,FileName,Password,KeyStorageFlag,KeyLocation,retval)	\
    ( (This)->lpVtbl -> Load(This,FileName,Password,KeyStorageFlag,KeyLocation,retval) ) 

#define ICPCertificate_Save(This,FileName,Password,SaveAs,IncludeOption,retval)	\
    ( (This)->lpVtbl -> Save(This,FileName,Password,SaveAs,IncludeOption,retval) ) 


#define ICPCertificate_FindPrivateKey(This,varCriteria)	\
    ( (This)->lpVtbl -> FindPrivateKey(This,varCriteria) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICPCertificate_INTERFACE_DEFINED__ */


#ifndef __ICPStore_INTERFACE_DEFINED__
#define __ICPStore_INTERFACE_DEFINED__

/* interface ICPStore */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ICPStore;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("4552F41D-0C10-4C60-90FB-0D33709575CE")
    ICPStore : public IStore3
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AddCRL( 
            /* [in] */ ICPCRL *pCRL) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICPStoreVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IStore3, QueryInterface)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICPStore * This,
            /* [in][idldescattr] */ struct GUID *riid,
            /* [out][idldescattr] */ void **ppvObj,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(IStore3, AddRef)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *AddRef )( 
            ICPStore * This,
            /* [retval][out] */ unsigned long *retval);
        
        DECLSPEC_XFGVIRT(IStore3, Release)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *Release )( 
            ICPStore * This,
            /* [retval][out] */ unsigned long *retval);
        
        DECLSPEC_XFGVIRT(IStore3, GetTypeInfoCount)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ICPStore * This,
            /* [out][idldescattr] */ unsigned UINT *pctinfo,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(IStore3, GetTypeInfo)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ICPStore * This,
            /* [in][idldescattr] */ unsigned UINT itinfo,
            /* [in][idldescattr] */ unsigned long lcid,
            /* [out][idldescattr] */ void **pptinfo,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(IStore3, GetIDsOfNames)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ICPStore * This,
            /* [in][idldescattr] */ struct GUID *riid,
            /* [in][idldescattr] */ signed char **rgszNames,
            /* [in][idldescattr] */ unsigned UINT cNames,
            /* [in][idldescattr] */ unsigned long lcid,
            /* [out][idldescattr] */ signed long *rgdispid,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(IStore3, Invoke)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICPStore * This,
            /* [in][idldescattr] */ signed long dispidMember,
            /* [in][idldescattr] */ struct GUID *riid,
            /* [in][idldescattr] */ unsigned long lcid,
            /* [in][idldescattr] */ unsigned short wFlags,
            /* [in][idldescattr] */ struct DISPPARAMS *pdispparams,
            /* [out][idldescattr] */ VARIANT *pvarResult,
            /* [out][idldescattr] */ struct EXCEPINFO *pexcepinfo,
            /* [out][idldescattr] */ unsigned UINT *puArgErr,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(IStore3, get_Certificates)
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_Certificates )( 
            ICPStore * This,
            /* [retval][out] */ ICertificates **retval);
        
        DECLSPEC_XFGVIRT(IStore3, Open)
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *Open )( 
            ICPStore * This,
            /* [in][idldescattr] */ CAPICOM_STORE_LOCATION StoreLocation,
            /* [in][idldescattr] */ BSTR StoreName,
            /* [in][idldescattr] */ CAPICOM_STORE_OPEN_MODE OpenMode,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(IStore3, Add)
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *Add )( 
            ICPStore * This,
            /* [in][idldescattr] */ ICertificate *pVal,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(IStore3, Remove)
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *Remove )( 
            ICPStore * This,
            /* [in][idldescattr] */ ICertificate *pVal,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(IStore3, Export)
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *Export )( 
            ICPStore * This,
            /* [in][idldescattr] */ CAPICOM_STORE_SAVE_AS_TYPE SaveAs,
            /* [in][idldescattr] */ CAPICOM_ENCODING_TYPE EncodingType,
            /* [retval][out] */ BSTR *retval);
        
        DECLSPEC_XFGVIRT(IStore3, Import)
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *Import )( 
            ICPStore * This,
            /* [in][idldescattr] */ BSTR EncodedStore,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(IStore3, Load)
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *Load )( 
            ICPStore * This,
            /* [in][idldescattr] */ BSTR FileName,
            /* [in][idldescattr] */ BSTR Password,
            /* [in][idldescattr] */ CAPICOM_KEY_STORAGE_FLAG KeyStorageFlag,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(IStore3, get_Name)
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            ICPStore * This,
            /* [retval][out] */ BSTR *retval);
        
        DECLSPEC_XFGVIRT(IStore3, get_Location)
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_Location )( 
            ICPStore * This,
            /* [retval][out] */ CAPICOM_STORE_LOCATION *retval);
        
        DECLSPEC_XFGVIRT(IStore3, Delete)
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *Delete )( 
            ICPStore * This,
            /* [retval][out] */ BOOLEAN *retval);
        
        DECLSPEC_XFGVIRT(IStore3, Close)
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *Close )( 
            ICPStore * This,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(ICPStore, AddCRL)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AddCRL )( 
            ICPStore * This,
            /* [in] */ ICPCRL *pCRL);
        
        END_INTERFACE
    } ICPStoreVtbl;

    interface ICPStore
    {
        CONST_VTBL struct ICPStoreVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICPStore_QueryInterface(This,riid,ppvObj,retval)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObj,retval) ) 

#define ICPStore_AddRef(This,retval)	\
    ( (This)->lpVtbl -> AddRef(This,retval) ) 

#define ICPStore_Release(This,retval)	\
    ( (This)->lpVtbl -> Release(This,retval) ) 

#define ICPStore_GetTypeInfoCount(This,pctinfo,retval)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo,retval) ) 

#define ICPStore_GetTypeInfo(This,itinfo,lcid,pptinfo,retval)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,itinfo,lcid,pptinfo,retval) ) 

#define ICPStore_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgdispid,retval)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgdispid,retval) ) 

#define ICPStore_Invoke(This,dispidMember,riid,lcid,wFlags,pdispparams,pvarResult,pexcepinfo,puArgErr,retval)	\
    ( (This)->lpVtbl -> Invoke(This,dispidMember,riid,lcid,wFlags,pdispparams,pvarResult,pexcepinfo,puArgErr,retval) ) 

#define ICPStore_get_Certificates(This,retval)	\
    ( (This)->lpVtbl -> get_Certificates(This,retval) ) 

#define ICPStore_Open(This,StoreLocation,StoreName,OpenMode,retval)	\
    ( (This)->lpVtbl -> Open(This,StoreLocation,StoreName,OpenMode,retval) ) 

#define ICPStore_Add(This,pVal,retval)	\
    ( (This)->lpVtbl -> Add(This,pVal,retval) ) 

#define ICPStore_Remove(This,pVal,retval)	\
    ( (This)->lpVtbl -> Remove(This,pVal,retval) ) 

#define ICPStore_Export(This,SaveAs,EncodingType,retval)	\
    ( (This)->lpVtbl -> Export(This,SaveAs,EncodingType,retval) ) 

#define ICPStore_Import(This,EncodedStore,retval)	\
    ( (This)->lpVtbl -> Import(This,EncodedStore,retval) ) 

#define ICPStore_Load(This,FileName,Password,KeyStorageFlag,retval)	\
    ( (This)->lpVtbl -> Load(This,FileName,Password,KeyStorageFlag,retval) ) 

#define ICPStore_get_Name(This,retval)	\
    ( (This)->lpVtbl -> get_Name(This,retval) ) 

#define ICPStore_get_Location(This,retval)	\
    ( (This)->lpVtbl -> get_Location(This,retval) ) 

#define ICPStore_Delete(This,retval)	\
    ( (This)->lpVtbl -> Delete(This,retval) ) 

#define ICPStore_Close(This,retval)	\
    ( (This)->lpVtbl -> Close(This,retval) ) 


#define ICPStore_AddCRL(This,pCRL)	\
    ( (This)->lpVtbl -> AddCRL(This,pCRL) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICPStore_INTERFACE_DEFINED__ */


#ifndef __ICPX509CertificateRequestPkcs10_INTERFACE_DEFINED__
#define __ICPX509CertificateRequestPkcs10_INTERFACE_DEFINED__

/* interface ICPX509CertificateRequestPkcs10 */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ICPX509CertificateRequestPkcs10;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("4552F41D-0C10-4C60-90FB-0D33709575CF")
    ICPX509CertificateRequestPkcs10 : public IX509CertificateRequestPkcs10
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_NameValuePairs( 
            /* [retval][out] */ /* external definition not present */ IX509NameValuePairs **ppValue) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICPX509CertificateRequestPkcs10Vtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IX509CertificateRequestPkcs10, QueryInterface)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICPX509CertificateRequestPkcs10 * This,
            /* [in][idldescattr] */ struct GUID *riid,
            /* [out][idldescattr] */ void **ppvObj,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(IX509CertificateRequestPkcs10, AddRef)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *AddRef )( 
            ICPX509CertificateRequestPkcs10 * This,
            /* [retval][out] */ unsigned long *retval);
        
        DECLSPEC_XFGVIRT(IX509CertificateRequestPkcs10, Release)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *Release )( 
            ICPX509CertificateRequestPkcs10 * This,
            /* [retval][out] */ unsigned long *retval);
        
        DECLSPEC_XFGVIRT(IX509CertificateRequestPkcs10, GetTypeInfoCount)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ICPX509CertificateRequestPkcs10 * This,
            /* [out][idldescattr] */ unsigned UINT *pctinfo,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(IX509CertificateRequestPkcs10, GetTypeInfo)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ICPX509CertificateRequestPkcs10 * This,
            /* [in][idldescattr] */ unsigned UINT itinfo,
            /* [in][idldescattr] */ unsigned long lcid,
            /* [out][idldescattr] */ void **pptinfo,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(IX509CertificateRequestPkcs10, GetIDsOfNames)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ICPX509CertificateRequestPkcs10 * This,
            /* [in][idldescattr] */ struct GUID *riid,
            /* [in][idldescattr] */ signed char **rgszNames,
            /* [in][idldescattr] */ unsigned UINT cNames,
            /* [in][idldescattr] */ unsigned long lcid,
            /* [out][idldescattr] */ signed long *rgdispid,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(IX509CertificateRequestPkcs10, Invoke)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICPX509CertificateRequestPkcs10 * This,
            /* [in][idldescattr] */ signed long dispidMember,
            /* [in][idldescattr] */ struct GUID *riid,
            /* [in][idldescattr] */ unsigned long lcid,
            /* [in][idldescattr] */ unsigned short wFlags,
            /* [in][idldescattr] */ struct DISPPARAMS *pdispparams,
            /* [out][idldescattr] */ VARIANT *pvarResult,
            /* [out][idldescattr] */ struct EXCEPINFO *pexcepinfo,
            /* [out][idldescattr] */ unsigned UINT *puArgErr,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(IX509CertificateRequestPkcs10, Initialize)
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            ICPX509CertificateRequestPkcs10 * This,
            /* [in][idldescattr] */ enum X509CertificateEnrollmentContext Context,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(IX509CertificateRequestPkcs10, Encode)
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *Encode )( 
            ICPX509CertificateRequestPkcs10 * This,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(IX509CertificateRequestPkcs10, ResetForEncode)
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *ResetForEncode )( 
            ICPX509CertificateRequestPkcs10 * This,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(IX509CertificateRequestPkcs10, GetInnerRequest)
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *GetInnerRequest )( 
            ICPX509CertificateRequestPkcs10 * This,
            /* [in][idldescattr] */ enum InnerRequestLevel Level,
            /* [retval][out] */ IX509CertificateRequest **retval);
        
        DECLSPEC_XFGVIRT(IX509CertificateRequestPkcs10, get_Type)
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            ICPX509CertificateRequestPkcs10 * This,
            /* [retval][out] */ enum X509RequestType *retval);
        
        DECLSPEC_XFGVIRT(IX509CertificateRequestPkcs10, get_EnrollmentContext)
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_EnrollmentContext )( 
            ICPX509CertificateRequestPkcs10 * This,
            /* [retval][out] */ enum X509CertificateEnrollmentContext *retval);
        
        DECLSPEC_XFGVIRT(IX509CertificateRequestPkcs10, get_Silent)
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_Silent )( 
            ICPX509CertificateRequestPkcs10 * This,
            /* [retval][out] */ BOOLEAN *retval);
        
        DECLSPEC_XFGVIRT(IX509CertificateRequestPkcs10, put_Silent)
        /* [id][propput][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *put_Silent )( 
            ICPX509CertificateRequestPkcs10 * This,
            /* [in][idldescattr] */ BOOLEAN noname,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(IX509CertificateRequestPkcs10, get_ParentWindow)
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_ParentWindow )( 
            ICPX509CertificateRequestPkcs10 * This,
            /* [retval][out] */ signed long *retval);
        
        DECLSPEC_XFGVIRT(IX509CertificateRequestPkcs10, put_ParentWindow)
        /* [id][propput][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *put_ParentWindow )( 
            ICPX509CertificateRequestPkcs10 * This,
            /* [in][idldescattr] */ signed long noname,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(IX509CertificateRequestPkcs10, get_UIContextMessage)
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_UIContextMessage )( 
            ICPX509CertificateRequestPkcs10 * This,
            /* [retval][out] */ BSTR *retval);
        
        DECLSPEC_XFGVIRT(IX509CertificateRequestPkcs10, put_UIContextMessage)
        /* [id][propput][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *put_UIContextMessage )( 
            ICPX509CertificateRequestPkcs10 * This,
            /* [in][idldescattr] */ BSTR noname,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(IX509CertificateRequestPkcs10, get_SuppressDefaults)
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_SuppressDefaults )( 
            ICPX509CertificateRequestPkcs10 * This,
            /* [retval][out] */ BOOLEAN *retval);
        
        DECLSPEC_XFGVIRT(IX509CertificateRequestPkcs10, put_SuppressDefaults)
        /* [id][propput][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *put_SuppressDefaults )( 
            ICPX509CertificateRequestPkcs10 * This,
            /* [in][idldescattr] */ BOOLEAN noname,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(IX509CertificateRequestPkcs10, get_RenewalCertificate)
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_RenewalCertificate )( 
            ICPX509CertificateRequestPkcs10 * This,
            /* [in][idldescattr] */ enum EncodingType Encoding,
            /* [retval][out] */ BSTR *retval);
        
        DECLSPEC_XFGVIRT(IX509CertificateRequestPkcs10, put_RenewalCertificate)
        /* [id][propput][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *put_RenewalCertificate )( 
            ICPX509CertificateRequestPkcs10 * This,
            /* [in][idldescattr] */ enum EncodingType Encoding,
            /* [in][idldescattr] */ BSTR noname,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(IX509CertificateRequestPkcs10, get_ClientId)
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_ClientId )( 
            ICPX509CertificateRequestPkcs10 * This,
            /* [retval][out] */ enum RequestClientInfoClientId *retval);
        
        DECLSPEC_XFGVIRT(IX509CertificateRequestPkcs10, put_ClientId)
        /* [id][propput][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *put_ClientId )( 
            ICPX509CertificateRequestPkcs10 * This,
            /* [in][idldescattr] */ enum RequestClientInfoClientId noname,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(IX509CertificateRequestPkcs10, get_CspInformations)
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_CspInformations )( 
            ICPX509CertificateRequestPkcs10 * This,
            /* [retval][out] */ ICspInformations **retval);
        
        DECLSPEC_XFGVIRT(IX509CertificateRequestPkcs10, put_CspInformations)
        /* [id][propput][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *put_CspInformations )( 
            ICPX509CertificateRequestPkcs10 * This,
            /* [in][idldescattr] */ ICspInformations *noname,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(IX509CertificateRequestPkcs10, get_HashAlgorithm)
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_HashAlgorithm )( 
            ICPX509CertificateRequestPkcs10 * This,
            /* [retval][out] */ IObjectId **retval);
        
        DECLSPEC_XFGVIRT(IX509CertificateRequestPkcs10, put_HashAlgorithm)
        /* [id][propput][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *put_HashAlgorithm )( 
            ICPX509CertificateRequestPkcs10 * This,
            /* [in][idldescattr] */ IObjectId *noname,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(IX509CertificateRequestPkcs10, get_AlternateSignatureAlgorithm)
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_AlternateSignatureAlgorithm )( 
            ICPX509CertificateRequestPkcs10 * This,
            /* [retval][out] */ BOOLEAN *retval);
        
        DECLSPEC_XFGVIRT(IX509CertificateRequestPkcs10, put_AlternateSignatureAlgorithm)
        /* [id][propput][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *put_AlternateSignatureAlgorithm )( 
            ICPX509CertificateRequestPkcs10 * This,
            /* [in][idldescattr] */ BOOLEAN noname,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(IX509CertificateRequestPkcs10, get_RawData)
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_RawData )( 
            ICPX509CertificateRequestPkcs10 * This,
            /* [in][idldescattr] */ enum EncodingType Encoding,
            /* [retval][out] */ BSTR *retval);
        
        DECLSPEC_XFGVIRT(IX509CertificateRequestPkcs10, InitializeFromTemplateName)
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *InitializeFromTemplateName )( 
            ICPX509CertificateRequestPkcs10 * This,
            /* [in][idldescattr] */ enum X509CertificateEnrollmentContext Context,
            /* [in][idldescattr] */ BSTR strTemplateName,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(IX509CertificateRequestPkcs10, InitializeFromPrivateKey)
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *InitializeFromPrivateKey )( 
            ICPX509CertificateRequestPkcs10 * This,
            /* [in][idldescattr] */ enum X509CertificateEnrollmentContext Context,
            /* [in][idldescattr] */ IX509PrivateKey *pPrivateKey,
            /* [in][idldescattr] */ BSTR strTemplateName,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(IX509CertificateRequestPkcs10, InitializeFromPublicKey)
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *InitializeFromPublicKey )( 
            ICPX509CertificateRequestPkcs10 * This,
            /* [in][idldescattr] */ enum X509CertificateEnrollmentContext Context,
            /* [in][idldescattr] */ IX509PublicKey *pPublicKey,
            /* [in][idldescattr] */ BSTR strTemplateName,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(IX509CertificateRequestPkcs10, InitializeFromCertificate)
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *InitializeFromCertificate )( 
            ICPX509CertificateRequestPkcs10 * This,
            /* [in][idldescattr] */ enum X509CertificateEnrollmentContext Context,
            /* [in][idldescattr] */ BSTR strCertificate,
            /* [in][idldescattr] */ enum EncodingType Encoding,
            /* [in][idldescattr] */ enum X509RequestInheritOptions InheritOptions,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(IX509CertificateRequestPkcs10, InitializeDecode)
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *InitializeDecode )( 
            ICPX509CertificateRequestPkcs10 * This,
            /* [in][idldescattr] */ BSTR strEncodedData,
            /* [in][idldescattr] */ enum EncodingType Encoding,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(IX509CertificateRequestPkcs10, CheckSignature)
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *CheckSignature )( 
            ICPX509CertificateRequestPkcs10 * This,
            /* [in][idldescattr] */ enum Pkcs10AllowedSignatureTypes AllowedSignatureTypes,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(IX509CertificateRequestPkcs10, IsSmartCard)
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *IsSmartCard )( 
            ICPX509CertificateRequestPkcs10 * This,
            /* [retval][out] */ BOOLEAN *retval);
        
        DECLSPEC_XFGVIRT(IX509CertificateRequestPkcs10, get_TemplateObjectId)
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_TemplateObjectId )( 
            ICPX509CertificateRequestPkcs10 * This,
            /* [retval][out] */ IObjectId **retval);
        
        DECLSPEC_XFGVIRT(IX509CertificateRequestPkcs10, get_PublicKey)
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_PublicKey )( 
            ICPX509CertificateRequestPkcs10 * This,
            /* [retval][out] */ IX509PublicKey **retval);
        
        DECLSPEC_XFGVIRT(IX509CertificateRequestPkcs10, get_PrivateKey)
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_PrivateKey )( 
            ICPX509CertificateRequestPkcs10 * This,
            /* [retval][out] */ IX509PrivateKey **retval);
        
        DECLSPEC_XFGVIRT(IX509CertificateRequestPkcs10, get_NullSigned)
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_NullSigned )( 
            ICPX509CertificateRequestPkcs10 * This,
            /* [retval][out] */ BOOLEAN *retval);
        
        DECLSPEC_XFGVIRT(IX509CertificateRequestPkcs10, get_ReuseKey)
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_ReuseKey )( 
            ICPX509CertificateRequestPkcs10 * This,
            /* [retval][out] */ BOOLEAN *retval);
        
        DECLSPEC_XFGVIRT(IX509CertificateRequestPkcs10, get_OldCertificate)
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_OldCertificate )( 
            ICPX509CertificateRequestPkcs10 * This,
            /* [in][idldescattr] */ enum EncodingType Encoding,
            /* [retval][out] */ BSTR *retval);
        
        DECLSPEC_XFGVIRT(IX509CertificateRequestPkcs10, get_Subject)
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_Subject )( 
            ICPX509CertificateRequestPkcs10 * This,
            /* [retval][out] */ IX500DistinguishedName **retval);
        
        DECLSPEC_XFGVIRT(IX509CertificateRequestPkcs10, put_Subject)
        /* [id][propput][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *put_Subject )( 
            ICPX509CertificateRequestPkcs10 * This,
            /* [in][idldescattr] */ IX500DistinguishedName *noname,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(IX509CertificateRequestPkcs10, get_CspStatuses)
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_CspStatuses )( 
            ICPX509CertificateRequestPkcs10 * This,
            /* [retval][out] */ ICspStatuses **retval);
        
        DECLSPEC_XFGVIRT(IX509CertificateRequestPkcs10, get_SmimeCapabilities)
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_SmimeCapabilities )( 
            ICPX509CertificateRequestPkcs10 * This,
            /* [retval][out] */ BOOLEAN *retval);
        
        DECLSPEC_XFGVIRT(IX509CertificateRequestPkcs10, put_SmimeCapabilities)
        /* [id][propput][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *put_SmimeCapabilities )( 
            ICPX509CertificateRequestPkcs10 * This,
            /* [in][idldescattr] */ BOOLEAN noname,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(IX509CertificateRequestPkcs10, get_SignatureInformation)
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_SignatureInformation )( 
            ICPX509CertificateRequestPkcs10 * This,
            /* [retval][out] */ IX509SignatureInformation **retval);
        
        DECLSPEC_XFGVIRT(IX509CertificateRequestPkcs10, get_KeyContainerNamePrefix)
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_KeyContainerNamePrefix )( 
            ICPX509CertificateRequestPkcs10 * This,
            /* [retval][out] */ BSTR *retval);
        
        DECLSPEC_XFGVIRT(IX509CertificateRequestPkcs10, put_KeyContainerNamePrefix)
        /* [id][propput][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *put_KeyContainerNamePrefix )( 
            ICPX509CertificateRequestPkcs10 * This,
            /* [in][idldescattr] */ BSTR noname,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(IX509CertificateRequestPkcs10, get_CryptAttributes)
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_CryptAttributes )( 
            ICPX509CertificateRequestPkcs10 * This,
            /* [retval][out] */ ICryptAttributes **retval);
        
        DECLSPEC_XFGVIRT(IX509CertificateRequestPkcs10, get_X509Extensions)
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_X509Extensions )( 
            ICPX509CertificateRequestPkcs10 * This,
            /* [retval][out] */ IX509Extensions **retval);
        
        DECLSPEC_XFGVIRT(IX509CertificateRequestPkcs10, get_CriticalExtensions)
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_CriticalExtensions )( 
            ICPX509CertificateRequestPkcs10 * This,
            /* [retval][out] */ IObjectIds **retval);
        
        DECLSPEC_XFGVIRT(IX509CertificateRequestPkcs10, get_SuppressOids)
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_SuppressOids )( 
            ICPX509CertificateRequestPkcs10 * This,
            /* [retval][out] */ IObjectIds **retval);
        
        DECLSPEC_XFGVIRT(IX509CertificateRequestPkcs10, get_RawDataToBeSigned)
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_RawDataToBeSigned )( 
            ICPX509CertificateRequestPkcs10 * This,
            /* [in][idldescattr] */ enum EncodingType Encoding,
            /* [retval][out] */ BSTR *retval);
        
        DECLSPEC_XFGVIRT(IX509CertificateRequestPkcs10, get_Signature)
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_Signature )( 
            ICPX509CertificateRequestPkcs10 * This,
            /* [in][idldescattr] */ enum EncodingType Encoding,
            /* [retval][out] */ BSTR *retval);
        
        DECLSPEC_XFGVIRT(IX509CertificateRequestPkcs10, GetCspStatuses)
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *GetCspStatuses )( 
            ICPX509CertificateRequestPkcs10 * This,
            /* [in][idldescattr] */ enum X509KeySpec KeySpec,
            /* [retval][out] */ ICspStatuses **retval);
        
        DECLSPEC_XFGVIRT(ICPX509CertificateRequestPkcs10, get_NameValuePairs)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_NameValuePairs )( 
            ICPX509CertificateRequestPkcs10 * This,
            /* [retval][out] */ /* external definition not present */ IX509NameValuePairs **ppValue);
        
        END_INTERFACE
    } ICPX509CertificateRequestPkcs10Vtbl;

    interface ICPX509CertificateRequestPkcs10
    {
        CONST_VTBL struct ICPX509CertificateRequestPkcs10Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICPX509CertificateRequestPkcs10_QueryInterface(This,riid,ppvObj,retval)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObj,retval) ) 

#define ICPX509CertificateRequestPkcs10_AddRef(This,retval)	\
    ( (This)->lpVtbl -> AddRef(This,retval) ) 

#define ICPX509CertificateRequestPkcs10_Release(This,retval)	\
    ( (This)->lpVtbl -> Release(This,retval) ) 

#define ICPX509CertificateRequestPkcs10_GetTypeInfoCount(This,pctinfo,retval)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo,retval) ) 

#define ICPX509CertificateRequestPkcs10_GetTypeInfo(This,itinfo,lcid,pptinfo,retval)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,itinfo,lcid,pptinfo,retval) ) 

#define ICPX509CertificateRequestPkcs10_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgdispid,retval)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgdispid,retval) ) 

#define ICPX509CertificateRequestPkcs10_Invoke(This,dispidMember,riid,lcid,wFlags,pdispparams,pvarResult,pexcepinfo,puArgErr,retval)	\
    ( (This)->lpVtbl -> Invoke(This,dispidMember,riid,lcid,wFlags,pdispparams,pvarResult,pexcepinfo,puArgErr,retval) ) 

#define ICPX509CertificateRequestPkcs10_Initialize(This,Context,retval)	\
    ( (This)->lpVtbl -> Initialize(This,Context,retval) ) 

#define ICPX509CertificateRequestPkcs10_Encode(This,retval)	\
    ( (This)->lpVtbl -> Encode(This,retval) ) 

#define ICPX509CertificateRequestPkcs10_ResetForEncode(This,retval)	\
    ( (This)->lpVtbl -> ResetForEncode(This,retval) ) 

#define ICPX509CertificateRequestPkcs10_GetInnerRequest(This,Level,retval)	\
    ( (This)->lpVtbl -> GetInnerRequest(This,Level,retval) ) 

#define ICPX509CertificateRequestPkcs10_get_Type(This,retval)	\
    ( (This)->lpVtbl -> get_Type(This,retval) ) 

#define ICPX509CertificateRequestPkcs10_get_EnrollmentContext(This,retval)	\
    ( (This)->lpVtbl -> get_EnrollmentContext(This,retval) ) 

#define ICPX509CertificateRequestPkcs10_get_Silent(This,retval)	\
    ( (This)->lpVtbl -> get_Silent(This,retval) ) 

#define ICPX509CertificateRequestPkcs10_put_Silent(This,noname,retval)	\
    ( (This)->lpVtbl -> put_Silent(This,noname,retval) ) 

#define ICPX509CertificateRequestPkcs10_get_ParentWindow(This,retval)	\
    ( (This)->lpVtbl -> get_ParentWindow(This,retval) ) 

#define ICPX509CertificateRequestPkcs10_put_ParentWindow(This,noname,retval)	\
    ( (This)->lpVtbl -> put_ParentWindow(This,noname,retval) ) 

#define ICPX509CertificateRequestPkcs10_get_UIContextMessage(This,retval)	\
    ( (This)->lpVtbl -> get_UIContextMessage(This,retval) ) 

#define ICPX509CertificateRequestPkcs10_put_UIContextMessage(This,noname,retval)	\
    ( (This)->lpVtbl -> put_UIContextMessage(This,noname,retval) ) 

#define ICPX509CertificateRequestPkcs10_get_SuppressDefaults(This,retval)	\
    ( (This)->lpVtbl -> get_SuppressDefaults(This,retval) ) 

#define ICPX509CertificateRequestPkcs10_put_SuppressDefaults(This,noname,retval)	\
    ( (This)->lpVtbl -> put_SuppressDefaults(This,noname,retval) ) 

#define ICPX509CertificateRequestPkcs10_get_RenewalCertificate(This,Encoding,retval)	\
    ( (This)->lpVtbl -> get_RenewalCertificate(This,Encoding,retval) ) 

#define ICPX509CertificateRequestPkcs10_put_RenewalCertificate(This,Encoding,noname,retval)	\
    ( (This)->lpVtbl -> put_RenewalCertificate(This,Encoding,noname,retval) ) 

#define ICPX509CertificateRequestPkcs10_get_ClientId(This,retval)	\
    ( (This)->lpVtbl -> get_ClientId(This,retval) ) 

#define ICPX509CertificateRequestPkcs10_put_ClientId(This,noname,retval)	\
    ( (This)->lpVtbl -> put_ClientId(This,noname,retval) ) 

#define ICPX509CertificateRequestPkcs10_get_CspInformations(This,retval)	\
    ( (This)->lpVtbl -> get_CspInformations(This,retval) ) 

#define ICPX509CertificateRequestPkcs10_put_CspInformations(This,noname,retval)	\
    ( (This)->lpVtbl -> put_CspInformations(This,noname,retval) ) 

#define ICPX509CertificateRequestPkcs10_get_HashAlgorithm(This,retval)	\
    ( (This)->lpVtbl -> get_HashAlgorithm(This,retval) ) 

#define ICPX509CertificateRequestPkcs10_put_HashAlgorithm(This,noname,retval)	\
    ( (This)->lpVtbl -> put_HashAlgorithm(This,noname,retval) ) 

#define ICPX509CertificateRequestPkcs10_get_AlternateSignatureAlgorithm(This,retval)	\
    ( (This)->lpVtbl -> get_AlternateSignatureAlgorithm(This,retval) ) 

#define ICPX509CertificateRequestPkcs10_put_AlternateSignatureAlgorithm(This,noname,retval)	\
    ( (This)->lpVtbl -> put_AlternateSignatureAlgorithm(This,noname,retval) ) 

#define ICPX509CertificateRequestPkcs10_get_RawData(This,Encoding,retval)	\
    ( (This)->lpVtbl -> get_RawData(This,Encoding,retval) ) 

#define ICPX509CertificateRequestPkcs10_InitializeFromTemplateName(This,Context,strTemplateName,retval)	\
    ( (This)->lpVtbl -> InitializeFromTemplateName(This,Context,strTemplateName,retval) ) 

#define ICPX509CertificateRequestPkcs10_InitializeFromPrivateKey(This,Context,pPrivateKey,strTemplateName,retval)	\
    ( (This)->lpVtbl -> InitializeFromPrivateKey(This,Context,pPrivateKey,strTemplateName,retval) ) 

#define ICPX509CertificateRequestPkcs10_InitializeFromPublicKey(This,Context,pPublicKey,strTemplateName,retval)	\
    ( (This)->lpVtbl -> InitializeFromPublicKey(This,Context,pPublicKey,strTemplateName,retval) ) 

#define ICPX509CertificateRequestPkcs10_InitializeFromCertificate(This,Context,strCertificate,Encoding,InheritOptions,retval)	\
    ( (This)->lpVtbl -> InitializeFromCertificate(This,Context,strCertificate,Encoding,InheritOptions,retval) ) 

#define ICPX509CertificateRequestPkcs10_InitializeDecode(This,strEncodedData,Encoding,retval)	\
    ( (This)->lpVtbl -> InitializeDecode(This,strEncodedData,Encoding,retval) ) 

#define ICPX509CertificateRequestPkcs10_CheckSignature(This,AllowedSignatureTypes,retval)	\
    ( (This)->lpVtbl -> CheckSignature(This,AllowedSignatureTypes,retval) ) 

#define ICPX509CertificateRequestPkcs10_IsSmartCard(This,retval)	\
    ( (This)->lpVtbl -> IsSmartCard(This,retval) ) 

#define ICPX509CertificateRequestPkcs10_get_TemplateObjectId(This,retval)	\
    ( (This)->lpVtbl -> get_TemplateObjectId(This,retval) ) 

#define ICPX509CertificateRequestPkcs10_get_PublicKey(This,retval)	\
    ( (This)->lpVtbl -> get_PublicKey(This,retval) ) 

#define ICPX509CertificateRequestPkcs10_get_PrivateKey(This,retval)	\
    ( (This)->lpVtbl -> get_PrivateKey(This,retval) ) 

#define ICPX509CertificateRequestPkcs10_get_NullSigned(This,retval)	\
    ( (This)->lpVtbl -> get_NullSigned(This,retval) ) 

#define ICPX509CertificateRequestPkcs10_get_ReuseKey(This,retval)	\
    ( (This)->lpVtbl -> get_ReuseKey(This,retval) ) 

#define ICPX509CertificateRequestPkcs10_get_OldCertificate(This,Encoding,retval)	\
    ( (This)->lpVtbl -> get_OldCertificate(This,Encoding,retval) ) 

#define ICPX509CertificateRequestPkcs10_get_Subject(This,retval)	\
    ( (This)->lpVtbl -> get_Subject(This,retval) ) 

#define ICPX509CertificateRequestPkcs10_put_Subject(This,noname,retval)	\
    ( (This)->lpVtbl -> put_Subject(This,noname,retval) ) 

#define ICPX509CertificateRequestPkcs10_get_CspStatuses(This,retval)	\
    ( (This)->lpVtbl -> get_CspStatuses(This,retval) ) 

#define ICPX509CertificateRequestPkcs10_get_SmimeCapabilities(This,retval)	\
    ( (This)->lpVtbl -> get_SmimeCapabilities(This,retval) ) 

#define ICPX509CertificateRequestPkcs10_put_SmimeCapabilities(This,noname,retval)	\
    ( (This)->lpVtbl -> put_SmimeCapabilities(This,noname,retval) ) 

#define ICPX509CertificateRequestPkcs10_get_SignatureInformation(This,retval)	\
    ( (This)->lpVtbl -> get_SignatureInformation(This,retval) ) 

#define ICPX509CertificateRequestPkcs10_get_KeyContainerNamePrefix(This,retval)	\
    ( (This)->lpVtbl -> get_KeyContainerNamePrefix(This,retval) ) 

#define ICPX509CertificateRequestPkcs10_put_KeyContainerNamePrefix(This,noname,retval)	\
    ( (This)->lpVtbl -> put_KeyContainerNamePrefix(This,noname,retval) ) 

#define ICPX509CertificateRequestPkcs10_get_CryptAttributes(This,retval)	\
    ( (This)->lpVtbl -> get_CryptAttributes(This,retval) ) 

#define ICPX509CertificateRequestPkcs10_get_X509Extensions(This,retval)	\
    ( (This)->lpVtbl -> get_X509Extensions(This,retval) ) 

#define ICPX509CertificateRequestPkcs10_get_CriticalExtensions(This,retval)	\
    ( (This)->lpVtbl -> get_CriticalExtensions(This,retval) ) 

#define ICPX509CertificateRequestPkcs10_get_SuppressOids(This,retval)	\
    ( (This)->lpVtbl -> get_SuppressOids(This,retval) ) 

#define ICPX509CertificateRequestPkcs10_get_RawDataToBeSigned(This,Encoding,retval)	\
    ( (This)->lpVtbl -> get_RawDataToBeSigned(This,Encoding,retval) ) 

#define ICPX509CertificateRequestPkcs10_get_Signature(This,Encoding,retval)	\
    ( (This)->lpVtbl -> get_Signature(This,Encoding,retval) ) 

#define ICPX509CertificateRequestPkcs10_GetCspStatuses(This,KeySpec,retval)	\
    ( (This)->lpVtbl -> GetCspStatuses(This,KeySpec,retval) ) 


#define ICPX509CertificateRequestPkcs10_get_NameValuePairs(This,ppValue)	\
    ( (This)->lpVtbl -> get_NameValuePairs(This,ppValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICPX509CertificateRequestPkcs10_INTERFACE_DEFINED__ */


#ifndef __ICPX509Enrollment_INTERFACE_DEFINED__
#define __ICPX509Enrollment_INTERFACE_DEFINED__

/* interface ICPX509Enrollment */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ICPX509Enrollment;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("4552F41D-0C10-4C60-90FB-0D33709575D0")
    ICPX509Enrollment : public IX509Enrollment
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ForceReaderDialog( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ForceReaderDialog( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICPX509EnrollmentVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IX509Enrollment, QueryInterface)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICPX509Enrollment * This,
            /* [in][idldescattr] */ struct GUID *riid,
            /* [out][idldescattr] */ void **ppvObj,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(IX509Enrollment, AddRef)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *AddRef )( 
            ICPX509Enrollment * This,
            /* [retval][out] */ unsigned long *retval);
        
        DECLSPEC_XFGVIRT(IX509Enrollment, Release)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *Release )( 
            ICPX509Enrollment * This,
            /* [retval][out] */ unsigned long *retval);
        
        DECLSPEC_XFGVIRT(IX509Enrollment, GetTypeInfoCount)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ICPX509Enrollment * This,
            /* [out][idldescattr] */ unsigned UINT *pctinfo,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(IX509Enrollment, GetTypeInfo)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ICPX509Enrollment * This,
            /* [in][idldescattr] */ unsigned UINT itinfo,
            /* [in][idldescattr] */ unsigned long lcid,
            /* [out][idldescattr] */ void **pptinfo,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(IX509Enrollment, GetIDsOfNames)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ICPX509Enrollment * This,
            /* [in][idldescattr] */ struct GUID *riid,
            /* [in][idldescattr] */ signed char **rgszNames,
            /* [in][idldescattr] */ unsigned UINT cNames,
            /* [in][idldescattr] */ unsigned long lcid,
            /* [out][idldescattr] */ signed long *rgdispid,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(IX509Enrollment, Invoke)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICPX509Enrollment * This,
            /* [in][idldescattr] */ signed long dispidMember,
            /* [in][idldescattr] */ struct GUID *riid,
            /* [in][idldescattr] */ unsigned long lcid,
            /* [in][idldescattr] */ unsigned short wFlags,
            /* [in][idldescattr] */ struct DISPPARAMS *pdispparams,
            /* [out][idldescattr] */ VARIANT *pvarResult,
            /* [out][idldescattr] */ struct EXCEPINFO *pexcepinfo,
            /* [out][idldescattr] */ unsigned UINT *puArgErr,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(IX509Enrollment, Initialize)
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            ICPX509Enrollment * This,
            /* [in][idldescattr] */ enum X509CertificateEnrollmentContext Context,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(IX509Enrollment, InitializeFromTemplateName)
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *InitializeFromTemplateName )( 
            ICPX509Enrollment * This,
            /* [in][idldescattr] */ enum X509CertificateEnrollmentContext Context,
            /* [in][idldescattr] */ BSTR strTemplateName,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(IX509Enrollment, InitializeFromRequest)
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *InitializeFromRequest )( 
            ICPX509Enrollment * This,
            /* [in][idldescattr] */ IX509CertificateRequest *pRequest,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(IX509Enrollment, CreateRequest)
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *CreateRequest )( 
            ICPX509Enrollment * This,
            /* [in][idldescattr] */ enum EncodingType Encoding,
            /* [retval][out] */ BSTR *retval);
        
        DECLSPEC_XFGVIRT(IX509Enrollment, Enroll)
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *Enroll )( 
            ICPX509Enrollment * This,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(IX509Enrollment, InstallResponse)
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *InstallResponse )( 
            ICPX509Enrollment * This,
            /* [in][idldescattr] */ enum InstallResponseRestrictionFlags Restrictions,
            /* [in][idldescattr] */ BSTR strResponse,
            /* [in][idldescattr] */ enum EncodingType Encoding,
            /* [in][idldescattr] */ BSTR strPassword,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(IX509Enrollment, CreatePFX)
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *CreatePFX )( 
            ICPX509Enrollment * This,
            /* [in][idldescattr] */ BSTR strPassword,
            /* [in][idldescattr] */ enum PFXExportOptions ExportOptions,
            /* [in][idldescattr] */ enum EncodingType Encoding,
            /* [retval][out] */ BSTR *retval);
        
        DECLSPEC_XFGVIRT(IX509Enrollment, get_Request)
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_Request )( 
            ICPX509Enrollment * This,
            /* [retval][out] */ IX509CertificateRequest **retval);
        
        DECLSPEC_XFGVIRT(IX509Enrollment, get_Silent)
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_Silent )( 
            ICPX509Enrollment * This,
            /* [retval][out] */ BOOLEAN *retval);
        
        DECLSPEC_XFGVIRT(IX509Enrollment, put_Silent)
        /* [id][propput][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *put_Silent )( 
            ICPX509Enrollment * This,
            /* [in][idldescattr] */ BOOLEAN noname,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(IX509Enrollment, get_ParentWindow)
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_ParentWindow )( 
            ICPX509Enrollment * This,
            /* [retval][out] */ signed long *retval);
        
        DECLSPEC_XFGVIRT(IX509Enrollment, put_ParentWindow)
        /* [id][propput][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *put_ParentWindow )( 
            ICPX509Enrollment * This,
            /* [in][idldescattr] */ signed long noname,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(IX509Enrollment, get_NameValuePairs)
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_NameValuePairs )( 
            ICPX509Enrollment * This,
            /* [retval][out] */ IX509NameValuePairs **retval);
        
        DECLSPEC_XFGVIRT(IX509Enrollment, get_EnrollmentContext)
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_EnrollmentContext )( 
            ICPX509Enrollment * This,
            /* [retval][out] */ enum X509CertificateEnrollmentContext *retval);
        
        DECLSPEC_XFGVIRT(IX509Enrollment, get_Status)
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_Status )( 
            ICPX509Enrollment * This,
            /* [retval][out] */ IX509EnrollmentStatus **retval);
        
        DECLSPEC_XFGVIRT(IX509Enrollment, get_Certificate)
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_Certificate )( 
            ICPX509Enrollment * This,
            /* [in][idldescattr] */ enum EncodingType Encoding,
            /* [retval][out] */ BSTR *retval);
        
        DECLSPEC_XFGVIRT(IX509Enrollment, get_Response)
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_Response )( 
            ICPX509Enrollment * This,
            /* [in][idldescattr] */ enum EncodingType Encoding,
            /* [retval][out] */ BSTR *retval);
        
        DECLSPEC_XFGVIRT(IX509Enrollment, get_CertificateFriendlyName)
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_CertificateFriendlyName )( 
            ICPX509Enrollment * This,
            /* [retval][out] */ BSTR *retval);
        
        DECLSPEC_XFGVIRT(IX509Enrollment, put_CertificateFriendlyName)
        /* [id][propput][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *put_CertificateFriendlyName )( 
            ICPX509Enrollment * This,
            /* [in][idldescattr] */ BSTR noname,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(IX509Enrollment, get_CertificateDescription)
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_CertificateDescription )( 
            ICPX509Enrollment * This,
            /* [retval][out] */ BSTR *retval);
        
        DECLSPEC_XFGVIRT(IX509Enrollment, put_CertificateDescription)
        /* [id][propput][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *put_CertificateDescription )( 
            ICPX509Enrollment * This,
            /* [in][idldescattr] */ BSTR noname,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(IX509Enrollment, get_RequestId)
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_RequestId )( 
            ICPX509Enrollment * This,
            /* [retval][out] */ signed long *retval);
        
        DECLSPEC_XFGVIRT(IX509Enrollment, get_CAConfigString)
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_CAConfigString )( 
            ICPX509Enrollment * This,
            /* [retval][out] */ BSTR *retval);
        
        DECLSPEC_XFGVIRT(ICPX509Enrollment, get_ForceReaderDialog)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ForceReaderDialog )( 
            ICPX509Enrollment * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        DECLSPEC_XFGVIRT(ICPX509Enrollment, put_ForceReaderDialog)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ForceReaderDialog )( 
            ICPX509Enrollment * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        END_INTERFACE
    } ICPX509EnrollmentVtbl;

    interface ICPX509Enrollment
    {
        CONST_VTBL struct ICPX509EnrollmentVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICPX509Enrollment_QueryInterface(This,riid,ppvObj,retval)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObj,retval) ) 

#define ICPX509Enrollment_AddRef(This,retval)	\
    ( (This)->lpVtbl -> AddRef(This,retval) ) 

#define ICPX509Enrollment_Release(This,retval)	\
    ( (This)->lpVtbl -> Release(This,retval) ) 

#define ICPX509Enrollment_GetTypeInfoCount(This,pctinfo,retval)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo,retval) ) 

#define ICPX509Enrollment_GetTypeInfo(This,itinfo,lcid,pptinfo,retval)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,itinfo,lcid,pptinfo,retval) ) 

#define ICPX509Enrollment_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgdispid,retval)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgdispid,retval) ) 

#define ICPX509Enrollment_Invoke(This,dispidMember,riid,lcid,wFlags,pdispparams,pvarResult,pexcepinfo,puArgErr,retval)	\
    ( (This)->lpVtbl -> Invoke(This,dispidMember,riid,lcid,wFlags,pdispparams,pvarResult,pexcepinfo,puArgErr,retval) ) 

#define ICPX509Enrollment_Initialize(This,Context,retval)	\
    ( (This)->lpVtbl -> Initialize(This,Context,retval) ) 

#define ICPX509Enrollment_InitializeFromTemplateName(This,Context,strTemplateName,retval)	\
    ( (This)->lpVtbl -> InitializeFromTemplateName(This,Context,strTemplateName,retval) ) 

#define ICPX509Enrollment_InitializeFromRequest(This,pRequest,retval)	\
    ( (This)->lpVtbl -> InitializeFromRequest(This,pRequest,retval) ) 

#define ICPX509Enrollment_CreateRequest(This,Encoding,retval)	\
    ( (This)->lpVtbl -> CreateRequest(This,Encoding,retval) ) 

#define ICPX509Enrollment_Enroll(This,retval)	\
    ( (This)->lpVtbl -> Enroll(This,retval) ) 

#define ICPX509Enrollment_InstallResponse(This,Restrictions,strResponse,Encoding,strPassword,retval)	\
    ( (This)->lpVtbl -> InstallResponse(This,Restrictions,strResponse,Encoding,strPassword,retval) ) 

#define ICPX509Enrollment_CreatePFX(This,strPassword,ExportOptions,Encoding,retval)	\
    ( (This)->lpVtbl -> CreatePFX(This,strPassword,ExportOptions,Encoding,retval) ) 

#define ICPX509Enrollment_get_Request(This,retval)	\
    ( (This)->lpVtbl -> get_Request(This,retval) ) 

#define ICPX509Enrollment_get_Silent(This,retval)	\
    ( (This)->lpVtbl -> get_Silent(This,retval) ) 

#define ICPX509Enrollment_put_Silent(This,noname,retval)	\
    ( (This)->lpVtbl -> put_Silent(This,noname,retval) ) 

#define ICPX509Enrollment_get_ParentWindow(This,retval)	\
    ( (This)->lpVtbl -> get_ParentWindow(This,retval) ) 

#define ICPX509Enrollment_put_ParentWindow(This,noname,retval)	\
    ( (This)->lpVtbl -> put_ParentWindow(This,noname,retval) ) 

#define ICPX509Enrollment_get_NameValuePairs(This,retval)	\
    ( (This)->lpVtbl -> get_NameValuePairs(This,retval) ) 

#define ICPX509Enrollment_get_EnrollmentContext(This,retval)	\
    ( (This)->lpVtbl -> get_EnrollmentContext(This,retval) ) 

#define ICPX509Enrollment_get_Status(This,retval)	\
    ( (This)->lpVtbl -> get_Status(This,retval) ) 

#define ICPX509Enrollment_get_Certificate(This,Encoding,retval)	\
    ( (This)->lpVtbl -> get_Certificate(This,Encoding,retval) ) 

#define ICPX509Enrollment_get_Response(This,Encoding,retval)	\
    ( (This)->lpVtbl -> get_Response(This,Encoding,retval) ) 

#define ICPX509Enrollment_get_CertificateFriendlyName(This,retval)	\
    ( (This)->lpVtbl -> get_CertificateFriendlyName(This,retval) ) 

#define ICPX509Enrollment_put_CertificateFriendlyName(This,noname,retval)	\
    ( (This)->lpVtbl -> put_CertificateFriendlyName(This,noname,retval) ) 

#define ICPX509Enrollment_get_CertificateDescription(This,retval)	\
    ( (This)->lpVtbl -> get_CertificateDescription(This,retval) ) 

#define ICPX509Enrollment_put_CertificateDescription(This,noname,retval)	\
    ( (This)->lpVtbl -> put_CertificateDescription(This,noname,retval) ) 

#define ICPX509Enrollment_get_RequestId(This,retval)	\
    ( (This)->lpVtbl -> get_RequestId(This,retval) ) 

#define ICPX509Enrollment_get_CAConfigString(This,retval)	\
    ( (This)->lpVtbl -> get_CAConfigString(This,retval) ) 


#define ICPX509Enrollment_get_ForceReaderDialog(This,pVal)	\
    ( (This)->lpVtbl -> get_ForceReaderDialog(This,pVal) ) 

#define ICPX509Enrollment_put_ForceReaderDialog(This,newVal)	\
    ( (This)->lpVtbl -> put_ForceReaderDialog(This,newVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICPX509Enrollment_INTERFACE_DEFINED__ */


#ifndef __ICPCertificateStatus_INTERFACE_DEFINED__
#define __ICPCertificateStatus_INTERFACE_DEFINED__

/* interface ICPCertificateStatus */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ICPCertificateStatus;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("4552F41D-0C10-4C60-90FB-0D33709575D1")
    ICPCertificateStatus : public ICertificateStatus3
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ErrorStatuses( 
            /* [retval][out] */ ICPErrorStatuses **pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICPCertificateStatusVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(ICertificateStatus3, QueryInterface)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICPCertificateStatus * This,
            /* [in][idldescattr] */ struct GUID *riid,
            /* [out][idldescattr] */ void **ppvObj,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(ICertificateStatus3, AddRef)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *AddRef )( 
            ICPCertificateStatus * This,
            /* [retval][out] */ unsigned long *retval);
        
        DECLSPEC_XFGVIRT(ICertificateStatus3, Release)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *Release )( 
            ICPCertificateStatus * This,
            /* [retval][out] */ unsigned long *retval);
        
        DECLSPEC_XFGVIRT(ICertificateStatus3, GetTypeInfoCount)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ICPCertificateStatus * This,
            /* [out][idldescattr] */ unsigned UINT *pctinfo,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(ICertificateStatus3, GetTypeInfo)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ICPCertificateStatus * This,
            /* [in][idldescattr] */ unsigned UINT itinfo,
            /* [in][idldescattr] */ unsigned long lcid,
            /* [out][idldescattr] */ void **pptinfo,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(ICertificateStatus3, GetIDsOfNames)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ICPCertificateStatus * This,
            /* [in][idldescattr] */ struct GUID *riid,
            /* [in][idldescattr] */ signed char **rgszNames,
            /* [in][idldescattr] */ unsigned UINT cNames,
            /* [in][idldescattr] */ unsigned long lcid,
            /* [out][idldescattr] */ signed long *rgdispid,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(ICertificateStatus3, Invoke)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICPCertificateStatus * This,
            /* [in][idldescattr] */ signed long dispidMember,
            /* [in][idldescattr] */ struct GUID *riid,
            /* [in][idldescattr] */ unsigned long lcid,
            /* [in][idldescattr] */ unsigned short wFlags,
            /* [in][idldescattr] */ struct DISPPARAMS *pdispparams,
            /* [out][idldescattr] */ VARIANT *pvarResult,
            /* [out][idldescattr] */ struct EXCEPINFO *pexcepinfo,
            /* [out][idldescattr] */ unsigned UINT *puArgErr,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(ICertificateStatus3, get_Result)
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_Result )( 
            ICPCertificateStatus * This,
            /* [retval][out] */ BOOLEAN *retval);
        
        DECLSPEC_XFGVIRT(ICertificateStatus3, get_CheckFlag)
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_CheckFlag )( 
            ICPCertificateStatus * This,
            /* [retval][out] */ CAPICOM_CHECK_FLAG *retval);
        
        DECLSPEC_XFGVIRT(ICertificateStatus3, put_CheckFlag)
        /* [id][propput][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *put_CheckFlag )( 
            ICPCertificateStatus * This,
            /* [in][idldescattr] */ CAPICOM_CHECK_FLAG noname,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(ICertificateStatus3, EKU)
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *EKU )( 
            ICPCertificateStatus * This,
            /* [retval][out] */ IEKU **retval);
        
        DECLSPEC_XFGVIRT(ICertificateStatus3, get_VerificationTime)
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_VerificationTime )( 
            ICPCertificateStatus * This,
            /* [retval][out] */ DATE *retval);
        
        DECLSPEC_XFGVIRT(ICertificateStatus3, put_VerificationTime)
        /* [id][propput][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *put_VerificationTime )( 
            ICPCertificateStatus * This,
            /* [in][idldescattr] */ DATE noname,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(ICertificateStatus3, get_UrlRetrievalTimeout)
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_UrlRetrievalTimeout )( 
            ICPCertificateStatus * This,
            /* [retval][out] */ signed long *retval);
        
        DECLSPEC_XFGVIRT(ICertificateStatus3, put_UrlRetrievalTimeout)
        /* [id][propput][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *put_UrlRetrievalTimeout )( 
            ICPCertificateStatus * This,
            /* [in][idldescattr] */ signed long noname,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(ICertificateStatus3, CertificatePolicies)
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *CertificatePolicies )( 
            ICPCertificateStatus * This,
            /* [retval][out] */ IOIDs **retval);
        
        DECLSPEC_XFGVIRT(ICertificateStatus3, ApplicationPolicies)
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *ApplicationPolicies )( 
            ICPCertificateStatus * This,
            /* [retval][out] */ IOIDs **retval);
        
        DECLSPEC_XFGVIRT(ICertificateStatus3, get_ValidationCertificates)
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_ValidationCertificates )( 
            ICPCertificateStatus * This,
            /* [retval][out] */ ICertificates **retval);
        
        DECLSPEC_XFGVIRT(ICPCertificateStatus, get_ErrorStatuses)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ErrorStatuses )( 
            ICPCertificateStatus * This,
            /* [retval][out] */ ICPErrorStatuses **pVal);
        
        END_INTERFACE
    } ICPCertificateStatusVtbl;

    interface ICPCertificateStatus
    {
        CONST_VTBL struct ICPCertificateStatusVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICPCertificateStatus_QueryInterface(This,riid,ppvObj,retval)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObj,retval) ) 

#define ICPCertificateStatus_AddRef(This,retval)	\
    ( (This)->lpVtbl -> AddRef(This,retval) ) 

#define ICPCertificateStatus_Release(This,retval)	\
    ( (This)->lpVtbl -> Release(This,retval) ) 

#define ICPCertificateStatus_GetTypeInfoCount(This,pctinfo,retval)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo,retval) ) 

#define ICPCertificateStatus_GetTypeInfo(This,itinfo,lcid,pptinfo,retval)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,itinfo,lcid,pptinfo,retval) ) 

#define ICPCertificateStatus_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgdispid,retval)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgdispid,retval) ) 

#define ICPCertificateStatus_Invoke(This,dispidMember,riid,lcid,wFlags,pdispparams,pvarResult,pexcepinfo,puArgErr,retval)	\
    ( (This)->lpVtbl -> Invoke(This,dispidMember,riid,lcid,wFlags,pdispparams,pvarResult,pexcepinfo,puArgErr,retval) ) 

#define ICPCertificateStatus_get_Result(This,retval)	\
    ( (This)->lpVtbl -> get_Result(This,retval) ) 

#define ICPCertificateStatus_get_CheckFlag(This,retval)	\
    ( (This)->lpVtbl -> get_CheckFlag(This,retval) ) 

#define ICPCertificateStatus_put_CheckFlag(This,noname,retval)	\
    ( (This)->lpVtbl -> put_CheckFlag(This,noname,retval) ) 

#define ICPCertificateStatus_EKU(This,retval)	\
    ( (This)->lpVtbl -> EKU(This,retval) ) 

#define ICPCertificateStatus_get_VerificationTime(This,retval)	\
    ( (This)->lpVtbl -> get_VerificationTime(This,retval) ) 

#define ICPCertificateStatus_put_VerificationTime(This,noname,retval)	\
    ( (This)->lpVtbl -> put_VerificationTime(This,noname,retval) ) 

#define ICPCertificateStatus_get_UrlRetrievalTimeout(This,retval)	\
    ( (This)->lpVtbl -> get_UrlRetrievalTimeout(This,retval) ) 

#define ICPCertificateStatus_put_UrlRetrievalTimeout(This,noname,retval)	\
    ( (This)->lpVtbl -> put_UrlRetrievalTimeout(This,noname,retval) ) 

#define ICPCertificateStatus_CertificatePolicies(This,retval)	\
    ( (This)->lpVtbl -> CertificatePolicies(This,retval) ) 

#define ICPCertificateStatus_ApplicationPolicies(This,retval)	\
    ( (This)->lpVtbl -> ApplicationPolicies(This,retval) ) 

#define ICPCertificateStatus_get_ValidationCertificates(This,retval)	\
    ( (This)->lpVtbl -> get_ValidationCertificates(This,retval) ) 


#define ICPCertificateStatus_get_ErrorStatuses(This,pVal)	\
    ( (This)->lpVtbl -> get_ErrorStatuses(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICPCertificateStatus_INTERFACE_DEFINED__ */


#ifndef __ICPCspInformation_INTERFACE_DEFINED__
#define __ICPCspInformation_INTERFACE_DEFINED__

/* interface ICPCspInformation */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ICPCspInformation;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("4552F41D-0C10-4C60-90FC-0D33709575CD")
    ICPCspInformation : public ICspInformation
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Readers( 
            /* [retval][out] */ ICPReaders **ppReaders) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICPCspInformationVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(ICspInformation, QueryInterface)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICPCspInformation * This,
            /* [in][idldescattr] */ struct GUID *riid,
            /* [out][idldescattr] */ void **ppvObj,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(ICspInformation, AddRef)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *AddRef )( 
            ICPCspInformation * This,
            /* [retval][out] */ unsigned long *retval);
        
        DECLSPEC_XFGVIRT(ICspInformation, Release)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *Release )( 
            ICPCspInformation * This,
            /* [retval][out] */ unsigned long *retval);
        
        DECLSPEC_XFGVIRT(ICspInformation, GetTypeInfoCount)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ICPCspInformation * This,
            /* [out][idldescattr] */ unsigned UINT *pctinfo,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(ICspInformation, GetTypeInfo)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ICPCspInformation * This,
            /* [in][idldescattr] */ unsigned UINT itinfo,
            /* [in][idldescattr] */ unsigned long lcid,
            /* [out][idldescattr] */ void **pptinfo,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(ICspInformation, GetIDsOfNames)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ICPCspInformation * This,
            /* [in][idldescattr] */ struct GUID *riid,
            /* [in][idldescattr] */ signed char **rgszNames,
            /* [in][idldescattr] */ unsigned UINT cNames,
            /* [in][idldescattr] */ unsigned long lcid,
            /* [out][idldescattr] */ signed long *rgdispid,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(ICspInformation, Invoke)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICPCspInformation * This,
            /* [in][idldescattr] */ signed long dispidMember,
            /* [in][idldescattr] */ struct GUID *riid,
            /* [in][idldescattr] */ unsigned long lcid,
            /* [in][idldescattr] */ unsigned short wFlags,
            /* [in][idldescattr] */ struct DISPPARAMS *pdispparams,
            /* [out][idldescattr] */ VARIANT *pvarResult,
            /* [out][idldescattr] */ struct EXCEPINFO *pexcepinfo,
            /* [out][idldescattr] */ unsigned UINT *puArgErr,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(ICspInformation, InitializeFromName)
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *InitializeFromName )( 
            ICPCspInformation * This,
            /* [in][idldescattr] */ BSTR strName,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(ICspInformation, InitializeFromType)
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *InitializeFromType )( 
            ICPCspInformation * This,
            /* [in][idldescattr] */ enum X509ProviderType Type,
            /* [in][idldescattr] */ IObjectId *pAlgorithm,
            /* [in][idldescattr] */ BOOLEAN MachineContext,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(ICspInformation, get_CspAlgorithms)
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_CspAlgorithms )( 
            ICPCspInformation * This,
            /* [retval][out] */ ICspAlgorithms **retval);
        
        DECLSPEC_XFGVIRT(ICspInformation, get_HasHardwareRandomNumberGenerator)
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_HasHardwareRandomNumberGenerator )( 
            ICPCspInformation * This,
            /* [retval][out] */ BOOLEAN *retval);
        
        DECLSPEC_XFGVIRT(ICspInformation, get_IsHardwareDevice)
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_IsHardwareDevice )( 
            ICPCspInformation * This,
            /* [retval][out] */ BOOLEAN *retval);
        
        DECLSPEC_XFGVIRT(ICspInformation, get_IsRemovable)
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_IsRemovable )( 
            ICPCspInformation * This,
            /* [retval][out] */ BOOLEAN *retval);
        
        DECLSPEC_XFGVIRT(ICspInformation, get_IsSoftwareDevice)
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_IsSoftwareDevice )( 
            ICPCspInformation * This,
            /* [retval][out] */ BOOLEAN *retval);
        
        DECLSPEC_XFGVIRT(ICspInformation, get_Valid)
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_Valid )( 
            ICPCspInformation * This,
            /* [retval][out] */ BOOLEAN *retval);
        
        DECLSPEC_XFGVIRT(ICspInformation, get_MaxKeyContainerNameLength)
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_MaxKeyContainerNameLength )( 
            ICPCspInformation * This,
            /* [retval][out] */ signed long *retval);
        
        DECLSPEC_XFGVIRT(ICspInformation, get_Name)
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            ICPCspInformation * This,
            /* [retval][out] */ BSTR *retval);
        
        DECLSPEC_XFGVIRT(ICspInformation, get_Type)
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            ICPCspInformation * This,
            /* [retval][out] */ enum X509ProviderType *retval);
        
        DECLSPEC_XFGVIRT(ICspInformation, get_Version)
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_Version )( 
            ICPCspInformation * This,
            /* [retval][out] */ signed long *retval);
        
        DECLSPEC_XFGVIRT(ICspInformation, get_KeySpec)
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_KeySpec )( 
            ICPCspInformation * This,
            /* [retval][out] */ enum X509KeySpec *retval);
        
        DECLSPEC_XFGVIRT(ICspInformation, get_IsSmartCard)
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_IsSmartCard )( 
            ICPCspInformation * This,
            /* [retval][out] */ BOOLEAN *retval);
        
        DECLSPEC_XFGVIRT(ICspInformation, GetDefaultSecurityDescriptor)
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *GetDefaultSecurityDescriptor )( 
            ICPCspInformation * This,
            /* [in][idldescattr] */ BOOLEAN MachineContext,
            /* [retval][out] */ BSTR *retval);
        
        DECLSPEC_XFGVIRT(ICspInformation, get_LegacyCsp)
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_LegacyCsp )( 
            ICPCspInformation * This,
            /* [retval][out] */ BOOLEAN *retval);
        
        DECLSPEC_XFGVIRT(ICspInformation, GetCspStatusFromOperations)
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *GetCspStatusFromOperations )( 
            ICPCspInformation * This,
            /* [in][idldescattr] */ IObjectId *pAlgorithm,
            /* [in][idldescattr] */ enum AlgorithmOperationFlags Operations,
            /* [retval][out] */ ICspStatus **retval);
        
        DECLSPEC_XFGVIRT(ICPCspInformation, get_Readers)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Readers )( 
            ICPCspInformation * This,
            /* [retval][out] */ ICPReaders **ppReaders);
        
        END_INTERFACE
    } ICPCspInformationVtbl;

    interface ICPCspInformation
    {
        CONST_VTBL struct ICPCspInformationVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICPCspInformation_QueryInterface(This,riid,ppvObj,retval)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObj,retval) ) 

#define ICPCspInformation_AddRef(This,retval)	\
    ( (This)->lpVtbl -> AddRef(This,retval) ) 

#define ICPCspInformation_Release(This,retval)	\
    ( (This)->lpVtbl -> Release(This,retval) ) 

#define ICPCspInformation_GetTypeInfoCount(This,pctinfo,retval)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo,retval) ) 

#define ICPCspInformation_GetTypeInfo(This,itinfo,lcid,pptinfo,retval)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,itinfo,lcid,pptinfo,retval) ) 

#define ICPCspInformation_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgdispid,retval)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgdispid,retval) ) 

#define ICPCspInformation_Invoke(This,dispidMember,riid,lcid,wFlags,pdispparams,pvarResult,pexcepinfo,puArgErr,retval)	\
    ( (This)->lpVtbl -> Invoke(This,dispidMember,riid,lcid,wFlags,pdispparams,pvarResult,pexcepinfo,puArgErr,retval) ) 

#define ICPCspInformation_InitializeFromName(This,strName,retval)	\
    ( (This)->lpVtbl -> InitializeFromName(This,strName,retval) ) 

#define ICPCspInformation_InitializeFromType(This,Type,pAlgorithm,MachineContext,retval)	\
    ( (This)->lpVtbl -> InitializeFromType(This,Type,pAlgorithm,MachineContext,retval) ) 

#define ICPCspInformation_get_CspAlgorithms(This,retval)	\
    ( (This)->lpVtbl -> get_CspAlgorithms(This,retval) ) 

#define ICPCspInformation_get_HasHardwareRandomNumberGenerator(This,retval)	\
    ( (This)->lpVtbl -> get_HasHardwareRandomNumberGenerator(This,retval) ) 

#define ICPCspInformation_get_IsHardwareDevice(This,retval)	\
    ( (This)->lpVtbl -> get_IsHardwareDevice(This,retval) ) 

#define ICPCspInformation_get_IsRemovable(This,retval)	\
    ( (This)->lpVtbl -> get_IsRemovable(This,retval) ) 

#define ICPCspInformation_get_IsSoftwareDevice(This,retval)	\
    ( (This)->lpVtbl -> get_IsSoftwareDevice(This,retval) ) 

#define ICPCspInformation_get_Valid(This,retval)	\
    ( (This)->lpVtbl -> get_Valid(This,retval) ) 

#define ICPCspInformation_get_MaxKeyContainerNameLength(This,retval)	\
    ( (This)->lpVtbl -> get_MaxKeyContainerNameLength(This,retval) ) 

#define ICPCspInformation_get_Name(This,retval)	\
    ( (This)->lpVtbl -> get_Name(This,retval) ) 

#define ICPCspInformation_get_Type(This,retval)	\
    ( (This)->lpVtbl -> get_Type(This,retval) ) 

#define ICPCspInformation_get_Version(This,retval)	\
    ( (This)->lpVtbl -> get_Version(This,retval) ) 

#define ICPCspInformation_get_KeySpec(This,retval)	\
    ( (This)->lpVtbl -> get_KeySpec(This,retval) ) 

#define ICPCspInformation_get_IsSmartCard(This,retval)	\
    ( (This)->lpVtbl -> get_IsSmartCard(This,retval) ) 

#define ICPCspInformation_GetDefaultSecurityDescriptor(This,MachineContext,retval)	\
    ( (This)->lpVtbl -> GetDefaultSecurityDescriptor(This,MachineContext,retval) ) 

#define ICPCspInformation_get_LegacyCsp(This,retval)	\
    ( (This)->lpVtbl -> get_LegacyCsp(This,retval) ) 

#define ICPCspInformation_GetCspStatusFromOperations(This,pAlgorithm,Operations,retval)	\
    ( (This)->lpVtbl -> GetCspStatusFromOperations(This,pAlgorithm,Operations,retval) ) 


#define ICPCspInformation_get_Readers(This,ppReaders)	\
    ( (This)->lpVtbl -> get_Readers(This,ppReaders) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICPCspInformation_INTERFACE_DEFINED__ */


#ifndef __ICPCspInformation2_INTERFACE_DEFINED__
#define __ICPCspInformation2_INTERFACE_DEFINED__

/* interface ICPCspInformation2 */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ICPCspInformation2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("4552F41D-0C10-4C60-90FC-0D33709575CE")
    ICPCspInformation2 : public ICPCspInformation
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetReaderModes( 
            /* [defaultvalue][in] */ LONG dwFlags,
            /* [retval][out] */ ICPReaderModes **ppReaderModes) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICPCspInformation2Vtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(ICspInformation, QueryInterface)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICPCspInformation2 * This,
            /* [in][idldescattr] */ struct GUID *riid,
            /* [out][idldescattr] */ void **ppvObj,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(ICspInformation, AddRef)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *AddRef )( 
            ICPCspInformation2 * This,
            /* [retval][out] */ unsigned long *retval);
        
        DECLSPEC_XFGVIRT(ICspInformation, Release)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *Release )( 
            ICPCspInformation2 * This,
            /* [retval][out] */ unsigned long *retval);
        
        DECLSPEC_XFGVIRT(ICspInformation, GetTypeInfoCount)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ICPCspInformation2 * This,
            /* [out][idldescattr] */ unsigned UINT *pctinfo,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(ICspInformation, GetTypeInfo)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ICPCspInformation2 * This,
            /* [in][idldescattr] */ unsigned UINT itinfo,
            /* [in][idldescattr] */ unsigned long lcid,
            /* [out][idldescattr] */ void **pptinfo,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(ICspInformation, GetIDsOfNames)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ICPCspInformation2 * This,
            /* [in][idldescattr] */ struct GUID *riid,
            /* [in][idldescattr] */ signed char **rgszNames,
            /* [in][idldescattr] */ unsigned UINT cNames,
            /* [in][idldescattr] */ unsigned long lcid,
            /* [out][idldescattr] */ signed long *rgdispid,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(ICspInformation, Invoke)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICPCspInformation2 * This,
            /* [in][idldescattr] */ signed long dispidMember,
            /* [in][idldescattr] */ struct GUID *riid,
            /* [in][idldescattr] */ unsigned long lcid,
            /* [in][idldescattr] */ unsigned short wFlags,
            /* [in][idldescattr] */ struct DISPPARAMS *pdispparams,
            /* [out][idldescattr] */ VARIANT *pvarResult,
            /* [out][idldescattr] */ struct EXCEPINFO *pexcepinfo,
            /* [out][idldescattr] */ unsigned UINT *puArgErr,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(ICspInformation, InitializeFromName)
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *InitializeFromName )( 
            ICPCspInformation2 * This,
            /* [in][idldescattr] */ BSTR strName,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(ICspInformation, InitializeFromType)
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *InitializeFromType )( 
            ICPCspInformation2 * This,
            /* [in][idldescattr] */ enum X509ProviderType Type,
            /* [in][idldescattr] */ IObjectId *pAlgorithm,
            /* [in][idldescattr] */ BOOLEAN MachineContext,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(ICspInformation, get_CspAlgorithms)
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_CspAlgorithms )( 
            ICPCspInformation2 * This,
            /* [retval][out] */ ICspAlgorithms **retval);
        
        DECLSPEC_XFGVIRT(ICspInformation, get_HasHardwareRandomNumberGenerator)
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_HasHardwareRandomNumberGenerator )( 
            ICPCspInformation2 * This,
            /* [retval][out] */ BOOLEAN *retval);
        
        DECLSPEC_XFGVIRT(ICspInformation, get_IsHardwareDevice)
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_IsHardwareDevice )( 
            ICPCspInformation2 * This,
            /* [retval][out] */ BOOLEAN *retval);
        
        DECLSPEC_XFGVIRT(ICspInformation, get_IsRemovable)
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_IsRemovable )( 
            ICPCspInformation2 * This,
            /* [retval][out] */ BOOLEAN *retval);
        
        DECLSPEC_XFGVIRT(ICspInformation, get_IsSoftwareDevice)
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_IsSoftwareDevice )( 
            ICPCspInformation2 * This,
            /* [retval][out] */ BOOLEAN *retval);
        
        DECLSPEC_XFGVIRT(ICspInformation, get_Valid)
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_Valid )( 
            ICPCspInformation2 * This,
            /* [retval][out] */ BOOLEAN *retval);
        
        DECLSPEC_XFGVIRT(ICspInformation, get_MaxKeyContainerNameLength)
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_MaxKeyContainerNameLength )( 
            ICPCspInformation2 * This,
            /* [retval][out] */ signed long *retval);
        
        DECLSPEC_XFGVIRT(ICspInformation, get_Name)
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            ICPCspInformation2 * This,
            /* [retval][out] */ BSTR *retval);
        
        DECLSPEC_XFGVIRT(ICspInformation, get_Type)
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            ICPCspInformation2 * This,
            /* [retval][out] */ enum X509ProviderType *retval);
        
        DECLSPEC_XFGVIRT(ICspInformation, get_Version)
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_Version )( 
            ICPCspInformation2 * This,
            /* [retval][out] */ signed long *retval);
        
        DECLSPEC_XFGVIRT(ICspInformation, get_KeySpec)
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_KeySpec )( 
            ICPCspInformation2 * This,
            /* [retval][out] */ enum X509KeySpec *retval);
        
        DECLSPEC_XFGVIRT(ICspInformation, get_IsSmartCard)
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_IsSmartCard )( 
            ICPCspInformation2 * This,
            /* [retval][out] */ BOOLEAN *retval);
        
        DECLSPEC_XFGVIRT(ICspInformation, GetDefaultSecurityDescriptor)
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *GetDefaultSecurityDescriptor )( 
            ICPCspInformation2 * This,
            /* [in][idldescattr] */ BOOLEAN MachineContext,
            /* [retval][out] */ BSTR *retval);
        
        DECLSPEC_XFGVIRT(ICspInformation, get_LegacyCsp)
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_LegacyCsp )( 
            ICPCspInformation2 * This,
            /* [retval][out] */ BOOLEAN *retval);
        
        DECLSPEC_XFGVIRT(ICspInformation, GetCspStatusFromOperations)
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *GetCspStatusFromOperations )( 
            ICPCspInformation2 * This,
            /* [in][idldescattr] */ IObjectId *pAlgorithm,
            /* [in][idldescattr] */ enum AlgorithmOperationFlags Operations,
            /* [retval][out] */ ICspStatus **retval);
        
        DECLSPEC_XFGVIRT(ICPCspInformation, get_Readers)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Readers )( 
            ICPCspInformation2 * This,
            /* [retval][out] */ ICPReaders **ppReaders);
        
        DECLSPEC_XFGVIRT(ICPCspInformation2, GetReaderModes)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetReaderModes )( 
            ICPCspInformation2 * This,
            /* [defaultvalue][in] */ LONG dwFlags,
            /* [retval][out] */ ICPReaderModes **ppReaderModes);
        
        END_INTERFACE
    } ICPCspInformation2Vtbl;

    interface ICPCspInformation2
    {
        CONST_VTBL struct ICPCspInformation2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICPCspInformation2_QueryInterface(This,riid,ppvObj,retval)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObj,retval) ) 

#define ICPCspInformation2_AddRef(This,retval)	\
    ( (This)->lpVtbl -> AddRef(This,retval) ) 

#define ICPCspInformation2_Release(This,retval)	\
    ( (This)->lpVtbl -> Release(This,retval) ) 

#define ICPCspInformation2_GetTypeInfoCount(This,pctinfo,retval)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo,retval) ) 

#define ICPCspInformation2_GetTypeInfo(This,itinfo,lcid,pptinfo,retval)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,itinfo,lcid,pptinfo,retval) ) 

#define ICPCspInformation2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgdispid,retval)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgdispid,retval) ) 

#define ICPCspInformation2_Invoke(This,dispidMember,riid,lcid,wFlags,pdispparams,pvarResult,pexcepinfo,puArgErr,retval)	\
    ( (This)->lpVtbl -> Invoke(This,dispidMember,riid,lcid,wFlags,pdispparams,pvarResult,pexcepinfo,puArgErr,retval) ) 

#define ICPCspInformation2_InitializeFromName(This,strName,retval)	\
    ( (This)->lpVtbl -> InitializeFromName(This,strName,retval) ) 

#define ICPCspInformation2_InitializeFromType(This,Type,pAlgorithm,MachineContext,retval)	\
    ( (This)->lpVtbl -> InitializeFromType(This,Type,pAlgorithm,MachineContext,retval) ) 

#define ICPCspInformation2_get_CspAlgorithms(This,retval)	\
    ( (This)->lpVtbl -> get_CspAlgorithms(This,retval) ) 

#define ICPCspInformation2_get_HasHardwareRandomNumberGenerator(This,retval)	\
    ( (This)->lpVtbl -> get_HasHardwareRandomNumberGenerator(This,retval) ) 

#define ICPCspInformation2_get_IsHardwareDevice(This,retval)	\
    ( (This)->lpVtbl -> get_IsHardwareDevice(This,retval) ) 

#define ICPCspInformation2_get_IsRemovable(This,retval)	\
    ( (This)->lpVtbl -> get_IsRemovable(This,retval) ) 

#define ICPCspInformation2_get_IsSoftwareDevice(This,retval)	\
    ( (This)->lpVtbl -> get_IsSoftwareDevice(This,retval) ) 

#define ICPCspInformation2_get_Valid(This,retval)	\
    ( (This)->lpVtbl -> get_Valid(This,retval) ) 

#define ICPCspInformation2_get_MaxKeyContainerNameLength(This,retval)	\
    ( (This)->lpVtbl -> get_MaxKeyContainerNameLength(This,retval) ) 

#define ICPCspInformation2_get_Name(This,retval)	\
    ( (This)->lpVtbl -> get_Name(This,retval) ) 

#define ICPCspInformation2_get_Type(This,retval)	\
    ( (This)->lpVtbl -> get_Type(This,retval) ) 

#define ICPCspInformation2_get_Version(This,retval)	\
    ( (This)->lpVtbl -> get_Version(This,retval) ) 

#define ICPCspInformation2_get_KeySpec(This,retval)	\
    ( (This)->lpVtbl -> get_KeySpec(This,retval) ) 

#define ICPCspInformation2_get_IsSmartCard(This,retval)	\
    ( (This)->lpVtbl -> get_IsSmartCard(This,retval) ) 

#define ICPCspInformation2_GetDefaultSecurityDescriptor(This,MachineContext,retval)	\
    ( (This)->lpVtbl -> GetDefaultSecurityDescriptor(This,MachineContext,retval) ) 

#define ICPCspInformation2_get_LegacyCsp(This,retval)	\
    ( (This)->lpVtbl -> get_LegacyCsp(This,retval) ) 

#define ICPCspInformation2_GetCspStatusFromOperations(This,pAlgorithm,Operations,retval)	\
    ( (This)->lpVtbl -> GetCspStatusFromOperations(This,pAlgorithm,Operations,retval) ) 


#define ICPCspInformation2_get_Readers(This,ppReaders)	\
    ( (This)->lpVtbl -> get_Readers(This,ppReaders) ) 


#define ICPCspInformation2_GetReaderModes(This,dwFlags,ppReaderModes)	\
    ( (This)->lpVtbl -> GetReaderModes(This,dwFlags,ppReaderModes) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICPCspInformation2_INTERFACE_DEFINED__ */


#ifndef __ICPCspInformation3_INTERFACE_DEFINED__
#define __ICPCspInformation3_INTERFACE_DEFINED__

/* interface ICPCspInformation3 */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ICPCspInformation3;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("4552F41D-0C10-4C60-90FC-0D33709575CF")
    ICPCspInformation3 : public ICPCspInformation2
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE EnumContainers( 
            /* [retval][out] */ ICPContainers **ppContainers) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICPCspInformation3Vtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(ICspInformation, QueryInterface)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICPCspInformation3 * This,
            /* [in][idldescattr] */ struct GUID *riid,
            /* [out][idldescattr] */ void **ppvObj,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(ICspInformation, AddRef)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *AddRef )( 
            ICPCspInformation3 * This,
            /* [retval][out] */ unsigned long *retval);
        
        DECLSPEC_XFGVIRT(ICspInformation, Release)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *Release )( 
            ICPCspInformation3 * This,
            /* [retval][out] */ unsigned long *retval);
        
        DECLSPEC_XFGVIRT(ICspInformation, GetTypeInfoCount)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ICPCspInformation3 * This,
            /* [out][idldescattr] */ unsigned UINT *pctinfo,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(ICspInformation, GetTypeInfo)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ICPCspInformation3 * This,
            /* [in][idldescattr] */ unsigned UINT itinfo,
            /* [in][idldescattr] */ unsigned long lcid,
            /* [out][idldescattr] */ void **pptinfo,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(ICspInformation, GetIDsOfNames)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ICPCspInformation3 * This,
            /* [in][idldescattr] */ struct GUID *riid,
            /* [in][idldescattr] */ signed char **rgszNames,
            /* [in][idldescattr] */ unsigned UINT cNames,
            /* [in][idldescattr] */ unsigned long lcid,
            /* [out][idldescattr] */ signed long *rgdispid,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(ICspInformation, Invoke)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICPCspInformation3 * This,
            /* [in][idldescattr] */ signed long dispidMember,
            /* [in][idldescattr] */ struct GUID *riid,
            /* [in][idldescattr] */ unsigned long lcid,
            /* [in][idldescattr] */ unsigned short wFlags,
            /* [in][idldescattr] */ struct DISPPARAMS *pdispparams,
            /* [out][idldescattr] */ VARIANT *pvarResult,
            /* [out][idldescattr] */ struct EXCEPINFO *pexcepinfo,
            /* [out][idldescattr] */ unsigned UINT *puArgErr,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(ICspInformation, InitializeFromName)
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *InitializeFromName )( 
            ICPCspInformation3 * This,
            /* [in][idldescattr] */ BSTR strName,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(ICspInformation, InitializeFromType)
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *InitializeFromType )( 
            ICPCspInformation3 * This,
            /* [in][idldescattr] */ enum X509ProviderType Type,
            /* [in][idldescattr] */ IObjectId *pAlgorithm,
            /* [in][idldescattr] */ BOOLEAN MachineContext,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(ICspInformation, get_CspAlgorithms)
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_CspAlgorithms )( 
            ICPCspInformation3 * This,
            /* [retval][out] */ ICspAlgorithms **retval);
        
        DECLSPEC_XFGVIRT(ICspInformation, get_HasHardwareRandomNumberGenerator)
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_HasHardwareRandomNumberGenerator )( 
            ICPCspInformation3 * This,
            /* [retval][out] */ BOOLEAN *retval);
        
        DECLSPEC_XFGVIRT(ICspInformation, get_IsHardwareDevice)
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_IsHardwareDevice )( 
            ICPCspInformation3 * This,
            /* [retval][out] */ BOOLEAN *retval);
        
        DECLSPEC_XFGVIRT(ICspInformation, get_IsRemovable)
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_IsRemovable )( 
            ICPCspInformation3 * This,
            /* [retval][out] */ BOOLEAN *retval);
        
        DECLSPEC_XFGVIRT(ICspInformation, get_IsSoftwareDevice)
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_IsSoftwareDevice )( 
            ICPCspInformation3 * This,
            /* [retval][out] */ BOOLEAN *retval);
        
        DECLSPEC_XFGVIRT(ICspInformation, get_Valid)
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_Valid )( 
            ICPCspInformation3 * This,
            /* [retval][out] */ BOOLEAN *retval);
        
        DECLSPEC_XFGVIRT(ICspInformation, get_MaxKeyContainerNameLength)
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_MaxKeyContainerNameLength )( 
            ICPCspInformation3 * This,
            /* [retval][out] */ signed long *retval);
        
        DECLSPEC_XFGVIRT(ICspInformation, get_Name)
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            ICPCspInformation3 * This,
            /* [retval][out] */ BSTR *retval);
        
        DECLSPEC_XFGVIRT(ICspInformation, get_Type)
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            ICPCspInformation3 * This,
            /* [retval][out] */ enum X509ProviderType *retval);
        
        DECLSPEC_XFGVIRT(ICspInformation, get_Version)
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_Version )( 
            ICPCspInformation3 * This,
            /* [retval][out] */ signed long *retval);
        
        DECLSPEC_XFGVIRT(ICspInformation, get_KeySpec)
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_KeySpec )( 
            ICPCspInformation3 * This,
            /* [retval][out] */ enum X509KeySpec *retval);
        
        DECLSPEC_XFGVIRT(ICspInformation, get_IsSmartCard)
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_IsSmartCard )( 
            ICPCspInformation3 * This,
            /* [retval][out] */ BOOLEAN *retval);
        
        DECLSPEC_XFGVIRT(ICspInformation, GetDefaultSecurityDescriptor)
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *GetDefaultSecurityDescriptor )( 
            ICPCspInformation3 * This,
            /* [in][idldescattr] */ BOOLEAN MachineContext,
            /* [retval][out] */ BSTR *retval);
        
        DECLSPEC_XFGVIRT(ICspInformation, get_LegacyCsp)
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_LegacyCsp )( 
            ICPCspInformation3 * This,
            /* [retval][out] */ BOOLEAN *retval);
        
        DECLSPEC_XFGVIRT(ICspInformation, GetCspStatusFromOperations)
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *GetCspStatusFromOperations )( 
            ICPCspInformation3 * This,
            /* [in][idldescattr] */ IObjectId *pAlgorithm,
            /* [in][idldescattr] */ enum AlgorithmOperationFlags Operations,
            /* [retval][out] */ ICspStatus **retval);
        
        DECLSPEC_XFGVIRT(ICPCspInformation, get_Readers)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Readers )( 
            ICPCspInformation3 * This,
            /* [retval][out] */ ICPReaders **ppReaders);
        
        DECLSPEC_XFGVIRT(ICPCspInformation2, GetReaderModes)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetReaderModes )( 
            ICPCspInformation3 * This,
            /* [defaultvalue][in] */ LONG dwFlags,
            /* [retval][out] */ ICPReaderModes **ppReaderModes);
        
        DECLSPEC_XFGVIRT(ICPCspInformation3, EnumContainers)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *EnumContainers )( 
            ICPCspInformation3 * This,
            /* [retval][out] */ ICPContainers **ppContainers);
        
        END_INTERFACE
    } ICPCspInformation3Vtbl;

    interface ICPCspInformation3
    {
        CONST_VTBL struct ICPCspInformation3Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICPCspInformation3_QueryInterface(This,riid,ppvObj,retval)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObj,retval) ) 

#define ICPCspInformation3_AddRef(This,retval)	\
    ( (This)->lpVtbl -> AddRef(This,retval) ) 

#define ICPCspInformation3_Release(This,retval)	\
    ( (This)->lpVtbl -> Release(This,retval) ) 

#define ICPCspInformation3_GetTypeInfoCount(This,pctinfo,retval)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo,retval) ) 

#define ICPCspInformation3_GetTypeInfo(This,itinfo,lcid,pptinfo,retval)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,itinfo,lcid,pptinfo,retval) ) 

#define ICPCspInformation3_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgdispid,retval)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgdispid,retval) ) 

#define ICPCspInformation3_Invoke(This,dispidMember,riid,lcid,wFlags,pdispparams,pvarResult,pexcepinfo,puArgErr,retval)	\
    ( (This)->lpVtbl -> Invoke(This,dispidMember,riid,lcid,wFlags,pdispparams,pvarResult,pexcepinfo,puArgErr,retval) ) 

#define ICPCspInformation3_InitializeFromName(This,strName,retval)	\
    ( (This)->lpVtbl -> InitializeFromName(This,strName,retval) ) 

#define ICPCspInformation3_InitializeFromType(This,Type,pAlgorithm,MachineContext,retval)	\
    ( (This)->lpVtbl -> InitializeFromType(This,Type,pAlgorithm,MachineContext,retval) ) 

#define ICPCspInformation3_get_CspAlgorithms(This,retval)	\
    ( (This)->lpVtbl -> get_CspAlgorithms(This,retval) ) 

#define ICPCspInformation3_get_HasHardwareRandomNumberGenerator(This,retval)	\
    ( (This)->lpVtbl -> get_HasHardwareRandomNumberGenerator(This,retval) ) 

#define ICPCspInformation3_get_IsHardwareDevice(This,retval)	\
    ( (This)->lpVtbl -> get_IsHardwareDevice(This,retval) ) 

#define ICPCspInformation3_get_IsRemovable(This,retval)	\
    ( (This)->lpVtbl -> get_IsRemovable(This,retval) ) 

#define ICPCspInformation3_get_IsSoftwareDevice(This,retval)	\
    ( (This)->lpVtbl -> get_IsSoftwareDevice(This,retval) ) 

#define ICPCspInformation3_get_Valid(This,retval)	\
    ( (This)->lpVtbl -> get_Valid(This,retval) ) 

#define ICPCspInformation3_get_MaxKeyContainerNameLength(This,retval)	\
    ( (This)->lpVtbl -> get_MaxKeyContainerNameLength(This,retval) ) 

#define ICPCspInformation3_get_Name(This,retval)	\
    ( (This)->lpVtbl -> get_Name(This,retval) ) 

#define ICPCspInformation3_get_Type(This,retval)	\
    ( (This)->lpVtbl -> get_Type(This,retval) ) 

#define ICPCspInformation3_get_Version(This,retval)	\
    ( (This)->lpVtbl -> get_Version(This,retval) ) 

#define ICPCspInformation3_get_KeySpec(This,retval)	\
    ( (This)->lpVtbl -> get_KeySpec(This,retval) ) 

#define ICPCspInformation3_get_IsSmartCard(This,retval)	\
    ( (This)->lpVtbl -> get_IsSmartCard(This,retval) ) 

#define ICPCspInformation3_GetDefaultSecurityDescriptor(This,MachineContext,retval)	\
    ( (This)->lpVtbl -> GetDefaultSecurityDescriptor(This,MachineContext,retval) ) 

#define ICPCspInformation3_get_LegacyCsp(This,retval)	\
    ( (This)->lpVtbl -> get_LegacyCsp(This,retval) ) 

#define ICPCspInformation3_GetCspStatusFromOperations(This,pAlgorithm,Operations,retval)	\
    ( (This)->lpVtbl -> GetCspStatusFromOperations(This,pAlgorithm,Operations,retval) ) 


#define ICPCspInformation3_get_Readers(This,ppReaders)	\
    ( (This)->lpVtbl -> get_Readers(This,ppReaders) ) 


#define ICPCspInformation3_GetReaderModes(This,dwFlags,ppReaderModes)	\
    ( (This)->lpVtbl -> GetReaderModes(This,dwFlags,ppReaderModes) ) 


#define ICPCspInformation3_EnumContainers(This,ppContainers)	\
    ( (This)->lpVtbl -> EnumContainers(This,ppContainers) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICPCspInformation3_INTERFACE_DEFINED__ */


#ifndef __ISymmetricAlgorithm_INTERFACE_DEFINED__
#define __ISymmetricAlgorithm_INTERFACE_DEFINED__

/* interface ISymmetricAlgorithm */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ISymmetricAlgorithm;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("F3233D77-4286-4E9C-AE90-464CDECB551E")
    ISymmetricAlgorithm : public IDispatch
    {
    public:
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_IV( 
            /* [in] */ BSTR pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_IV( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_DiversData( 
            /* [in] */ BSTR pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_DiversData( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GenerateKey( 
            /* [defaultvalue][in] */ CADESCOM_ENCRYPTION_ALGORITHM algorithm = CADESCOM_ENCRYPTION_ALGORITHM_GOST_28147_89) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE DiversifyKey( 
            /* [retval][out] */ ISymmetricAlgorithm **ppVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Encrypt( 
            /* [in] */ BSTR pbData,
            /* [in] */ VARIANT_BOOL isFinal,
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Decrypt( 
            /* [in] */ BSTR pbData,
            /* [in] */ VARIANT_BOOL isFinal,
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ImportKey( 
            /* [in] */ BSTR pbData,
            /* [in] */ /* external definition not present */ ICertificate *pVal,
            /* [defaultvalue][in] */ BSTR Password = (BSTR)L"") = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ExportKey( 
            /* [in] */ /* external definition not present */ ICertificate *pVal,
            /* [retval][out] */ BSTR *pbData) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ISymmetricAlgorithmVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISymmetricAlgorithm * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISymmetricAlgorithm * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISymmetricAlgorithm * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISymmetricAlgorithm * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISymmetricAlgorithm * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISymmetricAlgorithm * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISymmetricAlgorithm * This,
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
        
        DECLSPEC_XFGVIRT(ISymmetricAlgorithm, put_IV)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_IV )( 
            ISymmetricAlgorithm * This,
            /* [in] */ BSTR pVal);
        
        DECLSPEC_XFGVIRT(ISymmetricAlgorithm, get_IV)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_IV )( 
            ISymmetricAlgorithm * This,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(ISymmetricAlgorithm, put_DiversData)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_DiversData )( 
            ISymmetricAlgorithm * This,
            /* [in] */ BSTR pVal);
        
        DECLSPEC_XFGVIRT(ISymmetricAlgorithm, get_DiversData)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DiversData )( 
            ISymmetricAlgorithm * This,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(ISymmetricAlgorithm, GenerateKey)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GenerateKey )( 
            ISymmetricAlgorithm * This,
            /* [defaultvalue][in] */ CADESCOM_ENCRYPTION_ALGORITHM algorithm);
        
        DECLSPEC_XFGVIRT(ISymmetricAlgorithm, DiversifyKey)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *DiversifyKey )( 
            ISymmetricAlgorithm * This,
            /* [retval][out] */ ISymmetricAlgorithm **ppVal);
        
        DECLSPEC_XFGVIRT(ISymmetricAlgorithm, Encrypt)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Encrypt )( 
            ISymmetricAlgorithm * This,
            /* [in] */ BSTR pbData,
            /* [in] */ VARIANT_BOOL isFinal,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(ISymmetricAlgorithm, Decrypt)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Decrypt )( 
            ISymmetricAlgorithm * This,
            /* [in] */ BSTR pbData,
            /* [in] */ VARIANT_BOOL isFinal,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(ISymmetricAlgorithm, ImportKey)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ImportKey )( 
            ISymmetricAlgorithm * This,
            /* [in] */ BSTR pbData,
            /* [in] */ /* external definition not present */ ICertificate *pVal,
            /* [defaultvalue][in] */ BSTR Password);
        
        DECLSPEC_XFGVIRT(ISymmetricAlgorithm, ExportKey)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ExportKey )( 
            ISymmetricAlgorithm * This,
            /* [in] */ /* external definition not present */ ICertificate *pVal,
            /* [retval][out] */ BSTR *pbData);
        
        END_INTERFACE
    } ISymmetricAlgorithmVtbl;

    interface ISymmetricAlgorithm
    {
        CONST_VTBL struct ISymmetricAlgorithmVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISymmetricAlgorithm_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISymmetricAlgorithm_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISymmetricAlgorithm_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISymmetricAlgorithm_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISymmetricAlgorithm_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISymmetricAlgorithm_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISymmetricAlgorithm_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ISymmetricAlgorithm_put_IV(This,pVal)	\
    ( (This)->lpVtbl -> put_IV(This,pVal) ) 

#define ISymmetricAlgorithm_get_IV(This,pVal)	\
    ( (This)->lpVtbl -> get_IV(This,pVal) ) 

#define ISymmetricAlgorithm_put_DiversData(This,pVal)	\
    ( (This)->lpVtbl -> put_DiversData(This,pVal) ) 

#define ISymmetricAlgorithm_get_DiversData(This,pVal)	\
    ( (This)->lpVtbl -> get_DiversData(This,pVal) ) 

#define ISymmetricAlgorithm_GenerateKey(This,algorithm)	\
    ( (This)->lpVtbl -> GenerateKey(This,algorithm) ) 

#define ISymmetricAlgorithm_DiversifyKey(This,ppVal)	\
    ( (This)->lpVtbl -> DiversifyKey(This,ppVal) ) 

#define ISymmetricAlgorithm_Encrypt(This,pbData,isFinal,pVal)	\
    ( (This)->lpVtbl -> Encrypt(This,pbData,isFinal,pVal) ) 

#define ISymmetricAlgorithm_Decrypt(This,pbData,isFinal,pVal)	\
    ( (This)->lpVtbl -> Decrypt(This,pbData,isFinal,pVal) ) 

#define ISymmetricAlgorithm_ImportKey(This,pbData,pVal,Password)	\
    ( (This)->lpVtbl -> ImportKey(This,pbData,pVal,Password) ) 

#define ISymmetricAlgorithm_ExportKey(This,pVal,pbData)	\
    ( (This)->lpVtbl -> ExportKey(This,pVal,pbData) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISymmetricAlgorithm_INTERFACE_DEFINED__ */


#ifndef __ISymmetricAlgorithm2_INTERFACE_DEFINED__
#define __ISymmetricAlgorithm2_INTERFACE_DEFINED__

/* interface ISymmetricAlgorithm2 */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ISymmetricAlgorithm2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("84B71607-2F65-4A6B-A2EC-C4C956A70C76")
    ISymmetricAlgorithm2 : public ISymmetricAlgorithm
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_LegacyPluginSymmetricExport( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_LegacyPluginSymmetricExport( 
            /* [in] */ VARIANT_BOOL pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ISymmetricAlgorithm2Vtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISymmetricAlgorithm2 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISymmetricAlgorithm2 * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISymmetricAlgorithm2 * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISymmetricAlgorithm2 * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISymmetricAlgorithm2 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISymmetricAlgorithm2 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISymmetricAlgorithm2 * This,
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
        
        DECLSPEC_XFGVIRT(ISymmetricAlgorithm, put_IV)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_IV )( 
            ISymmetricAlgorithm2 * This,
            /* [in] */ BSTR pVal);
        
        DECLSPEC_XFGVIRT(ISymmetricAlgorithm, get_IV)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_IV )( 
            ISymmetricAlgorithm2 * This,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(ISymmetricAlgorithm, put_DiversData)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_DiversData )( 
            ISymmetricAlgorithm2 * This,
            /* [in] */ BSTR pVal);
        
        DECLSPEC_XFGVIRT(ISymmetricAlgorithm, get_DiversData)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DiversData )( 
            ISymmetricAlgorithm2 * This,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(ISymmetricAlgorithm, GenerateKey)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GenerateKey )( 
            ISymmetricAlgorithm2 * This,
            /* [defaultvalue][in] */ CADESCOM_ENCRYPTION_ALGORITHM algorithm);
        
        DECLSPEC_XFGVIRT(ISymmetricAlgorithm, DiversifyKey)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *DiversifyKey )( 
            ISymmetricAlgorithm2 * This,
            /* [retval][out] */ ISymmetricAlgorithm **ppVal);
        
        DECLSPEC_XFGVIRT(ISymmetricAlgorithm, Encrypt)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Encrypt )( 
            ISymmetricAlgorithm2 * This,
            /* [in] */ BSTR pbData,
            /* [in] */ VARIANT_BOOL isFinal,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(ISymmetricAlgorithm, Decrypt)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Decrypt )( 
            ISymmetricAlgorithm2 * This,
            /* [in] */ BSTR pbData,
            /* [in] */ VARIANT_BOOL isFinal,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(ISymmetricAlgorithm, ImportKey)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ImportKey )( 
            ISymmetricAlgorithm2 * This,
            /* [in] */ BSTR pbData,
            /* [in] */ /* external definition not present */ ICertificate *pVal,
            /* [defaultvalue][in] */ BSTR Password);
        
        DECLSPEC_XFGVIRT(ISymmetricAlgorithm, ExportKey)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ExportKey )( 
            ISymmetricAlgorithm2 * This,
            /* [in] */ /* external definition not present */ ICertificate *pVal,
            /* [retval][out] */ BSTR *pbData);
        
        DECLSPEC_XFGVIRT(ISymmetricAlgorithm2, get_LegacyPluginSymmetricExport)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_LegacyPluginSymmetricExport )( 
            ISymmetricAlgorithm2 * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        DECLSPEC_XFGVIRT(ISymmetricAlgorithm2, put_LegacyPluginSymmetricExport)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_LegacyPluginSymmetricExport )( 
            ISymmetricAlgorithm2 * This,
            /* [in] */ VARIANT_BOOL pVal);
        
        END_INTERFACE
    } ISymmetricAlgorithm2Vtbl;

    interface ISymmetricAlgorithm2
    {
        CONST_VTBL struct ISymmetricAlgorithm2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISymmetricAlgorithm2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISymmetricAlgorithm2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISymmetricAlgorithm2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISymmetricAlgorithm2_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISymmetricAlgorithm2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISymmetricAlgorithm2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISymmetricAlgorithm2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ISymmetricAlgorithm2_put_IV(This,pVal)	\
    ( (This)->lpVtbl -> put_IV(This,pVal) ) 

#define ISymmetricAlgorithm2_get_IV(This,pVal)	\
    ( (This)->lpVtbl -> get_IV(This,pVal) ) 

#define ISymmetricAlgorithm2_put_DiversData(This,pVal)	\
    ( (This)->lpVtbl -> put_DiversData(This,pVal) ) 

#define ISymmetricAlgorithm2_get_DiversData(This,pVal)	\
    ( (This)->lpVtbl -> get_DiversData(This,pVal) ) 

#define ISymmetricAlgorithm2_GenerateKey(This,algorithm)	\
    ( (This)->lpVtbl -> GenerateKey(This,algorithm) ) 

#define ISymmetricAlgorithm2_DiversifyKey(This,ppVal)	\
    ( (This)->lpVtbl -> DiversifyKey(This,ppVal) ) 

#define ISymmetricAlgorithm2_Encrypt(This,pbData,isFinal,pVal)	\
    ( (This)->lpVtbl -> Encrypt(This,pbData,isFinal,pVal) ) 

#define ISymmetricAlgorithm2_Decrypt(This,pbData,isFinal,pVal)	\
    ( (This)->lpVtbl -> Decrypt(This,pbData,isFinal,pVal) ) 

#define ISymmetricAlgorithm2_ImportKey(This,pbData,pVal,Password)	\
    ( (This)->lpVtbl -> ImportKey(This,pbData,pVal,Password) ) 

#define ISymmetricAlgorithm2_ExportKey(This,pVal,pbData)	\
    ( (This)->lpVtbl -> ExportKey(This,pVal,pbData) ) 


#define ISymmetricAlgorithm2_get_LegacyPluginSymmetricExport(This,pVal)	\
    ( (This)->lpVtbl -> get_LegacyPluginSymmetricExport(This,pVal) ) 

#define ISymmetricAlgorithm2_put_LegacyPluginSymmetricExport(This,pVal)	\
    ( (This)->lpVtbl -> put_LegacyPluginSymmetricExport(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISymmetricAlgorithm2_INTERFACE_DEFINED__ */


#ifndef __ISymmetricAlgorithm3_INTERFACE_DEFINED__
#define __ISymmetricAlgorithm3_INTERFACE_DEFINED__

/* interface ISymmetricAlgorithm3 */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ISymmetricAlgorithm3;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("84B71607-2F65-4A6B-A2EC-C4C956A70C77")
    ISymmetricAlgorithm3 : public ISymmetricAlgorithm2
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetMode( 
            /* [in] */ LONG pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetPadding( 
            /* [in] */ LONG pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ISymmetricAlgorithm3Vtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISymmetricAlgorithm3 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISymmetricAlgorithm3 * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISymmetricAlgorithm3 * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISymmetricAlgorithm3 * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISymmetricAlgorithm3 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISymmetricAlgorithm3 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISymmetricAlgorithm3 * This,
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
        
        DECLSPEC_XFGVIRT(ISymmetricAlgorithm, put_IV)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_IV )( 
            ISymmetricAlgorithm3 * This,
            /* [in] */ BSTR pVal);
        
        DECLSPEC_XFGVIRT(ISymmetricAlgorithm, get_IV)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_IV )( 
            ISymmetricAlgorithm3 * This,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(ISymmetricAlgorithm, put_DiversData)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_DiversData )( 
            ISymmetricAlgorithm3 * This,
            /* [in] */ BSTR pVal);
        
        DECLSPEC_XFGVIRT(ISymmetricAlgorithm, get_DiversData)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DiversData )( 
            ISymmetricAlgorithm3 * This,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(ISymmetricAlgorithm, GenerateKey)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GenerateKey )( 
            ISymmetricAlgorithm3 * This,
            /* [defaultvalue][in] */ CADESCOM_ENCRYPTION_ALGORITHM algorithm);
        
        DECLSPEC_XFGVIRT(ISymmetricAlgorithm, DiversifyKey)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *DiversifyKey )( 
            ISymmetricAlgorithm3 * This,
            /* [retval][out] */ ISymmetricAlgorithm **ppVal);
        
        DECLSPEC_XFGVIRT(ISymmetricAlgorithm, Encrypt)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Encrypt )( 
            ISymmetricAlgorithm3 * This,
            /* [in] */ BSTR pbData,
            /* [in] */ VARIANT_BOOL isFinal,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(ISymmetricAlgorithm, Decrypt)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Decrypt )( 
            ISymmetricAlgorithm3 * This,
            /* [in] */ BSTR pbData,
            /* [in] */ VARIANT_BOOL isFinal,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(ISymmetricAlgorithm, ImportKey)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ImportKey )( 
            ISymmetricAlgorithm3 * This,
            /* [in] */ BSTR pbData,
            /* [in] */ /* external definition not present */ ICertificate *pVal,
            /* [defaultvalue][in] */ BSTR Password);
        
        DECLSPEC_XFGVIRT(ISymmetricAlgorithm, ExportKey)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ExportKey )( 
            ISymmetricAlgorithm3 * This,
            /* [in] */ /* external definition not present */ ICertificate *pVal,
            /* [retval][out] */ BSTR *pbData);
        
        DECLSPEC_XFGVIRT(ISymmetricAlgorithm2, get_LegacyPluginSymmetricExport)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_LegacyPluginSymmetricExport )( 
            ISymmetricAlgorithm3 * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        DECLSPEC_XFGVIRT(ISymmetricAlgorithm2, put_LegacyPluginSymmetricExport)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_LegacyPluginSymmetricExport )( 
            ISymmetricAlgorithm3 * This,
            /* [in] */ VARIANT_BOOL pVal);
        
        DECLSPEC_XFGVIRT(ISymmetricAlgorithm3, SetMode)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetMode )( 
            ISymmetricAlgorithm3 * This,
            /* [in] */ LONG pVal);
        
        DECLSPEC_XFGVIRT(ISymmetricAlgorithm3, SetPadding)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetPadding )( 
            ISymmetricAlgorithm3 * This,
            /* [in] */ LONG pVal);
        
        END_INTERFACE
    } ISymmetricAlgorithm3Vtbl;

    interface ISymmetricAlgorithm3
    {
        CONST_VTBL struct ISymmetricAlgorithm3Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISymmetricAlgorithm3_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISymmetricAlgorithm3_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISymmetricAlgorithm3_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISymmetricAlgorithm3_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISymmetricAlgorithm3_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISymmetricAlgorithm3_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISymmetricAlgorithm3_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ISymmetricAlgorithm3_put_IV(This,pVal)	\
    ( (This)->lpVtbl -> put_IV(This,pVal) ) 

#define ISymmetricAlgorithm3_get_IV(This,pVal)	\
    ( (This)->lpVtbl -> get_IV(This,pVal) ) 

#define ISymmetricAlgorithm3_put_DiversData(This,pVal)	\
    ( (This)->lpVtbl -> put_DiversData(This,pVal) ) 

#define ISymmetricAlgorithm3_get_DiversData(This,pVal)	\
    ( (This)->lpVtbl -> get_DiversData(This,pVal) ) 

#define ISymmetricAlgorithm3_GenerateKey(This,algorithm)	\
    ( (This)->lpVtbl -> GenerateKey(This,algorithm) ) 

#define ISymmetricAlgorithm3_DiversifyKey(This,ppVal)	\
    ( (This)->lpVtbl -> DiversifyKey(This,ppVal) ) 

#define ISymmetricAlgorithm3_Encrypt(This,pbData,isFinal,pVal)	\
    ( (This)->lpVtbl -> Encrypt(This,pbData,isFinal,pVal) ) 

#define ISymmetricAlgorithm3_Decrypt(This,pbData,isFinal,pVal)	\
    ( (This)->lpVtbl -> Decrypt(This,pbData,isFinal,pVal) ) 

#define ISymmetricAlgorithm3_ImportKey(This,pbData,pVal,Password)	\
    ( (This)->lpVtbl -> ImportKey(This,pbData,pVal,Password) ) 

#define ISymmetricAlgorithm3_ExportKey(This,pVal,pbData)	\
    ( (This)->lpVtbl -> ExportKey(This,pVal,pbData) ) 


#define ISymmetricAlgorithm3_get_LegacyPluginSymmetricExport(This,pVal)	\
    ( (This)->lpVtbl -> get_LegacyPluginSymmetricExport(This,pVal) ) 

#define ISymmetricAlgorithm3_put_LegacyPluginSymmetricExport(This,pVal)	\
    ( (This)->lpVtbl -> put_LegacyPluginSymmetricExport(This,pVal) ) 


#define ISymmetricAlgorithm3_SetMode(This,pVal)	\
    ( (This)->lpVtbl -> SetMode(This,pVal) ) 

#define ISymmetricAlgorithm3_SetPadding(This,pVal)	\
    ( (This)->lpVtbl -> SetPadding(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISymmetricAlgorithm3_INTERFACE_DEFINED__ */


#ifndef __ICPPrivateKey_INTERFACE_DEFINED__
#define __ICPPrivateKey_INTERFACE_DEFINED__

/* interface ICPPrivateKey */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_ICPPrivateKey;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("C12F1551-C631-4AFE-9BDE-4D0982B34E8C")
    ICPPrivateKey : public IPrivateKey
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_KeyPin( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_KeyPin( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_CachePin( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_CachePin( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ChangePin( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICPPrivateKeyVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IPrivateKey, QueryInterface)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICPPrivateKey * This,
            /* [in][idldescattr] */ struct GUID *riid,
            /* [out][idldescattr] */ void **ppvObj,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(IPrivateKey, AddRef)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *AddRef )( 
            ICPPrivateKey * This,
            /* [retval][out] */ unsigned long *retval);
        
        DECLSPEC_XFGVIRT(IPrivateKey, Release)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *Release )( 
            ICPPrivateKey * This,
            /* [retval][out] */ unsigned long *retval);
        
        DECLSPEC_XFGVIRT(IPrivateKey, GetTypeInfoCount)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ICPPrivateKey * This,
            /* [out][idldescattr] */ unsigned UINT *pctinfo,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(IPrivateKey, GetTypeInfo)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ICPPrivateKey * This,
            /* [in][idldescattr] */ unsigned UINT itinfo,
            /* [in][idldescattr] */ unsigned long lcid,
            /* [out][idldescattr] */ void **pptinfo,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(IPrivateKey, GetIDsOfNames)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ICPPrivateKey * This,
            /* [in][idldescattr] */ struct GUID *riid,
            /* [in][idldescattr] */ signed char **rgszNames,
            /* [in][idldescattr] */ unsigned UINT cNames,
            /* [in][idldescattr] */ unsigned long lcid,
            /* [out][idldescattr] */ signed long *rgdispid,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(IPrivateKey, Invoke)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICPPrivateKey * This,
            /* [in][idldescattr] */ signed long dispidMember,
            /* [in][idldescattr] */ struct GUID *riid,
            /* [in][idldescattr] */ unsigned long lcid,
            /* [in][idldescattr] */ unsigned short wFlags,
            /* [in][idldescattr] */ struct DISPPARAMS *pdispparams,
            /* [out][idldescattr] */ VARIANT *pvarResult,
            /* [out][idldescattr] */ struct EXCEPINFO *pexcepinfo,
            /* [out][idldescattr] */ unsigned UINT *puArgErr,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(IPrivateKey, get_ContainerName)
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_ContainerName )( 
            ICPPrivateKey * This,
            /* [retval][out] */ BSTR *retval);
        
        DECLSPEC_XFGVIRT(IPrivateKey, get_UniqueContainerName)
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_UniqueContainerName )( 
            ICPPrivateKey * This,
            /* [retval][out] */ BSTR *retval);
        
        DECLSPEC_XFGVIRT(IPrivateKey, get_ProviderName)
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_ProviderName )( 
            ICPPrivateKey * This,
            /* [retval][out] */ BSTR *retval);
        
        DECLSPEC_XFGVIRT(IPrivateKey, get_ProviderType)
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_ProviderType )( 
            ICPPrivateKey * This,
            /* [retval][out] */ CAPICOM_PROV_TYPE *retval);
        
        DECLSPEC_XFGVIRT(IPrivateKey, get_KeySpec)
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_KeySpec )( 
            ICPPrivateKey * This,
            /* [retval][out] */ CAPICOM_KEY_SPEC *retval);
        
        DECLSPEC_XFGVIRT(IPrivateKey, IsAccessible)
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *IsAccessible )( 
            ICPPrivateKey * This,
            /* [retval][out] */ BOOLEAN *retval);
        
        DECLSPEC_XFGVIRT(IPrivateKey, IsProtected)
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *IsProtected )( 
            ICPPrivateKey * This,
            /* [retval][out] */ BOOLEAN *retval);
        
        DECLSPEC_XFGVIRT(IPrivateKey, IsExportable)
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *IsExportable )( 
            ICPPrivateKey * This,
            /* [retval][out] */ BOOLEAN *retval);
        
        DECLSPEC_XFGVIRT(IPrivateKey, IsRemovable)
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *IsRemovable )( 
            ICPPrivateKey * This,
            /* [retval][out] */ BOOLEAN *retval);
        
        DECLSPEC_XFGVIRT(IPrivateKey, IsMachineKeyset)
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *IsMachineKeyset )( 
            ICPPrivateKey * This,
            /* [retval][out] */ BOOLEAN *retval);
        
        DECLSPEC_XFGVIRT(IPrivateKey, IsHardwareDevice)
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *IsHardwareDevice )( 
            ICPPrivateKey * This,
            /* [retval][out] */ BOOLEAN *retval);
        
        DECLSPEC_XFGVIRT(IPrivateKey, Open)
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *Open )( 
            ICPPrivateKey * This,
            /* [in][idldescattr] */ BSTR ContainerName,
            /* [in][idldescattr] */ BSTR ProviderName,
            /* [in][idldescattr] */ CAPICOM_PROV_TYPE ProviderType,
            /* [in][idldescattr] */ CAPICOM_KEY_SPEC KeySpec,
            /* [in][idldescattr] */ CAPICOM_STORE_LOCATION StoreLocation,
            /* [in][idldescattr] */ BOOLEAN bCheckExistence,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(IPrivateKey, Delete)
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *Delete )( 
            ICPPrivateKey * This,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(ICPPrivateKey, get_KeyPin)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_KeyPin )( 
            ICPPrivateKey * This,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(ICPPrivateKey, put_KeyPin)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_KeyPin )( 
            ICPPrivateKey * This,
            /* [in] */ BSTR newVal);
        
        DECLSPEC_XFGVIRT(ICPPrivateKey, get_CachePin)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_CachePin )( 
            ICPPrivateKey * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        DECLSPEC_XFGVIRT(ICPPrivateKey, put_CachePin)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_CachePin )( 
            ICPPrivateKey * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        DECLSPEC_XFGVIRT(ICPPrivateKey, ChangePin)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ChangePin )( 
            ICPPrivateKey * This);
        
        END_INTERFACE
    } ICPPrivateKeyVtbl;

    interface ICPPrivateKey
    {
        CONST_VTBL struct ICPPrivateKeyVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICPPrivateKey_QueryInterface(This,riid,ppvObj,retval)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObj,retval) ) 

#define ICPPrivateKey_AddRef(This,retval)	\
    ( (This)->lpVtbl -> AddRef(This,retval) ) 

#define ICPPrivateKey_Release(This,retval)	\
    ( (This)->lpVtbl -> Release(This,retval) ) 

#define ICPPrivateKey_GetTypeInfoCount(This,pctinfo,retval)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo,retval) ) 

#define ICPPrivateKey_GetTypeInfo(This,itinfo,lcid,pptinfo,retval)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,itinfo,lcid,pptinfo,retval) ) 

#define ICPPrivateKey_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgdispid,retval)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgdispid,retval) ) 

#define ICPPrivateKey_Invoke(This,dispidMember,riid,lcid,wFlags,pdispparams,pvarResult,pexcepinfo,puArgErr,retval)	\
    ( (This)->lpVtbl -> Invoke(This,dispidMember,riid,lcid,wFlags,pdispparams,pvarResult,pexcepinfo,puArgErr,retval) ) 

#define ICPPrivateKey_get_ContainerName(This,retval)	\
    ( (This)->lpVtbl -> get_ContainerName(This,retval) ) 

#define ICPPrivateKey_get_UniqueContainerName(This,retval)	\
    ( (This)->lpVtbl -> get_UniqueContainerName(This,retval) ) 

#define ICPPrivateKey_get_ProviderName(This,retval)	\
    ( (This)->lpVtbl -> get_ProviderName(This,retval) ) 

#define ICPPrivateKey_get_ProviderType(This,retval)	\
    ( (This)->lpVtbl -> get_ProviderType(This,retval) ) 

#define ICPPrivateKey_get_KeySpec(This,retval)	\
    ( (This)->lpVtbl -> get_KeySpec(This,retval) ) 

#define ICPPrivateKey_IsAccessible(This,retval)	\
    ( (This)->lpVtbl -> IsAccessible(This,retval) ) 

#define ICPPrivateKey_IsProtected(This,retval)	\
    ( (This)->lpVtbl -> IsProtected(This,retval) ) 

#define ICPPrivateKey_IsExportable(This,retval)	\
    ( (This)->lpVtbl -> IsExportable(This,retval) ) 

#define ICPPrivateKey_IsRemovable(This,retval)	\
    ( (This)->lpVtbl -> IsRemovable(This,retval) ) 

#define ICPPrivateKey_IsMachineKeyset(This,retval)	\
    ( (This)->lpVtbl -> IsMachineKeyset(This,retval) ) 

#define ICPPrivateKey_IsHardwareDevice(This,retval)	\
    ( (This)->lpVtbl -> IsHardwareDevice(This,retval) ) 

#define ICPPrivateKey_Open(This,ContainerName,ProviderName,ProviderType,KeySpec,StoreLocation,bCheckExistence,retval)	\
    ( (This)->lpVtbl -> Open(This,ContainerName,ProviderName,ProviderType,KeySpec,StoreLocation,bCheckExistence,retval) ) 

#define ICPPrivateKey_Delete(This,retval)	\
    ( (This)->lpVtbl -> Delete(This,retval) ) 


#define ICPPrivateKey_get_KeyPin(This,pVal)	\
    ( (This)->lpVtbl -> get_KeyPin(This,pVal) ) 

#define ICPPrivateKey_put_KeyPin(This,newVal)	\
    ( (This)->lpVtbl -> put_KeyPin(This,newVal) ) 

#define ICPPrivateKey_get_CachePin(This,pVal)	\
    ( (This)->lpVtbl -> get_CachePin(This,pVal) ) 

#define ICPPrivateKey_put_CachePin(This,newVal)	\
    ( (This)->lpVtbl -> put_CachePin(This,newVal) ) 

#define ICPPrivateKey_ChangePin(This)	\
    ( (This)->lpVtbl -> ChangePin(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICPPrivateKey_INTERFACE_DEFINED__ */


#ifndef __ICPPrivateKey2_INTERFACE_DEFINED__
#define __ICPPrivateKey2_INTERFACE_DEFINED__

/* interface ICPPrivateKey2 */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_ICPPrivateKey2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("C12F1552-C631-4AFE-9BDE-4D0982B34E8C")
    ICPPrivateKey2 : public ICPPrivateKey
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_IsDefaultPin( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_IsDefaultPin( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICPPrivateKey2Vtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IPrivateKey, QueryInterface)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICPPrivateKey2 * This,
            /* [in][idldescattr] */ struct GUID *riid,
            /* [out][idldescattr] */ void **ppvObj,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(IPrivateKey, AddRef)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *AddRef )( 
            ICPPrivateKey2 * This,
            /* [retval][out] */ unsigned long *retval);
        
        DECLSPEC_XFGVIRT(IPrivateKey, Release)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *Release )( 
            ICPPrivateKey2 * This,
            /* [retval][out] */ unsigned long *retval);
        
        DECLSPEC_XFGVIRT(IPrivateKey, GetTypeInfoCount)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ICPPrivateKey2 * This,
            /* [out][idldescattr] */ unsigned UINT *pctinfo,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(IPrivateKey, GetTypeInfo)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ICPPrivateKey2 * This,
            /* [in][idldescattr] */ unsigned UINT itinfo,
            /* [in][idldescattr] */ unsigned long lcid,
            /* [out][idldescattr] */ void **pptinfo,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(IPrivateKey, GetIDsOfNames)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ICPPrivateKey2 * This,
            /* [in][idldescattr] */ struct GUID *riid,
            /* [in][idldescattr] */ signed char **rgszNames,
            /* [in][idldescattr] */ unsigned UINT cNames,
            /* [in][idldescattr] */ unsigned long lcid,
            /* [out][idldescattr] */ signed long *rgdispid,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(IPrivateKey, Invoke)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICPPrivateKey2 * This,
            /* [in][idldescattr] */ signed long dispidMember,
            /* [in][idldescattr] */ struct GUID *riid,
            /* [in][idldescattr] */ unsigned long lcid,
            /* [in][idldescattr] */ unsigned short wFlags,
            /* [in][idldescattr] */ struct DISPPARAMS *pdispparams,
            /* [out][idldescattr] */ VARIANT *pvarResult,
            /* [out][idldescattr] */ struct EXCEPINFO *pexcepinfo,
            /* [out][idldescattr] */ unsigned UINT *puArgErr,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(IPrivateKey, get_ContainerName)
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_ContainerName )( 
            ICPPrivateKey2 * This,
            /* [retval][out] */ BSTR *retval);
        
        DECLSPEC_XFGVIRT(IPrivateKey, get_UniqueContainerName)
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_UniqueContainerName )( 
            ICPPrivateKey2 * This,
            /* [retval][out] */ BSTR *retval);
        
        DECLSPEC_XFGVIRT(IPrivateKey, get_ProviderName)
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_ProviderName )( 
            ICPPrivateKey2 * This,
            /* [retval][out] */ BSTR *retval);
        
        DECLSPEC_XFGVIRT(IPrivateKey, get_ProviderType)
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_ProviderType )( 
            ICPPrivateKey2 * This,
            /* [retval][out] */ CAPICOM_PROV_TYPE *retval);
        
        DECLSPEC_XFGVIRT(IPrivateKey, get_KeySpec)
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_KeySpec )( 
            ICPPrivateKey2 * This,
            /* [retval][out] */ CAPICOM_KEY_SPEC *retval);
        
        DECLSPEC_XFGVIRT(IPrivateKey, IsAccessible)
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *IsAccessible )( 
            ICPPrivateKey2 * This,
            /* [retval][out] */ BOOLEAN *retval);
        
        DECLSPEC_XFGVIRT(IPrivateKey, IsProtected)
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *IsProtected )( 
            ICPPrivateKey2 * This,
            /* [retval][out] */ BOOLEAN *retval);
        
        DECLSPEC_XFGVIRT(IPrivateKey, IsExportable)
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *IsExportable )( 
            ICPPrivateKey2 * This,
            /* [retval][out] */ BOOLEAN *retval);
        
        DECLSPEC_XFGVIRT(IPrivateKey, IsRemovable)
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *IsRemovable )( 
            ICPPrivateKey2 * This,
            /* [retval][out] */ BOOLEAN *retval);
        
        DECLSPEC_XFGVIRT(IPrivateKey, IsMachineKeyset)
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *IsMachineKeyset )( 
            ICPPrivateKey2 * This,
            /* [retval][out] */ BOOLEAN *retval);
        
        DECLSPEC_XFGVIRT(IPrivateKey, IsHardwareDevice)
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *IsHardwareDevice )( 
            ICPPrivateKey2 * This,
            /* [retval][out] */ BOOLEAN *retval);
        
        DECLSPEC_XFGVIRT(IPrivateKey, Open)
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *Open )( 
            ICPPrivateKey2 * This,
            /* [in][idldescattr] */ BSTR ContainerName,
            /* [in][idldescattr] */ BSTR ProviderName,
            /* [in][idldescattr] */ CAPICOM_PROV_TYPE ProviderType,
            /* [in][idldescattr] */ CAPICOM_KEY_SPEC KeySpec,
            /* [in][idldescattr] */ CAPICOM_STORE_LOCATION StoreLocation,
            /* [in][idldescattr] */ BOOLEAN bCheckExistence,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(IPrivateKey, Delete)
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *Delete )( 
            ICPPrivateKey2 * This,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(ICPPrivateKey, get_KeyPin)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_KeyPin )( 
            ICPPrivateKey2 * This,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(ICPPrivateKey, put_KeyPin)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_KeyPin )( 
            ICPPrivateKey2 * This,
            /* [in] */ BSTR newVal);
        
        DECLSPEC_XFGVIRT(ICPPrivateKey, get_CachePin)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_CachePin )( 
            ICPPrivateKey2 * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        DECLSPEC_XFGVIRT(ICPPrivateKey, put_CachePin)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_CachePin )( 
            ICPPrivateKey2 * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        DECLSPEC_XFGVIRT(ICPPrivateKey, ChangePin)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ChangePin )( 
            ICPPrivateKey2 * This);
        
        DECLSPEC_XFGVIRT(ICPPrivateKey2, get_IsDefaultPin)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_IsDefaultPin )( 
            ICPPrivateKey2 * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        DECLSPEC_XFGVIRT(ICPPrivateKey2, put_IsDefaultPin)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_IsDefaultPin )( 
            ICPPrivateKey2 * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        END_INTERFACE
    } ICPPrivateKey2Vtbl;

    interface ICPPrivateKey2
    {
        CONST_VTBL struct ICPPrivateKey2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICPPrivateKey2_QueryInterface(This,riid,ppvObj,retval)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObj,retval) ) 

#define ICPPrivateKey2_AddRef(This,retval)	\
    ( (This)->lpVtbl -> AddRef(This,retval) ) 

#define ICPPrivateKey2_Release(This,retval)	\
    ( (This)->lpVtbl -> Release(This,retval) ) 

#define ICPPrivateKey2_GetTypeInfoCount(This,pctinfo,retval)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo,retval) ) 

#define ICPPrivateKey2_GetTypeInfo(This,itinfo,lcid,pptinfo,retval)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,itinfo,lcid,pptinfo,retval) ) 

#define ICPPrivateKey2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgdispid,retval)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgdispid,retval) ) 

#define ICPPrivateKey2_Invoke(This,dispidMember,riid,lcid,wFlags,pdispparams,pvarResult,pexcepinfo,puArgErr,retval)	\
    ( (This)->lpVtbl -> Invoke(This,dispidMember,riid,lcid,wFlags,pdispparams,pvarResult,pexcepinfo,puArgErr,retval) ) 

#define ICPPrivateKey2_get_ContainerName(This,retval)	\
    ( (This)->lpVtbl -> get_ContainerName(This,retval) ) 

#define ICPPrivateKey2_get_UniqueContainerName(This,retval)	\
    ( (This)->lpVtbl -> get_UniqueContainerName(This,retval) ) 

#define ICPPrivateKey2_get_ProviderName(This,retval)	\
    ( (This)->lpVtbl -> get_ProviderName(This,retval) ) 

#define ICPPrivateKey2_get_ProviderType(This,retval)	\
    ( (This)->lpVtbl -> get_ProviderType(This,retval) ) 

#define ICPPrivateKey2_get_KeySpec(This,retval)	\
    ( (This)->lpVtbl -> get_KeySpec(This,retval) ) 

#define ICPPrivateKey2_IsAccessible(This,retval)	\
    ( (This)->lpVtbl -> IsAccessible(This,retval) ) 

#define ICPPrivateKey2_IsProtected(This,retval)	\
    ( (This)->lpVtbl -> IsProtected(This,retval) ) 

#define ICPPrivateKey2_IsExportable(This,retval)	\
    ( (This)->lpVtbl -> IsExportable(This,retval) ) 

#define ICPPrivateKey2_IsRemovable(This,retval)	\
    ( (This)->lpVtbl -> IsRemovable(This,retval) ) 

#define ICPPrivateKey2_IsMachineKeyset(This,retval)	\
    ( (This)->lpVtbl -> IsMachineKeyset(This,retval) ) 

#define ICPPrivateKey2_IsHardwareDevice(This,retval)	\
    ( (This)->lpVtbl -> IsHardwareDevice(This,retval) ) 

#define ICPPrivateKey2_Open(This,ContainerName,ProviderName,ProviderType,KeySpec,StoreLocation,bCheckExistence,retval)	\
    ( (This)->lpVtbl -> Open(This,ContainerName,ProviderName,ProviderType,KeySpec,StoreLocation,bCheckExistence,retval) ) 

#define ICPPrivateKey2_Delete(This,retval)	\
    ( (This)->lpVtbl -> Delete(This,retval) ) 


#define ICPPrivateKey2_get_KeyPin(This,pVal)	\
    ( (This)->lpVtbl -> get_KeyPin(This,pVal) ) 

#define ICPPrivateKey2_put_KeyPin(This,newVal)	\
    ( (This)->lpVtbl -> put_KeyPin(This,newVal) ) 

#define ICPPrivateKey2_get_CachePin(This,pVal)	\
    ( (This)->lpVtbl -> get_CachePin(This,pVal) ) 

#define ICPPrivateKey2_put_CachePin(This,newVal)	\
    ( (This)->lpVtbl -> put_CachePin(This,newVal) ) 

#define ICPPrivateKey2_ChangePin(This)	\
    ( (This)->lpVtbl -> ChangePin(This) ) 


#define ICPPrivateKey2_get_IsDefaultPin(This,pVal)	\
    ( (This)->lpVtbl -> get_IsDefaultPin(This,pVal) ) 

#define ICPPrivateKey2_put_IsDefaultPin(This,newVal)	\
    ( (This)->lpVtbl -> put_IsDefaultPin(This,newVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICPPrivateKey2_INTERFACE_DEFINED__ */


#ifndef __ICPPrivateKey3_INTERFACE_DEFINED__
#define __ICPPrivateKey3_INTERFACE_DEFINED__

/* interface ICPPrivateKey3 */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_ICPPrivateKey3;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("C12F1552-C631-4AFE-9BDE-4D0982B34E8D")
    ICPPrivateKey3 : public ICPPrivateKey2
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_CarrierFlags( 
            /* [retval][out] */ LONG *pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICPPrivateKey3Vtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IPrivateKey, QueryInterface)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICPPrivateKey3 * This,
            /* [in][idldescattr] */ struct GUID *riid,
            /* [out][idldescattr] */ void **ppvObj,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(IPrivateKey, AddRef)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *AddRef )( 
            ICPPrivateKey3 * This,
            /* [retval][out] */ unsigned long *retval);
        
        DECLSPEC_XFGVIRT(IPrivateKey, Release)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *Release )( 
            ICPPrivateKey3 * This,
            /* [retval][out] */ unsigned long *retval);
        
        DECLSPEC_XFGVIRT(IPrivateKey, GetTypeInfoCount)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ICPPrivateKey3 * This,
            /* [out][idldescattr] */ unsigned UINT *pctinfo,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(IPrivateKey, GetTypeInfo)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ICPPrivateKey3 * This,
            /* [in][idldescattr] */ unsigned UINT itinfo,
            /* [in][idldescattr] */ unsigned long lcid,
            /* [out][idldescattr] */ void **pptinfo,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(IPrivateKey, GetIDsOfNames)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ICPPrivateKey3 * This,
            /* [in][idldescattr] */ struct GUID *riid,
            /* [in][idldescattr] */ signed char **rgszNames,
            /* [in][idldescattr] */ unsigned UINT cNames,
            /* [in][idldescattr] */ unsigned long lcid,
            /* [out][idldescattr] */ signed long *rgdispid,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(IPrivateKey, Invoke)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICPPrivateKey3 * This,
            /* [in][idldescattr] */ signed long dispidMember,
            /* [in][idldescattr] */ struct GUID *riid,
            /* [in][idldescattr] */ unsigned long lcid,
            /* [in][idldescattr] */ unsigned short wFlags,
            /* [in][idldescattr] */ struct DISPPARAMS *pdispparams,
            /* [out][idldescattr] */ VARIANT *pvarResult,
            /* [out][idldescattr] */ struct EXCEPINFO *pexcepinfo,
            /* [out][idldescattr] */ unsigned UINT *puArgErr,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(IPrivateKey, get_ContainerName)
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_ContainerName )( 
            ICPPrivateKey3 * This,
            /* [retval][out] */ BSTR *retval);
        
        DECLSPEC_XFGVIRT(IPrivateKey, get_UniqueContainerName)
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_UniqueContainerName )( 
            ICPPrivateKey3 * This,
            /* [retval][out] */ BSTR *retval);
        
        DECLSPEC_XFGVIRT(IPrivateKey, get_ProviderName)
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_ProviderName )( 
            ICPPrivateKey3 * This,
            /* [retval][out] */ BSTR *retval);
        
        DECLSPEC_XFGVIRT(IPrivateKey, get_ProviderType)
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_ProviderType )( 
            ICPPrivateKey3 * This,
            /* [retval][out] */ CAPICOM_PROV_TYPE *retval);
        
        DECLSPEC_XFGVIRT(IPrivateKey, get_KeySpec)
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_KeySpec )( 
            ICPPrivateKey3 * This,
            /* [retval][out] */ CAPICOM_KEY_SPEC *retval);
        
        DECLSPEC_XFGVIRT(IPrivateKey, IsAccessible)
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *IsAccessible )( 
            ICPPrivateKey3 * This,
            /* [retval][out] */ BOOLEAN *retval);
        
        DECLSPEC_XFGVIRT(IPrivateKey, IsProtected)
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *IsProtected )( 
            ICPPrivateKey3 * This,
            /* [retval][out] */ BOOLEAN *retval);
        
        DECLSPEC_XFGVIRT(IPrivateKey, IsExportable)
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *IsExportable )( 
            ICPPrivateKey3 * This,
            /* [retval][out] */ BOOLEAN *retval);
        
        DECLSPEC_XFGVIRT(IPrivateKey, IsRemovable)
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *IsRemovable )( 
            ICPPrivateKey3 * This,
            /* [retval][out] */ BOOLEAN *retval);
        
        DECLSPEC_XFGVIRT(IPrivateKey, IsMachineKeyset)
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *IsMachineKeyset )( 
            ICPPrivateKey3 * This,
            /* [retval][out] */ BOOLEAN *retval);
        
        DECLSPEC_XFGVIRT(IPrivateKey, IsHardwareDevice)
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *IsHardwareDevice )( 
            ICPPrivateKey3 * This,
            /* [retval][out] */ BOOLEAN *retval);
        
        DECLSPEC_XFGVIRT(IPrivateKey, Open)
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *Open )( 
            ICPPrivateKey3 * This,
            /* [in][idldescattr] */ BSTR ContainerName,
            /* [in][idldescattr] */ BSTR ProviderName,
            /* [in][idldescattr] */ CAPICOM_PROV_TYPE ProviderType,
            /* [in][idldescattr] */ CAPICOM_KEY_SPEC KeySpec,
            /* [in][idldescattr] */ CAPICOM_STORE_LOCATION StoreLocation,
            /* [in][idldescattr] */ BOOLEAN bCheckExistence,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(IPrivateKey, Delete)
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *Delete )( 
            ICPPrivateKey3 * This,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(ICPPrivateKey, get_KeyPin)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_KeyPin )( 
            ICPPrivateKey3 * This,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(ICPPrivateKey, put_KeyPin)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_KeyPin )( 
            ICPPrivateKey3 * This,
            /* [in] */ BSTR newVal);
        
        DECLSPEC_XFGVIRT(ICPPrivateKey, get_CachePin)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_CachePin )( 
            ICPPrivateKey3 * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        DECLSPEC_XFGVIRT(ICPPrivateKey, put_CachePin)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_CachePin )( 
            ICPPrivateKey3 * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        DECLSPEC_XFGVIRT(ICPPrivateKey, ChangePin)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ChangePin )( 
            ICPPrivateKey3 * This);
        
        DECLSPEC_XFGVIRT(ICPPrivateKey2, get_IsDefaultPin)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_IsDefaultPin )( 
            ICPPrivateKey3 * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        DECLSPEC_XFGVIRT(ICPPrivateKey2, put_IsDefaultPin)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_IsDefaultPin )( 
            ICPPrivateKey3 * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        DECLSPEC_XFGVIRT(ICPPrivateKey3, get_CarrierFlags)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_CarrierFlags )( 
            ICPPrivateKey3 * This,
            /* [retval][out] */ LONG *pVal);
        
        END_INTERFACE
    } ICPPrivateKey3Vtbl;

    interface ICPPrivateKey3
    {
        CONST_VTBL struct ICPPrivateKey3Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICPPrivateKey3_QueryInterface(This,riid,ppvObj,retval)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObj,retval) ) 

#define ICPPrivateKey3_AddRef(This,retval)	\
    ( (This)->lpVtbl -> AddRef(This,retval) ) 

#define ICPPrivateKey3_Release(This,retval)	\
    ( (This)->lpVtbl -> Release(This,retval) ) 

#define ICPPrivateKey3_GetTypeInfoCount(This,pctinfo,retval)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo,retval) ) 

#define ICPPrivateKey3_GetTypeInfo(This,itinfo,lcid,pptinfo,retval)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,itinfo,lcid,pptinfo,retval) ) 

#define ICPPrivateKey3_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgdispid,retval)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgdispid,retval) ) 

#define ICPPrivateKey3_Invoke(This,dispidMember,riid,lcid,wFlags,pdispparams,pvarResult,pexcepinfo,puArgErr,retval)	\
    ( (This)->lpVtbl -> Invoke(This,dispidMember,riid,lcid,wFlags,pdispparams,pvarResult,pexcepinfo,puArgErr,retval) ) 

#define ICPPrivateKey3_get_ContainerName(This,retval)	\
    ( (This)->lpVtbl -> get_ContainerName(This,retval) ) 

#define ICPPrivateKey3_get_UniqueContainerName(This,retval)	\
    ( (This)->lpVtbl -> get_UniqueContainerName(This,retval) ) 

#define ICPPrivateKey3_get_ProviderName(This,retval)	\
    ( (This)->lpVtbl -> get_ProviderName(This,retval) ) 

#define ICPPrivateKey3_get_ProviderType(This,retval)	\
    ( (This)->lpVtbl -> get_ProviderType(This,retval) ) 

#define ICPPrivateKey3_get_KeySpec(This,retval)	\
    ( (This)->lpVtbl -> get_KeySpec(This,retval) ) 

#define ICPPrivateKey3_IsAccessible(This,retval)	\
    ( (This)->lpVtbl -> IsAccessible(This,retval) ) 

#define ICPPrivateKey3_IsProtected(This,retval)	\
    ( (This)->lpVtbl -> IsProtected(This,retval) ) 

#define ICPPrivateKey3_IsExportable(This,retval)	\
    ( (This)->lpVtbl -> IsExportable(This,retval) ) 

#define ICPPrivateKey3_IsRemovable(This,retval)	\
    ( (This)->lpVtbl -> IsRemovable(This,retval) ) 

#define ICPPrivateKey3_IsMachineKeyset(This,retval)	\
    ( (This)->lpVtbl -> IsMachineKeyset(This,retval) ) 

#define ICPPrivateKey3_IsHardwareDevice(This,retval)	\
    ( (This)->lpVtbl -> IsHardwareDevice(This,retval) ) 

#define ICPPrivateKey3_Open(This,ContainerName,ProviderName,ProviderType,KeySpec,StoreLocation,bCheckExistence,retval)	\
    ( (This)->lpVtbl -> Open(This,ContainerName,ProviderName,ProviderType,KeySpec,StoreLocation,bCheckExistence,retval) ) 

#define ICPPrivateKey3_Delete(This,retval)	\
    ( (This)->lpVtbl -> Delete(This,retval) ) 


#define ICPPrivateKey3_get_KeyPin(This,pVal)	\
    ( (This)->lpVtbl -> get_KeyPin(This,pVal) ) 

#define ICPPrivateKey3_put_KeyPin(This,newVal)	\
    ( (This)->lpVtbl -> put_KeyPin(This,newVal) ) 

#define ICPPrivateKey3_get_CachePin(This,pVal)	\
    ( (This)->lpVtbl -> get_CachePin(This,pVal) ) 

#define ICPPrivateKey3_put_CachePin(This,newVal)	\
    ( (This)->lpVtbl -> put_CachePin(This,newVal) ) 

#define ICPPrivateKey3_ChangePin(This)	\
    ( (This)->lpVtbl -> ChangePin(This) ) 


#define ICPPrivateKey3_get_IsDefaultPin(This,pVal)	\
    ( (This)->lpVtbl -> get_IsDefaultPin(This,pVal) ) 

#define ICPPrivateKey3_put_IsDefaultPin(This,newVal)	\
    ( (This)->lpVtbl -> put_IsDefaultPin(This,newVal) ) 


#define ICPPrivateKey3_get_CarrierFlags(This,pVal)	\
    ( (This)->lpVtbl -> get_CarrierFlags(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICPPrivateKey3_INTERFACE_DEFINED__ */


#ifndef __ICPPrivateKey4_INTERFACE_DEFINED__
#define __ICPPrivateKey4_INTERFACE_DEFINED__

/* interface ICPPrivateKey4 */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_ICPPrivateKey4;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("C12F1552-C631-4AFE-9BDE-4D0982B34E8E")
    ICPPrivateKey4 : public ICPPrivateKey3
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CacheKey( 
            /* [in] */ VARIANT_BOOL Val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICPPrivateKey4Vtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IPrivateKey, QueryInterface)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICPPrivateKey4 * This,
            /* [in][idldescattr] */ struct GUID *riid,
            /* [out][idldescattr] */ void **ppvObj,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(IPrivateKey, AddRef)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *AddRef )( 
            ICPPrivateKey4 * This,
            /* [retval][out] */ unsigned long *retval);
        
        DECLSPEC_XFGVIRT(IPrivateKey, Release)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *Release )( 
            ICPPrivateKey4 * This,
            /* [retval][out] */ unsigned long *retval);
        
        DECLSPEC_XFGVIRT(IPrivateKey, GetTypeInfoCount)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ICPPrivateKey4 * This,
            /* [out][idldescattr] */ unsigned UINT *pctinfo,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(IPrivateKey, GetTypeInfo)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ICPPrivateKey4 * This,
            /* [in][idldescattr] */ unsigned UINT itinfo,
            /* [in][idldescattr] */ unsigned long lcid,
            /* [out][idldescattr] */ void **pptinfo,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(IPrivateKey, GetIDsOfNames)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ICPPrivateKey4 * This,
            /* [in][idldescattr] */ struct GUID *riid,
            /* [in][idldescattr] */ signed char **rgszNames,
            /* [in][idldescattr] */ unsigned UINT cNames,
            /* [in][idldescattr] */ unsigned long lcid,
            /* [out][idldescattr] */ signed long *rgdispid,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(IPrivateKey, Invoke)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICPPrivateKey4 * This,
            /* [in][idldescattr] */ signed long dispidMember,
            /* [in][idldescattr] */ struct GUID *riid,
            /* [in][idldescattr] */ unsigned long lcid,
            /* [in][idldescattr] */ unsigned short wFlags,
            /* [in][idldescattr] */ struct DISPPARAMS *pdispparams,
            /* [out][idldescattr] */ VARIANT *pvarResult,
            /* [out][idldescattr] */ struct EXCEPINFO *pexcepinfo,
            /* [out][idldescattr] */ unsigned UINT *puArgErr,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(IPrivateKey, get_ContainerName)
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_ContainerName )( 
            ICPPrivateKey4 * This,
            /* [retval][out] */ BSTR *retval);
        
        DECLSPEC_XFGVIRT(IPrivateKey, get_UniqueContainerName)
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_UniqueContainerName )( 
            ICPPrivateKey4 * This,
            /* [retval][out] */ BSTR *retval);
        
        DECLSPEC_XFGVIRT(IPrivateKey, get_ProviderName)
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_ProviderName )( 
            ICPPrivateKey4 * This,
            /* [retval][out] */ BSTR *retval);
        
        DECLSPEC_XFGVIRT(IPrivateKey, get_ProviderType)
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_ProviderType )( 
            ICPPrivateKey4 * This,
            /* [retval][out] */ CAPICOM_PROV_TYPE *retval);
        
        DECLSPEC_XFGVIRT(IPrivateKey, get_KeySpec)
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_KeySpec )( 
            ICPPrivateKey4 * This,
            /* [retval][out] */ CAPICOM_KEY_SPEC *retval);
        
        DECLSPEC_XFGVIRT(IPrivateKey, IsAccessible)
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *IsAccessible )( 
            ICPPrivateKey4 * This,
            /* [retval][out] */ BOOLEAN *retval);
        
        DECLSPEC_XFGVIRT(IPrivateKey, IsProtected)
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *IsProtected )( 
            ICPPrivateKey4 * This,
            /* [retval][out] */ BOOLEAN *retval);
        
        DECLSPEC_XFGVIRT(IPrivateKey, IsExportable)
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *IsExportable )( 
            ICPPrivateKey4 * This,
            /* [retval][out] */ BOOLEAN *retval);
        
        DECLSPEC_XFGVIRT(IPrivateKey, IsRemovable)
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *IsRemovable )( 
            ICPPrivateKey4 * This,
            /* [retval][out] */ BOOLEAN *retval);
        
        DECLSPEC_XFGVIRT(IPrivateKey, IsMachineKeyset)
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *IsMachineKeyset )( 
            ICPPrivateKey4 * This,
            /* [retval][out] */ BOOLEAN *retval);
        
        DECLSPEC_XFGVIRT(IPrivateKey, IsHardwareDevice)
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *IsHardwareDevice )( 
            ICPPrivateKey4 * This,
            /* [retval][out] */ BOOLEAN *retval);
        
        DECLSPEC_XFGVIRT(IPrivateKey, Open)
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *Open )( 
            ICPPrivateKey4 * This,
            /* [in][idldescattr] */ BSTR ContainerName,
            /* [in][idldescattr] */ BSTR ProviderName,
            /* [in][idldescattr] */ CAPICOM_PROV_TYPE ProviderType,
            /* [in][idldescattr] */ CAPICOM_KEY_SPEC KeySpec,
            /* [in][idldescattr] */ CAPICOM_STORE_LOCATION StoreLocation,
            /* [in][idldescattr] */ BOOLEAN bCheckExistence,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(IPrivateKey, Delete)
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *Delete )( 
            ICPPrivateKey4 * This,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(ICPPrivateKey, get_KeyPin)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_KeyPin )( 
            ICPPrivateKey4 * This,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(ICPPrivateKey, put_KeyPin)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_KeyPin )( 
            ICPPrivateKey4 * This,
            /* [in] */ BSTR newVal);
        
        DECLSPEC_XFGVIRT(ICPPrivateKey, get_CachePin)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_CachePin )( 
            ICPPrivateKey4 * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        DECLSPEC_XFGVIRT(ICPPrivateKey, put_CachePin)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_CachePin )( 
            ICPPrivateKey4 * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        DECLSPEC_XFGVIRT(ICPPrivateKey, ChangePin)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ChangePin )( 
            ICPPrivateKey4 * This);
        
        DECLSPEC_XFGVIRT(ICPPrivateKey2, get_IsDefaultPin)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_IsDefaultPin )( 
            ICPPrivateKey4 * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        DECLSPEC_XFGVIRT(ICPPrivateKey2, put_IsDefaultPin)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_IsDefaultPin )( 
            ICPPrivateKey4 * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        DECLSPEC_XFGVIRT(ICPPrivateKey3, get_CarrierFlags)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_CarrierFlags )( 
            ICPPrivateKey4 * This,
            /* [retval][out] */ LONG *pVal);
        
        DECLSPEC_XFGVIRT(ICPPrivateKey4, CacheKey)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CacheKey )( 
            ICPPrivateKey4 * This,
            /* [in] */ VARIANT_BOOL Val);
        
        END_INTERFACE
    } ICPPrivateKey4Vtbl;

    interface ICPPrivateKey4
    {
        CONST_VTBL struct ICPPrivateKey4Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICPPrivateKey4_QueryInterface(This,riid,ppvObj,retval)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObj,retval) ) 

#define ICPPrivateKey4_AddRef(This,retval)	\
    ( (This)->lpVtbl -> AddRef(This,retval) ) 

#define ICPPrivateKey4_Release(This,retval)	\
    ( (This)->lpVtbl -> Release(This,retval) ) 

#define ICPPrivateKey4_GetTypeInfoCount(This,pctinfo,retval)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo,retval) ) 

#define ICPPrivateKey4_GetTypeInfo(This,itinfo,lcid,pptinfo,retval)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,itinfo,lcid,pptinfo,retval) ) 

#define ICPPrivateKey4_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgdispid,retval)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgdispid,retval) ) 

#define ICPPrivateKey4_Invoke(This,dispidMember,riid,lcid,wFlags,pdispparams,pvarResult,pexcepinfo,puArgErr,retval)	\
    ( (This)->lpVtbl -> Invoke(This,dispidMember,riid,lcid,wFlags,pdispparams,pvarResult,pexcepinfo,puArgErr,retval) ) 

#define ICPPrivateKey4_get_ContainerName(This,retval)	\
    ( (This)->lpVtbl -> get_ContainerName(This,retval) ) 

#define ICPPrivateKey4_get_UniqueContainerName(This,retval)	\
    ( (This)->lpVtbl -> get_UniqueContainerName(This,retval) ) 

#define ICPPrivateKey4_get_ProviderName(This,retval)	\
    ( (This)->lpVtbl -> get_ProviderName(This,retval) ) 

#define ICPPrivateKey4_get_ProviderType(This,retval)	\
    ( (This)->lpVtbl -> get_ProviderType(This,retval) ) 

#define ICPPrivateKey4_get_KeySpec(This,retval)	\
    ( (This)->lpVtbl -> get_KeySpec(This,retval) ) 

#define ICPPrivateKey4_IsAccessible(This,retval)	\
    ( (This)->lpVtbl -> IsAccessible(This,retval) ) 

#define ICPPrivateKey4_IsProtected(This,retval)	\
    ( (This)->lpVtbl -> IsProtected(This,retval) ) 

#define ICPPrivateKey4_IsExportable(This,retval)	\
    ( (This)->lpVtbl -> IsExportable(This,retval) ) 

#define ICPPrivateKey4_IsRemovable(This,retval)	\
    ( (This)->lpVtbl -> IsRemovable(This,retval) ) 

#define ICPPrivateKey4_IsMachineKeyset(This,retval)	\
    ( (This)->lpVtbl -> IsMachineKeyset(This,retval) ) 

#define ICPPrivateKey4_IsHardwareDevice(This,retval)	\
    ( (This)->lpVtbl -> IsHardwareDevice(This,retval) ) 

#define ICPPrivateKey4_Open(This,ContainerName,ProviderName,ProviderType,KeySpec,StoreLocation,bCheckExistence,retval)	\
    ( (This)->lpVtbl -> Open(This,ContainerName,ProviderName,ProviderType,KeySpec,StoreLocation,bCheckExistence,retval) ) 

#define ICPPrivateKey4_Delete(This,retval)	\
    ( (This)->lpVtbl -> Delete(This,retval) ) 


#define ICPPrivateKey4_get_KeyPin(This,pVal)	\
    ( (This)->lpVtbl -> get_KeyPin(This,pVal) ) 

#define ICPPrivateKey4_put_KeyPin(This,newVal)	\
    ( (This)->lpVtbl -> put_KeyPin(This,newVal) ) 

#define ICPPrivateKey4_get_CachePin(This,pVal)	\
    ( (This)->lpVtbl -> get_CachePin(This,pVal) ) 

#define ICPPrivateKey4_put_CachePin(This,newVal)	\
    ( (This)->lpVtbl -> put_CachePin(This,newVal) ) 

#define ICPPrivateKey4_ChangePin(This)	\
    ( (This)->lpVtbl -> ChangePin(This) ) 


#define ICPPrivateKey4_get_IsDefaultPin(This,pVal)	\
    ( (This)->lpVtbl -> get_IsDefaultPin(This,pVal) ) 

#define ICPPrivateKey4_put_IsDefaultPin(This,newVal)	\
    ( (This)->lpVtbl -> put_IsDefaultPin(This,newVal) ) 


#define ICPPrivateKey4_get_CarrierFlags(This,pVal)	\
    ( (This)->lpVtbl -> get_CarrierFlags(This,pVal) ) 


#define ICPPrivateKey4_CacheKey(This,Val)	\
    ( (This)->lpVtbl -> CacheKey(This,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICPPrivateKey4_INTERFACE_DEFINED__ */


#ifndef __ICPSignedData_INTERFACE_DEFINED__
#define __ICPSignedData_INTERFACE_DEFINED__

/* interface ICPSignedData */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ICPSignedData;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3CE3D3E5-0815-4CCE-BAA6-F058A0EFF643")
    ICPSignedData : public ISignedData
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Display( 
            /* [defaultvalue][in] */ LONG hwndParent = 0,
            /* [defaultvalue][in] */ BSTR Title = (BSTR)L"÷ифровые подписи") = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICPSignedDataVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(ISignedData, QueryInterface)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICPSignedData * This,
            /* [in][idldescattr] */ struct GUID *riid,
            /* [out][idldescattr] */ void **ppvObj,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(ISignedData, AddRef)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *AddRef )( 
            ICPSignedData * This,
            /* [retval][out] */ unsigned long *retval);
        
        DECLSPEC_XFGVIRT(ISignedData, Release)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *Release )( 
            ICPSignedData * This,
            /* [retval][out] */ unsigned long *retval);
        
        DECLSPEC_XFGVIRT(ISignedData, GetTypeInfoCount)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ICPSignedData * This,
            /* [out][idldescattr] */ unsigned UINT *pctinfo,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(ISignedData, GetTypeInfo)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ICPSignedData * This,
            /* [in][idldescattr] */ unsigned UINT itinfo,
            /* [in][idldescattr] */ unsigned long lcid,
            /* [out][idldescattr] */ void **pptinfo,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(ISignedData, GetIDsOfNames)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ICPSignedData * This,
            /* [in][idldescattr] */ struct GUID *riid,
            /* [in][idldescattr] */ signed char **rgszNames,
            /* [in][idldescattr] */ unsigned UINT cNames,
            /* [in][idldescattr] */ unsigned long lcid,
            /* [out][idldescattr] */ signed long *rgdispid,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(ISignedData, Invoke)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICPSignedData * This,
            /* [in][idldescattr] */ signed long dispidMember,
            /* [in][idldescattr] */ struct GUID *riid,
            /* [in][idldescattr] */ unsigned long lcid,
            /* [in][idldescattr] */ unsigned short wFlags,
            /* [in][idldescattr] */ struct DISPPARAMS *pdispparams,
            /* [out][idldescattr] */ VARIANT *pvarResult,
            /* [out][idldescattr] */ struct EXCEPINFO *pexcepinfo,
            /* [out][idldescattr] */ unsigned UINT *puArgErr,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(ISignedData, put_Content)
        /* [id][propput][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *put_Content )( 
            ICPSignedData * This,
            /* [in][idldescattr] */ BSTR noname,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(ISignedData, get_Content)
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_Content )( 
            ICPSignedData * This,
            /* [retval][out] */ BSTR *retval);
        
        DECLSPEC_XFGVIRT(ISignedData, get_Signers)
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_Signers )( 
            ICPSignedData * This,
            /* [retval][out] */ ISigners **retval);
        
        DECLSPEC_XFGVIRT(ISignedData, get_Certificates)
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_Certificates )( 
            ICPSignedData * This,
            /* [retval][out] */ ICertificates **retval);
        
        DECLSPEC_XFGVIRT(ISignedData, Sign)
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *Sign )( 
            ICPSignedData * This,
            /* [in][idldescattr] */ ISigner *pSigner,
            /* [in][idldescattr] */ BOOLEAN bDetached,
            /* [in][idldescattr] */ CAPICOM_ENCODING_TYPE EncodingType,
            /* [retval][out] */ BSTR *retval);
        
        DECLSPEC_XFGVIRT(ISignedData, CoSign)
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *CoSign )( 
            ICPSignedData * This,
            /* [in][idldescattr] */ ISigner *pSigner,
            /* [in][idldescattr] */ CAPICOM_ENCODING_TYPE EncodingType,
            /* [retval][out] */ BSTR *retval);
        
        DECLSPEC_XFGVIRT(ISignedData, Verify)
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *Verify )( 
            ICPSignedData * This,
            /* [in][idldescattr] */ BSTR SignedMessage,
            /* [in][idldescattr] */ BOOLEAN bDetached,
            /* [in][idldescattr] */ CAPICOM_SIGNED_DATA_VERIFY_FLAG VerifyFlag,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(ICPSignedData, Display)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Display )( 
            ICPSignedData * This,
            /* [defaultvalue][in] */ LONG hwndParent,
            /* [defaultvalue][in] */ BSTR Title);
        
        END_INTERFACE
    } ICPSignedDataVtbl;

    interface ICPSignedData
    {
        CONST_VTBL struct ICPSignedDataVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICPSignedData_QueryInterface(This,riid,ppvObj,retval)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObj,retval) ) 

#define ICPSignedData_AddRef(This,retval)	\
    ( (This)->lpVtbl -> AddRef(This,retval) ) 

#define ICPSignedData_Release(This,retval)	\
    ( (This)->lpVtbl -> Release(This,retval) ) 

#define ICPSignedData_GetTypeInfoCount(This,pctinfo,retval)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo,retval) ) 

#define ICPSignedData_GetTypeInfo(This,itinfo,lcid,pptinfo,retval)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,itinfo,lcid,pptinfo,retval) ) 

#define ICPSignedData_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgdispid,retval)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgdispid,retval) ) 

#define ICPSignedData_Invoke(This,dispidMember,riid,lcid,wFlags,pdispparams,pvarResult,pexcepinfo,puArgErr,retval)	\
    ( (This)->lpVtbl -> Invoke(This,dispidMember,riid,lcid,wFlags,pdispparams,pvarResult,pexcepinfo,puArgErr,retval) ) 

#define ICPSignedData_put_Content(This,noname,retval)	\
    ( (This)->lpVtbl -> put_Content(This,noname,retval) ) 

#define ICPSignedData_get_Content(This,retval)	\
    ( (This)->lpVtbl -> get_Content(This,retval) ) 

#define ICPSignedData_get_Signers(This,retval)	\
    ( (This)->lpVtbl -> get_Signers(This,retval) ) 

#define ICPSignedData_get_Certificates(This,retval)	\
    ( (This)->lpVtbl -> get_Certificates(This,retval) ) 

#define ICPSignedData_Sign(This,pSigner,bDetached,EncodingType,retval)	\
    ( (This)->lpVtbl -> Sign(This,pSigner,bDetached,EncodingType,retval) ) 

#define ICPSignedData_CoSign(This,pSigner,EncodingType,retval)	\
    ( (This)->lpVtbl -> CoSign(This,pSigner,EncodingType,retval) ) 

#define ICPSignedData_Verify(This,SignedMessage,bDetached,VerifyFlag,retval)	\
    ( (This)->lpVtbl -> Verify(This,SignedMessage,bDetached,VerifyFlag,retval) ) 


#define ICPSignedData_Display(This,hwndParent,Title)	\
    ( (This)->lpVtbl -> Display(This,hwndParent,Title) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICPSignedData_INTERFACE_DEFINED__ */


#ifndef __ICPSignedData2_INTERFACE_DEFINED__
#define __ICPSignedData2_INTERFACE_DEFINED__

/* interface ICPSignedData2 */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ICPSignedData2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7CEE3429-9E4F-44F4-B640-BB902786C811")
    ICPSignedData2 : public ICPSignedData
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SignCades( 
            /* [optional][in] */ VARIANT Signer,
            /* [defaultvalue][in] */ CADESCOM_CADES_TYPE CadesType,
            /* [defaultvalue][in] */ VARIANT_BOOL bDetached,
            /* [defaultvalue][in] */ CAPICOM_ENCODING_TYPE EncodingType,
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CoSignCades( 
            /* [optional][in] */ VARIANT Signer,
            /* [defaultvalue][in] */ CADESCOM_CADES_TYPE CadesType,
            /* [defaultvalue][in] */ CAPICOM_ENCODING_TYPE EncodingType,
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE VerifyCades( 
            /* [in] */ BSTR SignedMessage,
            /* [defaultvalue][in] */ CADESCOM_CADES_TYPE CadesType = CADESCOM_CADES_DEFAULT,
            /* [defaultvalue][in] */ VARIANT_BOOL bDetached = 0) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE EnhanceCades( 
            /* [defaultvalue][in] */ CADESCOM_CADES_TYPE CadesType,
            /* [defaultvalue][in] */ BSTR TSAAddress,
            /* [defaultvalue][in] */ CAPICOM_ENCODING_TYPE EncodingType,
            /* [retval][out] */ BSTR *pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICPSignedData2Vtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(ISignedData, QueryInterface)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICPSignedData2 * This,
            /* [in][idldescattr] */ struct GUID *riid,
            /* [out][idldescattr] */ void **ppvObj,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(ISignedData, AddRef)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *AddRef )( 
            ICPSignedData2 * This,
            /* [retval][out] */ unsigned long *retval);
        
        DECLSPEC_XFGVIRT(ISignedData, Release)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *Release )( 
            ICPSignedData2 * This,
            /* [retval][out] */ unsigned long *retval);
        
        DECLSPEC_XFGVIRT(ISignedData, GetTypeInfoCount)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ICPSignedData2 * This,
            /* [out][idldescattr] */ unsigned UINT *pctinfo,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(ISignedData, GetTypeInfo)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ICPSignedData2 * This,
            /* [in][idldescattr] */ unsigned UINT itinfo,
            /* [in][idldescattr] */ unsigned long lcid,
            /* [out][idldescattr] */ void **pptinfo,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(ISignedData, GetIDsOfNames)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ICPSignedData2 * This,
            /* [in][idldescattr] */ struct GUID *riid,
            /* [in][idldescattr] */ signed char **rgszNames,
            /* [in][idldescattr] */ unsigned UINT cNames,
            /* [in][idldescattr] */ unsigned long lcid,
            /* [out][idldescattr] */ signed long *rgdispid,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(ISignedData, Invoke)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICPSignedData2 * This,
            /* [in][idldescattr] */ signed long dispidMember,
            /* [in][idldescattr] */ struct GUID *riid,
            /* [in][idldescattr] */ unsigned long lcid,
            /* [in][idldescattr] */ unsigned short wFlags,
            /* [in][idldescattr] */ struct DISPPARAMS *pdispparams,
            /* [out][idldescattr] */ VARIANT *pvarResult,
            /* [out][idldescattr] */ struct EXCEPINFO *pexcepinfo,
            /* [out][idldescattr] */ unsigned UINT *puArgErr,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(ISignedData, put_Content)
        /* [id][propput][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *put_Content )( 
            ICPSignedData2 * This,
            /* [in][idldescattr] */ BSTR noname,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(ISignedData, get_Content)
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_Content )( 
            ICPSignedData2 * This,
            /* [retval][out] */ BSTR *retval);
        
        DECLSPEC_XFGVIRT(ISignedData, get_Signers)
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_Signers )( 
            ICPSignedData2 * This,
            /* [retval][out] */ ISigners **retval);
        
        DECLSPEC_XFGVIRT(ISignedData, get_Certificates)
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_Certificates )( 
            ICPSignedData2 * This,
            /* [retval][out] */ ICertificates **retval);
        
        DECLSPEC_XFGVIRT(ISignedData, Sign)
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *Sign )( 
            ICPSignedData2 * This,
            /* [in][idldescattr] */ ISigner *pSigner,
            /* [in][idldescattr] */ BOOLEAN bDetached,
            /* [in][idldescattr] */ CAPICOM_ENCODING_TYPE EncodingType,
            /* [retval][out] */ BSTR *retval);
        
        DECLSPEC_XFGVIRT(ISignedData, CoSign)
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *CoSign )( 
            ICPSignedData2 * This,
            /* [in][idldescattr] */ ISigner *pSigner,
            /* [in][idldescattr] */ CAPICOM_ENCODING_TYPE EncodingType,
            /* [retval][out] */ BSTR *retval);
        
        DECLSPEC_XFGVIRT(ISignedData, Verify)
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *Verify )( 
            ICPSignedData2 * This,
            /* [in][idldescattr] */ BSTR SignedMessage,
            /* [in][idldescattr] */ BOOLEAN bDetached,
            /* [in][idldescattr] */ CAPICOM_SIGNED_DATA_VERIFY_FLAG VerifyFlag,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(ICPSignedData, Display)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Display )( 
            ICPSignedData2 * This,
            /* [defaultvalue][in] */ LONG hwndParent,
            /* [defaultvalue][in] */ BSTR Title);
        
        DECLSPEC_XFGVIRT(ICPSignedData2, SignCades)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SignCades )( 
            ICPSignedData2 * This,
            /* [optional][in] */ VARIANT Signer,
            /* [defaultvalue][in] */ CADESCOM_CADES_TYPE CadesType,
            /* [defaultvalue][in] */ VARIANT_BOOL bDetached,
            /* [defaultvalue][in] */ CAPICOM_ENCODING_TYPE EncodingType,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(ICPSignedData2, CoSignCades)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CoSignCades )( 
            ICPSignedData2 * This,
            /* [optional][in] */ VARIANT Signer,
            /* [defaultvalue][in] */ CADESCOM_CADES_TYPE CadesType,
            /* [defaultvalue][in] */ CAPICOM_ENCODING_TYPE EncodingType,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(ICPSignedData2, VerifyCades)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *VerifyCades )( 
            ICPSignedData2 * This,
            /* [in] */ BSTR SignedMessage,
            /* [defaultvalue][in] */ CADESCOM_CADES_TYPE CadesType,
            /* [defaultvalue][in] */ VARIANT_BOOL bDetached);
        
        DECLSPEC_XFGVIRT(ICPSignedData2, EnhanceCades)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *EnhanceCades )( 
            ICPSignedData2 * This,
            /* [defaultvalue][in] */ CADESCOM_CADES_TYPE CadesType,
            /* [defaultvalue][in] */ BSTR TSAAddress,
            /* [defaultvalue][in] */ CAPICOM_ENCODING_TYPE EncodingType,
            /* [retval][out] */ BSTR *pVal);
        
        END_INTERFACE
    } ICPSignedData2Vtbl;

    interface ICPSignedData2
    {
        CONST_VTBL struct ICPSignedData2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICPSignedData2_QueryInterface(This,riid,ppvObj,retval)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObj,retval) ) 

#define ICPSignedData2_AddRef(This,retval)	\
    ( (This)->lpVtbl -> AddRef(This,retval) ) 

#define ICPSignedData2_Release(This,retval)	\
    ( (This)->lpVtbl -> Release(This,retval) ) 

#define ICPSignedData2_GetTypeInfoCount(This,pctinfo,retval)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo,retval) ) 

#define ICPSignedData2_GetTypeInfo(This,itinfo,lcid,pptinfo,retval)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,itinfo,lcid,pptinfo,retval) ) 

#define ICPSignedData2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgdispid,retval)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgdispid,retval) ) 

#define ICPSignedData2_Invoke(This,dispidMember,riid,lcid,wFlags,pdispparams,pvarResult,pexcepinfo,puArgErr,retval)	\
    ( (This)->lpVtbl -> Invoke(This,dispidMember,riid,lcid,wFlags,pdispparams,pvarResult,pexcepinfo,puArgErr,retval) ) 

#define ICPSignedData2_put_Content(This,noname,retval)	\
    ( (This)->lpVtbl -> put_Content(This,noname,retval) ) 

#define ICPSignedData2_get_Content(This,retval)	\
    ( (This)->lpVtbl -> get_Content(This,retval) ) 

#define ICPSignedData2_get_Signers(This,retval)	\
    ( (This)->lpVtbl -> get_Signers(This,retval) ) 

#define ICPSignedData2_get_Certificates(This,retval)	\
    ( (This)->lpVtbl -> get_Certificates(This,retval) ) 

#define ICPSignedData2_Sign(This,pSigner,bDetached,EncodingType,retval)	\
    ( (This)->lpVtbl -> Sign(This,pSigner,bDetached,EncodingType,retval) ) 

#define ICPSignedData2_CoSign(This,pSigner,EncodingType,retval)	\
    ( (This)->lpVtbl -> CoSign(This,pSigner,EncodingType,retval) ) 

#define ICPSignedData2_Verify(This,SignedMessage,bDetached,VerifyFlag,retval)	\
    ( (This)->lpVtbl -> Verify(This,SignedMessage,bDetached,VerifyFlag,retval) ) 


#define ICPSignedData2_Display(This,hwndParent,Title)	\
    ( (This)->lpVtbl -> Display(This,hwndParent,Title) ) 


#define ICPSignedData2_SignCades(This,Signer,CadesType,bDetached,EncodingType,pVal)	\
    ( (This)->lpVtbl -> SignCades(This,Signer,CadesType,bDetached,EncodingType,pVal) ) 

#define ICPSignedData2_CoSignCades(This,Signer,CadesType,EncodingType,pVal)	\
    ( (This)->lpVtbl -> CoSignCades(This,Signer,CadesType,EncodingType,pVal) ) 

#define ICPSignedData2_VerifyCades(This,SignedMessage,CadesType,bDetached)	\
    ( (This)->lpVtbl -> VerifyCades(This,SignedMessage,CadesType,bDetached) ) 

#define ICPSignedData2_EnhanceCades(This,CadesType,TSAAddress,EncodingType,pVal)	\
    ( (This)->lpVtbl -> EnhanceCades(This,CadesType,TSAAddress,EncodingType,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICPSignedData2_INTERFACE_DEFINED__ */


#ifndef __ICPSignedData3_INTERFACE_DEFINED__
#define __ICPSignedData3_INTERFACE_DEFINED__

/* interface ICPSignedData3 */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ICPSignedData3;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("782964D8-94BF-4c1d-A6CF-FA9360E5C54F")
    ICPSignedData3 : public ICPSignedData2
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ContentEncoding( 
            /* [retval][out] */ CADESCOM_CONTENT_ENCODING_TYPE *pEncodingType) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ContentEncoding( 
            /* [in] */ CADESCOM_CONTENT_ENCODING_TYPE EncodingType) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICPSignedData3Vtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(ISignedData, QueryInterface)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICPSignedData3 * This,
            /* [in][idldescattr] */ struct GUID *riid,
            /* [out][idldescattr] */ void **ppvObj,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(ISignedData, AddRef)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *AddRef )( 
            ICPSignedData3 * This,
            /* [retval][out] */ unsigned long *retval);
        
        DECLSPEC_XFGVIRT(ISignedData, Release)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *Release )( 
            ICPSignedData3 * This,
            /* [retval][out] */ unsigned long *retval);
        
        DECLSPEC_XFGVIRT(ISignedData, GetTypeInfoCount)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ICPSignedData3 * This,
            /* [out][idldescattr] */ unsigned UINT *pctinfo,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(ISignedData, GetTypeInfo)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ICPSignedData3 * This,
            /* [in][idldescattr] */ unsigned UINT itinfo,
            /* [in][idldescattr] */ unsigned long lcid,
            /* [out][idldescattr] */ void **pptinfo,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(ISignedData, GetIDsOfNames)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ICPSignedData3 * This,
            /* [in][idldescattr] */ struct GUID *riid,
            /* [in][idldescattr] */ signed char **rgszNames,
            /* [in][idldescattr] */ unsigned UINT cNames,
            /* [in][idldescattr] */ unsigned long lcid,
            /* [out][idldescattr] */ signed long *rgdispid,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(ISignedData, Invoke)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICPSignedData3 * This,
            /* [in][idldescattr] */ signed long dispidMember,
            /* [in][idldescattr] */ struct GUID *riid,
            /* [in][idldescattr] */ unsigned long lcid,
            /* [in][idldescattr] */ unsigned short wFlags,
            /* [in][idldescattr] */ struct DISPPARAMS *pdispparams,
            /* [out][idldescattr] */ VARIANT *pvarResult,
            /* [out][idldescattr] */ struct EXCEPINFO *pexcepinfo,
            /* [out][idldescattr] */ unsigned UINT *puArgErr,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(ISignedData, put_Content)
        /* [id][propput][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *put_Content )( 
            ICPSignedData3 * This,
            /* [in][idldescattr] */ BSTR noname,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(ISignedData, get_Content)
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_Content )( 
            ICPSignedData3 * This,
            /* [retval][out] */ BSTR *retval);
        
        DECLSPEC_XFGVIRT(ISignedData, get_Signers)
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_Signers )( 
            ICPSignedData3 * This,
            /* [retval][out] */ ISigners **retval);
        
        DECLSPEC_XFGVIRT(ISignedData, get_Certificates)
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_Certificates )( 
            ICPSignedData3 * This,
            /* [retval][out] */ ICertificates **retval);
        
        DECLSPEC_XFGVIRT(ISignedData, Sign)
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *Sign )( 
            ICPSignedData3 * This,
            /* [in][idldescattr] */ ISigner *pSigner,
            /* [in][idldescattr] */ BOOLEAN bDetached,
            /* [in][idldescattr] */ CAPICOM_ENCODING_TYPE EncodingType,
            /* [retval][out] */ BSTR *retval);
        
        DECLSPEC_XFGVIRT(ISignedData, CoSign)
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *CoSign )( 
            ICPSignedData3 * This,
            /* [in][idldescattr] */ ISigner *pSigner,
            /* [in][idldescattr] */ CAPICOM_ENCODING_TYPE EncodingType,
            /* [retval][out] */ BSTR *retval);
        
        DECLSPEC_XFGVIRT(ISignedData, Verify)
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *Verify )( 
            ICPSignedData3 * This,
            /* [in][idldescattr] */ BSTR SignedMessage,
            /* [in][idldescattr] */ BOOLEAN bDetached,
            /* [in][idldescattr] */ CAPICOM_SIGNED_DATA_VERIFY_FLAG VerifyFlag,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(ICPSignedData, Display)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Display )( 
            ICPSignedData3 * This,
            /* [defaultvalue][in] */ LONG hwndParent,
            /* [defaultvalue][in] */ BSTR Title);
        
        DECLSPEC_XFGVIRT(ICPSignedData2, SignCades)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SignCades )( 
            ICPSignedData3 * This,
            /* [optional][in] */ VARIANT Signer,
            /* [defaultvalue][in] */ CADESCOM_CADES_TYPE CadesType,
            /* [defaultvalue][in] */ VARIANT_BOOL bDetached,
            /* [defaultvalue][in] */ CAPICOM_ENCODING_TYPE EncodingType,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(ICPSignedData2, CoSignCades)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CoSignCades )( 
            ICPSignedData3 * This,
            /* [optional][in] */ VARIANT Signer,
            /* [defaultvalue][in] */ CADESCOM_CADES_TYPE CadesType,
            /* [defaultvalue][in] */ CAPICOM_ENCODING_TYPE EncodingType,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(ICPSignedData2, VerifyCades)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *VerifyCades )( 
            ICPSignedData3 * This,
            /* [in] */ BSTR SignedMessage,
            /* [defaultvalue][in] */ CADESCOM_CADES_TYPE CadesType,
            /* [defaultvalue][in] */ VARIANT_BOOL bDetached);
        
        DECLSPEC_XFGVIRT(ICPSignedData2, EnhanceCades)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *EnhanceCades )( 
            ICPSignedData3 * This,
            /* [defaultvalue][in] */ CADESCOM_CADES_TYPE CadesType,
            /* [defaultvalue][in] */ BSTR TSAAddress,
            /* [defaultvalue][in] */ CAPICOM_ENCODING_TYPE EncodingType,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(ICPSignedData3, get_ContentEncoding)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ContentEncoding )( 
            ICPSignedData3 * This,
            /* [retval][out] */ CADESCOM_CONTENT_ENCODING_TYPE *pEncodingType);
        
        DECLSPEC_XFGVIRT(ICPSignedData3, put_ContentEncoding)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ContentEncoding )( 
            ICPSignedData3 * This,
            /* [in] */ CADESCOM_CONTENT_ENCODING_TYPE EncodingType);
        
        END_INTERFACE
    } ICPSignedData3Vtbl;

    interface ICPSignedData3
    {
        CONST_VTBL struct ICPSignedData3Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICPSignedData3_QueryInterface(This,riid,ppvObj,retval)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObj,retval) ) 

#define ICPSignedData3_AddRef(This,retval)	\
    ( (This)->lpVtbl -> AddRef(This,retval) ) 

#define ICPSignedData3_Release(This,retval)	\
    ( (This)->lpVtbl -> Release(This,retval) ) 

#define ICPSignedData3_GetTypeInfoCount(This,pctinfo,retval)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo,retval) ) 

#define ICPSignedData3_GetTypeInfo(This,itinfo,lcid,pptinfo,retval)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,itinfo,lcid,pptinfo,retval) ) 

#define ICPSignedData3_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgdispid,retval)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgdispid,retval) ) 

#define ICPSignedData3_Invoke(This,dispidMember,riid,lcid,wFlags,pdispparams,pvarResult,pexcepinfo,puArgErr,retval)	\
    ( (This)->lpVtbl -> Invoke(This,dispidMember,riid,lcid,wFlags,pdispparams,pvarResult,pexcepinfo,puArgErr,retval) ) 

#define ICPSignedData3_put_Content(This,noname,retval)	\
    ( (This)->lpVtbl -> put_Content(This,noname,retval) ) 

#define ICPSignedData3_get_Content(This,retval)	\
    ( (This)->lpVtbl -> get_Content(This,retval) ) 

#define ICPSignedData3_get_Signers(This,retval)	\
    ( (This)->lpVtbl -> get_Signers(This,retval) ) 

#define ICPSignedData3_get_Certificates(This,retval)	\
    ( (This)->lpVtbl -> get_Certificates(This,retval) ) 

#define ICPSignedData3_Sign(This,pSigner,bDetached,EncodingType,retval)	\
    ( (This)->lpVtbl -> Sign(This,pSigner,bDetached,EncodingType,retval) ) 

#define ICPSignedData3_CoSign(This,pSigner,EncodingType,retval)	\
    ( (This)->lpVtbl -> CoSign(This,pSigner,EncodingType,retval) ) 

#define ICPSignedData3_Verify(This,SignedMessage,bDetached,VerifyFlag,retval)	\
    ( (This)->lpVtbl -> Verify(This,SignedMessage,bDetached,VerifyFlag,retval) ) 


#define ICPSignedData3_Display(This,hwndParent,Title)	\
    ( (This)->lpVtbl -> Display(This,hwndParent,Title) ) 


#define ICPSignedData3_SignCades(This,Signer,CadesType,bDetached,EncodingType,pVal)	\
    ( (This)->lpVtbl -> SignCades(This,Signer,CadesType,bDetached,EncodingType,pVal) ) 

#define ICPSignedData3_CoSignCades(This,Signer,CadesType,EncodingType,pVal)	\
    ( (This)->lpVtbl -> CoSignCades(This,Signer,CadesType,EncodingType,pVal) ) 

#define ICPSignedData3_VerifyCades(This,SignedMessage,CadesType,bDetached)	\
    ( (This)->lpVtbl -> VerifyCades(This,SignedMessage,CadesType,bDetached) ) 

#define ICPSignedData3_EnhanceCades(This,CadesType,TSAAddress,EncodingType,pVal)	\
    ( (This)->lpVtbl -> EnhanceCades(This,CadesType,TSAAddress,EncodingType,pVal) ) 


#define ICPSignedData3_get_ContentEncoding(This,pEncodingType)	\
    ( (This)->lpVtbl -> get_ContentEncoding(This,pEncodingType) ) 

#define ICPSignedData3_put_ContentEncoding(This,EncodingType)	\
    ( (This)->lpVtbl -> put_ContentEncoding(This,EncodingType) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICPSignedData3_INTERFACE_DEFINED__ */


#ifndef __ICPSignedData4_INTERFACE_DEFINED__
#define __ICPSignedData4_INTERFACE_DEFINED__

/* interface ICPSignedData4 */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ICPSignedData4;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("42A8CA34-7BF4-48eb-958A-20A6BD26BC42")
    ICPSignedData4 : public ICPSignedData3
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SignHash( 
            /* [in] */ /* external definition not present */ IHashedData *Hash,
            /* [optional][in] */ VARIANT Signer,
            /* [defaultvalue][in] */ CADESCOM_CADES_TYPE CadesType,
            /* [defaultvalue][in] */ CAPICOM_ENCODING_TYPE EncodingType,
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CoSignHash( 
            /* [in] */ /* external definition not present */ IHashedData *Hash,
            /* [optional][in] */ VARIANT Signer,
            /* [defaultvalue][in] */ CADESCOM_CADES_TYPE CadesType,
            /* [defaultvalue][in] */ CAPICOM_ENCODING_TYPE EncodingType,
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE VerifyHash( 
            /* [in] */ VARIANT Hash,
            /* [in] */ BSTR SignedMessage,
            /* [defaultvalue][in] */ CADESCOM_CADES_TYPE CadesType = CADESCOM_CADES_DEFAULT) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICPSignedData4Vtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(ISignedData, QueryInterface)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICPSignedData4 * This,
            /* [in][idldescattr] */ struct GUID *riid,
            /* [out][idldescattr] */ void **ppvObj,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(ISignedData, AddRef)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *AddRef )( 
            ICPSignedData4 * This,
            /* [retval][out] */ unsigned long *retval);
        
        DECLSPEC_XFGVIRT(ISignedData, Release)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *Release )( 
            ICPSignedData4 * This,
            /* [retval][out] */ unsigned long *retval);
        
        DECLSPEC_XFGVIRT(ISignedData, GetTypeInfoCount)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ICPSignedData4 * This,
            /* [out][idldescattr] */ unsigned UINT *pctinfo,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(ISignedData, GetTypeInfo)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ICPSignedData4 * This,
            /* [in][idldescattr] */ unsigned UINT itinfo,
            /* [in][idldescattr] */ unsigned long lcid,
            /* [out][idldescattr] */ void **pptinfo,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(ISignedData, GetIDsOfNames)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ICPSignedData4 * This,
            /* [in][idldescattr] */ struct GUID *riid,
            /* [in][idldescattr] */ signed char **rgszNames,
            /* [in][idldescattr] */ unsigned UINT cNames,
            /* [in][idldescattr] */ unsigned long lcid,
            /* [out][idldescattr] */ signed long *rgdispid,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(ISignedData, Invoke)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICPSignedData4 * This,
            /* [in][idldescattr] */ signed long dispidMember,
            /* [in][idldescattr] */ struct GUID *riid,
            /* [in][idldescattr] */ unsigned long lcid,
            /* [in][idldescattr] */ unsigned short wFlags,
            /* [in][idldescattr] */ struct DISPPARAMS *pdispparams,
            /* [out][idldescattr] */ VARIANT *pvarResult,
            /* [out][idldescattr] */ struct EXCEPINFO *pexcepinfo,
            /* [out][idldescattr] */ unsigned UINT *puArgErr,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(ISignedData, put_Content)
        /* [id][propput][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *put_Content )( 
            ICPSignedData4 * This,
            /* [in][idldescattr] */ BSTR noname,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(ISignedData, get_Content)
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_Content )( 
            ICPSignedData4 * This,
            /* [retval][out] */ BSTR *retval);
        
        DECLSPEC_XFGVIRT(ISignedData, get_Signers)
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_Signers )( 
            ICPSignedData4 * This,
            /* [retval][out] */ ISigners **retval);
        
        DECLSPEC_XFGVIRT(ISignedData, get_Certificates)
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_Certificates )( 
            ICPSignedData4 * This,
            /* [retval][out] */ ICertificates **retval);
        
        DECLSPEC_XFGVIRT(ISignedData, Sign)
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *Sign )( 
            ICPSignedData4 * This,
            /* [in][idldescattr] */ ISigner *pSigner,
            /* [in][idldescattr] */ BOOLEAN bDetached,
            /* [in][idldescattr] */ CAPICOM_ENCODING_TYPE EncodingType,
            /* [retval][out] */ BSTR *retval);
        
        DECLSPEC_XFGVIRT(ISignedData, CoSign)
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *CoSign )( 
            ICPSignedData4 * This,
            /* [in][idldescattr] */ ISigner *pSigner,
            /* [in][idldescattr] */ CAPICOM_ENCODING_TYPE EncodingType,
            /* [retval][out] */ BSTR *retval);
        
        DECLSPEC_XFGVIRT(ISignedData, Verify)
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *Verify )( 
            ICPSignedData4 * This,
            /* [in][idldescattr] */ BSTR SignedMessage,
            /* [in][idldescattr] */ BOOLEAN bDetached,
            /* [in][idldescattr] */ CAPICOM_SIGNED_DATA_VERIFY_FLAG VerifyFlag,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(ICPSignedData, Display)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Display )( 
            ICPSignedData4 * This,
            /* [defaultvalue][in] */ LONG hwndParent,
            /* [defaultvalue][in] */ BSTR Title);
        
        DECLSPEC_XFGVIRT(ICPSignedData2, SignCades)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SignCades )( 
            ICPSignedData4 * This,
            /* [optional][in] */ VARIANT Signer,
            /* [defaultvalue][in] */ CADESCOM_CADES_TYPE CadesType,
            /* [defaultvalue][in] */ VARIANT_BOOL bDetached,
            /* [defaultvalue][in] */ CAPICOM_ENCODING_TYPE EncodingType,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(ICPSignedData2, CoSignCades)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CoSignCades )( 
            ICPSignedData4 * This,
            /* [optional][in] */ VARIANT Signer,
            /* [defaultvalue][in] */ CADESCOM_CADES_TYPE CadesType,
            /* [defaultvalue][in] */ CAPICOM_ENCODING_TYPE EncodingType,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(ICPSignedData2, VerifyCades)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *VerifyCades )( 
            ICPSignedData4 * This,
            /* [in] */ BSTR SignedMessage,
            /* [defaultvalue][in] */ CADESCOM_CADES_TYPE CadesType,
            /* [defaultvalue][in] */ VARIANT_BOOL bDetached);
        
        DECLSPEC_XFGVIRT(ICPSignedData2, EnhanceCades)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *EnhanceCades )( 
            ICPSignedData4 * This,
            /* [defaultvalue][in] */ CADESCOM_CADES_TYPE CadesType,
            /* [defaultvalue][in] */ BSTR TSAAddress,
            /* [defaultvalue][in] */ CAPICOM_ENCODING_TYPE EncodingType,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(ICPSignedData3, get_ContentEncoding)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ContentEncoding )( 
            ICPSignedData4 * This,
            /* [retval][out] */ CADESCOM_CONTENT_ENCODING_TYPE *pEncodingType);
        
        DECLSPEC_XFGVIRT(ICPSignedData3, put_ContentEncoding)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ContentEncoding )( 
            ICPSignedData4 * This,
            /* [in] */ CADESCOM_CONTENT_ENCODING_TYPE EncodingType);
        
        DECLSPEC_XFGVIRT(ICPSignedData4, SignHash)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SignHash )( 
            ICPSignedData4 * This,
            /* [in] */ /* external definition not present */ IHashedData *Hash,
            /* [optional][in] */ VARIANT Signer,
            /* [defaultvalue][in] */ CADESCOM_CADES_TYPE CadesType,
            /* [defaultvalue][in] */ CAPICOM_ENCODING_TYPE EncodingType,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(ICPSignedData4, CoSignHash)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CoSignHash )( 
            ICPSignedData4 * This,
            /* [in] */ /* external definition not present */ IHashedData *Hash,
            /* [optional][in] */ VARIANT Signer,
            /* [defaultvalue][in] */ CADESCOM_CADES_TYPE CadesType,
            /* [defaultvalue][in] */ CAPICOM_ENCODING_TYPE EncodingType,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(ICPSignedData4, VerifyHash)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *VerifyHash )( 
            ICPSignedData4 * This,
            /* [in] */ VARIANT Hash,
            /* [in] */ BSTR SignedMessage,
            /* [defaultvalue][in] */ CADESCOM_CADES_TYPE CadesType);
        
        END_INTERFACE
    } ICPSignedData4Vtbl;

    interface ICPSignedData4
    {
        CONST_VTBL struct ICPSignedData4Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICPSignedData4_QueryInterface(This,riid,ppvObj,retval)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObj,retval) ) 

#define ICPSignedData4_AddRef(This,retval)	\
    ( (This)->lpVtbl -> AddRef(This,retval) ) 

#define ICPSignedData4_Release(This,retval)	\
    ( (This)->lpVtbl -> Release(This,retval) ) 

#define ICPSignedData4_GetTypeInfoCount(This,pctinfo,retval)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo,retval) ) 

#define ICPSignedData4_GetTypeInfo(This,itinfo,lcid,pptinfo,retval)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,itinfo,lcid,pptinfo,retval) ) 

#define ICPSignedData4_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgdispid,retval)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgdispid,retval) ) 

#define ICPSignedData4_Invoke(This,dispidMember,riid,lcid,wFlags,pdispparams,pvarResult,pexcepinfo,puArgErr,retval)	\
    ( (This)->lpVtbl -> Invoke(This,dispidMember,riid,lcid,wFlags,pdispparams,pvarResult,pexcepinfo,puArgErr,retval) ) 

#define ICPSignedData4_put_Content(This,noname,retval)	\
    ( (This)->lpVtbl -> put_Content(This,noname,retval) ) 

#define ICPSignedData4_get_Content(This,retval)	\
    ( (This)->lpVtbl -> get_Content(This,retval) ) 

#define ICPSignedData4_get_Signers(This,retval)	\
    ( (This)->lpVtbl -> get_Signers(This,retval) ) 

#define ICPSignedData4_get_Certificates(This,retval)	\
    ( (This)->lpVtbl -> get_Certificates(This,retval) ) 

#define ICPSignedData4_Sign(This,pSigner,bDetached,EncodingType,retval)	\
    ( (This)->lpVtbl -> Sign(This,pSigner,bDetached,EncodingType,retval) ) 

#define ICPSignedData4_CoSign(This,pSigner,EncodingType,retval)	\
    ( (This)->lpVtbl -> CoSign(This,pSigner,EncodingType,retval) ) 

#define ICPSignedData4_Verify(This,SignedMessage,bDetached,VerifyFlag,retval)	\
    ( (This)->lpVtbl -> Verify(This,SignedMessage,bDetached,VerifyFlag,retval) ) 


#define ICPSignedData4_Display(This,hwndParent,Title)	\
    ( (This)->lpVtbl -> Display(This,hwndParent,Title) ) 


#define ICPSignedData4_SignCades(This,Signer,CadesType,bDetached,EncodingType,pVal)	\
    ( (This)->lpVtbl -> SignCades(This,Signer,CadesType,bDetached,EncodingType,pVal) ) 

#define ICPSignedData4_CoSignCades(This,Signer,CadesType,EncodingType,pVal)	\
    ( (This)->lpVtbl -> CoSignCades(This,Signer,CadesType,EncodingType,pVal) ) 

#define ICPSignedData4_VerifyCades(This,SignedMessage,CadesType,bDetached)	\
    ( (This)->lpVtbl -> VerifyCades(This,SignedMessage,CadesType,bDetached) ) 

#define ICPSignedData4_EnhanceCades(This,CadesType,TSAAddress,EncodingType,pVal)	\
    ( (This)->lpVtbl -> EnhanceCades(This,CadesType,TSAAddress,EncodingType,pVal) ) 


#define ICPSignedData4_get_ContentEncoding(This,pEncodingType)	\
    ( (This)->lpVtbl -> get_ContentEncoding(This,pEncodingType) ) 

#define ICPSignedData4_put_ContentEncoding(This,EncodingType)	\
    ( (This)->lpVtbl -> put_ContentEncoding(This,EncodingType) ) 


#define ICPSignedData4_SignHash(This,Hash,Signer,CadesType,EncodingType,pVal)	\
    ( (This)->lpVtbl -> SignHash(This,Hash,Signer,CadesType,EncodingType,pVal) ) 

#define ICPSignedData4_CoSignHash(This,Hash,Signer,CadesType,EncodingType,pVal)	\
    ( (This)->lpVtbl -> CoSignHash(This,Hash,Signer,CadesType,EncodingType,pVal) ) 

#define ICPSignedData4_VerifyHash(This,Hash,SignedMessage,CadesType)	\
    ( (This)->lpVtbl -> VerifyHash(This,Hash,SignedMessage,CadesType) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICPSignedData4_INTERFACE_DEFINED__ */


#ifndef __ICPSignedData5_INTERFACE_DEFINED__
#define __ICPSignedData5_INTERFACE_DEFINED__

/* interface ICPSignedData5 */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ICPSignedData5;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("16801082-cb55-455b-8be1-8f25303edac9")
    ICPSignedData5 : public ICPSignedData4
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_DisplayData( 
            /* [retval][out] */ CADESCOM_DISPLAY_DATA *pDisplayData) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_DisplayData( 
            /* [in] */ CADESCOM_DISPLAY_DATA DisplayData) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICPSignedData5Vtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(ISignedData, QueryInterface)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICPSignedData5 * This,
            /* [in][idldescattr] */ struct GUID *riid,
            /* [out][idldescattr] */ void **ppvObj,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(ISignedData, AddRef)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *AddRef )( 
            ICPSignedData5 * This,
            /* [retval][out] */ unsigned long *retval);
        
        DECLSPEC_XFGVIRT(ISignedData, Release)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *Release )( 
            ICPSignedData5 * This,
            /* [retval][out] */ unsigned long *retval);
        
        DECLSPEC_XFGVIRT(ISignedData, GetTypeInfoCount)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ICPSignedData5 * This,
            /* [out][idldescattr] */ unsigned UINT *pctinfo,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(ISignedData, GetTypeInfo)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ICPSignedData5 * This,
            /* [in][idldescattr] */ unsigned UINT itinfo,
            /* [in][idldescattr] */ unsigned long lcid,
            /* [out][idldescattr] */ void **pptinfo,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(ISignedData, GetIDsOfNames)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ICPSignedData5 * This,
            /* [in][idldescattr] */ struct GUID *riid,
            /* [in][idldescattr] */ signed char **rgszNames,
            /* [in][idldescattr] */ unsigned UINT cNames,
            /* [in][idldescattr] */ unsigned long lcid,
            /* [out][idldescattr] */ signed long *rgdispid,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(ISignedData, Invoke)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICPSignedData5 * This,
            /* [in][idldescattr] */ signed long dispidMember,
            /* [in][idldescattr] */ struct GUID *riid,
            /* [in][idldescattr] */ unsigned long lcid,
            /* [in][idldescattr] */ unsigned short wFlags,
            /* [in][idldescattr] */ struct DISPPARAMS *pdispparams,
            /* [out][idldescattr] */ VARIANT *pvarResult,
            /* [out][idldescattr] */ struct EXCEPINFO *pexcepinfo,
            /* [out][idldescattr] */ unsigned UINT *puArgErr,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(ISignedData, put_Content)
        /* [id][propput][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *put_Content )( 
            ICPSignedData5 * This,
            /* [in][idldescattr] */ BSTR noname,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(ISignedData, get_Content)
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_Content )( 
            ICPSignedData5 * This,
            /* [retval][out] */ BSTR *retval);
        
        DECLSPEC_XFGVIRT(ISignedData, get_Signers)
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_Signers )( 
            ICPSignedData5 * This,
            /* [retval][out] */ ISigners **retval);
        
        DECLSPEC_XFGVIRT(ISignedData, get_Certificates)
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_Certificates )( 
            ICPSignedData5 * This,
            /* [retval][out] */ ICertificates **retval);
        
        DECLSPEC_XFGVIRT(ISignedData, Sign)
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *Sign )( 
            ICPSignedData5 * This,
            /* [in][idldescattr] */ ISigner *pSigner,
            /* [in][idldescattr] */ BOOLEAN bDetached,
            /* [in][idldescattr] */ CAPICOM_ENCODING_TYPE EncodingType,
            /* [retval][out] */ BSTR *retval);
        
        DECLSPEC_XFGVIRT(ISignedData, CoSign)
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *CoSign )( 
            ICPSignedData5 * This,
            /* [in][idldescattr] */ ISigner *pSigner,
            /* [in][idldescattr] */ CAPICOM_ENCODING_TYPE EncodingType,
            /* [retval][out] */ BSTR *retval);
        
        DECLSPEC_XFGVIRT(ISignedData, Verify)
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *Verify )( 
            ICPSignedData5 * This,
            /* [in][idldescattr] */ BSTR SignedMessage,
            /* [in][idldescattr] */ BOOLEAN bDetached,
            /* [in][idldescattr] */ CAPICOM_SIGNED_DATA_VERIFY_FLAG VerifyFlag,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(ICPSignedData, Display)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Display )( 
            ICPSignedData5 * This,
            /* [defaultvalue][in] */ LONG hwndParent,
            /* [defaultvalue][in] */ BSTR Title);
        
        DECLSPEC_XFGVIRT(ICPSignedData2, SignCades)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SignCades )( 
            ICPSignedData5 * This,
            /* [optional][in] */ VARIANT Signer,
            /* [defaultvalue][in] */ CADESCOM_CADES_TYPE CadesType,
            /* [defaultvalue][in] */ VARIANT_BOOL bDetached,
            /* [defaultvalue][in] */ CAPICOM_ENCODING_TYPE EncodingType,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(ICPSignedData2, CoSignCades)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CoSignCades )( 
            ICPSignedData5 * This,
            /* [optional][in] */ VARIANT Signer,
            /* [defaultvalue][in] */ CADESCOM_CADES_TYPE CadesType,
            /* [defaultvalue][in] */ CAPICOM_ENCODING_TYPE EncodingType,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(ICPSignedData2, VerifyCades)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *VerifyCades )( 
            ICPSignedData5 * This,
            /* [in] */ BSTR SignedMessage,
            /* [defaultvalue][in] */ CADESCOM_CADES_TYPE CadesType,
            /* [defaultvalue][in] */ VARIANT_BOOL bDetached);
        
        DECLSPEC_XFGVIRT(ICPSignedData2, EnhanceCades)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *EnhanceCades )( 
            ICPSignedData5 * This,
            /* [defaultvalue][in] */ CADESCOM_CADES_TYPE CadesType,
            /* [defaultvalue][in] */ BSTR TSAAddress,
            /* [defaultvalue][in] */ CAPICOM_ENCODING_TYPE EncodingType,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(ICPSignedData3, get_ContentEncoding)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ContentEncoding )( 
            ICPSignedData5 * This,
            /* [retval][out] */ CADESCOM_CONTENT_ENCODING_TYPE *pEncodingType);
        
        DECLSPEC_XFGVIRT(ICPSignedData3, put_ContentEncoding)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ContentEncoding )( 
            ICPSignedData5 * This,
            /* [in] */ CADESCOM_CONTENT_ENCODING_TYPE EncodingType);
        
        DECLSPEC_XFGVIRT(ICPSignedData4, SignHash)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SignHash )( 
            ICPSignedData5 * This,
            /* [in] */ /* external definition not present */ IHashedData *Hash,
            /* [optional][in] */ VARIANT Signer,
            /* [defaultvalue][in] */ CADESCOM_CADES_TYPE CadesType,
            /* [defaultvalue][in] */ CAPICOM_ENCODING_TYPE EncodingType,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(ICPSignedData4, CoSignHash)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CoSignHash )( 
            ICPSignedData5 * This,
            /* [in] */ /* external definition not present */ IHashedData *Hash,
            /* [optional][in] */ VARIANT Signer,
            /* [defaultvalue][in] */ CADESCOM_CADES_TYPE CadesType,
            /* [defaultvalue][in] */ CAPICOM_ENCODING_TYPE EncodingType,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(ICPSignedData4, VerifyHash)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *VerifyHash )( 
            ICPSignedData5 * This,
            /* [in] */ VARIANT Hash,
            /* [in] */ BSTR SignedMessage,
            /* [defaultvalue][in] */ CADESCOM_CADES_TYPE CadesType);
        
        DECLSPEC_XFGVIRT(ICPSignedData5, get_DisplayData)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DisplayData )( 
            ICPSignedData5 * This,
            /* [retval][out] */ CADESCOM_DISPLAY_DATA *pDisplayData);
        
        DECLSPEC_XFGVIRT(ICPSignedData5, put_DisplayData)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_DisplayData )( 
            ICPSignedData5 * This,
            /* [in] */ CADESCOM_DISPLAY_DATA DisplayData);
        
        END_INTERFACE
    } ICPSignedData5Vtbl;

    interface ICPSignedData5
    {
        CONST_VTBL struct ICPSignedData5Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICPSignedData5_QueryInterface(This,riid,ppvObj,retval)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObj,retval) ) 

#define ICPSignedData5_AddRef(This,retval)	\
    ( (This)->lpVtbl -> AddRef(This,retval) ) 

#define ICPSignedData5_Release(This,retval)	\
    ( (This)->lpVtbl -> Release(This,retval) ) 

#define ICPSignedData5_GetTypeInfoCount(This,pctinfo,retval)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo,retval) ) 

#define ICPSignedData5_GetTypeInfo(This,itinfo,lcid,pptinfo,retval)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,itinfo,lcid,pptinfo,retval) ) 

#define ICPSignedData5_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgdispid,retval)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgdispid,retval) ) 

#define ICPSignedData5_Invoke(This,dispidMember,riid,lcid,wFlags,pdispparams,pvarResult,pexcepinfo,puArgErr,retval)	\
    ( (This)->lpVtbl -> Invoke(This,dispidMember,riid,lcid,wFlags,pdispparams,pvarResult,pexcepinfo,puArgErr,retval) ) 

#define ICPSignedData5_put_Content(This,noname,retval)	\
    ( (This)->lpVtbl -> put_Content(This,noname,retval) ) 

#define ICPSignedData5_get_Content(This,retval)	\
    ( (This)->lpVtbl -> get_Content(This,retval) ) 

#define ICPSignedData5_get_Signers(This,retval)	\
    ( (This)->lpVtbl -> get_Signers(This,retval) ) 

#define ICPSignedData5_get_Certificates(This,retval)	\
    ( (This)->lpVtbl -> get_Certificates(This,retval) ) 

#define ICPSignedData5_Sign(This,pSigner,bDetached,EncodingType,retval)	\
    ( (This)->lpVtbl -> Sign(This,pSigner,bDetached,EncodingType,retval) ) 

#define ICPSignedData5_CoSign(This,pSigner,EncodingType,retval)	\
    ( (This)->lpVtbl -> CoSign(This,pSigner,EncodingType,retval) ) 

#define ICPSignedData5_Verify(This,SignedMessage,bDetached,VerifyFlag,retval)	\
    ( (This)->lpVtbl -> Verify(This,SignedMessage,bDetached,VerifyFlag,retval) ) 


#define ICPSignedData5_Display(This,hwndParent,Title)	\
    ( (This)->lpVtbl -> Display(This,hwndParent,Title) ) 


#define ICPSignedData5_SignCades(This,Signer,CadesType,bDetached,EncodingType,pVal)	\
    ( (This)->lpVtbl -> SignCades(This,Signer,CadesType,bDetached,EncodingType,pVal) ) 

#define ICPSignedData5_CoSignCades(This,Signer,CadesType,EncodingType,pVal)	\
    ( (This)->lpVtbl -> CoSignCades(This,Signer,CadesType,EncodingType,pVal) ) 

#define ICPSignedData5_VerifyCades(This,SignedMessage,CadesType,bDetached)	\
    ( (This)->lpVtbl -> VerifyCades(This,SignedMessage,CadesType,bDetached) ) 

#define ICPSignedData5_EnhanceCades(This,CadesType,TSAAddress,EncodingType,pVal)	\
    ( (This)->lpVtbl -> EnhanceCades(This,CadesType,TSAAddress,EncodingType,pVal) ) 


#define ICPSignedData5_get_ContentEncoding(This,pEncodingType)	\
    ( (This)->lpVtbl -> get_ContentEncoding(This,pEncodingType) ) 

#define ICPSignedData5_put_ContentEncoding(This,EncodingType)	\
    ( (This)->lpVtbl -> put_ContentEncoding(This,EncodingType) ) 


#define ICPSignedData5_SignHash(This,Hash,Signer,CadesType,EncodingType,pVal)	\
    ( (This)->lpVtbl -> SignHash(This,Hash,Signer,CadesType,EncodingType,pVal) ) 

#define ICPSignedData5_CoSignHash(This,Hash,Signer,CadesType,EncodingType,pVal)	\
    ( (This)->lpVtbl -> CoSignHash(This,Hash,Signer,CadesType,EncodingType,pVal) ) 

#define ICPSignedData5_VerifyHash(This,Hash,SignedMessage,CadesType)	\
    ( (This)->lpVtbl -> VerifyHash(This,Hash,SignedMessage,CadesType) ) 


#define ICPSignedData5_get_DisplayData(This,pDisplayData)	\
    ( (This)->lpVtbl -> get_DisplayData(This,pDisplayData) ) 

#define ICPSignedData5_put_DisplayData(This,DisplayData)	\
    ( (This)->lpVtbl -> put_DisplayData(This,DisplayData) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICPSignedData5_INTERFACE_DEFINED__ */


#ifndef __ICPSigner_INTERFACE_DEFINED__
#define __ICPSigner_INTERFACE_DEFINED__

/* interface ICPSigner */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ICPSigner;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("771BEF1E-3857-4769-9B4B-0F04903230F4")
    ICPSigner : public ISigner2
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_UnauthenticatedAttributes( 
            /* [retval][out] */ ICPAttributes **ppVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_AuthenticatedAttributes2( 
            /* [retval][out] */ ICPAttributes **ppVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_CRLs( 
            /* [retval][out] */ ICPBlobs **ppVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_OCSPResponses( 
            /* [retval][out] */ ICPBlobs **ppVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_TSAAddress( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_TSAAddress( 
            /* [in] */ BSTR newVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICPSignerVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(ISigner2, QueryInterface)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICPSigner * This,
            /* [in][idldescattr] */ struct GUID *riid,
            /* [out][idldescattr] */ void **ppvObj,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(ISigner2, AddRef)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *AddRef )( 
            ICPSigner * This,
            /* [retval][out] */ unsigned long *retval);
        
        DECLSPEC_XFGVIRT(ISigner2, Release)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *Release )( 
            ICPSigner * This,
            /* [retval][out] */ unsigned long *retval);
        
        DECLSPEC_XFGVIRT(ISigner2, GetTypeInfoCount)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ICPSigner * This,
            /* [out][idldescattr] */ unsigned UINT *pctinfo,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(ISigner2, GetTypeInfo)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ICPSigner * This,
            /* [in][idldescattr] */ unsigned UINT itinfo,
            /* [in][idldescattr] */ unsigned long lcid,
            /* [out][idldescattr] */ void **pptinfo,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(ISigner2, GetIDsOfNames)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ICPSigner * This,
            /* [in][idldescattr] */ struct GUID *riid,
            /* [in][idldescattr] */ signed char **rgszNames,
            /* [in][idldescattr] */ unsigned UINT cNames,
            /* [in][idldescattr] */ unsigned long lcid,
            /* [out][idldescattr] */ signed long *rgdispid,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(ISigner2, Invoke)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICPSigner * This,
            /* [in][idldescattr] */ signed long dispidMember,
            /* [in][idldescattr] */ struct GUID *riid,
            /* [in][idldescattr] */ unsigned long lcid,
            /* [in][idldescattr] */ unsigned short wFlags,
            /* [in][idldescattr] */ struct DISPPARAMS *pdispparams,
            /* [out][idldescattr] */ VARIANT *pvarResult,
            /* [out][idldescattr] */ struct EXCEPINFO *pexcepinfo,
            /* [out][idldescattr] */ unsigned UINT *puArgErr,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(ISigner2, get_Certificate)
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_Certificate )( 
            ICPSigner * This,
            /* [retval][out] */ ICertificate **retval);
        
        DECLSPEC_XFGVIRT(ISigner2, put_Certificate)
        /* [id][propput][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *put_Certificate )( 
            ICPSigner * This,
            /* [in][idldescattr] */ ICertificate *noname,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(ISigner2, get_AuthenticatedAttributes)
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_AuthenticatedAttributes )( 
            ICPSigner * This,
            /* [retval][out] */ IAttributes **retval);
        
        DECLSPEC_XFGVIRT(ISigner2, get_Chain)
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_Chain )( 
            ICPSigner * This,
            /* [retval][out] */ IChain **retval);
        
        DECLSPEC_XFGVIRT(ISigner2, get_Options)
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_Options )( 
            ICPSigner * This,
            /* [retval][out] */ CAPICOM_CERTIFICATE_INCLUDE_OPTION *retval);
        
        DECLSPEC_XFGVIRT(ISigner2, put_Options)
        /* [id][propput][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *put_Options )( 
            ICPSigner * This,
            /* [in][idldescattr] */ CAPICOM_CERTIFICATE_INCLUDE_OPTION noname,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(ISigner2, Load)
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *Load )( 
            ICPSigner * This,
            /* [in][idldescattr] */ BSTR FileName,
            /* [in][idldescattr] */ BSTR Password,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(ICPSigner, get_UnauthenticatedAttributes)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_UnauthenticatedAttributes )( 
            ICPSigner * This,
            /* [retval][out] */ ICPAttributes **ppVal);
        
        DECLSPEC_XFGVIRT(ICPSigner, get_AuthenticatedAttributes2)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_AuthenticatedAttributes2 )( 
            ICPSigner * This,
            /* [retval][out] */ ICPAttributes **ppVal);
        
        DECLSPEC_XFGVIRT(ICPSigner, get_CRLs)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_CRLs )( 
            ICPSigner * This,
            /* [retval][out] */ ICPBlobs **ppVal);
        
        DECLSPEC_XFGVIRT(ICPSigner, get_OCSPResponses)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_OCSPResponses )( 
            ICPSigner * This,
            /* [retval][out] */ ICPBlobs **ppVal);
        
        DECLSPEC_XFGVIRT(ICPSigner, get_TSAAddress)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_TSAAddress )( 
            ICPSigner * This,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(ICPSigner, put_TSAAddress)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_TSAAddress )( 
            ICPSigner * This,
            /* [in] */ BSTR newVal);
        
        END_INTERFACE
    } ICPSignerVtbl;

    interface ICPSigner
    {
        CONST_VTBL struct ICPSignerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICPSigner_QueryInterface(This,riid,ppvObj,retval)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObj,retval) ) 

#define ICPSigner_AddRef(This,retval)	\
    ( (This)->lpVtbl -> AddRef(This,retval) ) 

#define ICPSigner_Release(This,retval)	\
    ( (This)->lpVtbl -> Release(This,retval) ) 

#define ICPSigner_GetTypeInfoCount(This,pctinfo,retval)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo,retval) ) 

#define ICPSigner_GetTypeInfo(This,itinfo,lcid,pptinfo,retval)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,itinfo,lcid,pptinfo,retval) ) 

#define ICPSigner_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgdispid,retval)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgdispid,retval) ) 

#define ICPSigner_Invoke(This,dispidMember,riid,lcid,wFlags,pdispparams,pvarResult,pexcepinfo,puArgErr,retval)	\
    ( (This)->lpVtbl -> Invoke(This,dispidMember,riid,lcid,wFlags,pdispparams,pvarResult,pexcepinfo,puArgErr,retval) ) 

#define ICPSigner_get_Certificate(This,retval)	\
    ( (This)->lpVtbl -> get_Certificate(This,retval) ) 

#define ICPSigner_put_Certificate(This,noname,retval)	\
    ( (This)->lpVtbl -> put_Certificate(This,noname,retval) ) 

#define ICPSigner_get_AuthenticatedAttributes(This,retval)	\
    ( (This)->lpVtbl -> get_AuthenticatedAttributes(This,retval) ) 

#define ICPSigner_get_Chain(This,retval)	\
    ( (This)->lpVtbl -> get_Chain(This,retval) ) 

#define ICPSigner_get_Options(This,retval)	\
    ( (This)->lpVtbl -> get_Options(This,retval) ) 

#define ICPSigner_put_Options(This,noname,retval)	\
    ( (This)->lpVtbl -> put_Options(This,noname,retval) ) 

#define ICPSigner_Load(This,FileName,Password,retval)	\
    ( (This)->lpVtbl -> Load(This,FileName,Password,retval) ) 


#define ICPSigner_get_UnauthenticatedAttributes(This,ppVal)	\
    ( (This)->lpVtbl -> get_UnauthenticatedAttributes(This,ppVal) ) 

#define ICPSigner_get_AuthenticatedAttributes2(This,ppVal)	\
    ( (This)->lpVtbl -> get_AuthenticatedAttributes2(This,ppVal) ) 

#define ICPSigner_get_CRLs(This,ppVal)	\
    ( (This)->lpVtbl -> get_CRLs(This,ppVal) ) 

#define ICPSigner_get_OCSPResponses(This,ppVal)	\
    ( (This)->lpVtbl -> get_OCSPResponses(This,ppVal) ) 

#define ICPSigner_get_TSAAddress(This,pVal)	\
    ( (This)->lpVtbl -> get_TSAAddress(This,pVal) ) 

#define ICPSigner_put_TSAAddress(This,newVal)	\
    ( (This)->lpVtbl -> put_TSAAddress(This,newVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICPSigner_INTERFACE_DEFINED__ */


#ifndef __ICPSigner2_INTERFACE_DEFINED__
#define __ICPSigner2_INTERFACE_DEFINED__

/* interface ICPSigner2 */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ICPSigner2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("AF1E9D40-68D6-4b25-800D-6F8CBDF13392")
    ICPSigner2 : public ICPSigner
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Display( 
            /* [defaultvalue][in] */ LONG hwndParent = 0,
            /* [defaultvalue][in] */ BSTR Title = (BSTR)L"—остав цифровой подписи") = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICPSigner2Vtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(ISigner2, QueryInterface)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICPSigner2 * This,
            /* [in][idldescattr] */ struct GUID *riid,
            /* [out][idldescattr] */ void **ppvObj,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(ISigner2, AddRef)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *AddRef )( 
            ICPSigner2 * This,
            /* [retval][out] */ unsigned long *retval);
        
        DECLSPEC_XFGVIRT(ISigner2, Release)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *Release )( 
            ICPSigner2 * This,
            /* [retval][out] */ unsigned long *retval);
        
        DECLSPEC_XFGVIRT(ISigner2, GetTypeInfoCount)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ICPSigner2 * This,
            /* [out][idldescattr] */ unsigned UINT *pctinfo,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(ISigner2, GetTypeInfo)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ICPSigner2 * This,
            /* [in][idldescattr] */ unsigned UINT itinfo,
            /* [in][idldescattr] */ unsigned long lcid,
            /* [out][idldescattr] */ void **pptinfo,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(ISigner2, GetIDsOfNames)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ICPSigner2 * This,
            /* [in][idldescattr] */ struct GUID *riid,
            /* [in][idldescattr] */ signed char **rgszNames,
            /* [in][idldescattr] */ unsigned UINT cNames,
            /* [in][idldescattr] */ unsigned long lcid,
            /* [out][idldescattr] */ signed long *rgdispid,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(ISigner2, Invoke)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICPSigner2 * This,
            /* [in][idldescattr] */ signed long dispidMember,
            /* [in][idldescattr] */ struct GUID *riid,
            /* [in][idldescattr] */ unsigned long lcid,
            /* [in][idldescattr] */ unsigned short wFlags,
            /* [in][idldescattr] */ struct DISPPARAMS *pdispparams,
            /* [out][idldescattr] */ VARIANT *pvarResult,
            /* [out][idldescattr] */ struct EXCEPINFO *pexcepinfo,
            /* [out][idldescattr] */ unsigned UINT *puArgErr,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(ISigner2, get_Certificate)
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_Certificate )( 
            ICPSigner2 * This,
            /* [retval][out] */ ICertificate **retval);
        
        DECLSPEC_XFGVIRT(ISigner2, put_Certificate)
        /* [id][propput][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *put_Certificate )( 
            ICPSigner2 * This,
            /* [in][idldescattr] */ ICertificate *noname,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(ISigner2, get_AuthenticatedAttributes)
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_AuthenticatedAttributes )( 
            ICPSigner2 * This,
            /* [retval][out] */ IAttributes **retval);
        
        DECLSPEC_XFGVIRT(ISigner2, get_Chain)
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_Chain )( 
            ICPSigner2 * This,
            /* [retval][out] */ IChain **retval);
        
        DECLSPEC_XFGVIRT(ISigner2, get_Options)
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_Options )( 
            ICPSigner2 * This,
            /* [retval][out] */ CAPICOM_CERTIFICATE_INCLUDE_OPTION *retval);
        
        DECLSPEC_XFGVIRT(ISigner2, put_Options)
        /* [id][propput][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *put_Options )( 
            ICPSigner2 * This,
            /* [in][idldescattr] */ CAPICOM_CERTIFICATE_INCLUDE_OPTION noname,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(ISigner2, Load)
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *Load )( 
            ICPSigner2 * This,
            /* [in][idldescattr] */ BSTR FileName,
            /* [in][idldescattr] */ BSTR Password,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(ICPSigner, get_UnauthenticatedAttributes)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_UnauthenticatedAttributes )( 
            ICPSigner2 * This,
            /* [retval][out] */ ICPAttributes **ppVal);
        
        DECLSPEC_XFGVIRT(ICPSigner, get_AuthenticatedAttributes2)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_AuthenticatedAttributes2 )( 
            ICPSigner2 * This,
            /* [retval][out] */ ICPAttributes **ppVal);
        
        DECLSPEC_XFGVIRT(ICPSigner, get_CRLs)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_CRLs )( 
            ICPSigner2 * This,
            /* [retval][out] */ ICPBlobs **ppVal);
        
        DECLSPEC_XFGVIRT(ICPSigner, get_OCSPResponses)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_OCSPResponses )( 
            ICPSigner2 * This,
            /* [retval][out] */ ICPBlobs **ppVal);
        
        DECLSPEC_XFGVIRT(ICPSigner, get_TSAAddress)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_TSAAddress )( 
            ICPSigner2 * This,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(ICPSigner, put_TSAAddress)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_TSAAddress )( 
            ICPSigner2 * This,
            /* [in] */ BSTR newVal);
        
        DECLSPEC_XFGVIRT(ICPSigner2, Display)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Display )( 
            ICPSigner2 * This,
            /* [defaultvalue][in] */ LONG hwndParent,
            /* [defaultvalue][in] */ BSTR Title);
        
        END_INTERFACE
    } ICPSigner2Vtbl;

    interface ICPSigner2
    {
        CONST_VTBL struct ICPSigner2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICPSigner2_QueryInterface(This,riid,ppvObj,retval)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObj,retval) ) 

#define ICPSigner2_AddRef(This,retval)	\
    ( (This)->lpVtbl -> AddRef(This,retval) ) 

#define ICPSigner2_Release(This,retval)	\
    ( (This)->lpVtbl -> Release(This,retval) ) 

#define ICPSigner2_GetTypeInfoCount(This,pctinfo,retval)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo,retval) ) 

#define ICPSigner2_GetTypeInfo(This,itinfo,lcid,pptinfo,retval)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,itinfo,lcid,pptinfo,retval) ) 

#define ICPSigner2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgdispid,retval)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgdispid,retval) ) 

#define ICPSigner2_Invoke(This,dispidMember,riid,lcid,wFlags,pdispparams,pvarResult,pexcepinfo,puArgErr,retval)	\
    ( (This)->lpVtbl -> Invoke(This,dispidMember,riid,lcid,wFlags,pdispparams,pvarResult,pexcepinfo,puArgErr,retval) ) 

#define ICPSigner2_get_Certificate(This,retval)	\
    ( (This)->lpVtbl -> get_Certificate(This,retval) ) 

#define ICPSigner2_put_Certificate(This,noname,retval)	\
    ( (This)->lpVtbl -> put_Certificate(This,noname,retval) ) 

#define ICPSigner2_get_AuthenticatedAttributes(This,retval)	\
    ( (This)->lpVtbl -> get_AuthenticatedAttributes(This,retval) ) 

#define ICPSigner2_get_Chain(This,retval)	\
    ( (This)->lpVtbl -> get_Chain(This,retval) ) 

#define ICPSigner2_get_Options(This,retval)	\
    ( (This)->lpVtbl -> get_Options(This,retval) ) 

#define ICPSigner2_put_Options(This,noname,retval)	\
    ( (This)->lpVtbl -> put_Options(This,noname,retval) ) 

#define ICPSigner2_Load(This,FileName,Password,retval)	\
    ( (This)->lpVtbl -> Load(This,FileName,Password,retval) ) 


#define ICPSigner2_get_UnauthenticatedAttributes(This,ppVal)	\
    ( (This)->lpVtbl -> get_UnauthenticatedAttributes(This,ppVal) ) 

#define ICPSigner2_get_AuthenticatedAttributes2(This,ppVal)	\
    ( (This)->lpVtbl -> get_AuthenticatedAttributes2(This,ppVal) ) 

#define ICPSigner2_get_CRLs(This,ppVal)	\
    ( (This)->lpVtbl -> get_CRLs(This,ppVal) ) 

#define ICPSigner2_get_OCSPResponses(This,ppVal)	\
    ( (This)->lpVtbl -> get_OCSPResponses(This,ppVal) ) 

#define ICPSigner2_get_TSAAddress(This,pVal)	\
    ( (This)->lpVtbl -> get_TSAAddress(This,pVal) ) 

#define ICPSigner2_put_TSAAddress(This,newVal)	\
    ( (This)->lpVtbl -> put_TSAAddress(This,newVal) ) 


#define ICPSigner2_Display(This,hwndParent,Title)	\
    ( (This)->lpVtbl -> Display(This,hwndParent,Title) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICPSigner2_INTERFACE_DEFINED__ */


#ifndef __ICPSigner3_INTERFACE_DEFINED__
#define __ICPSigner3_INTERFACE_DEFINED__

/* interface ICPSigner3 */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ICPSigner3;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0696D6A9-013A-4a64-8BA5-71727D0D1C4F")
    ICPSigner3 : public ICPSigner2
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_SignatureTimeStampTime( 
            /* [retval][out] */ DATE *pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_SigningTime( 
            /* [retval][out] */ DATE *pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICPSigner3Vtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(ISigner2, QueryInterface)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICPSigner3 * This,
            /* [in][idldescattr] */ struct GUID *riid,
            /* [out][idldescattr] */ void **ppvObj,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(ISigner2, AddRef)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *AddRef )( 
            ICPSigner3 * This,
            /* [retval][out] */ unsigned long *retval);
        
        DECLSPEC_XFGVIRT(ISigner2, Release)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *Release )( 
            ICPSigner3 * This,
            /* [retval][out] */ unsigned long *retval);
        
        DECLSPEC_XFGVIRT(ISigner2, GetTypeInfoCount)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ICPSigner3 * This,
            /* [out][idldescattr] */ unsigned UINT *pctinfo,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(ISigner2, GetTypeInfo)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ICPSigner3 * This,
            /* [in][idldescattr] */ unsigned UINT itinfo,
            /* [in][idldescattr] */ unsigned long lcid,
            /* [out][idldescattr] */ void **pptinfo,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(ISigner2, GetIDsOfNames)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ICPSigner3 * This,
            /* [in][idldescattr] */ struct GUID *riid,
            /* [in][idldescattr] */ signed char **rgszNames,
            /* [in][idldescattr] */ unsigned UINT cNames,
            /* [in][idldescattr] */ unsigned long lcid,
            /* [out][idldescattr] */ signed long *rgdispid,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(ISigner2, Invoke)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICPSigner3 * This,
            /* [in][idldescattr] */ signed long dispidMember,
            /* [in][idldescattr] */ struct GUID *riid,
            /* [in][idldescattr] */ unsigned long lcid,
            /* [in][idldescattr] */ unsigned short wFlags,
            /* [in][idldescattr] */ struct DISPPARAMS *pdispparams,
            /* [out][idldescattr] */ VARIANT *pvarResult,
            /* [out][idldescattr] */ struct EXCEPINFO *pexcepinfo,
            /* [out][idldescattr] */ unsigned UINT *puArgErr,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(ISigner2, get_Certificate)
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_Certificate )( 
            ICPSigner3 * This,
            /* [retval][out] */ ICertificate **retval);
        
        DECLSPEC_XFGVIRT(ISigner2, put_Certificate)
        /* [id][propput][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *put_Certificate )( 
            ICPSigner3 * This,
            /* [in][idldescattr] */ ICertificate *noname,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(ISigner2, get_AuthenticatedAttributes)
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_AuthenticatedAttributes )( 
            ICPSigner3 * This,
            /* [retval][out] */ IAttributes **retval);
        
        DECLSPEC_XFGVIRT(ISigner2, get_Chain)
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_Chain )( 
            ICPSigner3 * This,
            /* [retval][out] */ IChain **retval);
        
        DECLSPEC_XFGVIRT(ISigner2, get_Options)
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_Options )( 
            ICPSigner3 * This,
            /* [retval][out] */ CAPICOM_CERTIFICATE_INCLUDE_OPTION *retval);
        
        DECLSPEC_XFGVIRT(ISigner2, put_Options)
        /* [id][propput][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *put_Options )( 
            ICPSigner3 * This,
            /* [in][idldescattr] */ CAPICOM_CERTIFICATE_INCLUDE_OPTION noname,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(ISigner2, Load)
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *Load )( 
            ICPSigner3 * This,
            /* [in][idldescattr] */ BSTR FileName,
            /* [in][idldescattr] */ BSTR Password,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(ICPSigner, get_UnauthenticatedAttributes)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_UnauthenticatedAttributes )( 
            ICPSigner3 * This,
            /* [retval][out] */ ICPAttributes **ppVal);
        
        DECLSPEC_XFGVIRT(ICPSigner, get_AuthenticatedAttributes2)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_AuthenticatedAttributes2 )( 
            ICPSigner3 * This,
            /* [retval][out] */ ICPAttributes **ppVal);
        
        DECLSPEC_XFGVIRT(ICPSigner, get_CRLs)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_CRLs )( 
            ICPSigner3 * This,
            /* [retval][out] */ ICPBlobs **ppVal);
        
        DECLSPEC_XFGVIRT(ICPSigner, get_OCSPResponses)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_OCSPResponses )( 
            ICPSigner3 * This,
            /* [retval][out] */ ICPBlobs **ppVal);
        
        DECLSPEC_XFGVIRT(ICPSigner, get_TSAAddress)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_TSAAddress )( 
            ICPSigner3 * This,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(ICPSigner, put_TSAAddress)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_TSAAddress )( 
            ICPSigner3 * This,
            /* [in] */ BSTR newVal);
        
        DECLSPEC_XFGVIRT(ICPSigner2, Display)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Display )( 
            ICPSigner3 * This,
            /* [defaultvalue][in] */ LONG hwndParent,
            /* [defaultvalue][in] */ BSTR Title);
        
        DECLSPEC_XFGVIRT(ICPSigner3, get_SignatureTimeStampTime)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SignatureTimeStampTime )( 
            ICPSigner3 * This,
            /* [retval][out] */ DATE *pVal);
        
        DECLSPEC_XFGVIRT(ICPSigner3, get_SigningTime)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SigningTime )( 
            ICPSigner3 * This,
            /* [retval][out] */ DATE *pVal);
        
        END_INTERFACE
    } ICPSigner3Vtbl;

    interface ICPSigner3
    {
        CONST_VTBL struct ICPSigner3Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICPSigner3_QueryInterface(This,riid,ppvObj,retval)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObj,retval) ) 

#define ICPSigner3_AddRef(This,retval)	\
    ( (This)->lpVtbl -> AddRef(This,retval) ) 

#define ICPSigner3_Release(This,retval)	\
    ( (This)->lpVtbl -> Release(This,retval) ) 

#define ICPSigner3_GetTypeInfoCount(This,pctinfo,retval)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo,retval) ) 

#define ICPSigner3_GetTypeInfo(This,itinfo,lcid,pptinfo,retval)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,itinfo,lcid,pptinfo,retval) ) 

#define ICPSigner3_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgdispid,retval)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgdispid,retval) ) 

#define ICPSigner3_Invoke(This,dispidMember,riid,lcid,wFlags,pdispparams,pvarResult,pexcepinfo,puArgErr,retval)	\
    ( (This)->lpVtbl -> Invoke(This,dispidMember,riid,lcid,wFlags,pdispparams,pvarResult,pexcepinfo,puArgErr,retval) ) 

#define ICPSigner3_get_Certificate(This,retval)	\
    ( (This)->lpVtbl -> get_Certificate(This,retval) ) 

#define ICPSigner3_put_Certificate(This,noname,retval)	\
    ( (This)->lpVtbl -> put_Certificate(This,noname,retval) ) 

#define ICPSigner3_get_AuthenticatedAttributes(This,retval)	\
    ( (This)->lpVtbl -> get_AuthenticatedAttributes(This,retval) ) 

#define ICPSigner3_get_Chain(This,retval)	\
    ( (This)->lpVtbl -> get_Chain(This,retval) ) 

#define ICPSigner3_get_Options(This,retval)	\
    ( (This)->lpVtbl -> get_Options(This,retval) ) 

#define ICPSigner3_put_Options(This,noname,retval)	\
    ( (This)->lpVtbl -> put_Options(This,noname,retval) ) 

#define ICPSigner3_Load(This,FileName,Password,retval)	\
    ( (This)->lpVtbl -> Load(This,FileName,Password,retval) ) 


#define ICPSigner3_get_UnauthenticatedAttributes(This,ppVal)	\
    ( (This)->lpVtbl -> get_UnauthenticatedAttributes(This,ppVal) ) 

#define ICPSigner3_get_AuthenticatedAttributes2(This,ppVal)	\
    ( (This)->lpVtbl -> get_AuthenticatedAttributes2(This,ppVal) ) 

#define ICPSigner3_get_CRLs(This,ppVal)	\
    ( (This)->lpVtbl -> get_CRLs(This,ppVal) ) 

#define ICPSigner3_get_OCSPResponses(This,ppVal)	\
    ( (This)->lpVtbl -> get_OCSPResponses(This,ppVal) ) 

#define ICPSigner3_get_TSAAddress(This,pVal)	\
    ( (This)->lpVtbl -> get_TSAAddress(This,pVal) ) 

#define ICPSigner3_put_TSAAddress(This,newVal)	\
    ( (This)->lpVtbl -> put_TSAAddress(This,newVal) ) 


#define ICPSigner3_Display(This,hwndParent,Title)	\
    ( (This)->lpVtbl -> Display(This,hwndParent,Title) ) 


#define ICPSigner3_get_SignatureTimeStampTime(This,pVal)	\
    ( (This)->lpVtbl -> get_SignatureTimeStampTime(This,pVal) ) 

#define ICPSigner3_get_SigningTime(This,pVal)	\
    ( (This)->lpVtbl -> get_SigningTime(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICPSigner3_INTERFACE_DEFINED__ */


#ifndef __ICPSigner4_INTERFACE_DEFINED__
#define __ICPSigner4_INTERFACE_DEFINED__

/* interface ICPSigner4 */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ICPSigner4;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("893B73A2-FC0D-4781-87E5-CD93BF02AC19")
    ICPSigner4 : public ICPSigner3
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_KeyPin( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_KeyPin( 
            /* [in] */ BSTR newVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICPSigner4Vtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(ISigner2, QueryInterface)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICPSigner4 * This,
            /* [in][idldescattr] */ struct GUID *riid,
            /* [out][idldescattr] */ void **ppvObj,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(ISigner2, AddRef)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *AddRef )( 
            ICPSigner4 * This,
            /* [retval][out] */ unsigned long *retval);
        
        DECLSPEC_XFGVIRT(ISigner2, Release)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *Release )( 
            ICPSigner4 * This,
            /* [retval][out] */ unsigned long *retval);
        
        DECLSPEC_XFGVIRT(ISigner2, GetTypeInfoCount)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ICPSigner4 * This,
            /* [out][idldescattr] */ unsigned UINT *pctinfo,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(ISigner2, GetTypeInfo)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ICPSigner4 * This,
            /* [in][idldescattr] */ unsigned UINT itinfo,
            /* [in][idldescattr] */ unsigned long lcid,
            /* [out][idldescattr] */ void **pptinfo,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(ISigner2, GetIDsOfNames)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ICPSigner4 * This,
            /* [in][idldescattr] */ struct GUID *riid,
            /* [in][idldescattr] */ signed char **rgszNames,
            /* [in][idldescattr] */ unsigned UINT cNames,
            /* [in][idldescattr] */ unsigned long lcid,
            /* [out][idldescattr] */ signed long *rgdispid,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(ISigner2, Invoke)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICPSigner4 * This,
            /* [in][idldescattr] */ signed long dispidMember,
            /* [in][idldescattr] */ struct GUID *riid,
            /* [in][idldescattr] */ unsigned long lcid,
            /* [in][idldescattr] */ unsigned short wFlags,
            /* [in][idldescattr] */ struct DISPPARAMS *pdispparams,
            /* [out][idldescattr] */ VARIANT *pvarResult,
            /* [out][idldescattr] */ struct EXCEPINFO *pexcepinfo,
            /* [out][idldescattr] */ unsigned UINT *puArgErr,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(ISigner2, get_Certificate)
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_Certificate )( 
            ICPSigner4 * This,
            /* [retval][out] */ ICertificate **retval);
        
        DECLSPEC_XFGVIRT(ISigner2, put_Certificate)
        /* [id][propput][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *put_Certificate )( 
            ICPSigner4 * This,
            /* [in][idldescattr] */ ICertificate *noname,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(ISigner2, get_AuthenticatedAttributes)
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_AuthenticatedAttributes )( 
            ICPSigner4 * This,
            /* [retval][out] */ IAttributes **retval);
        
        DECLSPEC_XFGVIRT(ISigner2, get_Chain)
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_Chain )( 
            ICPSigner4 * This,
            /* [retval][out] */ IChain **retval);
        
        DECLSPEC_XFGVIRT(ISigner2, get_Options)
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_Options )( 
            ICPSigner4 * This,
            /* [retval][out] */ CAPICOM_CERTIFICATE_INCLUDE_OPTION *retval);
        
        DECLSPEC_XFGVIRT(ISigner2, put_Options)
        /* [id][propput][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *put_Options )( 
            ICPSigner4 * This,
            /* [in][idldescattr] */ CAPICOM_CERTIFICATE_INCLUDE_OPTION noname,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(ISigner2, Load)
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *Load )( 
            ICPSigner4 * This,
            /* [in][idldescattr] */ BSTR FileName,
            /* [in][idldescattr] */ BSTR Password,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(ICPSigner, get_UnauthenticatedAttributes)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_UnauthenticatedAttributes )( 
            ICPSigner4 * This,
            /* [retval][out] */ ICPAttributes **ppVal);
        
        DECLSPEC_XFGVIRT(ICPSigner, get_AuthenticatedAttributes2)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_AuthenticatedAttributes2 )( 
            ICPSigner4 * This,
            /* [retval][out] */ ICPAttributes **ppVal);
        
        DECLSPEC_XFGVIRT(ICPSigner, get_CRLs)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_CRLs )( 
            ICPSigner4 * This,
            /* [retval][out] */ ICPBlobs **ppVal);
        
        DECLSPEC_XFGVIRT(ICPSigner, get_OCSPResponses)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_OCSPResponses )( 
            ICPSigner4 * This,
            /* [retval][out] */ ICPBlobs **ppVal);
        
        DECLSPEC_XFGVIRT(ICPSigner, get_TSAAddress)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_TSAAddress )( 
            ICPSigner4 * This,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(ICPSigner, put_TSAAddress)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_TSAAddress )( 
            ICPSigner4 * This,
            /* [in] */ BSTR newVal);
        
        DECLSPEC_XFGVIRT(ICPSigner2, Display)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Display )( 
            ICPSigner4 * This,
            /* [defaultvalue][in] */ LONG hwndParent,
            /* [defaultvalue][in] */ BSTR Title);
        
        DECLSPEC_XFGVIRT(ICPSigner3, get_SignatureTimeStampTime)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SignatureTimeStampTime )( 
            ICPSigner4 * This,
            /* [retval][out] */ DATE *pVal);
        
        DECLSPEC_XFGVIRT(ICPSigner3, get_SigningTime)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SigningTime )( 
            ICPSigner4 * This,
            /* [retval][out] */ DATE *pVal);
        
        DECLSPEC_XFGVIRT(ICPSigner4, get_KeyPin)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_KeyPin )( 
            ICPSigner4 * This,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(ICPSigner4, put_KeyPin)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_KeyPin )( 
            ICPSigner4 * This,
            /* [in] */ BSTR newVal);
        
        END_INTERFACE
    } ICPSigner4Vtbl;

    interface ICPSigner4
    {
        CONST_VTBL struct ICPSigner4Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICPSigner4_QueryInterface(This,riid,ppvObj,retval)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObj,retval) ) 

#define ICPSigner4_AddRef(This,retval)	\
    ( (This)->lpVtbl -> AddRef(This,retval) ) 

#define ICPSigner4_Release(This,retval)	\
    ( (This)->lpVtbl -> Release(This,retval) ) 

#define ICPSigner4_GetTypeInfoCount(This,pctinfo,retval)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo,retval) ) 

#define ICPSigner4_GetTypeInfo(This,itinfo,lcid,pptinfo,retval)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,itinfo,lcid,pptinfo,retval) ) 

#define ICPSigner4_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgdispid,retval)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgdispid,retval) ) 

#define ICPSigner4_Invoke(This,dispidMember,riid,lcid,wFlags,pdispparams,pvarResult,pexcepinfo,puArgErr,retval)	\
    ( (This)->lpVtbl -> Invoke(This,dispidMember,riid,lcid,wFlags,pdispparams,pvarResult,pexcepinfo,puArgErr,retval) ) 

#define ICPSigner4_get_Certificate(This,retval)	\
    ( (This)->lpVtbl -> get_Certificate(This,retval) ) 

#define ICPSigner4_put_Certificate(This,noname,retval)	\
    ( (This)->lpVtbl -> put_Certificate(This,noname,retval) ) 

#define ICPSigner4_get_AuthenticatedAttributes(This,retval)	\
    ( (This)->lpVtbl -> get_AuthenticatedAttributes(This,retval) ) 

#define ICPSigner4_get_Chain(This,retval)	\
    ( (This)->lpVtbl -> get_Chain(This,retval) ) 

#define ICPSigner4_get_Options(This,retval)	\
    ( (This)->lpVtbl -> get_Options(This,retval) ) 

#define ICPSigner4_put_Options(This,noname,retval)	\
    ( (This)->lpVtbl -> put_Options(This,noname,retval) ) 

#define ICPSigner4_Load(This,FileName,Password,retval)	\
    ( (This)->lpVtbl -> Load(This,FileName,Password,retval) ) 


#define ICPSigner4_get_UnauthenticatedAttributes(This,ppVal)	\
    ( (This)->lpVtbl -> get_UnauthenticatedAttributes(This,ppVal) ) 

#define ICPSigner4_get_AuthenticatedAttributes2(This,ppVal)	\
    ( (This)->lpVtbl -> get_AuthenticatedAttributes2(This,ppVal) ) 

#define ICPSigner4_get_CRLs(This,ppVal)	\
    ( (This)->lpVtbl -> get_CRLs(This,ppVal) ) 

#define ICPSigner4_get_OCSPResponses(This,ppVal)	\
    ( (This)->lpVtbl -> get_OCSPResponses(This,ppVal) ) 

#define ICPSigner4_get_TSAAddress(This,pVal)	\
    ( (This)->lpVtbl -> get_TSAAddress(This,pVal) ) 

#define ICPSigner4_put_TSAAddress(This,newVal)	\
    ( (This)->lpVtbl -> put_TSAAddress(This,newVal) ) 


#define ICPSigner4_Display(This,hwndParent,Title)	\
    ( (This)->lpVtbl -> Display(This,hwndParent,Title) ) 


#define ICPSigner4_get_SignatureTimeStampTime(This,pVal)	\
    ( (This)->lpVtbl -> get_SignatureTimeStampTime(This,pVal) ) 

#define ICPSigner4_get_SigningTime(This,pVal)	\
    ( (This)->lpVtbl -> get_SigningTime(This,pVal) ) 


#define ICPSigner4_get_KeyPin(This,pVal)	\
    ( (This)->lpVtbl -> get_KeyPin(This,pVal) ) 

#define ICPSigner4_put_KeyPin(This,newVal)	\
    ( (This)->lpVtbl -> put_KeyPin(This,newVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICPSigner4_INTERFACE_DEFINED__ */


#ifndef __ISignatureStatus_INTERFACE_DEFINED__
#define __ISignatureStatus_INTERFACE_DEFINED__

/* interface ISignatureStatus */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ISignatureStatus;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("A0BB7DFF-8614-4196-B974-2DA895B4E0FE")
    ISignatureStatus : public IDispatch
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_IsValid( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ISignatureStatusVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISignatureStatus * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISignatureStatus * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISignatureStatus * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISignatureStatus * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISignatureStatus * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISignatureStatus * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISignatureStatus * This,
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
        
        DECLSPEC_XFGVIRT(ISignatureStatus, get_IsValid)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_IsValid )( 
            ISignatureStatus * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        END_INTERFACE
    } ISignatureStatusVtbl;

    interface ISignatureStatus
    {
        CONST_VTBL struct ISignatureStatusVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISignatureStatus_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISignatureStatus_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISignatureStatus_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISignatureStatus_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISignatureStatus_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISignatureStatus_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISignatureStatus_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ISignatureStatus_get_IsValid(This,pVal)	\
    ( (This)->lpVtbl -> get_IsValid(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISignatureStatus_INTERFACE_DEFINED__ */


#ifndef __ICPSigner5_INTERFACE_DEFINED__
#define __ICPSigner5_INTERFACE_DEFINED__

/* interface ICPSigner5 */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ICPSigner5;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("A23B42C3-2D57-4811-9968-674BEA1408F1")
    ICPSigner5 : public ICPSigner4
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_SignatureStatus( 
            /* [retval][out] */ ISignatureStatus **ppVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICPSigner5Vtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(ISigner2, QueryInterface)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICPSigner5 * This,
            /* [in][idldescattr] */ struct GUID *riid,
            /* [out][idldescattr] */ void **ppvObj,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(ISigner2, AddRef)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *AddRef )( 
            ICPSigner5 * This,
            /* [retval][out] */ unsigned long *retval);
        
        DECLSPEC_XFGVIRT(ISigner2, Release)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *Release )( 
            ICPSigner5 * This,
            /* [retval][out] */ unsigned long *retval);
        
        DECLSPEC_XFGVIRT(ISigner2, GetTypeInfoCount)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ICPSigner5 * This,
            /* [out][idldescattr] */ unsigned UINT *pctinfo,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(ISigner2, GetTypeInfo)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ICPSigner5 * This,
            /* [in][idldescattr] */ unsigned UINT itinfo,
            /* [in][idldescattr] */ unsigned long lcid,
            /* [out][idldescattr] */ void **pptinfo,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(ISigner2, GetIDsOfNames)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ICPSigner5 * This,
            /* [in][idldescattr] */ struct GUID *riid,
            /* [in][idldescattr] */ signed char **rgszNames,
            /* [in][idldescattr] */ unsigned UINT cNames,
            /* [in][idldescattr] */ unsigned long lcid,
            /* [out][idldescattr] */ signed long *rgdispid,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(ISigner2, Invoke)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICPSigner5 * This,
            /* [in][idldescattr] */ signed long dispidMember,
            /* [in][idldescattr] */ struct GUID *riid,
            /* [in][idldescattr] */ unsigned long lcid,
            /* [in][idldescattr] */ unsigned short wFlags,
            /* [in][idldescattr] */ struct DISPPARAMS *pdispparams,
            /* [out][idldescattr] */ VARIANT *pvarResult,
            /* [out][idldescattr] */ struct EXCEPINFO *pexcepinfo,
            /* [out][idldescattr] */ unsigned UINT *puArgErr,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(ISigner2, get_Certificate)
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_Certificate )( 
            ICPSigner5 * This,
            /* [retval][out] */ ICertificate **retval);
        
        DECLSPEC_XFGVIRT(ISigner2, put_Certificate)
        /* [id][propput][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *put_Certificate )( 
            ICPSigner5 * This,
            /* [in][idldescattr] */ ICertificate *noname,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(ISigner2, get_AuthenticatedAttributes)
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_AuthenticatedAttributes )( 
            ICPSigner5 * This,
            /* [retval][out] */ IAttributes **retval);
        
        DECLSPEC_XFGVIRT(ISigner2, get_Chain)
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_Chain )( 
            ICPSigner5 * This,
            /* [retval][out] */ IChain **retval);
        
        DECLSPEC_XFGVIRT(ISigner2, get_Options)
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_Options )( 
            ICPSigner5 * This,
            /* [retval][out] */ CAPICOM_CERTIFICATE_INCLUDE_OPTION *retval);
        
        DECLSPEC_XFGVIRT(ISigner2, put_Options)
        /* [id][propput][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *put_Options )( 
            ICPSigner5 * This,
            /* [in][idldescattr] */ CAPICOM_CERTIFICATE_INCLUDE_OPTION noname,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(ISigner2, Load)
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *Load )( 
            ICPSigner5 * This,
            /* [in][idldescattr] */ BSTR FileName,
            /* [in][idldescattr] */ BSTR Password,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(ICPSigner, get_UnauthenticatedAttributes)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_UnauthenticatedAttributes )( 
            ICPSigner5 * This,
            /* [retval][out] */ ICPAttributes **ppVal);
        
        DECLSPEC_XFGVIRT(ICPSigner, get_AuthenticatedAttributes2)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_AuthenticatedAttributes2 )( 
            ICPSigner5 * This,
            /* [retval][out] */ ICPAttributes **ppVal);
        
        DECLSPEC_XFGVIRT(ICPSigner, get_CRLs)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_CRLs )( 
            ICPSigner5 * This,
            /* [retval][out] */ ICPBlobs **ppVal);
        
        DECLSPEC_XFGVIRT(ICPSigner, get_OCSPResponses)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_OCSPResponses )( 
            ICPSigner5 * This,
            /* [retval][out] */ ICPBlobs **ppVal);
        
        DECLSPEC_XFGVIRT(ICPSigner, get_TSAAddress)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_TSAAddress )( 
            ICPSigner5 * This,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(ICPSigner, put_TSAAddress)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_TSAAddress )( 
            ICPSigner5 * This,
            /* [in] */ BSTR newVal);
        
        DECLSPEC_XFGVIRT(ICPSigner2, Display)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Display )( 
            ICPSigner5 * This,
            /* [defaultvalue][in] */ LONG hwndParent,
            /* [defaultvalue][in] */ BSTR Title);
        
        DECLSPEC_XFGVIRT(ICPSigner3, get_SignatureTimeStampTime)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SignatureTimeStampTime )( 
            ICPSigner5 * This,
            /* [retval][out] */ DATE *pVal);
        
        DECLSPEC_XFGVIRT(ICPSigner3, get_SigningTime)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SigningTime )( 
            ICPSigner5 * This,
            /* [retval][out] */ DATE *pVal);
        
        DECLSPEC_XFGVIRT(ICPSigner4, get_KeyPin)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_KeyPin )( 
            ICPSigner5 * This,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(ICPSigner4, put_KeyPin)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_KeyPin )( 
            ICPSigner5 * This,
            /* [in] */ BSTR newVal);
        
        DECLSPEC_XFGVIRT(ICPSigner5, get_SignatureStatus)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SignatureStatus )( 
            ICPSigner5 * This,
            /* [retval][out] */ ISignatureStatus **ppVal);
        
        END_INTERFACE
    } ICPSigner5Vtbl;

    interface ICPSigner5
    {
        CONST_VTBL struct ICPSigner5Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICPSigner5_QueryInterface(This,riid,ppvObj,retval)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObj,retval) ) 

#define ICPSigner5_AddRef(This,retval)	\
    ( (This)->lpVtbl -> AddRef(This,retval) ) 

#define ICPSigner5_Release(This,retval)	\
    ( (This)->lpVtbl -> Release(This,retval) ) 

#define ICPSigner5_GetTypeInfoCount(This,pctinfo,retval)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo,retval) ) 

#define ICPSigner5_GetTypeInfo(This,itinfo,lcid,pptinfo,retval)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,itinfo,lcid,pptinfo,retval) ) 

#define ICPSigner5_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgdispid,retval)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgdispid,retval) ) 

#define ICPSigner5_Invoke(This,dispidMember,riid,lcid,wFlags,pdispparams,pvarResult,pexcepinfo,puArgErr,retval)	\
    ( (This)->lpVtbl -> Invoke(This,dispidMember,riid,lcid,wFlags,pdispparams,pvarResult,pexcepinfo,puArgErr,retval) ) 

#define ICPSigner5_get_Certificate(This,retval)	\
    ( (This)->lpVtbl -> get_Certificate(This,retval) ) 

#define ICPSigner5_put_Certificate(This,noname,retval)	\
    ( (This)->lpVtbl -> put_Certificate(This,noname,retval) ) 

#define ICPSigner5_get_AuthenticatedAttributes(This,retval)	\
    ( (This)->lpVtbl -> get_AuthenticatedAttributes(This,retval) ) 

#define ICPSigner5_get_Chain(This,retval)	\
    ( (This)->lpVtbl -> get_Chain(This,retval) ) 

#define ICPSigner5_get_Options(This,retval)	\
    ( (This)->lpVtbl -> get_Options(This,retval) ) 

#define ICPSigner5_put_Options(This,noname,retval)	\
    ( (This)->lpVtbl -> put_Options(This,noname,retval) ) 

#define ICPSigner5_Load(This,FileName,Password,retval)	\
    ( (This)->lpVtbl -> Load(This,FileName,Password,retval) ) 


#define ICPSigner5_get_UnauthenticatedAttributes(This,ppVal)	\
    ( (This)->lpVtbl -> get_UnauthenticatedAttributes(This,ppVal) ) 

#define ICPSigner5_get_AuthenticatedAttributes2(This,ppVal)	\
    ( (This)->lpVtbl -> get_AuthenticatedAttributes2(This,ppVal) ) 

#define ICPSigner5_get_CRLs(This,ppVal)	\
    ( (This)->lpVtbl -> get_CRLs(This,ppVal) ) 

#define ICPSigner5_get_OCSPResponses(This,ppVal)	\
    ( (This)->lpVtbl -> get_OCSPResponses(This,ppVal) ) 

#define ICPSigner5_get_TSAAddress(This,pVal)	\
    ( (This)->lpVtbl -> get_TSAAddress(This,pVal) ) 

#define ICPSigner5_put_TSAAddress(This,newVal)	\
    ( (This)->lpVtbl -> put_TSAAddress(This,newVal) ) 


#define ICPSigner5_Display(This,hwndParent,Title)	\
    ( (This)->lpVtbl -> Display(This,hwndParent,Title) ) 


#define ICPSigner5_get_SignatureTimeStampTime(This,pVal)	\
    ( (This)->lpVtbl -> get_SignatureTimeStampTime(This,pVal) ) 

#define ICPSigner5_get_SigningTime(This,pVal)	\
    ( (This)->lpVtbl -> get_SigningTime(This,pVal) ) 


#define ICPSigner5_get_KeyPin(This,pVal)	\
    ( (This)->lpVtbl -> get_KeyPin(This,pVal) ) 

#define ICPSigner5_put_KeyPin(This,newVal)	\
    ( (This)->lpVtbl -> put_KeyPin(This,newVal) ) 


#define ICPSigner5_get_SignatureStatus(This,ppVal)	\
    ( (This)->lpVtbl -> get_SignatureStatus(This,ppVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICPSigner5_INTERFACE_DEFINED__ */


#ifndef __ICPSigner6_INTERFACE_DEFINED__
#define __ICPSigner6_INTERFACE_DEFINED__

/* interface ICPSigner6 */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ICPSigner6;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0FD68D28-1AAB-4AFE-B2C3-DC9CEF7B6BB4")
    ICPSigner6 : public ICPSigner5
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_CheckCertificate( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_CheckCertificate( 
            /* [in] */ VARIANT_BOOL Val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICPSigner6Vtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(ISigner2, QueryInterface)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICPSigner6 * This,
            /* [in][idldescattr] */ struct GUID *riid,
            /* [out][idldescattr] */ void **ppvObj,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(ISigner2, AddRef)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *AddRef )( 
            ICPSigner6 * This,
            /* [retval][out] */ unsigned long *retval);
        
        DECLSPEC_XFGVIRT(ISigner2, Release)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *Release )( 
            ICPSigner6 * This,
            /* [retval][out] */ unsigned long *retval);
        
        DECLSPEC_XFGVIRT(ISigner2, GetTypeInfoCount)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ICPSigner6 * This,
            /* [out][idldescattr] */ unsigned UINT *pctinfo,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(ISigner2, GetTypeInfo)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ICPSigner6 * This,
            /* [in][idldescattr] */ unsigned UINT itinfo,
            /* [in][idldescattr] */ unsigned long lcid,
            /* [out][idldescattr] */ void **pptinfo,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(ISigner2, GetIDsOfNames)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ICPSigner6 * This,
            /* [in][idldescattr] */ struct GUID *riid,
            /* [in][idldescattr] */ signed char **rgszNames,
            /* [in][idldescattr] */ unsigned UINT cNames,
            /* [in][idldescattr] */ unsigned long lcid,
            /* [out][idldescattr] */ signed long *rgdispid,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(ISigner2, Invoke)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICPSigner6 * This,
            /* [in][idldescattr] */ signed long dispidMember,
            /* [in][idldescattr] */ struct GUID *riid,
            /* [in][idldescattr] */ unsigned long lcid,
            /* [in][idldescattr] */ unsigned short wFlags,
            /* [in][idldescattr] */ struct DISPPARAMS *pdispparams,
            /* [out][idldescattr] */ VARIANT *pvarResult,
            /* [out][idldescattr] */ struct EXCEPINFO *pexcepinfo,
            /* [out][idldescattr] */ unsigned UINT *puArgErr,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(ISigner2, get_Certificate)
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_Certificate )( 
            ICPSigner6 * This,
            /* [retval][out] */ ICertificate **retval);
        
        DECLSPEC_XFGVIRT(ISigner2, put_Certificate)
        /* [id][propput][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *put_Certificate )( 
            ICPSigner6 * This,
            /* [in][idldescattr] */ ICertificate *noname,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(ISigner2, get_AuthenticatedAttributes)
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_AuthenticatedAttributes )( 
            ICPSigner6 * This,
            /* [retval][out] */ IAttributes **retval);
        
        DECLSPEC_XFGVIRT(ISigner2, get_Chain)
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_Chain )( 
            ICPSigner6 * This,
            /* [retval][out] */ IChain **retval);
        
        DECLSPEC_XFGVIRT(ISigner2, get_Options)
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_Options )( 
            ICPSigner6 * This,
            /* [retval][out] */ CAPICOM_CERTIFICATE_INCLUDE_OPTION *retval);
        
        DECLSPEC_XFGVIRT(ISigner2, put_Options)
        /* [id][propput][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *put_Options )( 
            ICPSigner6 * This,
            /* [in][idldescattr] */ CAPICOM_CERTIFICATE_INCLUDE_OPTION noname,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(ISigner2, Load)
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *Load )( 
            ICPSigner6 * This,
            /* [in][idldescattr] */ BSTR FileName,
            /* [in][idldescattr] */ BSTR Password,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(ICPSigner, get_UnauthenticatedAttributes)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_UnauthenticatedAttributes )( 
            ICPSigner6 * This,
            /* [retval][out] */ ICPAttributes **ppVal);
        
        DECLSPEC_XFGVIRT(ICPSigner, get_AuthenticatedAttributes2)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_AuthenticatedAttributes2 )( 
            ICPSigner6 * This,
            /* [retval][out] */ ICPAttributes **ppVal);
        
        DECLSPEC_XFGVIRT(ICPSigner, get_CRLs)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_CRLs )( 
            ICPSigner6 * This,
            /* [retval][out] */ ICPBlobs **ppVal);
        
        DECLSPEC_XFGVIRT(ICPSigner, get_OCSPResponses)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_OCSPResponses )( 
            ICPSigner6 * This,
            /* [retval][out] */ ICPBlobs **ppVal);
        
        DECLSPEC_XFGVIRT(ICPSigner, get_TSAAddress)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_TSAAddress )( 
            ICPSigner6 * This,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(ICPSigner, put_TSAAddress)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_TSAAddress )( 
            ICPSigner6 * This,
            /* [in] */ BSTR newVal);
        
        DECLSPEC_XFGVIRT(ICPSigner2, Display)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Display )( 
            ICPSigner6 * This,
            /* [defaultvalue][in] */ LONG hwndParent,
            /* [defaultvalue][in] */ BSTR Title);
        
        DECLSPEC_XFGVIRT(ICPSigner3, get_SignatureTimeStampTime)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SignatureTimeStampTime )( 
            ICPSigner6 * This,
            /* [retval][out] */ DATE *pVal);
        
        DECLSPEC_XFGVIRT(ICPSigner3, get_SigningTime)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SigningTime )( 
            ICPSigner6 * This,
            /* [retval][out] */ DATE *pVal);
        
        DECLSPEC_XFGVIRT(ICPSigner4, get_KeyPin)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_KeyPin )( 
            ICPSigner6 * This,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(ICPSigner4, put_KeyPin)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_KeyPin )( 
            ICPSigner6 * This,
            /* [in] */ BSTR newVal);
        
        DECLSPEC_XFGVIRT(ICPSigner5, get_SignatureStatus)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SignatureStatus )( 
            ICPSigner6 * This,
            /* [retval][out] */ ISignatureStatus **ppVal);
        
        DECLSPEC_XFGVIRT(ICPSigner6, get_CheckCertificate)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_CheckCertificate )( 
            ICPSigner6 * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        DECLSPEC_XFGVIRT(ICPSigner6, put_CheckCertificate)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_CheckCertificate )( 
            ICPSigner6 * This,
            /* [in] */ VARIANT_BOOL Val);
        
        END_INTERFACE
    } ICPSigner6Vtbl;

    interface ICPSigner6
    {
        CONST_VTBL struct ICPSigner6Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICPSigner6_QueryInterface(This,riid,ppvObj,retval)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObj,retval) ) 

#define ICPSigner6_AddRef(This,retval)	\
    ( (This)->lpVtbl -> AddRef(This,retval) ) 

#define ICPSigner6_Release(This,retval)	\
    ( (This)->lpVtbl -> Release(This,retval) ) 

#define ICPSigner6_GetTypeInfoCount(This,pctinfo,retval)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo,retval) ) 

#define ICPSigner6_GetTypeInfo(This,itinfo,lcid,pptinfo,retval)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,itinfo,lcid,pptinfo,retval) ) 

#define ICPSigner6_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgdispid,retval)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgdispid,retval) ) 

#define ICPSigner6_Invoke(This,dispidMember,riid,lcid,wFlags,pdispparams,pvarResult,pexcepinfo,puArgErr,retval)	\
    ( (This)->lpVtbl -> Invoke(This,dispidMember,riid,lcid,wFlags,pdispparams,pvarResult,pexcepinfo,puArgErr,retval) ) 

#define ICPSigner6_get_Certificate(This,retval)	\
    ( (This)->lpVtbl -> get_Certificate(This,retval) ) 

#define ICPSigner6_put_Certificate(This,noname,retval)	\
    ( (This)->lpVtbl -> put_Certificate(This,noname,retval) ) 

#define ICPSigner6_get_AuthenticatedAttributes(This,retval)	\
    ( (This)->lpVtbl -> get_AuthenticatedAttributes(This,retval) ) 

#define ICPSigner6_get_Chain(This,retval)	\
    ( (This)->lpVtbl -> get_Chain(This,retval) ) 

#define ICPSigner6_get_Options(This,retval)	\
    ( (This)->lpVtbl -> get_Options(This,retval) ) 

#define ICPSigner6_put_Options(This,noname,retval)	\
    ( (This)->lpVtbl -> put_Options(This,noname,retval) ) 

#define ICPSigner6_Load(This,FileName,Password,retval)	\
    ( (This)->lpVtbl -> Load(This,FileName,Password,retval) ) 


#define ICPSigner6_get_UnauthenticatedAttributes(This,ppVal)	\
    ( (This)->lpVtbl -> get_UnauthenticatedAttributes(This,ppVal) ) 

#define ICPSigner6_get_AuthenticatedAttributes2(This,ppVal)	\
    ( (This)->lpVtbl -> get_AuthenticatedAttributes2(This,ppVal) ) 

#define ICPSigner6_get_CRLs(This,ppVal)	\
    ( (This)->lpVtbl -> get_CRLs(This,ppVal) ) 

#define ICPSigner6_get_OCSPResponses(This,ppVal)	\
    ( (This)->lpVtbl -> get_OCSPResponses(This,ppVal) ) 

#define ICPSigner6_get_TSAAddress(This,pVal)	\
    ( (This)->lpVtbl -> get_TSAAddress(This,pVal) ) 

#define ICPSigner6_put_TSAAddress(This,newVal)	\
    ( (This)->lpVtbl -> put_TSAAddress(This,newVal) ) 


#define ICPSigner6_Display(This,hwndParent,Title)	\
    ( (This)->lpVtbl -> Display(This,hwndParent,Title) ) 


#define ICPSigner6_get_SignatureTimeStampTime(This,pVal)	\
    ( (This)->lpVtbl -> get_SignatureTimeStampTime(This,pVal) ) 

#define ICPSigner6_get_SigningTime(This,pVal)	\
    ( (This)->lpVtbl -> get_SigningTime(This,pVal) ) 


#define ICPSigner6_get_KeyPin(This,pVal)	\
    ( (This)->lpVtbl -> get_KeyPin(This,pVal) ) 

#define ICPSigner6_put_KeyPin(This,newVal)	\
    ( (This)->lpVtbl -> put_KeyPin(This,newVal) ) 


#define ICPSigner6_get_SignatureStatus(This,ppVal)	\
    ( (This)->lpVtbl -> get_SignatureStatus(This,ppVal) ) 


#define ICPSigner6_get_CheckCertificate(This,pVal)	\
    ( (This)->lpVtbl -> get_CheckCertificate(This,pVal) ) 

#define ICPSigner6_put_CheckCertificate(This,Val)	\
    ( (This)->lpVtbl -> put_CheckCertificate(This,Val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICPSigner6_INTERFACE_DEFINED__ */


#ifndef __ICPSigner7_INTERFACE_DEFINED__
#define __ICPSigner7_INTERFACE_DEFINED__

/* interface ICPSigner7 */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ICPSigner7;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0FD68D28-1AAB-4AFE-B2C3-DC9CEF7B6BB5")
    ICPSigner7 : public ICPSigner6
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AdditionalTSAAddress( 
            /* [in] */ BSTR pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICPSigner7Vtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(ISigner2, QueryInterface)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICPSigner7 * This,
            /* [in][idldescattr] */ struct GUID *riid,
            /* [out][idldescattr] */ void **ppvObj,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(ISigner2, AddRef)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *AddRef )( 
            ICPSigner7 * This,
            /* [retval][out] */ unsigned long *retval);
        
        DECLSPEC_XFGVIRT(ISigner2, Release)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *Release )( 
            ICPSigner7 * This,
            /* [retval][out] */ unsigned long *retval);
        
        DECLSPEC_XFGVIRT(ISigner2, GetTypeInfoCount)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ICPSigner7 * This,
            /* [out][idldescattr] */ unsigned UINT *pctinfo,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(ISigner2, GetTypeInfo)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ICPSigner7 * This,
            /* [in][idldescattr] */ unsigned UINT itinfo,
            /* [in][idldescattr] */ unsigned long lcid,
            /* [out][idldescattr] */ void **pptinfo,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(ISigner2, GetIDsOfNames)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ICPSigner7 * This,
            /* [in][idldescattr] */ struct GUID *riid,
            /* [in][idldescattr] */ signed char **rgszNames,
            /* [in][idldescattr] */ unsigned UINT cNames,
            /* [in][idldescattr] */ unsigned long lcid,
            /* [out][idldescattr] */ signed long *rgdispid,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(ISigner2, Invoke)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICPSigner7 * This,
            /* [in][idldescattr] */ signed long dispidMember,
            /* [in][idldescattr] */ struct GUID *riid,
            /* [in][idldescattr] */ unsigned long lcid,
            /* [in][idldescattr] */ unsigned short wFlags,
            /* [in][idldescattr] */ struct DISPPARAMS *pdispparams,
            /* [out][idldescattr] */ VARIANT *pvarResult,
            /* [out][idldescattr] */ struct EXCEPINFO *pexcepinfo,
            /* [out][idldescattr] */ unsigned UINT *puArgErr,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(ISigner2, get_Certificate)
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_Certificate )( 
            ICPSigner7 * This,
            /* [retval][out] */ ICertificate **retval);
        
        DECLSPEC_XFGVIRT(ISigner2, put_Certificate)
        /* [id][propput][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *put_Certificate )( 
            ICPSigner7 * This,
            /* [in][idldescattr] */ ICertificate *noname,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(ISigner2, get_AuthenticatedAttributes)
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_AuthenticatedAttributes )( 
            ICPSigner7 * This,
            /* [retval][out] */ IAttributes **retval);
        
        DECLSPEC_XFGVIRT(ISigner2, get_Chain)
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_Chain )( 
            ICPSigner7 * This,
            /* [retval][out] */ IChain **retval);
        
        DECLSPEC_XFGVIRT(ISigner2, get_Options)
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_Options )( 
            ICPSigner7 * This,
            /* [retval][out] */ CAPICOM_CERTIFICATE_INCLUDE_OPTION *retval);
        
        DECLSPEC_XFGVIRT(ISigner2, put_Options)
        /* [id][propput][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *put_Options )( 
            ICPSigner7 * This,
            /* [in][idldescattr] */ CAPICOM_CERTIFICATE_INCLUDE_OPTION noname,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(ISigner2, Load)
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *Load )( 
            ICPSigner7 * This,
            /* [in][idldescattr] */ BSTR FileName,
            /* [in][idldescattr] */ BSTR Password,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(ICPSigner, get_UnauthenticatedAttributes)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_UnauthenticatedAttributes )( 
            ICPSigner7 * This,
            /* [retval][out] */ ICPAttributes **ppVal);
        
        DECLSPEC_XFGVIRT(ICPSigner, get_AuthenticatedAttributes2)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_AuthenticatedAttributes2 )( 
            ICPSigner7 * This,
            /* [retval][out] */ ICPAttributes **ppVal);
        
        DECLSPEC_XFGVIRT(ICPSigner, get_CRLs)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_CRLs )( 
            ICPSigner7 * This,
            /* [retval][out] */ ICPBlobs **ppVal);
        
        DECLSPEC_XFGVIRT(ICPSigner, get_OCSPResponses)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_OCSPResponses )( 
            ICPSigner7 * This,
            /* [retval][out] */ ICPBlobs **ppVal);
        
        DECLSPEC_XFGVIRT(ICPSigner, get_TSAAddress)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_TSAAddress )( 
            ICPSigner7 * This,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(ICPSigner, put_TSAAddress)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_TSAAddress )( 
            ICPSigner7 * This,
            /* [in] */ BSTR newVal);
        
        DECLSPEC_XFGVIRT(ICPSigner2, Display)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Display )( 
            ICPSigner7 * This,
            /* [defaultvalue][in] */ LONG hwndParent,
            /* [defaultvalue][in] */ BSTR Title);
        
        DECLSPEC_XFGVIRT(ICPSigner3, get_SignatureTimeStampTime)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SignatureTimeStampTime )( 
            ICPSigner7 * This,
            /* [retval][out] */ DATE *pVal);
        
        DECLSPEC_XFGVIRT(ICPSigner3, get_SigningTime)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SigningTime )( 
            ICPSigner7 * This,
            /* [retval][out] */ DATE *pVal);
        
        DECLSPEC_XFGVIRT(ICPSigner4, get_KeyPin)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_KeyPin )( 
            ICPSigner7 * This,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(ICPSigner4, put_KeyPin)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_KeyPin )( 
            ICPSigner7 * This,
            /* [in] */ BSTR newVal);
        
        DECLSPEC_XFGVIRT(ICPSigner5, get_SignatureStatus)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SignatureStatus )( 
            ICPSigner7 * This,
            /* [retval][out] */ ISignatureStatus **ppVal);
        
        DECLSPEC_XFGVIRT(ICPSigner6, get_CheckCertificate)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_CheckCertificate )( 
            ICPSigner7 * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        DECLSPEC_XFGVIRT(ICPSigner6, put_CheckCertificate)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_CheckCertificate )( 
            ICPSigner7 * This,
            /* [in] */ VARIANT_BOOL Val);
        
        DECLSPEC_XFGVIRT(ICPSigner7, AdditionalTSAAddress)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AdditionalTSAAddress )( 
            ICPSigner7 * This,
            /* [in] */ BSTR pVal);
        
        END_INTERFACE
    } ICPSigner7Vtbl;

    interface ICPSigner7
    {
        CONST_VTBL struct ICPSigner7Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICPSigner7_QueryInterface(This,riid,ppvObj,retval)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObj,retval) ) 

#define ICPSigner7_AddRef(This,retval)	\
    ( (This)->lpVtbl -> AddRef(This,retval) ) 

#define ICPSigner7_Release(This,retval)	\
    ( (This)->lpVtbl -> Release(This,retval) ) 

#define ICPSigner7_GetTypeInfoCount(This,pctinfo,retval)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo,retval) ) 

#define ICPSigner7_GetTypeInfo(This,itinfo,lcid,pptinfo,retval)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,itinfo,lcid,pptinfo,retval) ) 

#define ICPSigner7_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgdispid,retval)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgdispid,retval) ) 

#define ICPSigner7_Invoke(This,dispidMember,riid,lcid,wFlags,pdispparams,pvarResult,pexcepinfo,puArgErr,retval)	\
    ( (This)->lpVtbl -> Invoke(This,dispidMember,riid,lcid,wFlags,pdispparams,pvarResult,pexcepinfo,puArgErr,retval) ) 

#define ICPSigner7_get_Certificate(This,retval)	\
    ( (This)->lpVtbl -> get_Certificate(This,retval) ) 

#define ICPSigner7_put_Certificate(This,noname,retval)	\
    ( (This)->lpVtbl -> put_Certificate(This,noname,retval) ) 

#define ICPSigner7_get_AuthenticatedAttributes(This,retval)	\
    ( (This)->lpVtbl -> get_AuthenticatedAttributes(This,retval) ) 

#define ICPSigner7_get_Chain(This,retval)	\
    ( (This)->lpVtbl -> get_Chain(This,retval) ) 

#define ICPSigner7_get_Options(This,retval)	\
    ( (This)->lpVtbl -> get_Options(This,retval) ) 

#define ICPSigner7_put_Options(This,noname,retval)	\
    ( (This)->lpVtbl -> put_Options(This,noname,retval) ) 

#define ICPSigner7_Load(This,FileName,Password,retval)	\
    ( (This)->lpVtbl -> Load(This,FileName,Password,retval) ) 


#define ICPSigner7_get_UnauthenticatedAttributes(This,ppVal)	\
    ( (This)->lpVtbl -> get_UnauthenticatedAttributes(This,ppVal) ) 

#define ICPSigner7_get_AuthenticatedAttributes2(This,ppVal)	\
    ( (This)->lpVtbl -> get_AuthenticatedAttributes2(This,ppVal) ) 

#define ICPSigner7_get_CRLs(This,ppVal)	\
    ( (This)->lpVtbl -> get_CRLs(This,ppVal) ) 

#define ICPSigner7_get_OCSPResponses(This,ppVal)	\
    ( (This)->lpVtbl -> get_OCSPResponses(This,ppVal) ) 

#define ICPSigner7_get_TSAAddress(This,pVal)	\
    ( (This)->lpVtbl -> get_TSAAddress(This,pVal) ) 

#define ICPSigner7_put_TSAAddress(This,newVal)	\
    ( (This)->lpVtbl -> put_TSAAddress(This,newVal) ) 


#define ICPSigner7_Display(This,hwndParent,Title)	\
    ( (This)->lpVtbl -> Display(This,hwndParent,Title) ) 


#define ICPSigner7_get_SignatureTimeStampTime(This,pVal)	\
    ( (This)->lpVtbl -> get_SignatureTimeStampTime(This,pVal) ) 

#define ICPSigner7_get_SigningTime(This,pVal)	\
    ( (This)->lpVtbl -> get_SigningTime(This,pVal) ) 


#define ICPSigner7_get_KeyPin(This,pVal)	\
    ( (This)->lpVtbl -> get_KeyPin(This,pVal) ) 

#define ICPSigner7_put_KeyPin(This,newVal)	\
    ( (This)->lpVtbl -> put_KeyPin(This,newVal) ) 


#define ICPSigner7_get_SignatureStatus(This,ppVal)	\
    ( (This)->lpVtbl -> get_SignatureStatus(This,ppVal) ) 


#define ICPSigner7_get_CheckCertificate(This,pVal)	\
    ( (This)->lpVtbl -> get_CheckCertificate(This,pVal) ) 

#define ICPSigner7_put_CheckCertificate(This,Val)	\
    ( (This)->lpVtbl -> put_CheckCertificate(This,Val) ) 


#define ICPSigner7_AdditionalTSAAddress(This,pVal)	\
    ( (This)->lpVtbl -> AdditionalTSAAddress(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICPSigner7_INTERFACE_DEFINED__ */


#ifndef __ICPBlobs_INTERFACE_DEFINED__
#define __ICPBlobs_INTERFACE_DEFINED__

/* interface ICPBlobs */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ICPBlobs;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("546A657C-6133-459D-8C38-764189EC5A4B")
    ICPBlobs : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Add( 
            /* [in] */ VARIANT Blob) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Remove( 
            LONG Index) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Clear( void) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ LONG Index,
            /* [retval][out] */ VARIANT *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IUnknown **ppVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ LONG *pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICPBlobsVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICPBlobs * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICPBlobs * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICPBlobs * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ICPBlobs * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ICPBlobs * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ICPBlobs * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICPBlobs * This,
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
        
        DECLSPEC_XFGVIRT(ICPBlobs, Add)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Add )( 
            ICPBlobs * This,
            /* [in] */ VARIANT Blob);
        
        DECLSPEC_XFGVIRT(ICPBlobs, Remove)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Remove )( 
            ICPBlobs * This,
            LONG Index);
        
        DECLSPEC_XFGVIRT(ICPBlobs, Clear)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Clear )( 
            ICPBlobs * This);
        
        DECLSPEC_XFGVIRT(ICPBlobs, get_Item)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            ICPBlobs * This,
            /* [in] */ LONG Index,
            /* [retval][out] */ VARIANT *pVal);
        
        DECLSPEC_XFGVIRT(ICPBlobs, get__NewEnum)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            ICPBlobs * This,
            /* [retval][out] */ IUnknown **ppVal);
        
        DECLSPEC_XFGVIRT(ICPBlobs, get_Count)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            ICPBlobs * This,
            /* [retval][out] */ LONG *pVal);
        
        END_INTERFACE
    } ICPBlobsVtbl;

    interface ICPBlobs
    {
        CONST_VTBL struct ICPBlobsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICPBlobs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICPBlobs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICPBlobs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICPBlobs_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ICPBlobs_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ICPBlobs_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ICPBlobs_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ICPBlobs_Add(This,Blob)	\
    ( (This)->lpVtbl -> Add(This,Blob) ) 

#define ICPBlobs_Remove(This,Index)	\
    ( (This)->lpVtbl -> Remove(This,Index) ) 

#define ICPBlobs_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define ICPBlobs_get_Item(This,Index,pVal)	\
    ( (This)->lpVtbl -> get_Item(This,Index,pVal) ) 

#define ICPBlobs_get__NewEnum(This,ppVal)	\
    ( (This)->lpVtbl -> get__NewEnum(This,ppVal) ) 

#define ICPBlobs_get_Count(This,pVal)	\
    ( (This)->lpVtbl -> get_Count(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICPBlobs_INTERFACE_DEFINED__ */


#ifndef __ICPAttribute_INTERFACE_DEFINED__
#define __ICPAttribute_INTERFACE_DEFINED__

/* interface ICPAttribute */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ICPAttribute;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("23AAEFAE-DD8A-440F-9FCC-14160DDA700E")
    ICPAttribute : public IDispatch
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_OID( 
            /* [retval][out] */ /* external definition not present */ IOID **ppVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Value( 
            /* [retval][out] */ VARIANT *pVal) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_Value( 
            /* [in] */ VARIANT val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICPAttributeVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICPAttribute * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICPAttribute * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICPAttribute * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ICPAttribute * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ICPAttribute * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ICPAttribute * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICPAttribute * This,
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
        
        DECLSPEC_XFGVIRT(ICPAttribute, get_OID)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_OID )( 
            ICPAttribute * This,
            /* [retval][out] */ /* external definition not present */ IOID **ppVal);
        
        DECLSPEC_XFGVIRT(ICPAttribute, get_Value)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Value )( 
            ICPAttribute * This,
            /* [retval][out] */ VARIANT *pVal);
        
        DECLSPEC_XFGVIRT(ICPAttribute, put_Value)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Value )( 
            ICPAttribute * This,
            /* [in] */ VARIANT val);
        
        END_INTERFACE
    } ICPAttributeVtbl;

    interface ICPAttribute
    {
        CONST_VTBL struct ICPAttributeVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICPAttribute_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICPAttribute_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICPAttribute_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICPAttribute_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ICPAttribute_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ICPAttribute_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ICPAttribute_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ICPAttribute_get_OID(This,ppVal)	\
    ( (This)->lpVtbl -> get_OID(This,ppVal) ) 

#define ICPAttribute_get_Value(This,pVal)	\
    ( (This)->lpVtbl -> get_Value(This,pVal) ) 

#define ICPAttribute_put_Value(This,val)	\
    ( (This)->lpVtbl -> put_Value(This,val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICPAttribute_INTERFACE_DEFINED__ */


#ifndef __ICPAttribute2_INTERFACE_DEFINED__
#define __ICPAttribute2_INTERFACE_DEFINED__

/* interface ICPAttribute2 */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ICPAttribute2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("597C704F-AA98-4e57-83AF-C22410F1D11E")
    ICPAttribute2 : public ICPAttribute
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ValueEncoding( 
            /* [retval][out] */ CAPICOM_ENCODING_TYPE *pVal) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ValueEncoding( 
            /* [in] */ CAPICOM_ENCODING_TYPE val) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ CADESCOM_ATTRIBUTE *pVal) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_Name( 
            /* [in] */ CADESCOM_ATTRIBUTE val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICPAttribute2Vtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICPAttribute2 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICPAttribute2 * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICPAttribute2 * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ICPAttribute2 * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ICPAttribute2 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ICPAttribute2 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICPAttribute2 * This,
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
        
        DECLSPEC_XFGVIRT(ICPAttribute, get_OID)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_OID )( 
            ICPAttribute2 * This,
            /* [retval][out] */ /* external definition not present */ IOID **ppVal);
        
        DECLSPEC_XFGVIRT(ICPAttribute, get_Value)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Value )( 
            ICPAttribute2 * This,
            /* [retval][out] */ VARIANT *pVal);
        
        DECLSPEC_XFGVIRT(ICPAttribute, put_Value)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Value )( 
            ICPAttribute2 * This,
            /* [in] */ VARIANT val);
        
        DECLSPEC_XFGVIRT(ICPAttribute2, get_ValueEncoding)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ValueEncoding )( 
            ICPAttribute2 * This,
            /* [retval][out] */ CAPICOM_ENCODING_TYPE *pVal);
        
        DECLSPEC_XFGVIRT(ICPAttribute2, put_ValueEncoding)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ValueEncoding )( 
            ICPAttribute2 * This,
            /* [in] */ CAPICOM_ENCODING_TYPE val);
        
        DECLSPEC_XFGVIRT(ICPAttribute2, get_Name)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            ICPAttribute2 * This,
            /* [retval][out] */ CADESCOM_ATTRIBUTE *pVal);
        
        DECLSPEC_XFGVIRT(ICPAttribute2, put_Name)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Name )( 
            ICPAttribute2 * This,
            /* [in] */ CADESCOM_ATTRIBUTE val);
        
        END_INTERFACE
    } ICPAttribute2Vtbl;

    interface ICPAttribute2
    {
        CONST_VTBL struct ICPAttribute2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICPAttribute2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICPAttribute2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICPAttribute2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICPAttribute2_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ICPAttribute2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ICPAttribute2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ICPAttribute2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ICPAttribute2_get_OID(This,ppVal)	\
    ( (This)->lpVtbl -> get_OID(This,ppVal) ) 

#define ICPAttribute2_get_Value(This,pVal)	\
    ( (This)->lpVtbl -> get_Value(This,pVal) ) 

#define ICPAttribute2_put_Value(This,val)	\
    ( (This)->lpVtbl -> put_Value(This,val) ) 


#define ICPAttribute2_get_ValueEncoding(This,pVal)	\
    ( (This)->lpVtbl -> get_ValueEncoding(This,pVal) ) 

#define ICPAttribute2_put_ValueEncoding(This,val)	\
    ( (This)->lpVtbl -> put_ValueEncoding(This,val) ) 

#define ICPAttribute2_get_Name(This,pVal)	\
    ( (This)->lpVtbl -> get_Name(This,pVal) ) 

#define ICPAttribute2_put_Name(This,val)	\
    ( (This)->lpVtbl -> put_Name(This,val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICPAttribute2_INTERFACE_DEFINED__ */


#ifndef __ICPAttributes_INTERFACE_DEFINED__
#define __ICPAttributes_INTERFACE_DEFINED__

/* interface ICPAttributes */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ICPAttributes;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6F624CCE-FEDD-49F8-BB1E-99100127E055")
    ICPAttributes : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Add( 
            /* [in] */ VARIANT Attribute) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Remove( 
            LONG Index) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Clear( void) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ LONG Index,
            /* [retval][out] */ VARIANT *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IUnknown **ppVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ LONG *pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICPAttributesVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICPAttributes * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICPAttributes * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICPAttributes * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ICPAttributes * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ICPAttributes * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ICPAttributes * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICPAttributes * This,
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
        
        DECLSPEC_XFGVIRT(ICPAttributes, Add)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Add )( 
            ICPAttributes * This,
            /* [in] */ VARIANT Attribute);
        
        DECLSPEC_XFGVIRT(ICPAttributes, Remove)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Remove )( 
            ICPAttributes * This,
            LONG Index);
        
        DECLSPEC_XFGVIRT(ICPAttributes, Clear)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Clear )( 
            ICPAttributes * This);
        
        DECLSPEC_XFGVIRT(ICPAttributes, get_Item)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            ICPAttributes * This,
            /* [in] */ LONG Index,
            /* [retval][out] */ VARIANT *pVal);
        
        DECLSPEC_XFGVIRT(ICPAttributes, get__NewEnum)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            ICPAttributes * This,
            /* [retval][out] */ IUnknown **ppVal);
        
        DECLSPEC_XFGVIRT(ICPAttributes, get_Count)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            ICPAttributes * This,
            /* [retval][out] */ LONG *pVal);
        
        END_INTERFACE
    } ICPAttributesVtbl;

    interface ICPAttributes
    {
        CONST_VTBL struct ICPAttributesVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICPAttributes_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICPAttributes_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICPAttributes_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICPAttributes_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ICPAttributes_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ICPAttributes_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ICPAttributes_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ICPAttributes_Add(This,Attribute)	\
    ( (This)->lpVtbl -> Add(This,Attribute) ) 

#define ICPAttributes_Remove(This,Index)	\
    ( (This)->lpVtbl -> Remove(This,Index) ) 

#define ICPAttributes_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define ICPAttributes_get_Item(This,Index,pVal)	\
    ( (This)->lpVtbl -> get_Item(This,Index,pVal) ) 

#define ICPAttributes_get__NewEnum(This,ppVal)	\
    ( (This)->lpVtbl -> get__NewEnum(This,ppVal) ) 

#define ICPAttributes_get_Count(This,pVal)	\
    ( (This)->lpVtbl -> get_Count(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICPAttributes_INTERFACE_DEFINED__ */


#ifndef __ICPEnvelopedData_INTERFACE_DEFINED__
#define __ICPEnvelopedData_INTERFACE_DEFINED__

/* interface ICPEnvelopedData */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_ICPEnvelopedData;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6192C026-08C2-4ff1-ABAD-3B6072D7E9F0")
    ICPEnvelopedData : public IEnvelopedData
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ContentEncoding( 
            /* [retval][out] */ CADESCOM_CONTENT_ENCODING_TYPE *pEncodingType) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ContentEncoding( 
            /* [in] */ CADESCOM_CONTENT_ENCODING_TYPE EncodingType) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICPEnvelopedDataVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IEnvelopedData, QueryInterface)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICPEnvelopedData * This,
            /* [in][idldescattr] */ struct GUID *riid,
            /* [out][idldescattr] */ void **ppvObj,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(IEnvelopedData, AddRef)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *AddRef )( 
            ICPEnvelopedData * This,
            /* [retval][out] */ unsigned long *retval);
        
        DECLSPEC_XFGVIRT(IEnvelopedData, Release)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *Release )( 
            ICPEnvelopedData * This,
            /* [retval][out] */ unsigned long *retval);
        
        DECLSPEC_XFGVIRT(IEnvelopedData, GetTypeInfoCount)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ICPEnvelopedData * This,
            /* [out][idldescattr] */ unsigned UINT *pctinfo,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(IEnvelopedData, GetTypeInfo)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ICPEnvelopedData * This,
            /* [in][idldescattr] */ unsigned UINT itinfo,
            /* [in][idldescattr] */ unsigned long lcid,
            /* [out][idldescattr] */ void **pptinfo,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(IEnvelopedData, GetIDsOfNames)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ICPEnvelopedData * This,
            /* [in][idldescattr] */ struct GUID *riid,
            /* [in][idldescattr] */ signed char **rgszNames,
            /* [in][idldescattr] */ unsigned UINT cNames,
            /* [in][idldescattr] */ unsigned long lcid,
            /* [out][idldescattr] */ signed long *rgdispid,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(IEnvelopedData, Invoke)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICPEnvelopedData * This,
            /* [in][idldescattr] */ signed long dispidMember,
            /* [in][idldescattr] */ struct GUID *riid,
            /* [in][idldescattr] */ unsigned long lcid,
            /* [in][idldescattr] */ unsigned short wFlags,
            /* [in][idldescattr] */ struct DISPPARAMS *pdispparams,
            /* [out][idldescattr] */ VARIANT *pvarResult,
            /* [out][idldescattr] */ struct EXCEPINFO *pexcepinfo,
            /* [out][idldescattr] */ unsigned UINT *puArgErr,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(IEnvelopedData, put_Content)
        /* [id][propput][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *put_Content )( 
            ICPEnvelopedData * This,
            /* [in][idldescattr] */ BSTR noname,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(IEnvelopedData, get_Content)
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_Content )( 
            ICPEnvelopedData * This,
            /* [retval][out] */ BSTR *retval);
        
        DECLSPEC_XFGVIRT(IEnvelopedData, get_Algorithm)
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_Algorithm )( 
            ICPEnvelopedData * This,
            /* [retval][out] */ IAlgorithm **retval);
        
        DECLSPEC_XFGVIRT(IEnvelopedData, get_Recipients)
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_Recipients )( 
            ICPEnvelopedData * This,
            /* [retval][out] */ IRecipients **retval);
        
        DECLSPEC_XFGVIRT(IEnvelopedData, Encrypt)
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *Encrypt )( 
            ICPEnvelopedData * This,
            /* [in][idldescattr] */ CAPICOM_ENCODING_TYPE EncodingType,
            /* [retval][out] */ BSTR *retval);
        
        DECLSPEC_XFGVIRT(IEnvelopedData, Decrypt)
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *Decrypt )( 
            ICPEnvelopedData * This,
            /* [in][idldescattr] */ BSTR EnvelopedMessage,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(ICPEnvelopedData, get_ContentEncoding)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ContentEncoding )( 
            ICPEnvelopedData * This,
            /* [retval][out] */ CADESCOM_CONTENT_ENCODING_TYPE *pEncodingType);
        
        DECLSPEC_XFGVIRT(ICPEnvelopedData, put_ContentEncoding)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ContentEncoding )( 
            ICPEnvelopedData * This,
            /* [in] */ CADESCOM_CONTENT_ENCODING_TYPE EncodingType);
        
        END_INTERFACE
    } ICPEnvelopedDataVtbl;

    interface ICPEnvelopedData
    {
        CONST_VTBL struct ICPEnvelopedDataVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICPEnvelopedData_QueryInterface(This,riid,ppvObj,retval)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObj,retval) ) 

#define ICPEnvelopedData_AddRef(This,retval)	\
    ( (This)->lpVtbl -> AddRef(This,retval) ) 

#define ICPEnvelopedData_Release(This,retval)	\
    ( (This)->lpVtbl -> Release(This,retval) ) 

#define ICPEnvelopedData_GetTypeInfoCount(This,pctinfo,retval)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo,retval) ) 

#define ICPEnvelopedData_GetTypeInfo(This,itinfo,lcid,pptinfo,retval)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,itinfo,lcid,pptinfo,retval) ) 

#define ICPEnvelopedData_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgdispid,retval)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgdispid,retval) ) 

#define ICPEnvelopedData_Invoke(This,dispidMember,riid,lcid,wFlags,pdispparams,pvarResult,pexcepinfo,puArgErr,retval)	\
    ( (This)->lpVtbl -> Invoke(This,dispidMember,riid,lcid,wFlags,pdispparams,pvarResult,pexcepinfo,puArgErr,retval) ) 

#define ICPEnvelopedData_put_Content(This,noname,retval)	\
    ( (This)->lpVtbl -> put_Content(This,noname,retval) ) 

#define ICPEnvelopedData_get_Content(This,retval)	\
    ( (This)->lpVtbl -> get_Content(This,retval) ) 

#define ICPEnvelopedData_get_Algorithm(This,retval)	\
    ( (This)->lpVtbl -> get_Algorithm(This,retval) ) 

#define ICPEnvelopedData_get_Recipients(This,retval)	\
    ( (This)->lpVtbl -> get_Recipients(This,retval) ) 

#define ICPEnvelopedData_Encrypt(This,EncodingType,retval)	\
    ( (This)->lpVtbl -> Encrypt(This,EncodingType,retval) ) 

#define ICPEnvelopedData_Decrypt(This,EnvelopedMessage,retval)	\
    ( (This)->lpVtbl -> Decrypt(This,EnvelopedMessage,retval) ) 


#define ICPEnvelopedData_get_ContentEncoding(This,pEncodingType)	\
    ( (This)->lpVtbl -> get_ContentEncoding(This,pEncodingType) ) 

#define ICPEnvelopedData_put_ContentEncoding(This,EncodingType)	\
    ( (This)->lpVtbl -> put_ContentEncoding(This,EncodingType) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICPEnvelopedData_INTERFACE_DEFINED__ */


#ifndef __ICPEnvelopedData2_INTERFACE_DEFINED__
#define __ICPEnvelopedData2_INTERFACE_DEFINED__

/* interface ICPEnvelopedData2 */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_ICPEnvelopedData2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("CD30EF83-0201-44C5-BB93-A4C2A6660D65")
    ICPEnvelopedData2 : public ICPEnvelopedData
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE StreamEncrypt( 
            /* [in] */ BSTR pbData,
            /* [in] */ VARIANT_BOOL isFinal,
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE StreamDecrypt( 
            /* [in] */ BSTR pbData,
            /* [in] */ VARIANT_BOOL isFinal,
            /* [retval][out] */ BSTR *pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICPEnvelopedData2Vtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IEnvelopedData, QueryInterface)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICPEnvelopedData2 * This,
            /* [in][idldescattr] */ struct GUID *riid,
            /* [out][idldescattr] */ void **ppvObj,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(IEnvelopedData, AddRef)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *AddRef )( 
            ICPEnvelopedData2 * This,
            /* [retval][out] */ unsigned long *retval);
        
        DECLSPEC_XFGVIRT(IEnvelopedData, Release)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *Release )( 
            ICPEnvelopedData2 * This,
            /* [retval][out] */ unsigned long *retval);
        
        DECLSPEC_XFGVIRT(IEnvelopedData, GetTypeInfoCount)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ICPEnvelopedData2 * This,
            /* [out][idldescattr] */ unsigned UINT *pctinfo,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(IEnvelopedData, GetTypeInfo)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ICPEnvelopedData2 * This,
            /* [in][idldescattr] */ unsigned UINT itinfo,
            /* [in][idldescattr] */ unsigned long lcid,
            /* [out][idldescattr] */ void **pptinfo,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(IEnvelopedData, GetIDsOfNames)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ICPEnvelopedData2 * This,
            /* [in][idldescattr] */ struct GUID *riid,
            /* [in][idldescattr] */ signed char **rgszNames,
            /* [in][idldescattr] */ unsigned UINT cNames,
            /* [in][idldescattr] */ unsigned long lcid,
            /* [out][idldescattr] */ signed long *rgdispid,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(IEnvelopedData, Invoke)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICPEnvelopedData2 * This,
            /* [in][idldescattr] */ signed long dispidMember,
            /* [in][idldescattr] */ struct GUID *riid,
            /* [in][idldescattr] */ unsigned long lcid,
            /* [in][idldescattr] */ unsigned short wFlags,
            /* [in][idldescattr] */ struct DISPPARAMS *pdispparams,
            /* [out][idldescattr] */ VARIANT *pvarResult,
            /* [out][idldescattr] */ struct EXCEPINFO *pexcepinfo,
            /* [out][idldescattr] */ unsigned UINT *puArgErr,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(IEnvelopedData, put_Content)
        /* [id][propput][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *put_Content )( 
            ICPEnvelopedData2 * This,
            /* [in][idldescattr] */ BSTR noname,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(IEnvelopedData, get_Content)
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_Content )( 
            ICPEnvelopedData2 * This,
            /* [retval][out] */ BSTR *retval);
        
        DECLSPEC_XFGVIRT(IEnvelopedData, get_Algorithm)
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_Algorithm )( 
            ICPEnvelopedData2 * This,
            /* [retval][out] */ IAlgorithm **retval);
        
        DECLSPEC_XFGVIRT(IEnvelopedData, get_Recipients)
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_Recipients )( 
            ICPEnvelopedData2 * This,
            /* [retval][out] */ IRecipients **retval);
        
        DECLSPEC_XFGVIRT(IEnvelopedData, Encrypt)
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *Encrypt )( 
            ICPEnvelopedData2 * This,
            /* [in][idldescattr] */ CAPICOM_ENCODING_TYPE EncodingType,
            /* [retval][out] */ BSTR *retval);
        
        DECLSPEC_XFGVIRT(IEnvelopedData, Decrypt)
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *Decrypt )( 
            ICPEnvelopedData2 * This,
            /* [in][idldescattr] */ BSTR EnvelopedMessage,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(ICPEnvelopedData, get_ContentEncoding)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ContentEncoding )( 
            ICPEnvelopedData2 * This,
            /* [retval][out] */ CADESCOM_CONTENT_ENCODING_TYPE *pEncodingType);
        
        DECLSPEC_XFGVIRT(ICPEnvelopedData, put_ContentEncoding)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ContentEncoding )( 
            ICPEnvelopedData2 * This,
            /* [in] */ CADESCOM_CONTENT_ENCODING_TYPE EncodingType);
        
        DECLSPEC_XFGVIRT(ICPEnvelopedData2, StreamEncrypt)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *StreamEncrypt )( 
            ICPEnvelopedData2 * This,
            /* [in] */ BSTR pbData,
            /* [in] */ VARIANT_BOOL isFinal,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(ICPEnvelopedData2, StreamDecrypt)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *StreamDecrypt )( 
            ICPEnvelopedData2 * This,
            /* [in] */ BSTR pbData,
            /* [in] */ VARIANT_BOOL isFinal,
            /* [retval][out] */ BSTR *pVal);
        
        END_INTERFACE
    } ICPEnvelopedData2Vtbl;

    interface ICPEnvelopedData2
    {
        CONST_VTBL struct ICPEnvelopedData2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICPEnvelopedData2_QueryInterface(This,riid,ppvObj,retval)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObj,retval) ) 

#define ICPEnvelopedData2_AddRef(This,retval)	\
    ( (This)->lpVtbl -> AddRef(This,retval) ) 

#define ICPEnvelopedData2_Release(This,retval)	\
    ( (This)->lpVtbl -> Release(This,retval) ) 

#define ICPEnvelopedData2_GetTypeInfoCount(This,pctinfo,retval)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo,retval) ) 

#define ICPEnvelopedData2_GetTypeInfo(This,itinfo,lcid,pptinfo,retval)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,itinfo,lcid,pptinfo,retval) ) 

#define ICPEnvelopedData2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgdispid,retval)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgdispid,retval) ) 

#define ICPEnvelopedData2_Invoke(This,dispidMember,riid,lcid,wFlags,pdispparams,pvarResult,pexcepinfo,puArgErr,retval)	\
    ( (This)->lpVtbl -> Invoke(This,dispidMember,riid,lcid,wFlags,pdispparams,pvarResult,pexcepinfo,puArgErr,retval) ) 

#define ICPEnvelopedData2_put_Content(This,noname,retval)	\
    ( (This)->lpVtbl -> put_Content(This,noname,retval) ) 

#define ICPEnvelopedData2_get_Content(This,retval)	\
    ( (This)->lpVtbl -> get_Content(This,retval) ) 

#define ICPEnvelopedData2_get_Algorithm(This,retval)	\
    ( (This)->lpVtbl -> get_Algorithm(This,retval) ) 

#define ICPEnvelopedData2_get_Recipients(This,retval)	\
    ( (This)->lpVtbl -> get_Recipients(This,retval) ) 

#define ICPEnvelopedData2_Encrypt(This,EncodingType,retval)	\
    ( (This)->lpVtbl -> Encrypt(This,EncodingType,retval) ) 

#define ICPEnvelopedData2_Decrypt(This,EnvelopedMessage,retval)	\
    ( (This)->lpVtbl -> Decrypt(This,EnvelopedMessage,retval) ) 


#define ICPEnvelopedData2_get_ContentEncoding(This,pEncodingType)	\
    ( (This)->lpVtbl -> get_ContentEncoding(This,pEncodingType) ) 

#define ICPEnvelopedData2_put_ContentEncoding(This,EncodingType)	\
    ( (This)->lpVtbl -> put_ContentEncoding(This,EncodingType) ) 


#define ICPEnvelopedData2_StreamEncrypt(This,pbData,isFinal,pVal)	\
    ( (This)->lpVtbl -> StreamEncrypt(This,pbData,isFinal,pVal) ) 

#define ICPEnvelopedData2_StreamDecrypt(This,pbData,isFinal,pVal)	\
    ( (This)->lpVtbl -> StreamDecrypt(This,pbData,isFinal,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICPEnvelopedData2_INTERFACE_DEFINED__ */


#ifndef __ICPHashedData_INTERFACE_DEFINED__
#define __ICPHashedData_INTERFACE_DEFINED__

/* interface ICPHashedData */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_ICPHashedData;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("5A64116E-B059-4554-9709-B3D08CE80226")
    ICPHashedData : public IHashedData
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_DataEncoding( 
            /* [retval][out] */ CADESCOM_CONTENT_ENCODING_TYPE *pEncodingType) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_DataEncoding( 
            /* [in] */ CADESCOM_CONTENT_ENCODING_TYPE EncodingType) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetHashValue( 
            /* [in] */ BSTR newVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICPHashedDataVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IHashedData, QueryInterface)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICPHashedData * This,
            /* [in][idldescattr] */ struct GUID *riid,
            /* [out][idldescattr] */ void **ppvObj,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(IHashedData, AddRef)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *AddRef )( 
            ICPHashedData * This,
            /* [retval][out] */ unsigned long *retval);
        
        DECLSPEC_XFGVIRT(IHashedData, Release)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *Release )( 
            ICPHashedData * This,
            /* [retval][out] */ unsigned long *retval);
        
        DECLSPEC_XFGVIRT(IHashedData, GetTypeInfoCount)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ICPHashedData * This,
            /* [out][idldescattr] */ unsigned UINT *pctinfo,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(IHashedData, GetTypeInfo)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ICPHashedData * This,
            /* [in][idldescattr] */ unsigned UINT itinfo,
            /* [in][idldescattr] */ unsigned long lcid,
            /* [out][idldescattr] */ void **pptinfo,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(IHashedData, GetIDsOfNames)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ICPHashedData * This,
            /* [in][idldescattr] */ struct GUID *riid,
            /* [in][idldescattr] */ signed char **rgszNames,
            /* [in][idldescattr] */ unsigned UINT cNames,
            /* [in][idldescattr] */ unsigned long lcid,
            /* [out][idldescattr] */ signed long *rgdispid,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(IHashedData, Invoke)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICPHashedData * This,
            /* [in][idldescattr] */ signed long dispidMember,
            /* [in][idldescattr] */ struct GUID *riid,
            /* [in][idldescattr] */ unsigned long lcid,
            /* [in][idldescattr] */ unsigned short wFlags,
            /* [in][idldescattr] */ struct DISPPARAMS *pdispparams,
            /* [out][idldescattr] */ VARIANT *pvarResult,
            /* [out][idldescattr] */ struct EXCEPINFO *pexcepinfo,
            /* [out][idldescattr] */ unsigned UINT *puArgErr,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(IHashedData, get_Value)
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_Value )( 
            ICPHashedData * This,
            /* [retval][out] */ BSTR *retval);
        
        DECLSPEC_XFGVIRT(IHashedData, get_Algorithm)
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_Algorithm )( 
            ICPHashedData * This,
            /* [retval][out] */ CAPICOM_HASH_ALGORITHM *retval);
        
        DECLSPEC_XFGVIRT(IHashedData, put_Algorithm)
        /* [id][propput][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *put_Algorithm )( 
            ICPHashedData * This,
            /* [in][idldescattr] */ CAPICOM_HASH_ALGORITHM noname,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(IHashedData, Hash)
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *Hash )( 
            ICPHashedData * This,
            /* [in][idldescattr] */ BSTR newVal,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(ICPHashedData, get_DataEncoding)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DataEncoding )( 
            ICPHashedData * This,
            /* [retval][out] */ CADESCOM_CONTENT_ENCODING_TYPE *pEncodingType);
        
        DECLSPEC_XFGVIRT(ICPHashedData, put_DataEncoding)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_DataEncoding )( 
            ICPHashedData * This,
            /* [in] */ CADESCOM_CONTENT_ENCODING_TYPE EncodingType);
        
        DECLSPEC_XFGVIRT(ICPHashedData, SetHashValue)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetHashValue )( 
            ICPHashedData * This,
            /* [in] */ BSTR newVal);
        
        END_INTERFACE
    } ICPHashedDataVtbl;

    interface ICPHashedData
    {
        CONST_VTBL struct ICPHashedDataVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICPHashedData_QueryInterface(This,riid,ppvObj,retval)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObj,retval) ) 

#define ICPHashedData_AddRef(This,retval)	\
    ( (This)->lpVtbl -> AddRef(This,retval) ) 

#define ICPHashedData_Release(This,retval)	\
    ( (This)->lpVtbl -> Release(This,retval) ) 

#define ICPHashedData_GetTypeInfoCount(This,pctinfo,retval)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo,retval) ) 

#define ICPHashedData_GetTypeInfo(This,itinfo,lcid,pptinfo,retval)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,itinfo,lcid,pptinfo,retval) ) 

#define ICPHashedData_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgdispid,retval)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgdispid,retval) ) 

#define ICPHashedData_Invoke(This,dispidMember,riid,lcid,wFlags,pdispparams,pvarResult,pexcepinfo,puArgErr,retval)	\
    ( (This)->lpVtbl -> Invoke(This,dispidMember,riid,lcid,wFlags,pdispparams,pvarResult,pexcepinfo,puArgErr,retval) ) 

#define ICPHashedData_get_Value(This,retval)	\
    ( (This)->lpVtbl -> get_Value(This,retval) ) 

#define ICPHashedData_get_Algorithm(This,retval)	\
    ( (This)->lpVtbl -> get_Algorithm(This,retval) ) 

#define ICPHashedData_put_Algorithm(This,noname,retval)	\
    ( (This)->lpVtbl -> put_Algorithm(This,noname,retval) ) 

#define ICPHashedData_Hash(This,newVal,retval)	\
    ( (This)->lpVtbl -> Hash(This,newVal,retval) ) 


#define ICPHashedData_get_DataEncoding(This,pEncodingType)	\
    ( (This)->lpVtbl -> get_DataEncoding(This,pEncodingType) ) 

#define ICPHashedData_put_DataEncoding(This,EncodingType)	\
    ( (This)->lpVtbl -> put_DataEncoding(This,EncodingType) ) 

#define ICPHashedData_SetHashValue(This,newVal)	\
    ( (This)->lpVtbl -> SetHashValue(This,newVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICPHashedData_INTERFACE_DEFINED__ */


#ifndef __ICPHashedData2_INTERFACE_DEFINED__
#define __ICPHashedData2_INTERFACE_DEFINED__

/* interface ICPHashedData2 */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_ICPHashedData2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("5A64116F-B059-4554-9709-B3D08CE80226")
    ICPHashedData2 : public ICPHashedData
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Key( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_Key( 
            /* [in] */ BSTR newVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICPHashedData2Vtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IHashedData, QueryInterface)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICPHashedData2 * This,
            /* [in][idldescattr] */ struct GUID *riid,
            /* [out][idldescattr] */ void **ppvObj,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(IHashedData, AddRef)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *AddRef )( 
            ICPHashedData2 * This,
            /* [retval][out] */ unsigned long *retval);
        
        DECLSPEC_XFGVIRT(IHashedData, Release)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *Release )( 
            ICPHashedData2 * This,
            /* [retval][out] */ unsigned long *retval);
        
        DECLSPEC_XFGVIRT(IHashedData, GetTypeInfoCount)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ICPHashedData2 * This,
            /* [out][idldescattr] */ unsigned UINT *pctinfo,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(IHashedData, GetTypeInfo)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ICPHashedData2 * This,
            /* [in][idldescattr] */ unsigned UINT itinfo,
            /* [in][idldescattr] */ unsigned long lcid,
            /* [out][idldescattr] */ void **pptinfo,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(IHashedData, GetIDsOfNames)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ICPHashedData2 * This,
            /* [in][idldescattr] */ struct GUID *riid,
            /* [in][idldescattr] */ signed char **rgszNames,
            /* [in][idldescattr] */ unsigned UINT cNames,
            /* [in][idldescattr] */ unsigned long lcid,
            /* [out][idldescattr] */ signed long *rgdispid,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(IHashedData, Invoke)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICPHashedData2 * This,
            /* [in][idldescattr] */ signed long dispidMember,
            /* [in][idldescattr] */ struct GUID *riid,
            /* [in][idldescattr] */ unsigned long lcid,
            /* [in][idldescattr] */ unsigned short wFlags,
            /* [in][idldescattr] */ struct DISPPARAMS *pdispparams,
            /* [out][idldescattr] */ VARIANT *pvarResult,
            /* [out][idldescattr] */ struct EXCEPINFO *pexcepinfo,
            /* [out][idldescattr] */ unsigned UINT *puArgErr,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(IHashedData, get_Value)
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_Value )( 
            ICPHashedData2 * This,
            /* [retval][out] */ BSTR *retval);
        
        DECLSPEC_XFGVIRT(IHashedData, get_Algorithm)
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_Algorithm )( 
            ICPHashedData2 * This,
            /* [retval][out] */ CAPICOM_HASH_ALGORITHM *retval);
        
        DECLSPEC_XFGVIRT(IHashedData, put_Algorithm)
        /* [id][propput][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *put_Algorithm )( 
            ICPHashedData2 * This,
            /* [in][idldescattr] */ CAPICOM_HASH_ALGORITHM noname,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(IHashedData, Hash)
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *Hash )( 
            ICPHashedData2 * This,
            /* [in][idldescattr] */ BSTR newVal,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(ICPHashedData, get_DataEncoding)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DataEncoding )( 
            ICPHashedData2 * This,
            /* [retval][out] */ CADESCOM_CONTENT_ENCODING_TYPE *pEncodingType);
        
        DECLSPEC_XFGVIRT(ICPHashedData, put_DataEncoding)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_DataEncoding )( 
            ICPHashedData2 * This,
            /* [in] */ CADESCOM_CONTENT_ENCODING_TYPE EncodingType);
        
        DECLSPEC_XFGVIRT(ICPHashedData, SetHashValue)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetHashValue )( 
            ICPHashedData2 * This,
            /* [in] */ BSTR newVal);
        
        DECLSPEC_XFGVIRT(ICPHashedData2, get_Key)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Key )( 
            ICPHashedData2 * This,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(ICPHashedData2, put_Key)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Key )( 
            ICPHashedData2 * This,
            /* [in] */ BSTR newVal);
        
        END_INTERFACE
    } ICPHashedData2Vtbl;

    interface ICPHashedData2
    {
        CONST_VTBL struct ICPHashedData2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICPHashedData2_QueryInterface(This,riid,ppvObj,retval)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObj,retval) ) 

#define ICPHashedData2_AddRef(This,retval)	\
    ( (This)->lpVtbl -> AddRef(This,retval) ) 

#define ICPHashedData2_Release(This,retval)	\
    ( (This)->lpVtbl -> Release(This,retval) ) 

#define ICPHashedData2_GetTypeInfoCount(This,pctinfo,retval)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo,retval) ) 

#define ICPHashedData2_GetTypeInfo(This,itinfo,lcid,pptinfo,retval)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,itinfo,lcid,pptinfo,retval) ) 

#define ICPHashedData2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgdispid,retval)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgdispid,retval) ) 

#define ICPHashedData2_Invoke(This,dispidMember,riid,lcid,wFlags,pdispparams,pvarResult,pexcepinfo,puArgErr,retval)	\
    ( (This)->lpVtbl -> Invoke(This,dispidMember,riid,lcid,wFlags,pdispparams,pvarResult,pexcepinfo,puArgErr,retval) ) 

#define ICPHashedData2_get_Value(This,retval)	\
    ( (This)->lpVtbl -> get_Value(This,retval) ) 

#define ICPHashedData2_get_Algorithm(This,retval)	\
    ( (This)->lpVtbl -> get_Algorithm(This,retval) ) 

#define ICPHashedData2_put_Algorithm(This,noname,retval)	\
    ( (This)->lpVtbl -> put_Algorithm(This,noname,retval) ) 

#define ICPHashedData2_Hash(This,newVal,retval)	\
    ( (This)->lpVtbl -> Hash(This,newVal,retval) ) 


#define ICPHashedData2_get_DataEncoding(This,pEncodingType)	\
    ( (This)->lpVtbl -> get_DataEncoding(This,pEncodingType) ) 

#define ICPHashedData2_put_DataEncoding(This,EncodingType)	\
    ( (This)->lpVtbl -> put_DataEncoding(This,EncodingType) ) 

#define ICPHashedData2_SetHashValue(This,newVal)	\
    ( (This)->lpVtbl -> SetHashValue(This,newVal) ) 


#define ICPHashedData2_get_Key(This,pVal)	\
    ( (This)->lpVtbl -> get_Key(This,pVal) ) 

#define ICPHashedData2_put_Key(This,newVal)	\
    ( (This)->lpVtbl -> put_Key(This,newVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICPHashedData2_INTERFACE_DEFINED__ */


#ifndef __ISignedXML_INTERFACE_DEFINED__
#define __ISignedXML_INTERFACE_DEFINED__

/* interface ISignedXML */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ISignedXML;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("4B7AB972-0660-4556-A1B1-58B08E912203")
    ISignedXML : public IDispatch
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Content( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_Content( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Signers( 
            /* [retval][out] */ /* external definition not present */ ISigners **pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Sign( 
            /* [optional][in] */ VARIANT Signer,
            /* [defaultvalue][in] */ BSTR XPath,
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Verify( 
            /* [in] */ BSTR SignedMessage,
            /* [defaultvalue][in] */ BSTR XPath = (BSTR)L"") = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_SignatureType( 
            /* [retval][out] */ CADESCOM_XML_SIGNATURE_TYPE *pVal) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_SignatureType( 
            /* [in] */ CADESCOM_XML_SIGNATURE_TYPE SignatureType) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_SignatureMethod( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_SignatureMethod( 
            /* [in] */ BSTR pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_DigestMethod( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_DigestMethod( 
            /* [in] */ BSTR pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ISignedXMLVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISignedXML * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISignedXML * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISignedXML * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISignedXML * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISignedXML * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISignedXML * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISignedXML * This,
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
        
        DECLSPEC_XFGVIRT(ISignedXML, get_Content)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Content )( 
            ISignedXML * This,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(ISignedXML, put_Content)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Content )( 
            ISignedXML * This,
            /* [in] */ BSTR newVal);
        
        DECLSPEC_XFGVIRT(ISignedXML, get_Signers)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Signers )( 
            ISignedXML * This,
            /* [retval][out] */ /* external definition not present */ ISigners **pVal);
        
        DECLSPEC_XFGVIRT(ISignedXML, Sign)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Sign )( 
            ISignedXML * This,
            /* [optional][in] */ VARIANT Signer,
            /* [defaultvalue][in] */ BSTR XPath,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(ISignedXML, Verify)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Verify )( 
            ISignedXML * This,
            /* [in] */ BSTR SignedMessage,
            /* [defaultvalue][in] */ BSTR XPath);
        
        DECLSPEC_XFGVIRT(ISignedXML, get_SignatureType)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SignatureType )( 
            ISignedXML * This,
            /* [retval][out] */ CADESCOM_XML_SIGNATURE_TYPE *pVal);
        
        DECLSPEC_XFGVIRT(ISignedXML, put_SignatureType)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_SignatureType )( 
            ISignedXML * This,
            /* [in] */ CADESCOM_XML_SIGNATURE_TYPE SignatureType);
        
        DECLSPEC_XFGVIRT(ISignedXML, get_SignatureMethod)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SignatureMethod )( 
            ISignedXML * This,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(ISignedXML, put_SignatureMethod)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_SignatureMethod )( 
            ISignedXML * This,
            /* [in] */ BSTR pVal);
        
        DECLSPEC_XFGVIRT(ISignedXML, get_DigestMethod)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DigestMethod )( 
            ISignedXML * This,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(ISignedXML, put_DigestMethod)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_DigestMethod )( 
            ISignedXML * This,
            /* [in] */ BSTR pVal);
        
        END_INTERFACE
    } ISignedXMLVtbl;

    interface ISignedXML
    {
        CONST_VTBL struct ISignedXMLVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISignedXML_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISignedXML_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISignedXML_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISignedXML_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISignedXML_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISignedXML_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISignedXML_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ISignedXML_get_Content(This,pVal)	\
    ( (This)->lpVtbl -> get_Content(This,pVal) ) 

#define ISignedXML_put_Content(This,newVal)	\
    ( (This)->lpVtbl -> put_Content(This,newVal) ) 

#define ISignedXML_get_Signers(This,pVal)	\
    ( (This)->lpVtbl -> get_Signers(This,pVal) ) 

#define ISignedXML_Sign(This,Signer,XPath,pVal)	\
    ( (This)->lpVtbl -> Sign(This,Signer,XPath,pVal) ) 

#define ISignedXML_Verify(This,SignedMessage,XPath)	\
    ( (This)->lpVtbl -> Verify(This,SignedMessage,XPath) ) 

#define ISignedXML_get_SignatureType(This,pVal)	\
    ( (This)->lpVtbl -> get_SignatureType(This,pVal) ) 

#define ISignedXML_put_SignatureType(This,SignatureType)	\
    ( (This)->lpVtbl -> put_SignatureType(This,SignatureType) ) 

#define ISignedXML_get_SignatureMethod(This,pVal)	\
    ( (This)->lpVtbl -> get_SignatureMethod(This,pVal) ) 

#define ISignedXML_put_SignatureMethod(This,pVal)	\
    ( (This)->lpVtbl -> put_SignatureMethod(This,pVal) ) 

#define ISignedXML_get_DigestMethod(This,pVal)	\
    ( (This)->lpVtbl -> get_DigestMethod(This,pVal) ) 

#define ISignedXML_put_DigestMethod(This,pVal)	\
    ( (This)->lpVtbl -> put_DigestMethod(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISignedXML_INTERFACE_DEFINED__ */


#ifndef __ISignedXML2_INTERFACE_DEFINED__
#define __ISignedXML2_INTERFACE_DEFINED__

/* interface ISignedXML2 */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_ISignedXML2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7C1FDB0C-B289-411D-AE54-4F174CA4EC35")
    ISignedXML2 : public ISignedXML
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_SignatureOptions( 
            /* [retval][out] */ CADESCOM_XADES_ADDITIONAL_OPTIONS *pVal) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_SignatureOptions( 
            /* [in] */ CADESCOM_XADES_ADDITIONAL_OPTIONS newVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ISignedXML2Vtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISignedXML2 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISignedXML2 * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISignedXML2 * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISignedXML2 * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISignedXML2 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISignedXML2 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISignedXML2 * This,
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
        
        DECLSPEC_XFGVIRT(ISignedXML, get_Content)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Content )( 
            ISignedXML2 * This,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(ISignedXML, put_Content)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Content )( 
            ISignedXML2 * This,
            /* [in] */ BSTR newVal);
        
        DECLSPEC_XFGVIRT(ISignedXML, get_Signers)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Signers )( 
            ISignedXML2 * This,
            /* [retval][out] */ /* external definition not present */ ISigners **pVal);
        
        DECLSPEC_XFGVIRT(ISignedXML, Sign)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Sign )( 
            ISignedXML2 * This,
            /* [optional][in] */ VARIANT Signer,
            /* [defaultvalue][in] */ BSTR XPath,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(ISignedXML, Verify)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Verify )( 
            ISignedXML2 * This,
            /* [in] */ BSTR SignedMessage,
            /* [defaultvalue][in] */ BSTR XPath);
        
        DECLSPEC_XFGVIRT(ISignedXML, get_SignatureType)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SignatureType )( 
            ISignedXML2 * This,
            /* [retval][out] */ CADESCOM_XML_SIGNATURE_TYPE *pVal);
        
        DECLSPEC_XFGVIRT(ISignedXML, put_SignatureType)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_SignatureType )( 
            ISignedXML2 * This,
            /* [in] */ CADESCOM_XML_SIGNATURE_TYPE SignatureType);
        
        DECLSPEC_XFGVIRT(ISignedXML, get_SignatureMethod)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SignatureMethod )( 
            ISignedXML2 * This,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(ISignedXML, put_SignatureMethod)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_SignatureMethod )( 
            ISignedXML2 * This,
            /* [in] */ BSTR pVal);
        
        DECLSPEC_XFGVIRT(ISignedXML, get_DigestMethod)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DigestMethod )( 
            ISignedXML2 * This,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(ISignedXML, put_DigestMethod)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_DigestMethod )( 
            ISignedXML2 * This,
            /* [in] */ BSTR pVal);
        
        DECLSPEC_XFGVIRT(ISignedXML2, get_SignatureOptions)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SignatureOptions )( 
            ISignedXML2 * This,
            /* [retval][out] */ CADESCOM_XADES_ADDITIONAL_OPTIONS *pVal);
        
        DECLSPEC_XFGVIRT(ISignedXML2, put_SignatureOptions)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_SignatureOptions )( 
            ISignedXML2 * This,
            /* [in] */ CADESCOM_XADES_ADDITIONAL_OPTIONS newVal);
        
        END_INTERFACE
    } ISignedXML2Vtbl;

    interface ISignedXML2
    {
        CONST_VTBL struct ISignedXML2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISignedXML2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISignedXML2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISignedXML2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISignedXML2_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISignedXML2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISignedXML2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISignedXML2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ISignedXML2_get_Content(This,pVal)	\
    ( (This)->lpVtbl -> get_Content(This,pVal) ) 

#define ISignedXML2_put_Content(This,newVal)	\
    ( (This)->lpVtbl -> put_Content(This,newVal) ) 

#define ISignedXML2_get_Signers(This,pVal)	\
    ( (This)->lpVtbl -> get_Signers(This,pVal) ) 

#define ISignedXML2_Sign(This,Signer,XPath,pVal)	\
    ( (This)->lpVtbl -> Sign(This,Signer,XPath,pVal) ) 

#define ISignedXML2_Verify(This,SignedMessage,XPath)	\
    ( (This)->lpVtbl -> Verify(This,SignedMessage,XPath) ) 

#define ISignedXML2_get_SignatureType(This,pVal)	\
    ( (This)->lpVtbl -> get_SignatureType(This,pVal) ) 

#define ISignedXML2_put_SignatureType(This,SignatureType)	\
    ( (This)->lpVtbl -> put_SignatureType(This,SignatureType) ) 

#define ISignedXML2_get_SignatureMethod(This,pVal)	\
    ( (This)->lpVtbl -> get_SignatureMethod(This,pVal) ) 

#define ISignedXML2_put_SignatureMethod(This,pVal)	\
    ( (This)->lpVtbl -> put_SignatureMethod(This,pVal) ) 

#define ISignedXML2_get_DigestMethod(This,pVal)	\
    ( (This)->lpVtbl -> get_DigestMethod(This,pVal) ) 

#define ISignedXML2_put_DigestMethod(This,pVal)	\
    ( (This)->lpVtbl -> put_DigestMethod(This,pVal) ) 


#define ISignedXML2_get_SignatureOptions(This,pVal)	\
    ( (This)->lpVtbl -> get_SignatureOptions(This,pVal) ) 

#define ISignedXML2_put_SignatureOptions(This,newVal)	\
    ( (This)->lpVtbl -> put_SignatureOptions(This,newVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISignedXML2_INTERFACE_DEFINED__ */


#ifndef __IEnvelopedXML_INTERFACE_DEFINED__
#define __IEnvelopedXML_INTERFACE_DEFINED__

/* interface IEnvelopedXML */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IEnvelopedXML;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("BCBFFD21-AEED-4151-9675-656F28F89148")
    IEnvelopedXML : public IDispatch
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Content( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_Content( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Algorithm( 
            /* [retval][out] */ /* external definition not present */ IAlgorithm **pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Recipients( 
            /* [retval][out] */ /* external definition not present */ IRecipients **pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Encrypt( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Decrypt( 
            /* [in] */ BSTR EncryptedMessage) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IEnvelopedXMLVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IEnvelopedXML * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IEnvelopedXML * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IEnvelopedXML * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IEnvelopedXML * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IEnvelopedXML * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IEnvelopedXML * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IEnvelopedXML * This,
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
        
        DECLSPEC_XFGVIRT(IEnvelopedXML, get_Content)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Content )( 
            IEnvelopedXML * This,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(IEnvelopedXML, put_Content)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Content )( 
            IEnvelopedXML * This,
            /* [in] */ BSTR newVal);
        
        DECLSPEC_XFGVIRT(IEnvelopedXML, get_Algorithm)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Algorithm )( 
            IEnvelopedXML * This,
            /* [retval][out] */ /* external definition not present */ IAlgorithm **pVal);
        
        DECLSPEC_XFGVIRT(IEnvelopedXML, get_Recipients)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Recipients )( 
            IEnvelopedXML * This,
            /* [retval][out] */ /* external definition not present */ IRecipients **pVal);
        
        DECLSPEC_XFGVIRT(IEnvelopedXML, Encrypt)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Encrypt )( 
            IEnvelopedXML * This,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(IEnvelopedXML, Decrypt)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Decrypt )( 
            IEnvelopedXML * This,
            /* [in] */ BSTR EncryptedMessage);
        
        END_INTERFACE
    } IEnvelopedXMLVtbl;

    interface IEnvelopedXML
    {
        CONST_VTBL struct IEnvelopedXMLVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IEnvelopedXML_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IEnvelopedXML_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IEnvelopedXML_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IEnvelopedXML_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IEnvelopedXML_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IEnvelopedXML_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IEnvelopedXML_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IEnvelopedXML_get_Content(This,pVal)	\
    ( (This)->lpVtbl -> get_Content(This,pVal) ) 

#define IEnvelopedXML_put_Content(This,newVal)	\
    ( (This)->lpVtbl -> put_Content(This,newVal) ) 

#define IEnvelopedXML_get_Algorithm(This,pVal)	\
    ( (This)->lpVtbl -> get_Algorithm(This,pVal) ) 

#define IEnvelopedXML_get_Recipients(This,pVal)	\
    ( (This)->lpVtbl -> get_Recipients(This,pVal) ) 

#define IEnvelopedXML_Encrypt(This,pVal)	\
    ( (This)->lpVtbl -> Encrypt(This,pVal) ) 

#define IEnvelopedXML_Decrypt(This,EncryptedMessage)	\
    ( (This)->lpVtbl -> Decrypt(This,EncryptedMessage) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IEnvelopedXML_INTERFACE_DEFINED__ */


#ifndef __ICardholderData_INTERFACE_DEFINED__
#define __ICardholderData_INTERFACE_DEFINED__

/* interface ICardholderData */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_ICardholderData;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("5F7F6186-88DB-4453-BB05-3DDB31674B75")
    ICardholderData : public IDispatch
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_SocialAccountNumber( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_OMSNumber( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_CardholderName( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_CardholderFirstName( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_CardholderLastName( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_CardholderSecondName( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_CardIssuerAddress( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_DateOfBirth( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_PlaceOfBirth( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_SexString( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Sex( 
            /* [retval][out] */ CADESCOM_HUMAN_SEXES *pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICardholderDataVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICardholderData * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICardholderData * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICardholderData * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ICardholderData * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ICardholderData * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ICardholderData * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICardholderData * This,
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
        
        DECLSPEC_XFGVIRT(ICardholderData, get_SocialAccountNumber)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SocialAccountNumber )( 
            ICardholderData * This,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(ICardholderData, get_OMSNumber)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_OMSNumber )( 
            ICardholderData * This,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(ICardholderData, get_CardholderName)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_CardholderName )( 
            ICardholderData * This,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(ICardholderData, get_CardholderFirstName)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_CardholderFirstName )( 
            ICardholderData * This,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(ICardholderData, get_CardholderLastName)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_CardholderLastName )( 
            ICardholderData * This,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(ICardholderData, get_CardholderSecondName)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_CardholderSecondName )( 
            ICardholderData * This,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(ICardholderData, get_CardIssuerAddress)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_CardIssuerAddress )( 
            ICardholderData * This,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(ICardholderData, get_DateOfBirth)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DateOfBirth )( 
            ICardholderData * This,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(ICardholderData, get_PlaceOfBirth)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PlaceOfBirth )( 
            ICardholderData * This,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(ICardholderData, get_SexString)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SexString )( 
            ICardholderData * This,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(ICardholderData, get_Sex)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Sex )( 
            ICardholderData * This,
            /* [retval][out] */ CADESCOM_HUMAN_SEXES *pVal);
        
        END_INTERFACE
    } ICardholderDataVtbl;

    interface ICardholderData
    {
        CONST_VTBL struct ICardholderDataVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICardholderData_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICardholderData_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICardholderData_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICardholderData_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ICardholderData_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ICardholderData_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ICardholderData_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ICardholderData_get_SocialAccountNumber(This,pVal)	\
    ( (This)->lpVtbl -> get_SocialAccountNumber(This,pVal) ) 

#define ICardholderData_get_OMSNumber(This,pVal)	\
    ( (This)->lpVtbl -> get_OMSNumber(This,pVal) ) 

#define ICardholderData_get_CardholderName(This,pVal)	\
    ( (This)->lpVtbl -> get_CardholderName(This,pVal) ) 

#define ICardholderData_get_CardholderFirstName(This,pVal)	\
    ( (This)->lpVtbl -> get_CardholderFirstName(This,pVal) ) 

#define ICardholderData_get_CardholderLastName(This,pVal)	\
    ( (This)->lpVtbl -> get_CardholderLastName(This,pVal) ) 

#define ICardholderData_get_CardholderSecondName(This,pVal)	\
    ( (This)->lpVtbl -> get_CardholderSecondName(This,pVal) ) 

#define ICardholderData_get_CardIssuerAddress(This,pVal)	\
    ( (This)->lpVtbl -> get_CardIssuerAddress(This,pVal) ) 

#define ICardholderData_get_DateOfBirth(This,pVal)	\
    ( (This)->lpVtbl -> get_DateOfBirth(This,pVal) ) 

#define ICardholderData_get_PlaceOfBirth(This,pVal)	\
    ( (This)->lpVtbl -> get_PlaceOfBirth(This,pVal) ) 

#define ICardholderData_get_SexString(This,pVal)	\
    ( (This)->lpVtbl -> get_SexString(This,pVal) ) 

#define ICardholderData_get_Sex(This,pVal)	\
    ( (This)->lpVtbl -> get_Sex(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICardholderData_INTERFACE_DEFINED__ */


#ifndef __IIdentityCard_INTERFACE_DEFINED__
#define __IIdentityCard_INTERFACE_DEFINED__

/* interface IIdentityCard */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IIdentityCard;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("A26E9DDC-FC1C-4042-82C0-F0753F0B5015")
    IIdentityCard : public IDispatch
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ContainerType( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ContainerType( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_DivisionCode( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_DivisionCode( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_DivisionName( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_DivisionName( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_EffectiveDate( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_EffectiveDate( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ExpirationDate( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ExpirationDate( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_IdExtension( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_IdExtension( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_IdNumber( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_IdNumber( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_IdSeries( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_IdSeries( 
            /* [in] */ BSTR newVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIdentityCardVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIdentityCard * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIdentityCard * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIdentityCard * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IIdentityCard * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IIdentityCard * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IIdentityCard * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IIdentityCard * This,
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
        
        DECLSPEC_XFGVIRT(IIdentityCard, get_ContainerType)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ContainerType )( 
            IIdentityCard * This,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(IIdentityCard, put_ContainerType)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ContainerType )( 
            IIdentityCard * This,
            /* [in] */ BSTR newVal);
        
        DECLSPEC_XFGVIRT(IIdentityCard, get_DivisionCode)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DivisionCode )( 
            IIdentityCard * This,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(IIdentityCard, put_DivisionCode)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_DivisionCode )( 
            IIdentityCard * This,
            /* [in] */ BSTR newVal);
        
        DECLSPEC_XFGVIRT(IIdentityCard, get_DivisionName)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DivisionName )( 
            IIdentityCard * This,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(IIdentityCard, put_DivisionName)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_DivisionName )( 
            IIdentityCard * This,
            /* [in] */ BSTR newVal);
        
        DECLSPEC_XFGVIRT(IIdentityCard, get_EffectiveDate)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_EffectiveDate )( 
            IIdentityCard * This,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(IIdentityCard, put_EffectiveDate)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_EffectiveDate )( 
            IIdentityCard * This,
            /* [in] */ BSTR newVal);
        
        DECLSPEC_XFGVIRT(IIdentityCard, get_ExpirationDate)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ExpirationDate )( 
            IIdentityCard * This,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(IIdentityCard, put_ExpirationDate)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ExpirationDate )( 
            IIdentityCard * This,
            /* [in] */ BSTR newVal);
        
        DECLSPEC_XFGVIRT(IIdentityCard, get_IdExtension)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_IdExtension )( 
            IIdentityCard * This,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(IIdentityCard, put_IdExtension)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_IdExtension )( 
            IIdentityCard * This,
            /* [in] */ BSTR newVal);
        
        DECLSPEC_XFGVIRT(IIdentityCard, get_IdNumber)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_IdNumber )( 
            IIdentityCard * This,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(IIdentityCard, put_IdNumber)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_IdNumber )( 
            IIdentityCard * This,
            /* [in] */ BSTR newVal);
        
        DECLSPEC_XFGVIRT(IIdentityCard, get_IdSeries)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_IdSeries )( 
            IIdentityCard * This,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(IIdentityCard, put_IdSeries)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_IdSeries )( 
            IIdentityCard * This,
            /* [in] */ BSTR newVal);
        
        END_INTERFACE
    } IIdentityCardVtbl;

    interface IIdentityCard
    {
        CONST_VTBL struct IIdentityCardVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIdentityCard_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIdentityCard_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIdentityCard_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIdentityCard_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IIdentityCard_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IIdentityCard_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IIdentityCard_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IIdentityCard_get_ContainerType(This,pVal)	\
    ( (This)->lpVtbl -> get_ContainerType(This,pVal) ) 

#define IIdentityCard_put_ContainerType(This,newVal)	\
    ( (This)->lpVtbl -> put_ContainerType(This,newVal) ) 

#define IIdentityCard_get_DivisionCode(This,pVal)	\
    ( (This)->lpVtbl -> get_DivisionCode(This,pVal) ) 

#define IIdentityCard_put_DivisionCode(This,newVal)	\
    ( (This)->lpVtbl -> put_DivisionCode(This,newVal) ) 

#define IIdentityCard_get_DivisionName(This,pVal)	\
    ( (This)->lpVtbl -> get_DivisionName(This,pVal) ) 

#define IIdentityCard_put_DivisionName(This,newVal)	\
    ( (This)->lpVtbl -> put_DivisionName(This,newVal) ) 

#define IIdentityCard_get_EffectiveDate(This,pVal)	\
    ( (This)->lpVtbl -> get_EffectiveDate(This,pVal) ) 

#define IIdentityCard_put_EffectiveDate(This,newVal)	\
    ( (This)->lpVtbl -> put_EffectiveDate(This,newVal) ) 

#define IIdentityCard_get_ExpirationDate(This,pVal)	\
    ( (This)->lpVtbl -> get_ExpirationDate(This,pVal) ) 

#define IIdentityCard_put_ExpirationDate(This,newVal)	\
    ( (This)->lpVtbl -> put_ExpirationDate(This,newVal) ) 

#define IIdentityCard_get_IdExtension(This,pVal)	\
    ( (This)->lpVtbl -> get_IdExtension(This,pVal) ) 

#define IIdentityCard_put_IdExtension(This,newVal)	\
    ( (This)->lpVtbl -> put_IdExtension(This,newVal) ) 

#define IIdentityCard_get_IdNumber(This,pVal)	\
    ( (This)->lpVtbl -> get_IdNumber(This,pVal) ) 

#define IIdentityCard_put_IdNumber(This,newVal)	\
    ( (This)->lpVtbl -> put_IdNumber(This,newVal) ) 

#define IIdentityCard_get_IdSeries(This,pVal)	\
    ( (This)->lpVtbl -> get_IdSeries(This,pVal) ) 

#define IIdentityCard_put_IdSeries(This,newVal)	\
    ( (This)->lpVtbl -> put_IdSeries(This,newVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIdentityCard_INTERFACE_DEFINED__ */


#ifndef __IPersonalCardholderData_INTERFACE_DEFINED__
#define __IPersonalCardholderData_INTERFACE_DEFINED__

/* interface IPersonalCardholderData */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IPersonalCardholderData;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("BC97AD5D-77AC-4c70-8391-1DCAC2989F15")
    IPersonalCardholderData : public IDispatch
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Address( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_Address( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_PhoneNumber( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_PhoneNumber( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Email( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_Email( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_IndividualTaxpayerNumber( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_IndividualTaxpayerNumber( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_VehicleLicenseNumber( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_VehicleLicenseNumber( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_VehicleRegistrationCertificate( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_VehicleRegistrationCertificate( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_IdentityCard( 
            /* [retval][out] */ IIdentityCard **pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Submit( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ResetAllData( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IPersonalCardholderDataVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IPersonalCardholderData * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IPersonalCardholderData * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IPersonalCardholderData * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IPersonalCardholderData * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IPersonalCardholderData * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IPersonalCardholderData * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IPersonalCardholderData * This,
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
        
        DECLSPEC_XFGVIRT(IPersonalCardholderData, get_Address)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Address )( 
            IPersonalCardholderData * This,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(IPersonalCardholderData, put_Address)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Address )( 
            IPersonalCardholderData * This,
            /* [in] */ BSTR newVal);
        
        DECLSPEC_XFGVIRT(IPersonalCardholderData, get_PhoneNumber)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PhoneNumber )( 
            IPersonalCardholderData * This,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(IPersonalCardholderData, put_PhoneNumber)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_PhoneNumber )( 
            IPersonalCardholderData * This,
            /* [in] */ BSTR newVal);
        
        DECLSPEC_XFGVIRT(IPersonalCardholderData, get_Email)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Email )( 
            IPersonalCardholderData * This,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(IPersonalCardholderData, put_Email)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Email )( 
            IPersonalCardholderData * This,
            /* [in] */ BSTR newVal);
        
        DECLSPEC_XFGVIRT(IPersonalCardholderData, get_IndividualTaxpayerNumber)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_IndividualTaxpayerNumber )( 
            IPersonalCardholderData * This,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(IPersonalCardholderData, put_IndividualTaxpayerNumber)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_IndividualTaxpayerNumber )( 
            IPersonalCardholderData * This,
            /* [in] */ BSTR newVal);
        
        DECLSPEC_XFGVIRT(IPersonalCardholderData, get_VehicleLicenseNumber)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_VehicleLicenseNumber )( 
            IPersonalCardholderData * This,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(IPersonalCardholderData, put_VehicleLicenseNumber)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_VehicleLicenseNumber )( 
            IPersonalCardholderData * This,
            /* [in] */ BSTR newVal);
        
        DECLSPEC_XFGVIRT(IPersonalCardholderData, get_VehicleRegistrationCertificate)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_VehicleRegistrationCertificate )( 
            IPersonalCardholderData * This,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(IPersonalCardholderData, put_VehicleRegistrationCertificate)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_VehicleRegistrationCertificate )( 
            IPersonalCardholderData * This,
            /* [in] */ BSTR newVal);
        
        DECLSPEC_XFGVIRT(IPersonalCardholderData, get_IdentityCard)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_IdentityCard )( 
            IPersonalCardholderData * This,
            /* [retval][out] */ IIdentityCard **pVal);
        
        DECLSPEC_XFGVIRT(IPersonalCardholderData, Submit)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Submit )( 
            IPersonalCardholderData * This);
        
        DECLSPEC_XFGVIRT(IPersonalCardholderData, ResetAllData)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ResetAllData )( 
            IPersonalCardholderData * This);
        
        END_INTERFACE
    } IPersonalCardholderDataVtbl;

    interface IPersonalCardholderData
    {
        CONST_VTBL struct IPersonalCardholderDataVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPersonalCardholderData_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IPersonalCardholderData_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IPersonalCardholderData_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IPersonalCardholderData_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IPersonalCardholderData_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IPersonalCardholderData_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IPersonalCardholderData_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IPersonalCardholderData_get_Address(This,pVal)	\
    ( (This)->lpVtbl -> get_Address(This,pVal) ) 

#define IPersonalCardholderData_put_Address(This,newVal)	\
    ( (This)->lpVtbl -> put_Address(This,newVal) ) 

#define IPersonalCardholderData_get_PhoneNumber(This,pVal)	\
    ( (This)->lpVtbl -> get_PhoneNumber(This,pVal) ) 

#define IPersonalCardholderData_put_PhoneNumber(This,newVal)	\
    ( (This)->lpVtbl -> put_PhoneNumber(This,newVal) ) 

#define IPersonalCardholderData_get_Email(This,pVal)	\
    ( (This)->lpVtbl -> get_Email(This,pVal) ) 

#define IPersonalCardholderData_put_Email(This,newVal)	\
    ( (This)->lpVtbl -> put_Email(This,newVal) ) 

#define IPersonalCardholderData_get_IndividualTaxpayerNumber(This,pVal)	\
    ( (This)->lpVtbl -> get_IndividualTaxpayerNumber(This,pVal) ) 

#define IPersonalCardholderData_put_IndividualTaxpayerNumber(This,newVal)	\
    ( (This)->lpVtbl -> put_IndividualTaxpayerNumber(This,newVal) ) 

#define IPersonalCardholderData_get_VehicleLicenseNumber(This,pVal)	\
    ( (This)->lpVtbl -> get_VehicleLicenseNumber(This,pVal) ) 

#define IPersonalCardholderData_put_VehicleLicenseNumber(This,newVal)	\
    ( (This)->lpVtbl -> put_VehicleLicenseNumber(This,newVal) ) 

#define IPersonalCardholderData_get_VehicleRegistrationCertificate(This,pVal)	\
    ( (This)->lpVtbl -> get_VehicleRegistrationCertificate(This,pVal) ) 

#define IPersonalCardholderData_put_VehicleRegistrationCertificate(This,newVal)	\
    ( (This)->lpVtbl -> put_VehicleRegistrationCertificate(This,newVal) ) 

#define IPersonalCardholderData_get_IdentityCard(This,pVal)	\
    ( (This)->lpVtbl -> get_IdentityCard(This,pVal) ) 

#define IPersonalCardholderData_Submit(This)	\
    ( (This)->lpVtbl -> Submit(This) ) 

#define IPersonalCardholderData_ResetAllData(This)	\
    ( (This)->lpVtbl -> ResetAllData(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IPersonalCardholderData_INTERFACE_DEFINED__ */


#ifndef __IOMSData_INTERFACE_DEFINED__
#define __IOMSData_INTERFACE_DEFINED__

/* interface IOMSData */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IOMSData;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("07DA1F55-BD56-4006-82DA-69360874E128")
    IOMSData : public IDispatch
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_OGRN( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_OKATO( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_EffectiveDate( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ExpirationDate( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IOMSDataVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IOMSData * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IOMSData * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IOMSData * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IOMSData * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IOMSData * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IOMSData * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IOMSData * This,
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
        
        DECLSPEC_XFGVIRT(IOMSData, get_OGRN)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_OGRN )( 
            IOMSData * This,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(IOMSData, get_OKATO)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_OKATO )( 
            IOMSData * This,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(IOMSData, get_EffectiveDate)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_EffectiveDate )( 
            IOMSData * This,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(IOMSData, get_ExpirationDate)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ExpirationDate )( 
            IOMSData * This,
            /* [retval][out] */ BSTR *pVal);
        
        END_INTERFACE
    } IOMSDataVtbl;

    interface IOMSData
    {
        CONST_VTBL struct IOMSDataVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IOMSData_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IOMSData_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IOMSData_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IOMSData_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IOMSData_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IOMSData_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IOMSData_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IOMSData_get_OGRN(This,pVal)	\
    ( (This)->lpVtbl -> get_OGRN(This,pVal) ) 

#define IOMSData_get_OKATO(This,pVal)	\
    ( (This)->lpVtbl -> get_OKATO(This,pVal) ) 

#define IOMSData_get_EffectiveDate(This,pVal)	\
    ( (This)->lpVtbl -> get_EffectiveDate(This,pVal) ) 

#define IOMSData_get_ExpirationDate(This,pVal)	\
    ( (This)->lpVtbl -> get_ExpirationDate(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IOMSData_INTERFACE_DEFINED__ */


#ifndef __IUECard_INTERFACE_DEFINED__
#define __IUECard_INTERFACE_DEFINED__

/* interface IUECard */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IUECard;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("98473852-2B72-4ebe-A985-6B72B9E93193")
    IUECard : public IDispatch
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_CardholderData( 
            /* [retval][out] */ ICardholderData **pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_PersonalCardholderData( 
            /* [in] */ VARIANT_BOOL bTrustedData,
            /* [retval][out] */ IPersonalCardholderData **pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_UECardWelcomeText( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ProviderVersion( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetPin1( 
            /* [in] */ BSTR Pin1) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IUECardVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IUECard * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IUECard * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IUECard * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IUECard * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IUECard * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IUECard * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IUECard * This,
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
        
        DECLSPEC_XFGVIRT(IUECard, get_CardholderData)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_CardholderData )( 
            IUECard * This,
            /* [retval][out] */ ICardholderData **pVal);
        
        DECLSPEC_XFGVIRT(IUECard, get_PersonalCardholderData)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PersonalCardholderData )( 
            IUECard * This,
            /* [in] */ VARIANT_BOOL bTrustedData,
            /* [retval][out] */ IPersonalCardholderData **pVal);
        
        DECLSPEC_XFGVIRT(IUECard, get_UECardWelcomeText)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_UECardWelcomeText )( 
            IUECard * This,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(IUECard, get_ProviderVersion)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ProviderVersion )( 
            IUECard * This,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(IUECard, SetPin1)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetPin1 )( 
            IUECard * This,
            /* [in] */ BSTR Pin1);
        
        END_INTERFACE
    } IUECardVtbl;

    interface IUECard
    {
        CONST_VTBL struct IUECardVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUECard_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IUECard_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IUECard_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IUECard_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IUECard_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IUECard_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IUECard_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IUECard_get_CardholderData(This,pVal)	\
    ( (This)->lpVtbl -> get_CardholderData(This,pVal) ) 

#define IUECard_get_PersonalCardholderData(This,bTrustedData,pVal)	\
    ( (This)->lpVtbl -> get_PersonalCardholderData(This,bTrustedData,pVal) ) 

#define IUECard_get_UECardWelcomeText(This,pVal)	\
    ( (This)->lpVtbl -> get_UECardWelcomeText(This,pVal) ) 

#define IUECard_get_ProviderVersion(This,pVal)	\
    ( (This)->lpVtbl -> get_ProviderVersion(This,pVal) ) 

#define IUECard_SetPin1(This,Pin1)	\
    ( (This)->lpVtbl -> SetPin1(This,Pin1) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IUECard_INTERFACE_DEFINED__ */


#ifndef __IUECard2_INTERFACE_DEFINED__
#define __IUECard2_INTERFACE_DEFINED__

/* interface IUECard2 */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IUECard2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("42916DD9-7DF7-463c-B7EF-05EF955721E5")
    IUECard2 : public IUECard
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Certificate( 
            /* [retval][out] */ /* external definition not present */ ICertificate **pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IUECard2Vtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IUECard2 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IUECard2 * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IUECard2 * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IUECard2 * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IUECard2 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IUECard2 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IUECard2 * This,
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
        
        DECLSPEC_XFGVIRT(IUECard, get_CardholderData)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_CardholderData )( 
            IUECard2 * This,
            /* [retval][out] */ ICardholderData **pVal);
        
        DECLSPEC_XFGVIRT(IUECard, get_PersonalCardholderData)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PersonalCardholderData )( 
            IUECard2 * This,
            /* [in] */ VARIANT_BOOL bTrustedData,
            /* [retval][out] */ IPersonalCardholderData **pVal);
        
        DECLSPEC_XFGVIRT(IUECard, get_UECardWelcomeText)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_UECardWelcomeText )( 
            IUECard2 * This,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(IUECard, get_ProviderVersion)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ProviderVersion )( 
            IUECard2 * This,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(IUECard, SetPin1)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetPin1 )( 
            IUECard2 * This,
            /* [in] */ BSTR Pin1);
        
        DECLSPEC_XFGVIRT(IUECard2, get_Certificate)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Certificate )( 
            IUECard2 * This,
            /* [retval][out] */ /* external definition not present */ ICertificate **pVal);
        
        END_INTERFACE
    } IUECard2Vtbl;

    interface IUECard2
    {
        CONST_VTBL struct IUECard2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUECard2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IUECard2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IUECard2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IUECard2_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IUECard2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IUECard2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IUECard2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IUECard2_get_CardholderData(This,pVal)	\
    ( (This)->lpVtbl -> get_CardholderData(This,pVal) ) 

#define IUECard2_get_PersonalCardholderData(This,bTrustedData,pVal)	\
    ( (This)->lpVtbl -> get_PersonalCardholderData(This,bTrustedData,pVal) ) 

#define IUECard2_get_UECardWelcomeText(This,pVal)	\
    ( (This)->lpVtbl -> get_UECardWelcomeText(This,pVal) ) 

#define IUECard2_get_ProviderVersion(This,pVal)	\
    ( (This)->lpVtbl -> get_ProviderVersion(This,pVal) ) 

#define IUECard2_SetPin1(This,Pin1)	\
    ( (This)->lpVtbl -> SetPin1(This,Pin1) ) 


#define IUECard2_get_Certificate(This,pVal)	\
    ( (This)->lpVtbl -> get_Certificate(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IUECard2_INTERFACE_DEFINED__ */


#ifndef __IUECard3_INTERFACE_DEFINED__
#define __IUECard3_INTERFACE_DEFINED__

/* interface IUECard3 */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IUECard3;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("13DEA1C3-9B33-483D-90C8-5D3BD541E54B")
    IUECard3 : public IUECard2
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_OMSData( 
            /* [retval][out] */ IOMSData **pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IUECard3Vtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IUECard3 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IUECard3 * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IUECard3 * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IUECard3 * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IUECard3 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IUECard3 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IUECard3 * This,
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
        
        DECLSPEC_XFGVIRT(IUECard, get_CardholderData)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_CardholderData )( 
            IUECard3 * This,
            /* [retval][out] */ ICardholderData **pVal);
        
        DECLSPEC_XFGVIRT(IUECard, get_PersonalCardholderData)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PersonalCardholderData )( 
            IUECard3 * This,
            /* [in] */ VARIANT_BOOL bTrustedData,
            /* [retval][out] */ IPersonalCardholderData **pVal);
        
        DECLSPEC_XFGVIRT(IUECard, get_UECardWelcomeText)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_UECardWelcomeText )( 
            IUECard3 * This,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(IUECard, get_ProviderVersion)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ProviderVersion )( 
            IUECard3 * This,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(IUECard, SetPin1)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetPin1 )( 
            IUECard3 * This,
            /* [in] */ BSTR Pin1);
        
        DECLSPEC_XFGVIRT(IUECard2, get_Certificate)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Certificate )( 
            IUECard3 * This,
            /* [retval][out] */ /* external definition not present */ ICertificate **pVal);
        
        DECLSPEC_XFGVIRT(IUECard3, get_OMSData)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_OMSData )( 
            IUECard3 * This,
            /* [retval][out] */ IOMSData **pVal);
        
        END_INTERFACE
    } IUECard3Vtbl;

    interface IUECard3
    {
        CONST_VTBL struct IUECard3Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUECard3_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IUECard3_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IUECard3_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IUECard3_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IUECard3_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IUECard3_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IUECard3_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IUECard3_get_CardholderData(This,pVal)	\
    ( (This)->lpVtbl -> get_CardholderData(This,pVal) ) 

#define IUECard3_get_PersonalCardholderData(This,bTrustedData,pVal)	\
    ( (This)->lpVtbl -> get_PersonalCardholderData(This,bTrustedData,pVal) ) 

#define IUECard3_get_UECardWelcomeText(This,pVal)	\
    ( (This)->lpVtbl -> get_UECardWelcomeText(This,pVal) ) 

#define IUECard3_get_ProviderVersion(This,pVal)	\
    ( (This)->lpVtbl -> get_ProviderVersion(This,pVal) ) 

#define IUECard3_SetPin1(This,Pin1)	\
    ( (This)->lpVtbl -> SetPin1(This,Pin1) ) 


#define IUECard3_get_Certificate(This,pVal)	\
    ( (This)->lpVtbl -> get_Certificate(This,pVal) ) 


#define IUECard3_get_OMSData(This,pVal)	\
    ( (This)->lpVtbl -> get_OMSData(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IUECard3_INTERFACE_DEFINED__ */


#ifndef __IAdditionalStore_INTERFACE_DEFINED__
#define __IAdditionalStore_INTERFACE_DEFINED__

/* interface IAdditionalStore */
/* [object][helpstring][uuid] */ 


EXTERN_C const IID IID_IAdditionalStore;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("DD2C0155-6308-4ab4-9A1B-BE9A3462D0BF")
    IAdditionalStore : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AdditionalStore( 
            /* [in] */ /* external definition not present */ IStore *Store) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAdditionalStoreVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAdditionalStore * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAdditionalStore * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAdditionalStore * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAdditionalStore * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAdditionalStore * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAdditionalStore * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAdditionalStore * This,
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
        
        DECLSPEC_XFGVIRT(IAdditionalStore, AdditionalStore)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AdditionalStore )( 
            IAdditionalStore * This,
            /* [in] */ /* external definition not present */ IStore *Store);
        
        END_INTERFACE
    } IAdditionalStoreVtbl;

    interface IAdditionalStore
    {
        CONST_VTBL struct IAdditionalStoreVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAdditionalStore_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAdditionalStore_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAdditionalStore_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAdditionalStore_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IAdditionalStore_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IAdditionalStore_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IAdditionalStore_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IAdditionalStore_AdditionalStore(This,Store)	\
    ( (This)->lpVtbl -> AdditionalStore(This,Store) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAdditionalStore_INTERFACE_DEFINED__ */


#ifndef __IEventSource_INTERFACE_DEFINED__
#define __IEventSource_INTERFACE_DEFINED__

/* interface IEventSource */
/* [object][helpstring][uuid] */ 


EXTERN_C const IID IID_IEventSource;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("DD2C0155-6308-4ab4-9A1A-BE9A3462D0BE")
    IEventSource : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE addEventListener( 
            /* [in] */ BSTR Event,
            /* [in] */ VARIANT Listener,
            /* [defaultvalue][in] */ VARIANT_BOOL bUseCapture = 0) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE removeEventListener( 
            /* [in] */ BSTR Event,
            /* [in] */ VARIANT Listener,
            /* [defaultvalue][in] */ VARIANT_BOOL bUseCapture = 0) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IEventSourceVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IEventSource * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IEventSource * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IEventSource * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IEventSource * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IEventSource * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IEventSource * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IEventSource * This,
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
        
        DECLSPEC_XFGVIRT(IEventSource, addEventListener)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *addEventListener )( 
            IEventSource * This,
            /* [in] */ BSTR Event,
            /* [in] */ VARIANT Listener,
            /* [defaultvalue][in] */ VARIANT_BOOL bUseCapture);
        
        DECLSPEC_XFGVIRT(IEventSource, removeEventListener)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *removeEventListener )( 
            IEventSource * This,
            /* [in] */ BSTR Event,
            /* [in] */ VARIANT Listener,
            /* [defaultvalue][in] */ VARIANT_BOOL bUseCapture);
        
        END_INTERFACE
    } IEventSourceVtbl;

    interface IEventSource
    {
        CONST_VTBL struct IEventSourceVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IEventSource_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IEventSource_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IEventSource_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IEventSource_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IEventSource_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IEventSource_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IEventSource_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IEventSource_addEventListener(This,Event,Listener,bUseCapture)	\
    ( (This)->lpVtbl -> addEventListener(This,Event,Listener,bUseCapture) ) 

#define IEventSource_removeEventListener(This,Event,Listener,bUseCapture)	\
    ( (This)->lpVtbl -> removeEventListener(This,Event,Listener,bUseCapture) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IEventSource_INTERFACE_DEFINED__ */


#ifndef __ITrustedSites_INTERFACE_DEFINED__
#define __ITrustedSites_INTERFACE_DEFINED__

/* interface ITrustedSites */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ITrustedSites;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8A83BED0-5D07-4f49-9DF4-9C0090592705")
    ITrustedSites : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Add( 
            /* [in] */ BSTR Site,
            /* [retval][out] */ BSTR *SimpleSite) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Remove( 
            LONG Index) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ LONG Index,
            /* [retval][out] */ VARIANT *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Save( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ITrustedSitesVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITrustedSites * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITrustedSites * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITrustedSites * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ITrustedSites * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ITrustedSites * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ITrustedSites * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ITrustedSites * This,
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
        
        DECLSPEC_XFGVIRT(ITrustedSites, Add)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Add )( 
            ITrustedSites * This,
            /* [in] */ BSTR Site,
            /* [retval][out] */ BSTR *SimpleSite);
        
        DECLSPEC_XFGVIRT(ITrustedSites, Remove)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Remove )( 
            ITrustedSites * This,
            LONG Index);
        
        DECLSPEC_XFGVIRT(ITrustedSites, get_Item)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            ITrustedSites * This,
            /* [in] */ LONG Index,
            /* [retval][out] */ VARIANT *pVal);
        
        DECLSPEC_XFGVIRT(ITrustedSites, get_Count)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            ITrustedSites * This,
            /* [retval][out] */ LONG *pVal);
        
        DECLSPEC_XFGVIRT(ITrustedSites, Save)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Save )( 
            ITrustedSites * This);
        
        END_INTERFACE
    } ITrustedSitesVtbl;

    interface ITrustedSites
    {
        CONST_VTBL struct ITrustedSitesVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITrustedSites_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITrustedSites_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITrustedSites_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITrustedSites_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ITrustedSites_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ITrustedSites_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ITrustedSites_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ITrustedSites_Add(This,Site,SimpleSite)	\
    ( (This)->lpVtbl -> Add(This,Site,SimpleSite) ) 

#define ITrustedSites_Remove(This,Index)	\
    ( (This)->lpVtbl -> Remove(This,Index) ) 

#define ITrustedSites_get_Item(This,Index,pVal)	\
    ( (This)->lpVtbl -> get_Item(This,Index,pVal) ) 

#define ITrustedSites_get_Count(This,pVal)	\
    ( (This)->lpVtbl -> get_Count(This,pVal) ) 

#define ITrustedSites_Save(This)	\
    ( (This)->lpVtbl -> Save(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITrustedSites_INTERFACE_DEFINED__ */


#ifndef __IPluginConfiguration_INTERFACE_DEFINED__
#define __IPluginConfiguration_INTERFACE_DEFINED__

/* interface IPluginConfiguration */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IPluginConfiguration;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("E5741F41-4A28-45ec-AE60-ADCD7FAD02C4")
    IPluginConfiguration : public IDispatch
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_TrustedSites( 
            /* [retval][out] */ ITrustedSites **ppVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_TrustedSitesGroupPolicy( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_IsUntrustedSitesDisabled( 
            /* [retval][out] */ BOOL *pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IPluginConfigurationVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IPluginConfiguration * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IPluginConfiguration * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IPluginConfiguration * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IPluginConfiguration * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IPluginConfiguration * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IPluginConfiguration * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IPluginConfiguration * This,
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
        
        DECLSPEC_XFGVIRT(IPluginConfiguration, get_TrustedSites)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_TrustedSites )( 
            IPluginConfiguration * This,
            /* [retval][out] */ ITrustedSites **ppVal);
        
        DECLSPEC_XFGVIRT(IPluginConfiguration, get_TrustedSitesGroupPolicy)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_TrustedSitesGroupPolicy )( 
            IPluginConfiguration * This,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(IPluginConfiguration, get_IsUntrustedSitesDisabled)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_IsUntrustedSitesDisabled )( 
            IPluginConfiguration * This,
            /* [retval][out] */ BOOL *pVal);
        
        END_INTERFACE
    } IPluginConfigurationVtbl;

    interface IPluginConfiguration
    {
        CONST_VTBL struct IPluginConfigurationVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPluginConfiguration_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IPluginConfiguration_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IPluginConfiguration_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IPluginConfiguration_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IPluginConfiguration_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IPluginConfiguration_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IPluginConfiguration_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IPluginConfiguration_get_TrustedSites(This,ppVal)	\
    ( (This)->lpVtbl -> get_TrustedSites(This,ppVal) ) 

#define IPluginConfiguration_get_TrustedSitesGroupPolicy(This,pVal)	\
    ( (This)->lpVtbl -> get_TrustedSitesGroupPolicy(This,pVal) ) 

#define IPluginConfiguration_get_IsUntrustedSitesDisabled(This,pVal)	\
    ( (This)->lpVtbl -> get_IsUntrustedSitesDisabled(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IPluginConfiguration_INTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_TrustedSites;

#ifdef __cplusplus

class DECLSPEC_UUID("E853748A-9CB8-424a-BEDD-4E0B1033CEF3")
TrustedSites;
#endif

EXTERN_C const CLSID CLSID_PluginConfiguration;

#ifdef __cplusplus

class DECLSPEC_UUID("89743089-7EE0-4817-91CC-A5E80AD1C0A2")
PluginConfiguration;
#endif

#ifndef __IRawSignature_INTERFACE_DEFINED__
#define __IRawSignature_INTERFACE_DEFINED__

/* interface IRawSignature */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IRawSignature;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("51E0331F-1A41-47B0-80FA-574A6B2DF0C1")
    IRawSignature : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SignHash( 
            /* [in] */ /* external definition not present */ IHashedData *Hash,
            /* [optional][in] */ VARIANT Certificate,
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE VerifyHash( 
            /* [in] */ /* external definition not present */ IHashedData *Hash,
            /* [in] */ /* external definition not present */ ICertificate *Certificate,
            /* [in] */ BSTR Signature) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IRawSignatureVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IRawSignature * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IRawSignature * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IRawSignature * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IRawSignature * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IRawSignature * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IRawSignature * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IRawSignature * This,
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
        
        DECLSPEC_XFGVIRT(IRawSignature, SignHash)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SignHash )( 
            IRawSignature * This,
            /* [in] */ /* external definition not present */ IHashedData *Hash,
            /* [optional][in] */ VARIANT Certificate,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(IRawSignature, VerifyHash)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *VerifyHash )( 
            IRawSignature * This,
            /* [in] */ /* external definition not present */ IHashedData *Hash,
            /* [in] */ /* external definition not present */ ICertificate *Certificate,
            /* [in] */ BSTR Signature);
        
        END_INTERFACE
    } IRawSignatureVtbl;

    interface IRawSignature
    {
        CONST_VTBL struct IRawSignatureVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IRawSignature_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IRawSignature_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IRawSignature_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IRawSignature_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IRawSignature_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IRawSignature_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IRawSignature_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IRawSignature_SignHash(This,Hash,Certificate,pVal)	\
    ( (This)->lpVtbl -> SignHash(This,Hash,Certificate,pVal) ) 

#define IRawSignature_VerifyHash(This,Hash,Certificate,Signature)	\
    ( (This)->lpVtbl -> VerifyHash(This,Hash,Certificate,Signature) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IRawSignature_INTERFACE_DEFINED__ */


#ifndef __ICPLicense_INTERFACE_DEFINED__
#define __ICPLicense_INTERFACE_DEFINED__

/* interface ICPLicense */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ICPLicense;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("103D60B6-700F-469d-907A-97D3402648E4")
    ICPLicense : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SerialNumber( 
            /* [defaultvalue][in] */ LONG Product,
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ValidTo( 
            /* [defaultvalue][in] */ LONG Product,
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE FirstInstallDate( 
            /* [defaultvalue][in] */ LONG Product,
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Type( 
            /* [defaultvalue][in] */ LONG Product,
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CompanyName( 
            /* [defaultvalue][in] */ LONG Product,
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetLicense( 
            /* [in] */ BSTR SerialNumber,
            /* [defaultvalue][in] */ BSTR User = (BSTR)L"",
            /* [defaultvalue][in] */ BSTR Company = (BSTR)L"",
            /* [defaultvalue][in] */ LONG Reserved = 0) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICPLicenseVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICPLicense * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICPLicense * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICPLicense * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ICPLicense * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ICPLicense * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ICPLicense * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICPLicense * This,
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
        
        DECLSPEC_XFGVIRT(ICPLicense, SerialNumber)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SerialNumber )( 
            ICPLicense * This,
            /* [defaultvalue][in] */ LONG Product,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(ICPLicense, ValidTo)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ValidTo )( 
            ICPLicense * This,
            /* [defaultvalue][in] */ LONG Product,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(ICPLicense, FirstInstallDate)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *FirstInstallDate )( 
            ICPLicense * This,
            /* [defaultvalue][in] */ LONG Product,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(ICPLicense, Type)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Type )( 
            ICPLicense * This,
            /* [defaultvalue][in] */ LONG Product,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(ICPLicense, CompanyName)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CompanyName )( 
            ICPLicense * This,
            /* [defaultvalue][in] */ LONG Product,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(ICPLicense, SetLicense)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetLicense )( 
            ICPLicense * This,
            /* [in] */ BSTR SerialNumber,
            /* [defaultvalue][in] */ BSTR User,
            /* [defaultvalue][in] */ BSTR Company,
            /* [defaultvalue][in] */ LONG Reserved);
        
        END_INTERFACE
    } ICPLicenseVtbl;

    interface ICPLicense
    {
        CONST_VTBL struct ICPLicenseVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICPLicense_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICPLicense_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICPLicense_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICPLicense_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ICPLicense_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ICPLicense_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ICPLicense_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ICPLicense_SerialNumber(This,Product,pVal)	\
    ( (This)->lpVtbl -> SerialNumber(This,Product,pVal) ) 

#define ICPLicense_ValidTo(This,Product,pVal)	\
    ( (This)->lpVtbl -> ValidTo(This,Product,pVal) ) 

#define ICPLicense_FirstInstallDate(This,Product,pVal)	\
    ( (This)->lpVtbl -> FirstInstallDate(This,Product,pVal) ) 

#define ICPLicense_Type(This,Product,pVal)	\
    ( (This)->lpVtbl -> Type(This,Product,pVal) ) 

#define ICPLicense_CompanyName(This,Product,pVal)	\
    ( (This)->lpVtbl -> CompanyName(This,Product,pVal) ) 

#define ICPLicense_SetLicense(This,SerialNumber,User,Company,Reserved)	\
    ( (This)->lpVtbl -> SetLicense(This,SerialNumber,User,Company,Reserved) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICPLicense_INTERFACE_DEFINED__ */


#ifndef __ICPLicense2_INTERFACE_DEFINED__
#define __ICPLicense2_INTERFACE_DEFINED__

/* interface ICPLicense2 */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ICPLicense2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("103D60B6-700F-469d-907A-97D3402648E5")
    ICPLicense2 : public ICPLicense
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IsValid( 
            /* [defaultvalue][in] */ LONG Product,
            /* [defaultvalue][in] */ LONG Flags,
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICPLicense2Vtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICPLicense2 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICPLicense2 * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICPLicense2 * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ICPLicense2 * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ICPLicense2 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ICPLicense2 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICPLicense2 * This,
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
        
        DECLSPEC_XFGVIRT(ICPLicense, SerialNumber)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SerialNumber )( 
            ICPLicense2 * This,
            /* [defaultvalue][in] */ LONG Product,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(ICPLicense, ValidTo)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ValidTo )( 
            ICPLicense2 * This,
            /* [defaultvalue][in] */ LONG Product,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(ICPLicense, FirstInstallDate)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *FirstInstallDate )( 
            ICPLicense2 * This,
            /* [defaultvalue][in] */ LONG Product,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(ICPLicense, Type)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Type )( 
            ICPLicense2 * This,
            /* [defaultvalue][in] */ LONG Product,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(ICPLicense, CompanyName)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CompanyName )( 
            ICPLicense2 * This,
            /* [defaultvalue][in] */ LONG Product,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(ICPLicense, SetLicense)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetLicense )( 
            ICPLicense2 * This,
            /* [in] */ BSTR SerialNumber,
            /* [defaultvalue][in] */ BSTR User,
            /* [defaultvalue][in] */ BSTR Company,
            /* [defaultvalue][in] */ LONG Reserved);
        
        DECLSPEC_XFGVIRT(ICPLicense2, IsValid)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *IsValid )( 
            ICPLicense2 * This,
            /* [defaultvalue][in] */ LONG Product,
            /* [defaultvalue][in] */ LONG Flags,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        END_INTERFACE
    } ICPLicense2Vtbl;

    interface ICPLicense2
    {
        CONST_VTBL struct ICPLicense2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICPLicense2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICPLicense2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICPLicense2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICPLicense2_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ICPLicense2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ICPLicense2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ICPLicense2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ICPLicense2_SerialNumber(This,Product,pVal)	\
    ( (This)->lpVtbl -> SerialNumber(This,Product,pVal) ) 

#define ICPLicense2_ValidTo(This,Product,pVal)	\
    ( (This)->lpVtbl -> ValidTo(This,Product,pVal) ) 

#define ICPLicense2_FirstInstallDate(This,Product,pVal)	\
    ( (This)->lpVtbl -> FirstInstallDate(This,Product,pVal) ) 

#define ICPLicense2_Type(This,Product,pVal)	\
    ( (This)->lpVtbl -> Type(This,Product,pVal) ) 

#define ICPLicense2_CompanyName(This,Product,pVal)	\
    ( (This)->lpVtbl -> CompanyName(This,Product,pVal) ) 

#define ICPLicense2_SetLicense(This,SerialNumber,User,Company,Reserved)	\
    ( (This)->lpVtbl -> SetLicense(This,SerialNumber,User,Company,Reserved) ) 


#define ICPLicense2_IsValid(This,Product,Flags,pVal)	\
    ( (This)->lpVtbl -> IsValid(This,Product,Flags,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICPLicense2_INTERFACE_DEFINED__ */


#ifndef __ICadesTools_INTERFACE_DEFINED__
#define __ICadesTools_INTERFACE_DEFINED__

/* interface ICadesTools */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ICadesTools;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("103D60B6-700F-469d-907C-97D3402649F6")
    ICadesTools : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE MacAddress( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICadesToolsVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICadesTools * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICadesTools * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICadesTools * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ICadesTools * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ICadesTools * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ICadesTools * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICadesTools * This,
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
        
        DECLSPEC_XFGVIRT(ICadesTools, MacAddress)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *MacAddress )( 
            ICadesTools * This,
            /* [retval][out] */ BSTR *pVal);
        
        END_INTERFACE
    } ICadesToolsVtbl;

    interface ICadesTools
    {
        CONST_VTBL struct ICadesToolsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICadesTools_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICadesTools_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICadesTools_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICadesTools_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ICadesTools_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ICadesTools_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ICadesTools_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ICadesTools_MacAddress(This,pVal)	\
    ( (This)->lpVtbl -> MacAddress(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICadesTools_INTERFACE_DEFINED__ */


#ifndef __ICadesTools2_INTERFACE_DEFINED__
#define __ICadesTools2_INTERFACE_DEFINED__

/* interface ICadesTools2 */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ICadesTools2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("103D60B6-700F-469d-907C-97D340270001")
    ICadesTools2 : public ICadesTools
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE PackageManager( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICadesTools2Vtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICadesTools2 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICadesTools2 * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICadesTools2 * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ICadesTools2 * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ICadesTools2 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ICadesTools2 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICadesTools2 * This,
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
        
        DECLSPEC_XFGVIRT(ICadesTools, MacAddress)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *MacAddress )( 
            ICadesTools2 * This,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(ICadesTools2, PackageManager)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *PackageManager )( 
            ICadesTools2 * This,
            /* [retval][out] */ BSTR *pVal);
        
        END_INTERFACE
    } ICadesTools2Vtbl;

    interface ICadesTools2
    {
        CONST_VTBL struct ICadesTools2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICadesTools2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICadesTools2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICadesTools2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICadesTools2_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ICadesTools2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ICadesTools2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ICadesTools2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ICadesTools2_MacAddress(This,pVal)	\
    ( (This)->lpVtbl -> MacAddress(This,pVal) ) 


#define ICadesTools2_PackageManager(This,pVal)	\
    ( (This)->lpVtbl -> PackageManager(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICadesTools2_INTERFACE_DEFINED__ */


#ifndef __IX509ExtensionSubjectSignTool_INTERFACE_DEFINED__
#define __IX509ExtensionSubjectSignTool_INTERFACE_DEFINED__

/* interface IX509ExtensionSubjectSignTool */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IX509ExtensionSubjectSignTool;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("103D60B6-700F-469d-907C-97D3402649F7")
    IX509ExtensionSubjectSignTool : public IX509Extension
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE InitializeEncode( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IX509ExtensionSubjectSignToolVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IX509Extension, QueryInterface)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IX509ExtensionSubjectSignTool * This,
            /* [in][idldescattr] */ struct GUID *riid,
            /* [out][idldescattr] */ void **ppvObj,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(IX509Extension, AddRef)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *AddRef )( 
            IX509ExtensionSubjectSignTool * This,
            /* [retval][out] */ unsigned long *retval);
        
        DECLSPEC_XFGVIRT(IX509Extension, Release)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *Release )( 
            IX509ExtensionSubjectSignTool * This,
            /* [retval][out] */ unsigned long *retval);
        
        DECLSPEC_XFGVIRT(IX509Extension, GetTypeInfoCount)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IX509ExtensionSubjectSignTool * This,
            /* [out][idldescattr] */ unsigned UINT *pctinfo,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(IX509Extension, GetTypeInfo)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IX509ExtensionSubjectSignTool * This,
            /* [in][idldescattr] */ unsigned UINT itinfo,
            /* [in][idldescattr] */ unsigned long lcid,
            /* [out][idldescattr] */ void **pptinfo,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(IX509Extension, GetIDsOfNames)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IX509ExtensionSubjectSignTool * This,
            /* [in][idldescattr] */ struct GUID *riid,
            /* [in][idldescattr] */ signed char **rgszNames,
            /* [in][idldescattr] */ unsigned UINT cNames,
            /* [in][idldescattr] */ unsigned long lcid,
            /* [out][idldescattr] */ signed long *rgdispid,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(IX509Extension, Invoke)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IX509ExtensionSubjectSignTool * This,
            /* [in][idldescattr] */ signed long dispidMember,
            /* [in][idldescattr] */ struct GUID *riid,
            /* [in][idldescattr] */ unsigned long lcid,
            /* [in][idldescattr] */ unsigned short wFlags,
            /* [in][idldescattr] */ struct DISPPARAMS *pdispparams,
            /* [out][idldescattr] */ VARIANT *pvarResult,
            /* [out][idldescattr] */ struct EXCEPINFO *pexcepinfo,
            /* [out][idldescattr] */ unsigned UINT *puArgErr,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(IX509Extension, Initialize)
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            IX509ExtensionSubjectSignTool * This,
            /* [in][idldescattr] */ IObjectId *pObjectId,
            /* [in][idldescattr] */ enum EncodingType Encoding,
            /* [in][idldescattr] */ BSTR strEncodedData,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(IX509Extension, get_ObjectId)
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_ObjectId )( 
            IX509ExtensionSubjectSignTool * This,
            /* [retval][out] */ IObjectId **retval);
        
        DECLSPEC_XFGVIRT(IX509Extension, get_RawData)
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_RawData )( 
            IX509ExtensionSubjectSignTool * This,
            /* [in][idldescattr] */ enum EncodingType Encoding,
            /* [retval][out] */ BSTR *retval);
        
        DECLSPEC_XFGVIRT(IX509Extension, get_Critical)
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_Critical )( 
            IX509ExtensionSubjectSignTool * This,
            /* [retval][out] */ BOOLEAN *retval);
        
        DECLSPEC_XFGVIRT(IX509Extension, put_Critical)
        /* [id][propput][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *put_Critical )( 
            IX509ExtensionSubjectSignTool * This,
            /* [in][idldescattr] */ BOOLEAN noname,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(IX509ExtensionSubjectSignTool, InitializeEncode)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *InitializeEncode )( 
            IX509ExtensionSubjectSignTool * This);
        
        END_INTERFACE
    } IX509ExtensionSubjectSignToolVtbl;

    interface IX509ExtensionSubjectSignTool
    {
        CONST_VTBL struct IX509ExtensionSubjectSignToolVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IX509ExtensionSubjectSignTool_QueryInterface(This,riid,ppvObj,retval)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObj,retval) ) 

#define IX509ExtensionSubjectSignTool_AddRef(This,retval)	\
    ( (This)->lpVtbl -> AddRef(This,retval) ) 

#define IX509ExtensionSubjectSignTool_Release(This,retval)	\
    ( (This)->lpVtbl -> Release(This,retval) ) 

#define IX509ExtensionSubjectSignTool_GetTypeInfoCount(This,pctinfo,retval)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo,retval) ) 

#define IX509ExtensionSubjectSignTool_GetTypeInfo(This,itinfo,lcid,pptinfo,retval)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,itinfo,lcid,pptinfo,retval) ) 

#define IX509ExtensionSubjectSignTool_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgdispid,retval)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgdispid,retval) ) 

#define IX509ExtensionSubjectSignTool_Invoke(This,dispidMember,riid,lcid,wFlags,pdispparams,pvarResult,pexcepinfo,puArgErr,retval)	\
    ( (This)->lpVtbl -> Invoke(This,dispidMember,riid,lcid,wFlags,pdispparams,pvarResult,pexcepinfo,puArgErr,retval) ) 

#define IX509ExtensionSubjectSignTool_Initialize(This,pObjectId,Encoding,strEncodedData,retval)	\
    ( (This)->lpVtbl -> Initialize(This,pObjectId,Encoding,strEncodedData,retval) ) 

#define IX509ExtensionSubjectSignTool_get_ObjectId(This,retval)	\
    ( (This)->lpVtbl -> get_ObjectId(This,retval) ) 

#define IX509ExtensionSubjectSignTool_get_RawData(This,Encoding,retval)	\
    ( (This)->lpVtbl -> get_RawData(This,Encoding,retval) ) 

#define IX509ExtensionSubjectSignTool_get_Critical(This,retval)	\
    ( (This)->lpVtbl -> get_Critical(This,retval) ) 

#define IX509ExtensionSubjectSignTool_put_Critical(This,noname,retval)	\
    ( (This)->lpVtbl -> put_Critical(This,noname,retval) ) 


#define IX509ExtensionSubjectSignTool_InitializeEncode(This)	\
    ( (This)->lpVtbl -> InitializeEncode(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IX509ExtensionSubjectSignTool_INTERFACE_DEFINED__ */


#ifndef __ICPReaderMode_INTERFACE_DEFINED__
#define __ICPReaderMode_INTERFACE_DEFINED__

/* interface ICPReaderMode */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ICPReaderMode;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("103D60B6-700F-469d-907C-97D3402649F8")
    ICPReaderMode : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_NickName( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Media( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_CarrierFlags( 
            /* [retval][out] */ LONG *pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICPReaderModeVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICPReaderMode * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICPReaderMode * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICPReaderMode * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ICPReaderMode * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ICPReaderMode * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ICPReaderMode * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICPReaderMode * This,
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
        
        DECLSPEC_XFGVIRT(ICPReaderMode, get_NickName)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_NickName )( 
            ICPReaderMode * This,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(ICPReaderMode, get_Name)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            ICPReaderMode * This,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(ICPReaderMode, get_Media)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Media )( 
            ICPReaderMode * This,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(ICPReaderMode, get_CarrierFlags)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CarrierFlags )( 
            ICPReaderMode * This,
            /* [retval][out] */ LONG *pVal);
        
        END_INTERFACE
    } ICPReaderModeVtbl;

    interface ICPReaderMode
    {
        CONST_VTBL struct ICPReaderModeVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICPReaderMode_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICPReaderMode_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICPReaderMode_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICPReaderMode_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ICPReaderMode_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ICPReaderMode_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ICPReaderMode_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ICPReaderMode_get_NickName(This,pVal)	\
    ( (This)->lpVtbl -> get_NickName(This,pVal) ) 

#define ICPReaderMode_get_Name(This,pVal)	\
    ( (This)->lpVtbl -> get_Name(This,pVal) ) 

#define ICPReaderMode_get_Media(This,pVal)	\
    ( (This)->lpVtbl -> get_Media(This,pVal) ) 

#define ICPReaderMode_get_CarrierFlags(This,pVal)	\
    ( (This)->lpVtbl -> get_CarrierFlags(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICPReaderMode_INTERFACE_DEFINED__ */


#ifndef __ICPReaderModes_INTERFACE_DEFINED__
#define __ICPReaderModes_INTERFACE_DEFINED__

/* interface ICPReaderModes */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ICPReaderModes;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("103D60B6-700F-469d-907C-97D3402649F9")
    ICPReaderModes : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ItemByIndex( 
            /* [in] */ long Index,
            /* [retval][out] */ ICPReaderMode **pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ LONG *pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICPReaderModesVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICPReaderModes * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICPReaderModes * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICPReaderModes * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ICPReaderModes * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ICPReaderModes * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ICPReaderModes * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICPReaderModes * This,
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
        
        DECLSPEC_XFGVIRT(ICPReaderModes, ItemByIndex)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ItemByIndex )( 
            ICPReaderModes * This,
            /* [in] */ long Index,
            /* [retval][out] */ ICPReaderMode **pVal);
        
        DECLSPEC_XFGVIRT(ICPReaderModes, get_Count)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            ICPReaderModes * This,
            /* [retval][out] */ LONG *pVal);
        
        END_INTERFACE
    } ICPReaderModesVtbl;

    interface ICPReaderModes
    {
        CONST_VTBL struct ICPReaderModesVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICPReaderModes_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICPReaderModes_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICPReaderModes_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICPReaderModes_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ICPReaderModes_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ICPReaderModes_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ICPReaderModes_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ICPReaderModes_ItemByIndex(This,Index,pVal)	\
    ( (This)->lpVtbl -> ItemByIndex(This,Index,pVal) ) 

#define ICPReaderModes_get_Count(This,pVal)	\
    ( (This)->lpVtbl -> get_Count(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICPReaderModes_INTERFACE_DEFINED__ */


#ifndef __IX509ExtensionIdentificationKind_INTERFACE_DEFINED__
#define __IX509ExtensionIdentificationKind_INTERFACE_DEFINED__

/* interface IX509ExtensionIdentificationKind */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IX509ExtensionIdentificationKind;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("103D60B6-700F-469d-907C-97D3402649FA")
    IX509ExtensionIdentificationKind : public IX509Extension
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE InitializeEncode( 
            /* [in] */ LONG Index) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IX509ExtensionIdentificationKindVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IX509Extension, QueryInterface)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IX509ExtensionIdentificationKind * This,
            /* [in][idldescattr] */ struct GUID *riid,
            /* [out][idldescattr] */ void **ppvObj,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(IX509Extension, AddRef)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *AddRef )( 
            IX509ExtensionIdentificationKind * This,
            /* [retval][out] */ unsigned long *retval);
        
        DECLSPEC_XFGVIRT(IX509Extension, Release)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *Release )( 
            IX509ExtensionIdentificationKind * This,
            /* [retval][out] */ unsigned long *retval);
        
        DECLSPEC_XFGVIRT(IX509Extension, GetTypeInfoCount)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IX509ExtensionIdentificationKind * This,
            /* [out][idldescattr] */ unsigned UINT *pctinfo,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(IX509Extension, GetTypeInfo)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IX509ExtensionIdentificationKind * This,
            /* [in][idldescattr] */ unsigned UINT itinfo,
            /* [in][idldescattr] */ unsigned long lcid,
            /* [out][idldescattr] */ void **pptinfo,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(IX509Extension, GetIDsOfNames)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IX509ExtensionIdentificationKind * This,
            /* [in][idldescattr] */ struct GUID *riid,
            /* [in][idldescattr] */ signed char **rgszNames,
            /* [in][idldescattr] */ unsigned UINT cNames,
            /* [in][idldescattr] */ unsigned long lcid,
            /* [out][idldescattr] */ signed long *rgdispid,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(IX509Extension, Invoke)
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IX509ExtensionIdentificationKind * This,
            /* [in][idldescattr] */ signed long dispidMember,
            /* [in][idldescattr] */ struct GUID *riid,
            /* [in][idldescattr] */ unsigned long lcid,
            /* [in][idldescattr] */ unsigned short wFlags,
            /* [in][idldescattr] */ struct DISPPARAMS *pdispparams,
            /* [out][idldescattr] */ VARIANT *pvarResult,
            /* [out][idldescattr] */ struct EXCEPINFO *pexcepinfo,
            /* [out][idldescattr] */ unsigned UINT *puArgErr,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(IX509Extension, Initialize)
        /* [id][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            IX509ExtensionIdentificationKind * This,
            /* [in][idldescattr] */ IObjectId *pObjectId,
            /* [in][idldescattr] */ enum EncodingType Encoding,
            /* [in][idldescattr] */ BSTR strEncodedData,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(IX509Extension, get_ObjectId)
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_ObjectId )( 
            IX509ExtensionIdentificationKind * This,
            /* [retval][out] */ IObjectId **retval);
        
        DECLSPEC_XFGVIRT(IX509Extension, get_RawData)
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_RawData )( 
            IX509ExtensionIdentificationKind * This,
            /* [in][idldescattr] */ enum EncodingType Encoding,
            /* [retval][out] */ BSTR *retval);
        
        DECLSPEC_XFGVIRT(IX509Extension, get_Critical)
        /* [id][propget][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *get_Critical )( 
            IX509ExtensionIdentificationKind * This,
            /* [retval][out] */ BOOLEAN *retval);
        
        DECLSPEC_XFGVIRT(IX509Extension, put_Critical)
        /* [id][propput][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *put_Critical )( 
            IX509ExtensionIdentificationKind * This,
            /* [in][idldescattr] */ BOOLEAN noname,
            /* [retval][out] */ void *retval);
        
        DECLSPEC_XFGVIRT(IX509ExtensionIdentificationKind, InitializeEncode)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *InitializeEncode )( 
            IX509ExtensionIdentificationKind * This,
            /* [in] */ LONG Index);
        
        END_INTERFACE
    } IX509ExtensionIdentificationKindVtbl;

    interface IX509ExtensionIdentificationKind
    {
        CONST_VTBL struct IX509ExtensionIdentificationKindVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IX509ExtensionIdentificationKind_QueryInterface(This,riid,ppvObj,retval)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObj,retval) ) 

#define IX509ExtensionIdentificationKind_AddRef(This,retval)	\
    ( (This)->lpVtbl -> AddRef(This,retval) ) 

#define IX509ExtensionIdentificationKind_Release(This,retval)	\
    ( (This)->lpVtbl -> Release(This,retval) ) 

#define IX509ExtensionIdentificationKind_GetTypeInfoCount(This,pctinfo,retval)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo,retval) ) 

#define IX509ExtensionIdentificationKind_GetTypeInfo(This,itinfo,lcid,pptinfo,retval)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,itinfo,lcid,pptinfo,retval) ) 

#define IX509ExtensionIdentificationKind_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgdispid,retval)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgdispid,retval) ) 

#define IX509ExtensionIdentificationKind_Invoke(This,dispidMember,riid,lcid,wFlags,pdispparams,pvarResult,pexcepinfo,puArgErr,retval)	\
    ( (This)->lpVtbl -> Invoke(This,dispidMember,riid,lcid,wFlags,pdispparams,pvarResult,pexcepinfo,puArgErr,retval) ) 

#define IX509ExtensionIdentificationKind_Initialize(This,pObjectId,Encoding,strEncodedData,retval)	\
    ( (This)->lpVtbl -> Initialize(This,pObjectId,Encoding,strEncodedData,retval) ) 

#define IX509ExtensionIdentificationKind_get_ObjectId(This,retval)	\
    ( (This)->lpVtbl -> get_ObjectId(This,retval) ) 

#define IX509ExtensionIdentificationKind_get_RawData(This,Encoding,retval)	\
    ( (This)->lpVtbl -> get_RawData(This,Encoding,retval) ) 

#define IX509ExtensionIdentificationKind_get_Critical(This,retval)	\
    ( (This)->lpVtbl -> get_Critical(This,retval) ) 

#define IX509ExtensionIdentificationKind_put_Critical(This,noname,retval)	\
    ( (This)->lpVtbl -> put_Critical(This,noname,retval) ) 


#define IX509ExtensionIdentificationKind_InitializeEncode(This,Index)	\
    ( (This)->lpVtbl -> InitializeEncode(This,Index) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IX509ExtensionIdentificationKind_INTERFACE_DEFINED__ */


#ifndef __ICPContainers_INTERFACE_DEFINED__
#define __ICPContainers_INTERFACE_DEFINED__

/* interface ICPContainers */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ICPContainers;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("103D60B6-700F-469d-907C-97D3402649FB")
    ICPContainers : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ItemByIndex( 
            /* [in] */ long Index,
            /* [retval][out] */ ICPContainer **pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ LONG *pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICPContainersVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICPContainers * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICPContainers * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICPContainers * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ICPContainers * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ICPContainers * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ICPContainers * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICPContainers * This,
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
        
        DECLSPEC_XFGVIRT(ICPContainers, ItemByIndex)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ItemByIndex )( 
            ICPContainers * This,
            /* [in] */ long Index,
            /* [retval][out] */ ICPContainer **pVal);
        
        DECLSPEC_XFGVIRT(ICPContainers, get_Count)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            ICPContainers * This,
            /* [retval][out] */ LONG *pVal);
        
        END_INTERFACE
    } ICPContainersVtbl;

    interface ICPContainers
    {
        CONST_VTBL struct ICPContainersVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICPContainers_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICPContainers_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICPContainers_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICPContainers_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ICPContainers_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ICPContainers_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ICPContainers_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ICPContainers_ItemByIndex(This,Index,pVal)	\
    ( (This)->lpVtbl -> ItemByIndex(This,Index,pVal) ) 

#define ICPContainers_get_Count(This,pVal)	\
    ( (This)->lpVtbl -> get_Count(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICPContainers_INTERFACE_DEFINED__ */


#ifndef __ICPContainer_INTERFACE_DEFINED__
#define __ICPContainer_INTERFACE_DEFINED__

/* interface ICPContainer */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ICPContainer;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("103D60B6-700F-469d-907C-97D3402649FC")
    ICPContainer : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_UniqueName( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Media( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Reader( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_FQCN( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Keys( 
            /* [retval][out] */ VARIANT *pVal) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_Silent( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Delete( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICPContainerVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICPContainer * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICPContainer * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICPContainer * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ICPContainer * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ICPContainer * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ICPContainer * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICPContainer * This,
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
        
        DECLSPEC_XFGVIRT(ICPContainer, get_UniqueName)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_UniqueName )( 
            ICPContainer * This,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(ICPContainer, get_Media)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Media )( 
            ICPContainer * This,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(ICPContainer, get_Reader)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Reader )( 
            ICPContainer * This,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(ICPContainer, get_FQCN)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FQCN )( 
            ICPContainer * This,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(ICPContainer, get_Name)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            ICPContainer * This,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(ICPContainer, get_Keys)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Keys )( 
            ICPContainer * This,
            /* [retval][out] */ VARIANT *pVal);
        
        DECLSPEC_XFGVIRT(ICPContainer, put_Silent)
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Silent )( 
            ICPContainer * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        DECLSPEC_XFGVIRT(ICPContainer, Delete)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Delete )( 
            ICPContainer * This);
        
        END_INTERFACE
    } ICPContainerVtbl;

    interface ICPContainer
    {
        CONST_VTBL struct ICPContainerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICPContainer_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICPContainer_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICPContainer_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICPContainer_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ICPContainer_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ICPContainer_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ICPContainer_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ICPContainer_get_UniqueName(This,pVal)	\
    ( (This)->lpVtbl -> get_UniqueName(This,pVal) ) 

#define ICPContainer_get_Media(This,pVal)	\
    ( (This)->lpVtbl -> get_Media(This,pVal) ) 

#define ICPContainer_get_Reader(This,pVal)	\
    ( (This)->lpVtbl -> get_Reader(This,pVal) ) 

#define ICPContainer_get_FQCN(This,pVal)	\
    ( (This)->lpVtbl -> get_FQCN(This,pVal) ) 

#define ICPContainer_get_Name(This,pVal)	\
    ( (This)->lpVtbl -> get_Name(This,pVal) ) 

#define ICPContainer_get_Keys(This,pVal)	\
    ( (This)->lpVtbl -> get_Keys(This,pVal) ) 

#define ICPContainer_put_Silent(This,newVal)	\
    ( (This)->lpVtbl -> put_Silent(This,newVal) ) 

#define ICPContainer_Delete(This)	\
    ( (This)->lpVtbl -> Delete(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICPContainer_INTERFACE_DEFINED__ */


#ifndef __ICPContainerKeys_INTERFACE_DEFINED__
#define __ICPContainerKeys_INTERFACE_DEFINED__

/* interface ICPContainerKeys */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ICPContainerKeys;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("103D60B6-700F-469d-907C-97D3402649FD")
    ICPContainerKeys : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ItemByIndex( 
            /* [in] */ long Index,
            /* [retval][out] */ ICPContainerKey **pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ LONG *pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICPContainerKeysVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICPContainerKeys * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICPContainerKeys * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICPContainerKeys * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ICPContainerKeys * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ICPContainerKeys * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ICPContainerKeys * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICPContainerKeys * This,
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
        
        DECLSPEC_XFGVIRT(ICPContainerKeys, ItemByIndex)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ItemByIndex )( 
            ICPContainerKeys * This,
            /* [in] */ long Index,
            /* [retval][out] */ ICPContainerKey **pVal);
        
        DECLSPEC_XFGVIRT(ICPContainerKeys, get_Count)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            ICPContainerKeys * This,
            /* [retval][out] */ LONG *pVal);
        
        END_INTERFACE
    } ICPContainerKeysVtbl;

    interface ICPContainerKeys
    {
        CONST_VTBL struct ICPContainerKeysVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICPContainerKeys_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICPContainerKeys_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICPContainerKeys_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICPContainerKeys_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ICPContainerKeys_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ICPContainerKeys_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ICPContainerKeys_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ICPContainerKeys_ItemByIndex(This,Index,pVal)	\
    ( (This)->lpVtbl -> ItemByIndex(This,Index,pVal) ) 

#define ICPContainerKeys_get_Count(This,pVal)	\
    ( (This)->lpVtbl -> get_Count(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICPContainerKeys_INTERFACE_DEFINED__ */


#ifndef __ICPContainerKey_INTERFACE_DEFINED__
#define __ICPContainerKey_INTERFACE_DEFINED__

/* interface ICPContainerKey */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ICPContainerKey;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("103D60B6-700F-469d-907C-97D3402649FE")
    ICPContainerKey : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ExpirationTime( 
            /* [retval][out] */ DATE *pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_IsExportable( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_HasCertificate( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Type( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Certificate( 
            /* [retval][out] */ VARIANT *pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICPContainerKeyVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICPContainerKey * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICPContainerKey * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICPContainerKey * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ICPContainerKey * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ICPContainerKey * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ICPContainerKey * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICPContainerKey * This,
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
        
        DECLSPEC_XFGVIRT(ICPContainerKey, get_ExpirationTime)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ExpirationTime )( 
            ICPContainerKey * This,
            /* [retval][out] */ DATE *pVal);
        
        DECLSPEC_XFGVIRT(ICPContainerKey, get_IsExportable)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_IsExportable )( 
            ICPContainerKey * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        DECLSPEC_XFGVIRT(ICPContainerKey, get_HasCertificate)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_HasCertificate )( 
            ICPContainerKey * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        DECLSPEC_XFGVIRT(ICPContainerKey, get_Type)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            ICPContainerKey * This,
            /* [retval][out] */ LONG *pVal);
        
        DECLSPEC_XFGVIRT(ICPContainerKey, get_Certificate)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Certificate )( 
            ICPContainerKey * This,
            /* [retval][out] */ VARIANT *pVal);
        
        END_INTERFACE
    } ICPContainerKeyVtbl;

    interface ICPContainerKey
    {
        CONST_VTBL struct ICPContainerKeyVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICPContainerKey_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICPContainerKey_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICPContainerKey_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICPContainerKey_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ICPContainerKey_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ICPContainerKey_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ICPContainerKey_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ICPContainerKey_get_ExpirationTime(This,pVal)	\
    ( (This)->lpVtbl -> get_ExpirationTime(This,pVal) ) 

#define ICPContainerKey_get_IsExportable(This,pVal)	\
    ( (This)->lpVtbl -> get_IsExportable(This,pVal) ) 

#define ICPContainerKey_get_HasCertificate(This,pVal)	\
    ( (This)->lpVtbl -> get_HasCertificate(This,pVal) ) 

#define ICPContainerKey_get_Type(This,pVal)	\
    ( (This)->lpVtbl -> get_Type(This,pVal) ) 

#define ICPContainerKey_get_Certificate(This,pVal)	\
    ( (This)->lpVtbl -> get_Certificate(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICPContainerKey_INTERFACE_DEFINED__ */


#ifndef __ICPContainerKey2_INTERFACE_DEFINED__
#define __ICPContainerKey2_INTERFACE_DEFINED__

/* interface ICPContainerKey2 */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ICPContainerKey2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("103D60B6-700F-469d-907C-97D3402649FF")
    ICPContainerKey2 : public ICPContainerKey
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_PublicKey( 
            /* [retval][out] */ /* external definition not present */ IPublicKey **pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_KP_FP( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICPContainerKey2Vtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICPContainerKey2 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICPContainerKey2 * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICPContainerKey2 * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ICPContainerKey2 * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ICPContainerKey2 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ICPContainerKey2 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICPContainerKey2 * This,
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
        
        DECLSPEC_XFGVIRT(ICPContainerKey, get_ExpirationTime)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ExpirationTime )( 
            ICPContainerKey2 * This,
            /* [retval][out] */ DATE *pVal);
        
        DECLSPEC_XFGVIRT(ICPContainerKey, get_IsExportable)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_IsExportable )( 
            ICPContainerKey2 * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        DECLSPEC_XFGVIRT(ICPContainerKey, get_HasCertificate)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_HasCertificate )( 
            ICPContainerKey2 * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        DECLSPEC_XFGVIRT(ICPContainerKey, get_Type)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            ICPContainerKey2 * This,
            /* [retval][out] */ LONG *pVal);
        
        DECLSPEC_XFGVIRT(ICPContainerKey, get_Certificate)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Certificate )( 
            ICPContainerKey2 * This,
            /* [retval][out] */ VARIANT *pVal);
        
        DECLSPEC_XFGVIRT(ICPContainerKey2, get_PublicKey)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PublicKey )( 
            ICPContainerKey2 * This,
            /* [retval][out] */ /* external definition not present */ IPublicKey **pVal);
        
        DECLSPEC_XFGVIRT(ICPContainerKey2, get_KP_FP)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_KP_FP )( 
            ICPContainerKey2 * This,
            /* [retval][out] */ BSTR *pVal);
        
        END_INTERFACE
    } ICPContainerKey2Vtbl;

    interface ICPContainerKey2
    {
        CONST_VTBL struct ICPContainerKey2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICPContainerKey2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICPContainerKey2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICPContainerKey2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICPContainerKey2_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ICPContainerKey2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ICPContainerKey2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ICPContainerKey2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ICPContainerKey2_get_ExpirationTime(This,pVal)	\
    ( (This)->lpVtbl -> get_ExpirationTime(This,pVal) ) 

#define ICPContainerKey2_get_IsExportable(This,pVal)	\
    ( (This)->lpVtbl -> get_IsExportable(This,pVal) ) 

#define ICPContainerKey2_get_HasCertificate(This,pVal)	\
    ( (This)->lpVtbl -> get_HasCertificate(This,pVal) ) 

#define ICPContainerKey2_get_Type(This,pVal)	\
    ( (This)->lpVtbl -> get_Type(This,pVal) ) 

#define ICPContainerKey2_get_Certificate(This,pVal)	\
    ( (This)->lpVtbl -> get_Certificate(This,pVal) ) 


#define ICPContainerKey2_get_PublicKey(This,pVal)	\
    ( (This)->lpVtbl -> get_PublicKey(This,pVal) ) 

#define ICPContainerKey2_get_KP_FP(This,pVal)	\
    ( (This)->lpVtbl -> get_KP_FP(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICPContainerKey2_INTERFACE_DEFINED__ */


#ifndef __ICPReaders_INTERFACE_DEFINED__
#define __ICPReaders_INTERFACE_DEFINED__

/* interface ICPReaders */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ICPReaders;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("103D60B6-700F-469d-907C-97D3402648E5")
    ICPReaders : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ItemByIndex( 
            /* [in] */ long Index,
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ LONG *pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICPReadersVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICPReaders * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICPReaders * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICPReaders * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ICPReaders * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ICPReaders * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ICPReaders * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICPReaders * This,
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
        
        DECLSPEC_XFGVIRT(ICPReaders, ItemByIndex)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ItemByIndex )( 
            ICPReaders * This,
            /* [in] */ long Index,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(ICPReaders, get_Count)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            ICPReaders * This,
            /* [retval][out] */ LONG *pVal);
        
        END_INTERFACE
    } ICPReadersVtbl;

    interface ICPReaders
    {
        CONST_VTBL struct ICPReadersVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICPReaders_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICPReaders_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICPReaders_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICPReaders_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ICPReaders_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ICPReaders_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ICPReaders_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ICPReaders_ItemByIndex(This,Index,pVal)	\
    ( (This)->lpVtbl -> ItemByIndex(This,Index,pVal) ) 

#define ICPReaders_get_Count(This,pVal)	\
    ( (This)->lpVtbl -> get_Count(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICPReaders_INTERFACE_DEFINED__ */


#ifndef __ICPErrorStatuses_INTERFACE_DEFINED__
#define __ICPErrorStatuses_INTERFACE_DEFINED__

/* interface ICPErrorStatuses */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ICPErrorStatuses;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("103D60B6-700F-469d-907C-97D3402648E6")
    ICPErrorStatuses : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ long Index,
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ LONG *pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICPErrorStatusesVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICPErrorStatuses * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICPErrorStatuses * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICPErrorStatuses * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ICPErrorStatuses * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ICPErrorStatuses * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ICPErrorStatuses * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICPErrorStatuses * This,
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
        
        DECLSPEC_XFGVIRT(ICPErrorStatuses, get_Item)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            ICPErrorStatuses * This,
            /* [in] */ long Index,
            /* [retval][out] */ long *pVal);
        
        DECLSPEC_XFGVIRT(ICPErrorStatuses, get_Count)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            ICPErrorStatuses * This,
            /* [retval][out] */ LONG *pVal);
        
        END_INTERFACE
    } ICPErrorStatusesVtbl;

    interface ICPErrorStatuses
    {
        CONST_VTBL struct ICPErrorStatusesVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICPErrorStatuses_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICPErrorStatuses_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICPErrorStatuses_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICPErrorStatuses_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ICPErrorStatuses_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ICPErrorStatuses_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ICPErrorStatuses_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ICPErrorStatuses_get_Item(This,Index,pVal)	\
    ( (This)->lpVtbl -> get_Item(This,Index,pVal) ) 

#define ICPErrorStatuses_get_Count(This,pVal)	\
    ( (This)->lpVtbl -> get_Count(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICPErrorStatuses_INTERFACE_DEFINED__ */


#ifndef __ICPCRL_INTERFACE_DEFINED__
#define __ICPCRL_INTERFACE_DEFINED__

/* interface ICPCRL */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ICPCRL;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("103D60B6-700F-469d-907B-97D3402648E4")
    ICPCRL : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Import( 
            /* [in] */ BSTR EncodedCRL) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_IssuerName( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ThisUpdate( 
            /* [retval][out] */ DATE *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_NextUpdate( 
            /* [retval][out] */ DATE *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Thumbprint( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Export( 
            /* [in] */ CAPICOM_ENCODING_TYPE EncodingType,
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_AuthKeyID( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICPCRLVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICPCRL * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICPCRL * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICPCRL * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ICPCRL * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ICPCRL * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ICPCRL * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICPCRL * This,
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
        
        DECLSPEC_XFGVIRT(ICPCRL, Import)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Import )( 
            ICPCRL * This,
            /* [in] */ BSTR EncodedCRL);
        
        DECLSPEC_XFGVIRT(ICPCRL, get_IssuerName)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IssuerName )( 
            ICPCRL * This,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(ICPCRL, get_ThisUpdate)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ThisUpdate )( 
            ICPCRL * This,
            /* [retval][out] */ DATE *pVal);
        
        DECLSPEC_XFGVIRT(ICPCRL, get_NextUpdate)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_NextUpdate )( 
            ICPCRL * This,
            /* [retval][out] */ DATE *pVal);
        
        DECLSPEC_XFGVIRT(ICPCRL, get_Thumbprint)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Thumbprint )( 
            ICPCRL * This,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(ICPCRL, Export)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Export )( 
            ICPCRL * This,
            /* [in] */ CAPICOM_ENCODING_TYPE EncodingType,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(ICPCRL, get_AuthKeyID)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AuthKeyID )( 
            ICPCRL * This,
            /* [retval][out] */ BSTR *pVal);
        
        END_INTERFACE
    } ICPCRLVtbl;

    interface ICPCRL
    {
        CONST_VTBL struct ICPCRLVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICPCRL_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICPCRL_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICPCRL_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICPCRL_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ICPCRL_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ICPCRL_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ICPCRL_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ICPCRL_Import(This,EncodedCRL)	\
    ( (This)->lpVtbl -> Import(This,EncodedCRL) ) 

#define ICPCRL_get_IssuerName(This,pVal)	\
    ( (This)->lpVtbl -> get_IssuerName(This,pVal) ) 

#define ICPCRL_get_ThisUpdate(This,pVal)	\
    ( (This)->lpVtbl -> get_ThisUpdate(This,pVal) ) 

#define ICPCRL_get_NextUpdate(This,pVal)	\
    ( (This)->lpVtbl -> get_NextUpdate(This,pVal) ) 

#define ICPCRL_get_Thumbprint(This,pVal)	\
    ( (This)->lpVtbl -> get_Thumbprint(This,pVal) ) 

#define ICPCRL_Export(This,EncodingType,pVal)	\
    ( (This)->lpVtbl -> Export(This,EncodingType,pVal) ) 

#define ICPCRL_get_AuthKeyID(This,pVal)	\
    ( (This)->lpVtbl -> get_AuthKeyID(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICPCRL_INTERFACE_DEFINED__ */


#ifndef __IAbout_INTERFACE_DEFINED__
#define __IAbout_INTERFACE_DEFINED__

/* interface IAbout */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IAbout;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("EABAEE0A-CF10-4a80-91BB-DF44E4475F1B")
    IAbout : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Version( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_MajorVersion( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_MinorVersion( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_BuildVersion( 
            /* [retval][out] */ LONG *pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAboutVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAbout * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAbout * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAbout * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAbout * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAbout * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAbout * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAbout * This,
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
        
        DECLSPEC_XFGVIRT(IAbout, get_Version)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Version )( 
            IAbout * This,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(IAbout, get_MajorVersion)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MajorVersion )( 
            IAbout * This,
            /* [retval][out] */ LONG *pVal);
        
        DECLSPEC_XFGVIRT(IAbout, get_MinorVersion)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MinorVersion )( 
            IAbout * This,
            /* [retval][out] */ LONG *pVal);
        
        DECLSPEC_XFGVIRT(IAbout, get_BuildVersion)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BuildVersion )( 
            IAbout * This,
            /* [retval][out] */ LONG *pVal);
        
        END_INTERFACE
    } IAboutVtbl;

    interface IAbout
    {
        CONST_VTBL struct IAboutVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAbout_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAbout_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAbout_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAbout_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IAbout_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IAbout_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IAbout_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IAbout_get_Version(This,pVal)	\
    ( (This)->lpVtbl -> get_Version(This,pVal) ) 

#define IAbout_get_MajorVersion(This,pVal)	\
    ( (This)->lpVtbl -> get_MajorVersion(This,pVal) ) 

#define IAbout_get_MinorVersion(This,pVal)	\
    ( (This)->lpVtbl -> get_MinorVersion(This,pVal) ) 

#define IAbout_get_BuildVersion(This,pVal)	\
    ( (This)->lpVtbl -> get_BuildVersion(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAbout_INTERFACE_DEFINED__ */


#ifndef __IVersion_INTERFACE_DEFINED__
#define __IVersion_INTERFACE_DEFINED__

/* interface IVersion */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IVersion;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("103D60B6-700F-469d-907A-97D3402648E3")
    IVersion : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_toStringDefault( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE toString( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_MajorVersion( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_MinorVersion( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_BuildVersion( 
            /* [retval][out] */ LONG *pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVersionVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVersion * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVersion * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVersion * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IVersion * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IVersion * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IVersion * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IVersion * This,
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
        
        DECLSPEC_XFGVIRT(IVersion, get_toStringDefault)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_toStringDefault )( 
            IVersion * This,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(IVersion, toString)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *toString )( 
            IVersion * This,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(IVersion, get_MajorVersion)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MajorVersion )( 
            IVersion * This,
            /* [retval][out] */ LONG *pVal);
        
        DECLSPEC_XFGVIRT(IVersion, get_MinorVersion)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MinorVersion )( 
            IVersion * This,
            /* [retval][out] */ LONG *pVal);
        
        DECLSPEC_XFGVIRT(IVersion, get_BuildVersion)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BuildVersion )( 
            IVersion * This,
            /* [retval][out] */ LONG *pVal);
        
        END_INTERFACE
    } IVersionVtbl;

    interface IVersion
    {
        CONST_VTBL struct IVersionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVersion_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVersion_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVersion_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVersion_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IVersion_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IVersion_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IVersion_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IVersion_get_toStringDefault(This,pVal)	\
    ( (This)->lpVtbl -> get_toStringDefault(This,pVal) ) 

#define IVersion_toString(This,pVal)	\
    ( (This)->lpVtbl -> toString(This,pVal) ) 

#define IVersion_get_MajorVersion(This,pVal)	\
    ( (This)->lpVtbl -> get_MajorVersion(This,pVal) ) 

#define IVersion_get_MinorVersion(This,pVal)	\
    ( (This)->lpVtbl -> get_MinorVersion(This,pVal) ) 

#define IVersion_get_BuildVersion(This,pVal)	\
    ( (This)->lpVtbl -> get_BuildVersion(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVersion_INTERFACE_DEFINED__ */


#ifndef __IAbout2_INTERFACE_DEFINED__
#define __IAbout2_INTERFACE_DEFINED__

/* interface IAbout2 */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IAbout2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("BA57172B-6445-4e5c-A63B-5DF16CA23650")
    IAbout2 : public IAbout
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ProviderVersion( 
            /* [defaultvalue][in] */ BSTR ProviderName,
            /* [defaultvalue][in] */ LONG ProviderType,
            /* [retval][out] */ BSTR *pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAbout2Vtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAbout2 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAbout2 * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAbout2 * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAbout2 * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAbout2 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAbout2 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAbout2 * This,
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
        
        DECLSPEC_XFGVIRT(IAbout, get_Version)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Version )( 
            IAbout2 * This,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(IAbout, get_MajorVersion)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MajorVersion )( 
            IAbout2 * This,
            /* [retval][out] */ LONG *pVal);
        
        DECLSPEC_XFGVIRT(IAbout, get_MinorVersion)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MinorVersion )( 
            IAbout2 * This,
            /* [retval][out] */ LONG *pVal);
        
        DECLSPEC_XFGVIRT(IAbout, get_BuildVersion)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BuildVersion )( 
            IAbout2 * This,
            /* [retval][out] */ LONG *pVal);
        
        DECLSPEC_XFGVIRT(IAbout2, ProviderVersion)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ProviderVersion )( 
            IAbout2 * This,
            /* [defaultvalue][in] */ BSTR ProviderName,
            /* [defaultvalue][in] */ LONG ProviderType,
            /* [retval][out] */ BSTR *pVal);
        
        END_INTERFACE
    } IAbout2Vtbl;

    interface IAbout2
    {
        CONST_VTBL struct IAbout2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAbout2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAbout2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAbout2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAbout2_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IAbout2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IAbout2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IAbout2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IAbout2_get_Version(This,pVal)	\
    ( (This)->lpVtbl -> get_Version(This,pVal) ) 

#define IAbout2_get_MajorVersion(This,pVal)	\
    ( (This)->lpVtbl -> get_MajorVersion(This,pVal) ) 

#define IAbout2_get_MinorVersion(This,pVal)	\
    ( (This)->lpVtbl -> get_MinorVersion(This,pVal) ) 

#define IAbout2_get_BuildVersion(This,pVal)	\
    ( (This)->lpVtbl -> get_BuildVersion(This,pVal) ) 


#define IAbout2_ProviderVersion(This,ProviderName,ProviderType,pVal)	\
    ( (This)->lpVtbl -> ProviderVersion(This,ProviderName,ProviderType,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAbout2_INTERFACE_DEFINED__ */


#ifndef __IAbout3_INTERFACE_DEFINED__
#define __IAbout3_INTERFACE_DEFINED__

/* interface IAbout3 */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IAbout3;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("279D1A07-BF79-496E-9B72-9FD1164498BB")
    IAbout3 : public IAbout2
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CSPVersion( 
            /* [defaultvalue][in] */ BSTR ProviderName,
            /* [defaultvalue][in] */ LONG ProviderType,
            /* [retval][out] */ IVersion **pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_PluginVersion( 
            /* [retval][out] */ IVersion **pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAbout3Vtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAbout3 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAbout3 * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAbout3 * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAbout3 * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAbout3 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAbout3 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAbout3 * This,
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
        
        DECLSPEC_XFGVIRT(IAbout, get_Version)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Version )( 
            IAbout3 * This,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(IAbout, get_MajorVersion)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MajorVersion )( 
            IAbout3 * This,
            /* [retval][out] */ LONG *pVal);
        
        DECLSPEC_XFGVIRT(IAbout, get_MinorVersion)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MinorVersion )( 
            IAbout3 * This,
            /* [retval][out] */ LONG *pVal);
        
        DECLSPEC_XFGVIRT(IAbout, get_BuildVersion)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BuildVersion )( 
            IAbout3 * This,
            /* [retval][out] */ LONG *pVal);
        
        DECLSPEC_XFGVIRT(IAbout2, ProviderVersion)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ProviderVersion )( 
            IAbout3 * This,
            /* [defaultvalue][in] */ BSTR ProviderName,
            /* [defaultvalue][in] */ LONG ProviderType,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(IAbout3, CSPVersion)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CSPVersion )( 
            IAbout3 * This,
            /* [defaultvalue][in] */ BSTR ProviderName,
            /* [defaultvalue][in] */ LONG ProviderType,
            /* [retval][out] */ IVersion **pVal);
        
        DECLSPEC_XFGVIRT(IAbout3, get_PluginVersion)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PluginVersion )( 
            IAbout3 * This,
            /* [retval][out] */ IVersion **pVal);
        
        END_INTERFACE
    } IAbout3Vtbl;

    interface IAbout3
    {
        CONST_VTBL struct IAbout3Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAbout3_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAbout3_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAbout3_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAbout3_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IAbout3_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IAbout3_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IAbout3_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IAbout3_get_Version(This,pVal)	\
    ( (This)->lpVtbl -> get_Version(This,pVal) ) 

#define IAbout3_get_MajorVersion(This,pVal)	\
    ( (This)->lpVtbl -> get_MajorVersion(This,pVal) ) 

#define IAbout3_get_MinorVersion(This,pVal)	\
    ( (This)->lpVtbl -> get_MinorVersion(This,pVal) ) 

#define IAbout3_get_BuildVersion(This,pVal)	\
    ( (This)->lpVtbl -> get_BuildVersion(This,pVal) ) 


#define IAbout3_ProviderVersion(This,ProviderName,ProviderType,pVal)	\
    ( (This)->lpVtbl -> ProviderVersion(This,ProviderName,ProviderType,pVal) ) 


#define IAbout3_CSPVersion(This,ProviderName,ProviderType,pVal)	\
    ( (This)->lpVtbl -> CSPVersion(This,ProviderName,ProviderType,pVal) ) 

#define IAbout3_get_PluginVersion(This,pVal)	\
    ( (This)->lpVtbl -> get_PluginVersion(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAbout3_INTERFACE_DEFINED__ */


#ifndef __IAbout4_INTERFACE_DEFINED__
#define __IAbout4_INTERFACE_DEFINED__

/* interface IAbout4 */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IAbout4;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("2FCAA7DB-8C97-4F2E-9BF4-DD586BAF6DE1")
    IAbout4 : public IAbout3
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CSPName( 
            /* [defaultvalue][in] */ LONG ProviderType,
            /* [retval][out] */ BSTR *pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAbout4Vtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAbout4 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAbout4 * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAbout4 * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAbout4 * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAbout4 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAbout4 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAbout4 * This,
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
        
        DECLSPEC_XFGVIRT(IAbout, get_Version)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Version )( 
            IAbout4 * This,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(IAbout, get_MajorVersion)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MajorVersion )( 
            IAbout4 * This,
            /* [retval][out] */ LONG *pVal);
        
        DECLSPEC_XFGVIRT(IAbout, get_MinorVersion)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MinorVersion )( 
            IAbout4 * This,
            /* [retval][out] */ LONG *pVal);
        
        DECLSPEC_XFGVIRT(IAbout, get_BuildVersion)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BuildVersion )( 
            IAbout4 * This,
            /* [retval][out] */ LONG *pVal);
        
        DECLSPEC_XFGVIRT(IAbout2, ProviderVersion)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ProviderVersion )( 
            IAbout4 * This,
            /* [defaultvalue][in] */ BSTR ProviderName,
            /* [defaultvalue][in] */ LONG ProviderType,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(IAbout3, CSPVersion)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CSPVersion )( 
            IAbout4 * This,
            /* [defaultvalue][in] */ BSTR ProviderName,
            /* [defaultvalue][in] */ LONG ProviderType,
            /* [retval][out] */ IVersion **pVal);
        
        DECLSPEC_XFGVIRT(IAbout3, get_PluginVersion)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PluginVersion )( 
            IAbout4 * This,
            /* [retval][out] */ IVersion **pVal);
        
        DECLSPEC_XFGVIRT(IAbout4, CSPName)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CSPName )( 
            IAbout4 * This,
            /* [defaultvalue][in] */ LONG ProviderType,
            /* [retval][out] */ BSTR *pVal);
        
        END_INTERFACE
    } IAbout4Vtbl;

    interface IAbout4
    {
        CONST_VTBL struct IAbout4Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAbout4_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAbout4_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAbout4_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAbout4_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IAbout4_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IAbout4_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IAbout4_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IAbout4_get_Version(This,pVal)	\
    ( (This)->lpVtbl -> get_Version(This,pVal) ) 

#define IAbout4_get_MajorVersion(This,pVal)	\
    ( (This)->lpVtbl -> get_MajorVersion(This,pVal) ) 

#define IAbout4_get_MinorVersion(This,pVal)	\
    ( (This)->lpVtbl -> get_MinorVersion(This,pVal) ) 

#define IAbout4_get_BuildVersion(This,pVal)	\
    ( (This)->lpVtbl -> get_BuildVersion(This,pVal) ) 


#define IAbout4_ProviderVersion(This,ProviderName,ProviderType,pVal)	\
    ( (This)->lpVtbl -> ProviderVersion(This,ProviderName,ProviderType,pVal) ) 


#define IAbout4_CSPVersion(This,ProviderName,ProviderType,pVal)	\
    ( (This)->lpVtbl -> CSPVersion(This,ProviderName,ProviderType,pVal) ) 

#define IAbout4_get_PluginVersion(This,pVal)	\
    ( (This)->lpVtbl -> get_PluginVersion(This,pVal) ) 


#define IAbout4_CSPName(This,ProviderType,pVal)	\
    ( (This)->lpVtbl -> CSPName(This,ProviderType,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAbout4_INTERFACE_DEFINED__ */


#ifndef __IAbout5_INTERFACE_DEFINED__
#define __IAbout5_INTERFACE_DEFINED__

/* interface IAbout5 */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IAbout5;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("9CC2B69C-ED6E-479B-95D2-5D1117C8EB3A")
    IAbout5 : public IAbout4
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ReaderFilter( 
            /* [in] */ LONG EnabledTypes,
            /* [in] */ LONG EnabledOperations,
            /* [defaultvalue][in] */ BSTR strFilterRegexp = (BSTR)L"") = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE MediaFilter( 
            /* [in] */ LONG MediaType) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAbout5Vtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAbout5 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAbout5 * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAbout5 * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAbout5 * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAbout5 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAbout5 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAbout5 * This,
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
        
        DECLSPEC_XFGVIRT(IAbout, get_Version)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Version )( 
            IAbout5 * This,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(IAbout, get_MajorVersion)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MajorVersion )( 
            IAbout5 * This,
            /* [retval][out] */ LONG *pVal);
        
        DECLSPEC_XFGVIRT(IAbout, get_MinorVersion)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MinorVersion )( 
            IAbout5 * This,
            /* [retval][out] */ LONG *pVal);
        
        DECLSPEC_XFGVIRT(IAbout, get_BuildVersion)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BuildVersion )( 
            IAbout5 * This,
            /* [retval][out] */ LONG *pVal);
        
        DECLSPEC_XFGVIRT(IAbout2, ProviderVersion)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ProviderVersion )( 
            IAbout5 * This,
            /* [defaultvalue][in] */ BSTR ProviderName,
            /* [defaultvalue][in] */ LONG ProviderType,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(IAbout3, CSPVersion)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CSPVersion )( 
            IAbout5 * This,
            /* [defaultvalue][in] */ BSTR ProviderName,
            /* [defaultvalue][in] */ LONG ProviderType,
            /* [retval][out] */ IVersion **pVal);
        
        DECLSPEC_XFGVIRT(IAbout3, get_PluginVersion)
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PluginVersion )( 
            IAbout5 * This,
            /* [retval][out] */ IVersion **pVal);
        
        DECLSPEC_XFGVIRT(IAbout4, CSPName)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CSPName )( 
            IAbout5 * This,
            /* [defaultvalue][in] */ LONG ProviderType,
            /* [retval][out] */ BSTR *pVal);
        
        DECLSPEC_XFGVIRT(IAbout5, ReaderFilter)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ReaderFilter )( 
            IAbout5 * This,
            /* [in] */ LONG EnabledTypes,
            /* [in] */ LONG EnabledOperations,
            /* [defaultvalue][in] */ BSTR strFilterRegexp);
        
        DECLSPEC_XFGVIRT(IAbout5, MediaFilter)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *MediaFilter )( 
            IAbout5 * This,
            /* [in] */ LONG MediaType);
        
        END_INTERFACE
    } IAbout5Vtbl;

    interface IAbout5
    {
        CONST_VTBL struct IAbout5Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAbout5_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAbout5_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAbout5_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAbout5_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IAbout5_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IAbout5_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IAbout5_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IAbout5_get_Version(This,pVal)	\
    ( (This)->lpVtbl -> get_Version(This,pVal) ) 

#define IAbout5_get_MajorVersion(This,pVal)	\
    ( (This)->lpVtbl -> get_MajorVersion(This,pVal) ) 

#define IAbout5_get_MinorVersion(This,pVal)	\
    ( (This)->lpVtbl -> get_MinorVersion(This,pVal) ) 

#define IAbout5_get_BuildVersion(This,pVal)	\
    ( (This)->lpVtbl -> get_BuildVersion(This,pVal) ) 


#define IAbout5_ProviderVersion(This,ProviderName,ProviderType,pVal)	\
    ( (This)->lpVtbl -> ProviderVersion(This,ProviderName,ProviderType,pVal) ) 


#define IAbout5_CSPVersion(This,ProviderName,ProviderType,pVal)	\
    ( (This)->lpVtbl -> CSPVersion(This,ProviderName,ProviderType,pVal) ) 

#define IAbout5_get_PluginVersion(This,pVal)	\
    ( (This)->lpVtbl -> get_PluginVersion(This,pVal) ) 


#define IAbout5_CSPName(This,ProviderType,pVal)	\
    ( (This)->lpVtbl -> CSPName(This,ProviderType,pVal) ) 


#define IAbout5_ReaderFilter(This,EnabledTypes,EnabledOperations,strFilterRegexp)	\
    ( (This)->lpVtbl -> ReaderFilter(This,EnabledTypes,EnabledOperations,strFilterRegexp) ) 

#define IAbout5_MediaFilter(This,MediaType)	\
    ( (This)->lpVtbl -> MediaFilter(This,MediaType) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAbout5_INTERFACE_DEFINED__ */


#ifndef __IMyDss_INTERFACE_DEFINED__
#define __IMyDss_INTERFACE_DEFINED__

/* interface IMyDss */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IMyDss;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("AD64F743-5107-4D3B-99AC-3A8DEA6EDD78")
    IMyDss : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ShowDocGetConfirm( 
            /* [in] */ BSTR strDSSId,
            /* [in] */ BSTR strUserId,
            /* [in] */ BSTR strTransactionId,
            /* [in] */ BSTR strMessage,
            /* [in] */ BSTR strPdf,
            /* [retval][out] */ BSTR *pstrResult) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ImportEncryptedKey( 
            /* [in] */ BSTR strDSSId,
            /* [in] */ BSTR strKeyDisplayName,
            /* [in] */ BSTR strUserId,
            /* [in] */ BSTR strEncryptedKey,
            /* [in] */ LONG dwFlags,
            /* [in] */ BSTR strActivationCode) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMyDssVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMyDss * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMyDss * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMyDss * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMyDss * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMyDss * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMyDss * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMyDss * This,
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
        
        DECLSPEC_XFGVIRT(IMyDss, ShowDocGetConfirm)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ShowDocGetConfirm )( 
            IMyDss * This,
            /* [in] */ BSTR strDSSId,
            /* [in] */ BSTR strUserId,
            /* [in] */ BSTR strTransactionId,
            /* [in] */ BSTR strMessage,
            /* [in] */ BSTR strPdf,
            /* [retval][out] */ BSTR *pstrResult);
        
        DECLSPEC_XFGVIRT(IMyDss, ImportEncryptedKey)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ImportEncryptedKey )( 
            IMyDss * This,
            /* [in] */ BSTR strDSSId,
            /* [in] */ BSTR strKeyDisplayName,
            /* [in] */ BSTR strUserId,
            /* [in] */ BSTR strEncryptedKey,
            /* [in] */ LONG dwFlags,
            /* [in] */ BSTR strActivationCode);
        
        END_INTERFACE
    } IMyDssVtbl;

    interface IMyDss
    {
        CONST_VTBL struct IMyDssVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMyDss_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMyDss_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMyDss_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMyDss_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMyDss_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMyDss_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMyDss_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IMyDss_ShowDocGetConfirm(This,strDSSId,strUserId,strTransactionId,strMessage,strPdf,pstrResult)	\
    ( (This)->lpVtbl -> ShowDocGetConfirm(This,strDSSId,strUserId,strTransactionId,strMessage,strPdf,pstrResult) ) 

#define IMyDss_ImportEncryptedKey(This,strDSSId,strKeyDisplayName,strUserId,strEncryptedKey,dwFlags,strActivationCode)	\
    ( (This)->lpVtbl -> ImportEncryptedKey(This,strDSSId,strKeyDisplayName,strUserId,strEncryptedKey,dwFlags,strActivationCode) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMyDss_INTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_CPAttribute;

#ifdef __cplusplus

class DECLSPEC_UUID("FE98A77F-7D50-4210-AED4-5B2AE2EDAEF1")
CPAttribute;
#endif

EXTERN_C const CLSID CLSID_CPAttributes;

#ifdef __cplusplus

class DECLSPEC_UUID("A3C2F1D9-28B8-4E44-ABF0-2301981195FC")
CPAttributes;
#endif

EXTERN_C const CLSID CLSID_CPSigner;

#ifdef __cplusplus

class DECLSPEC_UUID("94EBF679-1DED-48B9-9FD2-00A3949E0905")
CPSigner;
#endif

EXTERN_C const CLSID CLSID_CPSigners;

#ifdef __cplusplus

class DECLSPEC_UUID("5881EDE0-0497-4E69-AAD2-4FA2AF6401BB")
CPSigners;
#endif

EXTERN_C const CLSID CLSID_CPBlobs;

#ifdef __cplusplus

class DECLSPEC_UUID("A9FAA9E1-4788-4707-8F35-456061F1B0E1")
CPBlobs;
#endif

EXTERN_C const CLSID CLSID_SignatureStatus;

#ifdef __cplusplus

class DECLSPEC_UUID("68219E48-F0C4-424a-91C3-E773C5EC6CAE")
SignatureStatus;
#endif

EXTERN_C const CLSID CLSID_CPLicense;

#ifdef __cplusplus

class DECLSPEC_UUID("DE50048F-3B39-4237-B783-CAD4D641993F")
CPLicense;
#endif

EXTERN_C const CLSID CLSID_CPCRL;

#ifdef __cplusplus

class DECLSPEC_UUID("DE50048F-3B39-4237-B784-CAD4D6419940")
CPCRL;
#endif

EXTERN_C const CLSID CLSID_CPReaders;

#ifdef __cplusplus

class DECLSPEC_UUID("DE50048F-3B39-4237-B785-CAD4D6419941")
CPReaders;
#endif

EXTERN_C const CLSID CLSID_CPErrorStatuses;

#ifdef __cplusplus

class DECLSPEC_UUID("DE50048F-3B39-4237-B785-CAD4D641994C")
CPErrorStatuses;
#endif

EXTERN_C const CLSID CLSID_CadesTools;

#ifdef __cplusplus

class DECLSPEC_UUID("DE50048F-3B39-4237-B784-CAD4D6419942")
CadesTools;
#endif

EXTERN_C const CLSID CLSID_EnrollX509ExtensionSubjectSignTool;

#ifdef __cplusplus

class DECLSPEC_UUID("DE50048F-3B39-4237-B784-CAD4D6419943")
EnrollX509ExtensionSubjectSignTool;
#endif

EXTERN_C const CLSID CLSID_EnrollX509NameValuePair;

#ifdef __cplusplus

class DECLSPEC_UUID("DE50048F-3B39-4237-B784-CAD4D6419944")
EnrollX509NameValuePair;
#endif

EXTERN_C const CLSID CLSID_EnrollX509NameValuePairs;

#ifdef __cplusplus

class DECLSPEC_UUID("DE50048F-3B39-4237-B784-CAD4D6419945")
EnrollX509NameValuePairs;
#endif

EXTERN_C const CLSID CLSID_EnrollReaderMode;

#ifdef __cplusplus

class DECLSPEC_UUID("DE50048F-3B39-4237-B784-CAD4D6419946")
EnrollReaderMode;
#endif

EXTERN_C const CLSID CLSID_EnrollReaderModes;

#ifdef __cplusplus

class DECLSPEC_UUID("DE50048F-3B39-4237-B784-CAD4D6419947")
EnrollReaderModes;
#endif

EXTERN_C const CLSID CLSID_CPContainers;

#ifdef __cplusplus

class DECLSPEC_UUID("DE50048F-3B39-4237-B784-CAD4D6419A00")
CPContainers;
#endif

EXTERN_C const CLSID CLSID_CPContainer;

#ifdef __cplusplus

class DECLSPEC_UUID("DE50048F-3B39-4237-B784-CAD4D6419A01")
CPContainer;
#endif

EXTERN_C const CLSID CLSID_CPContainerKeys;

#ifdef __cplusplus

class DECLSPEC_UUID("DE50048F-3B39-4237-B784-CAD4D6419A02")
CPContainerKeys;
#endif

EXTERN_C const CLSID CLSID_CPContainerKey;

#ifdef __cplusplus

class DECLSPEC_UUID("DE50048F-3B39-4237-B784-CAD4D6419A03")
CPContainerKey;
#endif

EXTERN_C const CLSID CLSID_EnrollX509ExtensionIdentificationKind;

#ifdef __cplusplus

class DECLSPEC_UUID("DE50048F-3B39-4237-B784-CAD4D6419948")
EnrollX509ExtensionIdentificationKind;
#endif

EXTERN_C const CLSID CLSID_EnrollAlternativeName;

#ifdef __cplusplus

class DECLSPEC_UUID("DE50048F-3B39-4237-B784-CAD4D6419949")
EnrollAlternativeName;
#endif

EXTERN_C const CLSID CLSID_EnrollAlternativeNames;

#ifdef __cplusplus

class DECLSPEC_UUID("DE50048F-3B39-4237-B784-CAD4D641994A")
EnrollAlternativeNames;
#endif

EXTERN_C const CLSID CLSID_EnrollX509ExtensionAlternativeNames;

#ifdef __cplusplus

class DECLSPEC_UUID("DE50048F-3B39-4237-B784-CAD4D641994B")
EnrollX509ExtensionAlternativeNames;
#endif

EXTERN_C const CLSID CLSID_About;

#ifdef __cplusplus

class DECLSPEC_UUID("37B8E018-B072-42df-8B24-CF5C4500BC26")
About;
#endif

EXTERN_C const CLSID CLSID_Version;

#ifdef __cplusplus

class DECLSPEC_UUID("DE50048F-3B39-4237-B783-CAD4D641993E")
Version;
#endif

EXTERN_C const CLSID CLSID_CadesSignedData;

#ifdef __cplusplus

class DECLSPEC_UUID("1264A46A-FDB8-43a3-AEE3-00E1684C98E9")
CadesSignedData;
#endif

EXTERN_C const CLSID CLSID_SignedXML;

#ifdef __cplusplus

class DECLSPEC_UUID("040FFA18-B7D8-4209-92E5-98064AA2CD6B")
SignedXML;
#endif

EXTERN_C const CLSID CLSID_EnvelopedXML;

#ifdef __cplusplus

class DECLSPEC_UUID("3853E4DA-EE98-44E4-B221-1BBFE05BF2CF")
EnvelopedXML;
#endif

EXTERN_C const CLSID CLSID_CPEnvelopedData;

#ifdef __cplusplus

class DECLSPEC_UUID("DD8AB7EF-0420-4157-A2BD-31AECE1248AE")
CPEnvelopedData;
#endif

EXTERN_C const CLSID CLSID_CPHashedData;

#ifdef __cplusplus

class DECLSPEC_UUID("84C6A357-A6B3-48E3-BB1A-4DD841825374")
CPHashedData;
#endif

EXTERN_C const CLSID CLSID_RawSignature;

#ifdef __cplusplus

class DECLSPEC_UUID("35A95BE2-952D-4205-8168-417A4FE41724")
RawSignature;
#endif

EXTERN_C const CLSID CLSID_CPExtension;

#ifdef __cplusplus

class DECLSPEC_UUID("35A95BE2-952D-4205-8168-417A4FE41730")
CPExtension;
#endif

EXTERN_C const CLSID CLSID_CPExtensions;

#ifdef __cplusplus

class DECLSPEC_UUID("35A95BE2-952D-4205-8168-417A4FE41731")
CPExtensions;
#endif

EXTERN_C const CLSID CLSID_CPCertificate;

#ifdef __cplusplus

class DECLSPEC_UUID("BD9906FE-BDB0-4200-849F-F50A99FBD9D0")
CPCertificate;
#endif

EXTERN_C const CLSID CLSID_SymmetricAlgorithm;

#ifdef __cplusplus

class DECLSPEC_UUID("3C1166D7-6A8A-4D67-9C95-5F1AFCB4099F")
SymmetricAlgorithm;
#endif

EXTERN_C const CLSID CLSID_MyDss;

#ifdef __cplusplus

class DECLSPEC_UUID("5E5E25BA-B38D-49AA-864E-0F835B2A6651")
MyDss;
#endif

EXTERN_C const CLSID CLSID_CPPrivateKey;

#ifdef __cplusplus

class DECLSPEC_UUID("3C397532-2022-42e7-AF3B-18E0F98A1665")
CPPrivateKey;
#endif

EXTERN_C const CLSID CLSID_CPStore;

#ifdef __cplusplus

class DECLSPEC_UUID("7CBD72D9-76A3-4939-930C-52C4D6CA206B")
CPStore;
#endif

EXTERN_C const CLSID CLSID_EnrollObjectId;

#ifdef __cplusplus

class DECLSPEC_UUID("6C35C17F-F42E-4CB5-BE6B-3B41165464AD")
EnrollObjectId;
#endif

EXTERN_C const CLSID CLSID_EnrollObjectIds;

#ifdef __cplusplus

class DECLSPEC_UUID("76F48E6D-B6C9-41A1-9399-AC635D7E1AC9")
EnrollObjectIds;
#endif

EXTERN_C const CLSID CLSID_EnrollX500DistinguishedName;

#ifdef __cplusplus

class DECLSPEC_UUID("6AE95067-A75D-4283-8E0F-41D799D6CFA2")
EnrollX500DistinguishedName;
#endif

EXTERN_C const CLSID CLSID_EnrollX509PrivateKey;

#ifdef __cplusplus

class DECLSPEC_UUID("5BAC9FA4-D35E-48AA-A82C-34A5EAA55C5E")
EnrollX509PrivateKey;
#endif

EXTERN_C const CLSID CLSID_EnrollX509Extension;

#ifdef __cplusplus

class DECLSPEC_UUID("34AB3DE5-8953-4DF1-AA6B-0A6223BB43CF")
EnrollX509Extension;
#endif

EXTERN_C const CLSID CLSID_EnrollX509Extensions;

#ifdef __cplusplus

class DECLSPEC_UUID("E6AE4BB6-36F8-4512-945C-5508E0DB7EE4")
EnrollX509Extensions;
#endif

EXTERN_C const CLSID CLSID_EnrollCspAlgorithm;

#ifdef __cplusplus

class DECLSPEC_UUID("07D55D4D-37A4-45EB-BA6E-C86DBEF4EBF4")
EnrollCspAlgorithm;
#endif

EXTERN_C const CLSID CLSID_EnrollCspAlgorithms;

#ifdef __cplusplus

class DECLSPEC_UUID("33AFA2F4-D9F8-47A7-B817-DEA12223815E")
EnrollCspAlgorithms;
#endif

EXTERN_C const CLSID CLSID_EnrollCspInformation;

#ifdef __cplusplus

class DECLSPEC_UUID("FA3B709D-3BF9-4158-8E23-B50E802C6E27")
EnrollCspInformation;
#endif

EXTERN_C const CLSID CLSID_EnrollCspInformations;

#ifdef __cplusplus

class DECLSPEC_UUID("2AFDDBB2-4011-432A-BB74-5D4E2CCEF0C0")
EnrollCspInformations;
#endif

EXTERN_C const CLSID CLSID_EnrollCspStatus;

#ifdef __cplusplus

class DECLSPEC_UUID("F9951303-92F2-4010-8429-F598F03F735E")
EnrollCspStatus;
#endif

EXTERN_C const CLSID CLSID_EnrollCspStatuses;

#ifdef __cplusplus

class DECLSPEC_UUID("A27C315B-FB3E-48EB-9572-6929ED9A5D95")
EnrollCspStatuses;
#endif

EXTERN_C const CLSID CLSID_EnrollX509CertificateRequestPkcs10;

#ifdef __cplusplus

class DECLSPEC_UUID("03297942-1BED-486D-A8FC-D264C84107D5")
EnrollX509CertificateRequestPkcs10;
#endif

EXTERN_C const CLSID CLSID_EnrollX509Enrollment;

#ifdef __cplusplus

class DECLSPEC_UUID("D8F0218D-F889-4F93-8482-C3A40C98D67F")
EnrollX509Enrollment;
#endif

EXTERN_C const CLSID CLSID_EnrollX509ExtensionKeyUsage;

#ifdef __cplusplus

class DECLSPEC_UUID("CC9AFA30-3938-49EC-8097-10B65C7EA995")
EnrollX509ExtensionKeyUsage;
#endif

EXTERN_C const CLSID CLSID_EnrollX509ExtensionEnhancedKeyUsage;

#ifdef __cplusplus

class DECLSPEC_UUID("E51DBC75-DC3D-48D2-9E3C-A5B2C6A0DE01")
EnrollX509ExtensionEnhancedKeyUsage;
#endif

EXTERN_C const CLSID CLSID_EnrollPolicyQualifier;

#ifdef __cplusplus

class DECLSPEC_UUID("55B65478-E6E7-45CE-BA2F-9EF2214603A8")
EnrollPolicyQualifier;
#endif

EXTERN_C const CLSID CLSID_EnrollPolicyQualifiers;

#ifdef __cplusplus

class DECLSPEC_UUID("B82E1356-D3F5-40EF-B217-FBFBA0D38332")
EnrollPolicyQualifiers;
#endif

EXTERN_C const CLSID CLSID_EnrollCertificatePolicy;

#ifdef __cplusplus

class DECLSPEC_UUID("3CAA4007-9030-4A48-9B23-20329E4759BF")
EnrollCertificatePolicy;
#endif

EXTERN_C const CLSID CLSID_EnrollCertificatePolicies;

#ifdef __cplusplus

class DECLSPEC_UUID("A60F5586-6620-454F-B57D-C0BC608046CB")
EnrollCertificatePolicies;
#endif

EXTERN_C const CLSID CLSID_EnrollX509ExtensionCertificatePolicies;

#ifdef __cplusplus

class DECLSPEC_UUID("ACB27390-FBB4-4352-92A1-6979723A66E3")
EnrollX509ExtensionCertificatePolicies;
#endif

EXTERN_C const CLSID CLSID_EnrollX509ExtensionTemplate;

#ifdef __cplusplus

class DECLSPEC_UUID("0C39EE7A-E02D-4CDC-B096-817A5F90B219")
EnrollX509ExtensionTemplate;
#endif

EXTERN_C const CLSID CLSID_UECard;

#ifdef __cplusplus

class DECLSPEC_UUID("62AA1E69-FC04-44e4-B2DD-2F0246F26B79")
UECard;
#endif

EXTERN_C const CLSID CLSID_CardholderData;

#ifdef __cplusplus

class DECLSPEC_UUID("ED793308-C4E5-4b24-8367-22D3DD1E8855")
CardholderData;
#endif

EXTERN_C const CLSID CLSID_PersonalCardholderData;

#ifdef __cplusplus

class DECLSPEC_UUID("71B62DA9-5457-482f-BB02-39E0B53504AE")
PersonalCardholderData;
#endif

EXTERN_C const CLSID CLSID_IdentityCard;

#ifdef __cplusplus

class DECLSPEC_UUID("00C8B4F7-C45C-419b-A3FD-C698DBA3F935")
IdentityCard;
#endif

EXTERN_C const CLSID CLSID_OMSData;

#ifdef __cplusplus

class DECLSPEC_UUID("33C66838-83FC-4CDE-BE5F-326F3E90A99F")
OMSData;
#endif
#endif /* __CAdESCOM_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


