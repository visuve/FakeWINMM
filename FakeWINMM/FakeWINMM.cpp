#include "FakeWINMM.h"
#include <stdio.h>

int __stdcall PlaySoundW(const wchar_t* snd, MODULE* mod, unsigned long flags)
{
    // TODO: Hack!
    return printf("%ls %p %lu", snd, mod, flags);
}

unsigned long __stdcall timeGetTime()
{
    // TODO: Hack!
    return 0;
}