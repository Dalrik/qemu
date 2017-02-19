/*
 * Kinetis - USBDCD (USB Device Charger Detection module) emulation.
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

#ifndef KINETIS_USBDCD_H_
#define KINETIS_USBDCD_H_

#include "qemu/osdep.h"

#include <hw/cortexm/peripheral.h>
#include <hw/cortexm/kinetis/capabilities.h>

// ----------------------------------------------------------------------------

#define DEVICE_PATH_KINETIS_USBDCD DEVICE_PATH_KINETIS "USBDCD"


// ----------------------------------------------------------------------------

#define TYPE_KINETIS_USBDCD TYPE_KINETIS_PREFIX "usbdcd" TYPE_PERIPHERAL_SUFFIX

// ----------------------------------------------------------------------------

// Parent definitions.
#define TYPE_KINETIS_USBDCD_PARENT TYPE_PERIPHERAL
typedef PeripheralClass KinetisUSBDCDParentClass;
typedef PeripheralState KinetisUSBDCDParentState;

// ----------------------------------------------------------------------------

// Class definitions.
#define KINETIS_USBDCD_GET_CLASS(obj) \
    OBJECT_GET_CLASS(KinetisUSBDCDClass, (obj), TYPE_KINETIS_USBDCD)
#define KINETIS_USBDCD_CLASS(klass) \
    OBJECT_CLASS_CHECK(KinetisUSBDCDClass, (klass), TYPE_KINETIS_USBDCD)

typedef struct {
    // private: 
    KinetisUSBDCDParentClass parent_class;
    // public: 

    // None, so far.
} KinetisUSBDCDClass;

// ----------------------------------------------------------------------------

// Instance definitions.
#define KINETIS_USBDCD_STATE(obj) \
    OBJECT_CHECK(KinetisUSBDCDState, (obj), TYPE_KINETIS_USBDCD)

typedef struct {
    // private:
    KinetisUSBDCDParentState parent_obj;
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
        // K6 USBDCD (USB Device Charger Detection module) registers.
        struct { 
          Object *control; // 0 (Control register) 
          Object *clock; // 0x4 (Clock register) 
          Object *status; // 0x8 (Status register) 
          Object *timer0; // 0x10 (TIMER0 register) 
          Object *timer1; // 0x14 (TIMER1 register) 
          Object *timer2_bc11; // 0x18 (TIMER2_BC11 register) 
          Object *timer2_bc12; // 0x18 (TIMER2_BC12 register) 
        } reg;

        struct { 

          // CONTROL (Control register) bitfields.
          struct { 
            Object *iack; // [0:0] Interrupt Acknowledge
            Object *if_; // [8:8] Interrupt Flag
            Object *ie; // [16:16] Interrupt Enable
            Object *bc12; // [17:17] No description available
            Object *start; // [24:24] Start Change Detection Sequence
            Object *sr; // [25:25] Software Reset
          } control; 

          // CLOCK (Clock register) bitfields.
          struct { 
            Object *clock_unit; // [0:0] Unit of Measurement Encoding for Clock Speed
            Object *clock_speed; // [2:11] Numerical Value of Clock Speed in Binary
          } clock; 

          // STATUS (Status register) bitfields.
          struct { 
            Object *seq_res; // [16:17] Charger Detection Sequence Results
            Object *seq_stat; // [18:19] Charger Detection Sequence Status
            Object *err; // [20:20] Error Flag
            Object *to; // [21:21] Timeout Flag
            Object *active; // [22:22] Active Status Indicator
          } status; 

          // TIMER0 (TIMER0 register) bitfields.
          struct { 
            Object *tunitcon; // [0:11] Unit Connection Timer Elapse (in ms)
            Object *tseq_init; // [16:25] Sequence Initiation Time
          } timer0; 

          // TIMER1 (TIMER1 register) bitfields.
          struct { 
            Object *tvdpsrc_on; // [0:9] Time Period Comparator Enabled
            Object *tdcd_dbnc; // [16:25] Time Period to Debounce D+ Signal
          } timer1; 

          // TIMER2_BC11 (TIMER2_BC11 register) bitfields.
          struct { 
            Object *check_dm; // [0:3] Time Before Check of D- Line
            Object *tvdpsrc_con; // [16:25] Time Period Before Enabling D+ Pullup
          } timer2_bc11; 

          // TIMER2_BC12 (TIMER2_BC12 register) bitfields.
          struct { 
            Object *tvdmsrc_on; // [0:9] No description available
            Object *twait_after_prd; // [16:25] No description available
          } timer2_bc12; 
        } fld;
      } k6;

      // ----- 8< ----- 8< -----  8< ----- 8< ----- 8< ----- 8< ----- 8< -----
    } u;

} KinetisUSBDCDState;

// ----------------------------------------------------------------------------

#endif /* KINETIS_USBDCD_H_ */
