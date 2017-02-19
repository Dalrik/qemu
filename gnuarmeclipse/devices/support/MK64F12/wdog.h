/*
 * Kinetis - WDOG (Generation 2008 Watchdog Timer) emulation.
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

#ifndef KINETIS_WDOG_H_
#define KINETIS_WDOG_H_

#include "qemu/osdep.h"

#include <hw/cortexm/peripheral.h>
#include <hw/cortexm/kinetis/capabilities.h>

// ----------------------------------------------------------------------------

#define DEVICE_PATH_KINETIS_WDOG DEVICE_PATH_KINETIS "WDOG"


// ----------------------------------------------------------------------------

#define TYPE_KINETIS_WDOG TYPE_KINETIS_PREFIX "wdog" TYPE_PERIPHERAL_SUFFIX

// ----------------------------------------------------------------------------

// Parent definitions.
#define TYPE_KINETIS_WDOG_PARENT TYPE_PERIPHERAL
typedef PeripheralClass KinetisWDOGParentClass;
typedef PeripheralState KinetisWDOGParentState;

// ----------------------------------------------------------------------------

// Class definitions.
#define KINETIS_WDOG_GET_CLASS(obj) \
    OBJECT_GET_CLASS(KinetisWDOGClass, (obj), TYPE_KINETIS_WDOG)
#define KINETIS_WDOG_CLASS(klass) \
    OBJECT_CLASS_CHECK(KinetisWDOGClass, (klass), TYPE_KINETIS_WDOG)

typedef struct {
    // private: 
    KinetisWDOGParentClass parent_class;
    // public: 

    // None, so far.
} KinetisWDOGClass;

// ----------------------------------------------------------------------------

// Instance definitions.
#define KINETIS_WDOG_STATE(obj) \
    OBJECT_CHECK(KinetisWDOGState, (obj), TYPE_KINETIS_WDOG)

typedef struct {
    // private:
    KinetisWDOGParentState parent_obj;
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
        // K6 WDOG (Generation 2008 Watchdog Timer) registers.
        struct { 
          Object *stctrlh; // 0 (Watchdog Status and Control Register High) 
          Object *stctrll; // 0x2 (Watchdog Status and Control Register Low) 
          Object *tovalh; // 0x4 (Watchdog Time-out Value Register High) 
          Object *tovall; // 0x6 (Watchdog Time-out Value Register Low) 
          Object *winh; // 0x8 (Watchdog Window Register High) 
          Object *winl; // 0xA (Watchdog Window Register Low) 
          Object *refresh; // 0xC (Watchdog Refresh register) 
          Object *unlock; // 0xE (Watchdog Unlock register) 
          Object *tmrouth; // 0x10 (Watchdog Timer Output Register High) 
          Object *tmroutl; // 0x12 (Watchdog Timer Output Register Low) 
          Object *rstcnt; // 0x14 (Watchdog Reset Count register) 
          Object *presc; // 0x16 (Watchdog Prescaler register) 
        } reg;

        struct { 

          // STCTRLH (Watchdog Status and Control Register High) bitfields.
          struct { 
            Object *wdogen; // [0:0] No description available
            Object *clksrc; // [1:1] No description available
            Object *irqrsten; // [2:2] No description available
            Object *winen; // [3:3] No description available
            Object *allowupdate; // [4:4] No description available
            Object *dbgen; // [5:5] No description available
            Object *stopen; // [6:6] No description available
            Object *waiten; // [7:7] No description available
            Object *testwdog; // [10:10] No description available
            Object *testsel; // [11:11] No description available
            Object *bytesel; // [12:13] No description available
            Object *distestwdog; // [14:14] No description available
          } stctrlh; 

          // STCTRLL (Watchdog Status and Control Register Low) bitfields.
          struct { 
            Object *intflg; // [15:15] No description available
          } stctrll; 

          // TOVALH (Watchdog Time-out Value Register High) bitfields.
          struct { 
            Object *tovalhigh; // [0:15] No description available
          } tovalh; 

          // TOVALL (Watchdog Time-out Value Register Low) bitfields.
          struct { 
            Object *tovallow; // [0:15] No description available
          } tovall; 

          // WINH (Watchdog Window Register High) bitfields.
          struct { 
            Object *winhigh; // [0:15] No description available
          } winh; 

          // WINL (Watchdog Window Register Low) bitfields.
          struct { 
            Object *winlow; // [0:15] No description available
          } winl; 

          // REFRESH (Watchdog Refresh register) bitfields.
          struct { 
            Object *wdogrefresh; // [0:15] No description available
          } refresh; 

          // UNLOCK (Watchdog Unlock register) bitfields.
          struct { 
            Object *wdogunlock; // [0:15] No description available
          } unlock; 

          // TMROUTH (Watchdog Timer Output Register High) bitfields.
          struct { 
            Object *timerouthigh; // [0:15] No description available
          } tmrouth; 

          // TMROUTL (Watchdog Timer Output Register Low) bitfields.
          struct { 
            Object *timeroutlow; // [0:15] No description available
          } tmroutl; 

          // RSTCNT (Watchdog Reset Count register) bitfields.
          struct { 
            Object *rstcnt; // [0:15] No description available
          } rstcnt; 

          // PRESC (Watchdog Prescaler register) bitfields.
          struct { 
            Object *prescval; // [8:10] No description available
          } presc; 
        } fld;
      } k6;

      // ----- 8< ----- 8< -----  8< ----- 8< ----- 8< ----- 8< ----- 8< -----
    } u;

} KinetisWDOGState;

// ----------------------------------------------------------------------------

#endif /* KINETIS_WDOG_H_ */
