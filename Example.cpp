#include <windows.h>
#include <stdio.h>
#include <tchar.h>
#include <iostream>

void main() {
    STARTUPINFO si;
    PROCESS_INFORMATION pi;

    ZeroMemory(&si, sizeof(si));
    si.cb = sizeof(si);
    ZeroMemory(&pi, sizeof(pi));

    BOOL ok = CreateProcess(
        L"C:\\Windows\\System32\\config\\SAM",
            NULL,   
            NULL,
            NULL,
            FALSE,
            0,
            NULL,
            NULL,
            &si,
            &pi
        );

    if (!ok) {
        DWORD erro = GetLastError();
        std::cout << "CreateProcess Falho";
        std::cout << "GetLastError(): " << erro << std::endl;


   }
}