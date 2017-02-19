/*
 * Kinetis - SDHC (Secured Digital Host Controller) emulation.
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

#ifndef KINETIS_SDHC_H_
#define KINETIS_SDHC_H_

#include "qemu/osdep.h"

#include <hw/cortexm/peripheral.h>
#include <hw/cortexm/kinetis/capabilities.h>

// ----------------------------------------------------------------------------

#define DEVICE_PATH_KINETIS_SDHC DEVICE_PATH_KINETIS "SDHC"


// ----------------------------------------------------------------------------

#define TYPE_KINETIS_SDHC TYPE_KINETIS_PREFIX "sdhc" TYPE_PERIPHERAL_SUFFIX

// ----------------------------------------------------------------------------

// Parent definitions.
#define TYPE_KINETIS_SDHC_PARENT TYPE_PERIPHERAL
typedef PeripheralClass KinetisSDHCParentClass;
typedef PeripheralState KinetisSDHCParentState;

// ----------------------------------------------------------------------------

// Class definitions.
#define KINETIS_SDHC_GET_CLASS(obj) \
    OBJECT_GET_CLASS(KinetisSDHCClass, (obj), TYPE_KINETIS_SDHC)
#define KINETIS_SDHC_CLASS(klass) \
    OBJECT_CLASS_CHECK(KinetisSDHCClass, (klass), TYPE_KINETIS_SDHC)

typedef struct {
    // private: 
    KinetisSDHCParentClass parent_class;
    // public: 

    // None, so far.
} KinetisSDHCClass;

// ----------------------------------------------------------------------------

// Instance definitions.
#define KINETIS_SDHC_STATE(obj) \
    OBJECT_CHECK(KinetisSDHCState, (obj), TYPE_KINETIS_SDHC)

typedef struct {
    // private:
    KinetisSDHCParentState parent_obj;
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
        // K6 SDHC (Secured Digital Host Controller) registers.
        struct { 
          Object *dsaddr; // 0 (DMA System Address register) 
          Object *blkattr; // 0x4 (Block Attributes register) 
          Object *cmdarg; // 0x8 (Command Argument register) 
          Object *xfertyp; // 0xC (Transfer Type register) 
          Object *cmdrsp0; // 0x10 (Command Response 0) 
          Object *cmdrsp1; // 0x14 (Command Response 1) 
          Object *cmdrsp2; // 0x18 (Command Response 2) 
          Object *cmdrsp3; // 0x1C (Command Response 3) 
          Object *datport; // 0x20 (Buffer Data Port register) 
          Object *prsstat; // 0x24 (Present State register) 
          Object *proctl; // 0x28 (Protocol Control register) 
          Object *sysctl; // 0x2C (System Control register) 
          Object *irqstat; // 0x30 (Interrupt Status register) 
          Object *irqstaten; // 0x34 (Interrupt Status Enable register) 
          Object *irqsigen; // 0x38 (Interrupt Signal Enable register) 
          Object *ac12err; // 0x3C (Auto CMD12 Error Status Register) 
          Object *htcapblt; // 0x40 (Host Controller Capabilities) 
          Object *wml; // 0x44 (Watermark Level Register) 
          Object *fevt; // 0x50 (Force Event register) 
          Object *admaes; // 0x54 (ADMA Error Status register) 
          Object *adsaddr; // 0x58 (ADMA System Addressregister) 
          Object *vendor; // 0xC0 (Vendor Specific register) 
          Object *mmcboot; // 0xC4 (MMC Boot register) 
          Object *hostver; // 0xFC (Host Controller Version) 
        } reg;

        struct { 

          // DSADDR (DMA System Address register) bitfields.
          struct { 
            Object *dsaddr; // [2:31] DMA System Address
          } dsaddr; 

          // BLKATTR (Block Attributes register) bitfields.
          struct { 
            Object *blksize; // [0:12] Transfer Block Size
            Object *blkcnt; // [16:31] Blocks Count For Current Transfer
          } blkattr; 

          // CMDARG (Command Argument register) bitfields.
          struct { 
            Object *cmdarg; // [0:31] Command Argument
          } cmdarg; 

          // XFERTYP (Transfer Type register) bitfields.
          struct { 
            Object *dmaen; // [0:0] DMA Enable
            Object *bcen; // [1:1] Block Count Enable
            Object *ac12en; // [2:2] Auto CMD12 Enable
            Object *dtdsel; // [4:4] Data Transfer Direction Select
            Object *msbsel; // [5:5] Multi/Single Block Select
            Object *rsptyp; // [16:17] Response Type Select
            Object *cccen; // [19:19] Command CRC Check Enable
            Object *cicen; // [20:20] Command Index Check Enable
            Object *dpsel; // [21:21] Data Present Select
            Object *cmdtyp; // [22:23] Command Type
            Object *cmdinx; // [24:29] Command Index
          } xfertyp; 

          // CMDRSP0 (Command Response 0) bitfields.
          struct { 
            Object *cmdrsp0; // [0:31] Command Response 0
          } cmdrsp0; 

          // CMDRSP1 (Command Response 1) bitfields.
          struct { 
            Object *cmdrsp1; // [0:31] Command Response 1
          } cmdrsp1; 

          // CMDRSP2 (Command Response 2) bitfields.
          struct { 
            Object *cmdrsp2; // [0:31] Command Response 2
          } cmdrsp2; 

          // CMDRSP3 (Command Response 3) bitfields.
          struct { 
            Object *cmdrsp3; // [0:31] Command Response 3
          } cmdrsp3; 

          // DATPORT (Buffer Data Port register) bitfields.
          struct { 
            Object *datcont; // [0:31] Data Content
          } datport; 

          // PRSSTAT (Present State register) bitfields.
          struct { 
            Object *cihb; // [0:0] Command Inhibit (CMD)
            Object *cdihb; // [1:1] Command Inhibit (DAT)
            Object *dla; // [2:2] Data Line Active
            Object *sdstb; // [3:3] SD Clock Stable
            Object *ipgoff; // [4:4] Bus Clock Gated Off Internally
            Object *hckoff; // [5:5] System Clock Gated Off Internally
            Object *peroff; // [6:6] SDHC clock Gated Off Internally
            Object *sdoff; // [7:7] SD Clock Gated Off Internally
            Object *wta; // [8:8] Write Transfer Active
            Object *rta; // [9:9] Read Transfer Active
            Object *bwen; // [10:10] Buffer Write Enable
            Object *bren; // [11:11] Buffer Read Enable
            Object *cins; // [16:16] Card Inserted
            Object *clsl; // [23:23] CMD Line Signal Level
            Object *dlsl; // [24:31] DAT Line Signal Level
          } prsstat; 

          // PROCTL (Protocol Control register) bitfields.
          struct { 
            Object *lctl; // [0:0] LED Control
            Object *dtw; // [1:2] Data Transfer Width
            Object *d3cd; // [3:3] DAT3 As Card Detection Pin
            Object *emode; // [4:5] Endian Mode
            Object *cdtl; // [6:6] Card Detect Test Level
            Object *cdss; // [7:7] Card Detect Signal Selection
            Object *dmas; // [8:9] DMA Select
            Object *sabgreq; // [16:16] Stop At Block Gap Request
            Object *creq; // [17:17] Continue Request
            Object *rwctl; // [18:18] Read Wait Control
            Object *iabg; // [19:19] Interrupt At Block Gap
            Object *wecint; // [24:24] Wakeup Event Enable On Card Interrupt
            Object *wecins; // [25:25] Wakeup Event Enable On SD Card Insertion
            Object *wecrm; // [26:26] Wakeup Event Enable On SD Card Removal
          } proctl; 

          // SYSCTL (System Control register) bitfields.
          struct { 
            Object *ipgen; // [0:0] IPG Clock Enable
            Object *hcken; // [1:1] System Clock Enable
            Object *peren; // [2:2] Peripheral Clock Enable
            Object *sdclken; // [3:3] SD Clock Enable
            Object *dvs; // [4:7] Divisor
            Object *sdclkfs; // [8:15] SDCLK Frequency Select
            Object *dtocv; // [16:19] Data Timeout Counter Value
            Object *rsta; // [24:24] Software Reset For ALL
            Object *rstc; // [25:25] Software Reset For CMD Line
            Object *rstd; // [26:26] Software Reset For DAT Line
            Object *inita; // [27:27] Initialization Active
          } sysctl; 

          // IRQSTAT (Interrupt Status register) bitfields.
          struct { 
            Object *cc; // [0:0] Command Complete
            Object *tc; // [1:1] Transfer Complete
            Object *bge; // [2:2] Block Gap Event
            Object *dint; // [3:3] DMA Interrupt
            Object *bwr; // [4:4] Buffer Write Ready
            Object *brr; // [5:5] Buffer Read Ready
            Object *cins; // [6:6] Card Insertion
            Object *crm; // [7:7] Card Removal
            Object *cint; // [8:8] Card Interrupt
            Object *ctoe; // [16:16] Command Timeout Error
            Object *cce; // [17:17] Command CRC Error
            Object *cebe; // [18:18] Command End Bit Error
            Object *cie; // [19:19] Command Index Error
            Object *dtoe; // [20:20] Data Timeout Error
            Object *dce; // [21:21] Data CRC Error
            Object *debe; // [22:22] Data End Bit Error
            Object *ac12e; // [24:24] Auto CMD12 Error
            Object *dmae; // [28:28] DMA Error
          } irqstat; 

          // IRQSTATEN (Interrupt Status Enable register) bitfields.
          struct { 
            Object *ccsen; // [0:0] Command Complete Status Enable
            Object *tcsen; // [1:1] Transfer Complete Status Enable
            Object *bgesen; // [2:2] Block Gap Event Status Enable
            Object *dintsen; // [3:3] DMA Interrupt Status Enable
            Object *bwrsen; // [4:4] Buffer Write Ready Status Enable
            Object *brrsen; // [5:5] Buffer Read Ready Status Enable
            Object *cinsen; // [6:6] Card Insertion Status Enable
            Object *crmsen; // [7:7] Card Removal Status Enable
            Object *cintsen; // [8:8] Card Interrupt Status Enable
            Object *ctoesen; // [16:16] Command Timeout Error Status Enable
            Object *ccesen; // [17:17] Command CRC Error Status Enable
            Object *cebesen; // [18:18] Command End Bit Error Status Enable
            Object *ciesen; // [19:19] Command Index Error Status Enable
            Object *dtoesen; // [20:20] Data Timeout Error Status Enable
            Object *dcesen; // [21:21] Data CRC Error Status Enable
            Object *debesen; // [22:22] Data End Bit Error Status Enable
            Object *ac12esen; // [24:24] Auto CMD12 Error Status Enable
            Object *dmaesen; // [28:28] DMA Error Status Enable
          } irqstaten; 

          // IRQSIGEN (Interrupt Signal Enable register) bitfields.
          struct { 
            Object *ccien; // [0:0] Command Complete Interrupt Enable
            Object *tcien; // [1:1] Transfer Complete Interrupt Enable
            Object *bgeien; // [2:2] Block Gap Event Interrupt Enable
            Object *dintien; // [3:3] DMA Interrupt Enable
            Object *bwrien; // [4:4] Buffer Write Ready Interrupt Enable
            Object *brrien; // [5:5] Buffer Read Ready Interrupt Enable
            Object *cinsien; // [6:6] Card Insertion Interrupt Enable
            Object *crmien; // [7:7] Card Removal Interrupt Enable
            Object *cintien; // [8:8] Card Interrupt Enable
            Object *ctoeien; // [16:16] Command Timeout Error Interrupt Enable
            Object *cceien; // [17:17] Command CRC Error Interrupt Enable
            Object *cebeien; // [18:18] Command End Bit Error Interrupt Enable
            Object *cieien; // [19:19] Command Index Error Interrupt Enable
            Object *dtoeien; // [20:20] Data Timeout Error Interrupt Enable
            Object *dceien; // [21:21] Data CRC Error Interrupt Enable
            Object *debeien; // [22:22] Data End Bit Error Interrupt Enable
            Object *ac12eien; // [24:24] Auto CMD12 Error Interrupt Enable
            Object *dmaeien; // [28:28] DMA Error Interrupt Enable
          } irqsigen; 

          // AC12ERR (Auto CMD12 Error Status Register) bitfields.
          struct { 
            Object *ac12ne; // [0:0] Auto CMD12 Not Executed
            Object *ac12toe; // [1:1] Auto CMD12 Timeout Error
            Object *ac12ebe; // [2:2] Auto CMD12 End Bit Error
            Object *ac12ce; // [3:3] Auto CMD12 CRC Error
            Object *ac12ie; // [4:4] Auto CMD12 Index Error
            Object *cnibac12e; // [7:7] Command Not Issued By Auto CMD12 Error
          } ac12err; 

          // HTCAPBLT (Host Controller Capabilities) bitfields.
          struct { 
            Object *mbl; // [16:18] Max Block Length
            Object *admas; // [20:20] ADMA Support
            Object *hss; // [21:21] High Speed Support
            Object *dmas; // [22:22] DMA Support
            Object *srs; // [23:23] Suspend/Resume Support
            Object *vs33; // [24:24] Voltage Support 3.3 V
          } htcapblt; 

          // WML (Watermark Level Register) bitfields.
          struct { 
            Object *rdwml; // [0:7] Read Watermark Level
            Object *wrwml; // [16:23] Write Watermark Level
          } wml; 

          // FEVT (Force Event register) bitfields.
          struct { 
            Object *ac12ne; // [0:0] Force Event Auto Command 12 Not Executed
            Object *ac12toe; // [1:1] Force Event Auto Command 12 Time Out Error
            Object *ac12ce; // [2:2] Force Event Auto Command 12 CRC Error
            Object *ac12ebe; // [3:3] Force Event Auto Command 12 End Bit Error
            Object *ac12ie; // [4:4] Force Event Auto Command 12 Index Error
            Object *cnibac12e; // [7:7] Force Event Command Not Executed By Auto Command 12 Error
            Object *ctoe; // [16:16] Force Event Command Time Out Error
            Object *cce; // [17:17] Force Event Command CRC Error
            Object *cebe; // [18:18] Force Event Command End Bit Error
            Object *cie; // [19:19] Force Event Command Index Error
            Object *dtoe; // [20:20] Force Event Data Time Out Error
            Object *dce; // [21:21] Force Event Data CRC Error
            Object *debe; // [22:22] Force Event Data End Bit Error
            Object *ac12e; // [24:24] Force Event Auto Command 12 Error
            Object *dmae; // [28:28] Force Event DMA Error
            Object *cint; // [31:31] Force Event Card Interrupt
          } fevt; 

          // ADMAES (ADMA Error Status register) bitfields.
          struct { 
            Object *admaes; // [0:1] ADMA Error State (When ADMA Error Is Occurred.)
            Object *admalme; // [2:2] ADMA Length Mismatch Error
            Object *admadce; // [3:3] ADMA Descriptor Error
          } admaes; 

          // ADSADDR (ADMA System Addressregister) bitfields.
          struct { 
            Object *adsaddr; // [2:31] ADMA System Address
          } adsaddr; 

          // VENDOR (Vendor Specific register) bitfields.
          struct { 
            Object *extdmaen; // [0:0] External DMA Request Enable
            Object *exblknu; // [1:1] Exact Block Number Block Read Enable For SDIO CMD53
            Object *intstval; // [16:23] Internal State Value
          } vendor; 

          // MMCBOOT (MMC Boot register) bitfields.
          struct { 
            Object *dtocvack; // [0:3] Boot ACK Time Out Counter Value
            Object *bootack; // [4:4] Boot Ack Mode Select
            Object *bootmode; // [5:5] Boot Mode Select
            Object *booten; // [6:6] Boot Mode Enable
            Object *autosabgen; // [7:7] No description available
            Object *bootblkcnt; // [16:31] No description available
          } mmcboot; 

          // HOSTVER (Host Controller Version) bitfields.
          struct { 
            Object *svn; // [0:7] Specification Version Number
            Object *vvn; // [8:15] Vendor Version Number
          } hostver; 
        } fld;
      } k6;

      // ----- 8< ----- 8< -----  8< ----- 8< ----- 8< ----- 8< ----- 8< -----
    } u;

} KinetisSDHCState;

// ----------------------------------------------------------------------------

#endif /* KINETIS_SDHC_H_ */
