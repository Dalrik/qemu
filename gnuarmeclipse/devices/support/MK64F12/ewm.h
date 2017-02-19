/*
 * Kinetis - EWM (External Watchdog Monitor) emulation.
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

#ifndef KINETIS_EWM_H_
#define KINETIS_EWM_H_

#include "qemu/osdep.h"

#include <hw/cortexm/peripheral.h>
#include <hw/cortexm/kinetis/capabilities.h>

// ----------------------------------------------------------------------------

#define DEVICE_PATH_KINETIS_EWM DEVICE_PATH_KINETIS "EWM"


// ----------------------------------------------------------------------------

#define TYPE_KINETIS_EWM TYPE_KINETIS_PREFIX "ewm" TYPE_PERIPHERAL_SUFFIX

// ----------------------------------------------------------------------------

// Parent definitions.
#define TYPE_KINETIS_EWM_PARENT TYPE_PERIPHERAL
typedef PeripheralClass KinetisEWMParentClass;
typedef PeripheralState KinetisEWMParentState;

// ----------------------------------------------------------------------------

// Class definitions.
#define KINETIS_EWM_GET_CLASS(obj) \
    OBJECT_GET_CLASS(KinetisEWMClass, (obj), TYPE_KINETIS_EWM)
#define KINETIS_EWM_CLASS(klass) \
    OBJECT_CLASS_CHECK(KinetisEWMClass, (klass), TYPE_KINETIS_EWM)

typedef struct {
    // private: 
    KinetisEWMParentClass parent_class;
    // public: 

    // None, so far.
} KinetisEWMClass;

// ----------------------------------------------------------------------------

// Instance definitions.
#define KINETIS_EWM_STATE(obj) \
    OBJECT_CHECK(KinetisEWMState, (obj), TYPE_KINETIS_EWM)

typedef struct {
    // private:
    KinetisEWMParentState parent_obj;
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
        // K6 EWM (External Watchdog Monitor) registers.
        struct { 
          Object *ctrl; // 0 (Control Register) 
          Object *serv; // 0x1 (Service Register) 
          Object *cmpl; // 0x2 (Compare Low Register) 
          Object *cmph; // 0x3 (Compare High Register) 
        } reg;

        struct { 

          // CTRL (Control Register) bitfields.
          struct { 
            Object *ewmen; // [0:0] EWM enable.
            Object *assin; // [1:1] EWM_in's Assertion State Select.
            Object *inen; // [2:2] Input Enable.
            Object *inten; // [3:3] Interrupt Enable.
          } ctrl; 

          // SERV (Service Register) bitfields.
          struct { 
            Object *service; // [0:7] No description available
          } serv; 

          // CMPL (Compare Low Register) bitfields.
          struct { 
            Object *comparel; // [0:7] No description available
          } cmpl; 

          // CMPH (Compare High Register) bitfields.
          struct { 
            Object *compareh; // [0:7] No description available
          } cmph; 
        } fld;
      } k6;

      // ----- 8< ----- 8< -----  8< ----- 8< ----- 8< ----- 8< ----- 8< -----
    } u;

} KinetisEWMState;

// ----------------------------------------------------------------------------

#endif /* KINETIS_EWM_H_ */
