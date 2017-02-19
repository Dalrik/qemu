/*
 * Kinetis - DAC (12-Bit Digital-to-Analog Converter) emulation.
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

#ifndef KINETIS_DAC_H_
#define KINETIS_DAC_H_

#include "qemu/osdep.h"

#include <hw/cortexm/peripheral.h>
#include <hw/cortexm/kinetis/capabilities.h>

// ----------------------------------------------------------------------------

#define DEVICE_PATH_KINETIS_DAC DEVICE_PATH_KINETIS "DAC"

// ----------------------------------------------------------------------------

// Note: the "port-index" property has type "int".
typedef enum {
    // TODO: keep this list in ascending order.
    KINETIS_PORT_DAC0,
    KINETIS_PORT_DAC1,
    KINETIS_PORT_DAC_UNDEFINED = 0xFF,
} kinetis_dac_index_t;

// ----------------------------------------------------------------------------

#define TYPE_KINETIS_DAC TYPE_KINETIS_PREFIX "dac" TYPE_PERIPHERAL_SUFFIX

// ----------------------------------------------------------------------------

// Parent definitions.
#define TYPE_KINETIS_DAC_PARENT TYPE_PERIPHERAL
typedef PeripheralClass KinetisDACParentClass;
typedef PeripheralState KinetisDACParentState;

// ----------------------------------------------------------------------------

// Class definitions.
#define KINETIS_DAC_GET_CLASS(obj) \
    OBJECT_GET_CLASS(KinetisDACClass, (obj), TYPE_KINETIS_DAC)
#define KINETIS_DAC_CLASS(klass) \
    OBJECT_CLASS_CHECK(KinetisDACClass, (klass), TYPE_KINETIS_DAC)

typedef struct {
    // private: 
    KinetisDACParentClass parent_class;
    // public: 

    // None, so far.
} KinetisDACClass;

// ----------------------------------------------------------------------------

// Instance definitions.
#define KINETIS_DAC_STATE(obj) \
    OBJECT_CHECK(KinetisDACState, (obj), TYPE_KINETIS_DAC)

typedef struct {
    // private:
    KinetisDACParentState parent_obj;
    // public:

    const KinetisCapabilities *capabilities;

    // TODO: remove this if the peripheral is always enabled.
    // Points to the bitfield that enables the peripheral.
    Object *enabling_bit;

    // Remove it if there is only one port
    kinetis_dac_index_t port_index;

    union {
      // ----- 8< ----- 8< -----  8< ----- 8< ----- 8< ----- 8< ----- 8< -----

      // DO NOT REMOVE FIELDS! Automatically generated!
      // Merge fields from different family members.
      struct {
        // K6 DAC (12-Bit Digital-to-Analog Converter) registers.
        struct { 
          Object *datl[16]; // 0 (DAC Data Low Register) 
          Object *dath[16]; // 0x1 (DAC Data High Register) 
          Object *sr; // 0x20 (DAC Status Register) 
          Object *c0; // 0x21 (DAC Control Register) 
          Object *c1; // 0x22 (DAC Control Register 1) 
          Object *c2; // 0x23 (DAC Control Register 2) 
        } reg;

        struct { 

          // DATnL (DAC Data Low Register) bitfields.
          struct { 
            Object *data0; // [0:7] No description available
          } datl[16]; 

          // DATnH (DAC Data High Register) bitfields.
          struct { 
            Object *data1; // [0:3] No description available
          } dath[16]; 

          // SR (DAC Status Register) bitfields.
          struct { 
            Object *dacbfrpbf; // [0:0] DAC Buffer Read Pointer Bottom Position Flag
            Object *dacbfrptf; // [1:1] DAC Buffer Read Pointer Top Position Flag
            Object *dacbfwmf; // [2:2] DAC Buffer Watermark Flag
          } sr; 

          // C0 (DAC Control Register) bitfields.
          struct { 
            Object *dacbbien; // [0:0] DAC Buffer Read Pointer Bottom Flag Interrupt Enable
            Object *dacbtien; // [1:1] DAC Buffer Read Pointer Top Flag Interrupt Enable
            Object *dacbwien; // [2:2] DAC Buffer Watermark Interrupt Enable
            Object *lpen; // [3:3] DAC Low Power Control
            Object *dacswtrg; // [4:4] DAC Software Trigger
            Object *dactrgsel; // [5:5] DAC Trigger Select
            Object *dacrfs; // [6:6] DAC Reference Select
            Object *dacen; // [7:7] DAC Enable
          } c0; 

          // C1 (DAC Control Register 1) bitfields.
          struct { 
            Object *dacbfen; // [0:0] DAC Buffer Enable
            Object *dacbfmd; // [1:2] DAC Buffer Work Mode Select
            Object *dacbfwm; // [3:4] DAC Buffer Watermark Select
            Object *dmaen; // [7:7] DMA Enable Select
          } c1; 

          // C2 (DAC Control Register 2) bitfields.
          struct { 
            Object *dacbfup; // [0:3] DAC Buffer Upper Limit
            Object *dacbfrp; // [4:7] DAC Buffer Read Pointer
          } c2; 
        } fld;
      } k6;

      // ----- 8< ----- 8< -----  8< ----- 8< ----- 8< ----- 8< ----- 8< -----
    } u;

} KinetisDACState;

// ----------------------------------------------------------------------------

#endif /* KINETIS_DAC_H_ */
