/*
 * Kinetis - RFVBAT (VBAT register file) emulation.
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

#ifndef KINETIS_RFVBAT_H_
#define KINETIS_RFVBAT_H_

#include "qemu/osdep.h"

#include <hw/cortexm/peripheral.h>
#include <hw/cortexm/kinetis/capabilities.h>

// ----------------------------------------------------------------------------

#define DEVICE_PATH_KINETIS_RFVBAT DEVICE_PATH_KINETIS "RFVBAT"


// ----------------------------------------------------------------------------

#define TYPE_KINETIS_RFVBAT TYPE_KINETIS_PREFIX "rfvbat" TYPE_PERIPHERAL_SUFFIX

// ----------------------------------------------------------------------------

// Parent definitions.
#define TYPE_KINETIS_RFVBAT_PARENT TYPE_PERIPHERAL
typedef PeripheralClass KinetisRFVBATParentClass;
typedef PeripheralState KinetisRFVBATParentState;

// ----------------------------------------------------------------------------

// Class definitions.
#define KINETIS_RFVBAT_GET_CLASS(obj) \
    OBJECT_GET_CLASS(KinetisRFVBATClass, (obj), TYPE_KINETIS_RFVBAT)
#define KINETIS_RFVBAT_CLASS(klass) \
    OBJECT_CLASS_CHECK(KinetisRFVBATClass, (klass), TYPE_KINETIS_RFVBAT)

typedef struct {
    // private: 
    KinetisRFVBATParentClass parent_class;
    // public: 

    // None, so far.
} KinetisRFVBATClass;

// ----------------------------------------------------------------------------

// Instance definitions.
#define KINETIS_RFVBAT_STATE(obj) \
    OBJECT_CHECK(KinetisRFVBATState, (obj), TYPE_KINETIS_RFVBAT)

typedef struct {
    // private:
    KinetisRFVBATParentState parent_obj;
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
        // K6 RFVBAT (VBAT register file) registers.
        struct { 
          Object *reg[8]; // 0 (VBAT register file register) 
        } reg;

        struct { 

          // REGn (VBAT register file register) bitfields.
          struct { 
            Object *ll; // [0:7] No description available
            Object *lh; // [8:15] No description available
            Object *hl; // [16:23] No description available
            Object *hh; // [24:31] No description available
          } reg[8]; 
        } fld;
      } k6;

      // ----- 8< ----- 8< -----  8< ----- 8< ----- 8< ----- 8< ----- 8< -----
    } u;

} KinetisRFVBATState;

// ----------------------------------------------------------------------------

#endif /* KINETIS_RFVBAT_H_ */
