/*
 * Kinetis - DMA (Enhanced direct memory access controller) emulation.
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

#ifndef KINETIS_DMA_H_
#define KINETIS_DMA_H_

#include "qemu/osdep.h"

#include <hw/cortexm/peripheral.h>
#include <hw/cortexm/kinetis/capabilities.h>

// ----------------------------------------------------------------------------

#define DEVICE_PATH_KINETIS_DMA DEVICE_PATH_KINETIS "DMA"


// ----------------------------------------------------------------------------

#define TYPE_KINETIS_DMA TYPE_KINETIS_PREFIX "dma" TYPE_PERIPHERAL_SUFFIX

// ----------------------------------------------------------------------------

// Parent definitions.
#define TYPE_KINETIS_DMA_PARENT TYPE_PERIPHERAL
typedef PeripheralClass KinetisDMAParentClass;
typedef PeripheralState KinetisDMAParentState;

// ----------------------------------------------------------------------------

// Class definitions.
#define KINETIS_DMA_GET_CLASS(obj) \
    OBJECT_GET_CLASS(KinetisDMAClass, (obj), TYPE_KINETIS_DMA)
#define KINETIS_DMA_CLASS(klass) \
    OBJECT_CLASS_CHECK(KinetisDMAClass, (klass), TYPE_KINETIS_DMA)

typedef struct {
    // private: 
    KinetisDMAParentClass parent_class;
    // public: 

    // None, so far.
} KinetisDMAClass;

// ----------------------------------------------------------------------------

// Instance definitions.
#define KINETIS_DMA_STATE(obj) \
    OBJECT_CHECK(KinetisDMAState, (obj), TYPE_KINETIS_DMA)

typedef struct {
    // private:
    KinetisDMAParentState parent_obj;
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
        // K6 DMA (Enhanced direct memory access controller) registers.
        struct { 
          Object *cr; // 0 (Control Register) 
          Object *es; // 0x4 (Error Status Register) 
          Object *erq; // 0xC (Enable Request Register) 
          Object *eei; // 0x14 (Enable Error Interrupt Register) 
          Object *ceei; // 0x18 (Clear Enable Error Interrupt Register) 
          Object *seei; // 0x19 (Set Enable Error Interrupt Register) 
          Object *cerq; // 0x1A (Clear Enable Request Register) 
          Object *serq; // 0x1B (Set Enable Request Register) 
          Object *cdne; // 0x1C (Clear DONE Status Bit Register) 
          Object *ssrt; // 0x1D (Set START Bit Register) 
          Object *cerr; // 0x1E (Clear Error Register) 
          Object *cint; // 0x1F (Clear Interrupt Request Register) 
          Object *int_; // 0x24 (Interrupt Request Register) 
          Object *err; // 0x2C (Error Register) 
          Object *hrs; // 0x34 (Hardware Request Status Register) 
          Object *dchpri[16]; // 0x100 (Channel n Priority Register) 
          Object *tcd_saddr[16]; // 0x1000 (TCD Source Address) 
          Object *tcd_soff[16]; // 0x1004 (TCD Signed Source Address Offset) 
          Object *tcd_attr[16]; // 0x1006 (TCD Transfer Attributes) 
          Object *tcd_nbytes_mlno[16]; // 0x1008 (TCD Minor Byte Count (Minor Loop Disabled)) 
          Object *tcd_nbytes_mloffno[16]; // 0x1008 (TCD Signed Minor Loop Offset (Minor Loop Enabled and Offset Disabled)) 
          Object *tcd_nbytes_mloffyes[16]; // 0x1008 (TCD Signed Minor Loop Offset (Minor Loop and Offset Enabled)) 
          Object *tcd_slast[16]; // 0x100C (TCD Last Source Address Adjustment) 
          Object *tcd_daddr[16]; // 0x1010 (TCD Destination Address) 
          Object *tcd_doff[16]; // 0x1014 (TCD Signed Destination Address Offset) 
          Object *tcd_citer_elinkno[16]; // 0x1016 (TCD Current Minor Loop Link, Major Loop Count (Channel Linking Disabled)) 
          Object *tcd_citer_elinkyes[16]; // 0x1016 (TCD Current Minor Loop Link, Major Loop Count (Channel Linking Enabled)) 
          Object *tcd_dlastsga[16]; // 0x1018 (TCD Last Destination Address Adjustment/Scatter Gather Address) 
          Object *tcd_csr[16]; // 0x101C (TCD Control and Status) 
          Object *tcd_biter_elinkno[16]; // 0x101E (TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Disabled)) 
          Object *tcd_biter_elinkyes[16]; // 0x101E (TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Enabled)) 
        } reg;

        struct { 

          // CR (Control Register) bitfields.
          struct { 
            Object *edbg; // [1:1] Enable Debug
            Object *erca; // [2:2] Enable Round Robin Channel Arbitration
            Object *hoe; // [4:4] Halt On Error
            Object *halt; // [5:5] Halt DMA Operations
            Object *clm; // [6:6] Continuous Link Mode
            Object *emlm; // [7:7] Enable Minor Loop Mapping
            Object *ecx; // [16:16] Error Cancel Transfer
            Object *cx; // [17:17] Cancel Transfer
          } cr; 

          // ES (Error Status Register) bitfields.
          struct { 
            Object *dbe; // [0:0] Destination Bus Error
            Object *sbe; // [1:1] Source Bus Error
            Object *sge; // [2:2] Scatter/Gather Configuration Error
            Object *nce; // [3:3] NBYTES/CITER Configuration Error
            Object *doe; // [4:4] Destination Offset Error
            Object *dae; // [5:5] Destination Address Error
            Object *soe; // [6:6] Source Offset Error
            Object *sae; // [7:7] Source Address Error
            Object *errchn; // [8:11] Error Channel Number or Canceled Channel Number
            Object *cpe; // [14:14] Channel Priority Error
            Object *ecx; // [16:16] Transfer Canceled
            Object *vld; // [31:31] No description available
          } es; 

          // ERQ (Enable Request Register) bitfields.
          struct { 
            Object *erq0; // [0:0] Enable DMA Request 0
            Object *erq1; // [1:1] Enable DMA Request 1
            Object *erq2; // [2:2] Enable DMA Request 2
            Object *erq3; // [3:3] Enable DMA Request 3
            Object *erq4; // [4:4] Enable DMA Request 4
            Object *erq5; // [5:5] Enable DMA Request 5
            Object *erq6; // [6:6] Enable DMA Request 6
            Object *erq7; // [7:7] Enable DMA Request 7
            Object *erq8; // [8:8] Enable DMA Request 8
            Object *erq9; // [9:9] Enable DMA Request 9
            Object *erq10; // [10:10] Enable DMA Request 10
            Object *erq11; // [11:11] Enable DMA Request 11
            Object *erq12; // [12:12] Enable DMA Request 12
            Object *erq13; // [13:13] Enable DMA Request 13
            Object *erq14; // [14:14] Enable DMA Request 14
            Object *erq15; // [15:15] Enable DMA Request 15
          } erq; 

          // EEI (Enable Error Interrupt Register) bitfields.
          struct { 
            Object *eei0; // [0:0] Enable Error Interrupt 0
            Object *eei1; // [1:1] Enable Error Interrupt 1
            Object *eei2; // [2:2] Enable Error Interrupt 2
            Object *eei3; // [3:3] Enable Error Interrupt 3
            Object *eei4; // [4:4] Enable Error Interrupt 4
            Object *eei5; // [5:5] Enable Error Interrupt 5
            Object *eei6; // [6:6] Enable Error Interrupt 6
            Object *eei7; // [7:7] Enable Error Interrupt 7
            Object *eei8; // [8:8] Enable Error Interrupt 8
            Object *eei9; // [9:9] Enable Error Interrupt 9
            Object *eei10; // [10:10] Enable Error Interrupt 10
            Object *eei11; // [11:11] Enable Error Interrupt 11
            Object *eei12; // [12:12] Enable Error Interrupt 12
            Object *eei13; // [13:13] Enable Error Interrupt 13
            Object *eei14; // [14:14] Enable Error Interrupt 14
            Object *eei15; // [15:15] Enable Error Interrupt 15
          } eei; 

          // CEEI (Clear Enable Error Interrupt Register) bitfields.
          struct { 
            Object *ceei; // [0:3] Clear Enable Error Interrupt
            Object *caee; // [6:6] Clear All Enable Error Interrupts
            Object *nop; // [7:7] No Op enable
          } ceei; 

          // SEEI (Set Enable Error Interrupt Register) bitfields.
          struct { 
            Object *seei; // [0:3] Set Enable Error Interrupt
            Object *saee; // [6:6] Sets All Enable Error Interrupts
            Object *nop; // [7:7] No Op enable
          } seei; 

          // CERQ (Clear Enable Request Register) bitfields.
          struct { 
            Object *cerq; // [0:3] Clear Enable Request
            Object *caer; // [6:6] Clear All Enable Requests
            Object *nop; // [7:7] No Op enable
          } cerq; 

          // SERQ (Set Enable Request Register) bitfields.
          struct { 
            Object *serq; // [0:3] Set enable request
            Object *saer; // [6:6] Set All Enable Requests
            Object *nop; // [7:7] No Op enable
          } serq; 

          // CDNE (Clear DONE Status Bit Register) bitfields.
          struct { 
            Object *cdne; // [0:3] Clear DONE Bit
            Object *cadn; // [6:6] Clears All DONE Bits
            Object *nop; // [7:7] No Op enable
          } cdne; 

          // SSRT (Set START Bit Register) bitfields.
          struct { 
            Object *ssrt; // [0:3] Set START Bit
            Object *sast; // [6:6] Set All START Bits (activates all channels)
            Object *nop; // [7:7] No Op enable
          } ssrt; 

          // CERR (Clear Error Register) bitfields.
          struct { 
            Object *cerr; // [0:3] Clear Error Indicator
            Object *caei; // [6:6] Clear All Error Indicators
            Object *nop; // [7:7] No Op enable
          } cerr; 

          // CINT (Clear Interrupt Request Register) bitfields.
          struct { 
            Object *cint; // [0:3] Clear Interrupt Request
            Object *cair; // [6:6] Clear All Interrupt Requests
            Object *nop; // [7:7] No Op enable
          } cint; 

          // INT (Interrupt Request Register) bitfields.
          struct { 
            Object *int0; // [0:0] Interrupt Request 0
            Object *int1; // [1:1] Interrupt Request 1
            Object *int2; // [2:2] Interrupt Request 2
            Object *int3; // [3:3] Interrupt Request 3
            Object *int4; // [4:4] Interrupt Request 4
            Object *int5; // [5:5] Interrupt Request 5
            Object *int6; // [6:6] Interrupt Request 6
            Object *int7; // [7:7] Interrupt Request 7
            Object *int8; // [8:8] Interrupt Request 8
            Object *int9; // [9:9] Interrupt Request 9
            Object *int10; // [10:10] Interrupt Request 10
            Object *int11; // [11:11] Interrupt Request 11
            Object *int12; // [12:12] Interrupt Request 12
            Object *int13; // [13:13] Interrupt Request 13
            Object *int14; // [14:14] Interrupt Request 14
            Object *int15; // [15:15] Interrupt Request 15
          } int_; 

          // ERR (Error Register) bitfields.
          struct { 
            Object *err0; // [0:0] Error In Channel 0
            Object *err1; // [1:1] Error In Channel 1
            Object *err2; // [2:2] Error In Channel 2
            Object *err3; // [3:3] Error In Channel 3
            Object *err4; // [4:4] Error In Channel 4
            Object *err5; // [5:5] Error In Channel 5
            Object *err6; // [6:6] Error In Channel 6
            Object *err7; // [7:7] Error In Channel 7
            Object *err8; // [8:8] Error In Channel 8
            Object *err9; // [9:9] Error In Channel 9
            Object *err10; // [10:10] Error In Channel 10
            Object *err11; // [11:11] Error In Channel 11
            Object *err12; // [12:12] Error In Channel 12
            Object *err13; // [13:13] Error In Channel 13
            Object *err14; // [14:14] Error In Channel 14
            Object *err15; // [15:15] Error In Channel 15
          } err; 

          // HRS (Hardware Request Status Register) bitfields.
          struct { 
            Object *hrs0; // [0:0] Hardware Request Status Channel 0
            Object *hrs1; // [1:1] Hardware Request Status Channel 1
            Object *hrs2; // [2:2] Hardware Request Status Channel 2
            Object *hrs3; // [3:3] Hardware Request Status Channel 3
            Object *hrs4; // [4:4] Hardware Request Status Channel 4
            Object *hrs5; // [5:5] Hardware Request Status Channel 5
            Object *hrs6; // [6:6] Hardware Request Status Channel 6
            Object *hrs7; // [7:7] Hardware Request Status Channel 7
            Object *hrs8; // [8:8] Hardware Request Status Channel 8
            Object *hrs9; // [9:9] Hardware Request Status Channel 9
            Object *hrs10; // [10:10] Hardware Request Status Channel 10
            Object *hrs11; // [11:11] Hardware Request Status Channel 11
            Object *hrs12; // [12:12] Hardware Request Status Channel 12
            Object *hrs13; // [13:13] Hardware Request Status Channel 13
            Object *hrs14; // [14:14] Hardware Request Status Channel 14
            Object *hrs15; // [15:15] Hardware Request Status Channel 15
          } hrs; 

          // DCHPRIn (Channel n Priority Register) bitfields.
          struct { 
            Object *chpri; // [0:3] Channel n Arbitration Priority
            Object *dpa; // [6:6] Disable Preempt Ability
            Object *ecp; // [7:7] Enable Channel Preemption
          } dchpri[16]; 

          // TCDn_SADDR (TCD Source Address) bitfields.
          struct { 
            Object *saddr; // [0:31] Source Address
          } tcd_saddr[16]; 

          // TCDn_SOFF (TCD Signed Source Address Offset) bitfields.
          struct { 
            Object *soff; // [0:15] Source address signed offset
          } tcd_soff[16]; 

          // TCDn_ATTR (TCD Transfer Attributes) bitfields.
          struct { 
            Object *dsize; // [0:2] Destination Data Transfer Size
            Object *dmod; // [3:7] Destination Address Modulo
            Object *ssize; // [8:10] Source data transfer size
            Object *smod; // [11:15] Source Address Modulo.
          } tcd_attr[16]; 

          // TCDn_NBYTES_MLNO (TCD Minor Byte Count (Minor Loop Disabled)) bitfields.
          struct { 
            Object *nbytes; // [0:31] Minor Byte Transfer Count
          } tcd_nbytes_mlno[16]; 

          // TCDn_NBYTES_MLOFFNO (TCD Signed Minor Loop Offset (Minor Loop Enabled and Offset Disabled)) bitfields.
          struct { 
            Object *nbytes; // [0:29] Minor Byte Transfer Count
            Object *dmloe; // [30:30] Destination Minor Loop Offset enable
            Object *smloe; // [31:31] Source Minor Loop Offset Enable
          } tcd_nbytes_mloffno[16]; 

          // TCDn_NBYTES_MLOFFYES (TCD Signed Minor Loop Offset (Minor Loop and Offset Enabled)) bitfields.
          struct { 
            Object *nbytes; // [0:9] Minor Byte Transfer Count
            Object *mloff; // [10:29] If SMLOE or DMLOE is set, this field represents a sign-extended offset applied to the source or destination address to form the next-state value after the minor loop completes.
            Object *dmloe; // [30:30] Destination Minor Loop Offset enable
            Object *smloe; // [31:31] Source Minor Loop Offset Enable
          } tcd_nbytes_mloffyes[16]; 

          // TCDn_SLAST (TCD Last Source Address Adjustment) bitfields.
          struct { 
            Object *slast; // [0:31] Last source Address Adjustment
          } tcd_slast[16]; 

          // TCDn_DADDR (TCD Destination Address) bitfields.
          struct { 
            Object *daddr; // [0:31] Destination Address
          } tcd_daddr[16]; 

          // TCDn_DOFF (TCD Signed Destination Address Offset) bitfields.
          struct { 
            Object *doff; // [0:15] Destination Address Signed offset
          } tcd_doff[16]; 

          // TCDn_CITER_ELINKNO (TCD Current Minor Loop Link, Major Loop Count (Channel Linking Disabled)) bitfields.
          struct { 
            Object *citer; // [0:14] Current Major Iteration Count
            Object *elink; // [15:15] Enable channel-to-channel linking on minor-loop complete
          } tcd_citer_elinkno[16]; 

          // TCDn_CITER_ELINKYES (TCD Current Minor Loop Link, Major Loop Count (Channel Linking Enabled)) bitfields.
          struct { 
            Object *citer; // [0:8] Current Major Iteration Count
            Object *linkch; // [9:12] Link Channel Number
            Object *elink; // [15:15] Enable channel-to-channel linking on minor-loop complete
          } tcd_citer_elinkyes[16]; 

          // TCDn_DLASTSGA (TCD Last Destination Address Adjustment/Scatter Gather Address) bitfields.
          struct { 
            Object *dlastsga; // [0:31] No description available
          } tcd_dlastsga[16]; 

          // TCDn_CSR (TCD Control and Status) bitfields.
          struct { 
            Object *start; // [0:0] Channel Start
            Object *intmajor; // [1:1] Enable an interrupt when major iteration count completes
            Object *inthalf; // [2:2] Enable an interrupt when major counter is half complete.
            Object *dreq; // [3:3] Disable Request
            Object *esg; // [4:4] Enable Scatter/Gather Processing
            Object *majorelink; // [5:5] Enable channel-to-channel linking on major loop complete
            Object *active; // [6:6] Channel Active
            Object *done; // [7:7] Channel Done
            Object *majorlinkch; // [8:11] Link Channel Number
            Object *bwc; // [14:15] Bandwidth Control
          } tcd_csr[16]; 

          // TCDn_BITER_ELINKNO (TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Disabled)) bitfields.
          struct { 
            Object *biter; // [0:14] Starting Major Iteration Count
            Object *elink; // [15:15] Enables channel-to-channel linking on minor loop complete
          } tcd_biter_elinkno[16]; 

          // TCDn_BITER_ELINKYES (TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Enabled)) bitfields.
          struct { 
            Object *biter; // [0:8] Starting Major Iteration Count
            Object *linkch; // [9:12] Link Channel Number
            Object *elink; // [15:15] Enables channel-to-channel linking on minor loop complete
          } tcd_biter_elinkyes[16]; 
        } fld;
      } k6;

      // ----- 8< ----- 8< -----  8< ----- 8< ----- 8< ----- 8< ----- 8< -----
    } u;

} KinetisDMAState;

// ----------------------------------------------------------------------------

#endif /* KINETIS_DMA_H_ */
