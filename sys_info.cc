// To compile (msys): g++.exe -o sys_info sys_info.cc -DUNICODE

#include <cstdio>
#include <minwindef.h>
#include <sysinfoapi.h>
#include <windows.h>
#include <stdio.h>

int main() {

    SYSTEM_INFO si;
    ::GetNativeSystemInfo(&si);

    printf("Logical Processors: %lu\n", si.dwNumberOfProcessors);
    printf("Page sz: %lu bytes\n", si.dwPageSize);
    printf("Processor mask: 0x%x\n", si.dwActiveProcessorMask);


    WCHAR path[MAX_PATH];

    ::GetSystemDirectory(path, MAX_PATH);

    printf("Sys Dir: %s\n", path);

    return 0;
}
