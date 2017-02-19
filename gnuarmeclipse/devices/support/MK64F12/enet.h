/*
 * Kinetis - ENET (Ethernet MAC-NET Core) emulation.
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

#ifndef KINETIS_ENET_H_
#define KINETIS_ENET_H_

#include "qemu/osdep.h"

#include <hw/cortexm/peripheral.h>
#include <hw/cortexm/kinetis/capabilities.h>

// ----------------------------------------------------------------------------

#define DEVICE_PATH_KINETIS_ENET DEVICE_PATH_KINETIS "ENET"


// ----------------------------------------------------------------------------

#define TYPE_KINETIS_ENET TYPE_KINETIS_PREFIX "enet" TYPE_PERIPHERAL_SUFFIX

// ----------------------------------------------------------------------------

// Parent definitions.
#define TYPE_KINETIS_ENET_PARENT TYPE_PERIPHERAL
typedef PeripheralClass KinetisENETParentClass;
typedef PeripheralState KinetisENETParentState;

// ----------------------------------------------------------------------------

// Class definitions.
#define KINETIS_ENET_GET_CLASS(obj) \
    OBJECT_GET_CLASS(KinetisENETClass, (obj), TYPE_KINETIS_ENET)
#define KINETIS_ENET_CLASS(klass) \
    OBJECT_CLASS_CHECK(KinetisENETClass, (klass), TYPE_KINETIS_ENET)

typedef struct {
    // private: 
    KinetisENETParentClass parent_class;
    // public: 

    // None, so far.
} KinetisENETClass;

// ----------------------------------------------------------------------------

// Instance definitions.
#define KINETIS_ENET_STATE(obj) \
    OBJECT_CHECK(KinetisENETState, (obj), TYPE_KINETIS_ENET)

typedef struct {
    // private:
    KinetisENETParentState parent_obj;
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
        // K6 ENET (Ethernet MAC-NET Core) registers.
        struct { 
          Object *eir; // 0x4 (Interrupt Event Register) 
          Object *eimr; // 0x8 (Interrupt Mask Register) 
          Object *rdar; // 0x10 (Receive Descriptor Active Register) 
          Object *tdar; // 0x14 (Transmit Descriptor Active Register) 
          Object *ecr; // 0x24 (Ethernet Control Register) 
          Object *mmfr; // 0x40 (MII Management Frame Register) 
          Object *mscr; // 0x44 (MII Speed Control Register) 
          Object *mibc; // 0x64 (MIB Control Register) 
          Object *rcr; // 0x84 (Receive Control Register) 
          Object *tcr; // 0xC4 (Transmit Control Register) 
          Object *palr; // 0xE4 (Physical Address Lower Register) 
          Object *paur; // 0xE8 (Physical Address Upper Register) 
          Object *opd; // 0xEC (Opcode/Pause Duration Register) 
          Object *iaur; // 0x118 (Descriptor Individual Upper Address Register) 
          Object *ialr; // 0x11C (Descriptor Individual Lower Address Register) 
          Object *gaur; // 0x120 (Descriptor Group Upper Address Register) 
          Object *galr; // 0x124 (Descriptor Group Lower Address Register) 
          Object *tfwr; // 0x144 (Transmit FIFO Watermark Register) 
          Object *rdsr; // 0x180 (Receive Descriptor Ring Start Register) 
          Object *tdsr; // 0x184 (Transmit Buffer Descriptor Ring Start Register) 
          Object *mrbr; // 0x188 (Maximum Receive Buffer Size Register) 
          Object *rsfl; // 0x190 (Receive FIFO Section Full Threshold) 
          Object *rsem; // 0x194 (Receive FIFO Section Empty Threshold) 
          Object *raem; // 0x198 (Receive FIFO Almost Empty Threshold) 
          Object *rafl; // 0x19C (Receive FIFO Almost Full Threshold) 
          Object *tsem; // 0x1A0 (Transmit FIFO Section Empty Threshold) 
          Object *taem; // 0x1A4 (Transmit FIFO Almost Empty Threshold) 
          Object *tafl; // 0x1A8 (Transmit FIFO Almost Full Threshold) 
          Object *tipg; // 0x1AC (Transmit Inter-Packet Gap) 
          Object *ftrl; // 0x1B0 (Frame Truncation Length) 
          Object *tacc; // 0x1C0 (Transmit Accelerator Function Configuration) 
          Object *racc; // 0x1C4 (Receive Accelerator Function Configuration) 
          Object *rmon_t_packets; // 0x204 (Tx Packet Count Statistic Register) 
          Object *rmon_t_bc_pkt; // 0x208 (Tx Broadcast Packets Statistic Register) 
          Object *rmon_t_mc_pkt; // 0x20C (Tx Multicast Packets Statistic Register) 
          Object *rmon_t_crc_align; // 0x210 (Tx Packets with CRC/Align Error Statistic Register) 
          Object *rmon_t_undersize; // 0x214 (Tx Packets Less Than Bytes and Good CRC Statistic Register) 
          Object *rmon_t_oversize; // 0x218 (Tx Packets GT MAX_FL bytes and Good CRC Statistic Register) 
          Object *rmon_t_frag; // 0x21C (Tx Packets Less Than 64 Bytes and Bad CRC Statistic Register) 
          Object *rmon_t_jab; // 0x220 (Tx Packets Greater Than MAX_FL bytes and Bad CRC Statistic Register) 
          Object *rmon_t_col; // 0x224 (Tx Collision Count Statistic Register) 
          Object *rmon_t_p64; // 0x228 (Tx 64-Byte Packets Statistic Register) 
          Object *rmon_t_p65to127; // 0x22C (Tx 65- to 127-byte Packets Statistic Register) 
          Object *rmon_t_p128to255; // 0x230 (Tx 128- to 255-byte Packets Statistic Register) 
          Object *rmon_t_p256to511; // 0x234 (Tx 256- to 511-byte Packets Statistic Register) 
          Object *rmon_t_p512to1023; // 0x238 (Tx 512- to 1023-byte Packets Statistic Register) 
          Object *rmon_t_p1024to2047; // 0x23C (Tx 1024- to 2047-byte Packets Statistic Register) 
          Object *rmon_t_p_gte2048; // 0x240 (Tx Packets Greater Than 2048 Bytes Statistic Register) 
          Object *rmon_t_octets; // 0x244 (Tx Octets Statistic Register) 
          Object *ieee_t_frame_ok; // 0x24C (Frames Transmitted OK Statistic Register) 
          Object *ieee_t_1col; // 0x250 (Frames Transmitted with Single Collision Statistic Register) 
          Object *ieee_t_mcol; // 0x254 (Frames Transmitted with Multiple Collisions Statistic Register) 
          Object *ieee_t_def; // 0x258 (Frames Transmitted after Deferral Delay Statistic Register) 
          Object *ieee_t_lcol; // 0x25C (Frames Transmitted with Late Collision Statistic Register) 
          Object *ieee_t_excol; // 0x260 (Frames Transmitted with Excessive Collisions Statistic Register) 
          Object *ieee_t_macerr; // 0x264 (Frames Transmitted with Tx FIFO Underrun Statistic Register) 
          Object *ieee_t_cserr; // 0x268 (Frames Transmitted with Carrier Sense Error Statistic Register) 
          Object *ieee_t_fdxfc; // 0x270 (Flow Control Pause Frames Transmitted Statistic Register) 
          Object *ieee_t_octets_ok; // 0x274 (Octet Count for Frames Transmitted w/o Error Statistic Register) 
          Object *rmon_r_packets; // 0x284 (Rx Packet Count Statistic Register) 
          Object *rmon_r_bc_pkt; // 0x288 (Rx Broadcast Packets Statistic Register) 
          Object *rmon_r_mc_pkt; // 0x28C (Rx Multicast Packets Statistic Register) 
          Object *rmon_r_crc_align; // 0x290 (Rx Packets with CRC/Align Error Statistic Register) 
          Object *rmon_r_undersize; // 0x294 (Rx Packets with Less Than 64 Bytes and Good CRC Statistic Register) 
          Object *rmon_r_oversize; // 0x298 (Rx Packets Greater Than MAX_FL and Good CRC Statistic Register) 
          Object *rmon_r_frag; // 0x29C (Rx Packets Less Than 64 Bytes and Bad CRC Statistic Register) 
          Object *rmon_r_jab; // 0x2A0 (Rx Packets Greater Than MAX_FL Bytes and Bad CRC Statistic Register) 
          Object *rmon_r_p64; // 0x2A8 (Rx 64-Byte Packets Statistic Register) 
          Object *rmon_r_p65to127; // 0x2AC (Rx 65- to 127-Byte Packets Statistic Register) 
          Object *rmon_r_p128to255; // 0x2B0 (Rx 128- to 255-Byte Packets Statistic Register) 
          Object *rmon_r_p256to511; // 0x2B4 (Rx 256- to 511-Byte Packets Statistic Register) 
          Object *rmon_r_p512to1023; // 0x2B8 (Rx 512- to 1023-Byte Packets Statistic Register) 
          Object *rmon_r_p1024to2047; // 0x2BC (Rx 1024- to 2047-Byte Packets Statistic Register) 
          Object *rmon_r_p_gte2048; // 0x2C0 (Rx Packets Greater than 2048 Bytes Statistic Register) 
          Object *rmon_r_octets; // 0x2C4 (Rx Octets Statistic Register) 
          Object *ieee_r_drop; // 0x2C8 (Frames not Counted Correctly Statistic Register) 
          Object *ieee_r_frame_ok; // 0x2CC (Frames Received OK Statistic Register) 
          Object *ieee_r_crc; // 0x2D0 (Frames Received with CRC Error Statistic Register) 
          Object *ieee_r_align; // 0x2D4 (Frames Received with Alignment Error Statistic Register) 
          Object *ieee_r_macerr; // 0x2D8 (Receive FIFO Overflow Count Statistic Register) 
          Object *ieee_r_fdxfc; // 0x2DC (Flow Control Pause Frames Received Statistic Register) 
          Object *ieee_r_octets_ok; // 0x2E0 (Octet Count for Frames Received without Error Statistic Register) 
          Object *atcr; // 0x400 (Adjustable Timer Control Register) 
          Object *atvr; // 0x404 (Timer Value Register) 
          Object *atoff; // 0x408 (Timer Offset Register) 
          Object *atper; // 0x40C (Timer Period Register) 
          Object *atcor; // 0x410 (Timer Correction Register) 
          Object *atinc; // 0x414 (Time-Stamping Clock Period Register) 
          Object *atstmp; // 0x418 (Timestamp of Last Transmitted Frame) 
          Object *tgsr; // 0x604 (Timer Global Status Register) 
          Object *tcsr[4]; // 0x608 (Timer Control Status Register) 
          Object *tccr[4]; // 0x60C (Timer Compare Capture Register) 
        } reg;

        struct { 

          // EIR (Interrupt Event Register) bitfields.
          struct { 
            Object *ts_timer; // [15:15] Timestamp Timer
            Object *ts_avail; // [16:16] Transmit Timestamp Available
            Object *wakeup; // [17:17] Node Wakeup Request Indication
            Object *plr; // [18:18] Payload Receive Error
            Object *un; // [19:19] Transmit FIFO Underrun
            Object *rl; // [20:20] Collision Retry Limit
            Object *lc; // [21:21] Late Collision
            Object *eberr; // [22:22] Ethernet Bus Error
            Object *mii; // [23:23] MII Interrupt.
            Object *rxb; // [24:24] Receive Buffer Interrupt
            Object *rxf; // [25:25] Receive Frame Interrupt
            Object *txb; // [26:26] Transmit Buffer Interrupt
            Object *txf; // [27:27] Transmit Frame Interrupt
            Object *gra; // [28:28] Graceful Stop Complete
            Object *babt; // [29:29] Babbling Transmit Error
            Object *babr; // [30:30] Babbling Receive Error
          } eir; 

          // EIMR (Interrupt Mask Register) bitfields.
          struct { 
            Object *ts_timer; // [15:15] TS_TIMER Interrupt Mask
            Object *ts_avail; // [16:16] TS_AVAIL Interrupt Mask
            Object *wakeup; // [17:17] WAKEUP Interrupt Mask
            Object *plr; // [18:18] PLR Interrupt Mask
            Object *un; // [19:19] UN Interrupt Mask
            Object *rl; // [20:20] RL Interrupt Mask
            Object *lc; // [21:21] LC Interrupt Mask
            Object *eberr; // [22:22] EBERR Interrupt Mask
            Object *mii; // [23:23] MII Interrupt Mask
            Object *rxb; // [24:24] RXB Interrupt Mask
            Object *rxf; // [25:25] RXF Interrupt Mask
            Object *txb; // [26:26] TXB Interrupt Mask
            Object *txf; // [27:27] TXF Interrupt Mask
            Object *gra; // [28:28] GRA Interrupt Mask
            Object *babt; // [29:29] BABT Interrupt Mask
            Object *babr; // [30:30] BABR Interrupt Mask
          } eimr; 

          // RDAR (Receive Descriptor Active Register) bitfields.
          struct { 
            Object *rdar; // [24:24] Receive Descriptor Active
          } rdar; 

          // TDAR (Transmit Descriptor Active Register) bitfields.
          struct { 
            Object *tdar; // [24:24] Transmit Descriptor Active
          } tdar; 

          // ECR (Ethernet Control Register) bitfields.
          struct { 
            Object *reset; // [0:0] Ethernet MAC Reset
            Object *etheren; // [1:1] Ethernet Enable
            Object *magicen; // [2:2] Magic Packet Detection Enable
            Object *sleep; // [3:3] Sleep Mode Enable
            Object *en1588; // [4:4] EN1588 Enable
            Object *dbgen; // [6:6] Debug Enable
            Object *stopen; // [7:7] STOPEN Signal Control
            Object *dbswp; // [8:8] Descriptor Byte Swapping Enable
          } ecr; 

          // MMFR (MII Management Frame Register) bitfields.
          struct { 
            Object *data; // [0:15] Management Frame Data
            Object *ta; // [16:17] Turn Around
            Object *ra; // [18:22] Register Address
            Object *pa; // [23:27] PHY Address
            Object *op; // [28:29] Operation Code
            Object *st; // [30:31] Start Of Frame Delimiter
          } mmfr; 

          // MSCR (MII Speed Control Register) bitfields.
          struct { 
            Object *mii_speed; // [1:6] MII Speed
            Object *dis_pre; // [7:7] Disable Preamble
            Object *holdtime; // [8:10] Hold time On MDIO Output
          } mscr; 

          // MIBC (MIB Control Register) bitfields.
          struct { 
            Object *mib_clear; // [29:29] MIB Clear
            Object *mib_idle; // [30:30] MIB Idle
            Object *mib_dis; // [31:31] Disable MIB Logic
          } mibc; 

          // RCR (Receive Control Register) bitfields.
          struct { 
            Object *loop; // [0:0] Internal Loopback
            Object *drt; // [1:1] Disable Receive On Transmit
            Object *mii_mode; // [2:2] Media Independent Interface Mode
            Object *prom; // [3:3] Promiscuous Mode
            Object *bc_rej; // [4:4] Broadcast Frame Reject
            Object *fce; // [5:5] Flow Control Enable
            Object *rmii_mode; // [8:8] RMII Mode Enable
            Object *rmii_10t; // [9:9] No description available
            Object *paden; // [12:12] Enable Frame Padding Remove On Receive
            Object *paufwd; // [13:13] Terminate/Forward Pause Frames
            Object *crcfwd; // [14:14] Terminate/Forward Received CRC
            Object *cfen; // [15:15] MAC Control Frame Enable
            Object *max_fl; // [16:29] Maximum Frame Length
            Object *nlc; // [30:30] Payload Length Check Disable
            Object *grs; // [31:31] Graceful Receive Stopped
          } rcr; 

          // TCR (Transmit Control Register) bitfields.
          struct { 
            Object *gts; // [0:0] Graceful Transmit Stop
            Object *fden; // [2:2] Full-Duplex Enable
            Object *tfc_pause; // [3:3] Transmit Frame Control Pause
            Object *rfc_pause; // [4:4] Receive Frame Control Pause
            Object *addsel; // [5:7] Source MAC Address Select On Transmit
            Object *addins; // [8:8] Set MAC Address On Transmit
            Object *crcfwd; // [9:9] Forward Frame From Application With CRC
          } tcr; 

          // PALR (Physical Address Lower Register) bitfields.
          struct { 
            Object *paddr1; // [0:31] Pause Address
          } palr; 

          // PAUR (Physical Address Upper Register) bitfields.
          struct { 
            Object *type; // [0:15] Type Field In PAUSE Frames
            Object *paddr2; // [16:31] No description available
          } paur; 

          // OPD (Opcode/Pause Duration Register) bitfields.
          struct { 
            Object *pause_dur; // [0:15] Pause Duration
            Object *opcode; // [16:31] Opcode Field In PAUSE Frames
          } opd; 

          // IAUR (Descriptor Individual Upper Address Register) bitfields.
          struct { 
            Object *iaddr1; // [0:31] No description available
          } iaur; 

          // IALR (Descriptor Individual Lower Address Register) bitfields.
          struct { 
            Object *iaddr2; // [0:31] No description available
          } ialr; 

          // GAUR (Descriptor Group Upper Address Register) bitfields.
          struct { 
            Object *gaddr1; // [0:31] No description available
          } gaur; 

          // GALR (Descriptor Group Lower Address Register) bitfields.
          struct { 
            Object *gaddr2; // [0:31] No description available
          } galr; 

          // TFWR (Transmit FIFO Watermark Register) bitfields.
          struct { 
            Object *tfwr; // [0:5] Transmit FIFO Write
            Object *strfwd; // [8:8] Store And Forward Enable
          } tfwr; 

          // RDSR (Receive Descriptor Ring Start Register) bitfields.
          struct { 
            Object *r_des_start; // [3:31] No description available
          } rdsr; 

          // TDSR (Transmit Buffer Descriptor Ring Start Register) bitfields.
          struct { 
            Object *x_des_start; // [3:31] No description available
          } tdsr; 

          // MRBR (Maximum Receive Buffer Size Register) bitfields.
          struct { 
            Object *r_buf_size; // [4:13] No description available
          } mrbr; 

          // RSFL (Receive FIFO Section Full Threshold) bitfields.
          struct { 
            Object *rx_section_full; // [0:7] Value Of Receive FIFO Section Full Threshold
          } rsfl; 

          // RSEM (Receive FIFO Section Empty Threshold) bitfields.
          struct { 
            Object *rx_section_empty; // [0:7] Value Of The Receive FIFO Section Empty Threshold
            Object *stat_section_empty; // [16:20] RX Status FIFO Section Empty Threshold
          } rsem; 

          // RAEM (Receive FIFO Almost Empty Threshold) bitfields.
          struct { 
            Object *rx_almost_empty; // [0:7] Value Of The Receive FIFO Almost Empty Threshold
          } raem; 

          // RAFL (Receive FIFO Almost Full Threshold) bitfields.
          struct { 
            Object *rx_almost_full; // [0:7] Value Of The Receive FIFO Almost Full Threshold
          } rafl; 

          // TSEM (Transmit FIFO Section Empty Threshold) bitfields.
          struct { 
            Object *tx_section_empty; // [0:7] Value Of The Transmit FIFO Section Empty Threshold
          } tsem; 

          // TAEM (Transmit FIFO Almost Empty Threshold) bitfields.
          struct { 
            Object *tx_almost_empty; // [0:7] Value of Transmit FIFO Almost Empty Threshold
          } taem; 

          // TAFL (Transmit FIFO Almost Full Threshold) bitfields.
          struct { 
            Object *tx_almost_full; // [0:7] Value Of The Transmit FIFO Almost Full Threshold
          } tafl; 

          // TIPG (Transmit Inter-Packet Gap) bitfields.
          struct { 
            Object *ipg; // [0:4] Transmit Inter-Packet Gap
          } tipg; 

          // FTRL (Frame Truncation Length) bitfields.
          struct { 
            Object *trunc_fl; // [0:13] Frame Truncation Length
          } ftrl; 

          // TACC (Transmit Accelerator Function Configuration) bitfields.
          struct { 
            Object *shift16; // [0:0] TX FIFO Shift-16
            Object *ipchk; // [3:3] No description available
            Object *prochk; // [4:4] No description available
          } tacc; 

          // RACC (Receive Accelerator Function Configuration) bitfields.
          struct { 
            Object *padrem; // [0:0] Enable Padding Removal For Short IP Frames
            Object *ipdis; // [1:1] Enable Discard Of Frames With Wrong IPv4 Header Checksum
            Object *prodis; // [2:2] Enable Discard Of Frames With Wrong Protocol Checksum
            Object *linedis; // [6:6] Enable Discard Of Frames With MAC Layer Errors
            Object *shift16; // [7:7] RX FIFO Shift-16
          } racc; 

          // RMON_T_PACKETS (Tx Packet Count Statistic Register) bitfields.
          struct { 
            Object *txpkts; // [0:15] Packet count
          } rmon_t_packets; 

          // RMON_T_BC_PKT (Tx Broadcast Packets Statistic Register) bitfields.
          struct { 
            Object *txpkts; // [0:15] Broadcast packets
          } rmon_t_bc_pkt; 

          // RMON_T_MC_PKT (Tx Multicast Packets Statistic Register) bitfields.
          struct { 
            Object *txpkts; // [0:15] Multicast packets
          } rmon_t_mc_pkt; 

          // RMON_T_CRC_ALIGN (Tx Packets with CRC/Align Error Statistic Register) bitfields.
          struct { 
            Object *txpkts; // [0:15] Packets with CRC/align error
          } rmon_t_crc_align; 

          // RMON_T_UNDERSIZE (Tx Packets Less Than Bytes and Good CRC Statistic Register) bitfields.
          struct { 
            Object *txpkts; // [0:15] Packet count
          } rmon_t_undersize; 

          // RMON_T_OVERSIZE (Tx Packets GT MAX_FL bytes and Good CRC Statistic Register) bitfields.
          struct { 
            Object *txpkts; // [0:15] Packet count
          } rmon_t_oversize; 

          // RMON_T_FRAG (Tx Packets Less Than 64 Bytes and Bad CRC Statistic Register) bitfields.
          struct { 
            Object *txpkts; // [0:15] Packet count
          } rmon_t_frag; 

          // RMON_T_JAB (Tx Packets Greater Than MAX_FL bytes and Bad CRC Statistic Register) bitfields.
          struct { 
            Object *txpkts; // [0:15] Packet count
          } rmon_t_jab; 

          // RMON_T_COL (Tx Collision Count Statistic Register) bitfields.
          struct { 
            Object *txpkts; // [0:15] Packet count
          } rmon_t_col; 

          // RMON_T_P64 (Tx 64-Byte Packets Statistic Register) bitfields.
          struct { 
            Object *txpkts; // [0:15] Packet count
          } rmon_t_p64; 

          // RMON_T_P65TO127 (Tx 65- to 127-byte Packets Statistic Register) bitfields.
          struct { 
            Object *txpkts; // [0:15] Packet count
          } rmon_t_p65to127; 

          // RMON_T_P128TO255 (Tx 128- to 255-byte Packets Statistic Register) bitfields.
          struct { 
            Object *txpkts; // [0:15] Packet count
          } rmon_t_p128to255; 

          // RMON_T_P256TO511 (Tx 256- to 511-byte Packets Statistic Register) bitfields.
          struct { 
            Object *txpkts; // [0:15] Packet count
          } rmon_t_p256to511; 

          // RMON_T_P512TO1023 (Tx 512- to 1023-byte Packets Statistic Register) bitfields.
          struct { 
            Object *txpkts; // [0:15] Packet count
          } rmon_t_p512to1023; 

          // RMON_T_P1024TO2047 (Tx 1024- to 2047-byte Packets Statistic Register) bitfields.
          struct { 
            Object *txpkts; // [0:15] Packet count
          } rmon_t_p1024to2047; 

          // RMON_T_P_GTE2048 (Tx Packets Greater Than 2048 Bytes Statistic Register) bitfields.
          struct { 
            Object *txpkts; // [0:15] Packet count
          } rmon_t_p_gte2048; 

          // RMON_T_OCTETS (Tx Octets Statistic Register) bitfields.
          struct { 
            Object *txocts; // [0:31] Octet count
          } rmon_t_octets; 

          // IEEE_T_FRAME_OK (Frames Transmitted OK Statistic Register) bitfields.
          struct { 
            Object *count; // [0:15] Frame count
          } ieee_t_frame_ok; 

          // IEEE_T_1COL (Frames Transmitted with Single Collision Statistic Register) bitfields.
          struct { 
            Object *count; // [0:15] Frame count
          } ieee_t_1col; 

          // IEEE_T_MCOL (Frames Transmitted with Multiple Collisions Statistic Register) bitfields.
          struct { 
            Object *count; // [0:15] Frame count
          } ieee_t_mcol; 

          // IEEE_T_DEF (Frames Transmitted after Deferral Delay Statistic Register) bitfields.
          struct { 
            Object *count; // [0:15] Frame count
          } ieee_t_def; 

          // IEEE_T_LCOL (Frames Transmitted with Late Collision Statistic Register) bitfields.
          struct { 
            Object *count; // [0:15] Frame count
          } ieee_t_lcol; 

          // IEEE_T_EXCOL (Frames Transmitted with Excessive Collisions Statistic Register) bitfields.
          struct { 
            Object *count; // [0:15] Frame count
          } ieee_t_excol; 

          // IEEE_T_MACERR (Frames Transmitted with Tx FIFO Underrun Statistic Register) bitfields.
          struct { 
            Object *count; // [0:15] Frame count
          } ieee_t_macerr; 

          // IEEE_T_CSERR (Frames Transmitted with Carrier Sense Error Statistic Register) bitfields.
          struct { 
            Object *count; // [0:15] Frame count
          } ieee_t_cserr; 

          // IEEE_T_FDXFC (Flow Control Pause Frames Transmitted Statistic Register) bitfields.
          struct { 
            Object *count; // [0:15] Frame count
          } ieee_t_fdxfc; 

          // IEEE_T_OCTETS_OK (Octet Count for Frames Transmitted w/o Error Statistic Register) bitfields.
          struct { 
            Object *count; // [0:31] Octet count
          } ieee_t_octets_ok; 

          // RMON_R_PACKETS (Rx Packet Count Statistic Register) bitfields.
          struct { 
            Object *count; // [0:15] Packet count
          } rmon_r_packets; 

          // RMON_R_BC_PKT (Rx Broadcast Packets Statistic Register) bitfields.
          struct { 
            Object *count; // [0:15] Packet count
          } rmon_r_bc_pkt; 

          // RMON_R_MC_PKT (Rx Multicast Packets Statistic Register) bitfields.
          struct { 
            Object *count; // [0:15] Packet count
          } rmon_r_mc_pkt; 

          // RMON_R_CRC_ALIGN (Rx Packets with CRC/Align Error Statistic Register) bitfields.
          struct { 
            Object *count; // [0:15] Packet count
          } rmon_r_crc_align; 

          // RMON_R_UNDERSIZE (Rx Packets with Less Than 64 Bytes and Good CRC Statistic Register) bitfields.
          struct { 
            Object *count; // [0:15] Packet count
          } rmon_r_undersize; 

          // RMON_R_OVERSIZE (Rx Packets Greater Than MAX_FL and Good CRC Statistic Register) bitfields.
          struct { 
            Object *count; // [0:15] Packet count
          } rmon_r_oversize; 

          // RMON_R_FRAG (Rx Packets Less Than 64 Bytes and Bad CRC Statistic Register) bitfields.
          struct { 
            Object *count; // [0:15] Packet count
          } rmon_r_frag; 

          // RMON_R_JAB (Rx Packets Greater Than MAX_FL Bytes and Bad CRC Statistic Register) bitfields.
          struct { 
            Object *count; // [0:15] Packet count
          } rmon_r_jab; 

          // RMON_R_P64 (Rx 64-Byte Packets Statistic Register) bitfields.
          struct { 
            Object *count; // [0:15] Packet count
          } rmon_r_p64; 

          // RMON_R_P65TO127 (Rx 65- to 127-Byte Packets Statistic Register) bitfields.
          struct { 
            Object *count; // [0:15] Packet count
          } rmon_r_p65to127; 

          // RMON_R_P128TO255 (Rx 128- to 255-Byte Packets Statistic Register) bitfields.
          struct { 
            Object *count; // [0:15] Packet count
          } rmon_r_p128to255; 

          // RMON_R_P256TO511 (Rx 256- to 511-Byte Packets Statistic Register) bitfields.
          struct { 
            Object *count; // [0:15] Packet count
          } rmon_r_p256to511; 

          // RMON_R_P512TO1023 (Rx 512- to 1023-Byte Packets Statistic Register) bitfields.
          struct { 
            Object *count; // [0:15] Packet count
          } rmon_r_p512to1023; 

          // RMON_R_P1024TO2047 (Rx 1024- to 2047-Byte Packets Statistic Register) bitfields.
          struct { 
            Object *count; // [0:15] Packet count
          } rmon_r_p1024to2047; 

          // RMON_R_P_GTE2048 (Rx Packets Greater than 2048 Bytes Statistic Register) bitfields.
          struct { 
            Object *count; // [0:15] Packet count
          } rmon_r_p_gte2048; 

          // RMON_R_OCTETS (Rx Octets Statistic Register) bitfields.
          struct { 
            Object *count; // [0:31] Octet count
          } rmon_r_octets; 

          // IEEE_R_DROP (Frames not Counted Correctly Statistic Register) bitfields.
          struct { 
            Object *count; // [0:15] Frame count
          } ieee_r_drop; 

          // IEEE_R_FRAME_OK (Frames Received OK Statistic Register) bitfields.
          struct { 
            Object *count; // [0:15] Frame count
          } ieee_r_frame_ok; 

          // IEEE_R_CRC (Frames Received with CRC Error Statistic Register) bitfields.
          struct { 
            Object *count; // [0:15] Frame count
          } ieee_r_crc; 

          // IEEE_R_ALIGN (Frames Received with Alignment Error Statistic Register) bitfields.
          struct { 
            Object *count; // [0:15] Frame count
          } ieee_r_align; 

          // IEEE_R_MACERR (Receive FIFO Overflow Count Statistic Register) bitfields.
          struct { 
            Object *count; // [0:15] Count
          } ieee_r_macerr; 

          // IEEE_R_FDXFC (Flow Control Pause Frames Received Statistic Register) bitfields.
          struct { 
            Object *count; // [0:15] Pause frame count
          } ieee_r_fdxfc; 

          // IEEE_R_OCTETS_OK (Octet Count for Frames Received without Error Statistic Register) bitfields.
          struct { 
            Object *count; // [0:31] Octet count
          } ieee_r_octets_ok; 

          // ATCR (Adjustable Timer Control Register) bitfields.
          struct { 
            Object *en; // [0:0] Enable Timer
            Object *offen; // [2:2] Enable One-Shot Offset Event
            Object *offrst; // [3:3] Reset Timer On Offset Event
            Object *peren; // [4:4] Enable Periodical Event
            Object *pinper; // [7:7] No description available
            Object *restart; // [9:9] Reset Timer
            Object *capture; // [11:11] Capture Timer Value
            Object *slave; // [13:13] Enable Timer Slave Mode
          } atcr; 

          // ATVR (Timer Value Register) bitfields.
          struct { 
            Object *atime; // [0:31] No description available
          } atvr; 

          // ATOFF (Timer Offset Register) bitfields.
          struct { 
            Object *offset; // [0:31] No description available
          } atoff; 

          // ATPER (Timer Period Register) bitfields.
          struct { 
            Object *period; // [0:31] No description available
          } atper; 

          // ATCOR (Timer Correction Register) bitfields.
          struct { 
            Object *cor; // [0:30] Correction Counter Wrap-Around Value
          } atcor; 

          // ATINC (Time-Stamping Clock Period Register) bitfields.
          struct { 
            Object *inc; // [0:6] Clock Period Of The Timestamping Clock (ts_clk) In Nanoseconds
            Object *inc_corr; // [8:14] Correction Increment Value
          } atinc; 

          // ATSTMP (Timestamp of Last Transmitted Frame) bitfields.
          struct { 
            Object *timestamp; // [0:31] No description available
          } atstmp; 

          // TGSR (Timer Global Status Register) bitfields.
          struct { 
            Object *tf0; // [0:0] Copy Of Timer Flag For Channel 0
            Object *tf1; // [1:1] Copy Of Timer Flag For Channel 1
            Object *tf2; // [2:2] Copy Of Timer Flag For Channel 2
            Object *tf3; // [3:3] Copy Of Timer Flag For Channel 3
          } tgsr; 

          // TCSRn (Timer Control Status Register) bitfields.
          struct { 
            Object *tdre; // [0:0] Timer DMA Request Enable
            Object *tmode; // [2:5] Timer Mode
            Object *tie; // [6:6] Timer Interrupt Enable
            Object *tf; // [7:7] Timer Flag
          } tcsr[4]; 

          // TCCRn (Timer Compare Capture Register) bitfields.
          struct { 
            Object *tcc; // [0:31] Timer Capture Compare
          } tccr[4]; 
        } fld;
      } k6;

      // ----- 8< ----- 8< -----  8< ----- 8< ----- 8< ----- 8< ----- 8< -----
    } u;

} KinetisENETState;

// ----------------------------------------------------------------------------

#endif /* KINETIS_ENET_H_ */
