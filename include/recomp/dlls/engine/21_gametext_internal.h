#ifndef _DLL_29_INTERNAL_H
#define _DLL_29_INTERNAL_H

#include <PR/ultratypes.h>
#include "sys/fs.h"
#include "sys/memory.h"
#include "dlls/engine/21_gametext.h"
#include "variables.h"
#include "functions.h"
#include "prevent_bss_reordering.h"

extern void __dll21_gametext_set_bank(s8 bank);
#define gametext_set_bank __dll21_gametext_set_bank

extern void __dll21_gametext_ctor(void *self);
#define gametext_ctor __dll21_gametext_ctor

extern void __dll21_gametext_dtor(void *self);
#define gametext_dtor __dll21_gametext_dtor

extern u16 __dll21_gametext_bank_count();
#define gametext_bank_count __dll21_gametext_bank_count

extern u16 __dll21_gametext_chunk_count();
#define gametext_chunk_count __dll21_gametext_chunk_count

extern s8 __dll21_gametext_curr_bank();
#define gametext_curr_bank __dll21_gametext_curr_bank

extern GameTextChunk *__dll21_gametext_get_chunk(u16 chunk);
#define gametext_get_chunk __dll21_gametext_get_chunk

extern char *__dll21_gametext_get_text(u16 chunk, u16 strIndex);
#define gametext_get_text __dll21_gametext_get_text

#endif //_DLL_29_INTERNAL_H
