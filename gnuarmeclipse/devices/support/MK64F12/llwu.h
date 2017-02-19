/*
 * Kinetis - LLWU (Low leakage wakeup unit) emulation.
 *
 * Copyright (c) 2016 Liviu Ionescu.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, see <http://www.gnu.org/licenses/>.
 */

#ifndef KINETIS_LLWU_H_
#define KINETIS_LLWU_H_

#include "qemu/osdep.h"

#include <hw/cortexm/peripheral.h>
#include <hw/cortexm/kinetis/capabilities.h>

// ----------------------------------------------------------------------------

#define DEVICE_PATH_KINETIS_LLWU DEVICE_PATH_KINETIS "LLWU"


// ----------------------------------------------------------------------------

#define TYPE_KINETIS_LLWU TYPE_KINETIS_PREFIX "llwu" TYPE_PERIPHERAL_SUFFIX

// ----------------------------------------------------------------------------

// Parent definitions.
#define TYPE_KINETIS_LLWU_PARENT TYPE_PERIPHERAL
typedef PeripheralClass KinetisLLWUParentClass;
typedef PeripheralState KinetisLLWUParentState;

// ----------------------------------------------------------------------------

// Class definitions.
#define KINETIS_LLWU_GET_CLASS(obj) \
    OBJECT_GET_CLASS(KinetisLLWUClass, (obj), TYPE_KINETIS_LLWU)
#define KINETIS_LLWU_CLASS(klass) \
    OBJECT_CLASS_CHECK(KinetisLLWUClass, (klass), TYPE_KINETIS_LLWU)

typedef struct {
    // private: 
    KinetisLLWUParentClass parent_class;
    // public: 

    // None, so far.
} KinetisLLWUClass;

// ----------------------------------------------------------------------------

// Instance definitions.
#define KINETIS_LLWU_STATE(obj) \
    OBJECT_CHECK(KinetisLLWUState, (obj), TYPE_KINETIS_LLWU)

typedef struct {
    // private:
    KinetisLLWUParentState parent_obj;
    // public:

    const KinetisCapabilities *capabilities;

    // TODO: remove this if the peripheral is always enabled.
    // Points to the bitfield that enables the peripheral.
    Object *enabling_bit;

    union {
      // ----- 8< ----- 8< -----  8< ----- 8< ----- 8< ----- 8< ----- 8< -----

      // DO NOT REMOVE FIELDS! Automatically generated!
      // Merge fields from different family members.
      struct {
        // K6 LLWU (Low leakage wakeup unit) registers.
        struct { 
          Object *pe1; // 0 (LLWU Pin Enable 1 register) 
          Object *pe2; // 0x1 (LLWU Pin Enable 2 register) 
          Object *pe3; // 0x2 (LLWU Pin Enable 3 register) 
          Object *pe4; // 0x3 (LLWU Pin Enable 4 register) 
          Object *me; // 0x4 (LLWU Module Enable register) 
          Object *f1; // 0x5 (LLWU Flag 1 register) 
          Object *f2; // 0x6 (LLWU Flag 2 register) 
          Object *f3; // 0x7 (LLWU Flag 3 register) 
          Object *filt1; // 0x8 (LLWU Pin Filter 1 register) 
          Object *filt2; // 0x9 (LLWU Pin Filter 2 register) 
          Object *rst; // 0xA (LLWU Reset Enable register) 
        } reg;

        struct { 

          // PE1 (LLWU Pin Enable 1 register) bitfields.
          struct { 
            Object *wupe0; // [0:1] Wakeup Pin Enable For LLWU_P0
            Object *wupe1; // [2:3] Wakeup Pin Enable For LLWU_P1
            Object *wupe2; // [4:5] Wakeup Pin Enable For LLWU_P2
            Object *wupe3; // [6:7] Wakeup Pin Enable For LLWU_P3
          } pe1; 

          // PE2 (LLWU Pin Enable 2 register) bitfields.
          struct { 
            Object *wupe4; // [0:1] Wakeup Pin Enable For LLWU_P4
            Object *wupe5; // [2:3] Wakeup Pin Enable For LLWU_P5
            Object *wupe6; // [4:5] Wakeup Pin Enable For LLWU_P6
            Object *wupe7; // [6:7] Wakeup Pin Enable For LLWU_P7
          } pe2; 

          // PE3 (LLWU Pin Enable 3 register) bitfields.
          struct { 
            Object *wupe8; // [0:1] Wakeup Pin Enable For LLWU_P8
            Object *wupe9; // [2:3] Wakeup Pin Enable For LLWU_P9
            Object *wupe10; // [4:5] Wakeup Pin Enable For LLWU_P10
            Object *wupe11; // [6:7] Wakeup Pin Enable For LLWU_P11
          } pe3; 

          // PE4 (LLWU Pin Enable 4 register) bitfields.
          struct { 
            Object *wupe12; // [0:1] Wakeup Pin Enable For LLWU_P12
            Object *wupe13; // [2:3] Wakeup Pin Enable For LLWU_P13
            Object *wupe14; // [4:5] Wakeup Pin Enable For LLWU_P14
            Object *wupe15; // [6:7] Wakeup Pin Enable For LLWU_P15
          } pe4; 

          // ME (LLWU Module Enable register) bitfields.
          struct { 
            Object *wume0; // [0:0] Wakeup Module Enable For Module 0
            Object *wume1; // [1:1] Wakeup Module Enable for Module 1
            Object *wume2; // [2:2] Wakeup Module Enable For Module 2
            Object *wume3; // [3:3] Wakeup Module Enable For Module 3
            Object *wume4; // [4:4] Wakeup Module Enable For Module 4
            Object *wume5; // [5:5] Wakeup Module Enable For Module 5
            Object *wume6; // [6:6] Wakeup Module Enable For Module 6
            Object *wume7; // [7:7] Wakeup Module Enable For Module 7
          } me; 

          // F1 (LLWU Flag 1 register) bitfields.
          struct { 
            Object *wuf0; // [0:0] Wakeup Flag For LLWU_P0
            Object *wuf1; // [1:1] Wakeup Flag For LLWU_P1
            Object *wuf2; // [2:2] Wakeup Flag For LLWU_P2
            Object *wuf3; // [3:3] Wakeup Flag For LLWU_P3
            Object *wuf4; // [4:4] Wakeup Flag For LLWU_P4
            Object *wuf5; // [5:5] Wakeup Flag For LLWU_P5
            Object *wuf6; // [6:6] Wakeup Flag For LLWU_P6
            Object *wuf7; // [7:7] Wakeup Flag For LLWU_P7
          } f1; 

          // F2 (LLWU Flag 2 register) bitfields.
          struct { 
            Object *wuf8; // [0:0] Wakeup Flag For LLWU_P8
            Object *wuf9; // [1:1] Wakeup Flag For LLWU_P9
            Object *wuf10; // [2:2] Wakeup Flag For LLWU_P10
            Object *wuf11; // [3:3] Wakeup Flag For LLWU_P11
            Object *wuf12; // [4:4] Wakeup Flag For LLWU_P12
            Object *wuf13; // [5:5] Wakeup Flag For LLWU_P13
            Object *wuf14; // [6:6] Wakeup Flag For LLWU_P14
            Object *wuf15; // [7:7] Wakeup Flag For LLWU_P15
          } f2; 

          // F3 (LLWU Flag 3 register) bitfields.
          struct { 
            Object *mwuf0; // [0:0] Wakeup flag For module 0
            Object *mwuf1; // [1:1] Wakeup flag For module 1
            Object *mwuf2; // [2:2] Wakeup flag For module 2
            Object *mwuf3; // [3:3] Wakeup flag For module 3
            Object *mwuf4; // [4:4] Wakeup flag For module 4
            Object *mwuf5; // [5:5] Wakeup flag For module 5
            Object *mwuf6; // [6:6] Wakeup flag For module 6
            Object *mwuf7; // [7:7] Wakeup flag For module 7
          } f3; 

          // FILT1 (LLWU Pin Filter 1 register) bitfields.
          struct { 
            Object *filtsel; // [0:3] Filter Pin Select
            Object *filte; // [5:6] Digital Filter On External Pin
            Object *filtf; // [7:7] Filter Detect Flag
          } filt1; 

          // FILT2 (LLWU Pin Filter 2 register) bitfields.
          struct { 
            Object *filtsel; // [0:3] Filter Pin Select
            Object *filte; // [5:6] Digital Filter On External Pin
            Object *filtf; // [7:7] Filter Detect Flag
          } filt2; 

          // RST (LLWU Reset Enable register) bitfields.
          struct { 
            Object *rstfilt; // [0:0] Digital Filter On RESET Pin
            Object *llrste; // [1:1] Low-Leakage Mode RESET Enable
          } rst; 
        } fld;
      } k6;

      // ----- 8< ----- 8< -----  8< ----- 8< ----- 8< ----- 8< ----- 8< -----
    } u;

} KinetisLLWUState;

// ----------------------------------------------------------------------------

#endif /* KINETIS_LLWU_H_ */
