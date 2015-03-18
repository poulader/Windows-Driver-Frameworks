/*++

Copyright (c) Microsoft Corporation.  All rights reserved.

_WdfVersionBuild_

Module Name:

    wdfverifier.h

Abstract:

    This module contains Driver Frameworks Verifier definitions

Environment:

    kernel mode only

Revision History:


--*/

//
// NOTE: This header is generated by stubwork.  Please make any 
//       modifications to the corresponding template files 
//       (.x or .y) and use stubwork to regenerate the header
//

#ifndef _WDFVERIFIER_H_
#define _WDFVERIFIER_H_

#ifndef WDF_EXTERN_C
  #ifdef __cplusplus
    #define WDF_EXTERN_C       extern "C"
    #define WDF_EXTERN_C_START extern "C" {
    #define WDF_EXTERN_C_END   }
  #else
    #define WDF_EXTERN_C
    #define WDF_EXTERN_C_START
    #define WDF_EXTERN_C_END
  #endif
#endif

WDF_EXTERN_C_START



#if (NTDDI_VERSION >= NTDDI_WIN2K)



//
// WDF Function: WdfVerifierDbgBreakPoint
//
typedef
WDFAPI
VOID
(*PFN_WDFVERIFIERDBGBREAKPOINT)(
    _In_
    PWDF_DRIVER_GLOBALS DriverGlobals
    );

VOID
FORCEINLINE
WdfVerifierDbgBreakPoint(
    )
{
    ((PFN_WDFVERIFIERDBGBREAKPOINT) WdfFunctions[WdfVerifierDbgBreakPointTableIndex])(WdfDriverGlobals);
}

//
// WDF Function: WdfVerifierKeBugCheck
//
typedef
WDFAPI
VOID
(*PFN_WDFVERIFIERKEBUGCHECK)(
    _In_
    PWDF_DRIVER_GLOBALS DriverGlobals,
    _In_
    ULONG BugCheckCode,
    _In_
    ULONG_PTR BugCheckParameter1,
    _In_
    ULONG_PTR BugCheckParameter2,
    _In_
    ULONG_PTR BugCheckParameter3,
    _In_
    ULONG_PTR BugCheckParameter4
    );

VOID
FORCEINLINE
WdfVerifierKeBugCheck(
    _In_
    ULONG BugCheckCode,
    _In_
    ULONG_PTR BugCheckParameter1,
    _In_
    ULONG_PTR BugCheckParameter2,
    _In_
    ULONG_PTR BugCheckParameter3,
    _In_
    ULONG_PTR BugCheckParameter4
    )
{
    ((PFN_WDFVERIFIERKEBUGCHECK) WdfFunctions[WdfVerifierKeBugCheckTableIndex])(WdfDriverGlobals, BugCheckCode, BugCheckParameter1, BugCheckParameter2, BugCheckParameter3, BugCheckParameter4);
}

//
// WDF Function: WdfGetTriageInfo
//
typedef
WDFAPI
PVOID
(*PFN_WDFGETTRIAGEINFO)(
    _In_
    PWDF_DRIVER_GLOBALS DriverGlobals
    );

PVOID
FORCEINLINE
WdfGetTriageInfo(
    )
{
    return ((PFN_WDFGETTRIAGEINFO) WdfFunctions[WdfGetTriageInfoTableIndex])(WdfDriverGlobals);
}



#endif // (NTDDI_VERSION >= NTDDI_WIN2K)


WDF_EXTERN_C_END

#endif // _WDFVERIFIER_H_
