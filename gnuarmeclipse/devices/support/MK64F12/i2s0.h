/*
 * Kinetis - I2S (Inter-IC Sound / Synchronous Audio Interface) emulation.
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

#ifndef KINETIS_I2S_H_
#define KINETIS_I2S_H_

#include "qemu/osdep.h"

#include <hw/cortexm/peripheral.h>
#include <hw/cortexm/kinetis/capabilities.h>

// ----------------------------------------------------------------------------

#define DEVICE_PATH_KINETIS_I2S DEVICE_PATH_KINETIS "I2S"

// ----------------------------------------------------------------------------

// Note: the "port-index" property has type "int".
typedef enum {
    // TODO: keep this list in ascending order.
    KINETIS_PORT_I2S0,
    KINETIS_PORT_I2S_UNDEFINED = 0xFF,
} kinetis_i2s_index_t;

// ----------------------------------------------------------------------------

#define TYPE_KINETIS_I2S TYPE_KINETIS_PREFIX "i2s" TYPE_PERIPHERAL_SUFFIX

// ----------------------------------------------------------------------------

// Parent definitions.
#define TYPE_KINETIS_I2S_PARENT TYPE_PERIPHERAL
typedef PeripheralClass KinetisI2SParentClass;
typedef PeripheralState KinetisI2SParentState;

// ----------------------------------------------------------------------------

// Class definitions.
#define KINETIS_I2S_GET_CLASS(obj) \
    OBJECT_GET_CLASS(KinetisI2SClass, (obj), TYPE_KINETIS_I2S)
#define KINETIS_I2S_CLASS(klass) \
    OBJECT_CLASS_CHECK(KinetisI2SClass, (klass), TYPE_KINETIS_I2S)

typedef struct {
    // private: 
    KinetisI2SParentClass parent_class;
    // public: 

    // None, so far.
} KinetisI2SClass;

// ----------------------------------------------------------------------------

// Instance definitions.
#define KINETIS_I2S_STATE(obj) \
    OBJECT_CHECK(KinetisI2SState, (obj), TYPE_KINETIS_I2S)

typedef struct {
    // private:
    KinetisI2SParentState parent_obj;
    // public:

    const KinetisCapabilities *capabilities;

    // TODO: remove this if the peripheral is always enabled.
    // Points to the bitfield that enables the peripheral.
    Object *enabling_bit;

    // Remove it if there is only one port
    kinetis_i2s_index_t port_index;

    union {
      // ----- 8< ----- 8< -----  8< ----- 8< ----- 8< ----- 8< ----- 8< -----

      // DO NOT REMOVE FIELDS! Automatically generated!
      // Merge fields from different family members.
      struct {
        // K6 I2S (Inter-IC Sound / Synchronous Audio Interface) registers.
        struct { 
          Object *tcsr; // 0 (SAI Transmit Control Register) 
          Object *tcr1; // 0x4 (SAI Transmit Configuration 1 Register) 
          Object *tcr2; // 0x8 (SAI Transmit Configuration 2 Register) 
          Object *tcr3; // 0xC (SAI Transmit Configuration 3 Register) 
          Object *tcr4; // 0x10 (SAI Transmit Configuration 4 Register) 
          Object *tcr5; // 0x14 (SAI Transmit Configuration 5 Register) 
          Object *tdr[2]; // 0x20 (SAI Transmit Data Register) 
          Object *tfr[2]; // 0x40 (SAI Transmit FIFO Register) 
          Object *tmr; // 0x60 (SAI Transmit Mask Register) 
          Object *rcsr; // 0x80 (SAI Receive Control Register) 
          Object *rcr1; // 0x84 (SAI Receive Configuration 1 Register) 
          Object *rcr2; // 0x88 (SAI Receive Configuration 2 Register) 
          Object *rcr3; // 0x8C (SAI Receive Configuration 3 Register) 
          Object *rcr4; // 0x90 (SAI Receive Configuration 4 Register) 
          Object *rcr5; // 0x94 (SAI Receive Configuration 5 Register) 
          Object *rdr[2]; // 0xA0 (SAI Receive Data Register) 
          Object *rfr[2]; // 0xC0 (SAI Receive FIFO Register) 
          Object *rmr; // 0xE0 (SAI Receive Mask Register) 
          Object *mcr; // 0x100 (SAI MCLK Control Register) 
          Object *mdr; // 0x104 (SAI MCLK Divide Register) 
        } reg;

        struct { 

          // TCSR (SAI Transmit Control Register) bitfields.
          struct { 
            Object *frde; // [0:0] FIFO Request DMA Enable
            Object *fwde; // [1:1] FIFO Warning DMA Enable
            Object *frie; // [8:8] FIFO Request Interrupt Enable
            Object *fwie; // [9:9] FIFO Warning Interrupt Enable
            Object *feie; // [10:10] FIFO Error Interrupt Enable
            Object *seie; // [11:11] Sync Error Interrupt Enable
            Object *wsie; // [12:12] Word Start Interrupt Enable
            Object *frf; // [16:16] FIFO Request Flag
            Object *fwf; // [17:17] FIFO Warning Flag
            Object *fef; // [18:18] FIFO Error Flag
            Object *sef; // [19:19] Sync Error Flag
            Object *wsf; // [20:20] Word Start Flag
            Object *sr; // [24:24] Software Reset
            Object *fr; // [25:25] FIFO Reset
            Object *bce; // [28:28] Bit Clock Enable
            Object *dbge; // [29:29] Debug Enable
            Object *stope; // [30:30] Stop Enable
            Object *te; // [31:31] Transmitter Enable
          } tcsr; 

          // TCR1 (SAI Transmit Configuration 1 Register) bitfields.
          struct { 
            Object *tfw; // [0:2] Transmit FIFO Watermark
          } tcr1; 

          // TCR2 (SAI Transmit Configuration 2 Register) bitfields.
          struct { 
            Object *div; // [0:7] Bit Clock Divide
            Object *bcd; // [24:24] Bit Clock Direction
            Object *bcp; // [25:25] Bit Clock Polarity
            Object *msel; // [26:27] MCLK Select
            Object *bci; // [28:28] Bit Clock Input
            Object *bcs; // [29:29] Bit Clock Swap
            Object *sync; // [30:31] Synchronous Mode
          } tcr2; 

          // TCR3 (SAI Transmit Configuration 3 Register) bitfields.
          struct { 
            Object *wdfl; // [0:4] Word Flag Configuration
            Object *tce; // [16:17] Transmit Channel Enable
          } tcr3; 

          // TCR4 (SAI Transmit Configuration 4 Register) bitfields.
          struct { 
            Object *fsd; // [0:0] Frame Sync Direction
            Object *fsp; // [1:1] Frame Sync Polarity
            Object *fse; // [3:3] Frame Sync Early
            Object *mf; // [4:4] MSB First
            Object *sywd; // [8:12] Sync Width
            Object *frsz; // [16:20] Frame size
          } tcr4; 

          // TCR5 (SAI Transmit Configuration 5 Register) bitfields.
          struct { 
            Object *fbt; // [8:12] First Bit Shifted
            Object *w0w; // [16:20] Word 0 Width
            Object *wnw; // [24:28] Word N Width
          } tcr5; 

          // TDRn (SAI Transmit Data Register) bitfields.
          struct { 
            Object *tdr; // [0:31] Transmit Data Register
          } tdr[2]; 

          // TFRn (SAI Transmit FIFO Register) bitfields.
          struct { 
            Object *rfp; // [0:3] Read FIFO Pointer
            Object *wfp; // [16:19] Write FIFO Pointer
          } tfr[2]; 

          // TMR (SAI Transmit Mask Register) bitfields.
          struct { 
            Object *twm; // [0:31] Transmit Word Mask
          } tmr; 

          // RCSR (SAI Receive Control Register) bitfields.
          struct { 
            Object *frde; // [0:0] FIFO Request DMA Enable
            Object *fwde; // [1:1] FIFO Warning DMA Enable
            Object *frie; // [8:8] FIFO Request Interrupt Enable
            Object *fwie; // [9:9] FIFO Warning Interrupt Enable
            Object *feie; // [10:10] FIFO Error Interrupt Enable
            Object *seie; // [11:11] Sync Error Interrupt Enable
            Object *wsie; // [12:12] Word Start Interrupt Enable
            Object *frf; // [16:16] FIFO Request Flag
            Object *fwf; // [17:17] FIFO Warning Flag
            Object *fef; // [18:18] FIFO Error Flag
            Object *sef; // [19:19] Sync Error Flag
            Object *wsf; // [20:20] Word Start Flag
            Object *sr; // [24:24] Software Reset
            Object *fr; // [25:25] FIFO Reset
            Object *bce; // [28:28] Bit Clock Enable
            Object *dbge; // [29:29] Debug Enable
            Object *stope; // [30:30] Stop Enable
            Object *re; // [31:31] Receiver Enable
          } rcsr; 

          // RCR1 (SAI Receive Configuration 1 Register) bitfields.
          struct { 
            Object *rfw; // [0:2] Receive FIFO Watermark
          } rcr1; 

          // RCR2 (SAI Receive Configuration 2 Register) bitfields.
          struct { 
            Object *div; // [0:7] Bit Clock Divide
            Object *bcd; // [24:24] Bit Clock Direction
            Object *bcp; // [25:25] Bit Clock Polarity
            Object *msel; // [26:27] MCLK Select
            Object *bci; // [28:28] Bit Clock Input
            Object *bcs; // [29:29] Bit Clock Swap
            Object *sync; // [30:31] Synchronous Mode
          } rcr2; 

          // RCR3 (SAI Receive Configuration 3 Register) bitfields.
          struct { 
            Object *wdfl; // [0:4] Word Flag Configuration
            Object *rce; // [16:17] Receive Channel Enable
          } rcr3; 

          // RCR4 (SAI Receive Configuration 4 Register) bitfields.
          struct { 
            Object *fsd; // [0:0] Frame Sync Direction
            Object *fsp; // [1:1] Frame Sync Polarity
            Object *fse; // [3:3] Frame Sync Early
            Object *mf; // [4:4] MSB First
            Object *sywd; // [8:12] Sync Width
            Object *frsz; // [16:20] Frame Size
          } rcr4; 

          // RCR5 (SAI Receive Configuration 5 Register) bitfields.
          struct { 
            Object *fbt; // [8:12] First Bit Shifted
            Object *w0w; // [16:20] Word 0 Width
            Object *wnw; // [24:28] Word N Width
          } rcr5; 

          // RDRn (SAI Receive Data Register) bitfields.
          struct { 
            Object *rdr; // [0:31] Receive Data Register
          } rdr[2]; 

          // RFRn (SAI Receive FIFO Register) bitfields.
          struct { 
            Object *rfp; // [0:3] Read FIFO Pointer
            Object *wfp; // [16:19] Write FIFO Pointer
          } rfr[2]; 

          // RMR (SAI Receive Mask Register) bitfields.
          struct { 
            Object *rwm; // [0:31] Receive Word Mask
          } rmr; 

          // MCR (SAI MCLK Control Register) bitfields.
          struct { 
            Object *mics; // [24:25] MCLK Input Clock Select
            Object *moe; // [30:30] MCLK Output Enable
            Object *duf; // [31:31] Divider Update Flag
          } mcr; 

          // MDR (SAI MCLK Divide Register) bitfields.
          struct { 
            Object *divide; // [0:11] MCLK Divide
            Object *fract; // [12:19] MCLK Fraction
          } mdr; 
        } fld;
      } k6;

      // ----- 8< ----- 8< -----  8< ----- 8< ----- 8< ----- 8< ----- 8< -----
    } u;

} KinetisI2SState;

// ----------------------------------------------------------------------------

#endif /* KINETIS_I2S_H_ */
