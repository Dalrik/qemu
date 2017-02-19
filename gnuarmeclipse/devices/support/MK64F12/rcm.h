/*
 * Kinetis - RCM (Reset Control Module) emulation.
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

#ifndef KINETIS_RCM_H_
#define KINETIS_RCM_H_

#include "qemu/osdep.h"

#include <hw/cortexm/peripheral.h>
#include <hw/cortexm/kinetis/capabilities.h>

// ----------------------------------------------------------------------------

#define DEVICE_PATH_KINETIS_RCM DEVICE_PATH_KINETIS "RCM"


// ----------------------------------------------------------------------------

#define TYPE_KINETIS_RCM TYPE_KINETIS_PREFIX "rcm" TYPE_PERIPHERAL_SUFFIX

// ----------------------------------------------------------------------------

// Parent definitions.
#define TYPE_KINETIS_RCM_PARENT TYPE_PERIPHERAL
typedef PeripheralClass KinetisRCMParentClass;
typedef PeripheralState KinetisRCMParentState;

// ----------------------------------------------------------------------------

// Class definitions.
#define KINETIS_RCM_GET_CLASS(obj) \
    OBJECT_GET_CLASS(KinetisRCMClass, (obj), TYPE_KINETIS_RCM)
#define KINETIS_RCM_CLASS(klass) \
    OBJECT_CLASS_CHECK(KinetisRCMClass, (klass), TYPE_KINETIS_RCM)

typedef struct {
    // private: 
    KinetisRCMParentClass parent_class;
    // public: 

    // None, so far.
} KinetisRCMClass;

// ----------------------------------------------------------------------------

// Instance definitions.
#define KINETIS_RCM_STATE(obj) \
    OBJECT_CHECK(KinetisRCMState, (obj), TYPE_KINETIS_RCM)

typedef struct {
    // private:
    KinetisRCMParentState parent_obj;
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
        // K6 RCM (Reset Control Module) registers.
        struct { 
          Object *srs0; // 0 (System Reset Status Register 0) 
          Object *srs1; // 0x1 (System Reset Status Register 1) 
          Object *rpfc; // 0x4 (Reset Pin Filter Control register) 
          Object *rpfw; // 0x5 (Reset Pin Filter Width register) 
          Object *mr; // 0x7 (Mode Register) 
        } reg;

        struct { 

          // SRS0 (System Reset Status Register 0) bitfields.
          struct { 
            Object *wakeup; // [0:0] Low Leakage Wakeup Reset
            Object *lvd; // [1:1] Low-Voltage Detect Reset
            Object *loc; // [2:2] Loss-of-Clock Reset
            Object *lol; // [3:3] Loss-of-Lock Reset
            Object *wdog; // [5:5] Watchdog
            Object *pin; // [6:6] External Reset Pin
            Object *por; // [7:7] Power-On Reset
          } srs0; 

          // SRS1 (System Reset Status Register 1) bitfields.
          struct { 
            Object *jtag; // [0:0] JTAG Generated Reset
            Object *lockup; // [1:1] Core Lockup
            Object *sw; // [2:2] Software
            Object *mdm_ap; // [3:3] MDM-AP System Reset Request
            Object *ezpt; // [4:4] EzPort Reset
            Object *sackerr; // [5:5] Stop Mode Acknowledge Error Reset
          } srs1; 

          // RPFC (Reset Pin Filter Control register) bitfields.
          struct { 
            Object *rstfltsrw; // [0:1] Reset Pin Filter Select in Run and Wait Modes
            Object *rstfltss; // [2:2] Reset Pin Filter Select in Stop Mode
          } rpfc; 

          // RPFW (Reset Pin Filter Width register) bitfields.
          struct { 
            Object *rstfltsel; // [0:4] Reset Pin Filter Bus Clock Select
          } rpfw; 

          // MR (Mode Register) bitfields.
          struct { 
            Object *ezp_ms; // [1:1] EZP_MS_B pin state
          } mr; 
        } fld;
      } k6;

      // ----- 8< ----- 8< -----  8< ----- 8< ----- 8< ----- 8< ----- 8< -----
    } u;

} KinetisRCMState;

// ----------------------------------------------------------------------------

#endif /* KINETIS_RCM_H_ */
