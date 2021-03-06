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
// macro,   unused,
       K,      nop,
// left hand ...... ......... ......... ......... ......... ......... .........
  lpu3l3,        1,        2,        3,        4,        5,      esc,
     nop,  bkslash,    comma,   period,        p,        y,      tab,
     nop,        a,        o,        e,        i,        u,
     nop,    slash,        q,        j,        k,        x,     guiL,
     nop,     copy,      cut,    paste, lpupo1l1,
                                                            lpupo2l2,      nop,
                                                       nop,      nop,    ctrlL,
                                                     enter,   shiftL,     altL,
// right hand ..... ......... ......... ......... ......... ......... .........
             power,        6,        7,        8,        9,        0,      nop,
                bs,        f,        g,        c,        t,        z,     mute,
                           h,        d,        r,        n,        s,  volumeU,
              guiR,        b,        m,        w,        v,        l,  volumeD,
                              lpupo1l1,      nop,      nop,      nop,      nop,
     nop, lpupo2l2,
   ctrlR,      nop,      nop,
    altR,   shiftR,    space  ),

// ========================================================================= //

    MATRIX_LAYER(  // layer 1
// macro,   unused,
       K,      nop,
// left hand ...... ......... ......... ......... ......... ......... .........
  transp,       F1,       F2,       F3,       F4,       F5,      F11,
  transp,     plus,  semicol,    colon,    brktL,    brktR,   transp,
  transp,  undersc,    equal, dblQuote,   parenL,   parenR,
  transp,     dash,    grave,    quote,   braceL,   braceR,   transp,
  transp,   transp,   transp,   transp,      nop,
                                                                 nop,   transp,
                                                       nop,      nop,   transp,
                                                    transp,   transp,   transp,
// right hand ..... ......... ......... ......... ......... ......... .........
               F12,       F6,       F7,       F8,       F9,      F10,   transp,
               del,    pageU,     home,   arrowU,      end,   transp,   transp,
                       pageD,   arrowL,   arrowD,   arrowR,   transp,   transp,
            transp,   transp,   transp,   transp,   transp,   transp,   transp,
                                   nop,   transp,   transp,   transp,   transp,
  transp,      nop,
  transp,      nop,      nop,
  transp,   transp,   transp  ),

// ========================================================================= //

    MATRIX_LAYER(  // layer 2
// macro, unused,
       K,    nop,
// left hand ...... ......... ......... ......... ......... ......... .........
  transp,        0,        9,        8,        7,        6,   transp,
  transp,        z,        t,        c,        g,        f,   transp,
  transp,        s,        n,        r,        d,        h,
  transp,        l,        v,        w,        m,        b,   transp,
  transp,   transp,   transp,   transp,      nop,
                                                                 nop,   transp,
                                                       nop,      nop,   transp,
                                                    transp,   transp,   transp,
// right hand ..... ......... ......... ......... ......... ......... .........
             btldr,   transp,   transp,   transp,   transp,   transp,   transp,
            transp,   transp,        1,        2,        3,   transp,   transp,
                      transp,        4,        5,        6,   transp,   transp,
            transp,   transp,        7,        8,        9,        0,   transp,
                                   nop,   transp,   transp,   transp,   transp,
  transp,      nop,
  transp,      nop,      nop,
  transp,   transp,   transp  ),

// ========================================================================= //

    MATRIX_LAYER(  // layer 3 : keyboard functions
// macro, unused,
       K,    nop,
// left hand ...... ......... ......... ......... ......... ......... .........
  lpo3l3,   transp,   transp,   transp,   transp,   transp,   transp,
  transp,   transp,   transp,   transp,   transp,   transp,   transp,
  transp,   transp,   transp,   transp,   transp,   transp,
  transp,   transp,   transp,   transp,   transp,   transp,    ctrlL,
  transp,   transp,   transp,   transp,   transp,
                                                              transp,   transp,
                                                    transp,   transp,     guiL,
                                                    transp,   transp,   transp,
// right hand ..... ......... ......... ......... ......... ......... .........
            transp,   transp,   transp,   transp,   transp,   transp,   transp,
            transp,   transp,   transp,   transp,   transp,   transp,   transp,
                      transp,   transp,   transp,   transp,   transp,   transp,
             ctrlR,   transp,   transp,   transp,   transp,   transp,   transp,
                                transp,   transp,   transp,   transp,   transp,
  transp,   transp,
    guiR,   transp,   transp,
  transp,   transp,   transp  ),

// ............................................................................
};

