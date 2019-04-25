#include <Windows.h>
#include <Shlobj.h>

BOOL WINAPI DllMain(HINSTANCE, DWORD reason, LPVOID)
{
    switch (reason)
    {
    case DLL_PROCESS_ATTACH:
        if (IsUserAnAdmin())
        {
            MessageBoxW(nullptr, L"Nyt k\u00E4vi pahasti!", L"HUPSISTA!", MB_OK);
        }
        break;
    }

    return TRUE;
}