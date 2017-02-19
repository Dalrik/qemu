/*
 * Kinetis - UART (Serial Communication Interface) emulation.
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

#ifndef KINETIS_UART_H_
#define KINETIS_UART_H_

#include "qemu/osdep.h"

#include <hw/cortexm/peripheral.h>
#include <hw/cortexm/kinetis/capabilities.h>

// ----------------------------------------------------------------------------

#define DEVICE_PATH_KINETIS_UART DEVICE_PATH_KINETIS "UART"

// ----------------------------------------------------------------------------

// Note: the "port-index" property has type "int".
typedef enum {
    // TODO: keep this list in ascending order.
    KINETIS_PORT_UART0,
    KINETIS_PORT_UART1,
    KINETIS_PORT_UART2,
    KINETIS_PORT_UART3,
    KINETIS_PORT_UART4,
    KINETIS_PORT_UART5,
    KINETIS_PORT_UART_UNDEFINED = 0xFF,
} kinetis_uart_index_t;

// ----------------------------------------------------------------------------

#define TYPE_KINETIS_UART TYPE_KINETIS_PREFIX "uart" TYPE_PERIPHERAL_SUFFIX

// ----------------------------------------------------------------------------

// Parent definitions.
#define TYPE_KINETIS_UART_PARENT TYPE_PERIPHERAL
typedef PeripheralClass KinetisUARTParentClass;
typedef PeripheralState KinetisUARTParentState;

// ----------------------------------------------------------------------------

// Class definitions.
#define KINETIS_UART_GET_CLASS(obj) \
    OBJECT_GET_CLASS(KinetisUARTClass, (obj), TYPE_KINETIS_UART)
#define KINETIS_UART_CLASS(klass) \
    OBJECT_CLASS_CHECK(KinetisUARTClass, (klass), TYPE_KINETIS_UART)

typedef struct {
    // private: 
    KinetisUARTParentClass parent_class;
    // public: 

    // None, so far.
} KinetisUARTClass;

// ----------------------------------------------------------------------------

// Instance definitions.
#define KINETIS_UART_STATE(obj) \
    OBJECT_CHECK(KinetisUARTState, (obj), TYPE_KINETIS_UART)

typedef struct {
    // private:
    KinetisUARTParentState parent_obj;
    // public:

    const KinetisCapabilities *capabilities;

    // TODO: remove this if the peripheral is always enabled.
    // Points to the bitfield that enables the peripheral.
    Object *enabling_bit;

    // Remove it if there is only one port
    kinetis_uart_index_t port_index;

    union {
      // ----- 8< ----- 8< -----  8< ----- 8< ----- 8< ----- 8< ----- 8< -----

      // DO NOT REMOVE FIELDS! Automatically generated!
      // Merge fields from different family members.
      struct {
        // K6 UART (Serial Communication Interface) registers.
        struct { 
          Object *bdh; // 0 (UART Baud Rate Registers: High) 
          Object *bdl; // 0x1 (UART Baud Rate Registers: Low) 
          Object *c1; // 0x2 (UART Control Register 1) 
          Object *c2; // 0x3 (UART Control Register 2) 
          Object *s1; // 0x4 (UART Status Register 1) 
          Object *s2; // 0x5 (UART Status Register 2) 
          Object *c3; // 0x6 (UART Control Register 3) 
          Object *d; // 0x7 (UART Data Register) 
          Object *ma1; // 0x8 (UART Match Address Registers 1) 
          Object *ma2; // 0x9 (UART Match Address Registers 2) 
          Object *c4; // 0xA (UART Control Register 4) 
          Object *c5; // 0xB (UART Control Register 5) 
          Object *ed; // 0xC (UART Extended Data Register) 
          Object *modem; // 0xD (UART Modem Register) 
          Object *ir; // 0xE (UART Infrared Register) 
          Object *pfifo; // 0x10 (UART FIFO Parameters) 
          Object *cfifo; // 0x11 (UART FIFO Control Register) 
          Object *sfifo; // 0x12 (UART FIFO Status Register) 
          Object *twfifo; // 0x13 (UART FIFO Transmit Watermark) 
          Object *tcfifo; // 0x14 (UART FIFO Transmit Count) 
          Object *rwfifo; // 0x15 (UART FIFO Receive Watermark) 
          Object *rcfifo; // 0x16 (UART FIFO Receive Count) 
        } reg;

        struct { 

          // BDH (UART Baud Rate Registers: High) bitfields.
          struct { 
            Object *sbr; // [0:4] UART Baud Rate Bits
            Object *sbns; // [5:5] Stop Bit Number Select
            Object *rxedgie; // [6:6] RxD Input Active Edge Interrupt Enable
            Object *lbkdie; // [7:7] LIN Break Detect Interrupt or DMA Request Enable
          } bdh; 

          // BDL (UART Baud Rate Registers: Low) bitfields.
          struct { 
            Object *sbr; // [0:7] UART Baud Rate Bits
          } bdl; 

          // C1 (UART Control Register 1) bitfields.
          struct { 
            Object *pt; // [0:0] Parity Type
            Object *pe; // [1:1] Parity Enable
            Object *ilt; // [2:2] Idle Line Type Select
            Object *wake; // [3:3] Receiver Wakeup Method Select
            Object *m; // [4:4] 9-bit or 8-bit Mode Select
            Object *rsrc; // [5:5] Receiver Source Select
            Object *uartswai; // [6:6] UART Stops in Wait Mode
            Object *loops; // [7:7] Loop Mode Select
          } c1; 

          // C2 (UART Control Register 2) bitfields.
          struct { 
            Object *sbk; // [0:0] Send Break
            Object *rwu; // [1:1] Receiver Wakeup Control
            Object *re; // [2:2] Receiver Enable
            Object *te; // [3:3] Transmitter Enable
            Object *ilie; // [4:4] Idle Line Interrupt DMA Transfer Enable
            Object *rie; // [5:5] Receiver Full Interrupt or DMA Transfer Enable
            Object *tcie; // [6:6] Transmission Complete Interrupt or DMA Transfer Enable
            Object *tie; // [7:7] Transmitter Interrupt or DMA Transfer Enable.
          } c2; 

          // S1 (UART Status Register 1) bitfields.
          struct { 
            Object *pf; // [0:0] Parity Error Flag
            Object *fe; // [1:1] Framing Error Flag
            Object *nf; // [2:2] Noise Flag
            Object *or_; // [3:3] Receiver Overrun Flag
            Object *idle; // [4:4] Idle Line Flag
            Object *rdrf; // [5:5] Receive Data Register Full Flag
            Object *tc; // [6:6] Transmit Complete Flag
            Object *tdre; // [7:7] Transmit Data Register Empty Flag
          } s1; 

          // S2 (UART Status Register 2) bitfields.
          struct { 
            Object *raf; // [0:0] Receiver Active Flag
            Object *lbkde; // [1:1] LIN Break Detection Enable
            Object *brk13; // [2:2] Break Transmit Character Length
            Object *rwuid; // [3:3] Receive Wakeup Idle Detect
            Object *rxinv; // [4:4] Receive Data Inversion
            Object *msbf; // [5:5] Most Significant Bit First
            Object *rxedgif; // [6:6] RxD Pin Active Edge Interrupt Flag
            Object *lbkdif; // [7:7] LIN Break Detect Interrupt Flag
          } s2; 

          // C3 (UART Control Register 3) bitfields.
          struct { 
            Object *peie; // [0:0] Parity Error Interrupt Enable
            Object *feie; // [1:1] Framing Error Interrupt Enable
            Object *neie; // [2:2] Noise Error Interrupt Enable
            Object *orie; // [3:3] Overrun Error Interrupt Enable
            Object *txinv; // [4:4] Transmit Data Inversion.
            Object *txdir; // [5:5] Transmitter Pin Data Direction in Single-Wire mode
            Object *t8; // [6:6] Transmit Bit 8
            Object *r8; // [7:7] Received Bit 8
          } c3; 

          // D (UART Data Register) bitfields.
          struct { 
            Object *rt; // [0:7] No description available
          } d; 

          // MA1 (UART Match Address Registers 1) bitfields.
          struct { 
            Object *ma; // [0:7] Match Address
          } ma1; 

          // MA2 (UART Match Address Registers 2) bitfields.
          struct { 
            Object *ma; // [0:7] Match Address
          } ma2; 

          // C4 (UART Control Register 4) bitfields.
          struct { 
            Object *brfa; // [0:4] Baud Rate Fine Adjust
            Object *m10; // [5:5] 10-bit Mode select
            Object *maen2; // [6:6] Match Address Mode Enable 2
            Object *maen1; // [7:7] Match Address Mode Enable 1
          } c4; 

          // C5 (UART Control Register 5) bitfields.
          struct { 
            Object *lbkddmas; // [3:3] LIN Break Detect DMA Select Bit
            Object *ildmas; // [4:4] Idle Line DMA Select
            Object *rdmas; // [5:5] Receiver Full DMA Select
            Object *tcdmas; // [6:6] Transmission Complete DMA Select
            Object *tdmas; // [7:7] Transmitter DMA Select
          } c5; 

          // ED (UART Extended Data Register) bitfields.
          struct { 
            Object *paritye; // [6:6] No description available
            Object *noisy; // [7:7] No description available
          } ed; 

          // MODEM (UART Modem Register) bitfields.
          struct { 
            Object *txctse; // [0:0] Transmitter clear-to-send enable
            Object *txrtse; // [1:1] Transmitter request-to-send enable
            Object *txrtspol; // [2:2] Transmitter request-to-send polarity
            Object *rxrtse; // [3:3] Receiver request-to-send enable
          } modem; 

          // IR (UART Infrared Register) bitfields.
          struct { 
            Object *tnp; // [0:1] Transmitter narrow pulse
            Object *iren; // [2:2] Infrared enable
          } ir; 

          // PFIFO (UART FIFO Parameters) bitfields.
          struct { 
            Object *rxfifosize; // [0:2] Receive FIFO. Buffer Depth
            Object *rxfe; // [3:3] Receive FIFO Enable
            Object *txfifosize; // [4:6] Transmit FIFO. Buffer Depth
            Object *txfe; // [7:7] Transmit FIFO Enable
          } pfifo; 

          // CFIFO (UART FIFO Control Register) bitfields.
          struct { 
            Object *rxufe; // [0:0] Receive FIFO Underflow Interrupt Enable
            Object *txofe; // [1:1] Transmit FIFO Overflow Interrupt Enable
            Object *rxofe; // [2:2] Receive FIFO Overflow Interrupt Enable
            Object *rxflush; // [6:6] Receive FIFO/Buffer Flush
            Object *txflush; // [7:7] Transmit FIFO/Buffer Flush
          } cfifo; 

          // SFIFO (UART FIFO Status Register) bitfields.
          struct { 
            Object *rxuf; // [0:0] Receiver Buffer Underflow Flag
            Object *txof; // [1:1] Transmitter Buffer Overflow Flag
            Object *rxof; // [2:2] Receiver Buffer Overflow Flag
            Object *rxempt; // [6:6] Receive Buffer/FIFO Empty
            Object *txempt; // [7:7] Transmit Buffer/FIFO Empty
          } sfifo; 

          // TWFIFO (UART FIFO Transmit Watermark) bitfields.
          struct { 
            Object *txwater; // [0:7] Transmit Watermark
          } twfifo; 

          // TCFIFO (UART FIFO Transmit Count) bitfields.
          struct { 
            Object *txcount; // [0:7] Transmit Counter
          } tcfifo; 

          // RWFIFO (UART FIFO Receive Watermark) bitfields.
          struct { 
            Object *rxwater; // [0:7] Receive Watermark
          } rwfifo; 

          // RCFIFO (UART FIFO Receive Count) bitfields.
          struct { 
            Object *rxcount; // [0:7] Receive Counter
          } rcfifo; 
        } fld;
      } k6;

      // ----- 8< ----- 8< -----  8< ----- 8< ----- 8< ----- 8< ----- 8< -----
    } u;

} KinetisUARTState;

// ----------------------------------------------------------------------------

#endif /* KINETIS_UART_H_ */
