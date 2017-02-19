/*
 * Kinetis - CMT (Carrier Modulator Transmitter) emulation.
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

#ifndef KINETIS_CMT_H_
#define KINETIS_CMT_H_

#include "qemu/osdep.h"

#include <hw/cortexm/peripheral.h>
#include <hw/cortexm/kinetis/capabilities.h>

// ----------------------------------------------------------------------------

#define DEVICE_PATH_KINETIS_CMT DEVICE_PATH_KINETIS "CMT"


// ----------------------------------------------------------------------------

#define TYPE_KINETIS_CMT TYPE_KINETIS_PREFIX "cmt" TYPE_PERIPHERAL_SUFFIX

// ----------------------------------------------------------------------------

// Parent definitions.
#define TYPE_KINETIS_CMT_PARENT TYPE_PERIPHERAL
typedef PeripheralClass KinetisCMTParentClass;
typedef PeripheralState KinetisCMTParentState;

// ----------------------------------------------------------------------------

// Class definitions.
#define KINETIS_CMT_GET_CLASS(obj) \
    OBJECT_GET_CLASS(KinetisCMTClass, (obj), TYPE_KINETIS_CMT)
#define KINETIS_CMT_CLASS(klass) \
    OBJECT_CLASS_CHECK(KinetisCMTClass, (klass), TYPE_KINETIS_CMT)

typedef struct {
    // private: 
    KinetisCMTParentClass parent_class;
    // public: 

    // None, so far.
} KinetisCMTClass;

// ----------------------------------------------------------------------------

// Instance definitions.
#define KINETIS_CMT_STATE(obj) \
    OBJECT_CHECK(KinetisCMTState, (obj), TYPE_KINETIS_CMT)

typedef struct {
    // private:
    KinetisCMTParentState parent_obj;
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
        // K6 CMT (Carrier Modulator Transmitter) registers.
        struct { 
          Object *cgh1; // 0 (CMT Carrier Generator High Data Register 1) 
          Object *cgl1; // 0x1 (CMT Carrier Generator Low Data Register 1) 
          Object *cgh2; // 0x2 (CMT Carrier Generator High Data Register 2) 
          Object *cgl2; // 0x3 (CMT Carrier Generator Low Data Register 2) 
          Object *oc; // 0x4 (CMT Output Control Register) 
          Object *msc; // 0x5 (CMT Modulator Status and Control Register) 
          Object *cmd1; // 0x6 (CMT Modulator Data Register Mark High) 
          Object *cmd2; // 0x7 (CMT Modulator Data Register Mark Low) 
          Object *cmd3; // 0x8 (CMT Modulator Data Register Space High) 
          Object *cmd4; // 0x9 (CMT Modulator Data Register Space Low) 
          Object *pps; // 0xA (CMT Primary Prescaler Register) 
          Object *dma; // 0xB (CMT Direct Memory Access Register) 
        } reg;

        struct { 

          // CGH1 (CMT Carrier Generator High Data Register 1) bitfields.
          struct { 
            Object *ph; // [0:7] Primary Carrier High Time Data Value
          } cgh1; 

          // CGL1 (CMT Carrier Generator Low Data Register 1) bitfields.
          struct { 
            Object *pl; // [0:7] Primary Carrier Low Time Data Value
          } cgl1; 

          // CGH2 (CMT Carrier Generator High Data Register 2) bitfields.
          struct { 
            Object *sh; // [0:7] Secondary Carrier High Time Data Value
          } cgh2; 

          // CGL2 (CMT Carrier Generator Low Data Register 2) bitfields.
          struct { 
            Object *sl; // [0:7] Secondary Carrier Low Time Data Value
          } cgl2; 

          // OC (CMT Output Control Register) bitfields.
          struct { 
            Object *iropen; // [5:5] IRO Pin Enable
            Object *cmtpol; // [6:6] CMT Output Polarity
            Object *irol; // [7:7] IRO Latch Control
          } oc; 

          // MSC (CMT Modulator Status and Control Register) bitfields.
          struct { 
            Object *mcgen; // [0:0] Modulator and Carrier Generator Enable
            Object *eocie; // [1:1] End of Cycle Interrupt Enable
            Object *fsk; // [2:2] FSK Mode Select
            Object *base; // [3:3] Baseband Enable
            Object *exspc; // [4:4] Extended Space Enable
            Object *cmtdiv; // [5:6] CMT Clock Divide Prescaler
            Object *eocf; // [7:7] End Of Cycle Status Flag
          } msc; 

          // CMD1 (CMT Modulator Data Register Mark High) bitfields.
          struct { 
            Object *mb; // [0:7] No description available
          } cmd1; 

          // CMD2 (CMT Modulator Data Register Mark Low) bitfields.
          struct { 
            Object *mb; // [0:7] No description available
          } cmd2; 

          // CMD3 (CMT Modulator Data Register Space High) bitfields.
          struct { 
            Object *sb; // [0:7] No description available
          } cmd3; 

          // CMD4 (CMT Modulator Data Register Space Low) bitfields.
          struct { 
            Object *sb; // [0:7] No description available
          } cmd4; 

          // PPS (CMT Primary Prescaler Register) bitfields.
          struct { 
            Object *ppsdiv; // [0:3] Primary Prescaler Divider
          } pps; 

          // DMA (CMT Direct Memory Access Register) bitfields.
          struct { 
            Object *dma; // [0:0] DMA Enable
          } dma; 
        } fld;
      } k6;

      // ----- 8< ----- 8< -----  8< ----- 8< ----- 8< ----- 8< ----- 8< -----
    } u;

} KinetisCMTState;

// ----------------------------------------------------------------------------

#endif /* KINETIS_CMT_H_ */
