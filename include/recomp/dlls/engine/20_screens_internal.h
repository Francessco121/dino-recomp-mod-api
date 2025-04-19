#ifndef _DLL_20_INTERNAL_H
#define _DLL_20_INTERNAL_H

#include "PR/ultratypes.h"
#include "PR/gbi.h"
#include "sys/asset_thread.h"
#include "sys/fs.h"
#include "sys/gfx/map.h"
#include "sys/memory.h"
#include "functions.h"
#include "macros.h"

extern s32 __dll20_sLoadedScreenNo;
#define sLoadedScreenNo __dll20_sLoadedScreenNo

extern s32 __dll20_sRenderScreen;
#define sRenderScreen __dll20_sRenderScreen

extern s32 __dll20_sLoadedScreenByteLength;
#define sLoadedScreenByteLength __dll20_sLoadedScreenByteLength

extern u16 *__dll20_sLoadedScreen;
#define sLoadedScreen __dll20_sLoadedScreen

extern void __dll20_screens_ctor(void *self);
#define screens_ctor __dll20_screens_ctor

extern void __dll20_screens_dtor(void *self);
#define screens_dtor __dll20_screens_dtor

extern void __dll20_screens_show_screen(s32 screenNo);
#define screens_show_screen __dll20_screens_show_screen

extern void __dll20_screens_hide_screen();
#define screens_hide_screen __dll20_screens_hide_screen

extern void __dll20_screens_draw(Gfx **gdl);
#define screens_draw __dll20_screens_draw

#endif //_DLL_20_INTERNAL_H
