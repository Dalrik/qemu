/*
 * Kinetis - PORT (Pin Control and Interrupts) emulation.
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

#ifndef KINETIS_PORT_H_
#define KINETIS_PORT_H_

#include "qemu/osdep.h"

#include <hw/cortexm/peripheral.h>
#include <hw/cortexm/kinetis/capabilities.h>

// ----------------------------------------------------------------------------

#define DEVICE_PATH_KINETIS_PORT DEVICE_PATH_KINETIS "PORT"

// ----------------------------------------------------------------------------

// Note: the "port-index" property has type "int".
typedef enum {
    // TODO: keep this list in ascending order.
    KINETIS_PORT_PORTA,
    KINETIS_PORT_PORTB,
    KINETIS_PORT_PORTC,
    KINETIS_PORT_PORTD,
    KINETIS_PORT_PORTE,
    KINETIS_PORT_PORT_UNDEFINED = 5,
} kinetis_port_index_t;

// ----------------------------------------------------------------------------

#define TYPE_KINETIS_PORT TYPE_KINETIS_PREFIX "port" TYPE_PERIPHERAL_SUFFIX

// ----------------------------------------------------------------------------

// Parent definitions.
#define TYPE_KINETIS_PORT_PARENT TYPE_PERIPHERAL
typedef PeripheralClass KinetisPORTParentClass;
typedef PeripheralState KinetisPORTParentState;

// ----------------------------------------------------------------------------

// Class definitions.
#define KINETIS_PORT_GET_CLASS(obj) \
    OBJECT_GET_CLASS(KinetisPORTClass, (obj), TYPE_KINETIS_PORT)
#define KINETIS_PORT_CLASS(klass) \
    OBJECT_CLASS_CHECK(KinetisPORTClass, (klass), TYPE_KINETIS_PORT)

typedef struct {
    // private: 
    KinetisPORTParentClass parent_class;
    // public: 

    // None, so far.
} KinetisPORTClass;

// ----------------------------------------------------------------------------

// Instance definitions.
#define KINETIS_PORT_STATE(obj) \
    OBJECT_CHECK(KinetisPORTState, (obj), TYPE_KINETIS_PORT)

typedef struct {
    // private:
    KinetisPORTParentState parent_obj;
    // public:

    const KinetisCapabilities *capabilities;

    // Points to the bitfield that enables the peripheral.
    Object *enabling_bit;

    // Remove it if there is only one port
    kinetis_port_index_t port_index;

    union {
      // ----- 8< ----- 8< -----  8< ----- 8< ----- 8< ----- 8< ----- 8< -----

      // DO NOT REMOVE FIELDS! Automatically generated!
      // Merge fields from different family members.
      struct {
        // K6 PORT (Pin Control and Interrupts) registers.
        struct { 
          Object *pcr[32]; // 0 (Pin Control Register n) 
          Object *gpclr; // 0x80 (Global Pin Control Low Register) 
          Object *gpchr; // 0x84 (Global Pin Control High Register) 
          Object *isfr; // 0xA0 (Interrupt Status Flag Register) 
        } reg;

        struct { 

          // PCRn (Pin Control Register n) bitfields.
          struct { 
            Object *ps; // [0:0] Pull Select
            Object *pe; // [1:1] Pull Enable
            Object *sre; // [2:2] Slew Rate Enable
            Object *pfe; // [4:4] Passive Filter Enable
            Object *ode; // [5:5] Open Drain Enable
            Object *dse; // [6:6] Drive Strength Enable
            Object *mux; // [8:10] Pin Mux Control
            Object *lk; // [15:15] Lock Register
            Object *irqc; // [16:19] Interrupt Configuration
            Object *isf; // [24:24] Interrupt Status Flag
          } pcr[32]; 

          // GPCLR (Global Pin Control Low Register) bitfields.
          struct { 
            Object *gpwd; // [0:15] Global Pin Write Data
            Object *gpwe; // [16:31] Global Pin Write Enable
          } gpclr; 

          // GPCHR (Global Pin Control High Register) bitfields.
          struct { 
            Object *gpwd; // [0:15] Global Pin Write Data
            Object *gpwe; // [16:31] Global Pin Write Enable
          } gpchr; 

          // ISFR (Interrupt Status Flag Register) bitfields.
          struct { 
            Object *isf; // [0:31] Interrupt Status Flag
          } isfr; 
        } fld;
      } k6;

      // ----- 8< ----- 8< -----  8< ----- 8< ----- 8< ----- 8< ----- 8< -----
    } u;

} KinetisPORTState;

// ----------------------------------------------------------------------------

Object* kinetis_port_create(Object *parent, kinetis_port_index_t index);

#endif /* KINETIS_PORT_H_ */
