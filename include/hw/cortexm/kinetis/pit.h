/*
 * Kinetis - PIT (Periodic Interrupt Timer) emulation.
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

#ifndef KINETIS_PIT_H_
#define KINETIS_PIT_H_

#include "qemu/osdep.h"

#include <hw/cortexm/peripheral.h>
#include <hw/cortexm/kinetis/capabilities.h>
#include <hw/cortexm/kinetis/sim.h>

#include <hw/ptimer.h>

// ----------------------------------------------------------------------------

#define DEVICE_PATH_KINETIS_PIT DEVICE_PATH_KINETIS "PIT"

#define KINETIS_IRQ_PIT_OUT    "nvic-out"

// ----------------------------------------------------------------------------

#define TYPE_KINETIS_PIT TYPE_KINETIS_PREFIX "pit" TYPE_PERIPHERAL_SUFFIX

// ----------------------------------------------------------------------------

// Parent definitions.
#define TYPE_KINETIS_PIT_PARENT TYPE_PERIPHERAL
typedef PeripheralClass KinetisPITParentClass;
typedef PeripheralState KinetisPITParentState;

// ----------------------------------------------------------------------------

// Class definitions.
#define KINETIS_PIT_GET_CLASS(obj) \
    OBJECT_GET_CLASS(KinetisPITClass, (obj), TYPE_KINETIS_PIT)
#define KINETIS_PIT_CLASS(klass) \
    OBJECT_CLASS_CHECK(KinetisPITClass, (klass), TYPE_KINETIS_PIT)

typedef struct {
    // private: 
    KinetisPITParentClass parent_class;
    // public: 

    // None, so far.
} KinetisPITClass;

// ----------------------------------------------------------------------------

// Instance definitions.
#define KINETIS_PIT_STATE(obj) \
    OBJECT_CHECK(KinetisPITState, (obj), TYPE_KINETIS_PIT)

typedef struct {
    // private:
    KinetisPITParentState parent_obj;
    // public:

    const KinetisCapabilities *capabilities;

    // Points to the bitfield that enables the peripheral.
    Object *enabling_bit;

    // Whether each timer is currently running
    bool timer_enabled[4];

    // Previous tif value, for tracking ACKs
    bool flag_prev[4];

    // QEMU ptimer objects
    ptimer_state *timer[4];

    // IRQs for the 4 timers
    qemu_irq irq_out[4];

    // Pointer to the SIM object, for getting timer freq
    KinetisSIMState *sim;

    union {
      // ----- 8< ----- 8< -----  8< ----- 8< ----- 8< ----- 8< ----- 8< -----

      // DO NOT REMOVE FIELDS! Automatically generated!
      // Merge fields from different family members.
      struct {
        // K6 PIT (Periodic Interrupt Timer) registers.
        struct { 
          Object *mcr; // 0 (PIT Module Control Register) 
          Object *ldval[4]; // 0x100 (Timer Load Value Register) 
          Object *cval[4]; // 0x104 (Current Timer Value Register) 
          Object *tctrl[4]; // 0x108 (Timer Control Register) 
          Object *tflg[4]; // 0x10C (Timer Flag Register) 
        } reg;

        struct { 

          // MCR (PIT Module Control Register) bitfields.
          struct { 
            Object *frz; // [0:0] Freeze
            Object *mdis; // [1:1] Module Disable - (PIT section)
          } mcr; 

          // LDVALn (Timer Load Value Register) bitfields.
          struct { 
            Object *tsv; // [0:31] Timer Start Value
          } ldval[4]; 

          // CVALn (Current Timer Value Register) bitfields.
          struct { 
            Object *tvl; // [0:31] Current Timer Value
          } cval[4]; 

          // TCTRLn (Timer Control Register) bitfields.
          struct { 
            Object *ten; // [0:0] Timer Enable
            Object *tie; // [1:1] Timer Interrupt Enable
            Object *chn; // [2:2] Chain Mode
          } tctrl[4]; 

          // TFLGn (Timer Flag Register) bitfields.
          struct { 
            Object *tif; // [0:0] Timer Interrupt Flag
          } tflg[4]; 
        } fld;
      } k6;

      // ----- 8< ----- 8< -----  8< ----- 8< ----- 8< ----- 8< ----- 8< -----
    } u;

} KinetisPITState;

// ----------------------------------------------------------------------------

#endif /* KINETIS_PIT_H_ */
