#ifndef _DLL_61_INTERNAL_H
#define _DLL_61_INTERNAL_H

#include "PR/ultratypes.h"
#include "dlls/engine/28_screen_fade.h"
#include "game/objects/object.h"
#include "sys/gfx/texture.h"
#include "sys/menu.h"
#include "functions.h"
#include "dll.h"

extern s32 __dll61_data_0;
#define data_0 __dll61_data_0

extern s8 __dll61_data_4;
#define data_4 __dll61_data_4

extern u32 __dll61_data_8;
#define data_8 __dll61_data_8

extern s8 __dll61_bss_0;
#define bss_0 __dll61_bss_0

extern s8 __dll61_bss_1;
#define bss_1 __dll61_bss_1

extern s8 __dll61_bss_2;
#define bss_2 __dll61_bss_2

extern f32 __dll61_bss_4;
#define bss_4 __dll61_bss_4

extern f32 __dll61_bss_8;
#define bss_8 __dll61_bss_8

extern Texture *__dll61_bss_C;
#define bss_C __dll61_bss_C

extern Texture *__dll61_bss_10;
#define bss_10 __dll61_bss_10

extern Texture *__dll61_bss_14;
#define bss_14 __dll61_bss_14

extern Texture *__dll61_bss_18;
#define bss_18 __dll61_bss_18

extern void __dll61_dll_61_ctor(void *self);
#define dll_61_ctor __dll61_dll_61_ctor

extern void __dll61_dll_61_dtor(void *self);
#define dll_61_dtor __dll61_dll_61_dtor

extern s32 __dll61_dll_61_update1();
#define dll_61_update1 __dll61_dll_61_update1

extern void __dll61_dll_61_update2();
#define dll_61_update2 __dll61_dll_61_update2

extern void __dll61_dll_61_draw(Gfx **gdl, UNK_PTR **mtxs, UNK_PTR **vtxs);
#define dll_61_draw __dll61_dll_61_draw

#endif //_DLL_61_INTERNAL_H
