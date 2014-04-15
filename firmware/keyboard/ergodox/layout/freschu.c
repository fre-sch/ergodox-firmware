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


static layout_t layout PROGMEM = {
    MATRIX_LAYER(  // layer 0 : default
// macro, unused,
       K,    nop,
// left hand ...... ......... ......... ......... ......... ......... .........
     nop,        1,        2,        3,        4,        5,      nop,
     esc,  semicol,    comma,   period,        p,        y,      esc,
   ctrlL,        a,        o,        e,        i,        u,
lpupo1l1,    slash,        q,        j,        k,        x,      tab,
    altL,      nop,      nop,      nop, lpupo2l2,
                                                                 nop,      nop,
                                                       nop,      nop,      nop,
                                                    shiftL,     guiL,     altL,
// right hand ..... ......... ......... ......... ......... ......... .........
               nop,        6,        7,        8,        9,        0,      nop,
             enter,        f,        g,        c,        t,        z,      nop,
                           h,        d,        r,        n,        s,    ctrlR,
                bs,        b,        m,        w,        v,        l, lpupo1l1,
                              lpupo2l2,      nop,      nop,      nop,     altR,
lpupo3l3,      nop,
     nop,      nop,      nop,
    altR,   shiftR,    space  ),

// ========================================================================= //

    MATRIX_LAYER(  // layer 1
// macro, unused,
       K,    nop,
// left hand ...... ......... ......... ......... ......... ......... .........
  transp,   transp,   transp,   transp,   transp,   transp,   transp,
  transp,   transp,   transp,   transp,    brktL,    brktR,   transp,
  transp,       at,   transp,   transp,   parenL,   parenR,
     nop,   transp,   transp,   transp,   transp,   transp,   transp,
  transp,   transp,   transp,   transp,   transp,
                                                              transp,   transp,
                                                    transp,   transp,   transp,
                                                    transp,   transp,   transp,
// right hand ..... ......... ......... ......... ......... ......... .........
            transp,   transp,   transp,   transp,   transp,   transp,   transp,
            transp,   transp,    quote,    grave,   transp,   transp,   transp,
                      transp,     dash,    equal,  bkslash,   transp,   transp,
            transp,   transp,   transp,   transp,   transp,   transp,      nop,
                                transp,   transp,   transp,   transp,   transp,
  transp,   transp,
  transp,   transp,   transp,
  transp,   transp,   undersc  ),

// ========================================================================= //

    MATRIX_LAYER(  // layer 2
// macro, unused,
       K,    nop,
// left hand ...... ......... ......... ......... ......... ......... .........
  transp,       F1,       F2,       F3,       F4,       F5,      F11,
  transp,        1,        2,        3,        4,        5,   transp,
  transp,        6,        7,        8,        9,        0,
     nop,   transp,   transp,   transp,   transp,   transp,   transp,
  transp,   transp,   transp,   transp,   transp,
                                                              transp,   transp,
                                                    transp,   transp,   transp,
                                                    transp,   transp,   transp,
// right hand ..... ......... ......... ......... ......... ......... .........
               F12,       F6,       F7,       F8,       F9,      F10,    power,
           kpEnter,     home,    pageD,   arrowU,    pageU,   transp,  volumeU,
                         end,   arrowL,   arrowD,   arrowR,   transp,  volumeD,
               del,   transp,   transp,   transp,   transp,   transp,     mute,
                                transp,   transp,   transp,   transp,   transp,
  transp,   transp,
  transp,   transp,   transp,
  transp,   transp,   transp  ),

// ========================================================================= //

    MATRIX_LAYER(  // layer 3 : keyboard functions
// macro, unused,
       K,    nop,
// left hand ...... ......... ......... ......... ......... ......... .........
     nop,      nop,      nop,      nop,      nop,      nop,      nop,
     nop,      nop,      nop,      nop,      nop,      nop,      nop,
     nop,      nop,      nop,      nop,      nop,      nop,
     nop,      nop,      nop,      nop,      nop,      nop,      nop,
     nop,      nop,      nop,      nop,      nop,
                                                                 nop,      nop,
                                                       nop,      nop,      nop,
                                                       nop,      nop,      nop,
// right hand ..... ......... ......... ......... ......... ......... .........
               nop,      nop,      nop,      nop,      nop,      nop,    btldr,
               nop,      nop,      nop,      nop,      nop,      nop, dmp_sram,
                         nop,      nop,      nop,      nop,      nop, dmp_prog,
               nop,      nop,      nop,      nop,      nop,      nop, dmp_eepr,
                                   nop,      nop,      nop,      nop,      nop,
     nop,      nop,
     nop,      nop,      nop,
     nop,      nop,      nop  ),

// ............................................................................
};

