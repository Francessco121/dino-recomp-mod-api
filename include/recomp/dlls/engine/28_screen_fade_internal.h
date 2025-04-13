#ifndef _DLL_29_INTERNAL_H
#define _DLL_29_INTERNAL_H

#include <PR/ultratypes.h>
#include "dlls/engine/28_screen_fade.h"
#include "sys/gfx/map.h"
#include "sys/objects.h"
#include "dll.h"
#include "functions.h"

extern f32 __dll28_sFadeAlpha;
#define sFadeAlpha __dll28_sFadeAlpha

extern f32 __dll28_sFadeSpeed;
#define sFadeSpeed __dll28_sFadeSpeed

extern f32 __dll28_sAutoReverseTimer;
#define sAutoReverseTimer __dll28_sAutoReverseTimer

extern u8 __dll28_sFadeType;
#define sFadeType __dll28_sFadeType

extern u8 __dll28_sIsComplete;
#define sIsComplete __dll28_sIsComplete

extern u8 __dll28_sDelayTimer;
#define sDelayTimer __dll28_sDelayTimer

extern void __dll28_screen_fade_fade_reversed(s32, s32);
#define screen_fade_fade_reversed __dll28_screen_fade_fade_reversed

extern void __dll28_screen_fade_draw_simple_black(Gfx **gdl, s32 *mtxs, s32 *vtxs);
#define screen_fade_draw_simple_black __dll28_screen_fade_draw_simple_black

extern void __dll28_screen_fade_draw_simple(Gfx **gdl, s32 *mtxs, s32 *vtxs, s32 red, s32 green, s32 blue);
#define screen_fade_draw_simple __dll28_screen_fade_draw_simple

extern void __dll28_screen_fade_draw_radial(Gfx **gdl, s32 *mtxs, s32 *vtxs, s32 red, s32 green, s32 blue);
#define screen_fade_draw_radial __dll28_screen_fade_draw_radial

extern void __dll28_screen_fade_ctor(void *self);
#define screen_fade_ctor __dll28_screen_fade_ctor

extern void __dll28_screen_fade_dtor(void *self);
#define screen_fade_dtor __dll28_screen_fade_dtor

extern void __dll28_screen_fade_fade(s32 param1, s32 param2);
#define screen_fade_fade __dll28_screen_fade_fade

extern void __dll28_screen_fade_func_3AC(s32 param1, s32 param2, f32 param3);
#define screen_fade_func_3AC __dll28_screen_fade_func_3AC

extern f32 __dll28_screen_fade_get_progress();
#define screen_fade_get_progress __dll28_screen_fade_get_progress

extern s32 __dll28_screen_fade_is_complete();
#define screen_fade_is_complete __dll28_screen_fade_is_complete

#endif //_DLL_29_INTERNAL_H
