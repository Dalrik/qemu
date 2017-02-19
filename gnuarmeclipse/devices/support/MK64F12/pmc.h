/*
 * Kinetis - PMC (Power Management Controller) emulation.
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

#ifndef KINETIS_PMC_H_
#define KINETIS_PMC_H_

#include "qemu/osdep.h"

#include <hw/cortexm/peripheral.h>
#include <hw/cortexm/kinetis/capabilities.h>

// ----------------------------------------------------------------------------

#define DEVICE_PATH_KINETIS_PMC DEVICE_PATH_KINETIS "PMC"


// ----------------------------------------------------------------------------

#define TYPE_KINETIS_PMC TYPE_KINETIS_PREFIX "pmc" TYPE_PERIPHERAL_SUFFIX

// ----------------------------------------------------------------------------

// Parent definitions.
#define TYPE_KINETIS_PMC_PARENT TYPE_PERIPHERAL
typedef PeripheralClass KinetisPMCParentClass;
typedef PeripheralState KinetisPMCParentState;

// ----------------------------------------------------------------------------

// Class definitions.
#define KINETIS_PMC_GET_CLASS(obj) \
    OBJECT_GET_CLASS(KinetisPMCClass, (obj), TYPE_KINETIS_PMC)
#define KINETIS_PMC_CLASS(klass) \
    OBJECT_CLASS_CHECK(KinetisPMCClass, (klass), TYPE_KINETIS_PMC)

typedef struct {
    // private: 
    KinetisPMCParentClass parent_class;
    // public: 

    // None, so far.
} KinetisPMCClass;

// ----------------------------------------------------------------------------

// Instance definitions.
#define KINETIS_PMC_STATE(obj) \
    OBJECT_CHECK(KinetisPMCState, (obj), TYPE_KINETIS_PMC)

typedef struct {
    // private:
    KinetisPMCParentState parent_obj;
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
        // K6 PMC (Power Management Controller) registers.
        struct { 
          Object *lvdsc1; // 0 (Low Voltage Detect Status And Control 1 register) 
          Object *lvdsc2; // 0x1 (Low Voltage Detect Status And Control 2 register) 
          Object *regsc; // 0x2 (Regulator Status And Control register) 
        } reg;

        struct { 

          // LVDSC1 (Low Voltage Detect Status And Control 1 register) bitfields.
          struct { 
            Object *lvdv; // [0:1] Low-Voltage Detect Voltage Select
            Object *lvdre; // [4:4] Low-Voltage Detect Reset Enable
            Object *lvdie; // [5:5] Low-Voltage Detect Interrupt Enable
            Object *lvdack; // [6:6] Low-Voltage Detect Acknowledge
            Object *lvdf; // [7:7] Low-Voltage Detect Flag
          } lvdsc1; 

          // LVDSC2 (Low Voltage Detect Status And Control 2 register) bitfields.
          struct { 
            Object *lvwv; // [0:1] Low-Voltage Warning Voltage Select
            Object *lvwie; // [5:5] Low-Voltage Warning Interrupt Enable
            Object *lvwack; // [6:6] Low-Voltage Warning Acknowledge
            Object *lvwf; // [7:7] Low-Voltage Warning Flag
          } lvdsc2; 

          // REGSC (Regulator Status And Control register) bitfields.
          struct { 
            Object *bgbe; // [0:0] Bandgap Buffer Enable
            Object *regons; // [2:2] Regulator In Run Regulation Status
            Object *ackiso; // [3:3] Acknowledge Isolation
            Object *bgen; // [4:4] Bandgap Enable In VLPx Operation
          } regsc; 
        } fld;
      } k6;

      // ----- 8< ----- 8< -----  8< ----- 8< ----- 8< ----- 8< ----- 8< -----
    } u;

} KinetisPMCState;

// ----------------------------------------------------------------------------

#endif /* KINETIS_PMC_H_ */
