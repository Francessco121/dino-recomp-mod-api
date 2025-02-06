#ifndef __IMPORTS_H__
#define __IMPORTS_H__

#include <PR/ultratypes.h>
#include "modding.h"
#include "stdarg.h"

RECOMP_IMPORT("*", int sprintf(char *s, const char *fmt, ...))
RECOMP_IMPORT("*", int vsprintf(char *s, const char *fmt, va_list args))

RECOMP_IMPORT("*", int recomp_printf(const char *fmt, ...))
RECOMP_IMPORT("*", int recomp_vprintf(const char *fmt, va_list args))
RECOMP_IMPORT("*", const char *recomp_vsprintf_helper(const char *fmt, va_list args))
RECOMP_IMPORT("*", const char *recomp_sprintf_helper(const char *fmt, ...))

RECOMP_IMPORT("*", s32 mod_dbgui_begin(const char *str, s32 *open))
RECOMP_IMPORT("*", void mod_dbgui_end())
RECOMP_IMPORT("*", void mod_dbgui_text(const char *text))
RECOMP_IMPORT("*", void mod_dbgui_label_text(const char *label, const char *text))
RECOMP_IMPORT("*", void mod_dbgui_same_line());
RECOMP_IMPORT("*", s32 mod_dbgui_begin_combo(const char *label, const char *preview))
RECOMP_IMPORT("*", void mod_dbgui_end_combo())
RECOMP_IMPORT("*", s32 mod_dbgui_selectable(const char *label, s32 selected))
RECOMP_IMPORT("*", s32 mod_dbgui_button(const char *label))
RECOMP_IMPORT("*", s32 mod_dbgui_is_open())
RECOMP_IMPORT("*", s32 mod_dbgui_is_enabled())
RECOMP_IMPORT("*", s32 mod_dbgui_begin_main_menu_bar())
RECOMP_IMPORT("*", void mod_dbgui_end_main_menu_bar())
RECOMP_IMPORT("*", s32 mod_dbgui_begin_menu(const char *label))
RECOMP_IMPORT("*", void mod_dbgui_end_menu())
RECOMP_IMPORT("*", s32 mod_dbgui_menu_item(const char *label, s32 *selected))
RECOMP_IMPORT("*", s32 mod_dbgui_collapsing_header(const char *label))
RECOMP_IMPORT("*", s32 mod_dbgui_tree_node(const char *label))
RECOMP_IMPORT("*", void mod_dbgui_tree_pop())
RECOMP_IMPORT("*", s32 mod_dbgui_begin_child(const char *str_id))
RECOMP_IMPORT("*", void mod_dbgui_end_child())
RECOMP_IMPORT("*", s32 mod_dbgui_checkbox(const char *label, s32 *value))
RECOMP_IMPORT("*", s32 mod_dbgui_input_int(const char *label, s32 *value))
RECOMP_IMPORT("*", s32 mod_dbgui_input_float(const char *label, f32 *value))

RECOMP_IMPORT("*", void mod_dbgui_textf(const char *fmt, ...))
RECOMP_IMPORT("*", void mod_dbgui_label_textf(const char *label, const char *fmt, ...))

#endif
