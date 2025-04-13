#ifndef _DLL_31_INTERNAL_H
#define _DLL_31_INTERNAL_H

#include <PR/ultratypes.h>
#include <PR/os.h>
#include "dlls/engine/31_flash.h"
#include "sys/dll.h"
#include "sys/memory.h"
#include "prevent_bss_reordering.h"

extern const char __dll31_str1[];
#define str1 __dll31_str1

extern const char __dll31_str2[];
#define str2 __dll31_str2

extern const char __dll31_str3[];
#define str3 __dll31_str3

extern const char __dll31_str4[];
#define str4 __dll31_str4

extern const char __dll31_str5[];
#define str5 __dll31_str5

extern const char __dll31_str6[];
#define str6 __dll31_str6

extern const char __dll31_str7[];
#define str7 __dll31_str7

extern const char __dll31_str8[];
#define str8 __dll31_str8

extern const char __dll31_str9[];
#define str9 __dll31_str9

extern const char __dll31_str10[];
#define str10 __dll31_str10

extern const char __dll31_str11[];
#define str11 __dll31_str11

extern const char __dll31_str12[];
#define str12 __dll31_str12

extern const char __dll31_str13[];
#define str13 __dll31_str13

extern const char __dll31_str14[];
#define str14 __dll31_str14

extern const char __dll31_str15[];
#define str15 __dll31_str15

extern const char __dll31_str16[];
#define str16 __dll31_str16

extern const char __dll31_str17[];
#define str17 __dll31_str17

extern const char __dll31_str18[];
#define str18 __dll31_str18

extern const char __dll31_str19[];
#define str19 __dll31_str19

extern const char __dll31_str20[];
#define str20 __dll31_str20

extern const char __dll31_str21[];
#define str21 __dll31_str21

extern const char __dll31_str22[];
#define str22 __dll31_str22

extern const char __dll31_str23[];
#define str23 __dll31_str23

extern OSMesg __dll31_sFlashDmaMqBuffer[1];
#define sFlashDmaMqBuffer __dll31_sFlashDmaMqBuffer

extern OSMesgQueue __dll31_sFlashDmaMq;
#define sFlashDmaMq __dll31_sFlashDmaMq

extern OSIoMesg __dll31_sFlashIoMesg;
#define sFlashIoMesg __dll31_sFlashIoMesg

extern FlashId *__dll31_sFlashId;
#define sFlashId __dll31_sFlashId

extern OSIoMesg __dll31_sFlashReadIoMesg;
#define sFlashReadIoMesg __dll31_sFlashReadIoMesg

extern OSMesgQueue __dll31_sFlashReadIdQueue;
#define sFlashReadIdQueue __dll31_sFlashReadIdQueue

extern OSPiHandle __dll31_sFlashEPiHandle;
#define sFlashEPiHandle __dll31_sFlashEPiHandle

extern OSMesg __dll31_sFlashReadIdQueueBuffer[1];
#define sFlashReadIdQueueBuffer __dll31_sFlashReadIdQueueBuffer

extern u32 __dll31_DAT_81084030;
#define DAT_81084030 __dll31_DAT_81084030

extern void __dll31_flash_compute_checksum(FlashStruct *param);
#define flash_compute_checksum __dll31_flash_compute_checksum

extern void __dll31_osFlashReadId(u32 *flash_type, u32 *flash_maker);
#define osFlashReadId __dll31_osFlashReadId

extern s32 __dll31_osFlashSectorErase(u32 page_num);
#define osFlashSectorErase __dll31_osFlashSectorErase

extern s32 __dll31_osFlashWriteBuffer(OSIoMesg *mb, s32 priority, void *dramAddr, OSMesgQueue *mq);
#define osFlashWriteBuffer __dll31_osFlashWriteBuffer

extern s32 __dll31_osFlashWriteArray(u32 page_num);
#define osFlashWriteArray __dll31_osFlashWriteArray

extern s32 __dll31_osFlashReadArray(OSIoMesg *mb, s32 priority, u32 page_num, void *dramAddr, u32 n_pages, OSMesgQueue *mq);
#define osFlashReadArray __dll31_osFlashReadArray

extern void __dll31_flash_ctor(DLLFile *self);
#define flash_ctor __dll31_flash_ctor

extern void __dll31_flash_dtor(DLLFile *self);
#define flash_dtor __dll31_flash_dtor

extern s32 __dll31_flash_load_game(FlashStruct *param1, u8 param2, s32 param3, s32 param4);
#define flash_load_game __dll31_flash_load_game

extern s16 __dll31_flash_save_game(FlashStruct *param1, u8 param2, s32 param3, s32 param4);
#define flash_save_game __dll31_flash_save_game

extern OSPiHandle *__dll31_osFlashInit();
#define osFlashInit __dll31_osFlashInit

extern void __dll31_flash_func_638();
#define flash_func_638 __dll31_flash_func_638

extern void __dll31_osFlashReadStatus(u8 *flash_status);
#define osFlashReadStatus __dll31_osFlashReadStatus

extern void __dll31_osFlashClearStatus();
#define osFlashClearStatus __dll31_osFlashClearStatus

#endif //_DLL_31_INTERNAL_H
