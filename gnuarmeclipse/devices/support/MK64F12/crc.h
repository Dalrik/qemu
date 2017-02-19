/*
 * Kinetis - CRC (Cyclic Redundancy Check) emulation.
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

#ifndef KINETIS_CRC_H_
#define KINETIS_CRC_H_

#include "qemu/osdep.h"

#include <hw/cortexm/peripheral.h>
#include <hw/cortexm/kinetis/capabilities.h>

// ----------------------------------------------------------------------------

#define DEVICE_PATH_KINETIS_CRC DEVICE_PATH_KINETIS "CRC"


// ----------------------------------------------------------------------------

#define TYPE_KINETIS_CRC TYPE_KINETIS_PREFIX "crc" TYPE_PERIPHERAL_SUFFIX

// ----------------------------------------------------------------------------

// Parent definitions.
#define TYPE_KINETIS_CRC_PARENT TYPE_PERIPHERAL
typedef PeripheralClass KinetisCRCParentClass;
typedef PeripheralState KinetisCRCParentState;

// ----------------------------------------------------------------------------

// Class definitions.
#define KINETIS_CRC_GET_CLASS(obj) \
    OBJECT_GET_CLASS(KinetisCRCClass, (obj), TYPE_KINETIS_CRC)
#define KINETIS_CRC_CLASS(klass) \
    OBJECT_CLASS_CHECK(KinetisCRCClass, (klass), TYPE_KINETIS_CRC)

typedef struct {
    // private: 
    KinetisCRCParentClass parent_class;
    // public: 

    // None, so far.
} KinetisCRCClass;

// ----------------------------------------------------------------------------

// Instance definitions.
#define KINETIS_CRC_STATE(obj) \
    OBJECT_CHECK(KinetisCRCState, (obj), TYPE_KINETIS_CRC)

typedef struct {
    // private:
    KinetisCRCParentState parent_obj;
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
        // K6 CRC (Cyclic Redundancy Check) registers.
        struct { 
          Object *data; // 0 (CRC Data register) 
          Object *datal; // 0 (CRC_DATAL register.) 
          Object *datall; // 0 (CRC_DATALL register.) 
          Object *datalu; // 0x1 (CRC_DATALU register.) 
          Object *datah; // 0x2 (CRC_DATAH register.) 
          Object *datahl; // 0x2 (CRC_DATAHL register.) 
          Object *datahu; // 0x3 (CRC_DATAHU register.) 
          Object *gpoly; // 0x4 (CRC Polynomial register) 
          Object *gpolyl; // 0x4 (CRC_GPOLYL register.) 
          Object *gpolyll; // 0x4 (CRC_GPOLYLL register.) 
          Object *gpolylu; // 0x5 (CRC_GPOLYLU register.) 
          Object *gpolyh; // 0x6 (CRC_GPOLYH register.) 
          Object *gpolyhl; // 0x6 (CRC_GPOLYHL register.) 
          Object *gpolyhu; // 0x7 (CRC_GPOLYHU register.) 
          Object *ctrl; // 0x8 (CRC Control register) 
          Object *ctrlhu; // 0xB (CRC_CTRLHU register.) 
        } reg;

        struct { 

          // DATA (CRC Data register) bitfields.
          struct { 
            Object *ll; // [0:7] CRC Low Lower Byte
            Object *lu; // [8:15] CRC Low Upper Byte
            Object *hl; // [16:23] CRC High Lower Byte
            Object *hu; // [24:31] CRC High Upper Byte
          } data; 

          // DATAL (CRC_DATAL register.) bitfields.
          struct { 
            Object *datal; // [0:15] DATAL stores the lower 16 bits of the 16/32 bit CRC
          } datal; 

          // DATALL (CRC_DATALL register.) bitfields.
          struct { 
            Object *datall; // [0:7] CRCLL stores the first 8 bits of the 32 bit DATA
          } datall; 

          // DATALU (CRC_DATALU register.) bitfields.
          struct { 
            Object *datalu; // [0:7] DATALL stores the second 8 bits of the 32 bit CRC
          } datalu; 

          // DATAH (CRC_DATAH register.) bitfields.
          struct { 
            Object *datah; // [0:15] DATAH stores the high 16 bits of the 16/32 bit CRC
          } datah; 

          // DATAHL (CRC_DATAHL register.) bitfields.
          struct { 
            Object *datahl; // [0:7] DATAHL stores the third 8 bits of the 32 bit CRC
          } datahl; 

          // DATAHU (CRC_DATAHU register.) bitfields.
          struct { 
            Object *datahu; // [0:7] DATAHU stores the fourth 8 bits of the 32 bit CRC
          } datahu; 

          // GPOLY (CRC Polynomial register) bitfields.
          struct { 
            Object *low; // [0:15] Low Polynominal Half-word
            Object *high; // [16:31] High Polynominal Half-word
          } gpoly; 

          // GPOLYL (CRC_GPOLYL register.) bitfields.
          struct { 
            Object *gpolyl; // [0:15] POLYL stores the lower 16 bits of the 16/32 bit CRC polynomial value
          } gpolyl; 

          // GPOLYLL (CRC_GPOLYLL register.) bitfields.
          struct { 
            Object *gpolyll; // [0:7] POLYLL stores the first 8 bits of the 32 bit CRC
          } gpolyll; 

          // GPOLYLU (CRC_GPOLYLU register.) bitfields.
          struct { 
            Object *gpolylu; // [0:7] POLYLL stores the second 8 bits of the 32 bit CRC
          } gpolylu; 

          // GPOLYH (CRC_GPOLYH register.) bitfields.
          struct { 
            Object *gpolyh; // [0:15] POLYH stores the high 16 bits of the 16/32 bit CRC polynomial value
          } gpolyh; 

          // GPOLYHL (CRC_GPOLYHL register.) bitfields.
          struct { 
            Object *gpolyhl; // [0:7] POLYHL stores the third 8 bits of the 32 bit CRC
          } gpolyhl; 

          // GPOLYHU (CRC_GPOLYHU register.) bitfields.
          struct { 
            Object *gpolyhu; // [0:7] POLYHU stores the fourth 8 bits of the 32 bit CRC
          } gpolyhu; 

          // CTRL (CRC Control register) bitfields.
          struct { 
            Object *tcrc; // [24:24] No description available
            Object *was; // [25:25] Write CRC Data Register As Seed
            Object *fxor; // [26:26] Complement Read Of CRC Data Register
            Object *totr; // [28:29] Type Of Transpose For Read
            Object *tot; // [30:31] Type Of Transpose For Writes
          } ctrl; 

          // CTRLHU (CRC_CTRLHU register.) bitfields.
          struct { 
            Object *tcrc; // [0:0] No description available
            Object *was; // [1:1] No description available
            Object *fxor; // [2:2] No description available
            Object *totr; // [4:5] No description available
            Object *tot; // [6:7] No description available
          } ctrlhu; 
        } fld;
      } k6;

      // ----- 8< ----- 8< -----  8< ----- 8< ----- 8< ----- 8< ----- 8< -----
    } u;

} KinetisCRCState;

// ----------------------------------------------------------------------------

#endif /* KINETIS_CRC_H_ */
