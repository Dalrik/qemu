/*
 * Kinetis - FB (FlexBus external bus interface) emulation.
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

#ifndef KINETIS_FB_H_
#define KINETIS_FB_H_

#include "qemu/osdep.h"

#include <hw/cortexm/peripheral.h>
#include <hw/cortexm/kinetis/capabilities.h>

// ----------------------------------------------------------------------------

#define DEVICE_PATH_KINETIS_FB DEVICE_PATH_KINETIS "FB"


// ----------------------------------------------------------------------------

#define TYPE_KINETIS_FB TYPE_KINETIS_PREFIX "fb" TYPE_PERIPHERAL_SUFFIX

// ----------------------------------------------------------------------------

// Parent definitions.
#define TYPE_KINETIS_FB_PARENT TYPE_PERIPHERAL
typedef PeripheralClass KinetisFBParentClass;
typedef PeripheralState KinetisFBParentState;

// ----------------------------------------------------------------------------

// Class definitions.
#define KINETIS_FB_GET_CLASS(obj) \
    OBJECT_GET_CLASS(KinetisFBClass, (obj), TYPE_KINETIS_FB)
#define KINETIS_FB_CLASS(klass) \
    OBJECT_CLASS_CHECK(KinetisFBClass, (klass), TYPE_KINETIS_FB)

typedef struct {
    // private: 
    KinetisFBParentClass parent_class;
    // public: 

    // None, so far.
} KinetisFBClass;

// ----------------------------------------------------------------------------

// Instance definitions.
#define KINETIS_FB_STATE(obj) \
    OBJECT_CHECK(KinetisFBState, (obj), TYPE_KINETIS_FB)

typedef struct {
    // private:
    KinetisFBParentState parent_obj;
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
        // K6 FB (FlexBus external bus interface) registers.
        struct { 
          Object *csar[6]; // 0 (Chip Select Address Register) 
          Object *csmr[6]; // 0x4 (Chip Select Mask Register) 
          Object *cscr[6]; // 0x8 (Chip Select Control Register) 
          Object *cspmcr; // 0x60 (Chip Select port Multiplexing Control Register) 
        } reg;

        struct { 

          // CSARn (Chip Select Address Register) bitfields.
          struct { 
            Object *ba; // [16:31] Base Address
          } csar[6]; 

          // CSMRn (Chip Select Mask Register) bitfields.
          struct { 
            Object *v; // [0:0] Valid
            Object *wp; // [8:8] Write Protect
            Object *bam; // [16:31] Base Address Mask
          } csmr[6]; 

          // CSCRn (Chip Select Control Register) bitfields.
          struct { 
            Object *bstw; // [3:3] Burst-Write Enable
            Object *bstr; // [4:4] Burst-Read Enable
            Object *bem; // [5:5] Byte-Enable Mode
            Object *ps; // [6:7] Port Size
            Object *aa; // [8:8] Auto-Acknowledge Enable
            Object *bls; // [9:9] Byte-Lane Shift
            Object *ws; // [10:15] Wait States
            Object *wrah; // [16:17] Write Address Hold or Deselect
            Object *rdah; // [18:19] Read Address Hold or Deselect
            Object *aset; // [20:21] Address Setup
            Object *exts; // [22:22] No description available
            Object *swsen; // [23:23] Secondary Wait State Enable
            Object *sws; // [26:31] Secondary Wait States
          } cscr[6]; 

          // CSPMCR (Chip Select port Multiplexing Control Register) bitfields.
          struct { 
            Object *group5; // [12:15] FlexBus Signal Group 5 Multiplex control
            Object *group4; // [16:19] FlexBus Signal Group 4 Multiplex control
            Object *group3; // [20:23] FlexBus Signal Group 3 Multiplex control
            Object *group2; // [24:27] FlexBus Signal Group 2 Multiplex control
            Object *group1; // [28:31] FlexBus Signal Group 1 Multiplex control
          } cspmcr; 
        } fld;
      } k6;

      // ----- 8< ----- 8< -----  8< ----- 8< ----- 8< ----- 8< ----- 8< -----
    } u;

} KinetisFBState;

// ----------------------------------------------------------------------------

#endif /* KINETIS_FB_H_ */
