/*
 * Kinetis - PDB (Programmable Delay Block) emulation.
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

#ifndef KINETIS_PDB_H_
#define KINETIS_PDB_H_

#include "qemu/osdep.h"

#include <hw/cortexm/peripheral.h>
#include <hw/cortexm/kinetis/capabilities.h>

// ----------------------------------------------------------------------------

#define DEVICE_PATH_KINETIS_PDB DEVICE_PATH_KINETIS "PDB"

// ----------------------------------------------------------------------------

// Note: the "port-index" property has type "int".
typedef enum {
    // TODO: keep this list in ascending order.
    KINETIS_PORT_PDB0,
    KINETIS_PORT_PDB_UNDEFINED = 0xFF,
} kinetis_pdb_index_t;

// ----------------------------------------------------------------------------

#define TYPE_KINETIS_PDB TYPE_KINETIS_PREFIX "pdb" TYPE_PERIPHERAL_SUFFIX

// ----------------------------------------------------------------------------

// Parent definitions.
#define TYPE_KINETIS_PDB_PARENT TYPE_PERIPHERAL
typedef PeripheralClass KinetisPDBParentClass;
typedef PeripheralState KinetisPDBParentState;

// ----------------------------------------------------------------------------

// Class definitions.
#define KINETIS_PDB_GET_CLASS(obj) \
    OBJECT_GET_CLASS(KinetisPDBClass, (obj), TYPE_KINETIS_PDB)
#define KINETIS_PDB_CLASS(klass) \
    OBJECT_CLASS_CHECK(KinetisPDBClass, (klass), TYPE_KINETIS_PDB)

typedef struct {
    // private: 
    KinetisPDBParentClass parent_class;
    // public: 

    // None, so far.
} KinetisPDBClass;

// ----------------------------------------------------------------------------

// Instance definitions.
#define KINETIS_PDB_STATE(obj) \
    OBJECT_CHECK(KinetisPDBState, (obj), TYPE_KINETIS_PDB)

typedef struct {
    // private:
    KinetisPDBParentState parent_obj;
    // public:

    const KinetisCapabilities *capabilities;

    // TODO: remove this if the peripheral is always enabled.
    // Points to the bitfield that enables the peripheral.
    Object *enabling_bit;

    // Remove it if there is only one port
    kinetis_pdb_index_t port_index;

    union {
      // ----- 8< ----- 8< -----  8< ----- 8< ----- 8< ----- 8< ----- 8< -----

      // DO NOT REMOVE FIELDS! Automatically generated!
      // Merge fields from different family members.
      struct {
        // K6 PDB (Programmable Delay Block) registers.
        struct { 
          Object *sc; // 0 (Status and Control register) 
          Object *mod; // 0x4 (Modulus register) 
          Object *cnt; // 0x8 (Counter register) 
          Object *idly; // 0xC (Interrupt Delay register) 
          Object *chc1[2]; // 0x10 (Channel n Control register 1) 
          Object *chs[2]; // 0x14 (Channel n Status register) 
          Object *chdly0[2]; // 0x18 (Channel n Delay 0 register) 
          Object *chdly1[2]; // 0x1C (Channel n Delay 1 register) 
          Object *dacintc[2]; // 0x150 (DAC Interval Trigger n Control register) 
          Object *dacint[2]; // 0x154 (DAC Interval n register) 
          Object *poen; // 0x190 (Pulse-Out n Enable register) 
          Object *podly[3]; // 0x194 (Pulse-Out n Delay register) 
        } reg;

        struct { 

          // SC (Status and Control register) bitfields.
          struct { 
            Object *ldok; // [0:0] Load OK
            Object *cont; // [1:1] Continuous Mode Enable
            Object *mult; // [2:3] Multiplication Factor Select for Prescaler
            Object *pdbie; // [5:5] PDB Interrupt Enable
            Object *pdbif; // [6:6] PDB Interrupt Flag
            Object *pdben; // [7:7] PDB Enable
            Object *trgsel; // [8:11] Trigger Input Source Select
            Object *prescaler; // [12:14] Prescaler Divider Select
            Object *dmaen; // [15:15] DMA Enable
            Object *swtrig; // [16:16] Software Trigger
            Object *pdbeie; // [17:17] PDB Sequence Error Interrupt Enable
            Object *ldmod; // [18:19] Load Mode Select
          } sc; 

          // MOD (Modulus register) bitfields.
          struct { 
            Object *mod; // [0:15] PDB Modulus
          } mod; 

          // CNT (Counter register) bitfields.
          struct { 
            Object *cnt; // [0:15] PDB Counter
          } cnt; 

          // IDLY (Interrupt Delay register) bitfields.
          struct { 
            Object *idly; // [0:15] PDB Interrupt Delay
          } idly; 

          // CHnC1 (Channel n Control register 1) bitfields.
          struct { 
            Object *en; // [0:7] PDB Channel Pre-Trigger Enable
            Object *tos; // [8:15] PDB Channel Pre-Trigger Output Select
            Object *bb; // [16:23] PDB Channel Pre-Trigger Back-to-Back Operation Enable
          } chc1[2]; 

          // CHnS (Channel n Status register) bitfields.
          struct { 
            Object *err; // [0:7] PDB Channel Sequence Error Flags
            Object *cf; // [16:23] PDB Channel Flags
          } chs[2]; 

          // CHnDLY0 (Channel n Delay 0 register) bitfields.
          struct { 
            Object *dly; // [0:15] PDB Channel Delay
          } chdly0[2]; 

          // CHnDLY1 (Channel n Delay 1 register) bitfields.
          struct { 
            Object *dly; // [0:15] PDB Channel Delay
          } chdly1[2]; 

          // DACINTCn (DAC Interval Trigger n Control register) bitfields.
          struct { 
            Object *toe; // [0:0] DAC Interval Trigger Enable
            Object *ext; // [1:1] DAC External Trigger Input Enable
          } dacintc[2]; 

          // DACINTn (DAC Interval n register) bitfields.
          struct { 
            Object *int_; // [0:15] DAC Interval
          } dacint[2]; 

          // POEN (Pulse-Out n Enable register) bitfields.
          struct { 
            Object *poen; // [0:7] PDB Pulse-Out Enable
          } poen; 

          // POnDLY (Pulse-Out n Delay register) bitfields.
          struct { 
            Object *dly2; // [0:15] PDB Pulse-Out Delay 2
            Object *dly1; // [16:31] PDB Pulse-Out Delay 1
          } podly[3]; 
        } fld;
      } k6;

      // ----- 8< ----- 8< -----  8< ----- 8< ----- 8< ----- 8< ----- 8< -----
    } u;

} KinetisPDBState;

// ----------------------------------------------------------------------------

#endif /* KINETIS_PDB_H_ */
