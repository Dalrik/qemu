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

#include <hw/cortexm/kinetis/cau.h>
#include <hw/cortexm/kinetis/mcu.h>
#include <hw/cortexm/helper.h>
#include <hw/cortexm/svd.h>

// ----- Generated code -------------------------------------------------------
//
// ----- 8< ----- 8< -----  8< ----- 8< ----- 8< ----- 8< ----- 8< -----

// DO NOT EDIT! Automatically generated!
static void mk64f12_cau_create_objects(Object *obj, JSON_Object *svd, const char *name)
{
    KinetisCAUState *state = KINETIS_CAU_STATE(obj);

    JSON_Object *periph = svd_get_peripheral_by_name(svd, name);
    svd_add_peripheral_properties_and_children(obj, periph, svd);

    // Registers. 
    state->u.k6.reg.cau_direct0 = cm_object_get_child_by_name(obj, "CAU_DIRECT0");
    state->u.k6.reg.cau_direct1 = cm_object_get_child_by_name(obj, "CAU_DIRECT1");
    state->u.k6.reg.cau_direct2 = cm_object_get_child_by_name(obj, "CAU_DIRECT2");
    state->u.k6.reg.cau_direct3 = cm_object_get_child_by_name(obj, "CAU_DIRECT3");
    state->u.k6.reg.cau_direct4 = cm_object_get_child_by_name(obj, "CAU_DIRECT4");
    state->u.k6.reg.cau_direct5 = cm_object_get_child_by_name(obj, "CAU_DIRECT5");
    state->u.k6.reg.cau_direct6 = cm_object_get_child_by_name(obj, "CAU_DIRECT6");
    state->u.k6.reg.cau_direct7 = cm_object_get_child_by_name(obj, "CAU_DIRECT7");
    state->u.k6.reg.cau_direct8 = cm_object_get_child_by_name(obj, "CAU_DIRECT8");
    state->u.k6.reg.cau_direct9 = cm_object_get_child_by_name(obj, "CAU_DIRECT9");
    state->u.k6.reg.cau_direct10 = cm_object_get_child_by_name(obj, "CAU_DIRECT10");
    state->u.k6.reg.cau_direct11 = cm_object_get_child_by_name(obj, "CAU_DIRECT11");
    state->u.k6.reg.cau_direct12 = cm_object_get_child_by_name(obj, "CAU_DIRECT12");
    state->u.k6.reg.cau_direct13 = cm_object_get_child_by_name(obj, "CAU_DIRECT13");
    state->u.k6.reg.cau_direct14 = cm_object_get_child_by_name(obj, "CAU_DIRECT14");
    state->u.k6.reg.cau_direct15 = cm_object_get_child_by_name(obj, "CAU_DIRECT15");
    state->u.k6.reg.cau_ldr_casr = cm_object_get_child_by_name(obj, "CAU_LDR_CASR");
    state->u.k6.reg.cau_ldr_caa = cm_object_get_child_by_name(obj, "CAU_LDR_CAA");
    state->u.k6.reg.cau_ldr_ca0 = cm_object_get_child_by_name(obj, "CAU_LDR_CA0");
    state->u.k6.reg.cau_ldr_ca1 = cm_object_get_child_by_name(obj, "CAU_LDR_CA1");
    state->u.k6.reg.cau_ldr_ca2 = cm_object_get_child_by_name(obj, "CAU_LDR_CA2");
    state->u.k6.reg.cau_ldr_ca3 = cm_object_get_child_by_name(obj, "CAU_LDR_CA3");
    state->u.k6.reg.cau_ldr_ca4 = cm_object_get_child_by_name(obj, "CAU_LDR_CA4");
    state->u.k6.reg.cau_ldr_ca5 = cm_object_get_child_by_name(obj, "CAU_LDR_CA5");
    state->u.k6.reg.cau_ldr_ca6 = cm_object_get_child_by_name(obj, "CAU_LDR_CA6");
    state->u.k6.reg.cau_ldr_ca7 = cm_object_get_child_by_name(obj, "CAU_LDR_CA7");
    state->u.k6.reg.cau_ldr_ca8 = cm_object_get_child_by_name(obj, "CAU_LDR_CA8");
    state->u.k6.reg.cau_str_casr = cm_object_get_child_by_name(obj, "CAU_STR_CASR");
    state->u.k6.reg.cau_str_caa = cm_object_get_child_by_name(obj, "CAU_STR_CAA");
    state->u.k6.reg.cau_str_ca0 = cm_object_get_child_by_name(obj, "CAU_STR_CA0");
    state->u.k6.reg.cau_str_ca1 = cm_object_get_child_by_name(obj, "CAU_STR_CA1");
    state->u.k6.reg.cau_str_ca2 = cm_object_get_child_by_name(obj, "CAU_STR_CA2");
    state->u.k6.reg.cau_str_ca3 = cm_object_get_child_by_name(obj, "CAU_STR_CA3");
    state->u.k6.reg.cau_str_ca4 = cm_object_get_child_by_name(obj, "CAU_STR_CA4");
    state->u.k6.reg.cau_str_ca5 = cm_object_get_child_by_name(obj, "CAU_STR_CA5");
    state->u.k6.reg.cau_str_ca6 = cm_object_get_child_by_name(obj, "CAU_STR_CA6");
    state->u.k6.reg.cau_str_ca7 = cm_object_get_child_by_name(obj, "CAU_STR_CA7");
    state->u.k6.reg.cau_str_ca8 = cm_object_get_child_by_name(obj, "CAU_STR_CA8");
    state->u.k6.reg.cau_adr_casr = cm_object_get_child_by_name(obj, "CAU_ADR_CASR");
    state->u.k6.reg.cau_adr_caa = cm_object_get_child_by_name(obj, "CAU_ADR_CAA");
    state->u.k6.reg.cau_adr_ca0 = cm_object_get_child_by_name(obj, "CAU_ADR_CA0");
    state->u.k6.reg.cau_adr_ca1 = cm_object_get_child_by_name(obj, "CAU_ADR_CA1");
    state->u.k6.reg.cau_adr_ca2 = cm_object_get_child_by_name(obj, "CAU_ADR_CA2");
    state->u.k6.reg.cau_adr_ca3 = cm_object_get_child_by_name(obj, "CAU_ADR_CA3");
    state->u.k6.reg.cau_adr_ca4 = cm_object_get_child_by_name(obj, "CAU_ADR_CA4");
    state->u.k6.reg.cau_adr_ca5 = cm_object_get_child_by_name(obj, "CAU_ADR_CA5");
    state->u.k6.reg.cau_adr_ca6 = cm_object_get_child_by_name(obj, "CAU_ADR_CA6");
    state->u.k6.reg.cau_adr_ca7 = cm_object_get_child_by_name(obj, "CAU_ADR_CA7");
    state->u.k6.reg.cau_adr_ca8 = cm_object_get_child_by_name(obj, "CAU_ADR_CA8");
    state->u.k6.reg.cau_radr_casr = cm_object_get_child_by_name(obj, "CAU_RADR_CASR");
    state->u.k6.reg.cau_radr_caa = cm_object_get_child_by_name(obj, "CAU_RADR_CAA");
    state->u.k6.reg.cau_radr_ca0 = cm_object_get_child_by_name(obj, "CAU_RADR_CA0");
    state->u.k6.reg.cau_radr_ca1 = cm_object_get_child_by_name(obj, "CAU_RADR_CA1");
    state->u.k6.reg.cau_radr_ca2 = cm_object_get_child_by_name(obj, "CAU_RADR_CA2");
    state->u.k6.reg.cau_radr_ca3 = cm_object_get_child_by_name(obj, "CAU_RADR_CA3");
    state->u.k6.reg.cau_radr_ca4 = cm_object_get_child_by_name(obj, "CAU_RADR_CA4");
    state->u.k6.reg.cau_radr_ca5 = cm_object_get_child_by_name(obj, "CAU_RADR_CA5");
    state->u.k6.reg.cau_radr_ca6 = cm_object_get_child_by_name(obj, "CAU_RADR_CA6");
    state->u.k6.reg.cau_radr_ca7 = cm_object_get_child_by_name(obj, "CAU_RADR_CA7");
    state->u.k6.reg.cau_radr_ca8 = cm_object_get_child_by_name(obj, "CAU_RADR_CA8");
    state->u.k6.reg.cau_xor_casr = cm_object_get_child_by_name(obj, "CAU_XOR_CASR");
    state->u.k6.reg.cau_xor_caa = cm_object_get_child_by_name(obj, "CAU_XOR_CAA");
    state->u.k6.reg.cau_xor_ca0 = cm_object_get_child_by_name(obj, "CAU_XOR_CA0");
    state->u.k6.reg.cau_xor_ca1 = cm_object_get_child_by_name(obj, "CAU_XOR_CA1");
    state->u.k6.reg.cau_xor_ca2 = cm_object_get_child_by_name(obj, "CAU_XOR_CA2");
    state->u.k6.reg.cau_xor_ca3 = cm_object_get_child_by_name(obj, "CAU_XOR_CA3");
    state->u.k6.reg.cau_xor_ca4 = cm_object_get_child_by_name(obj, "CAU_XOR_CA4");
    state->u.k6.reg.cau_xor_ca5 = cm_object_get_child_by_name(obj, "CAU_XOR_CA5");
    state->u.k6.reg.cau_xor_ca6 = cm_object_get_child_by_name(obj, "CAU_XOR_CA6");
    state->u.k6.reg.cau_xor_ca7 = cm_object_get_child_by_name(obj, "CAU_XOR_CA7");
    state->u.k6.reg.cau_xor_ca8 = cm_object_get_child_by_name(obj, "CAU_XOR_CA8");
    state->u.k6.reg.cau_rotl_casr = cm_object_get_child_by_name(obj, "CAU_ROTL_CASR");
    state->u.k6.reg.cau_rotl_caa = cm_object_get_child_by_name(obj, "CAU_ROTL_CAA");
    state->u.k6.reg.cau_rotl_ca0 = cm_object_get_child_by_name(obj, "CAU_ROTL_CA0");
    state->u.k6.reg.cau_rotl_ca1 = cm_object_get_child_by_name(obj, "CAU_ROTL_CA1");
    state->u.k6.reg.cau_rotl_ca2 = cm_object_get_child_by_name(obj, "CAU_ROTL_CA2");
    state->u.k6.reg.cau_rotl_ca3 = cm_object_get_child_by_name(obj, "CAU_ROTL_CA3");
    state->u.k6.reg.cau_rotl_ca4 = cm_object_get_child_by_name(obj, "CAU_ROTL_CA4");
    state->u.k6.reg.cau_rotl_ca5 = cm_object_get_child_by_name(obj, "CAU_ROTL_CA5");
    state->u.k6.reg.cau_rotl_ca6 = cm_object_get_child_by_name(obj, "CAU_ROTL_CA6");
    state->u.k6.reg.cau_rotl_ca7 = cm_object_get_child_by_name(obj, "CAU_ROTL_CA7");
    state->u.k6.reg.cau_rotl_ca8 = cm_object_get_child_by_name(obj, "CAU_ROTL_CA8");
    state->u.k6.reg.cau_aesc_casr = cm_object_get_child_by_name(obj, "CAU_AESC_CASR");
    state->u.k6.reg.cau_aesc_caa = cm_object_get_child_by_name(obj, "CAU_AESC_CAA");
    state->u.k6.reg.cau_aesc_ca0 = cm_object_get_child_by_name(obj, "CAU_AESC_CA0");
    state->u.k6.reg.cau_aesc_ca1 = cm_object_get_child_by_name(obj, "CAU_AESC_CA1");
    state->u.k6.reg.cau_aesc_ca2 = cm_object_get_child_by_name(obj, "CAU_AESC_CA2");
    state->u.k6.reg.cau_aesc_ca3 = cm_object_get_child_by_name(obj, "CAU_AESC_CA3");
    state->u.k6.reg.cau_aesc_ca4 = cm_object_get_child_by_name(obj, "CAU_AESC_CA4");
    state->u.k6.reg.cau_aesc_ca5 = cm_object_get_child_by_name(obj, "CAU_AESC_CA5");
    state->u.k6.reg.cau_aesc_ca6 = cm_object_get_child_by_name(obj, "CAU_AESC_CA6");
    state->u.k6.reg.cau_aesc_ca7 = cm_object_get_child_by_name(obj, "CAU_AESC_CA7");
    state->u.k6.reg.cau_aesc_ca8 = cm_object_get_child_by_name(obj, "CAU_AESC_CA8");
    state->u.k6.reg.cau_aesic_casr = cm_object_get_child_by_name(obj, "CAU_AESIC_CASR");
    state->u.k6.reg.cau_aesic_caa = cm_object_get_child_by_name(obj, "CAU_AESIC_CAA");
    state->u.k6.reg.cau_aesic_ca0 = cm_object_get_child_by_name(obj, "CAU_AESIC_CA0");
    state->u.k6.reg.cau_aesic_ca1 = cm_object_get_child_by_name(obj, "CAU_AESIC_CA1");
    state->u.k6.reg.cau_aesic_ca2 = cm_object_get_child_by_name(obj, "CAU_AESIC_CA2");
    state->u.k6.reg.cau_aesic_ca3 = cm_object_get_child_by_name(obj, "CAU_AESIC_CA3");
    state->u.k6.reg.cau_aesic_ca4 = cm_object_get_child_by_name(obj, "CAU_AESIC_CA4");
    state->u.k6.reg.cau_aesic_ca5 = cm_object_get_child_by_name(obj, "CAU_AESIC_CA5");
    state->u.k6.reg.cau_aesic_ca6 = cm_object_get_child_by_name(obj, "CAU_AESIC_CA6");
    state->u.k6.reg.cau_aesic_ca7 = cm_object_get_child_by_name(obj, "CAU_AESIC_CA7");
    state->u.k6.reg.cau_aesic_ca8 = cm_object_get_child_by_name(obj, "CAU_AESIC_CA8");

    // CAU_DIRECT0 bitfields.
    state->u.k6.fld.cau_direct0.cau_direct0 = cm_object_get_child_by_name(state->u.k6.reg.cau_direct0, "CAU_DIRECT0");

    // CAU_DIRECT1 bitfields.
    state->u.k6.fld.cau_direct1.cau_direct1 = cm_object_get_child_by_name(state->u.k6.reg.cau_direct1, "CAU_DIRECT1");

    // CAU_DIRECT2 bitfields.
    state->u.k6.fld.cau_direct2.cau_direct2 = cm_object_get_child_by_name(state->u.k6.reg.cau_direct2, "CAU_DIRECT2");

    // CAU_DIRECT3 bitfields.
    state->u.k6.fld.cau_direct3.cau_direct3 = cm_object_get_child_by_name(state->u.k6.reg.cau_direct3, "CAU_DIRECT3");

    // CAU_DIRECT4 bitfields.
    state->u.k6.fld.cau_direct4.cau_direct4 = cm_object_get_child_by_name(state->u.k6.reg.cau_direct4, "CAU_DIRECT4");

    // CAU_DIRECT5 bitfields.
    state->u.k6.fld.cau_direct5.cau_direct5 = cm_object_get_child_by_name(state->u.k6.reg.cau_direct5, "CAU_DIRECT5");

    // CAU_DIRECT6 bitfields.
    state->u.k6.fld.cau_direct6.cau_direct6 = cm_object_get_child_by_name(state->u.k6.reg.cau_direct6, "CAU_DIRECT6");

    // CAU_DIRECT7 bitfields.
    state->u.k6.fld.cau_direct7.cau_direct7 = cm_object_get_child_by_name(state->u.k6.reg.cau_direct7, "CAU_DIRECT7");

    // CAU_DIRECT8 bitfields.
    state->u.k6.fld.cau_direct8.cau_direct8 = cm_object_get_child_by_name(state->u.k6.reg.cau_direct8, "CAU_DIRECT8");

    // CAU_DIRECT9 bitfields.
    state->u.k6.fld.cau_direct9.cau_direct9 = cm_object_get_child_by_name(state->u.k6.reg.cau_direct9, "CAU_DIRECT9");

    // CAU_DIRECT10 bitfields.
    state->u.k6.fld.cau_direct10.cau_direct10 = cm_object_get_child_by_name(state->u.k6.reg.cau_direct10, "CAU_DIRECT10");

    // CAU_DIRECT11 bitfields.
    state->u.k6.fld.cau_direct11.cau_direct11 = cm_object_get_child_by_name(state->u.k6.reg.cau_direct11, "CAU_DIRECT11");

    // CAU_DIRECT12 bitfields.
    state->u.k6.fld.cau_direct12.cau_direct12 = cm_object_get_child_by_name(state->u.k6.reg.cau_direct12, "CAU_DIRECT12");

    // CAU_DIRECT13 bitfields.
    state->u.k6.fld.cau_direct13.cau_direct13 = cm_object_get_child_by_name(state->u.k6.reg.cau_direct13, "CAU_DIRECT13");

    // CAU_DIRECT14 bitfields.
    state->u.k6.fld.cau_direct14.cau_direct14 = cm_object_get_child_by_name(state->u.k6.reg.cau_direct14, "CAU_DIRECT14");

    // CAU_DIRECT15 bitfields.
    state->u.k6.fld.cau_direct15.cau_direct15 = cm_object_get_child_by_name(state->u.k6.reg.cau_direct15, "CAU_DIRECT15");

    // CAU_LDR_CASR bitfields.
    state->u.k6.fld.cau_ldr_casr.ic = cm_object_get_child_by_name(state->u.k6.reg.cau_ldr_casr, "IC");
    state->u.k6.fld.cau_ldr_casr.dpe = cm_object_get_child_by_name(state->u.k6.reg.cau_ldr_casr, "DPE");
    state->u.k6.fld.cau_ldr_casr.ver = cm_object_get_child_by_name(state->u.k6.reg.cau_ldr_casr, "VER");

    // CAU_LDR_CAA bitfields.
    state->u.k6.fld.cau_ldr_caa.acc = cm_object_get_child_by_name(state->u.k6.reg.cau_ldr_caa, "ACC");

    // CAU_LDR_CA0 bitfields.
    state->u.k6.fld.cau_ldr_ca0.ca0 = cm_object_get_child_by_name(state->u.k6.reg.cau_ldr_ca0, "CA0");

    // CAU_LDR_CA1 bitfields.
    state->u.k6.fld.cau_ldr_ca1.ca1 = cm_object_get_child_by_name(state->u.k6.reg.cau_ldr_ca1, "CA1");

    // CAU_LDR_CA2 bitfields.
    state->u.k6.fld.cau_ldr_ca2.ca2 = cm_object_get_child_by_name(state->u.k6.reg.cau_ldr_ca2, "CA2");

    // CAU_LDR_CA3 bitfields.
    state->u.k6.fld.cau_ldr_ca3.ca3 = cm_object_get_child_by_name(state->u.k6.reg.cau_ldr_ca3, "CA3");

    // CAU_LDR_CA4 bitfields.
    state->u.k6.fld.cau_ldr_ca4.ca4 = cm_object_get_child_by_name(state->u.k6.reg.cau_ldr_ca4, "CA4");

    // CAU_LDR_CA5 bitfields.
    state->u.k6.fld.cau_ldr_ca5.ca5 = cm_object_get_child_by_name(state->u.k6.reg.cau_ldr_ca5, "CA5");

    // CAU_LDR_CA6 bitfields.
    state->u.k6.fld.cau_ldr_ca6.ca6 = cm_object_get_child_by_name(state->u.k6.reg.cau_ldr_ca6, "CA6");

    // CAU_LDR_CA7 bitfields.
    state->u.k6.fld.cau_ldr_ca7.ca7 = cm_object_get_child_by_name(state->u.k6.reg.cau_ldr_ca7, "CA7");

    // CAU_LDR_CA8 bitfields.
    state->u.k6.fld.cau_ldr_ca8.ca8 = cm_object_get_child_by_name(state->u.k6.reg.cau_ldr_ca8, "CA8");

    // CAU_STR_CASR bitfields.
    state->u.k6.fld.cau_str_casr.ic = cm_object_get_child_by_name(state->u.k6.reg.cau_str_casr, "IC");
    state->u.k6.fld.cau_str_casr.dpe = cm_object_get_child_by_name(state->u.k6.reg.cau_str_casr, "DPE");
    state->u.k6.fld.cau_str_casr.ver = cm_object_get_child_by_name(state->u.k6.reg.cau_str_casr, "VER");

    // CAU_STR_CAA bitfields.
    state->u.k6.fld.cau_str_caa.acc = cm_object_get_child_by_name(state->u.k6.reg.cau_str_caa, "ACC");

    // CAU_STR_CA0 bitfields.
    state->u.k6.fld.cau_str_ca0.ca0 = cm_object_get_child_by_name(state->u.k6.reg.cau_str_ca0, "CA0");

    // CAU_STR_CA1 bitfields.
    state->u.k6.fld.cau_str_ca1.ca1 = cm_object_get_child_by_name(state->u.k6.reg.cau_str_ca1, "CA1");

    // CAU_STR_CA2 bitfields.
    state->u.k6.fld.cau_str_ca2.ca2 = cm_object_get_child_by_name(state->u.k6.reg.cau_str_ca2, "CA2");

    // CAU_STR_CA3 bitfields.
    state->u.k6.fld.cau_str_ca3.ca3 = cm_object_get_child_by_name(state->u.k6.reg.cau_str_ca3, "CA3");

    // CAU_STR_CA4 bitfields.
    state->u.k6.fld.cau_str_ca4.ca4 = cm_object_get_child_by_name(state->u.k6.reg.cau_str_ca4, "CA4");

    // CAU_STR_CA5 bitfields.
    state->u.k6.fld.cau_str_ca5.ca5 = cm_object_get_child_by_name(state->u.k6.reg.cau_str_ca5, "CA5");

    // CAU_STR_CA6 bitfields.
    state->u.k6.fld.cau_str_ca6.ca6 = cm_object_get_child_by_name(state->u.k6.reg.cau_str_ca6, "CA6");

    // CAU_STR_CA7 bitfields.
    state->u.k6.fld.cau_str_ca7.ca7 = cm_object_get_child_by_name(state->u.k6.reg.cau_str_ca7, "CA7");

    // CAU_STR_CA8 bitfields.
    state->u.k6.fld.cau_str_ca8.ca8 = cm_object_get_child_by_name(state->u.k6.reg.cau_str_ca8, "CA8");

    // CAU_ADR_CASR bitfields.
    state->u.k6.fld.cau_adr_casr.ic = cm_object_get_child_by_name(state->u.k6.reg.cau_adr_casr, "IC");
    state->u.k6.fld.cau_adr_casr.dpe = cm_object_get_child_by_name(state->u.k6.reg.cau_adr_casr, "DPE");
    state->u.k6.fld.cau_adr_casr.ver = cm_object_get_child_by_name(state->u.k6.reg.cau_adr_casr, "VER");

    // CAU_ADR_CAA bitfields.
    state->u.k6.fld.cau_adr_caa.acc = cm_object_get_child_by_name(state->u.k6.reg.cau_adr_caa, "ACC");

    // CAU_ADR_CA0 bitfields.
    state->u.k6.fld.cau_adr_ca0.ca0 = cm_object_get_child_by_name(state->u.k6.reg.cau_adr_ca0, "CA0");

    // CAU_ADR_CA1 bitfields.
    state->u.k6.fld.cau_adr_ca1.ca1 = cm_object_get_child_by_name(state->u.k6.reg.cau_adr_ca1, "CA1");

    // CAU_ADR_CA2 bitfields.
    state->u.k6.fld.cau_adr_ca2.ca2 = cm_object_get_child_by_name(state->u.k6.reg.cau_adr_ca2, "CA2");

    // CAU_ADR_CA3 bitfields.
    state->u.k6.fld.cau_adr_ca3.ca3 = cm_object_get_child_by_name(state->u.k6.reg.cau_adr_ca3, "CA3");

    // CAU_ADR_CA4 bitfields.
    state->u.k6.fld.cau_adr_ca4.ca4 = cm_object_get_child_by_name(state->u.k6.reg.cau_adr_ca4, "CA4");

    // CAU_ADR_CA5 bitfields.
    state->u.k6.fld.cau_adr_ca5.ca5 = cm_object_get_child_by_name(state->u.k6.reg.cau_adr_ca5, "CA5");

    // CAU_ADR_CA6 bitfields.
    state->u.k6.fld.cau_adr_ca6.ca6 = cm_object_get_child_by_name(state->u.k6.reg.cau_adr_ca6, "CA6");

    // CAU_ADR_CA7 bitfields.
    state->u.k6.fld.cau_adr_ca7.ca7 = cm_object_get_child_by_name(state->u.k6.reg.cau_adr_ca7, "CA7");

    // CAU_ADR_CA8 bitfields.
    state->u.k6.fld.cau_adr_ca8.ca8 = cm_object_get_child_by_name(state->u.k6.reg.cau_adr_ca8, "CA8");

    // CAU_RADR_CASR bitfields.
    state->u.k6.fld.cau_radr_casr.ic = cm_object_get_child_by_name(state->u.k6.reg.cau_radr_casr, "IC");
    state->u.k6.fld.cau_radr_casr.dpe = cm_object_get_child_by_name(state->u.k6.reg.cau_radr_casr, "DPE");
    state->u.k6.fld.cau_radr_casr.ver = cm_object_get_child_by_name(state->u.k6.reg.cau_radr_casr, "VER");

    // CAU_RADR_CAA bitfields.
    state->u.k6.fld.cau_radr_caa.acc = cm_object_get_child_by_name(state->u.k6.reg.cau_radr_caa, "ACC");

    // CAU_RADR_CA0 bitfields.
    state->u.k6.fld.cau_radr_ca0.ca0 = cm_object_get_child_by_name(state->u.k6.reg.cau_radr_ca0, "CA0");

    // CAU_RADR_CA1 bitfields.
    state->u.k6.fld.cau_radr_ca1.ca1 = cm_object_get_child_by_name(state->u.k6.reg.cau_radr_ca1, "CA1");

    // CAU_RADR_CA2 bitfields.
    state->u.k6.fld.cau_radr_ca2.ca2 = cm_object_get_child_by_name(state->u.k6.reg.cau_radr_ca2, "CA2");

    // CAU_RADR_CA3 bitfields.
    state->u.k6.fld.cau_radr_ca3.ca3 = cm_object_get_child_by_name(state->u.k6.reg.cau_radr_ca3, "CA3");

    // CAU_RADR_CA4 bitfields.
    state->u.k6.fld.cau_radr_ca4.ca4 = cm_object_get_child_by_name(state->u.k6.reg.cau_radr_ca4, "CA4");

    // CAU_RADR_CA5 bitfields.
    state->u.k6.fld.cau_radr_ca5.ca5 = cm_object_get_child_by_name(state->u.k6.reg.cau_radr_ca5, "CA5");

    // CAU_RADR_CA6 bitfields.
    state->u.k6.fld.cau_radr_ca6.ca6 = cm_object_get_child_by_name(state->u.k6.reg.cau_radr_ca6, "CA6");

    // CAU_RADR_CA7 bitfields.
    state->u.k6.fld.cau_radr_ca7.ca7 = cm_object_get_child_by_name(state->u.k6.reg.cau_radr_ca7, "CA7");

    // CAU_RADR_CA8 bitfields.
    state->u.k6.fld.cau_radr_ca8.ca8 = cm_object_get_child_by_name(state->u.k6.reg.cau_radr_ca8, "CA8");

    // CAU_XOR_CASR bitfields.
    state->u.k6.fld.cau_xor_casr.ic = cm_object_get_child_by_name(state->u.k6.reg.cau_xor_casr, "IC");
    state->u.k6.fld.cau_xor_casr.dpe = cm_object_get_child_by_name(state->u.k6.reg.cau_xor_casr, "DPE");
    state->u.k6.fld.cau_xor_casr.ver = cm_object_get_child_by_name(state->u.k6.reg.cau_xor_casr, "VER");

    // CAU_XOR_CAA bitfields.
    state->u.k6.fld.cau_xor_caa.acc = cm_object_get_child_by_name(state->u.k6.reg.cau_xor_caa, "ACC");

    // CAU_XOR_CA0 bitfields.
    state->u.k6.fld.cau_xor_ca0.ca0 = cm_object_get_child_by_name(state->u.k6.reg.cau_xor_ca0, "CA0");

    // CAU_XOR_CA1 bitfields.
    state->u.k6.fld.cau_xor_ca1.ca1 = cm_object_get_child_by_name(state->u.k6.reg.cau_xor_ca1, "CA1");

    // CAU_XOR_CA2 bitfields.
    state->u.k6.fld.cau_xor_ca2.ca2 = cm_object_get_child_by_name(state->u.k6.reg.cau_xor_ca2, "CA2");

    // CAU_XOR_CA3 bitfields.
    state->u.k6.fld.cau_xor_ca3.ca3 = cm_object_get_child_by_name(state->u.k6.reg.cau_xor_ca3, "CA3");

    // CAU_XOR_CA4 bitfields.
    state->u.k6.fld.cau_xor_ca4.ca4 = cm_object_get_child_by_name(state->u.k6.reg.cau_xor_ca4, "CA4");

    // CAU_XOR_CA5 bitfields.
    state->u.k6.fld.cau_xor_ca5.ca5 = cm_object_get_child_by_name(state->u.k6.reg.cau_xor_ca5, "CA5");

    // CAU_XOR_CA6 bitfields.
    state->u.k6.fld.cau_xor_ca6.ca6 = cm_object_get_child_by_name(state->u.k6.reg.cau_xor_ca6, "CA6");

    // CAU_XOR_CA7 bitfields.
    state->u.k6.fld.cau_xor_ca7.ca7 = cm_object_get_child_by_name(state->u.k6.reg.cau_xor_ca7, "CA7");

    // CAU_XOR_CA8 bitfields.
    state->u.k6.fld.cau_xor_ca8.ca8 = cm_object_get_child_by_name(state->u.k6.reg.cau_xor_ca8, "CA8");

    // CAU_ROTL_CASR bitfields.
    state->u.k6.fld.cau_rotl_casr.ic = cm_object_get_child_by_name(state->u.k6.reg.cau_rotl_casr, "IC");
    state->u.k6.fld.cau_rotl_casr.dpe = cm_object_get_child_by_name(state->u.k6.reg.cau_rotl_casr, "DPE");
    state->u.k6.fld.cau_rotl_casr.ver = cm_object_get_child_by_name(state->u.k6.reg.cau_rotl_casr, "VER");

    // CAU_ROTL_CAA bitfields.
    state->u.k6.fld.cau_rotl_caa.acc = cm_object_get_child_by_name(state->u.k6.reg.cau_rotl_caa, "ACC");

    // CAU_ROTL_CA0 bitfields.
    state->u.k6.fld.cau_rotl_ca0.ca0 = cm_object_get_child_by_name(state->u.k6.reg.cau_rotl_ca0, "CA0");

    // CAU_ROTL_CA1 bitfields.
    state->u.k6.fld.cau_rotl_ca1.ca1 = cm_object_get_child_by_name(state->u.k6.reg.cau_rotl_ca1, "CA1");

    // CAU_ROTL_CA2 bitfields.
    state->u.k6.fld.cau_rotl_ca2.ca2 = cm_object_get_child_by_name(state->u.k6.reg.cau_rotl_ca2, "CA2");

    // CAU_ROTL_CA3 bitfields.
    state->u.k6.fld.cau_rotl_ca3.ca3 = cm_object_get_child_by_name(state->u.k6.reg.cau_rotl_ca3, "CA3");

    // CAU_ROTL_CA4 bitfields.
    state->u.k6.fld.cau_rotl_ca4.ca4 = cm_object_get_child_by_name(state->u.k6.reg.cau_rotl_ca4, "CA4");

    // CAU_ROTL_CA5 bitfields.
    state->u.k6.fld.cau_rotl_ca5.ca5 = cm_object_get_child_by_name(state->u.k6.reg.cau_rotl_ca5, "CA5");

    // CAU_ROTL_CA6 bitfields.
    state->u.k6.fld.cau_rotl_ca6.ca6 = cm_object_get_child_by_name(state->u.k6.reg.cau_rotl_ca6, "CA6");

    // CAU_ROTL_CA7 bitfields.
    state->u.k6.fld.cau_rotl_ca7.ca7 = cm_object_get_child_by_name(state->u.k6.reg.cau_rotl_ca7, "CA7");

    // CAU_ROTL_CA8 bitfields.
    state->u.k6.fld.cau_rotl_ca8.ca8 = cm_object_get_child_by_name(state->u.k6.reg.cau_rotl_ca8, "CA8");

    // CAU_AESC_CASR bitfields.
    state->u.k6.fld.cau_aesc_casr.ic = cm_object_get_child_by_name(state->u.k6.reg.cau_aesc_casr, "IC");
    state->u.k6.fld.cau_aesc_casr.dpe = cm_object_get_child_by_name(state->u.k6.reg.cau_aesc_casr, "DPE");
    state->u.k6.fld.cau_aesc_casr.ver = cm_object_get_child_by_name(state->u.k6.reg.cau_aesc_casr, "VER");

    // CAU_AESC_CAA bitfields.
    state->u.k6.fld.cau_aesc_caa.acc = cm_object_get_child_by_name(state->u.k6.reg.cau_aesc_caa, "ACC");

    // CAU_AESC_CA0 bitfields.
    state->u.k6.fld.cau_aesc_ca0.ca0 = cm_object_get_child_by_name(state->u.k6.reg.cau_aesc_ca0, "CA0");

    // CAU_AESC_CA1 bitfields.
    state->u.k6.fld.cau_aesc_ca1.ca1 = cm_object_get_child_by_name(state->u.k6.reg.cau_aesc_ca1, "CA1");

    // CAU_AESC_CA2 bitfields.
    state->u.k6.fld.cau_aesc_ca2.ca2 = cm_object_get_child_by_name(state->u.k6.reg.cau_aesc_ca2, "CA2");

    // CAU_AESC_CA3 bitfields.
    state->u.k6.fld.cau_aesc_ca3.ca3 = cm_object_get_child_by_name(state->u.k6.reg.cau_aesc_ca3, "CA3");

    // CAU_AESC_CA4 bitfields.
    state->u.k6.fld.cau_aesc_ca4.ca4 = cm_object_get_child_by_name(state->u.k6.reg.cau_aesc_ca4, "CA4");

    // CAU_AESC_CA5 bitfields.
    state->u.k6.fld.cau_aesc_ca5.ca5 = cm_object_get_child_by_name(state->u.k6.reg.cau_aesc_ca5, "CA5");

    // CAU_AESC_CA6 bitfields.
    state->u.k6.fld.cau_aesc_ca6.ca6 = cm_object_get_child_by_name(state->u.k6.reg.cau_aesc_ca6, "CA6");

    // CAU_AESC_CA7 bitfields.
    state->u.k6.fld.cau_aesc_ca7.ca7 = cm_object_get_child_by_name(state->u.k6.reg.cau_aesc_ca7, "CA7");

    // CAU_AESC_CA8 bitfields.
    state->u.k6.fld.cau_aesc_ca8.ca8 = cm_object_get_child_by_name(state->u.k6.reg.cau_aesc_ca8, "CA8");

    // CAU_AESIC_CASR bitfields.
    state->u.k6.fld.cau_aesic_casr.ic = cm_object_get_child_by_name(state->u.k6.reg.cau_aesic_casr, "IC");
    state->u.k6.fld.cau_aesic_casr.dpe = cm_object_get_child_by_name(state->u.k6.reg.cau_aesic_casr, "DPE");
    state->u.k6.fld.cau_aesic_casr.ver = cm_object_get_child_by_name(state->u.k6.reg.cau_aesic_casr, "VER");

    // CAU_AESIC_CAA bitfields.
    state->u.k6.fld.cau_aesic_caa.acc = cm_object_get_child_by_name(state->u.k6.reg.cau_aesic_caa, "ACC");

    // CAU_AESIC_CA0 bitfields.
    state->u.k6.fld.cau_aesic_ca0.ca0 = cm_object_get_child_by_name(state->u.k6.reg.cau_aesic_ca0, "CA0");

    // CAU_AESIC_CA1 bitfields.
    state->u.k6.fld.cau_aesic_ca1.ca1 = cm_object_get_child_by_name(state->u.k6.reg.cau_aesic_ca1, "CA1");

    // CAU_AESIC_CA2 bitfields.
    state->u.k6.fld.cau_aesic_ca2.ca2 = cm_object_get_child_by_name(state->u.k6.reg.cau_aesic_ca2, "CA2");

    // CAU_AESIC_CA3 bitfields.
    state->u.k6.fld.cau_aesic_ca3.ca3 = cm_object_get_child_by_name(state->u.k6.reg.cau_aesic_ca3, "CA3");

    // CAU_AESIC_CA4 bitfields.
    state->u.k6.fld.cau_aesic_ca4.ca4 = cm_object_get_child_by_name(state->u.k6.reg.cau_aesic_ca4, "CA4");

    // CAU_AESIC_CA5 bitfields.
    state->u.k6.fld.cau_aesic_ca5.ca5 = cm_object_get_child_by_name(state->u.k6.reg.cau_aesic_ca5, "CA5");

    // CAU_AESIC_CA6 bitfields.
    state->u.k6.fld.cau_aesic_ca6.ca6 = cm_object_get_child_by_name(state->u.k6.reg.cau_aesic_ca6, "CA6");

    // CAU_AESIC_CA7 bitfields.
    state->u.k6.fld.cau_aesic_ca7.ca7 = cm_object_get_child_by_name(state->u.k6.reg.cau_aesic_ca7, "CA7");

    // CAU_AESIC_CA8 bitfields.
    state->u.k6.fld.cau_aesic_ca8.ca8 = cm_object_get_child_by_name(state->u.k6.reg.cau_aesic_ca8, "CA8");
}

// ----- 8< ----- 8< -----  8< ----- 8< ----- 8< ----- 8< ----- 8< -----

// ----- Private --------------------------------------------------------------

#if 0
static peripheral_register_t kinetis_cau_xxx_pre_write_callback(Object *reg,
        Object *periph, uint32_t addr, uint32_t offset, unsigned size,
        peripheral_register_t value, peripheral_register_t full_value)
{
    KinetisCAUState *state = KINETIS_CAU_STATE(periph);

    peripheral_register_t prev_value = peripheral_register_get_raw_prev_value(reg);

    // TODO: Add code to adjust the value (like applying some masks,
    // for example prevent setting interrupts not enabled).
    // Also process cleared/set by write 1/0 bits.
    // The returned value will be stored in the register value.

    return full_value;
}

static void kinetis_cau_xxx_post_write_callback(Object *reg, Object *periph,
        uint32_t addr, uint32_t offset, unsigned size,
        peripheral_register_t value, peripheral_register_t full_value)
{
    KinetisCAUState *state = KINETIS_CAU_STATE(periph);

    peripheral_register_t prev_value = peripheral_register_get_raw_prev_value(reg);
    // The new register value is full_value, the old one is prev_value.

    // TODO: Add code to send the value to the consumer.
}

static peripheral_register_t kinetis_cau_xxx_pre_read_callback(Object *reg,
        Object *periph, uint32_t addr, uint32_t offset, unsigned size)
{
    KinetisCAUState *state = KINETIS_CAU_STATE(periph);

    peripheral_register_t value = 0;

    // Add code to get the value from the producer, and return it.

    // This value, possibly masked, will be stored in the register
    // and returned when the register is read.
    return value;
}

static void kinetis_cau_xxx_post_read_callback(Object *reg, Object *periph,
        uint32_t addr, uint32_t offset, unsigned size)
{
    KinetisCAUState *state = KINETIS_CAU_STATE(periph);

    peripheral_register_t value = peripheral_register_get_raw_value(reg);

    // TODO: add code to perform the post read actions, like clearing some bits.
}
#endif

// ----------------------------------------------------------------------------

// TODO: remove this if the peripheral is always enabled.
static bool kinetis_cau_is_enabled(Object *obj)
{
    KinetisCAUState *state = KINETIS_CAU_STATE(obj);

    if (register_bitfield_is_non_zero(state->enabling_bit)) {
        return true; // Positive logic, bit == 1 means enabled.
    }

    // Not enabled
    return false;
}

static void kinetis_cau_instance_init_callback(Object *obj)
{
    qemu_log_function_name();

    KinetisCAUState *state = KINETIS_CAU_STATE(obj);

    // Capabilities are not yet available.

    // TODO: remove this if the peripheral is always enabled.
    state->enabling_bit = NULL;
    
    // TODO: Add code to initialise all members.
}

static void kinetis_cau_realize_callback(DeviceState *dev, Error **errp)
{
    qemu_log_function_name();

    // Call parent realize().
    if (!cm_device_parent_realize(dev, errp, TYPE_KINETIS_CAU)) {
        return;
    }

    KinetisMCUState *mcu = kinetis_mcu_get();
    CortexMState *cm_state = CORTEXM_MCU_STATE(mcu);

    KinetisCAUState *state = KINETIS_CAU_STATE(dev);
    // First thing first: get capabilities from MCU, needed everywhere.
    state->capabilities = mcu->capabilities;

    // Also keep a local pointer, to access them easier.
    const KinetisCapabilities *capabilities = state->capabilities;
    assert(capabilities != NULL);

    Object *obj = OBJECT(dev);

    const char *periph_name = "CAU";

    svd_set_peripheral_address_block(cm_state->svd_json, periph_name, obj);
    peripheral_create_memory_region(obj);

    // TODO: remove this if the peripheral is always enabled.
    char enabling_bit_name[KINETIS_RCC_SIZEOF_ENABLING_BITFIELD];

    switch (capabilities->family) {
    case KINETIS_FAMILY_K6:


            mk64f12_cau_create_objects(obj, cm_state->svd_json, periph_name);

            // TODO: add actions.
            // cm_object_property_set_str(state->u.k6.fld.xxx.fff, "GGG", "follows");
            // cm_object_property_set_str(state->u.k6.fld.xxx.fff, "GGG", "cleared-by");

            // TODO: add callbacks.
            // peripheral_register_set_pre_read(state->k6.reg.xxx, &kinetis_cau_xxx_pre_read_callback);
            // peripheral_register_set_post_read(state->k6.reg.xxx, &kinetis_cau_xxx_post_read_callback);
            // peripheral_register_set_pre_read(state->k6.reg.xxx, &kinetis_cau_xxx_pret_read_callback);
            // peripheral_register_set_post_write(state->k6.reg.xxx, &kinetis_cau_xxx_post_write_callback);

            // TODO: add interrupts.

            // TODO: remove this if the peripheral is always enabled.
            snprintf(enabling_bit_name, sizeof(enabling_bit_name) - 1,
                DEVICE_PATH_KINETIS_RCC "/AHB1ENR/CAUEN");


        break;

    default:
        assert(false);
        break;
    }

    // TODO: remove this if the peripheral is always enabled.
    state->enabling_bit = OBJECT(cm_device_by_name(enabling_bit_name));

    peripheral_prepare_registers(obj);
}

static void kinetis_cau_reset_callback(DeviceState *dev)
{
    qemu_log_function_name();

    // Call parent reset(); this will reset all children registers.
    cm_device_parent_reset(dev, TYPE_KINETIS_CAU);
}

static void kinetis_cau_class_init_callback(ObjectClass *klass, void *data)
{
    DeviceClass *dc = DEVICE_CLASS(klass);

    dc->reset = kinetis_cau_reset_callback;
    dc->realize = kinetis_cau_realize_callback;

    // TODO: remove this if the peripheral is always enabled.
    PeripheralClass *per_class = PERIPHERAL_CLASS(klass);
    per_class->is_enabled = kinetis_cau_is_enabled;
}

static const TypeInfo kinetis_cau_type_info = {
    .name = TYPE_KINETIS_CAU,
    .parent = TYPE_KINETIS_CAU_PARENT,
    .instance_init = kinetis_cau_instance_init_callback,
    .instance_size = sizeof(KinetisCAUState),
    .class_init = kinetis_cau_class_init_callback,
    .class_size = sizeof(KinetisCAUClass) };

static void kinetis_cau_register_types(void)
{
    type_register_static(&kinetis_cau_type_info);
}

type_init(kinetis_cau_register_types);

// ----------------------------------------------------------------------------
