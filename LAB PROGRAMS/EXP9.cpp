#include <stdio.h>
#include <windows.h>

int main()
{
    HANDLE hMap;
    char *p;

    hMap = CreateFileMapping(
        INVALID_HANDLE_VALUE,
        NULL,
        PAGE_READWRITE,
        0,
        100,
        "SharedMemory");

    p = (char*)MapViewOfFile(
        hMap,
        FILE_MAP_ALL_ACCESS,
        0, 0, 100);

    sprintf(p, "Hello Shared Memory");

    printf("Message = %s\n", p);

    UnmapViewOfFile(p);
    CloseHandle(hMap);

    return 0;
}