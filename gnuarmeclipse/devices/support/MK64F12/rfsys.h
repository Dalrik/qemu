/*
 * Kinetis - RFSYS (System register file) emulation.
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

#ifndef KINETIS_RFSYS_H_
#define KINETIS_RFSYS_H_

#include "qemu/osdep.h"

#include <hw/cortexm/peripheral.h>
#include <hw/cortexm/kinetis/capabilities.h>

// ----------------------------------------------------------------------------

#define DEVICE_PATH_KINETIS_RFSYS DEVICE_PATH_KINETIS "RFSYS"


// ----------------------------------------------------------------------------

#define TYPE_KINETIS_RFSYS TYPE_KINETIS_PREFIX "rfsys" TYPE_PERIPHERAL_SUFFIX

// ----------------------------------------------------------------------------

// Parent definitions.
#define TYPE_KINETIS_RFSYS_PARENT TYPE_PERIPHERAL
typedef PeripheralClass KinetisRFSYSParentClass;
typedef PeripheralState KinetisRFSYSParentState;

// ----------------------------------------------------------------------------

// Class definitions.
#define KINETIS_RFSYS_GET_CLASS(obj) \
    OBJECT_GET_CLASS(KinetisRFSYSClass, (obj), TYPE_KINETIS_RFSYS)
#define KINETIS_RFSYS_CLASS(klass) \
    OBJECT_CLASS_CHECK(KinetisRFSYSClass, (klass), TYPE_KINETIS_RFSYS)

typedef struct {
    // private: 
    KinetisRFSYSParentClass parent_class;
    // public: 

    // None, so far.
} KinetisRFSYSClass;

// ----------------------------------------------------------------------------

// Instance definitions.
#define KINETIS_RFSYS_STATE(obj) \
    OBJECT_CHECK(KinetisRFSYSState, (obj), TYPE_KINETIS_RFSYS)

typedef struct {
    // private:
    KinetisRFSYSParentState parent_obj;
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
        // K6 RFSYS (System register file) registers.
        struct { 
          Object *reg[8]; // 0 (Register file register) 
        } reg;

        struct { 

          // REGn (Register file register) bitfields.
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

} KinetisRFSYSState;

// ----------------------------------------------------------------------------

#endif /* KINETIS_RFSYS_H_ */
