
#include "lvgl/lvgl.h"

/***********************************************************************************
 * synchronizer_nbp.ttf 10 px Font in U+0020 ( ) .. U+007e (~)  range with 1 bpp
***********************************************************************************/

/*Store the image of the letters (glyph)*/
static const uint8_t synchronizer_10_glyph_bitmap[] = 
{
  /*Unicode: U+0020 ( ) , Width: 3 */
  0x00,  //... 
  0x00,  //... 
  0x00,  //... 
  0x00,  //... 
  0x00,  //... 
  0x00,  //... 
  0x00,  //... 
  0x00,  //... 
  0x00,  //... 
  0x00,  //... 


  /*Unicode: U+0021 (!) , Width: 2 */
  0x00,  //.. 
  0x80,  //%. 
  0x80,  //%. 
  0x80,  //%. 
  0x80,  //%. 
  0x80,  //%. 
  0x00,  //.. 
  0x80,  //%. 
  0x00,  //.. 
  0x00,  //.. 


  /*Unicode: U+0022 (") , Width: 5 */
  0x00,  //..... 
  0x90,  //%..%. 
  0x90,  //%..%. 
  0x90,  //%..%. 
  0x90,  //%..%. 
  0x00,  //..... 
  0x00,  //..... 
  0x00,  //..... 
  0x00,  //..... 
  0x00,  //..... 


  /*Unicode: U+0023 (#) , Width: 6 */
  0x00,  //...... 
  0x50,  //.%.%.. 
  0xfc,  //%%%%%% 
  0x50,  //.%.%.. 
  0x50,  //.%.%.. 
  0xfc,  //%%%%%% 
  0x50,  //.%.%.. 
  0x00,  //...... 
  0x00,  //...... 
  0x00,  //...... 


  /*Unicode: U+0024 ($) , Width: 7 */
  0x00,  //....... 
  0x7c,  //.%%%%%. 
  0x90,  //%..%... 
  0x78,  //.%%%%.. 
  0x14,  //...%.%. 
  0x10,  //...%... 
  0xf8,  //%%%%%.. 
  0x10,  //...%... 
  0x00,  //....... 
  0x00,  //....... 


  /*Unicode: U+0025 (%) , Width: 7 */
  0x00,  //....... 
  0x00,  //....... 
  0xc4,  //%%...%. 
  0xc8,  //%%..%.. 
  0x10,  //...%... 
  0x00,  //....... 
  0x4c,  //.%..%%. 
  0x8c,  //%...%%. 
  0x00,  //....... 
  0x00,  //....... 


  /*Unicode: U+0026 (&) , Width: 7 */
  0x00,  //....... 
  0x78,  //.%%%%.. 
  0x80,  //%...... 
  0x7c,  //.%%%%%. 
  0x08,  //....%.. 
  0x88,  //%...%.. 
  0x88,  //%...%.. 
  0x78,  //.%%%%.. 
  0x00,  //....... 
  0x00,  //....... 


  /*Unicode: U+0027 (') , Width: 3 */
  0x00,  //... 
  0xc0,  //%%. 
  0x40,  //.%. 
  0x80,  //%.. 
  0x00,  //... 
  0x00,  //... 
  0x00,  //... 
  0x00,  //... 
  0x00,  //... 
  0x00,  //... 


  /*Unicode: U+0028 (() , Width: 3 */
  0x00,  //... 
  0x40,  //.%. 
  0x80,  //%.. 
  0x80,  //%.. 
  0x80,  //%.. 
  0x80,  //%.. 
  0x80,  //%.. 
  0x40,  //.%. 
  0x00,  //... 
  0x00,  //... 


  /*Unicode: U+0029 ()) , Width: 3 */
  0x00,  //... 
  0x80,  //%.. 
  0x40,  //.%. 
  0x40,  //.%. 
  0x40,  //.%. 
  0x40,  //.%. 
  0x40,  //.%. 
  0x80,  //%.. 
  0x00,  //... 
  0x00,  //... 


  /*Unicode: U+002a (*) , Width: 7 */
  0x00,  //....... 
  0x10,  //...%... 
  0x94,  //%..%.%. 
  0x78,  //.%%%%.. 
  0x10,  //...%... 
  0x94,  //%..%.%. 
  0x10,  //...%... 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 


  /*Unicode: U+002b (+) , Width: 6 */
  0x00,  //...... 
  0x00,  //...... 
  0x10,  //...%.. 
  0x10,  //...%.. 
  0xfc,  //%%%%%% 
  0x10,  //...%.. 
  0x10,  //...%.. 
  0x10,  //...%.. 
  0x00,  //...... 
  0x00,  //...... 


  /*Unicode: U+002c (,) , Width: 3 */
  0x00,  //... 
  0x00,  //... 
  0x00,  //... 
  0x00,  //... 
  0xc0,  //%%. 
  0x40,  //.%. 
  0x00,  //... 
  0x80,  //%.. 
  0x00,  //... 
  0x00,  //... 


  /*Unicode: U+002d (-) , Width: 6 */
  0x00,  //...... 
  0x00,  //...... 
  0x00,  //...... 
  0x00,  //...... 
  0xfc,  //%%%%%% 
  0x00,  //...... 
  0x00,  //...... 
  0x00,  //...... 
  0x00,  //...... 
  0x00,  //...... 


  /*Unicode: U+002e (.) , Width: 3 */
  0x00,  //... 
  0x00,  //... 
  0x00,  //... 
  0x00,  //... 
  0x00,  //... 
  0x00,  //... 
  0xe0,  //%%% 
  0xe0,  //%%% 
  0x00,  //... 
  0x00,  //... 


  /*Unicode: U+002f (/) , Width: 7 */
  0x00,  //....... 
  0x00,  //....... 
  0x04,  //.....%. 
  0x08,  //....%.. 
  0x10,  //...%... 
  0x00,  //....... 
  0x40,  //.%..... 
  0x80,  //%...... 
  0x00,  //....... 
  0x00,  //....... 


  /*Unicode: U+0030 (0) , Width: 7 */
  0x00,  //....... 
  0x78,  //.%%%%.. 
  0x8c,  //%...%%. 
  0x94,  //%..%.%. 
  0xe4,  //%%%..%. 
  0x84,  //%....%. 
  0x84,  //%....%. 
  0x78,  //.%%%%.. 
  0x00,  //....... 
  0x00,  //....... 


  /*Unicode: U+0031 (1) , Width: 4 */
  0x00,  //.... 
  0x20,  //..%. 
  0x60,  //.%%. 
  0x20,  //..%. 
  0x20,  //..%. 
  0x20,  //..%. 
  0x20,  //..%. 
  0x20,  //..%. 
  0x00,  //.... 
  0x00,  //.... 


  /*Unicode: U+0032 (2) , Width: 7 */
  0x00,  //....... 
  0x78,  //.%%%%.. 
  0x84,  //%....%. 
  0x38,  //..%%%.. 
  0x40,  //.%..... 
  0x00,  //....... 
  0x80,  //%...... 
  0xfc,  //%%%%%%. 
  0x00,  //....... 
  0x00,  //....... 


  /*Unicode: U+0033 (3) , Width: 7 */
  0x00,  //....... 
  0x78,  //.%%%%.. 
  0x84,  //%....%. 
  0x38,  //..%%%.. 
  0x00,  //....... 
  0x04,  //.....%. 
  0x84,  //%....%. 
  0x78,  //.%%%%.. 
  0x00,  //....... 
  0x00,  //....... 


  /*Unicode: U+0034 (4) , Width: 6 */
  0x00,  //...... 
  0x10,  //...%.. 
  0x30,  //..%%.. 
  0x50,  //.%.%.. 
  0xfc,  //%%%%%% 
  0x10,  //...%.. 
  0x10,  //...%.. 
  0x10,  //...%.. 
  0x00,  //...... 
  0x00,  //...... 


  /*Unicode: U+0035 (5) , Width: 7 */
  0x00,  //....... 
  0xfc,  //%%%%%%. 
  0x80,  //%...... 
  0xf8,  //%%%%%.. 
  0x00,  //....... 
  0x04,  //.....%. 
  0x04,  //.....%. 
  0xf8,  //%%%%%.. 
  0x00,  //....... 
  0x00,  //....... 


  /*Unicode: U+0036 (6) , Width: 7 */
  0x00,  //....... 
  0x78,  //.%%%%.. 
  0x80,  //%...... 
  0xf8,  //%%%%%.. 
  0x80,  //%...... 
  0x84,  //%....%. 
  0x84,  //%....%. 
  0x78,  //.%%%%.. 
  0x00,  //....... 
  0x00,  //....... 


  /*Unicode: U+0037 (7) , Width: 7 */
  0x00,  //....... 
  0xfe,  //%%%%%%% 
  0x06,  //.....%% 
  0x08,  //....%.. 
  0x10,  //...%... 
  0x10,  //...%... 
  0x10,  //...%... 
  0x10,  //...%... 
  0x00,  //....... 
  0x00,  //....... 


  /*Unicode: U+0038 (8) , Width: 7 */
  0x00,  //....... 
  0x78,  //.%%%%.. 
  0x84,  //%....%. 
  0x78,  //.%%%%.. 
  0x00,  //....... 
  0x84,  //%....%. 
  0x84,  //%....%. 
  0x78,  //.%%%%.. 
  0x00,  //....... 
  0x00,  //....... 


  /*Unicode: U+0039 (9) , Width: 7 */
  0x00,  //....... 
  0x78,  //.%%%%.. 
  0x84,  //%....%. 
  0x84,  //%....%. 
  0x7c,  //.%%%%%. 
  0x04,  //.....%. 
  0x04,  //.....%. 
  0x78,  //.%%%%.. 
  0x00,  //....... 
  0x00,  //....... 


  /*Unicode: U+003a (:) , Width: 3 */
  0x00,  //... 
  0xe0,  //%%% 
  0xe0,  //%%% 
  0x00,  //... 
  0x00,  //... 
  0x00,  //... 
  0xe0,  //%%% 
  0xe0,  //%%% 
  0x00,  //... 
  0x00,  //... 


  /*Unicode: U+003b (;) , Width: 3 */
  0x00,  //... 
  0xc0,  //%%. 
  0xc0,  //%%. 
  0x00,  //... 
  0xc0,  //%%. 
  0x40,  //.%. 
  0x00,  //... 
  0x80,  //%.. 
  0x00,  //... 
  0x00,  //... 


  /*Unicode: U+003c (<) , Width: 4 */
  0x00,  //.... 
  0x00,  //.... 
  0x30,  //..%% 
  0x40,  //.%.. 
  0x80,  //%... 
  0x00,  //.... 
  0x40,  //.%.. 
  0x30,  //..%% 
  0x00,  //.... 
  0x00,  //.... 


  /*Unicode: U+003d (=) , Width: 6 */
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


  /*Unicode: U+003e (>) , Width: 4 */
  0x00,  //.... 
  0x00,  //.... 
  0x80,  //%... 
  0x40,  //.%.. 
  0x30,  //..%% 
  0x00,  //.... 
  0x40,  //.%.. 
  0x80,  //%... 
  0x00,  //.... 
  0x00,  //.... 


  /*Unicode: U+003f (?) , Width: 7 */
  0x00,  //....... 
  0x78,  //.%%%%.. 
  0x84,  //%....%. 
  0x08,  //....%.. 
  0x10,  //...%... 
  0x00,  //....... 
  0x00,  //....... 
  0x10,  //...%... 
  0x00,  //....... 
  0x00,  //....... 


  /*Unicode: U+0040 (@) , Width: 7 */
  0x00,  //....... 
  0x78,  //.%%%%.. 
  0x84,  //%....%. 
  0x9c,  //%..%%%. 
  0x94,  //%..%.%. 
  0x94,  //%..%.%. 
  0x94,  //%..%.%. 
  0x7c,  //.%%%%%. 
  0x00,  //....... 
  0x00,  //....... 


  /*Unicode: U+0041 (A) , Width: 7 */
  0x00,  //....... 
  0x78,  //.%%%%.. 
  0x84,  //%....%. 
  0x84,  //%....%. 
  0xfc,  //%%%%%%. 
  0x84,  //%....%. 
  0x84,  //%....%. 
  0x84,  //%....%. 
  0x00,  //....... 
  0x00,  //....... 


  /*Unicode: U+0042 (B) , Width: 7 */
  0x00,  //....... 
  0xf8,  //%%%%%.. 
  0x84,  //%....%. 
  0xf8,  //%%%%%.. 
  0x80,  //%...... 
  0x84,  //%....%. 
  0x84,  //%....%. 
  0xf8,  //%%%%%.. 
  0x00,  //....... 
  0x00,  //....... 


  /*Unicode: U+0043 (C) , Width: 6 */
  0x00,  //...... 
  0x7c,  //.%%%%% 
  0x80,  //%..... 
  0x80,  //%..... 
  0x80,  //%..... 
  0x80,  //%..... 
  0x80,  //%..... 
  0x7c,  //.%%%%% 
  0x00,  //...... 
  0x00,  //...... 


  /*Unicode: U+0044 (D) , Width: 7 */
  0x00,  //....... 
  0xf8,  //%%%%%.. 
  0x84,  //%....%. 
  0x84,  //%....%. 
  0x84,  //%....%. 
  0x84,  //%....%. 
  0x84,  //%....%. 
  0xf8,  //%%%%%.. 
  0x00,  //....... 
  0x00,  //....... 


  /*Unicode: U+0045 (E) , Width: 7 */
  0x00,  //....... 
  0xfc,  //%%%%%%. 
  0x80,  //%...... 
  0xf8,  //%%%%%.. 
  0x80,  //%...... 
  0x80,  //%...... 
  0x80,  //%...... 
  0xfc,  //%%%%%%. 
  0x00,  //....... 
  0x00,  //....... 


  /*Unicode: U+0046 (F) , Width: 7 */
  0x00,  //....... 
  0xfc,  //%%%%%%. 
  0x80,  //%...... 
  0xf8,  //%%%%%.. 
  0x80,  //%...... 
  0x80,  //%...... 
  0x80,  //%...... 
  0x80,  //%...... 
  0x00,  //....... 
  0x00,  //....... 


  /*Unicode: U+0047 (G) , Width: 6 */
  0x00,  //...... 
  0x7c,  //.%%%%% 
  0x80,  //%..... 
  0xbc,  //%.%%%% 
  0x84,  //%....% 
  0x84,  //%....% 
  0x84,  //%....% 
  0x7c,  //.%%%%% 
  0x00,  //...... 
  0x00,  //...... 


  /*Unicode: U+0048 (H) , Width: 7 */
  0x00,  //....... 
  0x84,  //%....%. 
  0x84,  //%....%. 
  0xfc,  //%%%%%%. 
  0x84,  //%....%. 
  0x84,  //%....%. 
  0x84,  //%....%. 
  0x84,  //%....%. 
  0x00,  //....... 
  0x00,  //....... 


  /*Unicode: U+0049 (I) , Width: 6 */
  0x00,  //...... 
  0xfc,  //%%%%%% 
  0x10,  //...%.. 
  0x10,  //...%.. 
  0x10,  //...%.. 
  0x10,  //...%.. 
  0x10,  //...%.. 
  0xfc,  //%%%%%% 
  0x00,  //...... 
  0x00,  //...... 


  /*Unicode: U+004a (J) , Width: 7 */
  0x00,  //....... 
  0x0c,  //....%%. 
  0x04,  //.....%. 
  0x04,  //.....%. 
  0x04,  //.....%. 
  0x04,  //.....%. 
  0x84,  //%....%. 
  0x78,  //.%%%%.. 
  0x00,  //....... 
  0x00,  //....... 


  /*Unicode: U+004b (K) , Width: 7 */
  0x00,  //....... 
  0x84,  //%....%. 
  0x88,  //%...%.. 
  0x90,  //%..%... 
  0xf0,  //%%%%... 
  0x80,  //%...... 
  0x88,  //%...%.. 
  0x84,  //%....%. 
  0x00,  //....... 
  0x00,  //....... 


  /*Unicode: U+004c (L) , Width: 7 */
  0x00,  //....... 
  0x80,  //%...... 
  0x80,  //%...... 
  0x80,  //%...... 
  0x80,  //%...... 
  0x80,  //%...... 
  0x80,  //%...... 
  0xfc,  //%%%%%%. 
  0x00,  //....... 
  0x00,  //....... 


  /*Unicode: U+004d (M) , Width: 8 */
  0x00,  //........ 
  0x82,  //%.....%. 
  0xee,  //%%%.%%%. 
  0x92,  //%..%..%. 
  0x92,  //%..%..%. 
  0x82,  //%.....%. 
  0x82,  //%.....%. 
  0x82,  //%.....%. 
  0x00,  //........ 
  0x00,  //........ 


  /*Unicode: U+004e (N) , Width: 8 */
  0x00,  //........ 
  0x82,  //%.....%. 
  0xe2,  //%%%...%. 
  0x92,  //%..%..%. 
  0x8e,  //%...%%%. 
  0x82,  //%.....%. 
  0x82,  //%.....%. 
  0x82,  //%.....%. 
  0x00,  //........ 
  0x00,  //........ 


  /*Unicode: U+004f (O) , Width: 7 */
  0x00,  //....... 
  0x78,  //.%%%%.. 
  0x84,  //%....%. 
  0x84,  //%....%. 
  0x84,  //%....%. 
  0x84,  //%....%. 
  0x84,  //%....%. 
  0x78,  //.%%%%.. 
  0x00,  //....... 
  0x00,  //....... 


  /*Unicode: U+0050 (P) , Width: 7 */
  0x00,  //....... 
  0xf8,  //%%%%%.. 
  0x84,  //%....%. 
  0x84,  //%....%. 
  0xf8,  //%%%%%.. 
  0x80,  //%...... 
  0x80,  //%...... 
  0x80,  //%...... 
  0x00,  //....... 
  0x00,  //....... 


  /*Unicode: U+0051 (Q) , Width: 7 */
  0x00,  //....... 
  0x78,  //.%%%%.. 
  0x84,  //%....%. 
  0x84,  //%....%. 
  0x84,  //%....%. 
  0x94,  //%..%.%. 
  0x88,  //%...%.. 
  0x74,  //.%%%.%. 
  0x00,  //....... 
  0x00,  //....... 


  /*Unicode: U+0052 (R) , Width: 6 */
  0x00,  //...... 
  0xf8,  //%%%%%. 
  0x84,  //%....% 
  0x84,  //%....% 
  0xf8,  //%%%%%. 
  0x90,  //%..%.. 
  0x80,  //%..... 
  0x8c,  //%...%% 
  0x00,  //...... 
  0x00,  //...... 


  /*Unicode: U+0053 (S) , Width: 8 */
  0x00,  //........ 
  0x7e,  //.%%%%%%. 
  0x80,  //%....... 
  0x70,  //.%%%.... 
  0x0c,  //....%%.. 
  0x00,  //........ 
  0x02,  //......%. 
  0xfc,  //%%%%%%.. 
  0x00,  //........ 
  0x00,  //........ 


  /*Unicode: U+0054 (T) , Width: 6 */
  0x00,  //...... 
  0xfc,  //%%%%%% 
  0x10,  //...%.. 
  0x10,  //...%.. 
  0x10,  //...%.. 
  0x10,  //...%.. 
  0x10,  //...%.. 
  0x10,  //...%.. 
  0x00,  //...... 
  0x00,  //...... 


  /*Unicode: U+0055 (U) , Width: 7 */
  0x00,  //....... 
  0x84,  //%....%. 
  0x84,  //%....%. 
  0x84,  //%....%. 
  0x84,  //%....%. 
  0x84,  //%....%. 
  0x84,  //%....%. 
  0x78,  //.%%%%.. 
  0x00,  //....... 
  0x00,  //....... 


  /*Unicode: U+0056 (V) , Width: 10 */
  0x00, 0x00,  //.......... 
  0x80, 0x80,  //%.......%. 
  0x42, 0x00,  //.%....%... 
  0x42, 0x00,  //.%....%... 
  0x00, 0x00,  //.......... 
  0x14, 0x00,  //...%.%.... 
  0x14, 0x00,  //...%.%.... 
  0x08, 0x00,  //....%..... 
  0x00, 0x00,  //.......... 
  0x00, 0x00,  //.......... 


  /*Unicode: U+0057 (W) , Width: 8 */
  0x00,  //........ 
  0x82,  //%.....%. 
  0x82,  //%.....%. 
  0x92,  //%..%..%. 
  0x92,  //%..%..%. 
  0x82,  //%.....%. 
  0xee,  //%%%.%%%. 
  0x82,  //%.....%. 
  0x00,  //........ 
  0x00,  //........ 


  /*Unicode: U+0058 (X) , Width: 7 */
  0x00,  //....... 
  0x84,  //%....%. 
  0x48,  //.%..%.. 
  0x10,  //...%... 
  0x48,  //.%..%.. 
  0x00,  //....... 
  0x84,  //%....%. 
  0x84,  //%....%. 
  0x00,  //....... 
  0x00,  //....... 


  /*Unicode: U+0059 (Y) , Width: 7 */
  0x00,  //....... 
  0x84,  //%....%. 
  0x48,  //.%..%.. 
  0x10,  //...%... 
  0x10,  //...%... 
  0x10,  //...%... 
  0x10,  //...%... 
  0x10,  //...%... 
  0x00,  //....... 
  0x00,  //....... 


  /*Unicode: U+005a (Z) , Width: 8 */
  0x00,  //........ 
  0xff,  //%%%%%%%% 
  0x04,  //.....%.. 
  0x08,  //....%... 
  0x10,  //...%.... 
  0x00,  //........ 
  0x40,  //.%...... 
  0xff,  //%%%%%%%% 
  0x00,  //........ 
  0x00,  //........ 


  /*Unicode: U+005b ([) , Width: 3 */
  0x00,  //... 
  0xc0,  //%%. 
  0x80,  //%.. 
  0x80,  //%.. 
  0x80,  //%.. 
  0x80,  //%.. 
  0x80,  //%.. 
  0xc0,  //%%. 
  0x00,  //... 
  0x00,  //... 


  /*Unicode: U+005c (\) , Width: 7 */
  0x00,  //....... 
  0x00,  //....... 
  0x80,  //%...... 
  0x40,  //.%..... 
  0x10,  //...%... 
  0x00,  //....... 
  0x08,  //....%.. 
  0x04,  //.....%. 
  0x00,  //....... 
  0x00,  //....... 


  /*Unicode: U+005d (]) , Width: 3 */
  0x00,  //... 
  0xc0,  //%%. 
  0x40,  //.%. 
  0x40,  //.%. 
  0x40,  //.%. 
  0x40,  //.%. 
  0x40,  //.%. 
  0xc0,  //%%. 
  0x00,  //... 
  0x00,  //... 


  /*Unicode: U+005e (^) , Width: 7 */
  0x00,  //....... 
  0x10,  //...%... 
  0x48,  //.%..%.. 
  0x84,  //%....%. 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 


  /*Unicode: U+005f (_) , Width: 6 */
  0x00,  //...... 
  0x00,  //...... 
  0x00,  //...... 
  0x00,  //...... 
  0x00,  //...... 
  0x00,  //...... 
  0x00,  //...... 
  0xfc,  //%%%%%% 
  0x00,  //...... 
  0x00,  //...... 


  /*Unicode: U+0060 (`) , Width: 3 */
  0x00,  //... 
  0x80,  //%.. 
  0x40,  //.%. 
  0x00,  //... 
  0x00,  //... 
  0x00,  //... 
  0x00,  //... 
  0x00,  //... 
  0x00,  //... 
  0x00,  //... 


  /*Unicode: U+0061 (a) , Width: 7 */
  0x00,  //....... 
  0x00,  //....... 
  0x78,  //.%%%%.. 
  0x04,  //.....%. 
  0x7c,  //.%%%%%. 
  0x04,  //.....%. 
  0x84,  //%....%. 
  0x7c,  //.%%%%%. 
  0x00,  //....... 
  0x00,  //....... 


  /*Unicode: U+0062 (b) , Width: 6 */
  0x00,  //...... 
  0x80,  //%..... 
  0xb8,  //%.%%%. 
  0xcc,  //%%..%% 
  0x84,  //%....% 
  0x84,  //%....% 
  0x88,  //%...%. 
  0xf8,  //%%%%%. 
  0x00,  //...... 
  0x00,  //...... 


  /*Unicode: U+0063 (c) , Width: 6 */
  0x00,  //...... 
  0x00,  //...... 
  0x7c,  //.%%%%% 
  0x80,  //%..... 
  0x80,  //%..... 
  0x80,  //%..... 
  0x80,  //%..... 
  0x7c,  //.%%%%% 
  0x00,  //...... 
  0x00,  //...... 


  /*Unicode: U+0064 (d) , Width: 7 */
  0x00,  //....... 
  0x04,  //.....%. 
  0x74,  //.%%%.%. 
  0x8c,  //%...%%. 
  0x84,  //%....%. 
  0x84,  //%....%. 
  0x84,  //%....%. 
  0x7c,  //.%%%%%. 
  0x00,  //....... 
  0x00,  //....... 


  /*Unicode: U+0065 (e) , Width: 7 */
  0x00,  //....... 
  0x00,  //....... 
  0x78,  //.%%%%.. 
  0x84,  //%....%. 
  0xfc,  //%%%%%%. 
  0x80,  //%...... 
  0x80,  //%...... 
  0x7c,  //.%%%%%. 
  0x00,  //....... 
  0x00,  //....... 


  /*Unicode: U+0066 (f) , Width: 6 */
  0x00,  //...... 
  0x3c,  //..%%%% 
  0x40,  //.%.... 
  0xfc,  //%%%%%% 
  0x40,  //.%.... 
  0x40,  //.%.... 
  0x40,  //.%.... 
  0x40,  //.%.... 
  0x00,  //...... 
  0x00,  //...... 


  /*Unicode: U+0067 (g) , Width: 7 */
  0x00,  //....... 
  0x00,  //....... 
  0x7c,  //.%%%%%. 
  0x84,  //%....%. 
  0x7c,  //.%%%%%. 
  0x04,  //.....%. 
  0x04,  //.....%. 
  0xf8,  //%%%%%.. 
  0x00,  //....... 
  0x00,  //....... 


  /*Unicode: U+0068 (h) , Width: 6 */
  0x00,  //...... 
  0x80,  //%..... 
  0xb8,  //%.%%%. 
  0xcc,  //%%..%% 
  0x84,  //%....% 
  0x84,  //%....% 
  0x84,  //%....% 
  0x84,  //%....% 
  0x00,  //...... 
  0x00,  //...... 


  /*Unicode: U+0069 (i) , Width: 3 */
  0x00,  //... 
  0x40,  //.%. 
  0x00,  //... 
  0x40,  //.%. 
  0x40,  //.%. 
  0x40,  //.%. 
  0x40,  //.%. 
  0x40,  //.%. 
  0x00,  //... 
  0x00,  //... 


  /*Unicode: U+006a (j) , Width: 7 */
  0x00,  //....... 
  0x04,  //.....%. 
  0x00,  //....... 
  0x04,  //.....%. 
  0x04,  //.....%. 
  0x04,  //.....%. 
  0x84,  //%....%. 
  0x78,  //.%%%%.. 
  0x00,  //....... 
  0x00,  //....... 


  /*Unicode: U+006b (k) , Width: 6 */
  0x00,  //...... 
  0x80,  //%..... 
  0x88,  //%...%. 
  0x90,  //%..%.. 
  0xe0,  //%%%... 
  0x80,  //%..... 
  0x90,  //%..%.. 
  0x88,  //%...%. 
  0x00,  //...... 
  0x00,  //...... 


  /*Unicode: U+006c (l) , Width: 4 */
  0x00,  //.... 
  0x60,  //.%%. 
  0x20,  //..%. 
  0x20,  //..%. 
  0x20,  //..%. 
  0x20,  //..%. 
  0x20,  //..%. 
  0x20,  //..%. 
  0x00,  //.... 
  0x00,  //.... 


  /*Unicode: U+006d (m) , Width: 7 */
  0x00,  //....... 
  0x00,  //....... 
  0xe8,  //%%%.%.. 
  0x94,  //%..%.%. 
  0x94,  //%..%.%. 
  0x94,  //%..%.%. 
  0x94,  //%..%.%. 
  0x94,  //%..%.%. 
  0x00,  //....... 
  0x00,  //....... 


  /*Unicode: U+006e (n) , Width: 6 */
  0x00,  //...... 
  0x00,  //...... 
  0xb8,  //%.%%%. 
  0xcc,  //%%..%% 
  0x84,  //%....% 
  0x84,  //%....% 
  0x84,  //%....% 
  0x84,  //%....% 
  0x00,  //...... 
  0x00,  //...... 


  /*Unicode: U+006f (o) , Width: 7 */
  0x00,  //....... 
  0x00,  //....... 
  0x78,  //.%%%%.. 
  0x84,  //%....%. 
  0x84,  //%....%. 
  0x84,  //%....%. 
  0x84,  //%....%. 
  0x78,  //.%%%%.. 
  0x00,  //....... 
  0x00,  //....... 


  /*Unicode: U+0070 (p) , Width: 7 */
  0x00,  //....... 
  0x00,  //....... 
  0xf8,  //%%%%%.. 
  0x84,  //%....%. 
  0xf8,  //%%%%%.. 
  0x80,  //%...... 
  0x80,  //%...... 
  0x80,  //%...... 
  0x00,  //....... 
  0x00,  //....... 


  /*Unicode: U+0071 (q) , Width: 7 */
  0x00,  //....... 
  0x00,  //....... 
  0x7c,  //.%%%%%. 
  0x84,  //%....%. 
  0x7c,  //.%%%%%. 
  0x04,  //.....%. 
  0x04,  //.....%. 
  0x04,  //.....%. 
  0x00,  //....... 
  0x00,  //....... 


  /*Unicode: U+0072 (r) , Width: 6 */
  0x00,  //...... 
  0x00,  //...... 
  0xb8,  //%.%%%. 
  0xcc,  //%%..%% 
  0x80,  //%..... 
  0x80,  //%..... 
  0x80,  //%..... 
  0x80,  //%..... 
  0x00,  //...... 
  0x00,  //...... 


  /*Unicode: U+0073 (s) , Width: 7 */
  0x00,  //....... 
  0x00,  //....... 
  0x7c,  //.%%%%%. 
  0x80,  //%...... 
  0x78,  //.%%%%.. 
  0x00,  //....... 
  0x04,  //.....%. 
  0xf8,  //%%%%%.. 
  0x00,  //....... 
  0x00,  //....... 


  /*Unicode: U+0074 (t) , Width: 6 */
  0x00,  //...... 
  0x40,  //.%.... 
  0xfc,  //%%%%%% 
  0x40,  //.%.... 
  0x40,  //.%.... 
  0x40,  //.%.... 
  0x40,  //.%.... 
  0x3c,  //..%%%% 
  0x00,  //...... 
  0x00,  //...... 


  /*Unicode: U+0075 (u) , Width: 7 */
  0x00,  //....... 
  0x00,  //....... 
  0x84,  //%....%. 
  0x84,  //%....%. 
  0x84,  //%....%. 
  0x84,  //%....%. 
  0x8c,  //%...%%. 
  0x74,  //.%%%.%. 
  0x00,  //....... 
  0x00,  //....... 


  /*Unicode: U+0076 (v) , Width: 7 */
  0x00,  //....... 
  0x00,  //....... 
  0x84,  //%....%. 
  0x84,  //%....%. 
  0x00,  //....... 
  0x48,  //.%..%.. 
  0x48,  //.%..%.. 
  0x10,  //...%... 
  0x00,  //....... 
  0x00,  //....... 


  /*Unicode: U+0077 (w) , Width: 7 */
  0x00,  //....... 
  0x00,  //....... 
  0x84,  //%....%. 
  0x84,  //%....%. 
  0x84,  //%....%. 
  0x94,  //%..%.%. 
  0x94,  //%..%.%. 
  0x48,  //.%..%.. 
  0x00,  //....... 
  0x00,  //....... 


  /*Unicode: U+0078 (x) , Width: 7 */
  0x00,  //....... 
  0x00,  //....... 
  0x84,  //%....%. 
  0x48,  //.%..%.. 
  0x10,  //...%... 
  0x00,  //....... 
  0x48,  //.%..%.. 
  0x84,  //%....%. 
  0x00,  //....... 
  0x00,  //....... 


  /*Unicode: U+0079 (y) , Width: 7 */
  0x00,  //....... 
  0x00,  //....... 
  0x84,  //%....%. 
  0x84,  //%....%. 
  0x7c,  //.%%%%%. 
  0x04,  //.....%. 
  0x04,  //.....%. 
  0xf8,  //%%%%%.. 
  0x00,  //....... 
  0x00,  //....... 


  /*Unicode: U+007a (z) , Width: 6 */
  0x00,  //...... 
  0x00,  //...... 
  0xfc,  //%%%%%% 
  0x08,  //....%. 
  0x10,  //...%.. 
  0x00,  //...... 
  0x40,  //.%.... 
  0xfc,  //%%%%%% 
  0x00,  //...... 
  0x00,  //...... 


  /*Unicode: U+007b ({) , Width: 4 */
  0x00,  //.... 
  0x30,  //..%% 
  0x40,  //.%.. 
  0x80,  //%... 
  0x00,  //.... 
  0x40,  //.%.. 
  0x40,  //.%.. 
  0x30,  //..%% 
  0x00,  //.... 
  0x00,  //.... 


  /*Unicode: U+007c (|) , Width: 3 */
  0x00,  //... 
  0x40,  //.%. 
  0x40,  //.%. 
  0x40,  //.%. 
  0x40,  //.%. 
  0x40,  //.%. 
  0x40,  //.%. 
  0x40,  //.%. 
  0x00,  //... 
  0x00,  //... 


  /*Unicode: U+007d (}) , Width: 4 */
  0x00,  //.... 
  0x80,  //%... 
  0x40,  //.%.. 
  0x30,  //..%% 
  0x00,  //.... 
  0x40,  //.%.. 
  0x40,  //.%.. 
  0x80,  //%... 
  0x00,  //.... 
  0x00,  //.... 


  /*Unicode: U+007e (~) , Width: 7 */
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x40,  //.%..... 
  0x94,  //%..%.%. 
  0x08,  //....%.. 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 


};


/*Store the glyph descriptions*/
static const lv_font_glyph_dsc_t synchronizer_10_glyph_dsc[] = 
{
  {.w_px = 3,	.glyph_index = 0},	/*Unicode: U+0020 ( )*/
  {.w_px = 2,	.glyph_index = 10},	/*Unicode: U+0021 (!)*/
  {.w_px = 5,	.glyph_index = 20},	/*Unicode: U+0022 (")*/
  {.w_px = 6,	.glyph_index = 30},	/*Unicode: U+0023 (#)*/
  {.w_px = 7,	.glyph_index = 40},	/*Unicode: U+0024 ($)*/
  {.w_px = 7,	.glyph_index = 50},	/*Unicode: U+0025 (%)*/
  {.w_px = 7,	.glyph_index = 60},	/*Unicode: U+0026 (&)*/
  {.w_px = 3,	.glyph_index = 70},	/*Unicode: U+0027 (')*/
  {.w_px = 3,	.glyph_index = 80},	/*Unicode: U+0028 (()*/
  {.w_px = 3,	.glyph_index = 90},	/*Unicode: U+0029 ())*/
  {.w_px = 7,	.glyph_index = 100},	/*Unicode: U+002a (*)*/
  {.w_px = 6,	.glyph_index = 110},	/*Unicode: U+002b (+)*/
  {.w_px = 3,	.glyph_index = 120},	/*Unicode: U+002c (,)*/
  {.w_px = 6,	.glyph_index = 130},	/*Unicode: U+002d (-)*/
  {.w_px = 3,	.glyph_index = 140},	/*Unicode: U+002e (.)*/
  {.w_px = 7,	.glyph_index = 150},	/*Unicode: U+002f (/)*/
  {.w_px = 7,	.glyph_index = 160},	/*Unicode: U+0030 (0)*/
  {.w_px = 4,	.glyph_index = 170},	/*Unicode: U+0031 (1)*/
  {.w_px = 7,	.glyph_index = 180},	/*Unicode: U+0032 (2)*/
  {.w_px = 7,	.glyph_index = 190},	/*Unicode: U+0033 (3)*/
  {.w_px = 6,	.glyph_index = 200},	/*Unicode: U+0034 (4)*/
  {.w_px = 7,	.glyph_index = 210},	/*Unicode: U+0035 (5)*/
  {.w_px = 7,	.glyph_index = 220},	/*Unicode: U+0036 (6)*/
  {.w_px = 7,	.glyph_index = 230},	/*Unicode: U+0037 (7)*/
  {.w_px = 7,	.glyph_index = 240},	/*Unicode: U+0038 (8)*/
  {.w_px = 7,	.glyph_index = 250},	/*Unicode: U+0039 (9)*/
  {.w_px = 3,	.glyph_index = 260},	/*Unicode: U+003a (:)*/
  {.w_px = 3,	.glyph_index = 270},	/*Unicode: U+003b (;)*/
  {.w_px = 4,	.glyph_index = 280},	/*Unicode: U+003c (<)*/
  {.w_px = 6,	.glyph_index = 290},	/*Unicode: U+003d (=)*/
  {.w_px = 4,	.glyph_index = 300},	/*Unicode: U+003e (>)*/
  {.w_px = 7,	.glyph_index = 310},	/*Unicode: U+003f (?)*/
  {.w_px = 7,	.glyph_index = 320},	/*Unicode: U+0040 (@)*/
  {.w_px = 7,	.glyph_index = 330},	/*Unicode: U+0041 (A)*/
  {.w_px = 7,	.glyph_index = 340},	/*Unicode: U+0042 (B)*/
  {.w_px = 6,	.glyph_index = 350},	/*Unicode: U+0043 (C)*/
  {.w_px = 7,	.glyph_index = 360},	/*Unicode: U+0044 (D)*/
  {.w_px = 7,	.glyph_index = 370},	/*Unicode: U+0045 (E)*/
  {.w_px = 7,	.glyph_index = 380},	/*Unicode: U+0046 (F)*/
  {.w_px = 6,	.glyph_index = 390},	/*Unicode: U+0047 (G)*/
  {.w_px = 7,	.glyph_index = 400},	/*Unicode: U+0048 (H)*/
  {.w_px = 6,	.glyph_index = 410},	/*Unicode: U+0049 (I)*/
  {.w_px = 7,	.glyph_index = 420},	/*Unicode: U+004a (J)*/
  {.w_px = 7,	.glyph_index = 430},	/*Unicode: U+004b (K)*/
  {.w_px = 7,	.glyph_index = 440},	/*Unicode: U+004c (L)*/
  {.w_px = 8,	.glyph_index = 450},	/*Unicode: U+004d (M)*/
  {.w_px = 8,	.glyph_index = 460},	/*Unicode: U+004e (N)*/
  {.w_px = 7,	.glyph_index = 470},	/*Unicode: U+004f (O)*/
  {.w_px = 7,	.glyph_index = 480},	/*Unicode: U+0050 (P)*/
  {.w_px = 7,	.glyph_index = 490},	/*Unicode: U+0051 (Q)*/
  {.w_px = 6,	.glyph_index = 500},	/*Unicode: U+0052 (R)*/
  {.w_px = 8,	.glyph_index = 510},	/*Unicode: U+0053 (S)*/
  {.w_px = 6,	.glyph_index = 520},	/*Unicode: U+0054 (T)*/
  {.w_px = 7,	.glyph_index = 530},	/*Unicode: U+0055 (U)*/
  {.w_px = 10,	.glyph_index = 540},	/*Unicode: U+0056 (V)*/
  {.w_px = 8,	.glyph_index = 560},	/*Unicode: U+0057 (W)*/
  {.w_px = 7,	.glyph_index = 570},	/*Unicode: U+0058 (X)*/
  {.w_px = 7,	.glyph_index = 580},	/*Unicode: U+0059 (Y)*/
  {.w_px = 8,	.glyph_index = 590},	/*Unicode: U+005a (Z)*/
  {.w_px = 3,	.glyph_index = 600},	/*Unicode: U+005b ([)*/
  {.w_px = 7,	.glyph_index = 610},	/*Unicode: U+005c (\)*/
  {.w_px = 3,	.glyph_index = 620},	/*Unicode: U+005d (])*/
  {.w_px = 7,	.glyph_index = 630},	/*Unicode: U+005e (^)*/
  {.w_px = 6,	.glyph_index = 640},	/*Unicode: U+005f (_)*/
  {.w_px = 3,	.glyph_index = 650},	/*Unicode: U+0060 (`)*/
  {.w_px = 7,	.glyph_index = 660},	/*Unicode: U+0061 (a)*/
  {.w_px = 6,	.glyph_index = 670},	/*Unicode: U+0062 (b)*/
  {.w_px = 6,	.glyph_index = 680},	/*Unicode: U+0063 (c)*/
  {.w_px = 7,	.glyph_index = 690},	/*Unicode: U+0064 (d)*/
  {.w_px = 7,	.glyph_index = 700},	/*Unicode: U+0065 (e)*/
  {.w_px = 6,	.glyph_index = 710},	/*Unicode: U+0066 (f)*/
  {.w_px = 7,	.glyph_index = 720},	/*Unicode: U+0067 (g)*/
  {.w_px = 6,	.glyph_index = 730},	/*Unicode: U+0068 (h)*/
  {.w_px = 3,	.glyph_index = 740},	/*Unicode: U+0069 (i)*/
  {.w_px = 7,	.glyph_index = 750},	/*Unicode: U+006a (j)*/
  {.w_px = 6,	.glyph_index = 760},	/*Unicode: U+006b (k)*/
  {.w_px = 4,	.glyph_index = 770},	/*Unicode: U+006c (l)*/
  {.w_px = 7,	.glyph_index = 780},	/*Unicode: U+006d (m)*/
  {.w_px = 6,	.glyph_index = 790},	/*Unicode: U+006e (n)*/
  {.w_px = 7,	.glyph_index = 800},	/*Unicode: U+006f (o)*/
  {.w_px = 7,	.glyph_index = 810},	/*Unicode: U+0070 (p)*/
  {.w_px = 7,	.glyph_index = 820},	/*Unicode: U+0071 (q)*/
  {.w_px = 6,	.glyph_index = 830},	/*Unicode: U+0072 (r)*/
  {.w_px = 7,	.glyph_index = 840},	/*Unicode: U+0073 (s)*/
  {.w_px = 6,	.glyph_index = 850},	/*Unicode: U+0074 (t)*/
  {.w_px = 7,	.glyph_index = 860},	/*Unicode: U+0075 (u)*/
  {.w_px = 7,	.glyph_index = 870},	/*Unicode: U+0076 (v)*/
  {.w_px = 7,	.glyph_index = 880},	/*Unicode: U+0077 (w)*/
  {.w_px = 7,	.glyph_index = 890},	/*Unicode: U+0078 (x)*/
  {.w_px = 7,	.glyph_index = 900},	/*Unicode: U+0079 (y)*/
  {.w_px = 6,	.glyph_index = 910},	/*Unicode: U+007a (z)*/
  {.w_px = 4,	.glyph_index = 920},	/*Unicode: U+007b ({)*/
  {.w_px = 3,	.glyph_index = 930},	/*Unicode: U+007c (|)*/
  {.w_px = 4,	.glyph_index = 940},	/*Unicode: U+007d (})*/
  {.w_px = 7,	.glyph_index = 950},	/*Unicode: U+007e (~)*/
};

lv_font_t synchronizer_10 = 
{
    .unicode_first = 32,	/*First Unicode letter in this font*/
    .unicode_last = 126,	/*Last Unicode letter in this font*/
    .h_px = 10,				/*Font height in pixels*/
    .glyph_bitmap = synchronizer_10_glyph_bitmap,	/*Bitmap of glyphs*/
    .glyph_dsc = synchronizer_10_glyph_dsc,		/*Description of glyphs*/
    .glyph_cnt = 95,			/*Number of glyphs in the font*/
    .unicode_list = NULL,	/*Every character in the font from 'unicode_first' to 'unicode_last'*/
    .get_bitmap = lv_font_get_bitmap_continuous,	/*Function pointer to get glyph's bitmap*/
    .get_width = lv_font_get_width_continuous,	/*Function pointer to get glyph's width*/
    .bpp = 1,				/*Bit per pixel*/
    .monospace = 0,				/*Fix width (0: if not used)*/
    .next_page = NULL,		/*Pointer to a font extension*/
};