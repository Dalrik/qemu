/*
 * Kinetis - FMC (Flash Memory Controller) emulation.
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

#ifndef KINETIS_FMC_H_
#define KINETIS_FMC_H_

#include "qemu/osdep.h"

#include <hw/cortexm/peripheral.h>
#include <hw/cortexm/kinetis/capabilities.h>

// ----------------------------------------------------------------------------

#define DEVICE_PATH_KINETIS_FMC DEVICE_PATH_KINETIS "FMC"


// ----------------------------------------------------------------------------

#define TYPE_KINETIS_FMC TYPE_KINETIS_PREFIX "fmc" TYPE_PERIPHERAL_SUFFIX

// ----------------------------------------------------------------------------

// Parent definitions.
#define TYPE_KINETIS_FMC_PARENT TYPE_PERIPHERAL
typedef PeripheralClass KinetisFMCParentClass;
typedef PeripheralState KinetisFMCParentState;

// ----------------------------------------------------------------------------

// Class definitions.
#define KINETIS_FMC_GET_CLASS(obj) \
    OBJECT_GET_CLASS(KinetisFMCClass, (obj), TYPE_KINETIS_FMC)
#define KINETIS_FMC_CLASS(klass) \
    OBJECT_CLASS_CHECK(KinetisFMCClass, (klass), TYPE_KINETIS_FMC)

typedef struct {
    // private: 
    KinetisFMCParentClass parent_class;
    // public: 

    // None, so far.
} KinetisFMCClass;

// ----------------------------------------------------------------------------

// Instance definitions.
#define KINETIS_FMC_STATE(obj) \
    OBJECT_CHECK(KinetisFMCState, (obj), TYPE_KINETIS_FMC)

typedef struct {
    // private:
    KinetisFMCParentState parent_obj;
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
        // K6 FMC (Flash Memory Controller) registers.
        struct { 
          Object *pfapr; // 0 (Flash Access Protection Register) 
          Object *pfb0cr; // 0x4 (Flash Bank 0 Control Register) 
          Object *pfb1cr; // 0x8 (Flash Bank 1 Control Register) 
          Object *tagvdw0s[4]; // 0x100 (Cache Tag Storage) 
          Object *tagvdw1s[4]; // 0x110 (Cache Tag Storage) 
          Object *tagvdw2s[4]; // 0x120 (Cache Tag Storage) 
          Object *tagvdw3s[4]; // 0x130 (Cache Tag Storage) 
          Object *dataw0su[4]; // 0x200 (Cache Data Storage (upper word)) 
          Object *dataw0sl[4]; // 0x204 (Cache Data Storage (lower word)) 
          Object *dataw1su[4]; // 0x220 (Cache Data Storage (upper word)) 
          Object *dataw1sl[4]; // 0x224 (Cache Data Storage (lower word)) 
          Object *dataw2su[4]; // 0x240 (Cache Data Storage (upper word)) 
          Object *dataw2sl[4]; // 0x244 (Cache Data Storage (lower word)) 
          Object *dataw3su[4]; // 0x260 (Cache Data Storage (upper word)) 
          Object *dataw3sl[4]; // 0x264 (Cache Data Storage (lower word)) 
        } reg;

        struct { 

          // PFAPR (Flash Access Protection Register) bitfields.
          struct { 
            Object *m0ap; // [0:1] Master 0 Access Protection
            Object *m1ap; // [2:3] Master 1 Access Protection
            Object *m2ap; // [4:5] Master 2 Access Protection
            Object *m3ap; // [6:7] Master 3 Access Protection
            Object *m4ap; // [8:9] Master 4 Access Protection
            Object *m5ap; // [10:11] Master 5 Access Protection
            Object *m6ap; // [12:13] Master 6 Access Protection
            Object *m7ap; // [14:15] Master 7 Access Protection
            Object *m0pfd; // [16:16] Master 0 Prefetch Disable
            Object *m1pfd; // [17:17] Master 1 Prefetch Disable
            Object *m2pfd; // [18:18] Master 2 Prefetch Disable
            Object *m3pfd; // [19:19] Master 3 Prefetch Disable
            Object *m4pfd; // [20:20] Master 4 Prefetch Disable
            Object *m5pfd; // [21:21] Master 5 Prefetch Disable
            Object *m6pfd; // [22:22] Master 6 Prefetch Disable
            Object *m7pfd; // [23:23] Master 7 Prefetch Disable
          } pfapr; 

          // PFB0CR (Flash Bank 0 Control Register) bitfields.
          struct { 
            Object *b0sebe; // [0:0] Bank 0 Single Entry Buffer Enable
            Object *b0ipe; // [1:1] Bank 0 Instruction Prefetch Enable
            Object *b0dpe; // [2:2] Bank 0 Data Prefetch Enable
            Object *b0ice; // [3:3] Bank 0 Instruction Cache Enable
            Object *b0dce; // [4:4] Bank 0 Data Cache Enable
            Object *crc; // [5:7] Cache Replacement Control
            Object *b0mw; // [17:18] Bank 0 Memory Width
            Object *s_b_inv; // [19:19] Invalidate Prefetch Speculation Buffer
            Object *cinv_way; // [20:23] Cache Invalidate Way x
            Object *clck_way; // [24:27] Cache Lock Way x
            Object *b0rwsc; // [28:31] Bank 0 Read Wait State Control
          } pfb0cr; 

          // PFB1CR (Flash Bank 1 Control Register) bitfields.
          struct { 
            Object *b1sebe; // [0:0] Bank 1 Single Entry Buffer Enable
            Object *b1ipe; // [1:1] Bank 1 Instruction Prefetch Enable
            Object *b1dpe; // [2:2] Bank 1 Data Prefetch Enable
            Object *b1ice; // [3:3] Bank 1 Instruction Cache Enable
            Object *b1dce; // [4:4] Bank 1 Data Cache Enable
            Object *b1mw; // [17:18] Bank 1 Memory Width
            Object *b1rwsc; // [28:31] Bank 1 Read Wait State Control
          } pfb1cr; 

          // TAGVDW0Sn (Cache Tag Storage) bitfields.
          struct { 
            Object *valid; // [0:0] 1-bit valid for cache entry
            Object *tag; // [5:18] 14-bit tag for cache entry
          } tagvdw0s[4]; 

          // TAGVDW1Sn (Cache Tag Storage) bitfields.
          struct { 
            Object *valid; // [0:0] 1-bit valid for cache entry
            Object *tag; // [5:18] 14-bit tag for cache entry
          } tagvdw1s[4]; 

          // TAGVDW2Sn (Cache Tag Storage) bitfields.
          struct { 
            Object *valid; // [0:0] 1-bit valid for cache entry
            Object *tag; // [5:18] 14-bit tag for cache entry
          } tagvdw2s[4]; 

          // TAGVDW3Sn (Cache Tag Storage) bitfields.
          struct { 
            Object *valid; // [0:0] 1-bit valid for cache entry
            Object *tag; // [5:18] 14-bit tag for cache entry
          } tagvdw3s[4]; 

          // DATAW0SnU (Cache Data Storage (upper word)) bitfields.
          struct { 
            Object *data; // [0:31] Bits [63:32] of data entry
          } dataw0su[4]; 

          // DATAW0SnL (Cache Data Storage (lower word)) bitfields.
          struct { 
            Object *data; // [0:31] Bits [31:0] of data entry
          } dataw0sl[4]; 

          // DATAW1SnU (Cache Data Storage (upper word)) bitfields.
          struct { 
            Object *data; // [0:31] Bits [63:32] of data entry
          } dataw1su[4]; 

          // DATAW1SnL (Cache Data Storage (lower word)) bitfields.
          struct { 
            Object *data; // [0:31] Bits [31:0] of data entry
          } dataw1sl[4]; 

          // DATAW2SnU (Cache Data Storage (upper word)) bitfields.
          struct { 
            Object *data; // [0:31] Bits [63:32] of data entry
          } dataw2su[4]; 

          // DATAW2SnL (Cache Data Storage (lower word)) bitfields.
          struct { 
            Object *data; // [0:31] Bits [31:0] of data entry
          } dataw2sl[4]; 

          // DATAW3SnU (Cache Data Storage (upper word)) bitfields.
          struct { 
            Object *data; // [0:31] Bits [63:32] of data entry
          } dataw3su[4]; 

          // DATAW3SnL (Cache Data Storage (lower word)) bitfields.
          struct { 
            Object *data; // [0:31] Bits [31:0] of data entry
          } dataw3sl[4]; 
        } fld;
      } k6;

      // ----- 8< ----- 8< -----  8< ----- 8< ----- 8< ----- 8< ----- 8< -----
    } u;

} KinetisFMCState;

// ----------------------------------------------------------------------------

#endif /* KINETIS_FMC_H_ */
