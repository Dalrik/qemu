/*
 * Kinetis - RNG (Random Number Generator Accelerator) emulation.
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

#ifndef KINETIS_RNG_H_
#define KINETIS_RNG_H_

#include "qemu/osdep.h"

#include <hw/cortexm/peripheral.h>
#include <hw/cortexm/kinetis/capabilities.h>

// ----------------------------------------------------------------------------

#define DEVICE_PATH_KINETIS_RNG DEVICE_PATH_KINETIS "RNG"


// ----------------------------------------------------------------------------

#define TYPE_KINETIS_RNG TYPE_KINETIS_PREFIX "rng" TYPE_PERIPHERAL_SUFFIX

// ----------------------------------------------------------------------------

// Parent definitions.
#define TYPE_KINETIS_RNG_PARENT TYPE_PERIPHERAL
typedef PeripheralClass KinetisRNGParentClass;
typedef PeripheralState KinetisRNGParentState;

// ----------------------------------------------------------------------------

// Class definitions.
#define KINETIS_RNG_GET_CLASS(obj) \
    OBJECT_GET_CLASS(KinetisRNGClass, (obj), TYPE_KINETIS_RNG)
#define KINETIS_RNG_CLASS(klass) \
    OBJECT_CLASS_CHECK(KinetisRNGClass, (klass), TYPE_KINETIS_RNG)

typedef struct {
    // private: 
    KinetisRNGParentClass parent_class;
    // public: 

    // None, so far.
} KinetisRNGClass;

// ----------------------------------------------------------------------------

// Instance definitions.
#define KINETIS_RNG_STATE(obj) \
    OBJECT_CHECK(KinetisRNGState, (obj), TYPE_KINETIS_RNG)

typedef struct {
    // private:
    KinetisRNGParentState parent_obj;
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
        // K6 RNG (Random Number Generator Accelerator) registers.
        struct { 
          Object *cr; // 0 (RNGA Control Register) 
          Object *sr; // 0x4 (RNGA Status Register) 
          Object *er; // 0x8 (RNGA Entropy Register) 
          Object *or_; // 0xC (RNGA Output Register) 
        } reg;

        struct { 

          // CR (RNGA Control Register) bitfields.
          struct { 
            Object *go; // [0:0] Go
            Object *ha; // [1:1] High Assurance
            Object *intm; // [2:2] Interrupt Mask
            Object *clri; // [3:3] Clear Interrupt
            Object *slp; // [4:4] Sleep
          } cr; 

          // SR (RNGA Status Register) bitfields.
          struct { 
            Object *secv; // [0:0] Security Violation
            Object *lrs; // [1:1] Last Read Status
            Object *oru; // [2:2] Output Register Underflow
            Object *erri; // [3:3] Error Interrupt
            Object *slp; // [4:4] Sleep
            Object *oreg_lvl; // [8:15] Output Register Level
            Object *oreg_size; // [16:23] Output Register Size
          } sr; 

          // ER (RNGA Entropy Register) bitfields.
          struct { 
            Object *ext_ent; // [0:31] External Entropy
          } er; 

          // OR (RNGA Output Register) bitfields.
          struct { 
            Object *randout; // [0:31] Random Output
          } or_; 
        } fld;
      } k6;

      // ----- 8< ----- 8< -----  8< ----- 8< ----- 8< ----- 8< ----- 8< -----
    } u;

} KinetisRNGState;

// ----------------------------------------------------------------------------

#endif /* KINETIS_RNG_H_ */
