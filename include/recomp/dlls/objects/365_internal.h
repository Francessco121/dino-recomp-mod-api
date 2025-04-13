#ifndef _DLL_365_INTERNAL_H
#define _DLL_365_INTERNAL_H

#include <PR/ultratypes.h>
#include "game/objects/object.h"
#include "variables.h"
#include "functions.h"
#include "dlls/objects/365.h"

extern s32 __dll365_func_0007(Object *arg0, Object *arg1, TStruct365Func0006 *arg2, s32 arg3);
#define func_0007 __dll365_func_0007

extern void __dll365_init(void *arg);
#define init __dll365_init

extern int __dll365_fini(void *arg);
#define fini __dll365_fini

extern void __dll365_func_0000(Object *obj, s32 arg1, s32 arg2);
#define func_0000 __dll365_func_0000

extern void __dll365_func_0001(void *arg);
#define func_0001 __dll365_func_0001

extern void __dll365_func_0002(void *arg);
#define func_0002 __dll365_func_0002

extern void __dll365_func_0003(Object *obj, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s8 arg5);
#define func_0003 __dll365_func_0003

extern void __dll365_func_0004(void *arg0, s32 arg1);
#define func_0004 __dll365_func_0004

extern s32 __dll365_func_0005(void *arg);
#define func_0005 __dll365_func_0005

extern s32 __dll365_func_0006(void *arg0, s32 arg1);
#define func_0006 __dll365_func_0006

#endif //_DLL_365_INTERNAL_H
