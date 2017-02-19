/*
 * Kinetis - AIPS (AIPS-Lite Bridge) emulation.
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

#ifndef KINETIS_AIPS_H_
#define KINETIS_AIPS_H_

#include "qemu/osdep.h"

#include <hw/cortexm/peripheral.h>
#include <hw/cortexm/kinetis/capabilities.h>

// ----------------------------------------------------------------------------

#define DEVICE_PATH_KINETIS_AIPS DEVICE_PATH_KINETIS "AIPS"

// ----------------------------------------------------------------------------

// Note: the "port-index" property has type "int".
typedef enum {
    // TODO: keep this list in ascending order.
    KINETIS_PORT_AIPS0,
    KINETIS_PORT_AIPS1,
    KINETIS_PORT_AIPS_UNDEFINED = 0xFF,
} kinetis_aips_index_t;

// ----------------------------------------------------------------------------

#define TYPE_KINETIS_AIPS TYPE_KINETIS_PREFIX "aips" TYPE_PERIPHERAL_SUFFIX

// ----------------------------------------------------------------------------

// Parent definitions.
#define TYPE_KINETIS_AIPS_PARENT TYPE_PERIPHERAL
typedef PeripheralClass KinetisAIPSParentClass;
typedef PeripheralState KinetisAIPSParentState;

// ----------------------------------------------------------------------------

// Class definitions.
#define KINETIS_AIPS_GET_CLASS(obj) \
    OBJECT_GET_CLASS(KinetisAIPSClass, (obj), TYPE_KINETIS_AIPS)
#define KINETIS_AIPS_CLASS(klass) \
    OBJECT_CLASS_CHECK(KinetisAIPSClass, (klass), TYPE_KINETIS_AIPS)

typedef struct {
    // private: 
    KinetisAIPSParentClass parent_class;
    // public: 

    // None, so far.
} KinetisAIPSClass;

// ----------------------------------------------------------------------------

// Instance definitions.
#define KINETIS_AIPS_STATE(obj) \
    OBJECT_CHECK(KinetisAIPSState, (obj), TYPE_KINETIS_AIPS)

typedef struct {
    // private:
    KinetisAIPSParentState parent_obj;
    // public:

    const KinetisCapabilities *capabilities;

    // TODO: remove this if the peripheral is always enabled.
    // Points to the bitfield that enables the peripheral.
    Object *enabling_bit;

    // Remove it if there is only one port
    kinetis_aips_index_t port_index;

    union {
      // ----- 8< ----- 8< -----  8< ----- 8< ----- 8< ----- 8< ----- 8< -----

      // DO NOT REMOVE FIELDS! Automatically generated!
      // Merge fields from different family members.
      struct {
        // K6 AIPS (AIPS-Lite Bridge) registers.
        struct { 
          Object *mpra; // 0 (Master Privilege Register A) 
          Object *pacra; // 0x20 (Peripheral Access Control Register) 
          Object *pacrb; // 0x24 (Peripheral Access Control Register) 
          Object *pacrc; // 0x28 (Peripheral Access Control Register) 
          Object *pacrd; // 0x2C (Peripheral Access Control Register) 
          Object *pacre; // 0x40 (Peripheral Access Control Register) 
          Object *pacrf; // 0x44 (Peripheral Access Control Register) 
          Object *pacrg; // 0x48 (Peripheral Access Control Register) 
          Object *pacrh; // 0x4C (Peripheral Access Control Register) 
          Object *pacri; // 0x50 (Peripheral Access Control Register) 
          Object *pacrj; // 0x54 (Peripheral Access Control Register) 
          Object *pacrk; // 0x58 (Peripheral Access Control Register) 
          Object *pacrl; // 0x5C (Peripheral Access Control Register) 
          Object *pacrm; // 0x60 (Peripheral Access Control Register) 
          Object *pacrn; // 0x64 (Peripheral Access Control Register) 
          Object *pacro; // 0x68 (Peripheral Access Control Register) 
          Object *pacrp; // 0x6C (Peripheral Access Control Register) 
          Object *pacru; // 0x80 (Peripheral Access Control Register) 
        } reg;

        struct { 

          // MPRA (Master Privilege Register A) bitfields.
          struct { 
            Object *mpl5; // [8:8] Master 5 Privilege Level
            Object *mtw5; // [9:9] Master 5 Trusted For Writes
            Object *mtr5; // [10:10] Master 5 Trusted For Read
            Object *mpl4; // [12:12] Master 4 Privilege Level
            Object *mtw4; // [13:13] Master 4 Trusted For Writes
            Object *mtr4; // [14:14] Master 4 Trusted For Read
            Object *mpl3; // [16:16] Master 3 Privilege Level
            Object *mtw3; // [17:17] Master 3 Trusted For Writes
            Object *mtr3; // [18:18] Master 3 Trusted For Read
            Object *mpl2; // [20:20] Master 2 Privilege Level
            Object *mtw2; // [21:21] Master 2 Trusted For Writes
            Object *mtr2; // [22:22] Master 2 Trusted For Read
            Object *mpl1; // [24:24] Master 1 Privilege Level
            Object *mtw1; // [25:25] Master 1 Trusted for Writes
            Object *mtr1; // [26:26] Master 1 Trusted for Read
            Object *mpl0; // [28:28] Master 0 Privilege Level
            Object *mtw0; // [29:29] Master 0 Trusted For Writes
            Object *mtr0; // [30:30] Master 0 Trusted For Read
          } mpra; 

          // PACRA (Peripheral Access Control Register) bitfields.
          struct { 
            Object *tp7; // [0:0] Trusted Protect
            Object *wp7; // [1:1] Write Protect
            Object *sp7; // [2:2] Supervisor Protect
            Object *tp6; // [4:4] Trusted Protect
            Object *wp6; // [5:5] Write Protect
            Object *sp6; // [6:6] Supervisor Protect
            Object *tp5; // [8:8] Trusted Protect
            Object *wp5; // [9:9] Write Protect
            Object *sp5; // [10:10] Supervisor Protect
            Object *tp4; // [12:12] Trusted Protect
            Object *wp4; // [13:13] Write Protect
            Object *sp4; // [14:14] Supervisor Protect
            Object *tp3; // [16:16] Trusted Protect
            Object *wp3; // [17:17] Write Protect
            Object *sp3; // [18:18] Supervisor Protect
            Object *tp2; // [20:20] Trusted Protect
            Object *wp2; // [21:21] Write Protect
            Object *sp2; // [22:22] Supervisor Protect
            Object *tp1; // [24:24] Trusted Protect
            Object *wp1; // [25:25] Write Protect
            Object *sp1; // [26:26] Supervisor Protect
            Object *tp0; // [28:28] Trusted Protect
            Object *wp0; // [29:29] Write Protect
            Object *sp0; // [30:30] Supervisor Protect
          } pacra; 

          // PACRB (Peripheral Access Control Register) bitfields.
          struct { 
            Object *tp7; // [0:0] Trusted Protect
            Object *wp7; // [1:1] Write Protect
            Object *sp7; // [2:2] Supervisor Protect
            Object *tp6; // [4:4] Trusted Protect
            Object *wp6; // [5:5] Write Protect
            Object *sp6; // [6:6] Supervisor Protect
            Object *tp5; // [8:8] Trusted Protect
            Object *wp5; // [9:9] Write Protect
            Object *sp5; // [10:10] Supervisor Protect
            Object *tp4; // [12:12] Trusted Protect
            Object *wp4; // [13:13] Write Protect
            Object *sp4; // [14:14] Supervisor Protect
            Object *tp3; // [16:16] Trusted Protect
            Object *wp3; // [17:17] Write Protect
            Object *sp3; // [18:18] Supervisor Protect
            Object *tp2; // [20:20] Trusted Protect
            Object *wp2; // [21:21] Write Protect
            Object *sp2; // [22:22] Supervisor Protect
            Object *tp1; // [24:24] Trusted Protect
            Object *wp1; // [25:25] Write Protect
            Object *sp1; // [26:26] Supervisor Protect
            Object *tp0; // [28:28] Trusted Protect
            Object *wp0; // [29:29] Write Protect
            Object *sp0; // [30:30] Supervisor Protect
          } pacrb; 

          // PACRC (Peripheral Access Control Register) bitfields.
          struct { 
            Object *tp7; // [0:0] Trusted Protect
            Object *wp7; // [1:1] Write Protect
            Object *sp7; // [2:2] Supervisor Protect
            Object *tp6; // [4:4] Trusted Protect
            Object *wp6; // [5:5] Write Protect
            Object *sp6; // [6:6] Supervisor Protect
            Object *tp5; // [8:8] Trusted Protect
            Object *wp5; // [9:9] Write Protect
            Object *sp5; // [10:10] Supervisor Protect
            Object *tp4; // [12:12] Trusted Protect
            Object *wp4; // [13:13] Write Protect
            Object *sp4; // [14:14] Supervisor Protect
            Object *tp3; // [16:16] Trusted Protect
            Object *wp3; // [17:17] Write Protect
            Object *sp3; // [18:18] Supervisor Protect
            Object *tp2; // [20:20] Trusted Protect
            Object *wp2; // [21:21] Write Protect
            Object *sp2; // [22:22] Supervisor Protect
            Object *tp1; // [24:24] Trusted Protect
            Object *wp1; // [25:25] Write Protect
            Object *sp1; // [26:26] Supervisor Protect
            Object *tp0; // [28:28] Trusted Protect
            Object *wp0; // [29:29] Write Protect
            Object *sp0; // [30:30] Supervisor Protect
          } pacrc; 

          // PACRD (Peripheral Access Control Register) bitfields.
          struct { 
            Object *tp7; // [0:0] Trusted Protect
            Object *wp7; // [1:1] Write Protect
            Object *sp7; // [2:2] Supervisor Protect
            Object *tp6; // [4:4] Trusted Protect
            Object *wp6; // [5:5] Write Protect
            Object *sp6; // [6:6] Supervisor Protect
            Object *tp5; // [8:8] Trusted Protect
            Object *wp5; // [9:9] Write Protect
            Object *sp5; // [10:10] Supervisor Protect
            Object *tp4; // [12:12] Trusted Protect
            Object *wp4; // [13:13] Write Protect
            Object *sp4; // [14:14] Supervisor Protect
            Object *tp3; // [16:16] Trusted Protect
            Object *wp3; // [17:17] Write Protect
            Object *sp3; // [18:18] Supervisor Protect
            Object *tp2; // [20:20] Trusted Protect
            Object *wp2; // [21:21] Write Protect
            Object *sp2; // [22:22] Supervisor Protect
            Object *tp1; // [24:24] Trusted Protect
            Object *wp1; // [25:25] Write Protect
            Object *sp1; // [26:26] Supervisor Protect
            Object *tp0; // [28:28] Trusted Protect
            Object *wp0; // [29:29] Write Protect
            Object *sp0; // [30:30] Supervisor Protect
          } pacrd; 

          // PACRE (Peripheral Access Control Register) bitfields.
          struct { 
            Object *tp7; // [0:0] Trusted Protect
            Object *wp7; // [1:1] Write Protect
            Object *sp7; // [2:2] Supervisor Protect
            Object *tp6; // [4:4] Trusted Protect
            Object *wp6; // [5:5] Write Protect
            Object *sp6; // [6:6] Supervisor Protect
            Object *tp5; // [8:8] Trusted Protect
            Object *wp5; // [9:9] Write Protect
            Object *sp5; // [10:10] Supervisor Protect
            Object *tp4; // [12:12] Trusted Protect
            Object *wp4; // [13:13] Write Protect
            Object *sp4; // [14:14] Supervisor Protect
            Object *tp3; // [16:16] Trusted Protect
            Object *wp3; // [17:17] Write Protect
            Object *sp3; // [18:18] Supervisor Protect
            Object *tp2; // [20:20] Trusted Protect
            Object *wp2; // [21:21] Write Protect
            Object *sp2; // [22:22] Supervisor Protect
            Object *tp1; // [24:24] Trusted Protect
            Object *wp1; // [25:25] Write Protect
            Object *sp1; // [26:26] Supervisor Protect
            Object *tp0; // [28:28] Trusted Protect
            Object *wp0; // [29:29] Write Protect
            Object *sp0; // [30:30] Supervisor Protect
          } pacre; 

          // PACRF (Peripheral Access Control Register) bitfields.
          struct { 
            Object *tp7; // [0:0] Trusted Protect
            Object *wp7; // [1:1] Write Protect
            Object *sp7; // [2:2] Supervisor Protect
            Object *tp6; // [4:4] Trusted Protect
            Object *wp6; // [5:5] Write Protect
            Object *sp6; // [6:6] Supervisor Protect
            Object *tp5; // [8:8] Trusted Protect
            Object *wp5; // [9:9] Write Protect
            Object *sp5; // [10:10] Supervisor Protect
            Object *tp4; // [12:12] Trusted Protect
            Object *wp4; // [13:13] Write Protect
            Object *sp4; // [14:14] Supervisor Protect
            Object *tp3; // [16:16] Trusted Protect
            Object *wp3; // [17:17] Write Protect
            Object *sp3; // [18:18] Supervisor Protect
            Object *tp2; // [20:20] Trusted Protect
            Object *wp2; // [21:21] Write Protect
            Object *sp2; // [22:22] Supervisor Protect
            Object *tp1; // [24:24] Trusted Protect
            Object *wp1; // [25:25] Write Protect
            Object *sp1; // [26:26] Supervisor Protect
            Object *tp0; // [28:28] Trusted Protect
            Object *wp0; // [29:29] Write Protect
            Object *sp0; // [30:30] Supervisor Protect
          } pacrf; 

          // PACRG (Peripheral Access Control Register) bitfields.
          struct { 
            Object *tp7; // [0:0] Trusted Protect
            Object *wp7; // [1:1] Write Protect
            Object *sp7; // [2:2] Supervisor Protect
            Object *tp6; // [4:4] Trusted Protect
            Object *wp6; // [5:5] Write Protect
            Object *sp6; // [6:6] Supervisor Protect
            Object *tp5; // [8:8] Trusted Protect
            Object *wp5; // [9:9] Write Protect
            Object *sp5; // [10:10] Supervisor Protect
            Object *tp4; // [12:12] Trusted Protect
            Object *wp4; // [13:13] Write Protect
            Object *sp4; // [14:14] Supervisor Protect
            Object *tp3; // [16:16] Trusted Protect
            Object *wp3; // [17:17] Write Protect
            Object *sp3; // [18:18] Supervisor Protect
            Object *tp2; // [20:20] Trusted Protect
            Object *wp2; // [21:21] Write Protect
            Object *sp2; // [22:22] Supervisor Protect
            Object *tp1; // [24:24] Trusted Protect
            Object *wp1; // [25:25] Write Protect
            Object *sp1; // [26:26] Supervisor Protect
            Object *tp0; // [28:28] Trusted Protect
            Object *wp0; // [29:29] Write Protect
            Object *sp0; // [30:30] Supervisor Protect
          } pacrg; 

          // PACRH (Peripheral Access Control Register) bitfields.
          struct { 
            Object *tp7; // [0:0] Trusted Protect
            Object *wp7; // [1:1] Write Protect
            Object *sp7; // [2:2] Supervisor Protect
            Object *tp6; // [4:4] Trusted Protect
            Object *wp6; // [5:5] Write Protect
            Object *sp6; // [6:6] Supervisor Protect
            Object *tp5; // [8:8] Trusted Protect
            Object *wp5; // [9:9] Write Protect
            Object *sp5; // [10:10] Supervisor Protect
            Object *tp4; // [12:12] Trusted Protect
            Object *wp4; // [13:13] Write Protect
            Object *sp4; // [14:14] Supervisor Protect
            Object *tp3; // [16:16] Trusted Protect
            Object *wp3; // [17:17] Write Protect
            Object *sp3; // [18:18] Supervisor Protect
            Object *tp2; // [20:20] Trusted Protect
            Object *wp2; // [21:21] Write Protect
            Object *sp2; // [22:22] Supervisor Protect
            Object *tp1; // [24:24] Trusted Protect
            Object *wp1; // [25:25] Write Protect
            Object *sp1; // [26:26] Supervisor Protect
            Object *tp0; // [28:28] Trusted Protect
            Object *wp0; // [29:29] Write Protect
            Object *sp0; // [30:30] Supervisor Protect
          } pacrh; 

          // PACRI (Peripheral Access Control Register) bitfields.
          struct { 
            Object *tp7; // [0:0] Trusted Protect
            Object *wp7; // [1:1] Write Protect
            Object *sp7; // [2:2] Supervisor Protect
            Object *tp6; // [4:4] Trusted Protect
            Object *wp6; // [5:5] Write Protect
            Object *sp6; // [6:6] Supervisor Protect
            Object *tp5; // [8:8] Trusted Protect
            Object *wp5; // [9:9] Write Protect
            Object *sp5; // [10:10] Supervisor Protect
            Object *tp4; // [12:12] Trusted Protect
            Object *wp4; // [13:13] Write Protect
            Object *sp4; // [14:14] Supervisor Protect
            Object *tp3; // [16:16] Trusted Protect
            Object *wp3; // [17:17] Write Protect
            Object *sp3; // [18:18] Supervisor Protect
            Object *tp2; // [20:20] Trusted Protect
            Object *wp2; // [21:21] Write Protect
            Object *sp2; // [22:22] Supervisor Protect
            Object *tp1; // [24:24] Trusted Protect
            Object *wp1; // [25:25] Write Protect
            Object *sp1; // [26:26] Supervisor Protect
            Object *tp0; // [28:28] Trusted Protect
            Object *wp0; // [29:29] Write Protect
            Object *sp0; // [30:30] Supervisor Protect
          } pacri; 

          // PACRJ (Peripheral Access Control Register) bitfields.
          struct { 
            Object *tp7; // [0:0] Trusted Protect
            Object *wp7; // [1:1] Write Protect
            Object *sp7; // [2:2] Supervisor Protect
            Object *tp6; // [4:4] Trusted Protect
            Object *wp6; // [5:5] Write Protect
            Object *sp6; // [6:6] Supervisor Protect
            Object *tp5; // [8:8] Trusted Protect
            Object *wp5; // [9:9] Write Protect
            Object *sp5; // [10:10] Supervisor Protect
            Object *tp4; // [12:12] Trusted Protect
            Object *wp4; // [13:13] Write Protect
            Object *sp4; // [14:14] Supervisor Protect
            Object *tp3; // [16:16] Trusted Protect
            Object *wp3; // [17:17] Write Protect
            Object *sp3; // [18:18] Supervisor Protect
            Object *tp2; // [20:20] Trusted Protect
            Object *wp2; // [21:21] Write Protect
            Object *sp2; // [22:22] Supervisor Protect
            Object *tp1; // [24:24] Trusted Protect
            Object *wp1; // [25:25] Write Protect
            Object *sp1; // [26:26] Supervisor Protect
            Object *tp0; // [28:28] Trusted Protect
            Object *wp0; // [29:29] Write Protect
            Object *sp0; // [30:30] Supervisor Protect
          } pacrj; 

          // PACRK (Peripheral Access Control Register) bitfields.
          struct { 
            Object *tp7; // [0:0] Trusted Protect
            Object *wp7; // [1:1] Write Protect
            Object *sp7; // [2:2] Supervisor Protect
            Object *tp6; // [4:4] Trusted Protect
            Object *wp6; // [5:5] Write Protect
            Object *sp6; // [6:6] Supervisor Protect
            Object *tp5; // [8:8] Trusted Protect
            Object *wp5; // [9:9] Write Protect
            Object *sp5; // [10:10] Supervisor Protect
            Object *tp4; // [12:12] Trusted Protect
            Object *wp4; // [13:13] Write Protect
            Object *sp4; // [14:14] Supervisor Protect
            Object *tp3; // [16:16] Trusted Protect
            Object *wp3; // [17:17] Write Protect
            Object *sp3; // [18:18] Supervisor Protect
            Object *tp2; // [20:20] Trusted Protect
            Object *wp2; // [21:21] Write Protect
            Object *sp2; // [22:22] Supervisor Protect
            Object *tp1; // [24:24] Trusted Protect
            Object *wp1; // [25:25] Write Protect
            Object *sp1; // [26:26] Supervisor Protect
            Object *tp0; // [28:28] Trusted Protect
            Object *wp0; // [29:29] Write Protect
            Object *sp0; // [30:30] Supervisor Protect
          } pacrk; 

          // PACRL (Peripheral Access Control Register) bitfields.
          struct { 
            Object *tp7; // [0:0] Trusted Protect
            Object *wp7; // [1:1] Write Protect
            Object *sp7; // [2:2] Supervisor Protect
            Object *tp6; // [4:4] Trusted Protect
            Object *wp6; // [5:5] Write Protect
            Object *sp6; // [6:6] Supervisor Protect
            Object *tp5; // [8:8] Trusted Protect
            Object *wp5; // [9:9] Write Protect
            Object *sp5; // [10:10] Supervisor Protect
            Object *tp4; // [12:12] Trusted Protect
            Object *wp4; // [13:13] Write Protect
            Object *sp4; // [14:14] Supervisor Protect
            Object *tp3; // [16:16] Trusted Protect
            Object *wp3; // [17:17] Write Protect
            Object *sp3; // [18:18] Supervisor Protect
            Object *tp2; // [20:20] Trusted Protect
            Object *wp2; // [21:21] Write Protect
            Object *sp2; // [22:22] Supervisor Protect
            Object *tp1; // [24:24] Trusted Protect
            Object *wp1; // [25:25] Write Protect
            Object *sp1; // [26:26] Supervisor Protect
            Object *tp0; // [28:28] Trusted Protect
            Object *wp0; // [29:29] Write Protect
            Object *sp0; // [30:30] Supervisor Protect
          } pacrl; 

          // PACRM (Peripheral Access Control Register) bitfields.
          struct { 
            Object *tp7; // [0:0] Trusted Protect
            Object *wp7; // [1:1] Write Protect
            Object *sp7; // [2:2] Supervisor Protect
            Object *tp6; // [4:4] Trusted Protect
            Object *wp6; // [5:5] Write Protect
            Object *sp6; // [6:6] Supervisor Protect
            Object *tp5; // [8:8] Trusted Protect
            Object *wp5; // [9:9] Write Protect
            Object *sp5; // [10:10] Supervisor Protect
            Object *tp4; // [12:12] Trusted Protect
            Object *wp4; // [13:13] Write Protect
            Object *sp4; // [14:14] Supervisor Protect
            Object *tp3; // [16:16] Trusted Protect
            Object *wp3; // [17:17] Write Protect
            Object *sp3; // [18:18] Supervisor Protect
            Object *tp2; // [20:20] Trusted Protect
            Object *wp2; // [21:21] Write Protect
            Object *sp2; // [22:22] Supervisor Protect
            Object *tp1; // [24:24] Trusted Protect
            Object *wp1; // [25:25] Write Protect
            Object *sp1; // [26:26] Supervisor Protect
            Object *tp0; // [28:28] Trusted Protect
            Object *wp0; // [29:29] Write Protect
            Object *sp0; // [30:30] Supervisor Protect
          } pacrm; 

          // PACRN (Peripheral Access Control Register) bitfields.
          struct { 
            Object *tp7; // [0:0] Trusted Protect
            Object *wp7; // [1:1] Write Protect
            Object *sp7; // [2:2] Supervisor Protect
            Object *tp6; // [4:4] Trusted Protect
            Object *wp6; // [5:5] Write Protect
            Object *sp6; // [6:6] Supervisor Protect
            Object *tp5; // [8:8] Trusted Protect
            Object *wp5; // [9:9] Write Protect
            Object *sp5; // [10:10] Supervisor Protect
            Object *tp4; // [12:12] Trusted Protect
            Object *wp4; // [13:13] Write Protect
            Object *sp4; // [14:14] Supervisor Protect
            Object *tp3; // [16:16] Trusted Protect
            Object *wp3; // [17:17] Write Protect
            Object *sp3; // [18:18] Supervisor Protect
            Object *tp2; // [20:20] Trusted Protect
            Object *wp2; // [21:21] Write Protect
            Object *sp2; // [22:22] Supervisor Protect
            Object *tp1; // [24:24] Trusted Protect
            Object *wp1; // [25:25] Write Protect
            Object *sp1; // [26:26] Supervisor Protect
            Object *tp0; // [28:28] Trusted Protect
            Object *wp0; // [29:29] Write Protect
            Object *sp0; // [30:30] Supervisor Protect
          } pacrn; 

          // PACRO (Peripheral Access Control Register) bitfields.
          struct { 
            Object *tp7; // [0:0] Trusted Protect
            Object *wp7; // [1:1] Write Protect
            Object *sp7; // [2:2] Supervisor Protect
            Object *tp6; // [4:4] Trusted Protect
            Object *wp6; // [5:5] Write Protect
            Object *sp6; // [6:6] Supervisor Protect
            Object *tp5; // [8:8] Trusted Protect
            Object *wp5; // [9:9] Write Protect
            Object *sp5; // [10:10] Supervisor Protect
            Object *tp4; // [12:12] Trusted Protect
            Object *wp4; // [13:13] Write Protect
            Object *sp4; // [14:14] Supervisor Protect
            Object *tp3; // [16:16] Trusted Protect
            Object *wp3; // [17:17] Write Protect
            Object *sp3; // [18:18] Supervisor Protect
            Object *tp2; // [20:20] Trusted Protect
            Object *wp2; // [21:21] Write Protect
            Object *sp2; // [22:22] Supervisor Protect
            Object *tp1; // [24:24] Trusted Protect
            Object *wp1; // [25:25] Write Protect
            Object *sp1; // [26:26] Supervisor Protect
            Object *tp0; // [28:28] Trusted Protect
            Object *wp0; // [29:29] Write Protect
            Object *sp0; // [30:30] Supervisor Protect
          } pacro; 

          // PACRP (Peripheral Access Control Register) bitfields.
          struct { 
            Object *tp7; // [0:0] Trusted Protect
            Object *wp7; // [1:1] Write Protect
            Object *sp7; // [2:2] Supervisor Protect
            Object *tp6; // [4:4] Trusted Protect
            Object *wp6; // [5:5] Write Protect
            Object *sp6; // [6:6] Supervisor Protect
            Object *tp5; // [8:8] Trusted Protect
            Object *wp5; // [9:9] Write Protect
            Object *sp5; // [10:10] Supervisor Protect
            Object *tp4; // [12:12] Trusted Protect
            Object *wp4; // [13:13] Write Protect
            Object *sp4; // [14:14] Supervisor Protect
            Object *tp3; // [16:16] Trusted Protect
            Object *wp3; // [17:17] Write Protect
            Object *sp3; // [18:18] Supervisor Protect
            Object *tp2; // [20:20] Trusted Protect
            Object *wp2; // [21:21] Write Protect
            Object *sp2; // [22:22] Supervisor Protect
            Object *tp1; // [24:24] Trusted Protect
            Object *wp1; // [25:25] Write Protect
            Object *sp1; // [26:26] Supervisor Protect
            Object *tp0; // [28:28] Trusted Protect
            Object *wp0; // [29:29] Write Protect
            Object *sp0; // [30:30] Supervisor Protect
          } pacrp; 

          // PACRU (Peripheral Access Control Register) bitfields.
          struct { 
            Object *tp1; // [24:24] Trusted Protect
            Object *wp1; // [25:25] Write Protect
            Object *sp1; // [26:26] Supervisor Protect
            Object *tp0; // [28:28] Trusted Protect
            Object *wp0; // [29:29] Write Protect
            Object *sp0; // [30:30] Supervisor Protect
          } pacru; 
        } fld;
      } k6;

      // ----- 8< ----- 8< -----  8< ----- 8< ----- 8< ----- 8< ----- 8< -----
    } u;

} KinetisAIPSState;

// ----------------------------------------------------------------------------

#endif /* KINETIS_AIPS_H_ */
