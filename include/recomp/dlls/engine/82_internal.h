#ifndef _DLL_82_INTERNAL_H
#define _DLL_82_INTERNAL_H

#include <PR/ultratypes.h>

extern void __dll82_ctor(void *arg);
#define ctor __dll82_ctor

extern void __dll82_dtor(void *arg);
#define dtor __dll82_dtor

extern void __dll82_func_18(void *a0, void *a1, void *a2, void *a3);
#define func_18 __dll82_func_18

#endif //_DLL_82_INTERNAL_H
