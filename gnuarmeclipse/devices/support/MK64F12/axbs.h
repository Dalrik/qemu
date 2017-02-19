/*
 * Kinetis - AXBS (Crossbar switch) emulation.
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

#ifndef KINETIS_AXBS_H_
#define KINETIS_AXBS_H_

#include "qemu/osdep.h"

#include <hw/cortexm/peripheral.h>
#include <hw/cortexm/kinetis/capabilities.h>

// ----------------------------------------------------------------------------

#define DEVICE_PATH_KINETIS_AXBS DEVICE_PATH_KINETIS "AXBS"


// ----------------------------------------------------------------------------

#define TYPE_KINETIS_AXBS TYPE_KINETIS_PREFIX "axbs" TYPE_PERIPHERAL_SUFFIX

// ----------------------------------------------------------------------------

// Parent definitions.
#define TYPE_KINETIS_AXBS_PARENT TYPE_PERIPHERAL
typedef PeripheralClass KinetisAXBSParentClass;
typedef PeripheralState KinetisAXBSParentState;

// ----------------------------------------------------------------------------

// Class definitions.
#define KINETIS_AXBS_GET_CLASS(obj) \
    OBJECT_GET_CLASS(KinetisAXBSClass, (obj), TYPE_KINETIS_AXBS)
#define KINETIS_AXBS_CLASS(klass) \
    OBJECT_CLASS_CHECK(KinetisAXBSClass, (klass), TYPE_KINETIS_AXBS)

typedef struct {
    // private: 
    KinetisAXBSParentClass parent_class;
    // public: 

    // None, so far.
} KinetisAXBSClass;

// ----------------------------------------------------------------------------

// Instance definitions.
#define KINETIS_AXBS_STATE(obj) \
    OBJECT_CHECK(KinetisAXBSState, (obj), TYPE_KINETIS_AXBS)

typedef struct {
    // private:
    KinetisAXBSParentState parent_obj;
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
        // K6 AXBS (Crossbar switch) registers.
        struct { 
          Object *prs[5]; // 0 (Priority Registers Slave) 
          Object *crs[5]; // 0x10 (Control Register) 
          Object *mgpcr[6]; // 0x800 (Master General Purpose Control Register) 
        } reg;

        struct { 

          // PRSn (Priority Registers Slave) bitfields.
          struct { 
            Object *m0; // [0:2] Master 0 Priority. Sets the arbitration priority for this port on the associated slave port.
            Object *m1; // [4:6] Master 1 Priority. Sets the arbitration priority for this port on the associated slave port.
            Object *m2; // [8:10] Master 2 Priority. Sets the arbitration priority for this port on the associated slave port.
            Object *m3; // [12:14] Master 3 Priority. Sets the arbitration priority for this port on the associated slave port.
            Object *m4; // [16:18] Master 4 Priority. Sets the arbitration priority for this port on the associated slave port.
            Object *m5; // [20:22] Master 5 Priority. Sets the arbitration priority for this port on the associated slave port.
          } prs[5]; 

          // CRSn (Control Register) bitfields.
          struct { 
            Object *park; // [0:2] Park
            Object *pctl; // [4:5] Parking Control
            Object *arb; // [8:9] Arbitration Mode
            Object *hlp; // [30:30] Halt Low Priority
            Object *ro; // [31:31] Read Only
          } crs[5]; 

          // MGPCRn (Master General Purpose Control Register) bitfields.
          struct { 
            Object *aulb; // [0:2] Arbitrates On Undefined Length Bursts
          } mgpcr[6]; 
        } fld;
      } k6;

      // ----- 8< ----- 8< -----  8< ----- 8< ----- 8< ----- 8< ----- 8< -----
    } u;

} KinetisAXBSState;

// ----------------------------------------------------------------------------

#endif /* KINETIS_AXBS_H_ */
