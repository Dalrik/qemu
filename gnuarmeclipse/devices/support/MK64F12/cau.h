/*
 * Kinetis - CAU (Memory Mapped Cryptographic Acceleration Unit (MMCAU)) emulation.
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

#ifndef KINETIS_CAU_H_
#define KINETIS_CAU_H_

#include "qemu/osdep.h"

#include <hw/cortexm/peripheral.h>
#include <hw/cortexm/kinetis/capabilities.h>

// ----------------------------------------------------------------------------

#define DEVICE_PATH_KINETIS_CAU DEVICE_PATH_KINETIS "CAU"


// ----------------------------------------------------------------------------

#define TYPE_KINETIS_CAU TYPE_KINETIS_PREFIX "cau" TYPE_PERIPHERAL_SUFFIX

// ----------------------------------------------------------------------------

// Parent definitions.
#define TYPE_KINETIS_CAU_PARENT TYPE_PERIPHERAL
typedef PeripheralClass KinetisCAUParentClass;
typedef PeripheralState KinetisCAUParentState;

// ----------------------------------------------------------------------------

// Class definitions.
#define KINETIS_CAU_GET_CLASS(obj) \
    OBJECT_GET_CLASS(KinetisCAUClass, (obj), TYPE_KINETIS_CAU)
#define KINETIS_CAU_CLASS(klass) \
    OBJECT_CLASS_CHECK(KinetisCAUClass, (klass), TYPE_KINETIS_CAU)

typedef struct {
    // private: 
    KinetisCAUParentClass parent_class;
    // public: 

    // None, so far.
} KinetisCAUClass;

// ----------------------------------------------------------------------------

// Instance definitions.
#define KINETIS_CAU_STATE(obj) \
    OBJECT_CHECK(KinetisCAUState, (obj), TYPE_KINETIS_CAU)

typedef struct {
    // private:
    KinetisCAUParentState parent_obj;
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
        // K6 CAU (Memory Mapped Cryptographic Acceleration Unit (MMCAU)) registers.
        struct { 
          Object *cau_direct0; // 0 (Direct access register 0) 
          Object *cau_direct1; // 0x4 (Direct access register 1) 
          Object *cau_direct2; // 0x8 (Direct access register 2) 
          Object *cau_direct3; // 0xC (Direct access register 3) 
          Object *cau_direct4; // 0x10 (Direct access register 4) 
          Object *cau_direct5; // 0x14 (Direct access register 5) 
          Object *cau_direct6; // 0x18 (Direct access register 6) 
          Object *cau_direct7; // 0x1C (Direct access register 7) 
          Object *cau_direct8; // 0x20 (Direct access register 8) 
          Object *cau_direct9; // 0x24 (Direct access register 9) 
          Object *cau_direct10; // 0x28 (Direct access register 10) 
          Object *cau_direct11; // 0x2C (Direct access register 11) 
          Object *cau_direct12; // 0x30 (Direct access register 12) 
          Object *cau_direct13; // 0x34 (Direct access register 13) 
          Object *cau_direct14; // 0x38 (Direct access register 14) 
          Object *cau_direct15; // 0x3C (Direct access register 15) 
          Object *cau_ldr_casr; // 0x840 (Status register - Load Register command) 
          Object *cau_ldr_caa; // 0x844 (Accumulator register - Load Register command) 
          Object *cau_ldr_ca0; // 0x848 (General Purpose Register 0 - Load Register command) 
          Object *cau_ldr_ca1; // 0x84C (General Purpose Register 1 - Load Register command) 
          Object *cau_ldr_ca2; // 0x850 (General Purpose Register 2 - Load Register command) 
          Object *cau_ldr_ca3; // 0x854 (General Purpose Register 3 - Load Register command) 
          Object *cau_ldr_ca4; // 0x858 (General Purpose Register 4 - Load Register command) 
          Object *cau_ldr_ca5; // 0x85C (General Purpose Register 5 - Load Register command) 
          Object *cau_ldr_ca6; // 0x860 (General Purpose Register 6 - Load Register command) 
          Object *cau_ldr_ca7; // 0x864 (General Purpose Register 7 - Load Register command) 
          Object *cau_ldr_ca8; // 0x868 (General Purpose Register 8 - Load Register command) 
          Object *cau_str_casr; // 0x880 (Status register - Store Register command) 
          Object *cau_str_caa; // 0x884 (Accumulator register - Store Register command) 
          Object *cau_str_ca0; // 0x888 (General Purpose Register 0 - Store Register command) 
          Object *cau_str_ca1; // 0x88C (General Purpose Register 1 - Store Register command) 
          Object *cau_str_ca2; // 0x890 (General Purpose Register 2 - Store Register command) 
          Object *cau_str_ca3; // 0x894 (General Purpose Register 3 - Store Register command) 
          Object *cau_str_ca4; // 0x898 (General Purpose Register 4 - Store Register command) 
          Object *cau_str_ca5; // 0x89C (General Purpose Register 5 - Store Register command) 
          Object *cau_str_ca6; // 0x8A0 (General Purpose Register 6 - Store Register command) 
          Object *cau_str_ca7; // 0x8A4 (General Purpose Register 7 - Store Register command) 
          Object *cau_str_ca8; // 0x8A8 (General Purpose Register 8 - Store Register command) 
          Object *cau_adr_casr; // 0x8C0 (Status register - Add Register command) 
          Object *cau_adr_caa; // 0x8C4 (Accumulator register - Add to register command) 
          Object *cau_adr_ca0; // 0x8C8 (General Purpose Register 0 - Add to register command) 
          Object *cau_adr_ca1; // 0x8CC (General Purpose Register 1 - Add to register command) 
          Object *cau_adr_ca2; // 0x8D0 (General Purpose Register 2 - Add to register command) 
          Object *cau_adr_ca3; // 0x8D4 (General Purpose Register 3 - Add to register command) 
          Object *cau_adr_ca4; // 0x8D8 (General Purpose Register 4 - Add to register command) 
          Object *cau_adr_ca5; // 0x8DC (General Purpose Register 5 - Add to register command) 
          Object *cau_adr_ca6; // 0x8E0 (General Purpose Register 6 - Add to register command) 
          Object *cau_adr_ca7; // 0x8E4 (General Purpose Register 7 - Add to register command) 
          Object *cau_adr_ca8; // 0x8E8 (General Purpose Register 8 - Add to register command) 
          Object *cau_radr_casr; // 0x900 (Status register - Reverse and Add to Register command) 
          Object *cau_radr_caa; // 0x904 (Accumulator register - Reverse and Add to Register command) 
          Object *cau_radr_ca0; // 0x908 (General Purpose Register 0 - Reverse and Add to Register command) 
          Object *cau_radr_ca1; // 0x90C (General Purpose Register 1 - Reverse and Add to Register command) 
          Object *cau_radr_ca2; // 0x910 (General Purpose Register 2 - Reverse and Add to Register command) 
          Object *cau_radr_ca3; // 0x914 (General Purpose Register 3 - Reverse and Add to Register command) 
          Object *cau_radr_ca4; // 0x918 (General Purpose Register 4 - Reverse and Add to Register command) 
          Object *cau_radr_ca5; // 0x91C (General Purpose Register 5 - Reverse and Add to Register command) 
          Object *cau_radr_ca6; // 0x920 (General Purpose Register 6 - Reverse and Add to Register command) 
          Object *cau_radr_ca7; // 0x924 (General Purpose Register 7 - Reverse and Add to Register command) 
          Object *cau_radr_ca8; // 0x928 (General Purpose Register 8 - Reverse and Add to Register command) 
          Object *cau_xor_casr; // 0x980 (Status register - Exclusive Or command) 
          Object *cau_xor_caa; // 0x984 (Accumulator register - Exclusive Or command) 
          Object *cau_xor_ca0; // 0x988 (General Purpose Register 0 - Exclusive Or command) 
          Object *cau_xor_ca1; // 0x98C (General Purpose Register 1 - Exclusive Or command) 
          Object *cau_xor_ca2; // 0x990 (General Purpose Register 2 - Exclusive Or command) 
          Object *cau_xor_ca3; // 0x994 (General Purpose Register 3 - Exclusive Or command) 
          Object *cau_xor_ca4; // 0x998 (General Purpose Register 4 - Exclusive Or command) 
          Object *cau_xor_ca5; // 0x99C (General Purpose Register 5 - Exclusive Or command) 
          Object *cau_xor_ca6; // 0x9A0 (General Purpose Register 6 - Exclusive Or command) 
          Object *cau_xor_ca7; // 0x9A4 (General Purpose Register 7 - Exclusive Or command) 
          Object *cau_xor_ca8; // 0x9A8 (General Purpose Register 8 - Exclusive Or command) 
          Object *cau_rotl_casr; // 0x9C0 (Status register - Rotate Left command) 
          Object *cau_rotl_caa; // 0x9C4 (Accumulator register - Rotate Left command) 
          Object *cau_rotl_ca0; // 0x9C8 (General Purpose Register 0 - Rotate Left command) 
          Object *cau_rotl_ca1; // 0x9CC (General Purpose Register 1 - Rotate Left command) 
          Object *cau_rotl_ca2; // 0x9D0 (General Purpose Register 2 - Rotate Left command) 
          Object *cau_rotl_ca3; // 0x9D4 (General Purpose Register 3 - Rotate Left command) 
          Object *cau_rotl_ca4; // 0x9D8 (General Purpose Register 4 - Rotate Left command) 
          Object *cau_rotl_ca5; // 0x9DC (General Purpose Register 5 - Rotate Left command) 
          Object *cau_rotl_ca6; // 0x9E0 (General Purpose Register 6 - Rotate Left command) 
          Object *cau_rotl_ca7; // 0x9E4 (General Purpose Register 7 - Rotate Left command) 
          Object *cau_rotl_ca8; // 0x9E8 (General Purpose Register 8 - Rotate Left command) 
          Object *cau_aesc_casr; // 0xB00 (Status register - AES Column Operation command) 
          Object *cau_aesc_caa; // 0xB04 (Accumulator register - AES Column Operation command) 
          Object *cau_aesc_ca0; // 0xB08 (General Purpose Register 0 - AES Column Operation command) 
          Object *cau_aesc_ca1; // 0xB0C (General Purpose Register 1 - AES Column Operation command) 
          Object *cau_aesc_ca2; // 0xB10 (General Purpose Register 2 - AES Column Operation command) 
          Object *cau_aesc_ca3; // 0xB14 (General Purpose Register 3 - AES Column Operation command) 
          Object *cau_aesc_ca4; // 0xB18 (General Purpose Register 4 - AES Column Operation command) 
          Object *cau_aesc_ca5; // 0xB1C (General Purpose Register 5 - AES Column Operation command) 
          Object *cau_aesc_ca6; // 0xB20 (General Purpose Register 6 - AES Column Operation command) 
          Object *cau_aesc_ca7; // 0xB24 (General Purpose Register 7 - AES Column Operation command) 
          Object *cau_aesc_ca8; // 0xB28 (General Purpose Register 8 - AES Column Operation command) 
          Object *cau_aesic_casr; // 0xB40 (Status register - AES Inverse Column Operation command) 
          Object *cau_aesic_caa; // 0xB44 (Accumulator register - AES Inverse Column Operation command) 
          Object *cau_aesic_ca0; // 0xB48 (General Purpose Register 0 - AES Inverse Column Operation command) 
          Object *cau_aesic_ca1; // 0xB4C (General Purpose Register 1 - AES Inverse Column Operation command) 
          Object *cau_aesic_ca2; // 0xB50 (General Purpose Register 2 - AES Inverse Column Operation command) 
          Object *cau_aesic_ca3; // 0xB54 (General Purpose Register 3 - AES Inverse Column Operation command) 
          Object *cau_aesic_ca4; // 0xB58 (General Purpose Register 4 - AES Inverse Column Operation command) 
          Object *cau_aesic_ca5; // 0xB5C (General Purpose Register 5 - AES Inverse Column Operation command) 
          Object *cau_aesic_ca6; // 0xB60 (General Purpose Register 6 - AES Inverse Column Operation command) 
          Object *cau_aesic_ca7; // 0xB64 (General Purpose Register 7 - AES Inverse Column Operation command) 
          Object *cau_aesic_ca8; // 0xB68 (General Purpose Register 8 - AES Inverse Column Operation command) 
        } reg;

        struct { 

          // CAU_DIRECT0 (Direct access register 0) bitfields.
          struct { 
            Object *cau_direct0; // [0:31] Direct register 0
          } cau_direct0; 

          // CAU_DIRECT1 (Direct access register 1) bitfields.
          struct { 
            Object *cau_direct1; // [0:31] Direct register 1
          } cau_direct1; 

          // CAU_DIRECT2 (Direct access register 2) bitfields.
          struct { 
            Object *cau_direct2; // [0:31] Direct register 2
          } cau_direct2; 

          // CAU_DIRECT3 (Direct access register 3) bitfields.
          struct { 
            Object *cau_direct3; // [0:31] Direct register 3
          } cau_direct3; 

          // CAU_DIRECT4 (Direct access register 4) bitfields.
          struct { 
            Object *cau_direct4; // [0:31] Direct register 4
          } cau_direct4; 

          // CAU_DIRECT5 (Direct access register 5) bitfields.
          struct { 
            Object *cau_direct5; // [0:31] Direct register 5
          } cau_direct5; 

          // CAU_DIRECT6 (Direct access register 6) bitfields.
          struct { 
            Object *cau_direct6; // [0:31] Direct register 6
          } cau_direct6; 

          // CAU_DIRECT7 (Direct access register 7) bitfields.
          struct { 
            Object *cau_direct7; // [0:31] Direct register 7
          } cau_direct7; 

          // CAU_DIRECT8 (Direct access register 8) bitfields.
          struct { 
            Object *cau_direct8; // [0:31] Direct register 8
          } cau_direct8; 

          // CAU_DIRECT9 (Direct access register 9) bitfields.
          struct { 
            Object *cau_direct9; // [0:31] Direct register 9
          } cau_direct9; 

          // CAU_DIRECT10 (Direct access register 10) bitfields.
          struct { 
            Object *cau_direct10; // [0:31] Direct register 10
          } cau_direct10; 

          // CAU_DIRECT11 (Direct access register 11) bitfields.
          struct { 
            Object *cau_direct11; // [0:31] Direct register 11
          } cau_direct11; 

          // CAU_DIRECT12 (Direct access register 12) bitfields.
          struct { 
            Object *cau_direct12; // [0:31] Direct register 12
          } cau_direct12; 

          // CAU_DIRECT13 (Direct access register 13) bitfields.
          struct { 
            Object *cau_direct13; // [0:31] Direct register 13
          } cau_direct13; 

          // CAU_DIRECT14 (Direct access register 14) bitfields.
          struct { 
            Object *cau_direct14; // [0:31] Direct register 14
          } cau_direct14; 

          // CAU_DIRECT15 (Direct access register 15) bitfields.
          struct { 
            Object *cau_direct15; // [0:31] Direct register 15
          } cau_direct15; 

          // CAU_LDR_CASR (Status register - Load Register command) bitfields.
          struct { 
            Object *ic; // [0:0] No description available
            Object *dpe; // [1:1] No description available
            Object *ver; // [28:31] CAU version
          } cau_ldr_casr; 

          // CAU_LDR_CAA (Accumulator register - Load Register command) bitfields.
          struct { 
            Object *acc; // [0:31] ACC
          } cau_ldr_caa; 

          // CAU_LDR_CA0 (General Purpose Register 0 - Load Register command) bitfields.
          struct { 
            Object *ca0; // [0:31] CA0
          } cau_ldr_ca0; 

          // CAU_LDR_CA1 (General Purpose Register 1 - Load Register command) bitfields.
          struct { 
            Object *ca1; // [0:31] CA1
          } cau_ldr_ca1; 

          // CAU_LDR_CA2 (General Purpose Register 2 - Load Register command) bitfields.
          struct { 
            Object *ca2; // [0:31] CA2
          } cau_ldr_ca2; 

          // CAU_LDR_CA3 (General Purpose Register 3 - Load Register command) bitfields.
          struct { 
            Object *ca3; // [0:31] CA3
          } cau_ldr_ca3; 

          // CAU_LDR_CA4 (General Purpose Register 4 - Load Register command) bitfields.
          struct { 
            Object *ca4; // [0:31] CA4
          } cau_ldr_ca4; 

          // CAU_LDR_CA5 (General Purpose Register 5 - Load Register command) bitfields.
          struct { 
            Object *ca5; // [0:31] CA5
          } cau_ldr_ca5; 

          // CAU_LDR_CA6 (General Purpose Register 6 - Load Register command) bitfields.
          struct { 
            Object *ca6; // [0:31] CA6
          } cau_ldr_ca6; 

          // CAU_LDR_CA7 (General Purpose Register 7 - Load Register command) bitfields.
          struct { 
            Object *ca7; // [0:31] CA7
          } cau_ldr_ca7; 

          // CAU_LDR_CA8 (General Purpose Register 8 - Load Register command) bitfields.
          struct { 
            Object *ca8; // [0:31] CA8
          } cau_ldr_ca8; 

          // CAU_STR_CASR (Status register - Store Register command) bitfields.
          struct { 
            Object *ic; // [0:0] No description available
            Object *dpe; // [1:1] No description available
            Object *ver; // [28:31] CAU version
          } cau_str_casr; 

          // CAU_STR_CAA (Accumulator register - Store Register command) bitfields.
          struct { 
            Object *acc; // [0:31] ACC
          } cau_str_caa; 

          // CAU_STR_CA0 (General Purpose Register 0 - Store Register command) bitfields.
          struct { 
            Object *ca0; // [0:31] CA0
          } cau_str_ca0; 

          // CAU_STR_CA1 (General Purpose Register 1 - Store Register command) bitfields.
          struct { 
            Object *ca1; // [0:31] CA1
          } cau_str_ca1; 

          // CAU_STR_CA2 (General Purpose Register 2 - Store Register command) bitfields.
          struct { 
            Object *ca2; // [0:31] CA2
          } cau_str_ca2; 

          // CAU_STR_CA3 (General Purpose Register 3 - Store Register command) bitfields.
          struct { 
            Object *ca3; // [0:31] CA3
          } cau_str_ca3; 

          // CAU_STR_CA4 (General Purpose Register 4 - Store Register command) bitfields.
          struct { 
            Object *ca4; // [0:31] CA4
          } cau_str_ca4; 

          // CAU_STR_CA5 (General Purpose Register 5 - Store Register command) bitfields.
          struct { 
            Object *ca5; // [0:31] CA5
          } cau_str_ca5; 

          // CAU_STR_CA6 (General Purpose Register 6 - Store Register command) bitfields.
          struct { 
            Object *ca6; // [0:31] CA6
          } cau_str_ca6; 

          // CAU_STR_CA7 (General Purpose Register 7 - Store Register command) bitfields.
          struct { 
            Object *ca7; // [0:31] CA7
          } cau_str_ca7; 

          // CAU_STR_CA8 (General Purpose Register 8 - Store Register command) bitfields.
          struct { 
            Object *ca8; // [0:31] CA8
          } cau_str_ca8; 

          // CAU_ADR_CASR (Status register - Add Register command) bitfields.
          struct { 
            Object *ic; // [0:0] No description available
            Object *dpe; // [1:1] No description available
            Object *ver; // [28:31] CAU version
          } cau_adr_casr; 

          // CAU_ADR_CAA (Accumulator register - Add to register command) bitfields.
          struct { 
            Object *acc; // [0:31] ACC
          } cau_adr_caa; 

          // CAU_ADR_CA0 (General Purpose Register 0 - Add to register command) bitfields.
          struct { 
            Object *ca0; // [0:31] CA0
          } cau_adr_ca0; 

          // CAU_ADR_CA1 (General Purpose Register 1 - Add to register command) bitfields.
          struct { 
            Object *ca1; // [0:31] CA1
          } cau_adr_ca1; 

          // CAU_ADR_CA2 (General Purpose Register 2 - Add to register command) bitfields.
          struct { 
            Object *ca2; // [0:31] CA2
          } cau_adr_ca2; 

          // CAU_ADR_CA3 (General Purpose Register 3 - Add to register command) bitfields.
          struct { 
            Object *ca3; // [0:31] CA3
          } cau_adr_ca3; 

          // CAU_ADR_CA4 (General Purpose Register 4 - Add to register command) bitfields.
          struct { 
            Object *ca4; // [0:31] CA4
          } cau_adr_ca4; 

          // CAU_ADR_CA5 (General Purpose Register 5 - Add to register command) bitfields.
          struct { 
            Object *ca5; // [0:31] CA5
          } cau_adr_ca5; 

          // CAU_ADR_CA6 (General Purpose Register 6 - Add to register command) bitfields.
          struct { 
            Object *ca6; // [0:31] CA6
          } cau_adr_ca6; 

          // CAU_ADR_CA7 (General Purpose Register 7 - Add to register command) bitfields.
          struct { 
            Object *ca7; // [0:31] CA7
          } cau_adr_ca7; 

          // CAU_ADR_CA8 (General Purpose Register 8 - Add to register command) bitfields.
          struct { 
            Object *ca8; // [0:31] CA8
          } cau_adr_ca8; 

          // CAU_RADR_CASR (Status register - Reverse and Add to Register command) bitfields.
          struct { 
            Object *ic; // [0:0] No description available
            Object *dpe; // [1:1] No description available
            Object *ver; // [28:31] CAU version
          } cau_radr_casr; 

          // CAU_RADR_CAA (Accumulator register - Reverse and Add to Register command) bitfields.
          struct { 
            Object *acc; // [0:31] ACC
          } cau_radr_caa; 

          // CAU_RADR_CA0 (General Purpose Register 0 - Reverse and Add to Register command) bitfields.
          struct { 
            Object *ca0; // [0:31] CA0
          } cau_radr_ca0; 

          // CAU_RADR_CA1 (General Purpose Register 1 - Reverse and Add to Register command) bitfields.
          struct { 
            Object *ca1; // [0:31] CA1
          } cau_radr_ca1; 

          // CAU_RADR_CA2 (General Purpose Register 2 - Reverse and Add to Register command) bitfields.
          struct { 
            Object *ca2; // [0:31] CA2
          } cau_radr_ca2; 

          // CAU_RADR_CA3 (General Purpose Register 3 - Reverse and Add to Register command) bitfields.
          struct { 
            Object *ca3; // [0:31] CA3
          } cau_radr_ca3; 

          // CAU_RADR_CA4 (General Purpose Register 4 - Reverse and Add to Register command) bitfields.
          struct { 
            Object *ca4; // [0:31] CA4
          } cau_radr_ca4; 

          // CAU_RADR_CA5 (General Purpose Register 5 - Reverse and Add to Register command) bitfields.
          struct { 
            Object *ca5; // [0:31] CA5
          } cau_radr_ca5; 

          // CAU_RADR_CA6 (General Purpose Register 6 - Reverse and Add to Register command) bitfields.
          struct { 
            Object *ca6; // [0:31] CA6
          } cau_radr_ca6; 

          // CAU_RADR_CA7 (General Purpose Register 7 - Reverse and Add to Register command) bitfields.
          struct { 
            Object *ca7; // [0:31] CA7
          } cau_radr_ca7; 

          // CAU_RADR_CA8 (General Purpose Register 8 - Reverse and Add to Register command) bitfields.
          struct { 
            Object *ca8; // [0:31] CA8
          } cau_radr_ca8; 

          // CAU_XOR_CASR (Status register - Exclusive Or command) bitfields.
          struct { 
            Object *ic; // [0:0] No description available
            Object *dpe; // [1:1] No description available
            Object *ver; // [28:31] CAU version
          } cau_xor_casr; 

          // CAU_XOR_CAA (Accumulator register - Exclusive Or command) bitfields.
          struct { 
            Object *acc; // [0:31] ACC
          } cau_xor_caa; 

          // CAU_XOR_CA0 (General Purpose Register 0 - Exclusive Or command) bitfields.
          struct { 
            Object *ca0; // [0:31] CA0
          } cau_xor_ca0; 

          // CAU_XOR_CA1 (General Purpose Register 1 - Exclusive Or command) bitfields.
          struct { 
            Object *ca1; // [0:31] CA1
          } cau_xor_ca1; 

          // CAU_XOR_CA2 (General Purpose Register 2 - Exclusive Or command) bitfields.
          struct { 
            Object *ca2; // [0:31] CA2
          } cau_xor_ca2; 

          // CAU_XOR_CA3 (General Purpose Register 3 - Exclusive Or command) bitfields.
          struct { 
            Object *ca3; // [0:31] CA3
          } cau_xor_ca3; 

          // CAU_XOR_CA4 (General Purpose Register 4 - Exclusive Or command) bitfields.
          struct { 
            Object *ca4; // [0:31] CA4
          } cau_xor_ca4; 

          // CAU_XOR_CA5 (General Purpose Register 5 - Exclusive Or command) bitfields.
          struct { 
            Object *ca5; // [0:31] CA5
          } cau_xor_ca5; 

          // CAU_XOR_CA6 (General Purpose Register 6 - Exclusive Or command) bitfields.
          struct { 
            Object *ca6; // [0:31] CA6
          } cau_xor_ca6; 

          // CAU_XOR_CA7 (General Purpose Register 7 - Exclusive Or command) bitfields.
          struct { 
            Object *ca7; // [0:31] CA7
          } cau_xor_ca7; 

          // CAU_XOR_CA8 (General Purpose Register 8 - Exclusive Or command) bitfields.
          struct { 
            Object *ca8; // [0:31] CA8
          } cau_xor_ca8; 

          // CAU_ROTL_CASR (Status register - Rotate Left command) bitfields.
          struct { 
            Object *ic; // [0:0] No description available
            Object *dpe; // [1:1] No description available
            Object *ver; // [28:31] CAU version
          } cau_rotl_casr; 

          // CAU_ROTL_CAA (Accumulator register - Rotate Left command) bitfields.
          struct { 
            Object *acc; // [0:31] ACC
          } cau_rotl_caa; 

          // CAU_ROTL_CA0 (General Purpose Register 0 - Rotate Left command) bitfields.
          struct { 
            Object *ca0; // [0:31] CA0
          } cau_rotl_ca0; 

          // CAU_ROTL_CA1 (General Purpose Register 1 - Rotate Left command) bitfields.
          struct { 
            Object *ca1; // [0:31] CA1
          } cau_rotl_ca1; 

          // CAU_ROTL_CA2 (General Purpose Register 2 - Rotate Left command) bitfields.
          struct { 
            Object *ca2; // [0:31] CA2
          } cau_rotl_ca2; 

          // CAU_ROTL_CA3 (General Purpose Register 3 - Rotate Left command) bitfields.
          struct { 
            Object *ca3; // [0:31] CA3
          } cau_rotl_ca3; 

          // CAU_ROTL_CA4 (General Purpose Register 4 - Rotate Left command) bitfields.
          struct { 
            Object *ca4; // [0:31] CA4
          } cau_rotl_ca4; 

          // CAU_ROTL_CA5 (General Purpose Register 5 - Rotate Left command) bitfields.
          struct { 
            Object *ca5; // [0:31] CA5
          } cau_rotl_ca5; 

          // CAU_ROTL_CA6 (General Purpose Register 6 - Rotate Left command) bitfields.
          struct { 
            Object *ca6; // [0:31] CA6
          } cau_rotl_ca6; 

          // CAU_ROTL_CA7 (General Purpose Register 7 - Rotate Left command) bitfields.
          struct { 
            Object *ca7; // [0:31] CA7
          } cau_rotl_ca7; 

          // CAU_ROTL_CA8 (General Purpose Register 8 - Rotate Left command) bitfields.
          struct { 
            Object *ca8; // [0:31] CA8
          } cau_rotl_ca8; 

          // CAU_AESC_CASR (Status register - AES Column Operation command) bitfields.
          struct { 
            Object *ic; // [0:0] No description available
            Object *dpe; // [1:1] No description available
            Object *ver; // [28:31] CAU version
          } cau_aesc_casr; 

          // CAU_AESC_CAA (Accumulator register - AES Column Operation command) bitfields.
          struct { 
            Object *acc; // [0:31] ACC
          } cau_aesc_caa; 

          // CAU_AESC_CA0 (General Purpose Register 0 - AES Column Operation command) bitfields.
          struct { 
            Object *ca0; // [0:31] CA0
          } cau_aesc_ca0; 

          // CAU_AESC_CA1 (General Purpose Register 1 - AES Column Operation command) bitfields.
          struct { 
            Object *ca1; // [0:31] CA1
          } cau_aesc_ca1; 

          // CAU_AESC_CA2 (General Purpose Register 2 - AES Column Operation command) bitfields.
          struct { 
            Object *ca2; // [0:31] CA2
          } cau_aesc_ca2; 

          // CAU_AESC_CA3 (General Purpose Register 3 - AES Column Operation command) bitfields.
          struct { 
            Object *ca3; // [0:31] CA3
          } cau_aesc_ca3; 

          // CAU_AESC_CA4 (General Purpose Register 4 - AES Column Operation command) bitfields.
          struct { 
            Object *ca4; // [0:31] CA4
          } cau_aesc_ca4; 

          // CAU_AESC_CA5 (General Purpose Register 5 - AES Column Operation command) bitfields.
          struct { 
            Object *ca5; // [0:31] CA5
          } cau_aesc_ca5; 

          // CAU_AESC_CA6 (General Purpose Register 6 - AES Column Operation command) bitfields.
          struct { 
            Object *ca6; // [0:31] CA6
          } cau_aesc_ca6; 

          // CAU_AESC_CA7 (General Purpose Register 7 - AES Column Operation command) bitfields.
          struct { 
            Object *ca7; // [0:31] CA7
          } cau_aesc_ca7; 

          // CAU_AESC_CA8 (General Purpose Register 8 - AES Column Operation command) bitfields.
          struct { 
            Object *ca8; // [0:31] CA8
          } cau_aesc_ca8; 

          // CAU_AESIC_CASR (Status register - AES Inverse Column Operation command) bitfields.
          struct { 
            Object *ic; // [0:0] No description available
            Object *dpe; // [1:1] No description available
            Object *ver; // [28:31] CAU version
          } cau_aesic_casr; 

          // CAU_AESIC_CAA (Accumulator register - AES Inverse Column Operation command) bitfields.
          struct { 
            Object *acc; // [0:31] ACC
          } cau_aesic_caa; 

          // CAU_AESIC_CA0 (General Purpose Register 0 - AES Inverse Column Operation command) bitfields.
          struct { 
            Object *ca0; // [0:31] CA0
          } cau_aesic_ca0; 

          // CAU_AESIC_CA1 (General Purpose Register 1 - AES Inverse Column Operation command) bitfields.
          struct { 
            Object *ca1; // [0:31] CA1
          } cau_aesic_ca1; 

          // CAU_AESIC_CA2 (General Purpose Register 2 - AES Inverse Column Operation command) bitfields.
          struct { 
            Object *ca2; // [0:31] CA2
          } cau_aesic_ca2; 

          // CAU_AESIC_CA3 (General Purpose Register 3 - AES Inverse Column Operation command) bitfields.
          struct { 
            Object *ca3; // [0:31] CA3
          } cau_aesic_ca3; 

          // CAU_AESIC_CA4 (General Purpose Register 4 - AES Inverse Column Operation command) bitfields.
          struct { 
            Object *ca4; // [0:31] CA4
          } cau_aesic_ca4; 

          // CAU_AESIC_CA5 (General Purpose Register 5 - AES Inverse Column Operation command) bitfields.
          struct { 
            Object *ca5; // [0:31] CA5
          } cau_aesic_ca5; 

          // CAU_AESIC_CA6 (General Purpose Register 6 - AES Inverse Column Operation command) bitfields.
          struct { 
            Object *ca6; // [0:31] CA6
          } cau_aesic_ca6; 

          // CAU_AESIC_CA7 (General Purpose Register 7 - AES Inverse Column Operation command) bitfields.
          struct { 
            Object *ca7; // [0:31] CA7
          } cau_aesic_ca7; 

          // CAU_AESIC_CA8 (General Purpose Register 8 - AES Inverse Column Operation command) bitfields.
          struct { 
            Object *ca8; // [0:31] CA8
          } cau_aesic_ca8; 
        } fld;
      } k6;

      // ----- 8< ----- 8< -----  8< ----- 8< ----- 8< ----- 8< ----- 8< -----
    } u;

} KinetisCAUState;

// ----------------------------------------------------------------------------

#endif /* KINETIS_CAU_H_ */
