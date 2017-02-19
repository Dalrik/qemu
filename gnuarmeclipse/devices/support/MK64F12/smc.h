/*
 * Kinetis - SMC (System Mode Controller) emulation.
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

#ifndef KINETIS_SMC_H_
#define KINETIS_SMC_H_

#include "qemu/osdep.h"

#include <hw/cortexm/peripheral.h>
#include <hw/cortexm/kinetis/capabilities.h>

// ----------------------------------------------------------------------------

#define DEVICE_PATH_KINETIS_SMC DEVICE_PATH_KINETIS "SMC"


// ----------------------------------------------------------------------------

#define TYPE_KINETIS_SMC TYPE_KINETIS_PREFIX "smc" TYPE_PERIPHERAL_SUFFIX

// ----------------------------------------------------------------------------

// Parent definitions.
#define TYPE_KINETIS_SMC_PARENT TYPE_PERIPHERAL
typedef PeripheralClass KinetisSMCParentClass;
typedef PeripheralState KinetisSMCParentState;

// ----------------------------------------------------------------------------

// Class definitions.
#define KINETIS_SMC_GET_CLASS(obj) \
    OBJECT_GET_CLASS(KinetisSMCClass, (obj), TYPE_KINETIS_SMC)
#define KINETIS_SMC_CLASS(klass) \
    OBJECT_CLASS_CHECK(KinetisSMCClass, (klass), TYPE_KINETIS_SMC)

typedef struct {
    // private: 
    KinetisSMCParentClass parent_class;
    // public: 

    // None, so far.
} KinetisSMCClass;

// ----------------------------------------------------------------------------

// Instance definitions.
#define KINETIS_SMC_STATE(obj) \
    OBJECT_CHECK(KinetisSMCState, (obj), TYPE_KINETIS_SMC)

typedef struct {
    // private:
    KinetisSMCParentState parent_obj;
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
        // K6 SMC (System Mode Controller) registers.
        struct { 
          Object *pmprot; // 0 (Power Mode Protection register) 
          Object *pmctrl; // 0x1 (Power Mode Control register) 
          Object *vllsctrl; // 0x2 (VLLS Control register) 
          Object *pmstat; // 0x3 (Power Mode Status register) 
        } reg;

        struct { 

          // PMPROT (Power Mode Protection register) bitfields.
          struct { 
            Object *avlls; // [1:1] Allow Very-Low-Leakage Stop Mode
            Object *alls; // [3:3] Allow Low-Leakage Stop Mode
            Object *avlp; // [5:5] Allow Very-Low-Power Modes
          } pmprot; 

          // PMCTRL (Power Mode Control register) bitfields.
          struct { 
            Object *stopm; // [0:2] Stop Mode Control
            Object *stopa; // [3:3] Stop Aborted
            Object *runm; // [5:6] Run Mode Control
            Object *lpwui; // [7:7] Low-Power Wake Up On Interrupt
          } pmctrl; 

          // VLLSCTRL (VLLS Control register) bitfields.
          struct { 
            Object *vllsm; // [0:2] VLLS Mode Control
            Object *porpo; // [5:5] POR Power Option
          } vllsctrl; 

          // PMSTAT (Power Mode Status register) bitfields.
          struct { 
            Object *pmstat; // [0:6] No description available
          } pmstat; 
        } fld;
      } k6;

      // ----- 8< ----- 8< -----  8< ----- 8< ----- 8< ----- 8< ----- 8< -----
    } u;

} KinetisSMCState;

// ----------------------------------------------------------------------------

#endif /* KINETIS_SMC_H_ */
