/*
 * Kinetis - FTFE_FlashConfig (Flash configuration field) emulation.
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

#ifndef KINETIS_FTFE_FlashConfig_H_
#define KINETIS_FTFE_FlashConfig_H_

#include "qemu/osdep.h"

#include <hw/cortexm/peripheral.h>
#include <hw/cortexm/kinetis/capabilities.h>

// ----------------------------------------------------------------------------

#define DEVICE_PATH_KINETIS_FTFE_FlashConfig DEVICE_PATH_KINETIS "FTFE_FlashConfig"


// ----------------------------------------------------------------------------

#define TYPE_KINETIS_FTFE_FlashConfig TYPE_KINETIS_PREFIX "ftfe_flashconfig" TYPE_PERIPHERAL_SUFFIX

// ----------------------------------------------------------------------------

// Parent definitions.
#define TYPE_KINETIS_FTFE_FlashConfig_PARENT TYPE_PERIPHERAL
typedef PeripheralClass KinetisFTFE_FlashConfigParentClass;
typedef PeripheralState KinetisFTFE_FlashConfigParentState;

// ----------------------------------------------------------------------------

// Class definitions.
#define KINETIS_FTFE_FlashConfig_GET_CLASS(obj) \
    OBJECT_GET_CLASS(KinetisFTFE_FlashConfigClass, (obj), TYPE_KINETIS_FTFE_FlashConfig)
#define KINETIS_FTFE_FlashConfig_CLASS(klass) \
    OBJECT_CLASS_CHECK(KinetisFTFE_FlashConfigClass, (klass), TYPE_KINETIS_FTFE_FlashConfig)

typedef struct {
    // private: 
    KinetisFTFE_FlashConfigParentClass parent_class;
    // public: 

    // None, so far.
} KinetisFTFE_FlashConfigClass;

// ----------------------------------------------------------------------------

// Instance definitions.
#define KINETIS_FTFE_FlashConfig_STATE(obj) \
    OBJECT_CHECK(KinetisFTFE_FlashConfigState, (obj), TYPE_KINETIS_FTFE_FlashConfig)

typedef struct {
    // private:
    KinetisFTFE_FlashConfigParentState parent_obj;
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
        // K6 FTFE_FlashConfig (Flash configuration field) registers.
        struct { 
          Object *backkey3; // 0 (Backdoor Comparison Key 3.) 
          Object *backkey2; // 0x1 (Backdoor Comparison Key 2.) 
          Object *backkey1; // 0x2 (Backdoor Comparison Key 1.) 
          Object *backkey0; // 0x3 (Backdoor Comparison Key 0.) 
          Object *backkey7; // 0x4 (Backdoor Comparison Key 7.) 
          Object *backkey6; // 0x5 (Backdoor Comparison Key 6.) 
          Object *backkey5; // 0x6 (Backdoor Comparison Key 5.) 
          Object *backkey4; // 0x7 (Backdoor Comparison Key 4.) 
          Object *fprot3; // 0x8 (Non-volatile P-Flash Protection 1 - Low Register) 
          Object *fprot2; // 0x9 (Non-volatile P-Flash Protection 1 - High Register) 
          Object *fprot1; // 0xA (Non-volatile P-Flash Protection 0 - Low Register) 
          Object *fprot0; // 0xB (Non-volatile P-Flash Protection 0 - High Register) 
          Object *fsec; // 0xC (Non-volatile Flash Security Register) 
          Object *fopt; // 0xD (Non-volatile Flash Option Register) 
          Object *feprot; // 0xE (Non-volatile EERAM Protection Register) 
          Object *fdprot; // 0xF (Non-volatile D-Flash Protection Register) 
        } reg;

        struct { 

          // BACKKEY3 (Backdoor Comparison Key 3.) bitfields.
          struct { 
            Object *key; // [0:7] Backdoor Comparison Key.
          } backkey3; 

          // BACKKEY2 (Backdoor Comparison Key 2.) bitfields.
          struct { 
            Object *key; // [0:7] Backdoor Comparison Key.
          } backkey2; 

          // BACKKEY1 (Backdoor Comparison Key 1.) bitfields.
          struct { 
            Object *key; // [0:7] Backdoor Comparison Key.
          } backkey1; 

          // BACKKEY0 (Backdoor Comparison Key 0.) bitfields.
          struct { 
            Object *key; // [0:7] Backdoor Comparison Key.
          } backkey0; 

          // BACKKEY7 (Backdoor Comparison Key 7.) bitfields.
          struct { 
            Object *key; // [0:7] Backdoor Comparison Key.
          } backkey7; 

          // BACKKEY6 (Backdoor Comparison Key 6.) bitfields.
          struct { 
            Object *key; // [0:7] Backdoor Comparison Key.
          } backkey6; 

          // BACKKEY5 (Backdoor Comparison Key 5.) bitfields.
          struct { 
            Object *key; // [0:7] Backdoor Comparison Key.
          } backkey5; 

          // BACKKEY4 (Backdoor Comparison Key 4.) bitfields.
          struct { 
            Object *key; // [0:7] Backdoor Comparison Key.
          } backkey4; 

          // FPROT3 (Non-volatile P-Flash Protection 1 - Low Register) bitfields.
          struct { 
            Object *prot; // [0:7] P-Flash Region Protect
          } fprot3; 

          // FPROT2 (Non-volatile P-Flash Protection 1 - High Register) bitfields.
          struct { 
            Object *prot; // [0:7] P-Flash Region Protect
          } fprot2; 

          // FPROT1 (Non-volatile P-Flash Protection 0 - Low Register) bitfields.
          struct { 
            Object *prot; // [0:7] P-Flash Region Protect
          } fprot1; 

          // FPROT0 (Non-volatile P-Flash Protection 0 - High Register) bitfields.
          struct { 
            Object *prot; // [0:7] P-Flash Region Protect
          } fprot0; 

          // FSEC (Non-volatile Flash Security Register) bitfields.
          struct { 
            Object *sec; // [0:1] Flash Security
            Object *fslacc; // [2:3] Freescale Failure Analysis Access Code
            Object *meen; // [4:5] No description available
            Object *keyen; // [6:7] Backdoor Key Security Enable
          } fsec; 

          // FOPT (Non-volatile Flash Option Register) bitfields.
          struct { 
            Object *lpboot; // [0:0] No description available
            Object *ezport_dis; // [1:1] No description available
          } fopt; 

          // FEPROT (Non-volatile EERAM Protection Register) bitfields.
          struct { 
            Object *eprot; // [0:7] No description available
          } feprot; 

          // FDPROT (Non-volatile D-Flash Protection Register) bitfields.
          struct { 
            Object *dprot; // [0:7] D-Flash Region Protect
          } fdprot; 
        } fld;
      } k6;

      // ----- 8< ----- 8< -----  8< ----- 8< ----- 8< ----- 8< ----- 8< -----
    } u;

} KinetisFTFE_FlashConfigState;

// ----------------------------------------------------------------------------

#endif /* KINETIS_FTFE_FlashConfig_H_ */
