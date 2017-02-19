/*
 * Kinetis - CAN (Flex Controller Area Network module) emulation.
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

#ifndef KINETIS_CAN_H_
#define KINETIS_CAN_H_

#include "qemu/osdep.h"

#include <hw/cortexm/peripheral.h>
#include <hw/cortexm/kinetis/capabilities.h>

// ----------------------------------------------------------------------------

#define DEVICE_PATH_KINETIS_CAN DEVICE_PATH_KINETIS "CAN"

// ----------------------------------------------------------------------------

// Note: the "port-index" property has type "int".
typedef enum {
    // TODO: keep this list in ascending order.
    KINETIS_PORT_CAN0,
    KINETIS_PORT_CAN_UNDEFINED = 0xFF,
} kinetis_can_index_t;

// ----------------------------------------------------------------------------

#define TYPE_KINETIS_CAN TYPE_KINETIS_PREFIX "can" TYPE_PERIPHERAL_SUFFIX

// ----------------------------------------------------------------------------

// Parent definitions.
#define TYPE_KINETIS_CAN_PARENT TYPE_PERIPHERAL
typedef PeripheralClass KinetisCANParentClass;
typedef PeripheralState KinetisCANParentState;

// ----------------------------------------------------------------------------

// Class definitions.
#define KINETIS_CAN_GET_CLASS(obj) \
    OBJECT_GET_CLASS(KinetisCANClass, (obj), TYPE_KINETIS_CAN)
#define KINETIS_CAN_CLASS(klass) \
    OBJECT_CLASS_CHECK(KinetisCANClass, (klass), TYPE_KINETIS_CAN)

typedef struct {
    // private: 
    KinetisCANParentClass parent_class;
    // public: 

    // None, so far.
} KinetisCANClass;

// ----------------------------------------------------------------------------

// Instance definitions.
#define KINETIS_CAN_STATE(obj) \
    OBJECT_CHECK(KinetisCANState, (obj), TYPE_KINETIS_CAN)

typedef struct {
    // private:
    KinetisCANParentState parent_obj;
    // public:

    const KinetisCapabilities *capabilities;

    // TODO: remove this if the peripheral is always enabled.
    // Points to the bitfield that enables the peripheral.
    Object *enabling_bit;

    // Remove it if there is only one port
    kinetis_can_index_t port_index;

    union {
      // ----- 8< ----- 8< -----  8< ----- 8< ----- 8< ----- 8< ----- 8< -----

      // DO NOT REMOVE FIELDS! Automatically generated!
      // Merge fields from different family members.
      struct {
        // K6 CAN (Flex Controller Area Network module) registers.
        struct { 
          Object *mcr; // 0 (Module Configuration Register) 
          Object *ctrl1; // 0x4 (Control 1 register) 
          Object *timer; // 0x8 (Free Running Timer) 
          Object *rxmgmask; // 0x10 (Rx Mailboxes Global Mask Register) 
          Object *rx14mask; // 0x14 (Rx 14 Mask register) 
          Object *rx15mask; // 0x18 (Rx 15 Mask register) 
          Object *ecr; // 0x1C (Error Counter) 
          Object *esr1; // 0x20 (Error and Status 1 register) 
          Object *imask1; // 0x28 (Interrupt Masks 1 register) 
          Object *iflag1; // 0x30 (Interrupt Flags 1 register) 
          Object *ctrl2; // 0x34 (Control 2 register) 
          Object *esr2; // 0x38 (Error and Status 2 register) 
          Object *crcr; // 0x44 (CRC Register) 
          Object *rxfgmask; // 0x48 (Rx FIFO Global Mask register) 
          Object *rxfir; // 0x4C (Rx FIFO Information Register) 
          Object *cs0; // 0x80 (Message Buffer 0 CS Register) 
          Object *id0; // 0x84 (Message Buffer 0 ID Register) 
          Object *word00; // 0x88 (Message Buffer 0 WORD0 Register) 
          Object *word10; // 0x8C (Message Buffer 0 WORD1 Register) 
          Object *cs1; // 0x90 (Message Buffer 1 CS Register) 
          Object *id1; // 0x94 (Message Buffer 1 ID Register) 
          Object *word01; // 0x98 (Message Buffer 1 WORD0 Register) 
          Object *word11; // 0x9C (Message Buffer 1 WORD1 Register) 
          Object *cs2; // 0xA0 (Message Buffer 2 CS Register) 
          Object *id2; // 0xA4 (Message Buffer 2 ID Register) 
          Object *word02; // 0xA8 (Message Buffer 2 WORD0 Register) 
          Object *word12; // 0xAC (Message Buffer 2 WORD1 Register) 
          Object *cs3; // 0xB0 (Message Buffer 3 CS Register) 
          Object *id3; // 0xB4 (Message Buffer 3 ID Register) 
          Object *word03; // 0xB8 (Message Buffer 3 WORD0 Register) 
          Object *word13; // 0xBC (Message Buffer 3 WORD1 Register) 
          Object *cs4; // 0xC0 (Message Buffer 4 CS Register) 
          Object *id4; // 0xC4 (Message Buffer 4 ID Register) 
          Object *word04; // 0xC8 (Message Buffer 4 WORD0 Register) 
          Object *word14; // 0xCC (Message Buffer 4 WORD1 Register) 
          Object *cs5; // 0xD0 (Message Buffer 5 CS Register) 
          Object *id5; // 0xD4 (Message Buffer 5 ID Register) 
          Object *word05; // 0xD8 (Message Buffer 5 WORD0 Register) 
          Object *word15; // 0xDC (Message Buffer 5 WORD1 Register) 
          Object *cs6; // 0xE0 (Message Buffer 6 CS Register) 
          Object *id6; // 0xE4 (Message Buffer 6 ID Register) 
          Object *word06; // 0xE8 (Message Buffer 6 WORD0 Register) 
          Object *word16; // 0xEC (Message Buffer 6 WORD1 Register) 
          Object *cs7; // 0xF0 (Message Buffer 7 CS Register) 
          Object *id7; // 0xF4 (Message Buffer 7 ID Register) 
          Object *word07; // 0xF8 (Message Buffer 7 WORD0 Register) 
          Object *word17; // 0xFC (Message Buffer 7 WORD1 Register) 
          Object *cs8; // 0x100 (Message Buffer 8 CS Register) 
          Object *id8; // 0x104 (Message Buffer 8 ID Register) 
          Object *word08; // 0x108 (Message Buffer 8 WORD0 Register) 
          Object *word18; // 0x10C (Message Buffer 8 WORD1 Register) 
          Object *cs9; // 0x110 (Message Buffer 9 CS Register) 
          Object *id9; // 0x114 (Message Buffer 9 ID Register) 
          Object *word09; // 0x118 (Message Buffer 9 WORD0 Register) 
          Object *word19; // 0x11C (Message Buffer 9 WORD1 Register) 
          Object *cs10; // 0x120 (Message Buffer 10 CS Register) 
          Object *id10; // 0x124 (Message Buffer 10 ID Register) 
          Object *word010; // 0x128 (Message Buffer 10 WORD0 Register) 
          Object *word110; // 0x12C (Message Buffer 10 WORD1 Register) 
          Object *cs11; // 0x130 (Message Buffer 11 CS Register) 
          Object *id11; // 0x134 (Message Buffer 11 ID Register) 
          Object *word011; // 0x138 (Message Buffer 11 WORD0 Register) 
          Object *word111; // 0x13C (Message Buffer 11 WORD1 Register) 
          Object *cs12; // 0x140 (Message Buffer 12 CS Register) 
          Object *id12; // 0x144 (Message Buffer 12 ID Register) 
          Object *word012; // 0x148 (Message Buffer 12 WORD0 Register) 
          Object *word112; // 0x14C (Message Buffer 12 WORD1 Register) 
          Object *cs13; // 0x150 (Message Buffer 13 CS Register) 
          Object *id13; // 0x154 (Message Buffer 13 ID Register) 
          Object *word013; // 0x158 (Message Buffer 13 WORD0 Register) 
          Object *word113; // 0x15C (Message Buffer 13 WORD1 Register) 
          Object *cs14; // 0x160 (Message Buffer 14 CS Register) 
          Object *id14; // 0x164 (Message Buffer 14 ID Register) 
          Object *word014; // 0x168 (Message Buffer 14 WORD0 Register) 
          Object *word114; // 0x16C (Message Buffer 14 WORD1 Register) 
          Object *cs15; // 0x170 (Message Buffer 15 CS Register) 
          Object *id15; // 0x174 (Message Buffer 15 ID Register) 
          Object *word015; // 0x178 (Message Buffer 15 WORD0 Register) 
          Object *word115; // 0x17C (Message Buffer 15 WORD1 Register) 
          Object *rximr[16]; // 0x880 (Rx Individual Mask Registers) 
        } reg;

        struct { 

          // MCR (Module Configuration Register) bitfields.
          struct { 
            Object *maxmb; // [0:6] Number Of The Last Message Buffer
            Object *idam; // [8:9] ID Acceptance Mode
            Object *aen; // [12:12] Abort Enable
            Object *lprioen; // [13:13] Local Priority Enable
            Object *irmq; // [16:16] Individual Rx Masking And Queue Enable
            Object *srxdis; // [17:17] Self Reception Disable
            Object *waksrc; // [19:19] Wake Up Source
            Object *lpmack; // [20:20] Low-Power Mode Acknowledge
            Object *wrnen; // [21:21] Warning Interrupt Enable
            Object *slfwak; // [22:22] Self Wake Up
            Object *supv; // [23:23] Supervisor Mode
            Object *frzack; // [24:24] Freeze Mode Acknowledge
            Object *softrst; // [25:25] Soft Reset
            Object *wakmsk; // [26:26] Wake Up Interrupt Mask
            Object *notrdy; // [27:27] FlexCAN Not Ready
            Object *halt; // [28:28] Halt FlexCAN
            Object *rfen; // [29:29] Rx FIFO Enable
            Object *frz; // [30:30] Freeze Enable
            Object *mdis; // [31:31] Module Disable
          } mcr; 

          // CTRL1 (Control 1 register) bitfields.
          struct { 
            Object *propseg; // [0:2] Propagation Segment
            Object *lom; // [3:3] Listen-Only Mode
            Object *lbuf; // [4:4] Lowest Buffer Transmitted First
            Object *tsyn; // [5:5] Timer Sync
            Object *boffrec; // [6:6] Bus Off Recovery
            Object *smp; // [7:7] CAN Bit Sampling
            Object *rwrnmsk; // [10:10] Rx Warning Interrupt Mask
            Object *twrnmsk; // [11:11] Tx Warning Interrupt Mask
            Object *lpb; // [12:12] Loop Back Mode
            Object *clksrc; // [13:13] CAN Engine Clock Source
            Object *errmsk; // [14:14] Error Mask
            Object *boffmsk; // [15:15] Bus Off Mask
            Object *pseg2; // [16:18] Phase Segment 2
            Object *pseg1; // [19:21] Phase Segment 1
            Object *rjw; // [22:23] Resync Jump Width
            Object *presdiv; // [24:31] Prescaler Division Factor
          } ctrl1; 

          // TIMER (Free Running Timer) bitfields.
          struct { 
            Object *timer; // [0:15] Timer Value
          } timer; 

          // RXMGMASK (Rx Mailboxes Global Mask Register) bitfields.
          struct { 
            Object *mg; // [0:31] Rx Mailboxes Global Mask Bits
          } rxmgmask; 

          // RX14MASK (Rx 14 Mask register) bitfields.
          struct { 
            Object *rx14m; // [0:31] Rx Buffer 14 Mask Bits
          } rx14mask; 

          // RX15MASK (Rx 15 Mask register) bitfields.
          struct { 
            Object *rx15m; // [0:31] Rx Buffer 15 Mask Bits
          } rx15mask; 

          // ECR (Error Counter) bitfields.
          struct { 
            Object *txerrcnt; // [0:7] Transmit Error Counter
            Object *rxerrcnt; // [8:15] Receive Error Counter
          } ecr; 

          // ESR1 (Error and Status 1 register) bitfields.
          struct { 
            Object *wakint; // [0:0] Wake-Up Interrupt
            Object *errint; // [1:1] Error Interrupt
            Object *boffint; // [2:2] Bus Off Interrupt
            Object *rx; // [3:3] FlexCAN In Reception
            Object *fltconf; // [4:5] Fault Confinement State
            Object *tx; // [6:6] FlexCAN In Transmission
            Object *idle; // [7:7] No description available
            Object *rxwrn; // [8:8] Rx Error Warning
            Object *txwrn; // [9:9] TX Error Warning
            Object *stferr; // [10:10] Stuffing Error
            Object *frmerr; // [11:11] Form Error
            Object *crcerr; // [12:12] Cyclic Redundancy Check Error
            Object *ackerr; // [13:13] Acknowledge Error
            Object *bit0err; // [14:14] Bit0 Error
            Object *bit1err; // [15:15] Bit1 Error
            Object *rwrnint; // [16:16] Rx Warning Interrupt Flag
            Object *twrnint; // [17:17] Tx Warning Interrupt Flag
            Object *synch; // [18:18] CAN Synchronization Status
          } esr1; 

          // IMASK1 (Interrupt Masks 1 register) bitfields.
          struct { 
            Object *buflm; // [0:31] Buffer MB i Mask
          } imask1; 

          // IFLAG1 (Interrupt Flags 1 register) bitfields.
          struct { 
            Object *buf0i; // [0:0] Buffer MB0 Interrupt Or "reserved"
            Object *buf4to1i; // [1:4] Buffer MB i Interrupt Or "reserved"
            Object *buf5i; // [5:5] Buffer MB5 Interrupt Or "Frames available in Rx FIFO"
            Object *buf6i; // [6:6] Buffer MB6 Interrupt Or "Rx FIFO Warning"
            Object *buf7i; // [7:7] Buffer MB7 Interrupt Or "Rx FIFO Overflow"
            Object *buf31to8i; // [8:31] Buffer MBi Interrupt
          } iflag1; 

          // CTRL2 (Control 2 register) bitfields.
          struct { 
            Object *eacen; // [16:16] Entire Frame Arbitration Field Comparison Enable For Rx Mailboxes
            Object *rrs; // [17:17] Remote Request Storing
            Object *mrp; // [18:18] Mailboxes Reception Priority
            Object *tasd; // [19:23] Tx Arbitration Start Delay
            Object *rffn; // [24:27] Number Of Rx FIFO Filters
            Object *wrmfrz; // [28:28] Write-Access To Memory In Freeze Mode
          } ctrl2; 

          // ESR2 (Error and Status 2 register) bitfields.
          struct { 
            Object *imb; // [13:13] Inactive Mailbox
            Object *vps; // [14:14] Valid Priority Status
            Object *lptm; // [16:22] Lowest Priority Tx Mailbox
          } esr2; 

          // CRCR (CRC Register) bitfields.
          struct { 
            Object *txcrc; // [0:14] CRC Transmitted
            Object *mbcrc; // [16:22] CRC Mailbox
          } crcr; 

          // RXFGMASK (Rx FIFO Global Mask register) bitfields.
          struct { 
            Object *fgm; // [0:31] Rx FIFO Global Mask Bits
          } rxfgmask; 

          // RXFIR (Rx FIFO Information Register) bitfields.
          struct { 
            Object *idhit; // [0:8] Identifier Acceptance Filter Hit Indicator
          } rxfir; 

          // CS0 (Message Buffer 0 CS Register) bitfields.
          struct { 
            Object *time_stamp; // [0:15] Free-Running Counter Time stamp. This 16-bit field is a copy of the Free-Running Timer, captured for Tx and Rx frames at the time when the beginning of the Identifier field appears on the CAN bus.
            Object *dlc; // [16:19] Length of the data to be stored/transmitted.
            Object *rtr; // [20:20] Remote Transmission Request. One/zero for remote/data frame.
            Object *ide; // [21:21] ID Extended. One/zero for extended/standard format frame.
            Object *srr; // [22:22] Substitute Remote Request. Contains a fixed recessive bit.
            Object *code; // [24:27] Reserved
          } cs0; 

          // ID0 (Message Buffer 0 ID Register) bitfields.
          struct { 
            Object *ext; // [0:17] Contains extended (LOW word) identifier of message buffer.
            Object *std; // [18:28] Contains standard/extended (HIGH word) identifier of message buffer.
            Object *prio; // [29:31] Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR and it only makes sense for Tx buffers. These bits are not transmitted. They are appended to the regular ID to define the transmission priority.
          } id0; 

          // WORD00 (Message Buffer 0 WORD0 Register) bitfields.
          struct { 
            Object *data_byte_3; // [0:7] Data byte 3 of Rx/Tx frame.
            Object *data_byte_2; // [8:15] Data byte 2 of Rx/Tx frame.
            Object *data_byte_1; // [16:23] Data byte 1 of Rx/Tx frame.
            Object *data_byte_0; // [24:31] Data byte 0 of Rx/Tx frame.
          } word00; 

          // WORD10 (Message Buffer 0 WORD1 Register) bitfields.
          struct { 
            Object *data_byte_7; // [0:7] Data byte 7 of Rx/Tx frame.
            Object *data_byte_6; // [8:15] Data byte 6 of Rx/Tx frame.
            Object *data_byte_5; // [16:23] Data byte 5 of Rx/Tx frame.
            Object *data_byte_4; // [24:31] Data byte 4 of Rx/Tx frame.
          } word10; 

          // CS1 (Message Buffer 1 CS Register) bitfields.
          struct { 
            Object *time_stamp; // [0:15] Free-Running Counter Time stamp. This 16-bit field is a copy of the Free-Running Timer, captured for Tx and Rx frames at the time when the beginning of the Identifier field appears on the CAN bus.
            Object *dlc; // [16:19] Length of the data to be stored/transmitted.
            Object *rtr; // [20:20] Remote Transmission Request. One/zero for remote/data frame.
            Object *ide; // [21:21] ID Extended. One/zero for extended/standard format frame.
            Object *srr; // [22:22] Substitute Remote Request. Contains a fixed recessive bit.
            Object *code; // [24:27] Reserved
          } cs1; 

          // ID1 (Message Buffer 1 ID Register) bitfields.
          struct { 
            Object *ext; // [0:17] Contains extended (LOW word) identifier of message buffer.
            Object *std; // [18:28] Contains standard/extended (HIGH word) identifier of message buffer.
            Object *prio; // [29:31] Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR and it only makes sense for Tx buffers. These bits are not transmitted. They are appended to the regular ID to define the transmission priority.
          } id1; 

          // WORD01 (Message Buffer 1 WORD0 Register) bitfields.
          struct { 
            Object *data_byte_3; // [0:7] Data byte 3 of Rx/Tx frame.
            Object *data_byte_2; // [8:15] Data byte 2 of Rx/Tx frame.
            Object *data_byte_1; // [16:23] Data byte 1 of Rx/Tx frame.
            Object *data_byte_0; // [24:31] Data byte 0 of Rx/Tx frame.
          } word01; 

          // WORD11 (Message Buffer 1 WORD1 Register) bitfields.
          struct { 
            Object *data_byte_7; // [0:7] Data byte 7 of Rx/Tx frame.
            Object *data_byte_6; // [8:15] Data byte 6 of Rx/Tx frame.
            Object *data_byte_5; // [16:23] Data byte 5 of Rx/Tx frame.
            Object *data_byte_4; // [24:31] Data byte 4 of Rx/Tx frame.
          } word11; 

          // CS2 (Message Buffer 2 CS Register) bitfields.
          struct { 
            Object *time_stamp; // [0:15] Free-Running Counter Time stamp. This 16-bit field is a copy of the Free-Running Timer, captured for Tx and Rx frames at the time when the beginning of the Identifier field appears on the CAN bus.
            Object *dlc; // [16:19] Length of the data to be stored/transmitted.
            Object *rtr; // [20:20] Remote Transmission Request. One/zero for remote/data frame.
            Object *ide; // [21:21] ID Extended. One/zero for extended/standard format frame.
            Object *srr; // [22:22] Substitute Remote Request. Contains a fixed recessive bit.
            Object *code; // [24:27] Reserved
          } cs2; 

          // ID2 (Message Buffer 2 ID Register) bitfields.
          struct { 
            Object *ext; // [0:17] Contains extended (LOW word) identifier of message buffer.
            Object *std; // [18:28] Contains standard/extended (HIGH word) identifier of message buffer.
            Object *prio; // [29:31] Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR and it only makes sense for Tx buffers. These bits are not transmitted. They are appended to the regular ID to define the transmission priority.
          } id2; 

          // WORD02 (Message Buffer 2 WORD0 Register) bitfields.
          struct { 
            Object *data_byte_3; // [0:7] Data byte 3 of Rx/Tx frame.
            Object *data_byte_2; // [8:15] Data byte 2 of Rx/Tx frame.
            Object *data_byte_1; // [16:23] Data byte 1 of Rx/Tx frame.
            Object *data_byte_0; // [24:31] Data byte 0 of Rx/Tx frame.
          } word02; 

          // WORD12 (Message Buffer 2 WORD1 Register) bitfields.
          struct { 
            Object *data_byte_7; // [0:7] Data byte 7 of Rx/Tx frame.
            Object *data_byte_6; // [8:15] Data byte 6 of Rx/Tx frame.
            Object *data_byte_5; // [16:23] Data byte 5 of Rx/Tx frame.
            Object *data_byte_4; // [24:31] Data byte 4 of Rx/Tx frame.
          } word12; 

          // CS3 (Message Buffer 3 CS Register) bitfields.
          struct { 
            Object *time_stamp; // [0:15] Free-Running Counter Time stamp. This 16-bit field is a copy of the Free-Running Timer, captured for Tx and Rx frames at the time when the beginning of the Identifier field appears on the CAN bus.
            Object *dlc; // [16:19] Length of the data to be stored/transmitted.
            Object *rtr; // [20:20] Remote Transmission Request. One/zero for remote/data frame.
            Object *ide; // [21:21] ID Extended. One/zero for extended/standard format frame.
            Object *srr; // [22:22] Substitute Remote Request. Contains a fixed recessive bit.
            Object *code; // [24:27] Reserved
          } cs3; 

          // ID3 (Message Buffer 3 ID Register) bitfields.
          struct { 
            Object *ext; // [0:17] Contains extended (LOW word) identifier of message buffer.
            Object *std; // [18:28] Contains standard/extended (HIGH word) identifier of message buffer.
            Object *prio; // [29:31] Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR and it only makes sense for Tx buffers. These bits are not transmitted. They are appended to the regular ID to define the transmission priority.
          } id3; 

          // WORD03 (Message Buffer 3 WORD0 Register) bitfields.
          struct { 
            Object *data_byte_3; // [0:7] Data byte 3 of Rx/Tx frame.
            Object *data_byte_2; // [8:15] Data byte 2 of Rx/Tx frame.
            Object *data_byte_1; // [16:23] Data byte 1 of Rx/Tx frame.
            Object *data_byte_0; // [24:31] Data byte 0 of Rx/Tx frame.
          } word03; 

          // WORD13 (Message Buffer 3 WORD1 Register) bitfields.
          struct { 
            Object *data_byte_7; // [0:7] Data byte 7 of Rx/Tx frame.
            Object *data_byte_6; // [8:15] Data byte 6 of Rx/Tx frame.
            Object *data_byte_5; // [16:23] Data byte 5 of Rx/Tx frame.
            Object *data_byte_4; // [24:31] Data byte 4 of Rx/Tx frame.
          } word13; 

          // CS4 (Message Buffer 4 CS Register) bitfields.
          struct { 
            Object *time_stamp; // [0:15] Free-Running Counter Time stamp. This 16-bit field is a copy of the Free-Running Timer, captured for Tx and Rx frames at the time when the beginning of the Identifier field appears on the CAN bus.
            Object *dlc; // [16:19] Length of the data to be stored/transmitted.
            Object *rtr; // [20:20] Remote Transmission Request. One/zero for remote/data frame.
            Object *ide; // [21:21] ID Extended. One/zero for extended/standard format frame.
            Object *srr; // [22:22] Substitute Remote Request. Contains a fixed recessive bit.
            Object *code; // [24:27] Reserved
          } cs4; 

          // ID4 (Message Buffer 4 ID Register) bitfields.
          struct { 
            Object *ext; // [0:17] Contains extended (LOW word) identifier of message buffer.
            Object *std; // [18:28] Contains standard/extended (HIGH word) identifier of message buffer.
            Object *prio; // [29:31] Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR and it only makes sense for Tx buffers. These bits are not transmitted. They are appended to the regular ID to define the transmission priority.
          } id4; 

          // WORD04 (Message Buffer 4 WORD0 Register) bitfields.
          struct { 
            Object *data_byte_3; // [0:7] Data byte 3 of Rx/Tx frame.
            Object *data_byte_2; // [8:15] Data byte 2 of Rx/Tx frame.
            Object *data_byte_1; // [16:23] Data byte 1 of Rx/Tx frame.
            Object *data_byte_0; // [24:31] Data byte 0 of Rx/Tx frame.
          } word04; 

          // WORD14 (Message Buffer 4 WORD1 Register) bitfields.
          struct { 
            Object *data_byte_7; // [0:7] Data byte 7 of Rx/Tx frame.
            Object *data_byte_6; // [8:15] Data byte 6 of Rx/Tx frame.
            Object *data_byte_5; // [16:23] Data byte 5 of Rx/Tx frame.
            Object *data_byte_4; // [24:31] Data byte 4 of Rx/Tx frame.
          } word14; 

          // CS5 (Message Buffer 5 CS Register) bitfields.
          struct { 
            Object *time_stamp; // [0:15] Free-Running Counter Time stamp. This 16-bit field is a copy of the Free-Running Timer, captured for Tx and Rx frames at the time when the beginning of the Identifier field appears on the CAN bus.
            Object *dlc; // [16:19] Length of the data to be stored/transmitted.
            Object *rtr; // [20:20] Remote Transmission Request. One/zero for remote/data frame.
            Object *ide; // [21:21] ID Extended. One/zero for extended/standard format frame.
            Object *srr; // [22:22] Substitute Remote Request. Contains a fixed recessive bit.
            Object *code; // [24:27] Reserved
          } cs5; 

          // ID5 (Message Buffer 5 ID Register) bitfields.
          struct { 
            Object *ext; // [0:17] Contains extended (LOW word) identifier of message buffer.
            Object *std; // [18:28] Contains standard/extended (HIGH word) identifier of message buffer.
            Object *prio; // [29:31] Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR and it only makes sense for Tx buffers. These bits are not transmitted. They are appended to the regular ID to define the transmission priority.
          } id5; 

          // WORD05 (Message Buffer 5 WORD0 Register) bitfields.
          struct { 
            Object *data_byte_3; // [0:7] Data byte 3 of Rx/Tx frame.
            Object *data_byte_2; // [8:15] Data byte 2 of Rx/Tx frame.
            Object *data_byte_1; // [16:23] Data byte 1 of Rx/Tx frame.
            Object *data_byte_0; // [24:31] Data byte 0 of Rx/Tx frame.
          } word05; 

          // WORD15 (Message Buffer 5 WORD1 Register) bitfields.
          struct { 
            Object *data_byte_7; // [0:7] Data byte 7 of Rx/Tx frame.
            Object *data_byte_6; // [8:15] Data byte 6 of Rx/Tx frame.
            Object *data_byte_5; // [16:23] Data byte 5 of Rx/Tx frame.
            Object *data_byte_4; // [24:31] Data byte 4 of Rx/Tx frame.
          } word15; 

          // CS6 (Message Buffer 6 CS Register) bitfields.
          struct { 
            Object *time_stamp; // [0:15] Free-Running Counter Time stamp. This 16-bit field is a copy of the Free-Running Timer, captured for Tx and Rx frames at the time when the beginning of the Identifier field appears on the CAN bus.
            Object *dlc; // [16:19] Length of the data to be stored/transmitted.
            Object *rtr; // [20:20] Remote Transmission Request. One/zero for remote/data frame.
            Object *ide; // [21:21] ID Extended. One/zero for extended/standard format frame.
            Object *srr; // [22:22] Substitute Remote Request. Contains a fixed recessive bit.
            Object *code; // [24:27] Reserved
          } cs6; 

          // ID6 (Message Buffer 6 ID Register) bitfields.
          struct { 
            Object *ext; // [0:17] Contains extended (LOW word) identifier of message buffer.
            Object *std; // [18:28] Contains standard/extended (HIGH word) identifier of message buffer.
            Object *prio; // [29:31] Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR and it only makes sense for Tx buffers. These bits are not transmitted. They are appended to the regular ID to define the transmission priority.
          } id6; 

          // WORD06 (Message Buffer 6 WORD0 Register) bitfields.
          struct { 
            Object *data_byte_3; // [0:7] Data byte 3 of Rx/Tx frame.
            Object *data_byte_2; // [8:15] Data byte 2 of Rx/Tx frame.
            Object *data_byte_1; // [16:23] Data byte 1 of Rx/Tx frame.
            Object *data_byte_0; // [24:31] Data byte 0 of Rx/Tx frame.
          } word06; 

          // WORD16 (Message Buffer 6 WORD1 Register) bitfields.
          struct { 
            Object *data_byte_7; // [0:7] Data byte 7 of Rx/Tx frame.
            Object *data_byte_6; // [8:15] Data byte 6 of Rx/Tx frame.
            Object *data_byte_5; // [16:23] Data byte 5 of Rx/Tx frame.
            Object *data_byte_4; // [24:31] Data byte 4 of Rx/Tx frame.
          } word16; 

          // CS7 (Message Buffer 7 CS Register) bitfields.
          struct { 
            Object *time_stamp; // [0:15] Free-Running Counter Time stamp. This 16-bit field is a copy of the Free-Running Timer, captured for Tx and Rx frames at the time when the beginning of the Identifier field appears on the CAN bus.
            Object *dlc; // [16:19] Length of the data to be stored/transmitted.
            Object *rtr; // [20:20] Remote Transmission Request. One/zero for remote/data frame.
            Object *ide; // [21:21] ID Extended. One/zero for extended/standard format frame.
            Object *srr; // [22:22] Substitute Remote Request. Contains a fixed recessive bit.
            Object *code; // [24:27] Reserved
          } cs7; 

          // ID7 (Message Buffer 7 ID Register) bitfields.
          struct { 
            Object *ext; // [0:17] Contains extended (LOW word) identifier of message buffer.
            Object *std; // [18:28] Contains standard/extended (HIGH word) identifier of message buffer.
            Object *prio; // [29:31] Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR and it only makes sense for Tx buffers. These bits are not transmitted. They are appended to the regular ID to define the transmission priority.
          } id7; 

          // WORD07 (Message Buffer 7 WORD0 Register) bitfields.
          struct { 
            Object *data_byte_3; // [0:7] Data byte 3 of Rx/Tx frame.
            Object *data_byte_2; // [8:15] Data byte 2 of Rx/Tx frame.
            Object *data_byte_1; // [16:23] Data byte 1 of Rx/Tx frame.
            Object *data_byte_0; // [24:31] Data byte 0 of Rx/Tx frame.
          } word07; 

          // WORD17 (Message Buffer 7 WORD1 Register) bitfields.
          struct { 
            Object *data_byte_7; // [0:7] Data byte 7 of Rx/Tx frame.
            Object *data_byte_6; // [8:15] Data byte 6 of Rx/Tx frame.
            Object *data_byte_5; // [16:23] Data byte 5 of Rx/Tx frame.
            Object *data_byte_4; // [24:31] Data byte 4 of Rx/Tx frame.
          } word17; 

          // CS8 (Message Buffer 8 CS Register) bitfields.
          struct { 
            Object *time_stamp; // [0:15] Free-Running Counter Time stamp. This 16-bit field is a copy of the Free-Running Timer, captured for Tx and Rx frames at the time when the beginning of the Identifier field appears on the CAN bus.
            Object *dlc; // [16:19] Length of the data to be stored/transmitted.
            Object *rtr; // [20:20] Remote Transmission Request. One/zero for remote/data frame.
            Object *ide; // [21:21] ID Extended. One/zero for extended/standard format frame.
            Object *srr; // [22:22] Substitute Remote Request. Contains a fixed recessive bit.
            Object *code; // [24:27] Reserved
          } cs8; 

          // ID8 (Message Buffer 8 ID Register) bitfields.
          struct { 
            Object *ext; // [0:17] Contains extended (LOW word) identifier of message buffer.
            Object *std; // [18:28] Contains standard/extended (HIGH word) identifier of message buffer.
            Object *prio; // [29:31] Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR and it only makes sense for Tx buffers. These bits are not transmitted. They are appended to the regular ID to define the transmission priority.
          } id8; 

          // WORD08 (Message Buffer 8 WORD0 Register) bitfields.
          struct { 
            Object *data_byte_3; // [0:7] Data byte 3 of Rx/Tx frame.
            Object *data_byte_2; // [8:15] Data byte 2 of Rx/Tx frame.
            Object *data_byte_1; // [16:23] Data byte 1 of Rx/Tx frame.
            Object *data_byte_0; // [24:31] Data byte 0 of Rx/Tx frame.
          } word08; 

          // WORD18 (Message Buffer 8 WORD1 Register) bitfields.
          struct { 
            Object *data_byte_7; // [0:7] Data byte 7 of Rx/Tx frame.
            Object *data_byte_6; // [8:15] Data byte 6 of Rx/Tx frame.
            Object *data_byte_5; // [16:23] Data byte 5 of Rx/Tx frame.
            Object *data_byte_4; // [24:31] Data byte 4 of Rx/Tx frame.
          } word18; 

          // CS9 (Message Buffer 9 CS Register) bitfields.
          struct { 
            Object *time_stamp; // [0:15] Free-Running Counter Time stamp. This 16-bit field is a copy of the Free-Running Timer, captured for Tx and Rx frames at the time when the beginning of the Identifier field appears on the CAN bus.
            Object *dlc; // [16:19] Length of the data to be stored/transmitted.
            Object *rtr; // [20:20] Remote Transmission Request. One/zero for remote/data frame.
            Object *ide; // [21:21] ID Extended. One/zero for extended/standard format frame.
            Object *srr; // [22:22] Substitute Remote Request. Contains a fixed recessive bit.
            Object *code; // [24:27] Reserved
          } cs9; 

          // ID9 (Message Buffer 9 ID Register) bitfields.
          struct { 
            Object *ext; // [0:17] Contains extended (LOW word) identifier of message buffer.
            Object *std; // [18:28] Contains standard/extended (HIGH word) identifier of message buffer.
            Object *prio; // [29:31] Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR and it only makes sense for Tx buffers. These bits are not transmitted. They are appended to the regular ID to define the transmission priority.
          } id9; 

          // WORD09 (Message Buffer 9 WORD0 Register) bitfields.
          struct { 
            Object *data_byte_3; // [0:7] Data byte 3 of Rx/Tx frame.
            Object *data_byte_2; // [8:15] Data byte 2 of Rx/Tx frame.
            Object *data_byte_1; // [16:23] Data byte 1 of Rx/Tx frame.
            Object *data_byte_0; // [24:31] Data byte 0 of Rx/Tx frame.
          } word09; 

          // WORD19 (Message Buffer 9 WORD1 Register) bitfields.
          struct { 
            Object *data_byte_7; // [0:7] Data byte 7 of Rx/Tx frame.
            Object *data_byte_6; // [8:15] Data byte 6 of Rx/Tx frame.
            Object *data_byte_5; // [16:23] Data byte 5 of Rx/Tx frame.
            Object *data_byte_4; // [24:31] Data byte 4 of Rx/Tx frame.
          } word19; 

          // CS10 (Message Buffer 10 CS Register) bitfields.
          struct { 
            Object *time_stamp; // [0:15] Free-Running Counter Time stamp. This 16-bit field is a copy of the Free-Running Timer, captured for Tx and Rx frames at the time when the beginning of the Identifier field appears on the CAN bus.
            Object *dlc; // [16:19] Length of the data to be stored/transmitted.
            Object *rtr; // [20:20] Remote Transmission Request. One/zero for remote/data frame.
            Object *ide; // [21:21] ID Extended. One/zero for extended/standard format frame.
            Object *srr; // [22:22] Substitute Remote Request. Contains a fixed recessive bit.
            Object *code; // [24:27] Reserved
          } cs10; 

          // ID10 (Message Buffer 10 ID Register) bitfields.
          struct { 
            Object *ext; // [0:17] Contains extended (LOW word) identifier of message buffer.
            Object *std; // [18:28] Contains standard/extended (HIGH word) identifier of message buffer.
            Object *prio; // [29:31] Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR and it only makes sense for Tx buffers. These bits are not transmitted. They are appended to the regular ID to define the transmission priority.
          } id10; 

          // WORD010 (Message Buffer 10 WORD0 Register) bitfields.
          struct { 
            Object *data_byte_3; // [0:7] Data byte 3 of Rx/Tx frame.
            Object *data_byte_2; // [8:15] Data byte 2 of Rx/Tx frame.
            Object *data_byte_1; // [16:23] Data byte 1 of Rx/Tx frame.
            Object *data_byte_0; // [24:31] Data byte 0 of Rx/Tx frame.
          } word010; 

          // WORD110 (Message Buffer 10 WORD1 Register) bitfields.
          struct { 
            Object *data_byte_7; // [0:7] Data byte 7 of Rx/Tx frame.
            Object *data_byte_6; // [8:15] Data byte 6 of Rx/Tx frame.
            Object *data_byte_5; // [16:23] Data byte 5 of Rx/Tx frame.
            Object *data_byte_4; // [24:31] Data byte 4 of Rx/Tx frame.
          } word110; 

          // CS11 (Message Buffer 11 CS Register) bitfields.
          struct { 
            Object *time_stamp; // [0:15] Free-Running Counter Time stamp. This 16-bit field is a copy of the Free-Running Timer, captured for Tx and Rx frames at the time when the beginning of the Identifier field appears on the CAN bus.
            Object *dlc; // [16:19] Length of the data to be stored/transmitted.
            Object *rtr; // [20:20] Remote Transmission Request. One/zero for remote/data frame.
            Object *ide; // [21:21] ID Extended. One/zero for extended/standard format frame.
            Object *srr; // [22:22] Substitute Remote Request. Contains a fixed recessive bit.
            Object *code; // [24:27] Reserved
          } cs11; 

          // ID11 (Message Buffer 11 ID Register) bitfields.
          struct { 
            Object *ext; // [0:17] Contains extended (LOW word) identifier of message buffer.
            Object *std; // [18:28] Contains standard/extended (HIGH word) identifier of message buffer.
            Object *prio; // [29:31] Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR and it only makes sense for Tx buffers. These bits are not transmitted. They are appended to the regular ID to define the transmission priority.
          } id11; 

          // WORD011 (Message Buffer 11 WORD0 Register) bitfields.
          struct { 
            Object *data_byte_3; // [0:7] Data byte 3 of Rx/Tx frame.
            Object *data_byte_2; // [8:15] Data byte 2 of Rx/Tx frame.
            Object *data_byte_1; // [16:23] Data byte 1 of Rx/Tx frame.
            Object *data_byte_0; // [24:31] Data byte 0 of Rx/Tx frame.
          } word011; 

          // WORD111 (Message Buffer 11 WORD1 Register) bitfields.
          struct { 
            Object *data_byte_7; // [0:7] Data byte 7 of Rx/Tx frame.
            Object *data_byte_6; // [8:15] Data byte 6 of Rx/Tx frame.
            Object *data_byte_5; // [16:23] Data byte 5 of Rx/Tx frame.
            Object *data_byte_4; // [24:31] Data byte 4 of Rx/Tx frame.
          } word111; 

          // CS12 (Message Buffer 12 CS Register) bitfields.
          struct { 
            Object *time_stamp; // [0:15] Free-Running Counter Time stamp. This 16-bit field is a copy of the Free-Running Timer, captured for Tx and Rx frames at the time when the beginning of the Identifier field appears on the CAN bus.
            Object *dlc; // [16:19] Length of the data to be stored/transmitted.
            Object *rtr; // [20:20] Remote Transmission Request. One/zero for remote/data frame.
            Object *ide; // [21:21] ID Extended. One/zero for extended/standard format frame.
            Object *srr; // [22:22] Substitute Remote Request. Contains a fixed recessive bit.
            Object *code; // [24:27] Reserved
          } cs12; 

          // ID12 (Message Buffer 12 ID Register) bitfields.
          struct { 
            Object *ext; // [0:17] Contains extended (LOW word) identifier of message buffer.
            Object *std; // [18:28] Contains standard/extended (HIGH word) identifier of message buffer.
            Object *prio; // [29:31] Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR and it only makes sense for Tx buffers. These bits are not transmitted. They are appended to the regular ID to define the transmission priority.
          } id12; 

          // WORD012 (Message Buffer 12 WORD0 Register) bitfields.
          struct { 
            Object *data_byte_3; // [0:7] Data byte 3 of Rx/Tx frame.
            Object *data_byte_2; // [8:15] Data byte 2 of Rx/Tx frame.
            Object *data_byte_1; // [16:23] Data byte 1 of Rx/Tx frame.
            Object *data_byte_0; // [24:31] Data byte 0 of Rx/Tx frame.
          } word012; 

          // WORD112 (Message Buffer 12 WORD1 Register) bitfields.
          struct { 
            Object *data_byte_7; // [0:7] Data byte 7 of Rx/Tx frame.
            Object *data_byte_6; // [8:15] Data byte 6 of Rx/Tx frame.
            Object *data_byte_5; // [16:23] Data byte 5 of Rx/Tx frame.
            Object *data_byte_4; // [24:31] Data byte 4 of Rx/Tx frame.
          } word112; 

          // CS13 (Message Buffer 13 CS Register) bitfields.
          struct { 
            Object *time_stamp; // [0:15] Free-Running Counter Time stamp. This 16-bit field is a copy of the Free-Running Timer, captured for Tx and Rx frames at the time when the beginning of the Identifier field appears on the CAN bus.
            Object *dlc; // [16:19] Length of the data to be stored/transmitted.
            Object *rtr; // [20:20] Remote Transmission Request. One/zero for remote/data frame.
            Object *ide; // [21:21] ID Extended. One/zero for extended/standard format frame.
            Object *srr; // [22:22] Substitute Remote Request. Contains a fixed recessive bit.
            Object *code; // [24:27] Reserved
          } cs13; 

          // ID13 (Message Buffer 13 ID Register) bitfields.
          struct { 
            Object *ext; // [0:17] Contains extended (LOW word) identifier of message buffer.
            Object *std; // [18:28] Contains standard/extended (HIGH word) identifier of message buffer.
            Object *prio; // [29:31] Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR and it only makes sense for Tx buffers. These bits are not transmitted. They are appended to the regular ID to define the transmission priority.
          } id13; 

          // WORD013 (Message Buffer 13 WORD0 Register) bitfields.
          struct { 
            Object *data_byte_3; // [0:7] Data byte 3 of Rx/Tx frame.
            Object *data_byte_2; // [8:15] Data byte 2 of Rx/Tx frame.
            Object *data_byte_1; // [16:23] Data byte 1 of Rx/Tx frame.
            Object *data_byte_0; // [24:31] Data byte 0 of Rx/Tx frame.
          } word013; 

          // WORD113 (Message Buffer 13 WORD1 Register) bitfields.
          struct { 
            Object *data_byte_7; // [0:7] Data byte 7 of Rx/Tx frame.
            Object *data_byte_6; // [8:15] Data byte 6 of Rx/Tx frame.
            Object *data_byte_5; // [16:23] Data byte 5 of Rx/Tx frame.
            Object *data_byte_4; // [24:31] Data byte 4 of Rx/Tx frame.
          } word113; 

          // CS14 (Message Buffer 14 CS Register) bitfields.
          struct { 
            Object *time_stamp; // [0:15] Free-Running Counter Time stamp. This 16-bit field is a copy of the Free-Running Timer, captured for Tx and Rx frames at the time when the beginning of the Identifier field appears on the CAN bus.
            Object *dlc; // [16:19] Length of the data to be stored/transmitted.
            Object *rtr; // [20:20] Remote Transmission Request. One/zero for remote/data frame.
            Object *ide; // [21:21] ID Extended. One/zero for extended/standard format frame.
            Object *srr; // [22:22] Substitute Remote Request. Contains a fixed recessive bit.
            Object *code; // [24:27] Reserved
          } cs14; 

          // ID14 (Message Buffer 14 ID Register) bitfields.
          struct { 
            Object *ext; // [0:17] Contains extended (LOW word) identifier of message buffer.
            Object *std; // [18:28] Contains standard/extended (HIGH word) identifier of message buffer.
            Object *prio; // [29:31] Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR and it only makes sense for Tx buffers. These bits are not transmitted. They are appended to the regular ID to define the transmission priority.
          } id14; 

          // WORD014 (Message Buffer 14 WORD0 Register) bitfields.
          struct { 
            Object *data_byte_3; // [0:7] Data byte 3 of Rx/Tx frame.
            Object *data_byte_2; // [8:15] Data byte 2 of Rx/Tx frame.
            Object *data_byte_1; // [16:23] Data byte 1 of Rx/Tx frame.
            Object *data_byte_0; // [24:31] Data byte 0 of Rx/Tx frame.
          } word014; 

          // WORD114 (Message Buffer 14 WORD1 Register) bitfields.
          struct { 
            Object *data_byte_7; // [0:7] Data byte 7 of Rx/Tx frame.
            Object *data_byte_6; // [8:15] Data byte 6 of Rx/Tx frame.
            Object *data_byte_5; // [16:23] Data byte 5 of Rx/Tx frame.
            Object *data_byte_4; // [24:31] Data byte 4 of Rx/Tx frame.
          } word114; 

          // CS15 (Message Buffer 15 CS Register) bitfields.
          struct { 
            Object *time_stamp; // [0:15] Free-Running Counter Time stamp. This 16-bit field is a copy of the Free-Running Timer, captured for Tx and Rx frames at the time when the beginning of the Identifier field appears on the CAN bus.
            Object *dlc; // [16:19] Length of the data to be stored/transmitted.
            Object *rtr; // [20:20] Remote Transmission Request. One/zero for remote/data frame.
            Object *ide; // [21:21] ID Extended. One/zero for extended/standard format frame.
            Object *srr; // [22:22] Substitute Remote Request. Contains a fixed recessive bit.
            Object *code; // [24:27] Reserved
          } cs15; 

          // ID15 (Message Buffer 15 ID Register) bitfields.
          struct { 
            Object *ext; // [0:17] Contains extended (LOW word) identifier of message buffer.
            Object *std; // [18:28] Contains standard/extended (HIGH word) identifier of message buffer.
            Object *prio; // [29:31] Local priority. This 3-bit fieldis only used when LPRIO_EN bit is set in MCR and it only makes sense for Tx buffers. These bits are not transmitted. They are appended to the regular ID to define the transmission priority.
          } id15; 

          // WORD015 (Message Buffer 15 WORD0 Register) bitfields.
          struct { 
            Object *data_byte_3; // [0:7] Data byte 3 of Rx/Tx frame.
            Object *data_byte_2; // [8:15] Data byte 2 of Rx/Tx frame.
            Object *data_byte_1; // [16:23] Data byte 1 of Rx/Tx frame.
            Object *data_byte_0; // [24:31] Data byte 0 of Rx/Tx frame.
          } word015; 

          // WORD115 (Message Buffer 15 WORD1 Register) bitfields.
          struct { 
            Object *data_byte_7; // [0:7] Data byte 7 of Rx/Tx frame.
            Object *data_byte_6; // [8:15] Data byte 6 of Rx/Tx frame.
            Object *data_byte_5; // [16:23] Data byte 5 of Rx/Tx frame.
            Object *data_byte_4; // [24:31] Data byte 4 of Rx/Tx frame.
          } word115; 

          // RXIMRn (Rx Individual Mask Registers) bitfields.
          struct { 
            Object *mi; // [0:31] Individual Mask Bits
          } rximr[16]; 
        } fld;
      } k6;

      // ----- 8< ----- 8< -----  8< ----- 8< ----- 8< ----- 8< ----- 8< -----
    } u;

} KinetisCANState;

// ----------------------------------------------------------------------------

#endif /* KINETIS_CAN_H_ */
