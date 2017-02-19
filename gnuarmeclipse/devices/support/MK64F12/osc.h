/*
 * Kinetis - OSC (Oscillator) emulation.
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

#ifndef KINETIS_OSC_H_
#define KINETIS_OSC_H_

#include "qemu/osdep.h"

#include <hw/cortexm/peripheral.h>
#include <hw/cortexm/kinetis/capabilities.h>

// ----------------------------------------------------------------------------

#define DEVICE_PATH_KINETIS_OSC DEVICE_PATH_KINETIS "OSC"


// ----------------------------------------------------------------------------

#define TYPE_KINETIS_OSC TYPE_KINETIS_PREFIX "osc" TYPE_PERIPHERAL_SUFFIX

// ----------------------------------------------------------------------------

// Parent definitions.
#define TYPE_KINETIS_OSC_PARENT TYPE_PERIPHERAL
typedef PeripheralClass KinetisOSCParentClass;
typedef PeripheralState KinetisOSCParentState;

// ----------------------------------------------------------------------------

// Class definitions.
#define KINETIS_OSC_GET_CLASS(obj) \
    OBJECT_GET_CLASS(KinetisOSCClass, (obj), TYPE_KINETIS_OSC)
#define KINETIS_OSC_CLASS(klass) \
    OBJECT_CLASS_CHECK(KinetisOSCClass, (klass), TYPE_KINETIS_OSC)

typedef struct {
    // private: 
    KinetisOSCParentClass parent_class;
    // public: 

    // None, so far.
} KinetisOSCClass;

// ----------------------------------------------------------------------------

// Instance definitions.
#define KINETIS_OSC_STATE(obj) \
    OBJECT_CHECK(KinetisOSCState, (obj), TYPE_KINETIS_OSC)

typedef struct {
    // private:
    KinetisOSCParentState parent_obj;
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
        // K6 OSC (Oscillator) registers.
        struct { 
          Object *cr; // 0 (OSC Control Register) 
        } reg;

        struct { 

          // CR (OSC Control Register) bitfields.
          struct { 
            Object *sc16p; // [0:0] Oscillator 16 pF Capacitor Load Configure
            Object *sc8p; // [1:1] Oscillator 8 pF Capacitor Load Configure
            Object *sc4p; // [2:2] Oscillator 4 pF Capacitor Load Configure
            Object *sc2p; // [3:3] Oscillator 2 pF Capacitor Load Configure
            Object *erefsten; // [5:5] External Reference Stop Enable
            Object *erclken; // [7:7] External Reference Enable
          } cr; 
        } fld;
      } k6;

      // ----- 8< ----- 8< -----  8< ----- 8< ----- 8< ----- 8< ----- 8< -----
    } u;

} KinetisOSCState;

// ----------------------------------------------------------------------------

#endif /* KINETIS_OSC_H_ */
