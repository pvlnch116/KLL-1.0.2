#pragma once

/*
KLL - Kisushka Log Library
Release 1.0.2 (2023)


KLLENTRYPOINT - Logs entry point
KLL_LOG::KLL_ERROR
KLL_LOG::KLL_CRITICALERROR
KLL_LOG::KLL_WARNING
KLL_LOG::KLL_INFORMATION

*/

#include<Windows.h>
#include<iostream>
#include<string>
#include<conio.h>
#include<stdio.h>


HANDLE Console;


#ifndef KLL
#define KLL       0
extern "C++"
{
#endif // !KLL


	// KLLAPI
#define KLLAPI
#define KLL
// KLLENTRY

// KLLENTRY
#define KLLENTRY      __stdcall
// KLLENTRYPOINT
#define KLLENTRYPOINT WINAPI
// STDCALL
#define STDCALL       __stdcall
// CALL
#define CALLAUT       __stdcall
// CDECL
#define CDECL         __cdecl

// Lib
#define KLL_LIB    KLLENTRY


// Lib Def

// Void
#define Void          void
// Win
#define WIN           WINAPI

// KLL

// KLLCALL
#define KLL_CALL   KLLENTRY


/*
* Kisushka Log Library
* Functions and defenitions
* 
* Information
* Warning
* Error
* Critical Error
*/
// Basic KLL logs

#ifndef Basic_KLL_Logs

// definition of KLL logs
// Critical Error
#define KLL_LOG_CRITICALERROR  
// Error 
#define KLL_LOG_ERROR  
// Information
#define KLL_LOG_INFO     
// Warning
#define KLL_LOG_WARNING    

// Functions

// Log Infirmation
KLLAPI void KLL_INFORMATION();
// Log Warning
KLLAPI void KLL_WARNING();
// Log Error
KLLAPI void KLL_ERROR();
// Log Critical Error
KLLAPI void KLL_CRITICALERROR();
// Log ProggrammEnd
KLLAPI void KLL_PROGRAMMEND();

#define KLL_LOG

#endif // !Basic_KLL_Logs






}

