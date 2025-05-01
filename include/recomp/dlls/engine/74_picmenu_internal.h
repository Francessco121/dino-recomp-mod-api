#ifndef _DLL_74_INTERNAL_H
#define _DLL_74_INTERNAL_H

#include "dlls/engine/74_picmenu.h"
#include "PR/os.h"
#include "PR/ultratypes.h"
#include "sys/main.h"
#include "sys/menu.h"
#include "sys/rand.h"
#include "sys/controller.h"
#include "sys/fonts.h"
#include "sys/gfx/texture.h"
#include "dll.h"
#include "functions.h"
#include "macros.h"
#include "prevent_bss_reordering.h"

extern const char __dll74_str_1[];
#define str_1 __dll74_str_1

extern const char __dll74_str_2[];
#define str_2 __dll74_str_2

extern const char __dll74_str_3[];
#define str_3 __dll74_str_3

extern const char __dll74_str_4[];
#define str_4 __dll74_str_4

extern const char __dll74_str_5[];
#define str_5 __dll74_str_5

extern const char __dll74_str_6[];
#define str_6 __dll74_str_6

extern PicMenuSounds __dll74_sDefaultSounds;
#define sDefaultSounds __dll74_sDefaultSounds

extern PicMenuTexture __dll74_sTextures[];
#define sTextures __dll74_sTextures

extern PicMenuItem __dll74_sItems[40];
#define sItems __dll74_sItems

extern s8 __dll74_sAllowButtons;
#define sAllowButtons __dll74_sAllowButtons

extern s8 __dll74_sSelectedItem;
#define sSelectedItem __dll74_sSelectedItem

extern s8 __dll74_sItemCount;
#define sItemCount __dll74_sItemCount

extern s8 __dll74_sHighlightReverse;
#define sHighlightReverse __dll74_sHighlightReverse

extern s16 __dll74_sHighlightAlpha;
#define sHighlightAlpha __dll74_sHighlightAlpha

extern s16 __dll74_sOpacity;
#define sOpacity __dll74_sOpacity

extern PicMenuSounds *__dll74_sSounds;
#define sSounds __dll74_sSounds

extern s16 __dll74_sTextColorR;
#define sTextColorR __dll74_sTextColorR

extern s16 __dll74_sTextColorG;
#define sTextColorG __dll74_sTextColorG

extern s16 __dll74_sTextColorB;
#define sTextColorB __dll74_sTextColorB

extern s16 __dll74_sTextHighlightR;
#define sTextHighlightR __dll74_sTextHighlightR

extern s16 __dll74_sTextHighlightG;
#define sTextHighlightG __dll74_sTextHighlightG

extern s16 __dll74_sTextHighlightB;
#define sTextHighlightB __dll74_sTextHighlightB

extern u16 __dll74_picmenu_calculate_auto_width(const char *text, s32 fontID);
#define picmenu_calculate_auto_width __dll74_picmenu_calculate_auto_width

extern void __dll74_picmenu_generate_item_background(PicMenuItem *item);
#define picmenu_generate_item_background __dll74_picmenu_generate_item_background

extern void __dll74_picmenu_calculate_redraw_area();
#define picmenu_calculate_redraw_area __dll74_picmenu_calculate_redraw_area

extern void __dll74_picmenu_calculate_items_to_redraw();
#define picmenu_calculate_items_to_redraw __dll74_picmenu_calculate_items_to_redraw

extern void __dll74_picmenu_ctor(void *self);
#define picmenu_ctor __dll74_picmenu_ctor

extern void __dll74_picmenu_dtor(void *self);
#define picmenu_dtor __dll74_picmenu_dtor

extern void __dll74_picmenu_set_items(PicMenuItem *items, s32 count, s32 defaultItem, PicMenuSounds *sounds, s32 param5, s32 param6, s32 textColorR, s32 textColorG, s32 textColorB, s32 textHighlightR, s32 textHighlightG, s32 textHighlightB);
#define picmenu_set_items __dll74_picmenu_set_items

extern void __dll74_picmenu_clear_items();
#define picmenu_clear_items __dll74_picmenu_clear_items

extern void __dll74_picmenu_draw(Gfx **gdl);
#define picmenu_draw __dll74_picmenu_draw

extern s32 __dll74_picmenu_get_selected_item();
#define picmenu_get_selected_item __dll74_picmenu_get_selected_item

extern void __dll74_picmenu_set_selected_item(s32 index);
#define picmenu_set_selected_item __dll74_picmenu_set_selected_item

extern void __dll74_picmenu_set_opacity(u8 opacity);
#define picmenu_set_opacity __dll74_picmenu_set_opacity

extern s32 __dll74_picmenu_get_item_override(s32 index);
#define picmenu_get_item_override __dll74_picmenu_get_item_override

extern void __dll74_picmenu_set_item_override(s32 index, s32 overrideWith);
#define picmenu_set_item_override __dll74_picmenu_set_item_override

extern void __dll74_picmenu_update_text(PicMenuItem *items);
#define picmenu_update_text __dll74_picmenu_update_text

extern u8 __dll74_picmenu_get_highlight_alpha();
#define picmenu_get_highlight_alpha __dll74_picmenu_get_highlight_alpha

extern void __dll74_picmenu_update_flags(PicMenuItem *items);
#define picmenu_update_flags __dll74_picmenu_update_flags

extern void __dll74_picmenu_redraw_all();
#define picmenu_redraw_all __dll74_picmenu_redraw_all

#endif //_DLL_74_INTERNAL_H
