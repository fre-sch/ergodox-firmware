/* ----------------------------------------------------------------------------
 * Copyright (c) 2013, 2014 Ben Blazak <benblazak.dev@gmail.com>
 * Released under The MIT License (see "doc/licenses/MIT.md")
 * Project located at <https://github.com/benblazak/ergodox-firmware>
 * ------------------------------------------------------------------------- */
#include "./fragments/includes.part.h"
#include "./fragments/macros.part.h"
#include "./fragments/types.part.h"
#include "./fragments/variables.part.h"
#include "./fragments/keys.part.h"
#include "./fragments/led-control.part.h"
#include "./fragments/matrix-control.part.h"


#define de_y      z
#define de_z      y
#define de_oe     semicol
#define de_ae     quote
#define de_ue     brktL
#define de_sharp  nonUSPound
#define de_circum nonUSBkslash
#define de_sz     dash
#define de_grave  equal
#define de_less   grave
#define de_dash   slash
#define de_plus   brktR


static layout_t layout PROGMEM = {
    MATRIX_LAYER(  // layer 0 : default
// macro, unused,
       K,    nop,
// left hand ...... ......... ......... ......... ......... ......... .........
     nop,        1,        2,        3,        4,        5,de_circum,
     esc,        q,        w,        e,        r,        t,      tab,
   ctrlL,        a,        s,        d,        f,        g,
 de_less,     de_y,        x,        c,        v,        b,      altL,
     nop,      nop,      nop,      nop,      nop,
                                                                altL, lpupo3l3,
                                                       nop,      nop,      nop,
                                                    shiftL,     guiL, lpupo1l1,
// right hand ..... ......... ......... ......... ......... ......... .........
          de_grave,        6,        7,        8,        9,        0,    de_sz,
             enter,     de_z,        u,        i,        o,        p,    de_ue,
                           h,        j,        k,        l,    de_oe,    de_ae,
                bs,        n,        m,    comma,   period,  de_dash, de_sharp,
                                  altR,    ctrlR,      nop,      nop,  de_plus,
     nop,    ctrlR,
     nop,      nop,      nop,
lpupo2l2,   shiftR,    space  ),

// ............................................................................

    MATRIX_LAYER(  // layer 1
// macro, unused,
       K,    nop,
// left hand ...... ......... ......... ......... ......... ......... .........
  transp,       F1,       F2,       F3,       F4,       F5,      F11,
  transp,   transp,   transp,   transp,   transp,   transp,   transp,
  transp,   transp,   transp,   transp,   transp,   transp,
  transp,   transp,   transp,   transp,   transp,   transp,   transp,
  transp,   transp,   transp,   transp,   transp,
                                                              transp,   transp,
                                                    transp,   transp,   transp,
                                                    transp,   transp,   transp,
// right hand ..... ......... ......... ......... ......... ......... .........
               F12,       F6,       F7,       F8,       F9,      F10,    power,
            transp,     home,    pageD,   arrowU,    pageU,   transp,  volumeU,
                         end,   arrowL,   arrowD,   arrowR,   transp,  volumeD,
               del,   transp,   transp,   transp,   transp,   transp,     mute,
                                transp,   transp,   transp,   transp,   transp,
  transp,   transp,
  transp,   transp,   transp,
  transp,   transp,   transp  ),

// ............................................................................

    MATRIX_LAYER(  // layer 2
// macro, unused,
       K,    nop,
// left hand ...... ......... ......... ......... ......... ......... .........
  transp,   transp,   transp,   transp,   transp,   transp,   transp,
  transp,  de_plus,   transp,   transp,   transp,   transp,   transp,
  transp,  de_less,     de_y,   transp,   transp,        q,
  transp,   transp,   transp,   transp,   transp,   transp,   transp,
  transp,   transp,   transp,   transp,   transp,
                                                              transp,   transp,
                                                    transp,   transp,   transp,
                                                    transp,   transp,   transp,
// right hand ..... ......... ......... ......... ......... ......... .........
            transp,   transp,   transp,   transp,   transp,   transp,   transp,
            transp,   transp,   transp,   transp,   transp,   transp,   transp,
                      transp,   transp,   transp,   transp,   transp,   transp,
            transp,   transp,   transp,   transp,   transp,   transp,   transp,
                                transp,   transp,   transp,   transp,   transp,
  transp,   transp,
  transp,   transp,   transp,
  transp,   transp,   transp  ),

// ............................................................................

    MATRIX_LAYER(  // layer 3 : keyboard functions
// macro, unused,
       K,    nop,
// left hand ...... ......... ......... ......... ......... ......... .........
   btldr,      nop,      nop,      nop,      nop,      nop,      nop,
     nop,      nop,      nop,      nop,      nop,      nop,      nop,
     nop,      nop,      nop,      nop,      nop,      nop,
     nop,      nop,      nop,      nop,      nop,      nop,      nop,
     nop,      nop,      nop,      nop,      nop,
                                                                 nop,      nop,
                                                       nop,      nop,      nop,
                                                       nop,      nop,      nop,
// right hand ..... ......... ......... ......... ......... ......... .........
               nop,      nop,      nop,      nop,      nop,      nop, dmp_sram,
               nop,      nop,      nop,      nop,      nop,      nop, dmp_prog,
                         nop,      nop,      nop,      nop,      nop, dmp_eepr,
               nop,      nop,      nop,      nop,      nop,      nop,      nop,
                                   nop,      nop,      nop,      nop,      nop,
     nop,      nop,
     nop,      nop,      nop,
     nop,      nop,      nop  ),

// ............................................................................
};

