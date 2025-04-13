#ifndef _DLL_29_INTERNAL_H
#define _DLL_29_INTERNAL_H

#include "PR/ultratypes.h"
#include "PR/os.h"
#include "game/objects/object.h"
#include "sys/gfx/gx.h"
#include "sys/gfx/texture.h"
#include "sys/memory.h"
#include "sys/menu.h"
#include "dll.h"
#include "functions.h"

extern u8 __dll60_data_0;
#define data_0 __dll60_data_0

extern u8 __dll60_data_4;
#define data_4 __dll60_data_4

extern Texture *__dll60_data_8;
#define data_8 __dll60_data_8

extern Texture *__dll60_data_C;
#define data_C __dll60_data_C

extern Texture *__dll60_data_10;
#define data_10 __dll60_data_10

extern u32 __dll60_data_18;
#define data_18 __dll60_data_18

extern f32 __dll60_bss_0;
#define bss_0 __dll60_bss_0

extern s8 __dll60_bss_4;
#define bss_4 __dll60_bss_4

extern s8 __dll60_bss_5;
#define bss_5 __dll60_bss_5

extern s8 __dll60_bss_6;
#define bss_6 __dll60_bss_6

extern f32 __dll60_bss_8;
#define bss_8 __dll60_bss_8

extern f32 __dll60_bss_C;
#define bss_C __dll60_bss_C

extern f32 __dll60_bss_10;
#define bss_10 __dll60_bss_10

extern GameTextChunk *__dll60_bss_14;
#define bss_14 __dll60_bss_14

extern Texture *__dll60_bss_18;
#define bss_18 __dll60_bss_18

extern Texture *__dll60_bss_1C;
#define bss_1C __dll60_bss_1C

extern void __dll60_dll_60_ctor(void *self);
#define dll_60_ctor __dll60_dll_60_ctor

extern void __dll60_dll_60_dtor(void *self);
#define dll_60_dtor __dll60_dll_60_dtor

extern s32 __dll60_dll_60_update1();
#define dll_60_update1 __dll60_dll_60_update1

extern void __dll60_dll_60_update2();
#define dll_60_update2 __dll60_dll_60_update2

extern void __dll60_dll_60_draw(Gfx **gdl, UNK_PTR **mtxs, UNK_PTR **vtxs);
#define dll_60_draw __dll60_dll_60_draw

extern void __dll60_dll_60_func_D0C();
#define dll_60_func_D0C __dll60_dll_60_func_D0C

#endif //_DLL_29_INTERNAL_H
