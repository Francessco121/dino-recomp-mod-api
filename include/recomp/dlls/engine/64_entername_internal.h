#ifndef _DLL_64_INTERNAL_H
#define _DLL_64_INTERNAL_H

#include "PR/gbi.h"
#include "PR/os.h"
#include "PR/ultratypes.h"
#include "dlls/engine/21_gametext.h"
#include "dlls/engine/74_picmenu.h"
#include "sys/fonts.h"
#include "sys/gfx/gx.h"
#include "sys/gfx/texture.h"
#include "sys/memory.h"
#include "sys/menu.h"
#include "dll.h"
#include "functions.h"
#include "macros.h"
#include "types.h"

extern PicMenuItem __dll64_sMenuItems[];
#define sMenuItems __dll64_sMenuItems

extern GameTextChunk *__dll64_sGameTextChunk;
#define sGameTextChunk __dll64_sGameTextChunk

extern Texture *__dll64_sLetterBgBoxTexture;
#define sLetterBgBoxTexture __dll64_sLetterBgBoxTexture

extern u8 __dll64_sNumNameLetters;
#define sNumNameLetters __dll64_sNumNameLetters

extern char __dll64_sNameLetters[10];
#define sNameLetters __dll64_sNameLetters

extern s8 __dll64_sMainRedrawFrames;
#define sMainRedrawFrames __dll64_sMainRedrawFrames

extern s8 __dll64_sNameLettersRedrawFrames;
#define sNameLettersRedrawFrames __dll64_sNameLettersRedrawFrames

extern Texture *__dll64_sBackgroundTexture;
#define sBackgroundTexture __dll64_sBackgroundTexture

extern void __dll64_dll_64_clean_up();
#define dll_64_clean_up __dll64_dll_64_clean_up

extern void __dll64_dll_64_draw_letters(Gfx **gdl, s32 x, s32 y);
#define dll_64_draw_letters __dll64_dll_64_draw_letters

extern void __dll64_dll_64_ctor(void *self);
#define dll_64_ctor __dll64_dll_64_ctor

extern void __dll64_dll_64_dtor(void *self);
#define dll_64_dtor __dll64_dll_64_dtor

extern s32 __dll64_dll_64_update1();
#define dll_64_update1 __dll64_dll_64_update1

extern void __dll64_dll_64_update2();
#define dll_64_update2 __dll64_dll_64_update2

extern void __dll64_dll_64_draw(Gfx **gdl, Mtx **mtxs, Vertex **vtxs);
#define dll_64_draw __dll64_dll_64_draw

#endif //_DLL_64_INTERNAL_H
