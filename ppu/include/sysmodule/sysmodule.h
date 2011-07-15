#ifndef __LV2_SYSMODULE_H__
#define __LV2_SYSMODULE_H__

#include <ppu-types.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef enum
{
	SYSMODULE_NET = 0x0,
	SYSMODULE_HTTP = 0x1,
	SYSMODULE_HTTP_UTIL = 0x02,

	SYSMODULE_RTC = 0x09,

	SYSMODULE_SYNC = 0x0d,
	SYSMODULE_FS = 0x0e,
	SYSMODULE_JPGDEC = 0x0f,
	SYSMODULE_GCM_SYS = 0x10,
	SYSMODULE_AUDIO = 0x11,

	SYSMODULE_NETCTL = 0x14,
	SYSMODULE_SYSUTIL = 0x15,
	SYSMODULE_SYSUTIL_NP = 0x16,
	SYSMODULE_IO = 0x17,
	SYSMODULE_PNGDEC = 0x18,
	SYSMODULE_FONT = 0x19,
	SYSMODULE_FONTFT = 0x1a,
	SYSMODULE_FREETYPE = 0x1b,

	SYSMODULE_USBD = 0x1c,
	SYSMODULE_RESC = 0x1f,

	SYSMODULE_CAMERA = 0x23,

	SYSMODULE_VDEC_MPEG2 = 0x24,
	SYSMODULE_VDEC_H264 = 0x25,
	SYSMODULE_SAVEDATA = 0x33
} sysModuleId;

s32 sysModuleLoad(sysModuleId id);
s32 sysModuleUnload(sysModuleId id);
s32 sysModuleIsLoaded(sysModuleId id);

#ifdef __cplusplus
	}
#endif

#endif
