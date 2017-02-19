/*
 * Kinetis - FTFE (Flash Memory Interface) emulation.
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

#ifndef KINETIS_FTFE_H_
#define KINETIS_FTFE_H_

#include "qemu/osdep.h"

#include <hw/cortexm/peripheral.h>
#include <hw/cortexm/kinetis/capabilities.h>

// ----------------------------------------------------------------------------

#define DEVICE_PATH_KINETIS_FTFE DEVICE_PATH_KINETIS "FTFE"


// ----------------------------------------------------------------------------

#define TYPE_KINETIS_FTFE TYPE_KINETIS_PREFIX "ftfe" TYPE_PERIPHERAL_SUFFIX

// ----------------------------------------------------------------------------

// Parent definitions.
#define TYPE_KINETIS_FTFE_PARENT TYPE_PERIPHERAL
typedef PeripheralClass KinetisFTFEParentClass;
typedef PeripheralState KinetisFTFEParentState;

// ----------------------------------------------------------------------------

// Class definitions.
#define KINETIS_FTFE_GET_CLASS(obj) \
    OBJECT_GET_CLASS(KinetisFTFEClass, (obj), TYPE_KINETIS_FTFE)
#define KINETIS_FTFE_CLASS(klass) \
    OBJECT_CLASS_CHECK(KinetisFTFEClass, (klass), TYPE_KINETIS_FTFE)

typedef struct {
    // private: 
    KinetisFTFEParentClass parent_class;
    // public: 

    // None, so far.
} KinetisFTFEClass;

// ----------------------------------------------------------------------------

// Instance definitions.
#define KINETIS_FTFE_STATE(obj) \
    OBJECT_CHECK(KinetisFTFEState, (obj), TYPE_KINETIS_FTFE)

typedef struct {
    // private:
    KinetisFTFEParentState parent_obj;
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
        // K6 FTFE (Flash Memory Interface) registers.
        struct { 
          Object *fstat; // 0 (Flash Status Register) 
          Object *fcnfg; // 0x1 (Flash Configuration Register) 
          Object *fsec; // 0x2 (Flash Security Register) 
          Object *fopt; // 0x3 (Flash Option Register) 
          Object *fccob[12]; // 0x4 (Flash Common Command Object Registers) 
          Object *fprot[4]; // 0x10 (Program Flash Protection Registers) 
          Object *feprot; // 0x16 (EEPROM Protection Register) 
          Object *fdprot; // 0x17 (Data Flash Protection Register) 
        } reg;

        struct { 

          // FSTAT (Flash Status Register) bitfields.
          struct { 
            Object *mgstat0; // [0:0] Memory Controller Command Completion Status Flag
            Object *fpviol; // [4:4] Flash Protection Violation Flag
            Object *accerr; // [5:5] Flash Access Error Flag
            Object *rdcolerr; // [6:6] FTFE Read Collision Error Flag
            Object *ccif; // [7:7] Command Complete Interrupt Flag
          } fstat; 

          // FCNFG (Flash Configuration Register) bitfields.
          struct { 
            Object *eeerdy; // [0:0] No description available
            Object *ramrdy; // [1:1] RAM Ready
            Object *pflsh; // [2:2] FTFE configuration
            Object *swap; // [3:3] Swap
            Object *erssusp; // [4:4] Erase Suspend
            Object *ersareq; // [5:5] Erase All Request
            Object *rdcollie; // [6:6] Read Collision Error Interrupt Enable
            Object *ccie; // [7:7] Command Complete Interrupt Enable
          } fcnfg; 

          // FSEC (Flash Security Register) bitfields.
          struct { 
            Object *sec; // [0:1] Flash Security
            Object *fslacc; // [2:3] Freescale Failure Analysis Access Code
            Object *meen; // [4:5] Mass Erase Enable Bits
            Object *keyen; // [6:7] Backdoor Key Security Enable
          } fsec; 

          // FOPT (Flash Option Register) bitfields.
          struct { 
            Object *opt; // [0:7] Nonvolatile Option
          } fopt; 

          // FCCOBn (Flash Common Command Object Registers) bitfields.
          struct { 
            Object *ccobn; // [0:7] No description available
          } fccob[12]; 

          // FPROTn (Program Flash Protection Registers) bitfields.
          struct { 
            Object *prot; // [0:7] Program Flash Region Protect
          } fprot[4]; 

          // FEPROT (EEPROM Protection Register) bitfields.
          struct { 
            Object *eprot; // [0:7] EEPROM Region Protect
          } feprot; 

          // FDPROT (Data Flash Protection Register) bitfields.
          struct { 
            Object *dprot; // [0:7] Data Flash Region Protect
          } fdprot; 
        } fld;
      } k6;

      // ----- 8< ----- 8< -----  8< ----- 8< ----- 8< ----- 8< ----- 8< -----
    } u;

} KinetisFTFEState;

// ----------------------------------------------------------------------------

#endif /* KINETIS_FTFE_H_ */
