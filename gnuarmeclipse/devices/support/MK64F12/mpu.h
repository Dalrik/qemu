/*
 * Kinetis - MPU (Memory protection unit) emulation.
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

#ifndef KINETIS_MPU_H_
#define KINETIS_MPU_H_

#include "qemu/osdep.h"

#include <hw/cortexm/peripheral.h>
#include <hw/cortexm/kinetis/capabilities.h>

// ----------------------------------------------------------------------------

#define DEVICE_PATH_KINETIS_MPU DEVICE_PATH_KINETIS "MPU"


// ----------------------------------------------------------------------------

#define TYPE_KINETIS_MPU TYPE_KINETIS_PREFIX "mpu" TYPE_PERIPHERAL_SUFFIX

// ----------------------------------------------------------------------------

// Parent definitions.
#define TYPE_KINETIS_MPU_PARENT TYPE_PERIPHERAL
typedef PeripheralClass KinetisMPUParentClass;
typedef PeripheralState KinetisMPUParentState;

// ----------------------------------------------------------------------------

// Class definitions.
#define KINETIS_MPU_GET_CLASS(obj) \
    OBJECT_GET_CLASS(KinetisMPUClass, (obj), TYPE_KINETIS_MPU)
#define KINETIS_MPU_CLASS(klass) \
    OBJECT_CLASS_CHECK(KinetisMPUClass, (klass), TYPE_KINETIS_MPU)

typedef struct {
    // private: 
    KinetisMPUParentClass parent_class;
    // public: 

    // None, so far.
} KinetisMPUClass;

// ----------------------------------------------------------------------------

// Instance definitions.
#define KINETIS_MPU_STATE(obj) \
    OBJECT_CHECK(KinetisMPUState, (obj), TYPE_KINETIS_MPU)

typedef struct {
    // private:
    KinetisMPUParentState parent_obj;
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
        // K6 MPU (Memory protection unit) registers.
        struct { 
          Object *cesr; // 0 (Control/Error Status Register) 
          Object *ear[5]; // 0x10 (Error Address Register, slave port n) 
          Object *edr[5]; // 0x14 (Error Detail Register, slave port n) 
          Object *rgd_word0[12]; // 0x400 (Region Descriptor n, Word 0) 
          Object *rgd_word1[12]; // 0x404 (Region Descriptor n, Word 1) 
          Object *rgd_word2[12]; // 0x408 (Region Descriptor n, Word 2) 
          Object *rgd_word3[12]; // 0x40C (Region Descriptor n, Word 3) 
          Object *rgdaac[12]; // 0x800 (Region Descriptor Alternate Access Control n) 
        } reg;

        struct { 

          // CESR (Control/Error Status Register) bitfields.
          struct { 
            Object *vld; // [0:0] Valid
            Object *nrgd; // [8:11] Number Of Region Descriptors
            Object *nsp; // [12:15] Number Of Slave Ports
            Object *hrl; // [16:19] Hardware Revision Level
            Object *sperr; // [27:31] Slave Port n Error
          } cesr; 

          // EARn (Error Address Register, slave port n) bitfields.
          struct { 
            Object *eaddr; // [0:31] Error Address
          } ear[5]; 

          // EDRn (Error Detail Register, slave port n) bitfields.
          struct { 
            Object *erw; // [0:0] Error Read/Write
            Object *eattr; // [1:3] Error Attributes
            Object *emn; // [4:7] Error Master Number
            Object *epid; // [8:15] Error Process Identification
            Object *eacd; // [16:31] Error Access Control Detail
          } edr[5]; 

          // RGDn_WORD0 (Region Descriptor n, Word 0) bitfields.
          struct { 
            Object *srtaddr; // [5:31] Start Address
          } rgd_word0[12]; 

          // RGDn_WORD1 (Region Descriptor n, Word 1) bitfields.
          struct { 
            Object *endaddr; // [5:31] End Address
          } rgd_word1[12]; 

          // RGDn_WORD2 (Region Descriptor n, Word 2) bitfields.
          struct { 
            Object *m0um; // [0:2] Bus Master 0 User Mode Access Control
            Object *m0sm; // [3:4] Bus Master 0 Supervisor Mode Access Control
            Object *m0pe; // [5:5] Bus Master 0 Process Identifier enable
            Object *m1um; // [6:8] Bus Master 1 User Mode Access Control
            Object *m1sm; // [9:10] Bus Master 1 Supervisor Mode Access Control
            Object *m1pe; // [11:11] Bus Master 1 Process Identifier enable
            Object *m2um; // [12:14] Bus Master 2 User Mode Access control
            Object *m2sm; // [15:16] Bus Master 2 Supervisor Mode Access Control
            Object *m2pe; // [17:17] Bus Master 2 Process Identifier Enable
            Object *m3um; // [18:20] Bus Master 3 User Mode Access Control
            Object *m3sm; // [21:22] Bus Master 3 Supervisor Mode Access Control
            Object *m3pe; // [23:23] Bus Master 3 Process Identifier Enable
            Object *m4we; // [24:24] Bus Master 4 Write Enable
            Object *m4re; // [25:25] Bus Master 4 Read Enable
            Object *m5we; // [26:26] Bus Master 5 Write Enable
            Object *m5re; // [27:27] Bus Master 5 Read Enable
            Object *m6we; // [28:28] Bus Master 6 Write Enable
            Object *m6re; // [29:29] Bus Master 6 Read Enable
            Object *m7we; // [30:30] Bus Master 7 Write Enable
            Object *m7re; // [31:31] Bus Master 7 Read Enable
          } rgd_word2[12]; 

          // RGDn_WORD3 (Region Descriptor n, Word 3) bitfields.
          struct { 
            Object *vld; // [0:0] Valid
            Object *pidmask; // [16:23] Process Identifier Mask
            Object *pid; // [24:31] Process Identifier
          } rgd_word3[12]; 

          // RGDAACn (Region Descriptor Alternate Access Control n) bitfields.
          struct { 
            Object *m0um; // [0:2] Bus Master 0 User Mode Access Control
            Object *m0sm; // [3:4] Bus Master 0 Supervisor Mode Access Control
            Object *m0pe; // [5:5] Bus Master 0 Process Identifier Enable
            Object *m1um; // [6:8] Bus Master 1 User Mode Access Control
            Object *m1sm; // [9:10] Bus Master 1 Supervisor Mode Access Control
            Object *m1pe; // [11:11] Bus Master 1 Process Identifier Enable
            Object *m2um; // [12:14] Bus Master 2 User Mode Access Control
            Object *m2sm; // [15:16] Bus Master 2 Supervisor Mode Access Control
            Object *m2pe; // [17:17] Bus Master 2 Process Identifier Enable
            Object *m3um; // [18:20] Bus Master 3 User Mode Access Control
            Object *m3sm; // [21:22] Bus Master 3 Supervisor Mode Access Control
            Object *m3pe; // [23:23] Bus Master 3 Process Identifier Enable
            Object *m4we; // [24:24] Bus Master 4 Write Enable
            Object *m4re; // [25:25] Bus Master 4 Read Enable
            Object *m5we; // [26:26] Bus Master 5 Write Enable
            Object *m5re; // [27:27] Bus Master 5 Read Enable
            Object *m6we; // [28:28] Bus Master 6 Write Enable
            Object *m6re; // [29:29] Bus Master 6 Read Enable
            Object *m7we; // [30:30] Bus Master 7 Write Enable
            Object *m7re; // [31:31] Bus Master 7 Read Enable
          } rgdaac[12]; 
        } fld;
      } k6;

      // ----- 8< ----- 8< -----  8< ----- 8< ----- 8< ----- 8< ----- 8< -----
    } u;

} KinetisMPUState;

// ----------------------------------------------------------------------------

#endif /* KINETIS_MPU_H_ */
