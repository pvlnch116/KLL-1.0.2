// KLL-Release 1.0.1.cpp 
//
//

#include "pch.h"
#include "framework.h"
#include "kll.h"

using namespace std;

int KLLENTRYPOINT KLL_Lib()
{

	KLL_LOG::KLL_INFORMATION();

	return 0;
}
/*
KLL functions realisation
Information
Warning
Error
Criticalerror
*/
// Information
KLLAPI void KLL_INFORMATION()
{
	Console = GetStdHandle(STD_OUTPUT_HANDLE);

	SetConsoleTextAttribute(Console, 6);

	cout << "[INFORMATION]" << endl;

	_getch();
}
//Warning
KLLAPI void KLL_WARNING()
{
	Console = GetStdHandle(STD_OUTPUT_HANDLE);

	SetConsoleTextAttribute(Console, 5);

	cout << "[WARNING]" << endl;

	_getch();
}
// Error
KLLAPI void KLL_ERROR()
{
	Console = GetStdHandle(STD_OUTPUT_HANDLE);

	SetConsoleTextAttribute(Console, 4);

	cout << "[ERROR]" << endl;

	_getch();
}
// Criticalerror
KLLAPI void KLL_CRITICALERROR()
{
	Console = GetStdHandle(STD_OUTPUT_HANDLE);

	SetConsoleTextAttribute(Console, 2);

	cout << "[CRITICAL_ERROR]" << endl;


	_getch();
}
// ProgrammEnd
KLLAPI void KLL_PROGRAMMEND()
{
	cout << "[PROGRAMM_END]" << endl;
}