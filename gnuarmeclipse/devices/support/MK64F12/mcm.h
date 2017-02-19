/*
 * Kinetis - MCM (Core Platform Miscellaneous Control Module) emulation.
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

#ifndef KINETIS_MCM_H_
#define KINETIS_MCM_H_

#include "qemu/osdep.h"

#include <hw/cortexm/peripheral.h>
#include <hw/cortexm/kinetis/capabilities.h>

// ----------------------------------------------------------------------------

#define DEVICE_PATH_KINETIS_MCM DEVICE_PATH_KINETIS "MCM"


// ----------------------------------------------------------------------------

#define TYPE_KINETIS_MCM TYPE_KINETIS_PREFIX "mcm" TYPE_PERIPHERAL_SUFFIX

// ----------------------------------------------------------------------------

// Parent definitions.
#define TYPE_KINETIS_MCM_PARENT TYPE_PERIPHERAL
typedef PeripheralClass KinetisMCMParentClass;
typedef PeripheralState KinetisMCMParentState;

// ----------------------------------------------------------------------------

// Class definitions.
#define KINETIS_MCM_GET_CLASS(obj) \
    OBJECT_GET_CLASS(KinetisMCMClass, (obj), TYPE_KINETIS_MCM)
#define KINETIS_MCM_CLASS(klass) \
    OBJECT_CLASS_CHECK(KinetisMCMClass, (klass), TYPE_KINETIS_MCM)

typedef struct {
    // private: 
    KinetisMCMParentClass parent_class;
    // public: 

    // None, so far.
} KinetisMCMClass;

// ----------------------------------------------------------------------------

// Instance definitions.
#define KINETIS_MCM_STATE(obj) \
    OBJECT_CHECK(KinetisMCMState, (obj), TYPE_KINETIS_MCM)

typedef struct {
    // private:
    KinetisMCMParentState parent_obj;
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
        // K6 MCM (Core Platform Miscellaneous Control Module) registers.
        struct { 
          Object *plasc; // 0x8 (Crossbar Switch (AXBS) Slave Configuration) 
          Object *plamc; // 0xA (Crossbar Switch (AXBS) Master Configuration) 
          Object *cr; // 0xC (Control Register) 
          Object *iscr; // 0x10 (Interrupt Status Register) 
          Object *etbcc; // 0x14 (ETB Counter Control register) 
          Object *etbrl; // 0x18 (ETB Reload register) 
          Object *etbcnt; // 0x1C (ETB Counter Value register) 
          Object *pid; // 0x30 (Process ID register) 
        } reg;

        struct { 

          // PLASC (Crossbar Switch (AXBS) Slave Configuration) bitfields.
          struct { 
            Object *asc; // [0:7] Each bit in the ASC field indicates whether there is a corresponding connection to the crossbar switch's slave input port.
          } plasc; 

          // PLAMC (Crossbar Switch (AXBS) Master Configuration) bitfields.
          struct { 
            Object *amc; // [0:7] Each bit in the AMC field indicates whether there is a corresponding connection to the AXBS master input port.
          } plamc; 

          // CR (Control Register) bitfields.
          struct { 
            Object *sramuap; // [24:25] SRAM_U arbitration priority
            Object *sramuwp; // [26:26] SRAM_U write protect
            Object *sramlap; // [28:29] SRAM_L arbitration priority
            Object *sramlwp; // [30:30] SRAM_L Write Protect
          } cr; 

          // ISCR (Interrupt Status Register) bitfields.
          struct { 
            Object *irq; // [1:1] Normal Interrupt Pending
            Object *nmi; // [2:2] Non-maskable Interrupt Pending
            Object *dhreq; // [3:3] Debug Halt Request Indicator
            Object *fioc; // [8:8] FPU invalid operation interrupt status
            Object *fdzc; // [9:9] FPU divide-by-zero interrupt status
            Object *fofc; // [10:10] FPU overflow interrupt status
            Object *fufc; // [11:11] FPU underflow interrupt status
            Object *fixc; // [12:12] FPU inexact interrupt status
            Object *fidc; // [15:15] FPU input denormal interrupt status
            Object *fioce; // [24:24] FPU invalid operation interrupt enable
            Object *fdzce; // [25:25] FPU divide-by-zero interrupt enable
            Object *fofce; // [26:26] FPU overflow interrupt enable
            Object *fufce; // [27:27] FPU underflow interrupt enable
            Object *fixce; // [28:28] FPU inexact interrupt enable
            Object *fidce; // [31:31] FPU input denormal interrupt enable
          } iscr; 

          // ETBCC (ETB Counter Control register) bitfields.
          struct { 
            Object *cnten; // [0:0] Counter Enable
            Object *rspt; // [1:2] Response Type
            Object *rlrq; // [3:3] Reload Request
            Object *etdis; // [4:4] ETM-To-TPIU Disable
            Object *itdis; // [5:5] ITM-To-TPIU Disable
          } etbcc; 

          // ETBRL (ETB Reload register) bitfields.
          struct { 
            Object *reload; // [0:10] Byte Count Reload Value
          } etbrl; 

          // ETBCNT (ETB Counter Value register) bitfields.
          struct { 
            Object *counter; // [0:10] Byte Count Counter Value
          } etbcnt; 

          // PID (Process ID register) bitfields.
          struct { 
            Object *pid; // [0:7] M0_PID And M1_PID For MPU
          } pid; 
        } fld;
      } k6;

      // ----- 8< ----- 8< -----  8< ----- 8< ----- 8< ----- 8< ----- 8< -----
    } u;

} KinetisMCMState;

// ----------------------------------------------------------------------------

#endif /* KINETIS_MCM_H_ */
