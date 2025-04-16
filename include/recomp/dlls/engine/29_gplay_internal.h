#ifndef _DLL_29_INTERNAL_H
#define _DLL_29_INTERNAL_H

#include <PR/ultratypes.h>
#include "dlls/engine/28_screen_fade.h"
#include "game/objects/object.h"
#include "sys/dll.h"
#include "sys/math.h"
#include "sys/fs.h"
#include "sys/menu.h"
#include "variables.h"
#include "functions.h"
#include "dll.h"
#include "prevent_bss_reordering.h"

extern const char __dll29_str1[];
#define str1 __dll29_str1

extern const char __dll29_str2[];
#define str2 __dll29_str2

extern const char __dll29_str3[];
#define str3 __dll29_str3

extern const char __dll29_str4[];
#define str4 __dll29_str4

extern const char __dll29_str5[];
#define str5 __dll29_str5

extern const char __dll29_str6[];
#define str6 __dll29_str6

extern const char __dll29_str7[];
#define str7 __dll29_str7

extern const char __dll29_str8[];
#define str8 __dll29_str8

extern const char __dll29_str9[];
#define str9 __dll29_str9

extern const char __dll29_str10[];
#define str10 __dll29_str10

extern const char __dll29_str11[];
#define str11 __dll29_str11

extern const char __dll29_str12[];
#define str12 __dll29_str12

extern const char __dll29_str13[];
#define str13 __dll29_str13

extern const char __dll29_str14[];
#define str14 __dll29_str14

extern const Vec3f __dll29_rodata_230;
#define rodata_230 __dll29_rodata_230

extern u16 __dll29_data_0[120];
#define data_0 __dll29_data_0

extern u16 __dll29_data_F0[120];
#define data_F0 __dll29_data_F0

extern Vec3f __dll29_data_1E0;
#define data_1E0 __dll29_data_1E0

extern FlashStruct *__dll29_bss_0;
#define bss_0 __dll29_bss_0

extern GplayStruct3 *__dll29_bss_4;
#define bss_4 __dll29_bss_4

extern GplayStruct4 *__dll29_bss_8;
#define bss_8 __dll29_bss_8

extern GplayStruct7 __dll29_bss_10;
#define bss_10 __dll29_bss_10

extern s8 __dll29_bss_183C;
#define bss_183C __dll29_bss_183C

extern u8 __dll29_bss_1840[40];
#define bss_1840 __dll29_bss_1840

extern u32 __dll29_bss_1868[120];
#define bss_1868 __dll29_bss_1868

extern s8 __dll29_bss_1A48[2];
#define bss_1A48 __dll29_bss_1A48

extern u8 __dll29__bss_0x1a4a[0x4];
#define _bss_0x1a4a __dll29__bss_0x1a4a

extern s32 __dll29_bss_1A50[2];
#define bss_1A50 __dll29_bss_1A50

extern s32 __dll29_gplay_func_3E4(s8, u8);
#define gplay_func_3E4 __dll29_gplay_func_3E4

extern void __dll29_gplay_func_6AC();
#define gplay_func_6AC __dll29_gplay_func_6AC

extern void __dll29_gplay_func_958(Vec3f *param1, s16 param2, s32 param3, s32 param4);
#define gplay_func_958 __dll29_gplay_func_958

extern void __dll29_gplay_func_AE0();
#define gplay_func_AE0 __dll29_gplay_func_AE0

extern void __dll29_gplay_func_D94();
#define gplay_func_D94 __dll29_gplay_func_D94

extern void __dll29_gplay_func_1314();
#define gplay_func_1314 __dll29_gplay_func_1314

extern void __dll29_gplay_func_139C(s32 param1, s32 param2);
#define gplay_func_139C __dll29_gplay_func_139C

extern void __dll29_gplay_func_15B8(s32 param1);
#define gplay_func_15B8 __dll29_gplay_func_15B8

extern void __dll29_gplay_ctor(DLLFile *self);
#define gplay_ctor __dll29_gplay_ctor

extern void __dll29_gplay_dtor(DLLFile *self);
#define gplay_dtor __dll29_gplay_dtor

extern void __dll29_gplay_func_110(s8 param1);
#define gplay_func_110 __dll29_gplay_func_110

extern void __dll29_gplay_func_198(s8 param1, u8 *param2);
#define gplay_func_198 __dll29_gplay_func_198

extern void __dll29_gplay_func_638(s8 param1, s8 param2);
#define gplay_func_638 __dll29_gplay_func_638

extern u32 __dll29_gplay_func_79C();
#define gplay_func_79C __dll29_gplay_func_79C

extern void __dll29_gplay_func_8D8();
#define gplay_func_8D8 __dll29_gplay_func_8D8

extern GplayStruct4 *__dll29_gplay_func_930();
#define gplay_func_930 __dll29_gplay_func_930

extern void __dll29_gplay_func_94C(s32 param1);
#define gplay_func_94C __dll29_gplay_func_94C

extern void __dll29_gplay_func_B3C(Vec3f *param1, s16 param2, s32 param3);
#define gplay_func_B3C __dll29_gplay_func_B3C

extern void __dll29_gplay_func_CBC();
#define gplay_func_CBC __dll29_gplay_func_CBC

extern void __dll29_gplay_func_D20();
#define gplay_func_D20 __dll29_gplay_func_D20

extern s32 __dll29_gplay_func_D70();
#define gplay_func_D70 __dll29_gplay_func_D70

extern GplayStruct7 *__dll29_gplay_func_E74();
#define gplay_func_E74 __dll29_gplay_func_E74

extern u8 __dll29_gplay_func_E90();
#define gplay_func_E90 __dll29_gplay_func_E90

extern void __dll29_gplay_func_EAC(u8 character);
#define gplay_func_EAC __dll29_gplay_func_EAC

extern GplayStruct10 *__dll29_gplay_func_ED4();
#define gplay_func_ED4 __dll29_gplay_func_ED4

extern GplayStruct5 *__dll29_gplay_func_F04();
#define gplay_func_F04 __dll29_gplay_func_F04

extern GplayStruct11 *__dll29_gplay_func_F30();
#define gplay_func_F30 __dll29_gplay_func_F30

extern GplayStruct6 *__dll29_gplay_func_F60();
#define gplay_func_F60 __dll29_gplay_func_F60

extern GplayStruct12 *__dll29_gplay_func_FA8();
#define gplay_func_FA8 __dll29_gplay_func_FA8

extern GplayStruct13 *__dll29_gplay_func_FE8();
#define gplay_func_FE8 __dll29_gplay_func_FE8

extern void __dll29_gplay_func_1014(u32 param1, f32 param2);
#define gplay_func_1014 __dll29_gplay_func_1014

extern s32 __dll29_gplay_func_109C(u32 param1);
#define gplay_func_109C __dll29_gplay_func_109C

extern f32 __dll29_gplay_func_10F4(u32 param1);
#define gplay_func_10F4 __dll29_gplay_func_10F4

extern void __dll29_gplay_func_115C();
#define gplay_func_115C __dll29_gplay_func_115C

extern s16 __dll29_gplay_func_121C();
#define gplay_func_121C __dll29_gplay_func_121C

extern void __dll29_gplay_func_1238(s32 param1);
#define gplay_func_1238 __dll29_gplay_func_1238

extern void *__dll29_gplay_func_1254();
#define gplay_func_1254 __dll29_gplay_func_1254

extern u32 __dll29_gplay_func_1270();
#define gplay_func_1270 __dll29_gplay_func_1270

extern void __dll29_gplay_func_1378(s32 param1, s32 param2);
#define gplay_func_1378 __dll29_gplay_func_1378

extern u8 __dll29_gplay_func_143C(s32 param1);
#define gplay_func_143C __dll29_gplay_func_143C

extern u8 __dll29_gplay_func_14F0(s32 param1, s32 param2);
#define gplay_func_14F0 __dll29_gplay_func_14F0

extern u16 __dll29_gplay_func_1590(s32 param1);
#define gplay_func_1590 __dll29_gplay_func_1590

extern u32 __dll29_gplay_func_163C(s32 param1);
#define gplay_func_163C __dll29_gplay_func_163C

extern void __dll29_gplay_func_1680(s32 param1);
#define gplay_func_1680 __dll29_gplay_func_1680

extern void __dll29_gplay_func_16C4(s32 param1, s32 param2, s32 param3);
#define gplay_func_16C4 __dll29_gplay_func_16C4

extern GplayStruct14 *__dll29_gplay_func_1974();
#define gplay_func_1974 __dll29_gplay_func_1974

extern GplayStruct14 *__dll29_gplay_func_19B8();
#define gplay_func_19B8 __dll29_gplay_func_19B8

extern u32 __dll29_gplay_func_19FC(u8 param1);
#define gplay_func_19FC __dll29_gplay_func_19FC

extern void __dll29_gplay_func_1A48(u8 param1);
#define gplay_func_1A48 __dll29_gplay_func_1A48

extern s32 __dll29_gplay_func_1A90(u8 param1);
#define gplay_func_1A90 __dll29_gplay_func_1A90

extern void __dll29_gplay_func_1AF8(u8 param1, u8 param2);
#define gplay_func_1AF8 __dll29_gplay_func_1AF8

extern u32 __dll29_gplay_func_1B78(u8 param1);
#define gplay_func_1B78 __dll29_gplay_func_1B78

extern void __dll29_gplay_func_1BC4(u8 param1);
#define gplay_func_1BC4 __dll29_gplay_func_1BC4

#endif //_DLL_29_INTERNAL_H
