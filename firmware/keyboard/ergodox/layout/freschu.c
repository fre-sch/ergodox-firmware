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
     esc,  bkslash,    comma,   period,        p,        y,     guiL,
   ctrlL,        a,        o,        e,        i,        u,
    altL,    slash,        q,        j,        k,        x,      tab,
lpupo2l2,      nop,      nop,      nop, lpupo1l1,
                                                                copy,    paste,
                                                       nop,      nop,      cut,
                                                    shiftL,    enter,      nop,
// right hand ..... ......... ......... ......... ......... ......... .........
               nop,        6,        7,        8,        9,        0,      nop,
              guiR,        f,        g,        c,        t,        z,      nop,
                           h,        d,        r,        n,        s,    ctrlR,
            shiftR,        b,        m,        w,        v,        l,     altR,
                              lpupo1l1,      nop,      nop,      nop, lpupo2l2,
     nop,      nop,
     nop,      nop,      nop,
     nop,       bs,    space  ),

// ========================================================================= //

    MATRIX_LAYER(  // layer 1
// macro, unused,
       K,    nop,
// left hand ...... ......... ......... ......... ......... ......... .........
  transp,       F1,       F2,       F3,       F4,       F5,      F11,
  transp,     plus,  semicol,    colon,    brktL,    brktR,   transp,
  transp,  undersc,    equal, dblQuote,   parenL,   parenR,
  transp,     dash,    grave,    quote,   braceL,   braceR,   transp,
     nop,   transp,   transp,   transp,      nop,
                                                              transp,   transp,
                                                    transp,   transp,   transp,
                                                    transp,   transp,   transp,
// right hand ..... ......... ......... ......... ......... ......... .........
               F12,       F6,       F7,       F8,       F9,      F10,    power,
            transp,     home,    pageD,   arrowU,    pageU,  volumeU,   transp,
                         end,   arrowL,   arrowD,   arrowR,  volumeD,   transp,
            transp,   transp,   transp,   transp,   transp,     mute,   transp,
                                   nop,   transp,   transp,   transp,      nop,
  transp,   transp,
  transp,   transp,   transp,
  transp,      del,   transp  ),

// ========================================================================= //

    MATRIX_LAYER(  // layer 2
// macro, unused,
       K,    nop,
// left hand ...... ......... ......... ......... ......... ......... .........
  transp,   transp,   transp,   transp,   transp,   transp,   transp,
  transp,   transp,        1,        2,        3,    brktR,   transp,
  transp,   transp,        4,        5,        6,    brktL,
  transp,   transp,        7,        8,        9,        0,   transp,
  transp,   transp,   transp,   transp,   transp,
                                                              transp,   transp,
                                                    transp,   transp,   transp,
                                                    transp,   transp,   transp,
// right hand ..... ......... ......... ......... ......... ......... .........
            transp,   transp,   transp,   transp,   transp,   transp,    btldr,
               nop,      nop,      nop,      nop,      nop,      nop, dmp_sram,
                         nop,      nop,      nop,      nop,      nop, dmp_prog,
               nop,      nop,      nop,      nop,      nop,      nop, dmp_eepr,
                                   nop,      nop,      nop,      nop,      nop,
     nop,      nop,
     nop,      nop,      nop,
     nop,      nop,      nop  ),

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
               nop,      nop,      nop,      nop,      nop,      nop,      nop,
               nop,      nop,      nop,      nop,      nop,      nop,      nop,
                         nop,      nop,      nop,      nop,      nop,      nop,
               nop,      nop,      nop,      nop,      nop,      nop,      nop,
                                   nop,      nop,      nop,      nop,      nop,
     nop,      nop,
     nop,      nop,      nop,
     nop,      nop,      nop  ),

// ............................................................................
};

