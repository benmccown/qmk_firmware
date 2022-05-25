// Copyright 2019 Manna Harbour
// https://github.com/manna-harbour/miryoku
// generated -*- buffer-read-only: t -*-

// This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 2 of the License, or (at your option) any later version. This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with this program. If not, see <http://www.gnu.org/licenses/>.

#pragma once

#include "miryoku_alternatives.h"

#if !defined(MIRYOKU_LAYER_BASE)
  #define MIRYOKU_LAYER_BASE MIRYOKU_ALTERNATIVES_BASE_QWERTY
#endif

#if !defined(MIRYOKU_LAYER_NAV)
  #define MIRYOKU_LAYER_NAV MIRYOKU_ALTERNATIVES_NAV_VI
#endif

#if !defined(MIRYOKU_LAYER_MOUSE)
  #define MIRYOKU_LAYER_MOUSE MIRYOKU_ALTERNATIVES_MOUSE_INVERTEDT_FLIP
#endif

#if !defined(MIRYOKU_LAYER_MEDIA)
  #define MIRYOKU_LAYER_MEDIA MIRYOKU_ALTERNATIVES_MEDIA_FLIP
#endif

#if !defined(MIRYOKU_LAYER_NUM)
  #define MIRYOKU_LAYER_NUM MIRYOKU_ALTERNATIVES_NUM_FLIP
#endif

#if !defined(MIRYOKU_LAYER_SYM)
  #define MIRYOKU_LAYER_SYM MIRYOKU_ALTERNATIVES_SYM_FLIP
#endif

#if !defined(MIRYOKU_LAYER_FUN)
  #define MIRYOKU_LAYER_FUN MIRYOKU_ALTERNATIVES_FUN
#endif

#if !defined(MIRYOKU_LAYER_BUTTON)
  #define MIRYOKU_LAYER_BUTTON MIRYOKU_ALTERNATIVES_BUTTON
#endif
