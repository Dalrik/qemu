/*
 * Kinetis - SPI (Serial Peripheral Interface) emulation.
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

#ifndef KINETIS_SPI_H_
#define KINETIS_SPI_H_

#include "qemu/osdep.h"

#include <hw/cortexm/peripheral.h>
#include <hw/cortexm/kinetis/capabilities.h>

// ----------------------------------------------------------------------------

#define DEVICE_PATH_KINETIS_SPI DEVICE_PATH_KINETIS "SPI"

// ----------------------------------------------------------------------------

// Note: the "port-index" property has type "int".
typedef enum {
    // TODO: keep this list in ascending order.
    KINETIS_PORT_SPI0,
    KINETIS_PORT_SPI1,
    KINETIS_PORT_SPI2,
    KINETIS_PORT_SPI_UNDEFINED = 0xFF,
} kinetis_spi_index_t;

// ----------------------------------------------------------------------------

#define TYPE_KINETIS_SPI TYPE_KINETIS_PREFIX "spi" TYPE_PERIPHERAL_SUFFIX

// ----------------------------------------------------------------------------

// Parent definitions.
#define TYPE_KINETIS_SPI_PARENT TYPE_PERIPHERAL
typedef PeripheralClass KinetisSPIParentClass;
typedef PeripheralState KinetisSPIParentState;

// ----------------------------------------------------------------------------

// Class definitions.
#define KINETIS_SPI_GET_CLASS(obj) \
    OBJECT_GET_CLASS(KinetisSPIClass, (obj), TYPE_KINETIS_SPI)
#define KINETIS_SPI_CLASS(klass) \
    OBJECT_CLASS_CHECK(KinetisSPIClass, (klass), TYPE_KINETIS_SPI)

typedef struct {
    // private: 
    KinetisSPIParentClass parent_class;
    // public: 

    // None, so far.
} KinetisSPIClass;

// ----------------------------------------------------------------------------

// Instance definitions.
#define KINETIS_SPI_STATE(obj) \
    OBJECT_CHECK(KinetisSPIState, (obj), TYPE_KINETIS_SPI)

typedef struct {
    // private:
    KinetisSPIParentState parent_obj;
    // public:

    const KinetisCapabilities *capabilities;

    // TODO: remove this if the peripheral is always enabled.
    // Points to the bitfield that enables the peripheral.
    Object *enabling_bit;

    // Remove it if there is only one port
    kinetis_spi_index_t port_index;

    union {
      // ----- 8< ----- 8< -----  8< ----- 8< ----- 8< ----- 8< ----- 8< -----

      // DO NOT REMOVE FIELDS! Automatically generated!
      // Merge fields from different family members.
      struct {
        // K6 SPI (Serial Peripheral Interface) registers.
        struct { 
          Object *mcr; // 0 (Module Configuration Register) 
          Object *tcr; // 0x8 (Transfer Count Register) 
          Object *ctar[2]; // 0xC (Clock and Transfer Attributes Register (In Master Mode)) 
          Object *ctar_slave; // 0xC (Clock and Transfer Attributes Register (In Slave Mode)) 
          Object *sr; // 0x2C (Status Register) 
          Object *rser; // 0x30 (DMA/Interrupt Request Select and Enable Register) 
          Object *pushr; // 0x34 (PUSH TX FIFO Register In Master Mode) 
          Object *pushr_slave; // 0x34 (PUSH TX FIFO Register In Slave Mode) 
          Object *popr; // 0x38 (POP RX FIFO Register) 
          Object *txfr[4]; // 0x3C (Transmit FIFO Registers) 
          Object *rxfr[4]; // 0x7C (Receive FIFO Registers) 
        } reg;

        struct { 

          // MCR (Module Configuration Register) bitfields.
          struct { 
            Object *halt; // [0:0] Halt
            Object *smpl_pt; // [8:9] Sample Point
            Object *clr_rxf; // [10:10] No description available
            Object *clr_txf; // [11:11] Clear TX FIFO
            Object *dis_rxf; // [12:12] Disable Receive FIFO
            Object *dis_txf; // [13:13] Disable Transmit FIFO
            Object *mdis; // [14:14] Module Disable
            Object *doze; // [15:15] Doze Enable
            Object *pcsis; // [16:21] Peripheral Chip Select x Inactive State
            Object *rooe; // [24:24] Receive FIFO Overflow Overwrite Enable
            Object *pcsse; // [25:25] Peripheral Chip Select Strobe Enable
            Object *mtfe; // [26:26] Modified Timing Format Enable
            Object *frz; // [27:27] Freeze
            Object *dconf; // [28:29] SPI Configuration.
            Object *cont_scke; // [30:30] Continuous SCK Enable
            Object *mstr; // [31:31] Master/Slave Mode Select
          } mcr; 

          // TCR (Transfer Count Register) bitfields.
          struct { 
            Object *spi_tcnt; // [16:31] SPI Transfer Counter
          } tcr; 

          // CTARn (Clock and Transfer Attributes Register (In Master Mode)) bitfields.
          struct { 
            Object *br; // [0:3] Baud Rate Scaler
            Object *dt; // [4:7] Delay After Transfer Scaler
            Object *asc; // [8:11] After SCK Delay Scaler
            Object *cssck; // [12:15] PCS to SCK Delay Scaler
            Object *pbr; // [16:17] Baud Rate Prescaler
            Object *pdt; // [18:19] Delay after Transfer Prescaler
            Object *pasc; // [20:21] After SCK Delay Prescaler
            Object *pcssck; // [22:23] PCS to SCK Delay Prescaler
            Object *lsbfe; // [24:24] LSB First
            Object *cpha; // [25:25] Clock Phase
            Object *cpol; // [26:26] Clock Polarity
            Object *fmsz; // [27:30] Frame Size
            Object *dbr; // [31:31] Double Baud Rate
          } ctar[2]; 

          // CTAR_SLAVE (Clock and Transfer Attributes Register (In Slave Mode)) bitfields.
          struct { 
            Object *cpha; // [25:25] Clock Phase
            Object *cpol; // [26:26] Clock Polarity
            Object *fmsz; // [27:31] Frame Size
          } ctar_slave; 

          // SR (Status Register) bitfields.
          struct { 
            Object *popnxtptr; // [0:3] Pop Next Pointer
            Object *rxctr; // [4:7] RX FIFO Counter
            Object *txnxtptr; // [8:11] Transmit Next Pointer
            Object *txctr; // [12:15] TX FIFO Counter
            Object *rfdf; // [17:17] Receive FIFO Drain Flag
            Object *rfof; // [19:19] Receive FIFO Overflow Flag
            Object *tfff; // [25:25] Transmit FIFO Fill Flag
            Object *tfuf; // [27:27] Transmit FIFO Underflow Flag
            Object *eoqf; // [28:28] End of Queue Flag
            Object *txrxs; // [30:30] TX and RX Status
            Object *tcf; // [31:31] Transfer Complete Flag
          } sr; 

          // RSER (DMA/Interrupt Request Select and Enable Register) bitfields.
          struct { 
            Object *rfdf_dirs; // [16:16] Receive FIFO Drain DMA or Interrupt Request Select
            Object *rfdf_re; // [17:17] Receive FIFO Drain Request Enable
            Object *rfof_re; // [19:19] Receive FIFO Overflow Request Enable
            Object *tfff_dirs; // [24:24] Transmit FIFO Fill DMA or Interrupt Request Select
            Object *tfff_re; // [25:25] Transmit FIFO Fill Request Enable
            Object *tfuf_re; // [27:27] Transmit FIFO Underflow Request Enable
            Object *eoqf_re; // [28:28] Finished Request Enable
            Object *tcf_re; // [31:31] Transmission Complete Request Enable
          } rser; 

          // PUSHR (PUSH TX FIFO Register In Master Mode) bitfields.
          struct { 
            Object *txdata; // [0:15] Transmit Data
            Object *pcs; // [16:21] No description available
            Object *ctcnt; // [26:26] Clear Transfer Counter
            Object *eoq; // [27:27] End Of Queue
            Object *ctas; // [28:30] Clock and Transfer Attributes Select
            Object *cont; // [31:31] Continuous Peripheral Chip Select Enable
          } pushr; 

          // PUSHR_SLAVE (PUSH TX FIFO Register In Slave Mode) bitfields.
          struct { 
            Object *txdata; // [0:31] Transmit Data
          } pushr_slave; 

          // POPR (POP RX FIFO Register) bitfields.
          struct { 
            Object *rxdata; // [0:31] Received Data
          } popr; 

          // TXFRn (Transmit FIFO Registers) bitfields.
          struct { 
            Object *txdata; // [0:15] Transmit Data
            Object *txcmd_txdata; // [16:31] Transmit Command or Transmit Data
          } txfr[4]; 

          // RXFRn (Receive FIFO Registers) bitfields.
          struct { 
            Object *rxdata; // [0:31] Receive Data
          } rxfr[4]; 
        } fld;
      } k6;

      // ----- 8< ----- 8< -----  8< ----- 8< ----- 8< ----- 8< ----- 8< -----
    } u;

} KinetisSPIState;

// ----------------------------------------------------------------------------

#endif /* KINETIS_SPI_H_ */
