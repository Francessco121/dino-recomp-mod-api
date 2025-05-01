#ifndef _DLL_16_INTERNAL_H
#define _DLL_16_INTERNAL_H

#include "PR/ultratypes.h"

extern void __dll16_init(void *arg);
#define init __dll16_init

extern void __dll16_fini(void *arg);
#define fini __dll16_fini

extern void __dll16_func_0000(void);
#define func_0000 __dll16_func_0000

extern void __dll16_func_0001(void *arg);
#define func_0001 __dll16_func_0001

extern void __dll16_func_0002(u8 value);
#define func_0002 __dll16_func_0002

#endif //_DLL_16_INTERNAL_H
