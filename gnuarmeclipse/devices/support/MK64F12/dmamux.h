/*
 * Kinetis - DMAMUX (DMA channel multiplexor) emulation.
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

#ifndef KINETIS_DMAMUX_H_
#define KINETIS_DMAMUX_H_

#include "qemu/osdep.h"

#include <hw/cortexm/peripheral.h>
#include <hw/cortexm/kinetis/capabilities.h>

// ----------------------------------------------------------------------------

#define DEVICE_PATH_KINETIS_DMAMUX DEVICE_PATH_KINETIS "DMAMUX"


// ----------------------------------------------------------------------------

#define TYPE_KINETIS_DMAMUX TYPE_KINETIS_PREFIX "dmamux" TYPE_PERIPHERAL_SUFFIX

// ----------------------------------------------------------------------------

// Parent definitions.
#define TYPE_KINETIS_DMAMUX_PARENT TYPE_PERIPHERAL
typedef PeripheralClass KinetisDMAMUXParentClass;
typedef PeripheralState KinetisDMAMUXParentState;

// ----------------------------------------------------------------------------

// Class definitions.
#define KINETIS_DMAMUX_GET_CLASS(obj) \
    OBJECT_GET_CLASS(KinetisDMAMUXClass, (obj), TYPE_KINETIS_DMAMUX)
#define KINETIS_DMAMUX_CLASS(klass) \
    OBJECT_CLASS_CHECK(KinetisDMAMUXClass, (klass), TYPE_KINETIS_DMAMUX)

typedef struct {
    // private: 
    KinetisDMAMUXParentClass parent_class;
    // public: 

    // None, so far.
} KinetisDMAMUXClass;

// ----------------------------------------------------------------------------

// Instance definitions.
#define KINETIS_DMAMUX_STATE(obj) \
    OBJECT_CHECK(KinetisDMAMUXState, (obj), TYPE_KINETIS_DMAMUX)

typedef struct {
    // private:
    KinetisDMAMUXParentState parent_obj;
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
        // K6 DMAMUX (DMA channel multiplexor) registers.
        struct { 
          Object *chcfg[16]; // 0 (Channel Configuration register) 
        } reg;

        struct { 

          // CHCFGn (Channel Configuration register) bitfields.
          struct { 
            Object *source; // [0:5] DMA Channel Source (Slot)
            Object *trig; // [6:6] DMA Channel Trigger Enable
            Object *enbl; // [7:7] DMA Channel Enable
          } chcfg[16]; 
        } fld;
      } k6;

      // ----- 8< ----- 8< -----  8< ----- 8< ----- 8< ----- 8< ----- 8< -----
    } u;

} KinetisDMAMUXState;

// ----------------------------------------------------------------------------

#endif /* KINETIS_DMAMUX_H_ */
