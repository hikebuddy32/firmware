
#include "lvgl/lvgl.h"

/***********************************************************************************
 * LiberationSans-Bold.ttf 14 px Font in U+0020 ( ) .. U+007e (~)  range with 1 bpp
***********************************************************************************/

/*Store the image of the letters (glyph)*/
static const uint8_t liberation_sans_bold_14_glyph_bitmap[] = 
{
  /*Unicode: U+0020 ( ) , Width: 4 */
  0x00,  //.... 
  0x00,  //.... 
  0x00,  //.... 
  0x00,  //.... 
  0x00,  //.... 
  0x00,  //.... 
  0x00,  //.... 
  0x00,  //.... 
  0x00,  //.... 
  0x00,  //.... 
  0x00,  //.... 
  0x00,  //.... 
  0x00,  //.... 
  0x00,  //.... 


  /*Unicode: U+0021 (!) , Width: 3 */
  0x00,  //... 
  0x00,  //... 
  0x00,  //... 
  0x40,  //.%. 
  0x40,  //.%. 
  0x40,  //.%. 
  0x40,  //.%. 
  0x40,  //.%. 
  0x00,  //... 
  0x40,  //.%. 
  0x40,  //.%. 
  0x00,  //... 
  0x00,  //... 
  0x00,  //... 


  /*Unicode: U+0022 (") , Width: 5 */
  0x00,  //..... 
  0x00,  //..... 
  0x00,  //..... 
  0x50,  //.%.%. 
  0x50,  //.%.%. 
  0x50,  //.%.%. 
  0x00,  //..... 
  0x00,  //..... 
  0x00,  //..... 
  0x00,  //..... 
  0x00,  //..... 
  0x00,  //..... 
  0x00,  //..... 
  0x00,  //..... 


  /*Unicode: U+0023 (#) , Width: 6 */
  0x00,  //...... 
  0x00,  //...... 
  0x00,  //...... 
  0x28,  //..%.%. 
  0x28,  //..%.%. 
  0x7c,  //.%%%%% 
  0x48,  //.%..%. 
  0x40,  //.%.... 
  0xf8,  //%%%%%. 
  0x50,  //.%.%.. 
  0x50,  //.%.%.. 
  0x00,  //...... 
  0x00,  //...... 
  0x00,  //...... 


  /*Unicode: U+0024 ($) , Width: 6 */
  0x00,  //...... 
  0x00,  //...... 
  0x00,  //...... 
  0x78,  //.%%%%. 
  0xc8,  //%%..%. 
  0xc0,  //%%.... 
  0x70,  //.%%%.. 
  0x3c,  //..%%%% 
  0x0c,  //....%% 
  0xcc,  //%%..%% 
  0x78,  //.%%%%. 
  0x00,  //...... 
  0x00,  //...... 
  0x00,  //...... 


  /*Unicode: U+0025 (%) , Width: 9 */
  0x00, 0x00,  //......... 
  0x00, 0x00,  //......... 
  0x00, 0x00,  //......... 
  0x62, 0x00,  //.%%...%.. 
  0xb4, 0x00,  //%.%%.%... 
  0x94, 0x00,  //%..%.%... 
  0xbf, 0x00,  //%.%%%%%%. 
  0x7c, 0x80,  //.%%%%%..% 
  0x14, 0x80,  //...%.%..% 
  0x17, 0x80,  //...%.%%%% 
  0x23, 0x00,  //..%...%%. 
  0x00, 0x00,  //......... 
  0x00, 0x00,  //......... 
  0x00, 0x00,  //......... 


  /*Unicode: U+0026 (&) , Width: 8 */
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 
  0x18,  //...%%... 
  0x24,  //..%..%.. 
  0x2c,  //..%.%%.. 
  0x30,  //..%%.... 
  0x72,  //.%%%..%. 
  0x5e,  //.%.%%%%. 
  0x4c,  //.%..%%.. 
  0x7f,  //.%%%%%%% 
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 


  /*Unicode: U+0027 (') , Width: 3 */
  0x00,  //... 
  0x00,  //... 
  0x00,  //... 
  0x40,  //.%. 
  0x40,  //.%. 
  0x40,  //.%. 
  0x00,  //... 
  0x00,  //... 
  0x00,  //... 
  0x00,  //... 
  0x00,  //... 
  0x00,  //... 
  0x00,  //... 
  0x00,  //... 


  /*Unicode: U+0028 (() , Width: 4 */
  0x00,  //.... 
  0x00,  //.... 
  0x00,  //.... 
  0x30,  //..%% 
  0x60,  //.%%. 
  0x60,  //.%%. 
  0x40,  //.%.. 
  0x40,  //.%.. 
  0x40,  //.%.. 
  0x40,  //.%.. 
  0x60,  //.%%. 
  0x60,  //.%%. 
  0x30,  //..%% 
  0x00,  //.... 


  /*Unicode: U+0029 ()) , Width: 4 */
  0x00,  //.... 
  0x00,  //.... 
  0x00,  //.... 
  0xc0,  //%%.. 
  0x60,  //.%%. 
  0x60,  //.%%. 
  0x20,  //..%. 
  0x20,  //..%. 
  0x20,  //..%. 
  0x20,  //..%. 
  0x60,  //.%%. 
  0x60,  //.%%. 
  0xc0,  //%%.. 
  0x00,  //.... 


  /*Unicode: U+002a (*) , Width: 4 */
  0x00,  //.... 
  0x00,  //.... 
  0x00,  //.... 
  0x20,  //..%. 
  0xf0,  //%%%% 
  0x60,  //.%%. 
  0x60,  //.%%. 
  0x00,  //.... 
  0x00,  //.... 
  0x00,  //.... 
  0x00,  //.... 
  0x00,  //.... 
  0x00,  //.... 
  0x00,  //.... 


  /*Unicode: U+002b (+) , Width: 6 */
  0x00,  //...... 
  0x00,  //...... 
  0x00,  //...... 
  0x00,  //...... 
  0x00,  //...... 
  0x30,  //..%%.. 
  0x30,  //..%%.. 
  0xfc,  //%%%%%% 
  0x30,  //..%%.. 
  0x30,  //..%%.. 
  0x00,  //...... 
  0x00,  //...... 
  0x00,  //...... 
  0x00,  //...... 


  /*Unicode: U+002c (,) , Width: 3 */
  0x00,  //... 
  0x00,  //... 
  0x00,  //... 
  0x00,  //... 
  0x00,  //... 
  0x00,  //... 
  0x00,  //... 
  0x00,  //... 
  0x00,  //... 
  0x40,  //.%. 
  0x40,  //.%. 
  0x40,  //.%. 
  0x40,  //.%. 
  0x00,  //... 


  /*Unicode: U+002d (-) , Width: 4 */
  0x00,  //.... 
  0x00,  //.... 
  0x00,  //.... 
  0x00,  //.... 
  0x00,  //.... 
  0x00,  //.... 
  0x00,  //.... 
  0xf0,  //%%%% 
  0x00,  //.... 
  0x00,  //.... 
  0x00,  //.... 
  0x00,  //.... 
  0x00,  //.... 
  0x00,  //.... 


  /*Unicode: U+002e (.) , Width: 3 */
  0x00,  //... 
  0x00,  //... 
  0x00,  //... 
  0x00,  //... 
  0x00,  //... 
  0x00,  //... 
  0x00,  //... 
  0x00,  //... 
  0x00,  //... 
  0x40,  //.%. 
  0x40,  //.%. 
  0x00,  //... 
  0x00,  //... 
  0x00,  //... 


  /*Unicode: U+002f (/) , Width: 3 */
  0x00,  //... 
  0x00,  //... 
  0x00,  //... 
  0x20,  //..% 
  0x60,  //.%% 
  0x40,  //.%. 
  0x40,  //.%. 
  0x40,  //.%. 
  0x40,  //.%. 
  0xc0,  //%%. 
  0x80,  //%.. 
  0x00,  //... 
  0x00,  //... 
  0x00,  //... 


  /*Unicode: U+0030 (0) , Width: 6 */
  0x00,  //...... 
  0x00,  //...... 
  0x00,  //...... 
  0x30,  //..%%.. 
  0x48,  //.%..%. 
  0x48,  //.%..%. 
  0xcc,  //%%..%% 
  0xcc,  //%%..%% 
  0x48,  //.%..%. 
  0x48,  //.%..%. 
  0x30,  //..%%.. 
  0x00,  //...... 
  0x00,  //...... 
  0x00,  //...... 


  /*Unicode: U+0031 (1) , Width: 6 */
  0x00,  //...... 
  0x00,  //...... 
  0x00,  //...... 
  0x70,  //.%%%.. 
  0x70,  //.%%%.. 
  0x10,  //...%.. 
  0x10,  //...%.. 
  0x10,  //...%.. 
  0x10,  //...%.. 
  0x30,  //..%%.. 
  0x7c,  //.%%%%% 
  0x00,  //...... 
  0x00,  //...... 
  0x00,  //...... 


  /*Unicode: U+0032 (2) , Width: 6 */
  0x00,  //...... 
  0x00,  //...... 
  0x00,  //...... 
  0x78,  //.%%%%. 
  0x48,  //.%..%. 
  0x08,  //....%. 
  0x18,  //...%%. 
  0x30,  //..%%.. 
  0x60,  //.%%... 
  0x60,  //.%%... 
  0xfc,  //%%%%%% 
  0x00,  //...... 
  0x00,  //...... 
  0x00,  //...... 


  /*Unicode: U+0033 (3) , Width: 6 */
  0x00,  //...... 
  0x00,  //...... 
  0x00,  //...... 
  0x78,  //.%%%%. 
  0x48,  //.%..%. 
  0x08,  //....%. 
  0x30,  //..%%.. 
  0x08,  //....%. 
  0x0c,  //....%% 
  0xc8,  //%%..%. 
  0x78,  //.%%%%. 
  0x00,  //...... 
  0x00,  //...... 
  0x00,  //...... 


  /*Unicode: U+0034 (4) , Width: 6 */
  0x00,  //...... 
  0x00,  //...... 
  0x00,  //...... 
  0x18,  //...%%. 
  0x38,  //..%%%. 
  0x38,  //..%%%. 
  0x48,  //.%..%. 
  0xc8,  //%%..%. 
  0xfc,  //%%%%%% 
  0x18,  //...%%. 
  0x08,  //....%. 
  0x00,  //...... 
  0x00,  //...... 
  0x00,  //...... 


  /*Unicode: U+0035 (5) , Width: 6 */
  0x00,  //...... 
  0x00,  //...... 
  0x00,  //...... 
  0x78,  //.%%%%. 
  0x40,  //.%.... 
  0x40,  //.%.... 
  0x78,  //.%%%%. 
  0x4c,  //.%..%% 
  0x0c,  //....%% 
  0x48,  //.%..%. 
  0x78,  //.%%%%. 
  0x00,  //...... 
  0x00,  //...... 
  0x00,  //...... 


  /*Unicode: U+0036 (6) , Width: 6 */
  0x00,  //...... 
  0x00,  //...... 
  0x00,  //...... 
  0x38,  //..%%%. 
  0x68,  //.%%.%. 
  0x40,  //.%.... 
  0xf8,  //%%%%%. 
  0xc8,  //%%..%. 
  0x4c,  //.%..%% 
  0x48,  //.%..%. 
  0x38,  //..%%%. 
  0x00,  //...... 
  0x00,  //...... 
  0x00,  //...... 


  /*Unicode: U+0037 (7) , Width: 6 */
  0x00,  //...... 
  0x00,  //...... 
  0x00,  //...... 
  0xfc,  //%%%%%% 
  0x08,  //....%. 
  0x18,  //...%%. 
  0x10,  //...%.. 
  0x30,  //..%%.. 
  0x20,  //..%... 
  0x20,  //..%... 
  0x20,  //..%... 
  0x00,  //...... 
  0x00,  //...... 
  0x00,  //...... 


  /*Unicode: U+0038 (8) , Width: 6 */
  0x00,  //...... 
  0x00,  //...... 
  0x00,  //...... 
  0x78,  //.%%%%. 
  0x48,  //.%..%. 
  0x48,  //.%..%. 
  0x78,  //.%%%%. 
  0x48,  //.%..%. 
  0xcc,  //%%..%% 
  0x48,  //.%..%. 
  0x78,  //.%%%%. 
  0x00,  //...... 
  0x00,  //...... 
  0x00,  //...... 


  /*Unicode: U+0039 (9) , Width: 6 */
  0x00,  //...... 
  0x00,  //...... 
  0x00,  //...... 
  0x70,  //.%%%.. 
  0x48,  //.%..%. 
  0xc8,  //%%..%. 
  0x4c,  //.%..%% 
  0x7c,  //.%%%%% 
  0x08,  //....%. 
  0x58,  //.%.%%. 
  0x70,  //.%%%.. 
  0x00,  //...... 
  0x00,  //...... 
  0x00,  //...... 


  /*Unicode: U+003a (:) , Width: 3 */
  0x00,  //... 
  0x00,  //... 
  0x00,  //... 
  0x00,  //... 
  0x00,  //... 
  0x40,  //.%. 
  0x40,  //.%. 
  0x00,  //... 
  0x00,  //... 
  0x40,  //.%. 
  0x40,  //.%. 
  0x00,  //... 
  0x00,  //... 
  0x00,  //... 


  /*Unicode: U+003b (;) , Width: 3 */
  0x00,  //... 
  0x00,  //... 
  0x00,  //... 
  0x00,  //... 
  0x00,  //... 
  0x40,  //.%. 
  0x40,  //.%. 
  0x00,  //... 
  0x00,  //... 
  0x40,  //.%. 
  0x40,  //.%. 
  0x40,  //.%. 
  0x40,  //.%. 
  0x00,  //... 


  /*Unicode: U+003c (<) , Width: 6 */
  0x00,  //...... 
  0x00,  //...... 
  0x00,  //...... 
  0x00,  //...... 
  0x00,  //...... 
  0x0c,  //....%% 
  0x78,  //.%%%%. 
  0xc0,  //%%.... 
  0x78,  //.%%%%. 
  0x0c,  //....%% 
  0x00,  //...... 
  0x00,  //...... 
  0x00,  //...... 
  0x00,  //...... 


  /*Unicode: U+003d (=) , Width: 6 */
  0x00,  //...... 
  0x00,  //...... 
  0x00,  //...... 
  0x00,  //...... 
  0x00,  //...... 
  0x00,  //...... 
  0xfc,  //%%%%%% 
  0x00,  //...... 
  0xfc,  //%%%%%% 
  0x00,  //...... 
  0x00,  //...... 
  0x00,  //...... 
  0x00,  //...... 
  0x00,  //...... 


  /*Unicode: U+003e (>) , Width: 6 */
  0x00,  //...... 
  0x00,  //...... 
  0x00,  //...... 
  0x00,  //...... 
  0x00,  //...... 
  0xc0,  //%%.... 
  0x78,  //.%%%%. 
  0x0c,  //....%% 
  0x78,  //.%%%%. 
  0xc0,  //%%.... 
  0x00,  //...... 
  0x00,  //...... 
  0x00,  //...... 
  0x00,  //...... 


  /*Unicode: U+003f (?) , Width: 7 */
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x38,  //..%%%.. 
  0x6c,  //.%%.%%. 
  0x04,  //.....%. 
  0x08,  //....%.. 
  0x10,  //...%... 
  0x00,  //....... 
  0x30,  //..%%... 
  0x30,  //..%%... 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 


  /*Unicode: U+0040 (@) , Width: 11 */
  0x00, 0x00,  //........... 
  0x00, 0x00,  //........... 
  0x00, 0x00,  //........... 
  0x0f, 0x00,  //....%%%%... 
  0x30, 0xc0,  //..%%....%%. 
  0x0f, 0x40,  //....%%%%.%. 
  0x51, 0x40,  //.%.%...%.%. 
  0x51, 0x40,  //.%.%...%.%. 
  0x52, 0x40,  //.%.%..%..%. 
  0x5d, 0x80,  //.%.%%%.%%.. 
  0x40, 0x00,  //.%......... 
  0x20, 0x00,  //..%........ 
  0x1e, 0x00,  //...%%%%.... 
  0x00, 0x00,  //........... 


  /*Unicode: U+0041 (A) , Width: 8 */
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 
  0x18,  //...%%... 
  0x18,  //...%%... 
  0x3c,  //..%%%%.. 
  0x24,  //..%..%.. 
  0x24,  //..%..%.. 
  0x7e,  //.%%%%%%. 
  0x66,  //.%%..%%. 
  0xc3,  //%%....%% 
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 


  /*Unicode: U+0042 (B) , Width: 7 */
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x78,  //.%%%%.. 
  0x4c,  //.%..%%. 
  0x4c,  //.%..%%. 
  0x78,  //.%%%%.. 
  0x44,  //.%...%. 
  0x46,  //.%...%% 
  0x44,  //.%...%. 
  0x7c,  //.%%%%%. 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 


  /*Unicode: U+0043 (C) , Width: 8 */
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 
  0x3c,  //..%%%%.. 
  0x62,  //.%%...%. 
  0x40,  //.%...... 
  0x40,  //.%...... 
  0x40,  //.%...... 
  0x40,  //.%...... 
  0x62,  //.%%...%. 
  0x3c,  //..%%%%.. 
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 


  /*Unicode: U+0044 (D) , Width: 7 */
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x78,  //.%%%%.. 
  0x4c,  //.%..%%. 
  0x44,  //.%...%. 
  0x46,  //.%...%% 
  0x46,  //.%...%% 
  0x44,  //.%...%. 
  0x4c,  //.%..%%. 
  0x78,  //.%%%%.. 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 


  /*Unicode: U+0045 (E) , Width: 6 */
  0x00,  //...... 
  0x00,  //...... 
  0x00,  //...... 
  0x78,  //.%%%%. 
  0x40,  //.%.... 
  0x40,  //.%.... 
  0x78,  //.%%%%. 
  0x40,  //.%.... 
  0x40,  //.%.... 
  0x40,  //.%.... 
  0x7c,  //.%%%%% 
  0x00,  //...... 
  0x00,  //...... 
  0x00,  //...... 


  /*Unicode: U+0046 (F) , Width: 6 */
  0x00,  //...... 
  0x00,  //...... 
  0x00,  //...... 
  0x7c,  //.%%%%% 
  0x40,  //.%.... 
  0x40,  //.%.... 
  0x7c,  //.%%%%% 
  0x40,  //.%.... 
  0x40,  //.%.... 
  0x40,  //.%.... 
  0x40,  //.%.... 
  0x00,  //...... 
  0x00,  //...... 
  0x00,  //...... 


  /*Unicode: U+0047 (G) , Width: 8 */
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 
  0x3c,  //..%%%%.. 
  0x66,  //.%%..%%. 
  0x40,  //.%...... 
  0xc0,  //%%...... 
  0xce,  //%%..%%%. 
  0x42,  //.%....%. 
  0x66,  //.%%..%%. 
  0x3c,  //..%%%%.. 
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 


  /*Unicode: U+0048 (H) , Width: 7 */
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x44,  //.%...%. 
  0x44,  //.%...%. 
  0x44,  //.%...%. 
  0x7c,  //.%%%%%. 
  0x44,  //.%...%. 
  0x44,  //.%...%. 
  0x44,  //.%...%. 
  0x44,  //.%...%. 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 


  /*Unicode: U+0049 (I) , Width: 3 */
  0x00,  //... 
  0x00,  //... 
  0x00,  //... 
  0x40,  //.%. 
  0x40,  //.%. 
  0x40,  //.%. 
  0x40,  //.%. 
  0x40,  //.%. 
  0x40,  //.%. 
  0x40,  //.%. 
  0x40,  //.%. 
  0x00,  //... 
  0x00,  //... 
  0x00,  //... 


  /*Unicode: U+004a (J) , Width: 6 */
  0x00,  //...... 
  0x00,  //...... 
  0x00,  //...... 
  0x38,  //..%%%. 
  0x08,  //....%. 
  0x08,  //....%. 
  0x08,  //....%. 
  0x08,  //....%. 
  0x08,  //....%. 
  0xd8,  //%%.%%. 
  0x70,  //.%%%.. 
  0x00,  //...... 
  0x00,  //...... 
  0x00,  //...... 


  /*Unicode: U+004b (K) , Width: 7 */
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x4c,  //.%..%%. 
  0x48,  //.%..%.. 
  0x58,  //.%.%%.. 
  0x70,  //.%%%... 
  0x78,  //.%%%%.. 
  0x48,  //.%..%.. 
  0x4c,  //.%..%%. 
  0x46,  //.%...%% 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 


  /*Unicode: U+004c (L) , Width: 7 */
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x40,  //.%..... 
  0x40,  //.%..... 
  0x40,  //.%..... 
  0x40,  //.%..... 
  0x40,  //.%..... 
  0x40,  //.%..... 
  0x40,  //.%..... 
  0x7e,  //.%%%%%% 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 


  /*Unicode: U+004d (M) , Width: 10 */
  0x00, 0x00,  //.......... 
  0x00, 0x00,  //.......... 
  0x00, 0x00,  //.......... 
  0x61, 0x80,  //.%%....%%. 
  0x61, 0x80,  //.%%....%%. 
  0x73, 0x80,  //.%%%..%%%. 
  0x52, 0x80,  //.%.%..%.%. 
  0x52, 0x80,  //.%.%..%.%. 
  0x4c, 0x80,  //.%..%%..%. 
  0x4c, 0x80,  //.%..%%..%. 
  0x4c, 0x80,  //.%..%%..%. 
  0x00, 0x00,  //.......... 
  0x00, 0x00,  //.......... 
  0x00, 0x00,  //.......... 


  /*Unicode: U+004e (N) , Width: 7 */
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x64,  //.%%..%. 
  0x64,  //.%%..%. 
  0x64,  //.%%..%. 
  0x54,  //.%.%.%. 
  0x54,  //.%.%.%. 
  0x5c,  //.%.%%%. 
  0x4c,  //.%..%%. 
  0x4c,  //.%..%%. 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 


  /*Unicode: U+004f (O) , Width: 8 */
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 
  0x3c,  //..%%%%.. 
  0x66,  //.%%..%%. 
  0x42,  //.%....%. 
  0xc2,  //%%....%. 
  0xc3,  //%%....%% 
  0x42,  //.%....%. 
  0x66,  //.%%..%%. 
  0x3c,  //..%%%%.. 
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 


  /*Unicode: U+0050 (P) , Width: 7 */
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x7c,  //.%%%%%. 
  0x44,  //.%...%. 
  0x46,  //.%...%% 
  0x44,  //.%...%. 
  0x7c,  //.%%%%%. 
  0x40,  //.%..... 
  0x40,  //.%..... 
  0x40,  //.%..... 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 


  /*Unicode: U+0051 (Q) , Width: 8 */
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 
  0x3c,  //..%%%%.. 
  0x66,  //.%%..%%. 
  0x42,  //.%....%. 
  0xc2,  //%%....%. 
  0xc2,  //%%....%. 
  0x42,  //.%....%. 
  0x66,  //.%%..%%. 
  0x3c,  //..%%%%.. 
  0x08,  //....%... 
  0x0e,  //....%%%. 
  0x00,  //........ 


  /*Unicode: U+0052 (R) , Width: 7 */
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x7c,  //.%%%%%. 
  0x4c,  //.%..%%. 
  0x44,  //.%...%. 
  0x4c,  //.%..%%. 
  0x78,  //.%%%%.. 
  0x48,  //.%..%.. 
  0x4c,  //.%..%%. 
  0x46,  //.%...%% 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 


  /*Unicode: U+0053 (S) , Width: 7 */
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x3c,  //..%%%%. 
  0x6c,  //.%%.%%. 
  0x40,  //.%..... 
  0x78,  //.%%%%.. 
  0x1c,  //...%%%. 
  0x06,  //.....%% 
  0x44,  //.%...%. 
  0x7c,  //.%%%%%. 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 


  /*Unicode: U+0054 (T) , Width: 7 */
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0xfe,  //%%%%%%% 
  0x10,  //...%... 
  0x10,  //...%... 
  0x10,  //...%... 
  0x10,  //...%... 
  0x10,  //...%... 
  0x10,  //...%... 
  0x10,  //...%... 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 


  /*Unicode: U+0055 (U) , Width: 7 */
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x44,  //.%...%. 
  0x44,  //.%...%. 
  0x44,  //.%...%. 
  0x44,  //.%...%. 
  0x44,  //.%...%. 
  0x44,  //.%...%. 
  0x6c,  //.%%.%%. 
  0x38,  //..%%%.. 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 


  /*Unicode: U+0056 (V) , Width: 8 */
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 
  0xc3,  //%%....%% 
  0x42,  //.%....%. 
  0x66,  //.%%..%%. 
  0x66,  //.%%..%%. 
  0x24,  //..%..%.. 
  0x3c,  //..%%%%.. 
  0x18,  //...%%... 
  0x18,  //...%%... 
  0x00,  //........ 
  0x00,  //........ 
  0x00,  //........ 


  /*Unicode: U+0057 (W) , Width: 10 */
  0x00, 0x00,  //.......... 
  0x00, 0x00,  //.......... 
  0x00, 0x00,  //.......... 
  0xcc, 0xc0,  //%%..%%..%% 
  0xcc, 0xc0,  //%%..%%..%% 
  0x4c, 0x80,  //.%..%%..%. 
  0x5e, 0x80,  //.%.%%%%.%. 
  0x52, 0x80,  //.%.%..%.%. 
  0x73, 0x80,  //.%%%..%%%. 
  0x33, 0x00,  //..%%..%%.. 
  0x33, 0x00,  //..%%..%%.. 
  0x00, 0x00,  //.......... 
  0x00, 0x00,  //.......... 
  0x00, 0x00,  //.......... 


  /*Unicode: U+0058 (X) , Width: 7 */
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x44,  //.%...%. 
  0x6c,  //.%%.%%. 
  0x38,  //..%%%.. 
  0x38,  //..%%%.. 
  0x38,  //..%%%.. 
  0x28,  //..%.%.. 
  0x6c,  //.%%.%%. 
  0xc6,  //%%...%% 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 


  /*Unicode: U+0059 (Y) , Width: 7 */
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0xc6,  //%%...%% 
  0x44,  //.%...%. 
  0x6c,  //.%%.%%. 
  0x38,  //..%%%.. 
  0x38,  //..%%%.. 
  0x10,  //...%... 
  0x10,  //...%... 
  0x10,  //...%... 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 


  /*Unicode: U+005a (Z) , Width: 7 */
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x7c,  //.%%%%%. 
  0x0c,  //....%%. 
  0x08,  //....%.. 
  0x18,  //...%%.. 
  0x30,  //..%%... 
  0x60,  //.%%.... 
  0x60,  //.%%.... 
  0xfe,  //%%%%%%% 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 


  /*Unicode: U+005b ([) , Width: 4 */
  0x00,  //.... 
  0x00,  //.... 
  0x00,  //.... 
  0x70,  //.%%% 
  0x40,  //.%.. 
  0x40,  //.%.. 
  0x40,  //.%.. 
  0x40,  //.%.. 
  0x40,  //.%.. 
  0x40,  //.%.. 
  0x40,  //.%.. 
  0x40,  //.%.. 
  0x70,  //.%%% 
  0x00,  //.... 


  /*Unicode: U+005c (\) , Width: 3 */
  0x00,  //... 
  0x00,  //... 
  0x00,  //... 
  0x80,  //%.. 
  0xc0,  //%%. 
  0x40,  //.%. 
  0x40,  //.%. 
  0x40,  //.%. 
  0x40,  //.%. 
  0x60,  //.%% 
  0x20,  //..% 
  0x00,  //... 
  0x00,  //... 
  0x00,  //... 


  /*Unicode: U+005d (]) , Width: 4 */
  0x00,  //.... 
  0x00,  //.... 
  0x00,  //.... 
  0xe0,  //%%%. 
  0x20,  //..%. 
  0x20,  //..%. 
  0x20,  //..%. 
  0x20,  //..%. 
  0x20,  //..%. 
  0x20,  //..%. 
  0x20,  //..%. 
  0x20,  //..%. 
  0xe0,  //%%%. 
  0x00,  //.... 


  /*Unicode: U+005e (^) , Width: 6 */
  0x00,  //...... 
  0x00,  //...... 
  0x00,  //...... 
  0x30,  //..%%.. 
  0x30,  //..%%.. 
  0x48,  //.%..%. 
  0x48,  //.%..%. 
  0xcc,  //%%..%% 
  0x00,  //...... 
  0x00,  //...... 
  0x00,  //...... 
  0x00,  //...... 
  0x00,  //...... 
  0x00,  //...... 


  /*Unicode: U+005f (_) , Width: 7 */
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 


  /*Unicode: U+0060 (`) , Width: 4 */
  0x00,  //.... 
  0x40,  //.%.. 
  0x60,  //.%%. 
  0x20,  //..%. 
  0x00,  //.... 
  0x00,  //.... 
  0x00,  //.... 
  0x00,  //.... 
  0x00,  //.... 
  0x00,  //.... 
  0x00,  //.... 
  0x00,  //.... 
  0x00,  //.... 
  0x00,  //.... 


  /*Unicode: U+0061 (a) , Width: 7 */
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x78,  //.%%%%.. 
  0x08,  //....%.. 
  0x78,  //.%%%%.. 
  0xc8,  //%%..%.. 
  0xd8,  //%%.%%.. 
  0x6c,  //.%%.%%. 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 


  /*Unicode: U+0062 (b) , Width: 7 */
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x40,  //.%..... 
  0x40,  //.%..... 
  0x7c,  //.%%%%%. 
  0x64,  //.%%..%. 
  0x44,  //.%...%. 
  0x44,  //.%...%. 
  0x64,  //.%%..%. 
  0x5c,  //.%.%%%. 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 


  /*Unicode: U+0063 (c) , Width: 6 */
  0x00,  //...... 
  0x00,  //...... 
  0x00,  //...... 
  0x00,  //...... 
  0x00,  //...... 
  0x38,  //..%%%. 
  0x48,  //.%..%. 
  0xc0,  //%%.... 
  0xc0,  //%%.... 
  0x4c,  //.%..%% 
  0x38,  //..%%%. 
  0x00,  //...... 
  0x00,  //...... 
  0x00,  //...... 


  /*Unicode: U+0064 (d) , Width: 7 */
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x04,  //.....%. 
  0x04,  //.....%. 
  0x7c,  //.%%%%%. 
  0x4c,  //.%..%%. 
  0x44,  //.%...%. 
  0x44,  //.%...%. 
  0x4c,  //.%..%%. 
  0x7c,  //.%%%%%. 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 


  /*Unicode: U+0065 (e) , Width: 7 */
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x38,  //..%%%.. 
  0x44,  //.%...%. 
  0x7c,  //.%%%%%. 
  0x40,  //.%..... 
  0x64,  //.%%..%. 
  0x38,  //..%%%.. 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 


  /*Unicode: U+0066 (f) , Width: 5 */
  0x00,  //..... 
  0x00,  //..... 
  0x00,  //..... 
  0x30,  //..%%. 
  0x60,  //.%%.. 
  0xf0,  //%%%%. 
  0x60,  //.%%.. 
  0x60,  //.%%.. 
  0x60,  //.%%.. 
  0x60,  //.%%.. 
  0x60,  //.%%.. 
  0x00,  //..... 
  0x00,  //..... 
  0x00,  //..... 


  /*Unicode: U+0067 (g) , Width: 7 */
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x7c,  //.%%%%%. 
  0x4c,  //.%..%%. 
  0x44,  //.%...%. 
  0x44,  //.%...%. 
  0x6c,  //.%%.%%. 
  0x7c,  //.%%%%%. 
  0x0c,  //....%%. 
  0x78,  //.%%%%.. 
  0x00,  //....... 


  /*Unicode: U+0068 (h) , Width: 7 */
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x40,  //.%..... 
  0x40,  //.%..... 
  0x5c,  //.%.%%%. 
  0x6c,  //.%%.%%. 
  0x44,  //.%...%. 
  0x44,  //.%...%. 
  0x44,  //.%...%. 
  0x44,  //.%...%. 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 


  /*Unicode: U+0069 (i) , Width: 3 */
  0x00,  //... 
  0x00,  //... 
  0x00,  //... 
  0x40,  //.%. 
  0x00,  //... 
  0x40,  //.%. 
  0x40,  //.%. 
  0x40,  //.%. 
  0x40,  //.%. 
  0x40,  //.%. 
  0x40,  //.%. 
  0x00,  //... 
  0x00,  //... 
  0x00,  //... 


  /*Unicode: U+006a (j) , Width: 3 */
  0x00,  //... 
  0x00,  //... 
  0x00,  //... 
  0x40,  //.%. 
  0x00,  //... 
  0x40,  //.%. 
  0x40,  //.%. 
  0x40,  //.%. 
  0x40,  //.%. 
  0x40,  //.%. 
  0x40,  //.%. 
  0x40,  //.%. 
  0xc0,  //%%. 
  0x00,  //... 


  /*Unicode: U+006b (k) , Width: 7 */
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x40,  //.%..... 
  0x40,  //.%..... 
  0x44,  //.%...%. 
  0x48,  //.%..%.. 
  0x78,  //.%%%%.. 
  0x78,  //.%%%%.. 
  0x4c,  //.%..%%. 
  0x46,  //.%...%% 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 


  /*Unicode: U+006c (l) , Width: 3 */
  0x00,  //... 
  0x00,  //... 
  0x00,  //... 
  0x40,  //.%. 
  0x40,  //.%. 
  0x40,  //.%. 
  0x40,  //.%. 
  0x40,  //.%. 
  0x40,  //.%. 
  0x40,  //.%. 
  0x40,  //.%. 
  0x00,  //... 
  0x00,  //... 
  0x00,  //... 


  /*Unicode: U+006d (m) , Width: 11 */
  0x00, 0x00,  //........... 
  0x00, 0x00,  //........... 
  0x00, 0x00,  //........... 
  0x00, 0x00,  //........... 
  0x00, 0x00,  //........... 
  0x5d, 0xc0,  //.%.%%%.%%%. 
  0x6e, 0xc0,  //.%%.%%%.%%. 
  0x44, 0x40,  //.%...%...%. 
  0x44, 0x40,  //.%...%...%. 
  0x44, 0x40,  //.%...%...%. 
  0x44, 0x40,  //.%...%...%. 
  0x00, 0x00,  //........... 
  0x00, 0x00,  //........... 
  0x00, 0x00,  //........... 


  /*Unicode: U+006e (n) , Width: 7 */
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x5c,  //.%.%%%. 
  0x6c,  //.%%.%%. 
  0x44,  //.%...%. 
  0x44,  //.%...%. 
  0x44,  //.%...%. 
  0x44,  //.%...%. 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 


  /*Unicode: U+006f (o) , Width: 7 */
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x38,  //..%%%.. 
  0x6c,  //.%%.%%. 
  0x44,  //.%...%. 
  0x44,  //.%...%. 
  0x6c,  //.%%.%%. 
  0x38,  //..%%%.. 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 


  /*Unicode: U+0070 (p) , Width: 7 */
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x7c,  //.%%%%%. 
  0x6c,  //.%%.%%. 
  0x44,  //.%...%. 
  0x44,  //.%...%. 
  0x64,  //.%%..%. 
  0x7c,  //.%%%%%. 
  0x40,  //.%..... 
  0x40,  //.%..... 
  0x00,  //....... 


  /*Unicode: U+0071 (q) , Width: 7 */
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x7c,  //.%%%%%. 
  0x4c,  //.%..%%. 
  0x44,  //.%...%. 
  0x44,  //.%...%. 
  0x4c,  //.%..%%. 
  0x7c,  //.%%%%%. 
  0x04,  //.....%. 
  0x04,  //.....%. 
  0x00,  //....... 


  /*Unicode: U+0072 (r) , Width: 5 */
  0x00,  //..... 
  0x00,  //..... 
  0x00,  //..... 
  0x00,  //..... 
  0x00,  //..... 
  0x58,  //.%.%% 
  0x60,  //.%%.. 
  0x40,  //.%... 
  0x40,  //.%... 
  0x40,  //.%... 
  0x40,  //.%... 
  0x00,  //..... 
  0x00,  //..... 
  0x00,  //..... 


  /*Unicode: U+0073 (s) , Width: 7 */
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x3c,  //..%%%%. 
  0x40,  //.%..... 
  0x70,  //.%%%... 
  0x1c,  //...%%%. 
  0x04,  //.....%. 
  0x7c,  //.%%%%%. 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 


  /*Unicode: U+0074 (t) , Width: 4 */
  0x00,  //.... 
  0x00,  //.... 
  0x00,  //.... 
  0x00,  //.... 
  0x40,  //.%.. 
  0xf0,  //%%%% 
  0x40,  //.%.. 
  0x40,  //.%.. 
  0x40,  //.%.. 
  0x60,  //.%%. 
  0x70,  //.%%% 
  0x00,  //.... 
  0x00,  //.... 
  0x00,  //.... 


  /*Unicode: U+0075 (u) , Width: 7 */
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x44,  //.%...%. 
  0x44,  //.%...%. 
  0x44,  //.%...%. 
  0x44,  //.%...%. 
  0x6c,  //.%%.%%. 
  0x74,  //.%%%.%. 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 


  /*Unicode: U+0076 (v) , Width: 6 */
  0x00,  //...... 
  0x00,  //...... 
  0x00,  //...... 
  0x00,  //...... 
  0x00,  //...... 
  0xcc,  //%%..%% 
  0x48,  //.%..%. 
  0x48,  //.%..%. 
  0x78,  //.%%%%. 
  0x30,  //..%%.. 
  0x30,  //..%%.. 
  0x00,  //...... 
  0x00,  //...... 
  0x00,  //...... 


  /*Unicode: U+0077 (w) , Width: 10 */
  0x00, 0x00,  //.......... 
  0x00, 0x00,  //.......... 
  0x00, 0x00,  //.......... 
  0x00, 0x00,  //.......... 
  0x00, 0x00,  //.......... 
  0xcc, 0xc0,  //%%..%%..%% 
  0xcc, 0xc0,  //%%..%%..%% 
  0x5e, 0x80,  //.%.%%%%.%. 
  0x52, 0x80,  //.%.%..%.%. 
  0x73, 0x80,  //.%%%..%%%. 
  0x33, 0x00,  //..%%..%%.. 
  0x00, 0x00,  //.......... 
  0x00, 0x00,  //.......... 
  0x00, 0x00,  //.......... 


  /*Unicode: U+0078 (x) , Width: 6 */
  0x00,  //...... 
  0x00,  //...... 
  0x00,  //...... 
  0x00,  //...... 
  0x00,  //...... 
  0x48,  //.%..%. 
  0x78,  //.%%%%. 
  0x30,  //..%%.. 
  0x30,  //..%%.. 
  0x78,  //.%%%%. 
  0xcc,  //%%..%% 
  0x00,  //...... 
  0x00,  //...... 
  0x00,  //...... 


  /*Unicode: U+0079 (y) , Width: 6 */
  0x00,  //...... 
  0x00,  //...... 
  0x00,  //...... 
  0x00,  //...... 
  0x00,  //...... 
  0xcc,  //%%..%% 
  0x48,  //.%..%. 
  0x48,  //.%..%. 
  0x78,  //.%%%%. 
  0x30,  //..%%.. 
  0x30,  //..%%.. 
  0x30,  //..%%.. 
  0x60,  //.%%... 
  0x00,  //...... 


  /*Unicode: U+007a (z) , Width: 6 */
  0x00,  //...... 
  0x00,  //...... 
  0x00,  //...... 
  0x00,  //...... 
  0x00,  //...... 
  0x78,  //.%%%%. 
  0x18,  //...%%. 
  0x30,  //..%%.. 
  0x20,  //..%... 
  0x60,  //.%%... 
  0xfc,  //%%%%%% 
  0x00,  //...... 
  0x00,  //...... 
  0x00,  //...... 


  /*Unicode: U+007b ({) , Width: 4 */
  0x00,  //.... 
  0x00,  //.... 
  0x00,  //.... 
  0x30,  //..%% 
  0x60,  //.%%. 
  0x60,  //.%%. 
  0x60,  //.%%. 
  0xc0,  //%%.. 
  0x60,  //.%%. 
  0x60,  //.%%. 
  0x60,  //.%%. 
  0x60,  //.%%. 
  0x30,  //..%% 
  0x00,  //.... 


  /*Unicode: U+007c (|) , Width: 3 */
  0x00,  //... 
  0x00,  //... 
  0x00,  //... 
  0x40,  //.%. 
  0x40,  //.%. 
  0x40,  //.%. 
  0x40,  //.%. 
  0x40,  //.%. 
  0x40,  //.%. 
  0x40,  //.%. 
  0x40,  //.%. 
  0x40,  //.%. 
  0x40,  //.%. 
  0x00,  //... 


  /*Unicode: U+007d (}) , Width: 4 */
  0x00,  //.... 
  0x00,  //.... 
  0x00,  //.... 
  0xc0,  //%%.. 
  0x60,  //.%%. 
  0x60,  //.%%. 
  0x60,  //.%%. 
  0x30,  //..%% 
  0x60,  //.%%. 
  0x60,  //.%%. 
  0x60,  //.%%. 
  0x60,  //.%%. 
  0xc0,  //%%.. 
  0x00,  //.... 


  /*Unicode: U+007e (~) , Width: 6 */
  0x00,  //...... 
  0x00,  //...... 
  0x00,  //...... 
  0x00,  //...... 
  0x00,  //...... 
  0x00,  //...... 
  0x60,  //.%%... 
  0x18,  //...%%. 
  0x00,  //...... 
  0x00,  //...... 
  0x00,  //...... 
  0x00,  //...... 
  0x00,  //...... 
  0x00,  //...... 


};


/*Store the glyph descriptions*/
static const lv_font_glyph_dsc_t liberation_sans_bold_14_glyph_dsc[] = 
{
  {.w_px = 4,	.glyph_index = 0},	/*Unicode: U+0020 ( )*/
  {.w_px = 3,	.glyph_index = 14},	/*Unicode: U+0021 (!)*/
  {.w_px = 5,	.glyph_index = 28},	/*Unicode: U+0022 (")*/
  {.w_px = 6,	.glyph_index = 42},	/*Unicode: U+0023 (#)*/
  {.w_px = 6,	.glyph_index = 56},	/*Unicode: U+0024 ($)*/
  {.w_px = 9,	.glyph_index = 70},	/*Unicode: U+0025 (%)*/
  {.w_px = 8,	.glyph_index = 98},	/*Unicode: U+0026 (&)*/
  {.w_px = 3,	.glyph_index = 112},	/*Unicode: U+0027 (')*/
  {.w_px = 4,	.glyph_index = 126},	/*Unicode: U+0028 (()*/
  {.w_px = 4,	.glyph_index = 140},	/*Unicode: U+0029 ())*/
  {.w_px = 4,	.glyph_index = 154},	/*Unicode: U+002a (*)*/
  {.w_px = 6,	.glyph_index = 168},	/*Unicode: U+002b (+)*/
  {.w_px = 3,	.glyph_index = 182},	/*Unicode: U+002c (,)*/
  {.w_px = 4,	.glyph_index = 196},	/*Unicode: U+002d (-)*/
  {.w_px = 3,	.glyph_index = 210},	/*Unicode: U+002e (.)*/
  {.w_px = 3,	.glyph_index = 224},	/*Unicode: U+002f (/)*/
  {.w_px = 6,	.glyph_index = 238},	/*Unicode: U+0030 (0)*/
  {.w_px = 6,	.glyph_index = 252},	/*Unicode: U+0031 (1)*/
  {.w_px = 6,	.glyph_index = 266},	/*Unicode: U+0032 (2)*/
  {.w_px = 6,	.glyph_index = 280},	/*Unicode: U+0033 (3)*/
  {.w_px = 6,	.glyph_index = 294},	/*Unicode: U+0034 (4)*/
  {.w_px = 6,	.glyph_index = 308},	/*Unicode: U+0035 (5)*/
  {.w_px = 6,	.glyph_index = 322},	/*Unicode: U+0036 (6)*/
  {.w_px = 6,	.glyph_index = 336},	/*Unicode: U+0037 (7)*/
  {.w_px = 6,	.glyph_index = 350},	/*Unicode: U+0038 (8)*/
  {.w_px = 6,	.glyph_index = 364},	/*Unicode: U+0039 (9)*/
  {.w_px = 3,	.glyph_index = 378},	/*Unicode: U+003a (:)*/
  {.w_px = 3,	.glyph_index = 392},	/*Unicode: U+003b (;)*/
  {.w_px = 6,	.glyph_index = 406},	/*Unicode: U+003c (<)*/
  {.w_px = 6,	.glyph_index = 420},	/*Unicode: U+003d (=)*/
  {.w_px = 6,	.glyph_index = 434},	/*Unicode: U+003e (>)*/
  {.w_px = 7,	.glyph_index = 448},	/*Unicode: U+003f (?)*/
  {.w_px = 11,	.glyph_index = 462},	/*Unicode: U+0040 (@)*/
  {.w_px = 8,	.glyph_index = 490},	/*Unicode: U+0041 (A)*/
  {.w_px = 7,	.glyph_index = 504},	/*Unicode: U+0042 (B)*/
  {.w_px = 8,	.glyph_index = 518},	/*Unicode: U+0043 (C)*/
  {.w_px = 7,	.glyph_index = 532},	/*Unicode: U+0044 (D)*/
  {.w_px = 6,	.glyph_index = 546},	/*Unicode: U+0045 (E)*/
  {.w_px = 6,	.glyph_index = 560},	/*Unicode: U+0046 (F)*/
  {.w_px = 8,	.glyph_index = 574},	/*Unicode: U+0047 (G)*/
  {.w_px = 7,	.glyph_index = 588},	/*Unicode: U+0048 (H)*/
  {.w_px = 3,	.glyph_index = 602},	/*Unicode: U+0049 (I)*/
  {.w_px = 6,	.glyph_index = 616},	/*Unicode: U+004a (J)*/
  {.w_px = 7,	.glyph_index = 630},	/*Unicode: U+004b (K)*/
  {.w_px = 7,	.glyph_index = 644},	/*Unicode: U+004c (L)*/
  {.w_px = 10,	.glyph_index = 658},	/*Unicode: U+004d (M)*/
  {.w_px = 7,	.glyph_index = 686},	/*Unicode: U+004e (N)*/
  {.w_px = 8,	.glyph_index = 700},	/*Unicode: U+004f (O)*/
  {.w_px = 7,	.glyph_index = 714},	/*Unicode: U+0050 (P)*/
  {.w_px = 8,	.glyph_index = 728},	/*Unicode: U+0051 (Q)*/
  {.w_px = 7,	.glyph_index = 742},	/*Unicode: U+0052 (R)*/
  {.w_px = 7,	.glyph_index = 756},	/*Unicode: U+0053 (S)*/
  {.w_px = 7,	.glyph_index = 770},	/*Unicode: U+0054 (T)*/
  {.w_px = 7,	.glyph_index = 784},	/*Unicode: U+0055 (U)*/
  {.w_px = 8,	.glyph_index = 798},	/*Unicode: U+0056 (V)*/
  {.w_px = 10,	.glyph_index = 812},	/*Unicode: U+0057 (W)*/
  {.w_px = 7,	.glyph_index = 840},	/*Unicode: U+0058 (X)*/
  {.w_px = 7,	.glyph_index = 854},	/*Unicode: U+0059 (Y)*/
  {.w_px = 7,	.glyph_index = 868},	/*Unicode: U+005a (Z)*/
  {.w_px = 4,	.glyph_index = 882},	/*Unicode: U+005b ([)*/
  {.w_px = 3,	.glyph_index = 896},	/*Unicode: U+005c (\)*/
  {.w_px = 4,	.glyph_index = 910},	/*Unicode: U+005d (])*/
  {.w_px = 6,	.glyph_index = 924},	/*Unicode: U+005e (^)*/
  {.w_px = 7,	.glyph_index = 938},	/*Unicode: U+005f (_)*/
  {.w_px = 4,	.glyph_index = 952},	/*Unicode: U+0060 (`)*/
  {.w_px = 7,	.glyph_index = 966},	/*Unicode: U+0061 (a)*/
  {.w_px = 7,	.glyph_index = 980},	/*Unicode: U+0062 (b)*/
  {.w_px = 6,	.glyph_index = 994},	/*Unicode: U+0063 (c)*/
  {.w_px = 7,	.glyph_index = 1008},	/*Unicode: U+0064 (d)*/
  {.w_px = 7,	.glyph_index = 1022},	/*Unicode: U+0065 (e)*/
  {.w_px = 5,	.glyph_index = 1036},	/*Unicode: U+0066 (f)*/
  {.w_px = 7,	.glyph_index = 1050},	/*Unicode: U+0067 (g)*/
  {.w_px = 7,	.glyph_index = 1064},	/*Unicode: U+0068 (h)*/
  {.w_px = 3,	.glyph_index = 1078},	/*Unicode: U+0069 (i)*/
  {.w_px = 3,	.glyph_index = 1092},	/*Unicode: U+006a (j)*/
  {.w_px = 7,	.glyph_index = 1106},	/*Unicode: U+006b (k)*/
  {.w_px = 3,	.glyph_index = 1120},	/*Unicode: U+006c (l)*/
  {.w_px = 11,	.glyph_index = 1134},	/*Unicode: U+006d (m)*/
  {.w_px = 7,	.glyph_index = 1162},	/*Unicode: U+006e (n)*/
  {.w_px = 7,	.glyph_index = 1176},	/*Unicode: U+006f (o)*/
  {.w_px = 7,	.glyph_index = 1190},	/*Unicode: U+0070 (p)*/
  {.w_px = 7,	.glyph_index = 1204},	/*Unicode: U+0071 (q)*/
  {.w_px = 5,	.glyph_index = 1218},	/*Unicode: U+0072 (r)*/
  {.w_px = 7,	.glyph_index = 1232},	/*Unicode: U+0073 (s)*/
  {.w_px = 4,	.glyph_index = 1246},	/*Unicode: U+0074 (t)*/
  {.w_px = 7,	.glyph_index = 1260},	/*Unicode: U+0075 (u)*/
  {.w_px = 6,	.glyph_index = 1274},	/*Unicode: U+0076 (v)*/
  {.w_px = 10,	.glyph_index = 1288},	/*Unicode: U+0077 (w)*/
  {.w_px = 6,	.glyph_index = 1316},	/*Unicode: U+0078 (x)*/
  {.w_px = 6,	.glyph_index = 1330},	/*Unicode: U+0079 (y)*/
  {.w_px = 6,	.glyph_index = 1344},	/*Unicode: U+007a (z)*/
  {.w_px = 4,	.glyph_index = 1358},	/*Unicode: U+007b ({)*/
  {.w_px = 3,	.glyph_index = 1372},	/*Unicode: U+007c (|)*/
  {.w_px = 4,	.glyph_index = 1386},	/*Unicode: U+007d (})*/
  {.w_px = 6,	.glyph_index = 1400},	/*Unicode: U+007e (~)*/
};

lv_font_t liberation_sans_bold_14 = 
{
    .unicode_first = 32,	/*First Unicode letter in this font*/
    .unicode_last = 126,	/*Last Unicode letter in this font*/
    .h_px = 14,				/*Font height in pixels*/
    .glyph_bitmap = liberation_sans_bold_14_glyph_bitmap,	/*Bitmap of glyphs*/
    .glyph_dsc = liberation_sans_bold_14_glyph_dsc,		/*Description of glyphs*/
    .glyph_cnt = 95,			/*Number of glyphs in the font*/
    .unicode_list = NULL,	/*Every character in the font from 'unicode_first' to 'unicode_last'*/
    .get_bitmap = lv_font_get_bitmap_continuous,	/*Function pointer to get glyph's bitmap*/
    .get_width = lv_font_get_width_continuous,	/*Function pointer to get glyph's width*/
    .bpp = 1,				/*Bit per pixel*/
    .monospace = 0,				/*Fix width (0: if not used)*/
    .next_page = NULL,		/*Pointer to a font extension*/
};