/*
 * Kinetis - LPTMR (Low Power Timer) emulation.
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

#ifndef KINETIS_LPTMR_H_
#define KINETIS_LPTMR_H_

#include "qemu/osdep.h"

#include <hw/cortexm/peripheral.h>
#include <hw/cortexm/kinetis/capabilities.h>

// ----------------------------------------------------------------------------

#define DEVICE_PATH_KINETIS_LPTMR DEVICE_PATH_KINETIS "LPTMR"

// ----------------------------------------------------------------------------

// Note: the "port-index" property has type "int".
typedef enum {
    // TODO: keep this list in ascending order.
    KINETIS_PORT_LPTMR0,
    KINETIS_PORT_LPTMR_UNDEFINED = 0xFF,
} kinetis_lptmr_index_t;

// ----------------------------------------------------------------------------

#define TYPE_KINETIS_LPTMR TYPE_KINETIS_PREFIX "lptmr" TYPE_PERIPHERAL_SUFFIX

// ----------------------------------------------------------------------------

// Parent definitions.
#define TYPE_KINETIS_LPTMR_PARENT TYPE_PERIPHERAL
typedef PeripheralClass KinetisLPTMRParentClass;
typedef PeripheralState KinetisLPTMRParentState;

// ----------------------------------------------------------------------------

// Class definitions.
#define KINETIS_LPTMR_GET_CLASS(obj) \
    OBJECT_GET_CLASS(KinetisLPTMRClass, (obj), TYPE_KINETIS_LPTMR)
#define KINETIS_LPTMR_CLASS(klass) \
    OBJECT_CLASS_CHECK(KinetisLPTMRClass, (klass), TYPE_KINETIS_LPTMR)

typedef struct {
    // private: 
    KinetisLPTMRParentClass parent_class;
    // public: 

    // None, so far.
} KinetisLPTMRClass;

// ----------------------------------------------------------------------------

// Instance definitions.
#define KINETIS_LPTMR_STATE(obj) \
    OBJECT_CHECK(KinetisLPTMRState, (obj), TYPE_KINETIS_LPTMR)

typedef struct {
    // private:
    KinetisLPTMRParentState parent_obj;
    // public:

    const KinetisCapabilities *capabilities;

    // TODO: remove this if the peripheral is always enabled.
    // Points to the bitfield that enables the peripheral.
    Object *enabling_bit;

    // Remove it if there is only one port
    kinetis_lptmr_index_t port_index;

    union {
      // ----- 8< ----- 8< -----  8< ----- 8< ----- 8< ----- 8< ----- 8< -----

      // DO NOT REMOVE FIELDS! Automatically generated!
      // Merge fields from different family members.
      struct {
        // K6 LPTMR (Low Power Timer) registers.
        struct { 
          Object *csr; // 0 (Low Power Timer Control Status Register) 
          Object *psr; // 0x4 (Low Power Timer Prescale Register) 
          Object *cmr; // 0x8 (Low Power Timer Compare Register) 
          Object *cnr; // 0xC (Low Power Timer Counter Register) 
        } reg;

        struct { 

          // CSR (Low Power Timer Control Status Register) bitfields.
          struct { 
            Object *ten; // [0:0] Timer Enable
            Object *tms; // [1:1] Timer Mode Select
            Object *tfc; // [2:2] Timer Free-Running Counter
            Object *tpp; // [3:3] Timer Pin Polarity
            Object *tps; // [4:5] Timer Pin Select
            Object *tie; // [6:6] Timer Interrupt Enable
            Object *tcf; // [7:7] Timer Compare Flag
          } csr; 

          // PSR (Low Power Timer Prescale Register) bitfields.
          struct { 
            Object *pcs; // [0:1] Prescaler Clock Select
            Object *pbyp; // [2:2] Prescaler Bypass
            Object *prescale; // [3:6] Prescale Value
          } psr; 

          // CMR (Low Power Timer Compare Register) bitfields.
          struct { 
            Object *compare; // [0:15] Compare Value
          } cmr; 

          // CNR (Low Power Timer Counter Register) bitfields.
          struct { 
            Object *counter; // [0:15] Counter Value
          } cnr; 
        } fld;
      } k6;

      // ----- 8< ----- 8< -----  8< ----- 8< ----- 8< ----- 8< ----- 8< -----
    } u;

} KinetisLPTMRState;

// ----------------------------------------------------------------------------

#endif /* KINETIS_LPTMR_H_ */
