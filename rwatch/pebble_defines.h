#pragma once
#include "platform_config.h"
/* pebble-defines.h
 * Pebble defined header stuff
 * libRebbleOS
 *
 * Author: Barry Carter <barry.carter@gmail.com>
 */

#define graphics_context_set_fill_color n_graphics_context_set_fill_color
#define graphics_fill_rect n_graphics_fill_rect
#define graphics_context_set_stroke_color n_graphics_context_set_stroke_color
#define graphics_context_set_stroke_width n_graphics_context_set_stroke_width
#define graphics_context_set_antialiased n_graphics_context_set_antialiased

#define graphics_fill_circle n_graphics_fill_circle
#define graphics_draw_circle n_graphics_draw_circle
#define graphics_draw_line n_graphics_draw_line

#define GColorFromRGBA n_GColorFromRGBA
#define GColorFromRGB n_GColorFromRGB
#define GColor8 n_GColor8


// text redefines
#define GTextOverflowMode n_GTextOverflowMode
#define GTextOverflowModeTrailingEllipsis n_GTextOverflowModeTrailingEllipsis
#define GFont n_GFont
#define GTextAlignment n_GTextAlignment
#define GTextAlignmentLeft n_GTextAlignmentLeft
#define GTextAlignmentCenter n_GTextAlignmentCenter
#define GTextAlignmentRight n_GTextAlignmentRight
#define GTextAttributes n_GTextAttributes
#define graphics_draw_text n_graphics_draw_text

// math
#define TRIG_MAX_RATIO 0xffff
#define TRIG_MAX_ANGLE 0x10000

#define GContext n_GContext


#define GSize n_GSize
#define GColor n_GColor
#define GRect n_GRect
#define GPoint n_GPoint

#define GColorWhite n_GColorWhite
#define GColorRed   n_GColorRed
#define GColorNone  n_GColorNone
#define GColorBlack n_GColorBlack
#define GColorLightGray n_GColorLightGray
#define GColorDarkGray n_GColorDarkGray
#define GColorOrange n_GColorOrange
#define GColorBlue  n_GColorBlue
#define GColorOxfordBlue n_GColorOxfordBlue
#define GColorDarkBlue n_GColorDarkBlue
#define GColorGreen n_GColorGreen
#define GColorDarkGreen n_GColorDarkGreen
#define GColorMidnightGreen n_GColorMidnightGreen
#define GColorCobaltBlue n_GColorCobaltBlue
#define GColorBlueMoon n_GColorBlueMoon
#define GColorIslamicGreen n_GColorIslamicGreen
#define GColorJaegerGreen n_GColorJaegerGreen
#define GColorTiffanyBlue n_GColorTiffanyBlue
#define GColorVividCerulean n_GColorVividCerulean
#define GColorMalachite n_GColorMalachite
#define GColorMediumSpringGreen n_GColorMediumSpringGreen
#define GColorCyan n_GColorCyan
#define GColorBulgarianRose n_GColorBulgarianRose
#define GColorImperialPurple n_GColorImperialPurple
#define GColorIndigo n_GColorIndigo
#define GColorElectricUltramarine n_GColorElectricUltramarine
#define GColorLiberty n_GColorLiberty
#define GColorVeryLightBlue n_GColorVeryLightBlue
#define GColorKellyGreen n_GColorKellyGreen
#define GColorMayGreen n_GColorMayGreen
#define GColorCadetBlue n_GColorCadetBlue
#define GColorPictonBlue n_GColorPictonBlue
#define GColorBrightGreen n_GColorBrightGreen
#define GColorScreaminGreen n_GColorScreaminGreen
#define GColorMediumAquamarine n_GColorMediumAquamarine
#define GColorElectricBlue n_GColorElectricBlue
#define GColorDarkCandyAppleRed n_GColorDarkCandyAppleRed
#define GColorJazzberryJam n_GColorJazzberryJam
#define GColorPurple n_GColorPurple
#define GColorVividViolet n_GColorVividViolet
#define GColorWindsorTan n_GColorWindsorTan
#define GColorRoseVale n_GColorRoseVale
#define GColorPurpureus n_GColorPurpureus
#define GColorLavenderIndigo n_GColorLavenderIndigo
#define GColorLimerick n_GColorLimerick
#define GColorBrass n_GColorBrass
#define GColorBabyBlueEyes n_GColorBabyBlueEyes
#define GColorSpringBud n_GColorSpringBud
#define GColorInchworm n_GColorInchworm
#define GColorMintGreen n_GColorMintGreen
#define GColorCeleste n_GColorCeleste
#define GColorFolly n_GColorFolly
#define GColorFashionMagenta n_GColorFashionMagenta
#define GColorMagenta n_GColorMagenta
#define GColorSunsetOrange n_GColorSunsetOrange
#define GColorBrilliantRose n_GColorBrilliantRose
#define GColorShockingPink n_GColorShockingPink
#define GColorChromeYellow n_GColorChromeYellow
#define GColorRajah n_GColorRajah
#define GColorMelon n_GColorMelon
#define GColorRichBrilliantLavender n_GColorRichBrilliantLavender
#define GColorYellow n_GColorYellow
#define GColorIcterine n_GColorIcterine
#define GColorPastelYellow n_GColorPastelYellow

#define GCornerNone n_GCornerNone

#define graphics_context_set_text_color n_graphics_context_set_text_color
#include "gbitmap.h"
