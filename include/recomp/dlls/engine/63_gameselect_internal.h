#ifndef _DLL_63_INTERNAL_H
#define _DLL_63_INTERNAL_H

#include "dlls/engine/63_gameselect.h"
#include "PR/gbi.h"
#include "PR/ultratypes.h"
#include "dlls/engine/21_gametext.h"
#include "dlls/engine/28_screen_fade.h"
#include "dlls/engine/74_picmenu.h"
#include "sys/gfx/gx.h"
#include "sys/gfx/texture.h"
#include "sys/fonts.h"
#include "sys/main.h"
#include "sys/menu.h"
#include "sys/memory.h"
#include "dll.h"
#include "types.h"
#include "functions.h"
#include "macros.h"
#include "prevent_bss_reordering.h"

extern PicMenuItem __dll63_sGameSelectMenuItems[];
#define sGameSelectMenuItems __dll63_sGameSelectMenuItems

extern s8 __dll63_sGameSelectMenuText[];
#define sGameSelectMenuText __dll63_sGameSelectMenuText

extern PicMenuItem __dll63_sCopySrcSelectMenuItems[];
#define sCopySrcSelectMenuItems __dll63_sCopySrcSelectMenuItems

extern s8 __dll63_sCopySrcSelectMenuText[];
#define sCopySrcSelectMenuText __dll63_sCopySrcSelectMenuText

extern PicMenuItem __dll63_sCopyDstSelectMenuItems[];
#define sCopyDstSelectMenuItems __dll63_sCopyDstSelectMenuItems

extern s8 __dll63_sCopyDstSelectMenuText[];
#define sCopyDstSelectMenuText __dll63_sCopyDstSelectMenuText

extern PicMenuItem __dll63_sCopyConfirmMenuItems[];
#define sCopyConfirmMenuItems __dll63_sCopyConfirmMenuItems

extern s8 __dll63_sCopyConfirmMenuText[];
#define sCopyConfirmMenuText __dll63_sCopyConfirmMenuText

extern PicMenuItem __dll63_sEraseSelectMenuItems[];
#define sEraseSelectMenuItems __dll63_sEraseSelectMenuItems

extern s8 __dll63_sEraseSelectMenuText[];
#define sEraseSelectMenuText __dll63_sEraseSelectMenuText

extern PicMenuItem __dll63_sEraseConfirmMenuItems[];
#define sEraseConfirmMenuItems __dll63_sEraseConfirmMenuItems

extern s8 __dll63_sEraseConfirmMenuText[];
#define sEraseConfirmMenuText __dll63_sEraseConfirmMenuText

extern PicMenuItem __dll63_sGameConfirmMenuItems[];
#define sGameConfirmMenuItems __dll63_sGameConfirmMenuItems

extern s8 __dll63_sGameConfirmMenuText[];
#define sGameConfirmMenuText __dll63_sGameConfirmMenuText

extern PicMenuItem __dll63_sGameRecapMenuItems[];
#define sGameRecapMenuItems __dll63_sGameRecapMenuItems

extern s8 __dll63_sGameRecapMenuText[];
#define sGameRecapMenuText __dll63_sGameRecapMenuText

extern GameSelectSubmenu __dll63_sSubmenus[];
#define sSubmenus __dll63_sSubmenus

extern PicMenuSounds __dll63_sGameRecapMenuSounds;
#define sGameRecapMenuSounds __dll63_sGameRecapMenuSounds

extern GameTextChunk *__dll63_sGameTextChunk;
#define sGameTextChunk __dll63_sGameTextChunk

extern s8 __dll63_sSubmenuIdx;
#define sSubmenuIdx __dll63_sSubmenuIdx

extern s8 __dll63_sSelectedSaveIdx;
#define sSelectedSaveIdx __dll63_sSelectedSaveIdx

extern s8 __dll63_sCopyDstIdx;
#define sCopyDstIdx __dll63_sCopyDstIdx

extern s16 __dll63_sSaveGameTextureIDs[];
#define sSaveGameTextureIDs __dll63_sSaveGameTextureIDs

extern s16 __dll63_sSaveGameBgTextureIDs[];
#define sSaveGameBgTextureIDs __dll63_sSaveGameBgTextureIDs

extern s16 __dll63_sSaveGameBgIndices[];
#define sSaveGameBgIndices __dll63_sSaveGameBgIndices

extern GameSelectSaveInfo __dll63_sSaveGameInfo[3];
#define sSaveGameInfo __dll63_sSaveGameInfo

extern s8 __dll63_sCopyDstOptions[2];
#define sCopyDstOptions __dll63_sCopyDstOptions

extern s8 __dll63_sExitTransitionTimer;
#define sExitTransitionTimer __dll63_sExitTransitionTimer

extern s8 __dll63_sRedrawFrames;
#define sRedrawFrames __dll63_sRedrawFrames

extern s16 __dll63_sSaveGameBoxX;
#define sSaveGameBoxX __dll63_sSaveGameBoxX

extern s16 __dll63_sSaveGameBoxY;
#define sSaveGameBoxY __dll63_sSaveGameBoxY

extern char __dll63_sSaveGameTimeStr[10];
#define sSaveGameTimeStr __dll63_sSaveGameTimeStr

extern char __dll63_sSpiritCountStr[2];
#define sSpiritCountStr __dll63_sSpiritCountStr

extern char __dll63_sSpellStoneCountStr[2];
#define sSpellStoneCountStr __dll63_sSpellStoneCountStr

extern u8 __dll63_sExitToGame;
#define sExitToGame __dll63_sExitToGame

extern u8 __dll63_sExitToMainMenu;
#define sExitToMainMenu __dll63_sExitToMainMenu

extern Texture *__dll63_sBackgroundTexture;
#define sBackgroundTexture __dll63_sBackgroundTexture

extern Texture *__dll63_sLogoTexture;
#define sLogoTexture __dll63_sLogoTexture

extern Texture *__dll63_sLogoShadowTexture;
#define sLogoShadowTexture __dll63_sLogoShadowTexture

extern char __dll63_sRecentTaskNumStrs[4][4];
#define sRecentTaskNumStrs __dll63_sRecentTaskNumStrs

extern Texture *__dll63_sSaveGameTextures[4];
#define sSaveGameTextures __dll63_sSaveGameTextures

extern Texture *__dll63_sSaveGameBgTextures[18];
#define sSaveGameBgTextures __dll63_sSaveGameBgTextures

extern void __dll63_dll_63_clean_up(s32 leavingMenus);
#define dll_63_clean_up __dll63_dll_63_clean_up

extern void __dll63_dll_63_goto_game_select(s32 param1);
#define dll_63_goto_game_select __dll63_dll_63_goto_game_select

extern void __dll63_dll_63_load_save_game_info();
#define dll_63_load_save_game_info __dll63_dll_63_load_save_game_info

extern void __dll63_dll_63_goto_game_confirm();
#define dll_63_goto_game_confirm __dll63_dll_63_goto_game_confirm

extern void __dll63_dll_63_init_submenu(GameSelectSubmenu *submenu);
#define dll_63_init_submenu __dll63_dll_63_init_submenu

extern void __dll63_dll_63_act_game_select(PicMenuAction action, s32 selected);
#define dll_63_act_game_select __dll63_dll_63_act_game_select

extern void __dll63_dll_63_act_game_confirm(PicMenuAction action, s32 selected);
#define dll_63_act_game_confirm __dll63_dll_63_act_game_confirm

extern void __dll63_dll_63_act_game_recap(PicMenuAction action, s32 selected);
#define dll_63_act_game_recap __dll63_dll_63_act_game_recap

extern void __dll63_dll_63_act_copy_src_select(PicMenuAction action, s32 selected);
#define dll_63_act_copy_src_select __dll63_dll_63_act_copy_src_select

extern void __dll63_dll_63_act_copy_dst_select(PicMenuAction action, s32 selected);
#define dll_63_act_copy_dst_select __dll63_dll_63_act_copy_dst_select

extern void __dll63_dll_63_act_copy_confirm(PicMenuAction action, s32 selected);
#define dll_63_act_copy_confirm __dll63_dll_63_act_copy_confirm

extern void __dll63_dll_63_act_erase_select(PicMenuAction action, s32 selected);
#define dll_63_act_erase_select __dll63_dll_63_act_erase_select

extern void __dll63_dll_63_act_erase_confirm(PicMenuAction action, s32 selected);
#define dll_63_act_erase_confirm __dll63_dll_63_act_erase_confirm

extern void __dll63_dll_63_draw_save_game_box(Gfx **gdl, s32 x, s32 y, GameSelectSaveInfo *saveInfo);
#define dll_63_draw_save_game_box __dll63_dll_63_draw_save_game_box

extern void __dll63_dll_63_ctor(void *self);
#define dll_63_ctor __dll63_dll_63_ctor

extern void __dll63_dll_63_dtor(void *self);
#define dll_63_dtor __dll63_dll_63_dtor

extern s32 __dll63_dll_63_update1();
#define dll_63_update1 __dll63_dll_63_update1

extern void __dll63_dll_63_update2();
#define dll_63_update2 __dll63_dll_63_update2

extern void __dll63_dll_63_draw(Gfx **gdl, Mtx **mtxs, Vertex **vtxs);
#define dll_63_draw __dll63_dll_63_draw

extern void __dll63_dll_63_goto_copy_src_select();
#define dll_63_goto_copy_src_select __dll63_dll_63_goto_copy_src_select

extern void __dll63_dll_63_goto_copy_dst_select();
#define dll_63_goto_copy_dst_select __dll63_dll_63_goto_copy_dst_select

extern void __dll63_dll_63_goto_copy_confirm();
#define dll_63_goto_copy_confirm __dll63_dll_63_goto_copy_confirm

extern void __dll63_dll_63_goto_erase_select();
#define dll_63_goto_erase_select __dll63_dll_63_goto_erase_select

extern void __dll63_dll_63_goto_erase_confirm();
#define dll_63_goto_erase_confirm __dll63_dll_63_goto_erase_confirm

extern void __dll63_dll_63_goto_game_recap();
#define dll_63_goto_game_recap __dll63_dll_63_goto_game_recap

#endif //_DLL_63_INTERNAL_H
