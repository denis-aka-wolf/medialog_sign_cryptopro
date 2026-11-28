

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0626 */
/* at Tue Jan 19 06:14:07 2038
 */
/* Compiler settings for pkivalidator.idl:
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

#ifndef __pkivalidator_h__
#define __pkivalidator_h__

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

#ifndef __IPrivateKeyUsageValidator_FWD_DEFINED__
#define __IPrivateKeyUsageValidator_FWD_DEFINED__
typedef interface IPrivateKeyUsageValidator IPrivateKeyUsageValidator;

#endif 	/* __IPrivateKeyUsageValidator_FWD_DEFINED__ */


#ifndef __PrivateKeyUsageValidator_FWD_DEFINED__
#define __PrivateKeyUsageValidator_FWD_DEFINED__

#ifdef __cplusplus
typedef class PrivateKeyUsageValidator PrivateKeyUsageValidator;
#else
typedef struct PrivateKeyUsageValidator PrivateKeyUsageValidator;
#endif /* __cplusplus */

#endif 	/* __PrivateKeyUsageValidator_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_pkivalidator_0000_0000 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_pkivalidator_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_pkivalidator_0000_0000_v0_0_s_ifspec;

#ifndef __IPrivateKeyUsageValidator_INTERFACE_DEFINED__
#define __IPrivateKeyUsageValidator_INTERFACE_DEFINED__

/* interface IPrivateKeyUsageValidator */
/* [nonextensible][dual][object][helpstring][uuid] */ 


EXTERN_C const IID IID_IPrivateKeyUsageValidator;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("59EDB358-096F-4E09-82E7-4D3C873EF575")
    IPrivateKeyUsageValidator : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IsCertValidOnTime( 
            /* [in] */ VARIANT Certificate,
            /* [in] */ DATE DateTime,
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IsCertValidNow( 
            /* [in] */ VARIANT Certificate,
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IsChainValid( 
            /* [in] */ VARIANT Chain,
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IPrivateKeyUsageValidatorVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IPrivateKeyUsageValidator * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IPrivateKeyUsageValidator * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IPrivateKeyUsageValidator * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IPrivateKeyUsageValidator * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IPrivateKeyUsageValidator * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IPrivateKeyUsageValidator * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IPrivateKeyUsageValidator * This,
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
        
        DECLSPEC_XFGVIRT(IPrivateKeyUsageValidator, IsCertValidOnTime)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *IsCertValidOnTime )( 
            IPrivateKeyUsageValidator * This,
            /* [in] */ VARIANT Certificate,
            /* [in] */ DATE DateTime,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        DECLSPEC_XFGVIRT(IPrivateKeyUsageValidator, IsCertValidNow)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *IsCertValidNow )( 
            IPrivateKeyUsageValidator * This,
            /* [in] */ VARIANT Certificate,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        DECLSPEC_XFGVIRT(IPrivateKeyUsageValidator, IsChainValid)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *IsChainValid )( 
            IPrivateKeyUsageValidator * This,
            /* [in] */ VARIANT Chain,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        END_INTERFACE
    } IPrivateKeyUsageValidatorVtbl;

    interface IPrivateKeyUsageValidator
    {
        CONST_VTBL struct IPrivateKeyUsageValidatorVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPrivateKeyUsageValidator_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IPrivateKeyUsageValidator_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IPrivateKeyUsageValidator_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IPrivateKeyUsageValidator_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IPrivateKeyUsageValidator_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IPrivateKeyUsageValidator_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IPrivateKeyUsageValidator_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IPrivateKeyUsageValidator_IsCertValidOnTime(This,Certificate,DateTime,pVal)	\
    ( (This)->lpVtbl -> IsCertValidOnTime(This,Certificate,DateTime,pVal) ) 

#define IPrivateKeyUsageValidator_IsCertValidNow(This,Certificate,pVal)	\
    ( (This)->lpVtbl -> IsCertValidNow(This,Certificate,pVal) ) 

#define IPrivateKeyUsageValidator_IsChainValid(This,Chain,pVal)	\
    ( (This)->lpVtbl -> IsChainValid(This,Chain,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IPrivateKeyUsageValidator_INTERFACE_DEFINED__ */



#ifndef __PKIValidatorLib_LIBRARY_DEFINED__
#define __PKIValidatorLib_LIBRARY_DEFINED__

/* library PKIValidatorLib */
/* [helpstring][version][uuid] */ 


EXTERN_C const IID LIBID_PKIValidatorLib;

EXTERN_C const CLSID CLSID_PrivateKeyUsageValidator;

#ifdef __cplusplus

class DECLSPEC_UUID("1FDD1FC3-6347-49DF-BDAB-E465BF32AD92")
PrivateKeyUsageValidator;
#endif
#endif /* __PKIValidatorLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  VARIANT_UserSize(     unsigned long *, unsigned long            , VARIANT * ); 
unsigned char * __RPC_USER  VARIANT_UserMarshal(  unsigned long *, unsigned char *, VARIANT * ); 
unsigned char * __RPC_USER  VARIANT_UserUnmarshal(unsigned long *, unsigned char *, VARIANT * ); 
void                      __RPC_USER  VARIANT_UserFree(     unsigned long *, VARIANT * ); 

unsigned long             __RPC_USER  VARIANT_UserSize64(     unsigned long *, unsigned long            , VARIANT * ); 
unsigned char * __RPC_USER  VARIANT_UserMarshal64(  unsigned long *, unsigned char *, VARIANT * ); 
unsigned char * __RPC_USER  VARIANT_UserUnmarshal64(unsigned long *, unsigned char *, VARIANT * ); 
void                      __RPC_USER  VARIANT_UserFree64(     unsigned long *, VARIANT * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


