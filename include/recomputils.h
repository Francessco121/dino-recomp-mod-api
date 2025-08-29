#ifndef __RECOMPUTILS_H__
#define __RECOMPUTILS_H__

#include "modding.h"
#include "stdarg.h"

// N64ModernRuntime

RECOMP_IMPORT("*", void *recomp_alloc(unsigned long size))
RECOMP_IMPORT("*", void recomp_free(void *ptr))


// Dino Recomp

typedef enum {
    RECOMP_ASPECT_ORIGINAL,
    RECOMP_ASPECT_EXPAND,
    RECOMP_ASPECT_MANUAL
} RecompAspectRatio;

typedef enum {
    RECOMP_HUD_ORIGINAL,
    RECOMP_HUD_CLAMP16X9,
    RECOMP_HUD_FULL
} RecompHUDRatio;

RECOMP_IMPORT("*", void recomp_get_window_resolution(unsigned long *width, unsigned long *height))
RECOMP_IMPORT("*", RecompAspectRatio recomp_get_aspect_ratio_mode())
RECOMP_IMPORT("*", float recomp_get_aspect_ratio())
RECOMP_IMPORT("*", RecompHUDRatio recomp_get_hud_ratio_mode())
RECOMP_IMPORT("*", int recomp_get_refresh_rate())

RECOMP_IMPORT("*", void recomp_error_message_box(const char *message))
RECOMP_IMPORT("*", void recomp_exit_with_error(const char *message))
RECOMP_IMPORT("*", void recomp_exit())
RECOMP_IMPORT("*", float recomp_powf(float x, float y))
RECOMP_IMPORT("*", unsigned long recomp_time_us())

RECOMP_IMPORT("*", int recomp_sprintf(char *s, const char *fmt, ...))
RECOMP_IMPORT("*", int recomp_vsprintf(char *s, const char *fmt, va_list args))

RECOMP_IMPORT("*", int recomp_printf(const char *fmt, ...))
RECOMP_IMPORT("*", int recomp_vprintf(const char *fmt, va_list args))
RECOMP_IMPORT("*", int recomp_eprintf(const char *fmt, ...))
RECOMP_IMPORT("*", int recomp_veprintf(const char *fmt, va_list args))
RECOMP_IMPORT("*", const char *recomp_vsprintf_helper(const char *fmt, va_list args))
RECOMP_IMPORT("*", const char *recomp_sprintf_helper(const char *fmt, ...))


#endif
