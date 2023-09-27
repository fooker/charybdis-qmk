#pragma once

#undef RGB_MATRIX_MAXIMUM_BRIGHTNESS
#define RGB_MATRIX_MAXIMUM_BRIGHTNESS 96

#define TAPPING_FORCE_HOLD_PER_KEY
#define TAPPING_TERM 200

#define SPLIT_LAYER_STATE_ENABLE
#define SPLIT_MODS_ENABLE

#define PMW33XX_CPI 200

#ifdef FOOKER_COLOR_B
	#define FOOKER_GLOW 45, 255, 255
#endif
#ifdef FOOKER_COLOR_W
	#define FOOKER_GLOW 20, 255, 255
#endif

