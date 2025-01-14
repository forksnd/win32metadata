

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0626 */
/* @@MIDL_FILE_HEADING(  ) */



/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif

/* verify that the <rpcsal.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCSAL_H_VERSION__
#define __REQUIRED_RPCSAL_H_VERSION__ 100
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

#ifndef __certexit_h__
#define __certexit_h__

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

#ifndef __ICertExit_FWD_DEFINED__
#define __ICertExit_FWD_DEFINED__
typedef interface ICertExit ICertExit;

#endif 	/* __ICertExit_FWD_DEFINED__ */


#ifndef __ICertExit2_FWD_DEFINED__
#define __ICertExit2_FWD_DEFINED__
typedef interface ICertExit2 ICertExit2;

#endif 	/* __ICertExit2_FWD_DEFINED__ */


/* header files for imported files */
#include "wtypes.h"
#include "certmod.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_certexit_0000_0000 */
/* [local] */ 

#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#define EXITEVENT_INVALID               ( 0x0 )  // Invalid event
#define EXITEVENT_CERTISSUED            ( 0x1 )  // Certificate issued
#define EXITEVENT_CERTPENDING           ( 0x2 )  // Certificate pending
#define EXITEVENT_CERTDENIED            ( 0x4 )  // Certificate denied
#define EXITEVENT_CERTREVOKED           ( 0x8 )  // Certificate revoked
#define EXITEVENT_CERTRETRIEVEPENDING   ( 0x10 ) // Certificate retrieval
#define EXITEVENT_CRLISSUED             ( 0x20 ) // CRL issued
#define EXITEVENT_SHUTDOWN              ( 0x40 ) // Service shutdown
#define EXITEVENT_STARTUP               ( 0x80 ) // Service startup, fake event generated by exit module
#define EXITEVENT_CERTIMPORTED          ( 0x200 ) // Certificate Imported


extern RPC_IF_HANDLE __MIDL_itf_certexit_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_certexit_0000_0000_v0_0_s_ifspec;

#ifndef __ICertExit_INTERFACE_DEFINED__
#define __ICertExit_INTERFACE_DEFINED__

/* interface ICertExit */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_ICertExit;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("e19ae1a0-7364-11d0-8816-00a0c903b83c")
    ICertExit : public IDispatch
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Initialize( 
            /* [annotation][in] */ 
            _In_  const BSTR strConfig,
            /* [annotation][retval][out] */ 
            _Out_retval_  LONG *pEventMask) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Notify( 
            /* [annotation][in] */ 
            _In_  LONG ExitEvent,
            /* [annotation][in] */ 
            _In_  LONG Context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetDescription( 
            /* [annotation][retval][out] */ 
            _Out_retval_  BSTR *pstrDescription) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICertExitVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in ICertExit * This,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in ICertExit * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in ICertExit * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            __RPC__in ICertExit * This,
            /* [annotation][out] */ 
            _Out_  UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            __RPC__in ICertExit * This,
            /* [annotation][in] */ 
            _In_  UINT iTInfo,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][out] */ 
            _Out_  ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            __RPC__in ICertExit * This,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][size_is][in] */ 
            _In_reads_(cNames)  LPOLESTR *rgszNames,
            /* [range][in] */ __RPC__in_range(0,16384) UINT cNames,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][size_is][out] */ 
            _Out_writes_(cNames)  DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICertExit * This,
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
        
        DECLSPEC_XFGVIRT(ICertExit, Initialize)
        HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            __RPC__in ICertExit * This,
            /* [annotation][in] */ 
            _In_  const BSTR strConfig,
            /* [annotation][retval][out] */ 
            _Out_retval_  LONG *pEventMask);
        
        DECLSPEC_XFGVIRT(ICertExit, Notify)
        HRESULT ( STDMETHODCALLTYPE *Notify )( 
            __RPC__in ICertExit * This,
            /* [annotation][in] */ 
            _In_  LONG ExitEvent,
            /* [annotation][in] */ 
            _In_  LONG Context);
        
        DECLSPEC_XFGVIRT(ICertExit, GetDescription)
        HRESULT ( STDMETHODCALLTYPE *GetDescription )( 
            __RPC__in ICertExit * This,
            /* [annotation][retval][out] */ 
            _Out_retval_  BSTR *pstrDescription);
        
        END_INTERFACE
    } ICertExitVtbl;

    interface ICertExit
    {
        CONST_VTBL struct ICertExitVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICertExit_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICertExit_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICertExit_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICertExit_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ICertExit_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ICertExit_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ICertExit_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ICertExit_Initialize(This,strConfig,pEventMask)	\
    ( (This)->lpVtbl -> Initialize(This,strConfig,pEventMask) ) 

#define ICertExit_Notify(This,ExitEvent,Context)	\
    ( (This)->lpVtbl -> Notify(This,ExitEvent,Context) ) 

#define ICertExit_GetDescription(This,pstrDescription)	\
    ( (This)->lpVtbl -> GetDescription(This,pstrDescription) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICertExit_INTERFACE_DEFINED__ */


#ifndef __ICertExit2_INTERFACE_DEFINED__
#define __ICertExit2_INTERFACE_DEFINED__

/* interface ICertExit2 */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_ICertExit2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0abf484b-d049-464d-a7ed-552e7529b0ff")
    ICertExit2 : public ICertExit
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetManageModule( 
            /* [annotation][retval][out] */ 
            _Out_retval_  ICertManageModule **ppManageModule) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICertExit2Vtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in ICertExit2 * This,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in ICertExit2 * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in ICertExit2 * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            __RPC__in ICertExit2 * This,
            /* [annotation][out] */ 
            _Out_  UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            __RPC__in ICertExit2 * This,
            /* [annotation][in] */ 
            _In_  UINT iTInfo,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][out] */ 
            _Out_  ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            __RPC__in ICertExit2 * This,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][size_is][in] */ 
            _In_reads_(cNames)  LPOLESTR *rgszNames,
            /* [range][in] */ __RPC__in_range(0,16384) UINT cNames,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][size_is][out] */ 
            _Out_writes_(cNames)  DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICertExit2 * This,
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
        
        DECLSPEC_XFGVIRT(ICertExit, Initialize)
        HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            __RPC__in ICertExit2 * This,
            /* [annotation][in] */ 
            _In_  const BSTR strConfig,
            /* [annotation][retval][out] */ 
            _Out_retval_  LONG *pEventMask);
        
        DECLSPEC_XFGVIRT(ICertExit, Notify)
        HRESULT ( STDMETHODCALLTYPE *Notify )( 
            __RPC__in ICertExit2 * This,
            /* [annotation][in] */ 
            _In_  LONG ExitEvent,
            /* [annotation][in] */ 
            _In_  LONG Context);
        
        DECLSPEC_XFGVIRT(ICertExit, GetDescription)
        HRESULT ( STDMETHODCALLTYPE *GetDescription )( 
            __RPC__in ICertExit2 * This,
            /* [annotation][retval][out] */ 
            _Out_retval_  BSTR *pstrDescription);
        
        DECLSPEC_XFGVIRT(ICertExit2, GetManageModule)
        HRESULT ( STDMETHODCALLTYPE *GetManageModule )( 
            __RPC__in ICertExit2 * This,
            /* [annotation][retval][out] */ 
            _Out_retval_  ICertManageModule **ppManageModule);
        
        END_INTERFACE
    } ICertExit2Vtbl;

    interface ICertExit2
    {
        CONST_VTBL struct ICertExit2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICertExit2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICertExit2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICertExit2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICertExit2_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ICertExit2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ICertExit2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ICertExit2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ICertExit2_Initialize(This,strConfig,pEventMask)	\
    ( (This)->lpVtbl -> Initialize(This,strConfig,pEventMask) ) 

#define ICertExit2_Notify(This,ExitEvent,Context)	\
    ( (This)->lpVtbl -> Notify(This,ExitEvent,Context) ) 

#define ICertExit2_GetDescription(This,pstrDescription)	\
    ( (This)->lpVtbl -> GetDescription(This,pstrDescription) ) 


#define ICertExit2_GetManageModule(This,ppManageModule)	\
    ( (This)->lpVtbl -> GetManageModule(This,ppManageModule) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICertExit2_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_certexit_0000_0002 */
/* [local] */ 

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */
#pragma endregion


extern RPC_IF_HANDLE __MIDL_itf_certexit_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_certexit_0000_0002_v0_0_s_ifspec;

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  BSTR_UserSize(     __RPC__in unsigned long *, unsigned long            , __RPC__in BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal(  __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * ); 
void                      __RPC_USER  BSTR_UserFree(     __RPC__in unsigned long *, __RPC__in BSTR * ); 

unsigned long             __RPC_USER  BSTR_UserSize64(     __RPC__in unsigned long *, unsigned long            , __RPC__in BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal64(  __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * ); 
void                      __RPC_USER  BSTR_UserFree64(     __RPC__in unsigned long *, __RPC__in BSTR * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


