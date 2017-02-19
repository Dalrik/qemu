/*
 * Kinetis - VREF (Voltage Reference) emulation.
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

#ifndef KINETIS_VREF_H_
#define KINETIS_VREF_H_

#include "qemu/osdep.h"

#include <hw/cortexm/peripheral.h>
#include <hw/cortexm/kinetis/capabilities.h>

// ----------------------------------------------------------------------------

#define DEVICE_PATH_KINETIS_VREF DEVICE_PATH_KINETIS "VREF"


// ----------------------------------------------------------------------------

#define TYPE_KINETIS_VREF TYPE_KINETIS_PREFIX "vref" TYPE_PERIPHERAL_SUFFIX

// ----------------------------------------------------------------------------

// Parent definitions.
#define TYPE_KINETIS_VREF_PARENT TYPE_PERIPHERAL
typedef PeripheralClass KinetisVREFParentClass;
typedef PeripheralState KinetisVREFParentState;

// ----------------------------------------------------------------------------

// Class definitions.
#define KINETIS_VREF_GET_CLASS(obj) \
    OBJECT_GET_CLASS(KinetisVREFClass, (obj), TYPE_KINETIS_VREF)
#define KINETIS_VREF_CLASS(klass) \
    OBJECT_CLASS_CHECK(KinetisVREFClass, (klass), TYPE_KINETIS_VREF)

typedef struct {
    // private: 
    KinetisVREFParentClass parent_class;
    // public: 

    // None, so far.
} KinetisVREFClass;

// ----------------------------------------------------------------------------

// Instance definitions.
#define KINETIS_VREF_STATE(obj) \
    OBJECT_CHECK(KinetisVREFState, (obj), TYPE_KINETIS_VREF)

typedef struct {
    // private:
    KinetisVREFParentState parent_obj;
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
        // K6 VREF (Voltage Reference) registers.
        struct { 
          Object *trm; // 0 (VREF Trim Register) 
          Object *sc; // 0x1 (VREF Status and Control Register) 
        } reg;

        struct { 

          // TRM (VREF Trim Register) bitfields.
          struct { 
            Object *trim; // [0:5] Trim bits
            Object *chopen; // [6:6] Chop oscillator enable. When set, internal chopping operation is enabled and the internal analog offset will be minimized.
          } trm; 

          // SC (VREF Status and Control Register) bitfields.
          struct { 
            Object *mode_lv; // [0:1] Buffer Mode selection
            Object *vrefst; // [2:2] Internal Voltage Reference stable
            Object *icompen; // [5:5] Second order curvature compensation enable
            Object *regen; // [6:6] Regulator enable
            Object *vrefen; // [7:7] Internal Voltage Reference enable
          } sc; 
        } fld;
      } k6;

      // ----- 8< ----- 8< -----  8< ----- 8< ----- 8< ----- 8< ----- 8< -----
    } u;

} KinetisVREFState;

// ----------------------------------------------------------------------------

#endif /* KINETIS_VREF_H_ */
