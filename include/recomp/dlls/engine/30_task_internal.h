#ifndef _DLL_29_INTERNAL_H
#define _DLL_29_INTERNAL_H

#include <PR/ultratypes.h>
#include "variables.h"
#include "functions.h"
#include "prevent_bss_reordering.h"

extern void __dll30_task_ctor(void *self);
#define task_ctor __dll30_task_ctor

extern void __dll30_task_dtor(void *self);
#define task_dtor __dll30_task_dtor

extern void __dll30_task_load_recently_completed();
#define task_load_recently_completed __dll30_task_load_recently_completed

extern void __dll30_task_mark_task_completed(u8 task);
#define task_mark_task_completed __dll30_task_mark_task_completed

extern u8 __dll30_task_get_num_recently_completed();
#define task_get_num_recently_completed __dll30_task_get_num_recently_completed

extern char *__dll30_task_get_recently_completed_task_text(u8 idx);
#define task_get_recently_completed_task_text __dll30_task_get_recently_completed_task_text

extern char *__dll30_task_get_completion_task_text();
#define task_get_completion_task_text __dll30_task_get_completion_task_text

extern s16 __dll30_task_get_completion_percentage();
#define task_get_completion_percentage __dll30_task_get_completion_percentage

#endif //_DLL_29_INTERNAL_H
