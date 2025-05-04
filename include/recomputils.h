#ifndef __RECOMPUTILS_H__
#define __RECOMPUTILS_H__

#include <PR/ultratypes.h>
#include "modding.h"
#include "stdarg.h"

// N64ModernRuntime

RECOMP_IMPORT("*", void *recomp_alloc(unsigned long size))
RECOMP_IMPORT("*", void recomp_free(void *ptr))


// Dino Recomp

RECOMP_IMPORT("*", void recomp_get_window_resolution(u32 *width, u32 *height))

RECOMP_IMPORT("*", void recomp_error_message_box(const char *message))
RECOMP_IMPORT("*", void recomp_exit_with_error(const char *message))
RECOMP_IMPORT("*", void recomp_exit())
RECOMP_IMPORT("*", f32 recomp_powf(f32 x, f32 y))
RECOMP_IMPORT("*", u32 recomp_time_us())

RECOMP_IMPORT("*", int recomp_sprintf(char *s, const char *fmt, ...))
RECOMP_IMPORT("*", int recomp_vsprintf(char *s, const char *fmt, va_list args))

RECOMP_IMPORT("*", int recomp_printf(const char *fmt, ...))
RECOMP_IMPORT("*", int recomp_vprintf(const char *fmt, va_list args))
RECOMP_IMPORT("*", int recomp_eprintf(const char *fmt, ...))
RECOMP_IMPORT("*", int recomp_veprintf(const char *fmt, va_list args))
RECOMP_IMPORT("*", const char *recomp_vsprintf_helper(const char *fmt, va_list args))
RECOMP_IMPORT("*", const char *recomp_sprintf_helper(const char *fmt, ...))


#endif
