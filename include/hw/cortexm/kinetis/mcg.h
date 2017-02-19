/*
 * Kinetis - MCG (Multipurpose Clock Generator module) emulation.
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

#ifndef KINETIS_MCG_H_
#define KINETIS_MCG_H_

#include "qemu/osdep.h"

#include <hw/cortexm/peripheral.h>
#include <hw/cortexm/kinetis/capabilities.h>

// ----------------------------------------------------------------------------

#define DEVICE_PATH_KINETIS_MCG DEVICE_PATH_KINETIS "MCG"


// ----------------------------------------------------------------------------

#define TYPE_KINETIS_MCG TYPE_KINETIS_PREFIX "mcg" TYPE_PERIPHERAL_SUFFIX

// ----------------------------------------------------------------------------

// Parent definitions.
#define TYPE_KINETIS_MCG_PARENT TYPE_PERIPHERAL
typedef PeripheralClass KinetisMCGParentClass;
typedef PeripheralState KinetisMCGParentState;

// ----------------------------------------------------------------------------

// Class definitions.
#define KINETIS_MCG_GET_CLASS(obj) \
    OBJECT_GET_CLASS(KinetisMCGClass, (obj), TYPE_KINETIS_MCG)
#define KINETIS_MCG_CLASS(klass) \
    OBJECT_CLASS_CHECK(KinetisMCGClass, (klass), TYPE_KINETIS_MCG)

typedef struct {
    // private: 
    KinetisMCGParentClass parent_class;
    // public: 

    // None, so far.
} KinetisMCGClass;

// ----------------------------------------------------------------------------

// Instance definitions.
#define KINETIS_MCG_STATE(obj) \
    OBJECT_CHECK(KinetisMCGState, (obj), TYPE_KINETIS_MCG)

typedef struct {
    // private:
    KinetisMCGParentState parent_obj;

    uint32_t xtal_freq_hz;
    uint32_t xtal32_freq_hz;
    uint32_t int_irc_freq_hz;
    uint32_t int_fast_freq_hz;
    uint32_t int_slow_freq_hz;

    // public:

    const KinetisCapabilities *capabilities;

    union {
      // ----- 8< ----- 8< -----  8< ----- 8< ----- 8< ----- 8< ----- 8< -----

      // DO NOT REMOVE FIELDS! Automatically generated!
      // Merge fields from different family members.
      struct {
        // K6 MCG (Multipurpose Clock Generator module) registers.
        struct { 
          Object *c1; // 0 (MCG Control 1 Register) 
          Object *c2; // 0x1 (MCG Control 2 Register) 
          Object *c3; // 0x2 (MCG Control 3 Register) 
          Object *c4; // 0x3 (MCG Control 4 Register) 
          Object *c5; // 0x4 (MCG Control 5 Register) 
          Object *c6; // 0x5 (MCG Control 6 Register) 
          Object *s; // 0x6 (MCG Status Register) 
          Object *sc; // 0x8 (MCG Status and Control Register) 
          Object *atcvh; // 0xA (MCG Auto Trim Compare Value High Register) 
          Object *atcvl; // 0xB (MCG Auto Trim Compare Value Low Register) 
          Object *c7; // 0xC (MCG Control 7 Register) 
          Object *c8; // 0xD (MCG Control 8 Register) 
        } reg;

        struct { 

          // C1 (MCG Control 1 Register) bitfields.
          struct { 
            Object *irefsten; // [0:0] Internal Reference Stop Enable
            Object *irclken; // [1:1] Internal Reference Clock Enable
            Object *irefs; // [2:2] Internal Reference Select
            Object *frdiv; // [3:5] FLL External Reference Divider
            Object *clks; // [6:7] Clock Source Select
          } c1; 

          // C2 (MCG Control 2 Register) bitfields.
          struct { 
            Object *ircs; // [0:0] Internal Reference Clock Select
            Object *lp; // [1:1] Low Power Select
            Object *erefs; // [2:2] External Reference Select
            Object *hgo; // [3:3] High Gain Oscillator Select
            Object *range; // [4:5] Frequency Range Select
            Object *fcftrim; // [6:6] Fast Internal Reference Clock Fine Trim
            Object *locre0; // [7:7] Loss of Clock Reset Enable
          } c2; 

          // C3 (MCG Control 3 Register) bitfields.
          struct { 
            Object *sctrim; // [0:7] Slow Internal Reference Clock Trim Setting
          } c3; 

          // C4 (MCG Control 4 Register) bitfields.
          struct { 
            Object *scftrim; // [0:0] Slow Internal Reference Clock Fine Trim
            Object *fctrim; // [1:4] Fast Internal Reference Clock Trim Setting
            Object *drst_drs; // [5:6] DCO Range Select
            Object *dmx32; // [7:7] DCO Maximum Frequency with 32.768 kHz Reference
          } c4; 

          // C5 (MCG Control 5 Register) bitfields.
          struct { 
            Object *prdiv0; // [0:4] PLL External Reference Divider
            Object *pllsten0; // [5:5] PLL Stop Enable
            Object *pllclken0; // [6:6] PLL Clock Enable
          } c5; 

          // C6 (MCG Control 6 Register) bitfields.
          struct { 
            Object *vdiv0; // [0:4] VCO 0 Divider
            Object *cme0; // [5:5] Clock Monitor Enable
            Object *plls; // [6:6] PLL Select
            Object *lolie0; // [7:7] Loss of Lock Interrrupt Enable
          } c6; 

          // S (MCG Status Register) bitfields.
          struct { 
            Object *ircst; // [0:0] Internal Reference Clock Status
            Object *oscinit0; // [1:1] OSC Initialization
            Object *clkst; // [2:3] Clock Mode Status
            Object *irefst; // [4:4] Internal Reference Status
            Object *pllst; // [5:5] PLL Select Status
            Object *lock0; // [6:6] Lock Status
            Object *lols0; // [7:7] Loss of Lock Status
          } s; 

          // SC (MCG Status and Control Register) bitfields.
          struct { 
            Object *locs0; // [0:0] OSC0 Loss of Clock Status
            Object *fcrdiv; // [1:3] Fast Clock Internal Reference Divider
            Object *fltprsrv; // [4:4] FLL Filter Preserve Enable
            Object *atmf; // [5:5] Automatic Trim Machine Fail Flag
            Object *atms; // [6:6] Automatic Trim Machine Select
            Object *atme; // [7:7] Automatic Trim Machine Enable
          } sc; 

          // ATCVH (MCG Auto Trim Compare Value High Register) bitfields.
          struct { 
            Object *atcvh; // [0:7] ATM Compare Value High
          } atcvh; 

          // ATCVL (MCG Auto Trim Compare Value Low Register) bitfields.
          struct { 
            Object *atcvl; // [0:7] ATM Compare Value Low
          } atcvl; 

          // C7 (MCG Control 7 Register) bitfields.
          struct { 
            Object *oscsel; // [0:1] MCG OSC Clock Select
          } c7; 

          // C8 (MCG Control 8 Register) bitfields.
          struct { 
            Object *locs1; // [0:0] RTC Loss of Clock Status
            Object *cme1; // [5:5] Clock Monitor Enable1
            Object *lolre; // [6:6] PLL Loss of Lock Reset Enable
            Object *locre1; // [7:7] Loss of Clock Reset Enable
          } c8; 
        } fld;
      } k6;

      // ----- 8< ----- 8< -----  8< ----- 8< ----- 8< ----- 8< ----- 8< -----
    } u;

} KinetisMCGState;

// ----------------------------------------------------------------------------

#endif /* KINETIS_MCG_H_ */
