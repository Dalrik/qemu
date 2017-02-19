/*
 * Kinetis - CMP (High-Speed Comparator (CMP), Voltage Reference (VREF) Digital-to-Analog Converter (DAC), and Analog Mux (ANMUX)) emulation.
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

#ifndef KINETIS_CMP_H_
#define KINETIS_CMP_H_

#include "qemu/osdep.h"

#include <hw/cortexm/peripheral.h>
#include <hw/cortexm/kinetis/capabilities.h>

// ----------------------------------------------------------------------------

#define DEVICE_PATH_KINETIS_CMP DEVICE_PATH_KINETIS "CMP"

// ----------------------------------------------------------------------------

// Note: the "port-index" property has type "int".
typedef enum {
    // TODO: keep this list in ascending order.
    KINETIS_PORT_CMP0,
    KINETIS_PORT_CMP1,
    KINETIS_PORT_CMP2,
    KINETIS_PORT_CMP_UNDEFINED = 0xFF,
} kinetis_cmp_index_t;

// ----------------------------------------------------------------------------

#define TYPE_KINETIS_CMP TYPE_KINETIS_PREFIX "cmp" TYPE_PERIPHERAL_SUFFIX

// ----------------------------------------------------------------------------

// Parent definitions.
#define TYPE_KINETIS_CMP_PARENT TYPE_PERIPHERAL
typedef PeripheralClass KinetisCMPParentClass;
typedef PeripheralState KinetisCMPParentState;

// ----------------------------------------------------------------------------

// Class definitions.
#define KINETIS_CMP_GET_CLASS(obj) \
    OBJECT_GET_CLASS(KinetisCMPClass, (obj), TYPE_KINETIS_CMP)
#define KINETIS_CMP_CLASS(klass) \
    OBJECT_CLASS_CHECK(KinetisCMPClass, (klass), TYPE_KINETIS_CMP)

typedef struct {
    // private: 
    KinetisCMPParentClass parent_class;
    // public: 

    // None, so far.
} KinetisCMPClass;

// ----------------------------------------------------------------------------

// Instance definitions.
#define KINETIS_CMP_STATE(obj) \
    OBJECT_CHECK(KinetisCMPState, (obj), TYPE_KINETIS_CMP)

typedef struct {
    // private:
    KinetisCMPParentState parent_obj;
    // public:

    const KinetisCapabilities *capabilities;

    // TODO: remove this if the peripheral is always enabled.
    // Points to the bitfield that enables the peripheral.
    Object *enabling_bit;

    // Remove it if there is only one port
    kinetis_cmp_index_t port_index;

    union {
      // ----- 8< ----- 8< -----  8< ----- 8< ----- 8< ----- 8< ----- 8< -----

      // DO NOT REMOVE FIELDS! Automatically generated!
      // Merge fields from different family members.
      struct {
        // K6 CMP (High-Speed Comparator (CMP), Voltage Reference (VREF) Digital-to-Analog Converter (DAC), and Analog Mux (ANMUX)) registers.
        struct { 
          Object *cr0; // 0 (CMP Control Register 0) 
          Object *cr1; // 0x1 (CMP Control Register 1) 
          Object *fpr; // 0x2 (CMP Filter Period Register) 
          Object *scr; // 0x3 (CMP Status and Control Register) 
          Object *daccr; // 0x4 (DAC Control Register) 
          Object *muxcr; // 0x5 (MUX Control Register) 
        } reg;

        struct { 

          // CR0 (CMP Control Register 0) bitfields.
          struct { 
            Object *hystctr; // [0:1] Comparator hard block hysteresis control
            Object *filter_cnt; // [4:6] Filter Sample Count
          } cr0; 

          // CR1 (CMP Control Register 1) bitfields.
          struct { 
            Object *en; // [0:0] Comparator Module Enable
            Object *ope; // [1:1] Comparator Output Pin Enable
            Object *cos; // [2:2] Comparator Output Select
            Object *inv; // [3:3] Comparator INVERT
            Object *pmode; // [4:4] Power Mode Select
            Object *we; // [6:6] Windowing Enable
            Object *se; // [7:7] Sample Enable
          } cr1; 

          // FPR (CMP Filter Period Register) bitfields.
          struct { 
            Object *filt_per; // [0:7] Filter Sample Period
          } fpr; 

          // SCR (CMP Status and Control Register) bitfields.
          struct { 
            Object *cout; // [0:0] Analog Comparator Output
            Object *cff; // [1:1] Analog Comparator Flag Falling
            Object *cfr; // [2:2] Analog Comparator Flag Rising
            Object *ief; // [3:3] Comparator Interrupt Enable Falling
            Object *ier; // [4:4] Comparator Interrupt Enable Rising
            Object *dmaen; // [6:6] DMA Enable Control
          } scr; 

          // DACCR (DAC Control Register) bitfields.
          struct { 
            Object *vosel; // [0:5] DAC Output Voltage Select
            Object *vrsel; // [6:6] Supply Voltage Reference Source Select
            Object *dacen; // [7:7] DAC Enable
          } daccr; 

          // MUXCR (MUX Control Register) bitfields.
          struct { 
            Object *msel; // [0:2] Minus Input Mux Control
            Object *psel; // [3:5] Plus Input Mux Control
            Object *pstm; // [7:7] Pass Through Mode Enable
          } muxcr; 
        } fld;
      } k6;

      // ----- 8< ----- 8< -----  8< ----- 8< ----- 8< ----- 8< ----- 8< -----
    } u;

} KinetisCMPState;

// ----------------------------------------------------------------------------

#endif /* KINETIS_CMP_H_ */
