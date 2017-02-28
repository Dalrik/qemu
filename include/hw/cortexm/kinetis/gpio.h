/*
 * Kinetis - GPIO (General Purpose Input/Output) emulation.
 *
 * Copyright (c) 2017 Ian Thompson.
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

#ifndef KINETIS_GPIO_H_
#define KINETIS_GPIO_H_

#include "qemu/osdep.h"

#include <hw/cortexm/peripheral.h>
#include <hw/cortexm/kinetis/capabilities.h>
#include <hw/cortexm/kinetis/port.h>

// ----------------------------------------------------------------------------

#define DEVICE_PATH_KINETIS_GPIO DEVICE_PATH_KINETIS "GPIO"

// ----------------------------------------------------------------------------

// Note: the "port-index" property has type "int".
typedef enum {
    // TODO: keep this list in ascending order.
    KINETIS_PORT_GPIOA,
    KINETIS_PORT_GPIOB,
    KINETIS_PORT_GPIOC,
    KINETIS_PORT_GPIOD,
    KINETIS_PORT_GPIOE,
    KINETIS_PORT_GPIO_UNDEFINED = 5,
} kinetis_gpio_index_t;

// ----------------------------------------------------------------------------

#define TYPE_KINETIS_GPIO TYPE_KINETIS_PREFIX "gpio" TYPE_PERIPHERAL_SUFFIX

// ----------------------------------------------------------------------------

// Parent definitions.
#define TYPE_KINETIS_GPIO_PARENT TYPE_PERIPHERAL
typedef PeripheralClass KinetisGPIOParentClass;
typedef PeripheralState KinetisGPIOParentState;

// ----------------------------------------------------------------------------

// Class definitions.
#define KINETIS_GPIO_GET_CLASS(obj) \
    OBJECT_GET_CLASS(KinetisGPIOClass, (obj), TYPE_KINETIS_GPIO)
#define KINETIS_GPIO_CLASS(klass) \
    OBJECT_CLASS_CHECK(KinetisGPIOClass, (klass), TYPE_KINETIS_GPIO)

typedef struct {
    // private: 
    KinetisGPIOParentClass parent_class;
    // public: 

    // None, so far.
} KinetisGPIOClass;

// ----------------------------------------------------------------------------

// Instance definitions.
#define KINETIS_GPIO_STATE(obj) \
    OBJECT_CHECK(KinetisGPIOState, (obj), TYPE_KINETIS_GPIO)

typedef struct {
    // private:
    KinetisGPIOParentState parent_obj;
    // public:

    const KinetisCapabilities *capabilities;

    // Remove it if there is only one port
    kinetis_gpio_index_t port_index;

    KinetisPORTState *port;

    union {
      // ----- 8< ----- 8< -----  8< ----- 8< ----- 8< ----- 8< ----- 8< -----

      // DO NOT REMOVE FIELDS! Automatically generated!
      // Merge fields from different family members.
      struct {
        // K6 GPIO (General Purpose Input/Output) registers.
        struct { 
          Object *pdor; // 0 (Port Data Output Register) 
          Object *psor; // 0x4 (Port Set Output Register) 
          Object *pcor; // 0x8 (Port Clear Output Register) 
          Object *ptor; // 0xC (Port Toggle Output Register) 
          Object *pdir; // 0x10 (Port Data Input Register) 
          Object *pddr; // 0x14 (Port Data Direction Register) 
        } reg;

        struct { 

          // PDOR (Port Data Output Register) bitfields.
          struct { 
            Object *pdo; // [0:31] Port Data Output
          } pdor; 

          // PSOR (Port Set Output Register) bitfields.
          struct { 
            Object *ptso; // [0:31] Port Set Output
          } psor; 

          // PCOR (Port Clear Output Register) bitfields.
          struct { 
            Object *ptco; // [0:31] Port Clear Output
          } pcor; 

          // PTOR (Port Toggle Output Register) bitfields.
          struct { 
            Object *ptto; // [0:31] Port Toggle Output
          } ptor; 

          // PDIR (Port Data Input Register) bitfields.
          struct { 
            Object *pdi; // [0:31] Port Data Input
          } pdir; 

          // PDDR (Port Data Direction Register) bitfields.
          struct { 
            Object *pdd; // [0:31] Port Data Direction
          } pddr; 
        } fld;
      } k6;

      // ----- 8< ----- 8< -----  8< ----- 8< ----- 8< ----- 8< ----- 8< -----
    } u;

} KinetisGPIOState;

// ----------------------------------------------------------------------------

Object* kinetis_gpio_create(Object *parent, kinetis_gpio_index_t index);

#endif /* KINETIS_GPIO_H_ */
