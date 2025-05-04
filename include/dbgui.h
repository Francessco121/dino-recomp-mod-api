#ifndef __DBGUI_H__
#define __DBGUI_H__

#include <PR/ultratypes.h>
#include "modding.h"

typedef struct {
    f32 x, y;
} DbgUiPos;

RECOMP_IMPORT("*", s32 dbgui_begin(const char *str, s32 *open))
RECOMP_IMPORT("*", void dbgui_end())
RECOMP_IMPORT("*", void dbgui_text(const char *text))
RECOMP_IMPORT("*", void dbgui_label_text(const char *label, const char *text))
RECOMP_IMPORT("*", void dbgui_same_line());
RECOMP_IMPORT("*", s32 dbgui_begin_combo(const char *label, const char *preview))
RECOMP_IMPORT("*", void dbgui_end_combo())
RECOMP_IMPORT("*", s32 dbgui_selectable(const char *label, s32 selected))
RECOMP_IMPORT("*", s32 dbgui_button(const char *label))
RECOMP_IMPORT("*", s32 dbgui_is_open())
RECOMP_IMPORT("*", s32 dbgui_is_enabled())
RECOMP_IMPORT("*", s32 dbgui_begin_main_menu_bar())
RECOMP_IMPORT("*", void dbgui_end_main_menu_bar())
RECOMP_IMPORT("*", s32 dbgui_begin_menu(const char *label))
RECOMP_IMPORT("*", void dbgui_end_menu())
RECOMP_IMPORT("*", s32 dbgui_menu_item(const char *label, s32 *selected))
RECOMP_IMPORT("*", s32 dbgui_collapsing_header(const char *label))
RECOMP_IMPORT("*", s32 dbgui_tree_node(const char *label))
RECOMP_IMPORT("*", void dbgui_tree_pop())
RECOMP_IMPORT("*", s32 dbgui_begin_child(const char *str_id))
RECOMP_IMPORT("*", void dbgui_end_child())
RECOMP_IMPORT("*", s32 dbgui_checkbox(const char *label, s32 *value))
RECOMP_IMPORT("*", s32 dbgui_input_int(const char *label, s32 *value))
RECOMP_IMPORT("*", s32 dbgui_input_float(const char *label, f32 *value))
RECOMP_IMPORT("*", s32 dbgui_input_text(const char *label, char *buffer, s32 buffer_size))
RECOMP_IMPORT("*", void dbgui_set_next_item_width(f32 width))
RECOMP_IMPORT("*", void dbgui_push_item_width(f32 width))
RECOMP_IMPORT("*", void dbgui_pop_item_width())
RECOMP_IMPORT("*", s32 dbgui_begin_tab_bar(const char *str_id))
RECOMP_IMPORT("*", void dbgui_end_tab_bar())
RECOMP_IMPORT("*", s32 dbgui_begin_tab_item(const char *label, s32 *open))
RECOMP_IMPORT("*", void dbgui_end_tab_item())
RECOMP_IMPORT("*", void dbgui_push_str_id(const char *str_id))
RECOMP_IMPORT("*", void dbgui_pop_id())
RECOMP_IMPORT("*", s32 dbgui_is_item_hovered())
RECOMP_IMPORT("*", void dbgui_get_display_size(f32 *width, f32 *height))
typedef struct {
    float r;
    float g;
    float b;
    float a;
} DbgUiColor;
RECOMP_IMPORT("*", u32 dbgui_color_float4_to_u32(const DbgUiColor *color))
RECOMP_IMPORT("*", void dbgui_foreground_text(const DbgUiPos *pos, u32 color, const char *text))
typedef struct {
    DbgUiPos p1;
    DbgUiPos p2;
    u32 color;
    float thickness;
} DbgUiLine;
RECOMP_IMPORT("*", void dbgui_foreground_line(const DbgUiLine *line))
typedef struct {
    DbgUiPos center;
    float radius;
    u32 color;
    s32 numSegments;
    float thickness;
} DbgUiCircle;
RECOMP_IMPORT("*", void dbgui_foreground_circle(const DbgUiCircle *circle))
typedef struct {
    DbgUiPos center;
    float radius;
    u32 color;
    s32 numSegments;
} DbgUiCircleFilled;
RECOMP_IMPORT("*", void dbgui_foreground_circle_filled(const DbgUiCircleFilled *circle))
typedef struct {
    DbgUiPos center;
    float radiusX;
    float radiusY;
    u32 color;
    float rotation;
    s32 numSegments;
    float thickness;
} DbgUiEllipse;
RECOMP_IMPORT("*", void dbgui_foreground_ellipse(const DbgUiEllipse *ellipse))
typedef struct {
    DbgUiPos center;
    float radiusX;
    float radiusY;
    u32 color;
    float rotation;
    s32 numSegments;
} DbgUiEllipseFilled;
RECOMP_IMPORT("*", void dbgui_foreground_ellipse_filled(const DbgUiEllipseFilled *ellipse))
typedef struct {
    DbgUiPos min;
    DbgUiPos max;
    u32 color;
    float thickness;
} DbgUiRect;
RECOMP_IMPORT("*", void dbgui_foreground_rect(const DbgUiRect *rect))
typedef struct {
    DbgUiPos min;
    DbgUiPos max;
    u32 color;
} DbgUiRectFilled;
RECOMP_IMPORT("*", void dbgui_foreground_rect_filled(const DbgUiRectFilled *rect))

RECOMP_IMPORT("*", void dbgui_textf(const char *fmt, ...))
RECOMP_IMPORT("*", void dbgui_label_textf(const char *label, const char *fmt, ...))

#endif
