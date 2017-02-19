/*
 * Kinetis - I2C (Inter-Integrated Circuit) emulation.
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

#ifndef KINETIS_I2C_H_
#define KINETIS_I2C_H_

#include "qemu/osdep.h"

#include <hw/cortexm/peripheral.h>
#include <hw/cortexm/kinetis/capabilities.h>

// ----------------------------------------------------------------------------

#define DEVICE_PATH_KINETIS_I2C DEVICE_PATH_KINETIS "I2C"

// ----------------------------------------------------------------------------

// Note: the "port-index" property has type "int".
typedef enum {
    // TODO: keep this list in ascending order.
    KINETIS_PORT_I2C0,
    KINETIS_PORT_I2C1,
    KINETIS_PORT_I2C2,
    KINETIS_PORT_I2C_UNDEFINED = 0xFF,
} kinetis_i2c_index_t;

// ----------------------------------------------------------------------------

#define TYPE_KINETIS_I2C TYPE_KINETIS_PREFIX "i2c" TYPE_PERIPHERAL_SUFFIX

// ----------------------------------------------------------------------------

// Parent definitions.
#define TYPE_KINETIS_I2C_PARENT TYPE_PERIPHERAL
typedef PeripheralClass KinetisI2CParentClass;
typedef PeripheralState KinetisI2CParentState;

// ----------------------------------------------------------------------------

// Class definitions.
#define KINETIS_I2C_GET_CLASS(obj) \
    OBJECT_GET_CLASS(KinetisI2CClass, (obj), TYPE_KINETIS_I2C)
#define KINETIS_I2C_CLASS(klass) \
    OBJECT_CLASS_CHECK(KinetisI2CClass, (klass), TYPE_KINETIS_I2C)

typedef struct {
    // private: 
    KinetisI2CParentClass parent_class;
    // public: 

    // None, so far.
} KinetisI2CClass;

// ----------------------------------------------------------------------------

// Instance definitions.
#define KINETIS_I2C_STATE(obj) \
    OBJECT_CHECK(KinetisI2CState, (obj), TYPE_KINETIS_I2C)

typedef struct {
    // private:
    KinetisI2CParentState parent_obj;
    // public:

    const KinetisCapabilities *capabilities;

    // TODO: remove this if the peripheral is always enabled.
    // Points to the bitfield that enables the peripheral.
    Object *enabling_bit;

    // Remove it if there is only one port
    kinetis_i2c_index_t port_index;

    union {
      // ----- 8< ----- 8< -----  8< ----- 8< ----- 8< ----- 8< ----- 8< -----

      // DO NOT REMOVE FIELDS! Automatically generated!
      // Merge fields from different family members.
      struct {
        // K6 I2C (Inter-Integrated Circuit) registers.
        struct { 
          Object *a1; // 0 (I2C Address Register 1) 
          Object *f; // 0x1 (I2C Frequency Divider register) 
          Object *c1; // 0x2 (I2C Control Register 1) 
          Object *s; // 0x3 (I2C Status register) 
          Object *d; // 0x4 (I2C Data I/O register) 
          Object *c2; // 0x5 (I2C Control Register 2) 
          Object *flt; // 0x6 (I2C Programmable Input Glitch Filter register) 
          Object *ra; // 0x7 (I2C Range Address register) 
          Object *smb; // 0x8 (I2C SMBus Control and Status register) 
          Object *a2; // 0x9 (I2C Address Register 2) 
          Object *slth; // 0xA (I2C SCL Low Timeout Register High) 
          Object *sltl; // 0xB (I2C SCL Low Timeout Register Low) 
        } reg;

        struct { 

          // A1 (I2C Address Register 1) bitfields.
          struct { 
            Object *ad; // [1:7] Address
          } a1; 

          // F (I2C Frequency Divider register) bitfields.
          struct { 
            Object *icr; // [0:5] ClockRate
            Object *mult; // [6:7] Multiplier Factor
          } f; 

          // C1 (I2C Control Register 1) bitfields.
          struct { 
            Object *dmaen; // [0:0] DMA Enable
            Object *wuen; // [1:1] Wakeup Enable
            Object *rsta; // [2:2] Repeat START
            Object *txak; // [3:3] Transmit Acknowledge Enable
            Object *tx; // [4:4] Transmit Mode Select
            Object *mst; // [5:5] Master Mode Select
            Object *iicie; // [6:6] I2C Interrupt Enable
            Object *iicen; // [7:7] I2C Enable
          } c1; 

          // S (I2C Status register) bitfields.
          struct { 
            Object *rxak; // [0:0] Receive Acknowledge
            Object *iicif; // [1:1] Interrupt Flag
            Object *srw; // [2:2] Slave Read/Write
            Object *ram; // [3:3] Range Address Match
            Object *arbl; // [4:4] Arbitration Lost
            Object *busy; // [5:5] Bus Busy
            Object *iaas; // [6:6] Addressed As A Slave
            Object *tcf; // [7:7] Transfer Complete Flag
          } s; 

          // D (I2C Data I/O register) bitfields.
          struct { 
            Object *data; // [0:7] Data
          } d; 

          // C2 (I2C Control Register 2) bitfields.
          struct { 
            Object *ad; // [0:2] Slave Address
            Object *rmen; // [3:3] Range Address Matching Enable
            Object *sbrc; // [4:4] Slave Baud Rate Control
            Object *hdrs; // [5:5] High Drive Select
            Object *adext; // [6:6] Address Extension
            Object *gcaen; // [7:7] General Call Address Enable
          } c2; 

          // FLT (I2C Programmable Input Glitch Filter register) bitfields.
          struct { 
            Object *flt; // [0:3] I2C Programmable Filter Factor
            Object *startf; // [4:4] I2C Bus Start Detect Flag
            Object *ssie; // [5:5] I2C Bus Stop or Start Interrupt Enable
            Object *stopf; // [6:6] I2C Bus Stop Detect Flag
            Object *shen; // [7:7] Stop Hold Enable
          } flt; 

          // RA (I2C Range Address register) bitfields.
          struct { 
            Object *rad; // [1:7] Range Slave Address
          } ra; 

          // SMB (I2C SMBus Control and Status register) bitfields.
          struct { 
            Object *shtf2ie; // [0:0] SHTF2 Interrupt Enable
            Object *shtf2; // [1:1] SCL High Timeout Flag 2
            Object *shtf1; // [2:2] SCL High Timeout Flag 1
            Object *sltf; // [3:3] SCL Low Timeout Flag
            Object *tcksel; // [4:4] Timeout Counter Clock Select
            Object *siicaen; // [5:5] Second I2C Address Enable
            Object *alerten; // [6:6] SMBus Alert Response Address Enable
            Object *fack; // [7:7] Fast NACK/ACK Enable
          } smb; 

          // A2 (I2C Address Register 2) bitfields.
          struct { 
            Object *sad; // [1:7] SMBus Address
          } a2; 

          // SLTH (I2C SCL Low Timeout Register High) bitfields.
          struct { 
            Object *sslt; // [0:7] No description available
          } slth; 

          // SLTL (I2C SCL Low Timeout Register Low) bitfields.
          struct { 
            Object *sslt; // [0:7] No description available
          } sltl; 
        } fld;
      } k6;

      // ----- 8< ----- 8< -----  8< ----- 8< ----- 8< ----- 8< ----- 8< -----
    } u;

} KinetisI2CState;

// ----------------------------------------------------------------------------

#endif /* KINETIS_I2C_H_ */
