/*
 * Kinetis - RTC (Secure Real Time Clock) emulation.
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

#ifndef KINETIS_RTC_H_
#define KINETIS_RTC_H_

#include "qemu/osdep.h"

#include <hw/cortexm/peripheral.h>
#include <hw/cortexm/kinetis/capabilities.h>

// ----------------------------------------------------------------------------

#define DEVICE_PATH_KINETIS_RTC DEVICE_PATH_KINETIS "RTC"


// ----------------------------------------------------------------------------

#define TYPE_KINETIS_RTC TYPE_KINETIS_PREFIX "rtc" TYPE_PERIPHERAL_SUFFIX

// ----------------------------------------------------------------------------

// Parent definitions.
#define TYPE_KINETIS_RTC_PARENT TYPE_PERIPHERAL
typedef PeripheralClass KinetisRTCParentClass;
typedef PeripheralState KinetisRTCParentState;

// ----------------------------------------------------------------------------

// Class definitions.
#define KINETIS_RTC_GET_CLASS(obj) \
    OBJECT_GET_CLASS(KinetisRTCClass, (obj), TYPE_KINETIS_RTC)
#define KINETIS_RTC_CLASS(klass) \
    OBJECT_CLASS_CHECK(KinetisRTCClass, (klass), TYPE_KINETIS_RTC)

typedef struct {
    // private: 
    KinetisRTCParentClass parent_class;
    // public: 

    // None, so far.
} KinetisRTCClass;

// ----------------------------------------------------------------------------

// Instance definitions.
#define KINETIS_RTC_STATE(obj) \
    OBJECT_CHECK(KinetisRTCState, (obj), TYPE_KINETIS_RTC)

typedef struct {
    // private:
    KinetisRTCParentState parent_obj;
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
        // K6 RTC (Secure Real Time Clock) registers.
        struct { 
          Object *tsr; // 0 (RTC Time Seconds Register) 
          Object *tpr; // 0x4 (RTC Time Prescaler Register) 
          Object *tar; // 0x8 (RTC Time Alarm Register) 
          Object *tcr; // 0xC (RTC Time Compensation Register) 
          Object *cr; // 0x10 (RTC Control Register) 
          Object *sr; // 0x14 (RTC Status Register) 
          Object *lr; // 0x18 (RTC Lock Register) 
          Object *ier; // 0x1C (RTC Interrupt Enable Register) 
          Object *war; // 0x800 (RTC Write Access Register) 
          Object *rar; // 0x804 (RTC Read Access Register) 
        } reg;

        struct { 

          // TSR (RTC Time Seconds Register) bitfields.
          struct { 
            Object *tsr; // [0:31] Time Seconds Register
          } tsr; 

          // TPR (RTC Time Prescaler Register) bitfields.
          struct { 
            Object *tpr; // [0:15] Time Prescaler Register
          } tpr; 

          // TAR (RTC Time Alarm Register) bitfields.
          struct { 
            Object *tar; // [0:31] Time Alarm Register
          } tar; 

          // TCR (RTC Time Compensation Register) bitfields.
          struct { 
            Object *tcr; // [0:7] Time Compensation Register
            Object *cir; // [8:15] Compensation Interval Register
            Object *tcv; // [16:23] Time Compensation Value
            Object *cic; // [24:31] Compensation Interval Counter
          } tcr; 

          // CR (RTC Control Register) bitfields.
          struct { 
            Object *swr; // [0:0] Software Reset
            Object *wpe; // [1:1] Wakeup Pin Enable
            Object *sup; // [2:2] Supervisor Access
            Object *um; // [3:3] Update Mode
            Object *wps; // [4:4] Wakeup Pin Select
            Object *osce; // [8:8] Oscillator Enable
            Object *clko; // [9:9] Clock Output
            Object *sc16p; // [10:10] Oscillator 16pF Load Configure
            Object *sc8p; // [11:11] Oscillator 8pF Load Configure
            Object *sc4p; // [12:12] Oscillator 4pF Load Configure
            Object *sc2p; // [13:13] Oscillator 2pF Load Configure
          } cr; 

          // SR (RTC Status Register) bitfields.
          struct { 
            Object *tif; // [0:0] Time Invalid Flag
            Object *tof; // [1:1] Time Overflow Flag
            Object *taf; // [2:2] Time Alarm Flag
            Object *tce; // [4:4] Time Counter Enable
          } sr; 

          // LR (RTC Lock Register) bitfields.
          struct { 
            Object *tcl; // [3:3] Time Compensation Lock
            Object *crl; // [4:4] Control Register Lock
            Object *srl; // [5:5] Status Register Lock
            Object *lrl; // [6:6] Lock Register Lock
          } lr; 

          // IER (RTC Interrupt Enable Register) bitfields.
          struct { 
            Object *tiie; // [0:0] Time Invalid Interrupt Enable
            Object *toie; // [1:1] Time Overflow Interrupt Enable
            Object *taie; // [2:2] Time Alarm Interrupt Enable
            Object *tsie; // [4:4] Time Seconds Interrupt Enable
            Object *wpon; // [7:7] Wakeup Pin On
          } ier; 

          // WAR (RTC Write Access Register) bitfields.
          struct { 
            Object *tsrw; // [0:0] Time Seconds Register Write
            Object *tprw; // [1:1] Time Prescaler Register Write
            Object *tarw; // [2:2] Time Alarm Register Write
            Object *tcrw; // [3:3] Time Compensation Register Write
            Object *crw; // [4:4] Control Register Write
            Object *srw; // [5:5] Status Register Write
            Object *lrw; // [6:6] Lock Register Write
            Object *ierw; // [7:7] Interrupt Enable Register Write
          } war; 

          // RAR (RTC Read Access Register) bitfields.
          struct { 
            Object *tsrr; // [0:0] Time Seconds Register Read
            Object *tprr; // [1:1] Time Prescaler Register Read
            Object *tarr; // [2:2] Time Alarm Register Read
            Object *tcrr; // [3:3] Time Compensation Register Read
            Object *crr; // [4:4] Control Register Read
            Object *srr; // [5:5] Status Register Read
            Object *lrr; // [6:6] Lock Register Read
            Object *ierr; // [7:7] Interrupt Enable Register Read
          } rar; 
        } fld;
      } k6;

      // ----- 8< ----- 8< -----  8< ----- 8< ----- 8< ----- 8< ----- 8< -----
    } u;

} KinetisRTCState;

// ----------------------------------------------------------------------------

#endif /* KINETIS_RTC_H_ */
