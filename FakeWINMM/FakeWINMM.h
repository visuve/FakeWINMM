#pragma once

struct MODULE
{
    int unused;
};

#if defined(__cplusplus)
extern "C"
{
#endif

    int __stdcall PlaySoundW(const wchar_t*, MODULE*, unsigned long);
    unsigned long __stdcall timeGetTime();

#if defined(__cplusplus)
};
#endif