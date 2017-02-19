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

#include <hw/cortexm/kinetis/mpu.h>
#include <hw/cortexm/kinetis/mcu.h>
#include <hw/cortexm/helper.h>
#include <hw/cortexm/svd.h>

// ----- Generated code -------------------------------------------------------
//
// ----- 8< ----- 8< -----  8< ----- 8< ----- 8< ----- 8< ----- 8< -----

// DO NOT EDIT! Automatically generated!
static void mk64f12_mpu_create_objects(Object *obj, JSON_Object *svd, const char *name)
{
    KinetisMPUState *state = KINETIS_MPU_STATE(obj);

    JSON_Object *periph = svd_get_peripheral_by_name(svd, name);
    svd_add_peripheral_properties_and_children(obj, periph, svd);

    // Registers. 
    state->u.k6.reg.cesr = cm_object_get_child_by_name(obj, "CESR");
    state->u.k6.reg.ear[0] = cm_object_get_child_by_name(obj, "EAR0");
    state->u.k6.reg.ear[1] = cm_object_get_child_by_name(obj, "EAR1");
    state->u.k6.reg.ear[2] = cm_object_get_child_by_name(obj, "EAR2");
    state->u.k6.reg.ear[3] = cm_object_get_child_by_name(obj, "EAR3");
    state->u.k6.reg.ear[4] = cm_object_get_child_by_name(obj, "EAR4");
    state->u.k6.reg.edr[0] = cm_object_get_child_by_name(obj, "EDR0");
    state->u.k6.reg.edr[1] = cm_object_get_child_by_name(obj, "EDR1");
    state->u.k6.reg.edr[2] = cm_object_get_child_by_name(obj, "EDR2");
    state->u.k6.reg.edr[3] = cm_object_get_child_by_name(obj, "EDR3");
    state->u.k6.reg.edr[4] = cm_object_get_child_by_name(obj, "EDR4");
    state->u.k6.reg.rgd_word0[0] = cm_object_get_child_by_name(obj, "RGD0_WORD0");
    state->u.k6.reg.rgd_word0[1] = cm_object_get_child_by_name(obj, "RGD1_WORD0");
    state->u.k6.reg.rgd_word0[2] = cm_object_get_child_by_name(obj, "RGD2_WORD0");
    state->u.k6.reg.rgd_word0[3] = cm_object_get_child_by_name(obj, "RGD3_WORD0");
    state->u.k6.reg.rgd_word0[4] = cm_object_get_child_by_name(obj, "RGD4_WORD0");
    state->u.k6.reg.rgd_word0[5] = cm_object_get_child_by_name(obj, "RGD5_WORD0");
    state->u.k6.reg.rgd_word0[6] = cm_object_get_child_by_name(obj, "RGD6_WORD0");
    state->u.k6.reg.rgd_word0[7] = cm_object_get_child_by_name(obj, "RGD7_WORD0");
    state->u.k6.reg.rgd_word0[8] = cm_object_get_child_by_name(obj, "RGD8_WORD0");
    state->u.k6.reg.rgd_word0[9] = cm_object_get_child_by_name(obj, "RGD9_WORD0");
    state->u.k6.reg.rgd_word0[10] = cm_object_get_child_by_name(obj, "RGD10_WORD0");
    state->u.k6.reg.rgd_word0[11] = cm_object_get_child_by_name(obj, "RGD11_WORD0");
    state->u.k6.reg.rgd_word1[0] = cm_object_get_child_by_name(obj, "RGD0_WORD1");
    state->u.k6.reg.rgd_word1[1] = cm_object_get_child_by_name(obj, "RGD1_WORD1");
    state->u.k6.reg.rgd_word1[2] = cm_object_get_child_by_name(obj, "RGD2_WORD1");
    state->u.k6.reg.rgd_word1[3] = cm_object_get_child_by_name(obj, "RGD3_WORD1");
    state->u.k6.reg.rgd_word1[4] = cm_object_get_child_by_name(obj, "RGD4_WORD1");
    state->u.k6.reg.rgd_word1[5] = cm_object_get_child_by_name(obj, "RGD5_WORD1");
    state->u.k6.reg.rgd_word1[6] = cm_object_get_child_by_name(obj, "RGD6_WORD1");
    state->u.k6.reg.rgd_word1[7] = cm_object_get_child_by_name(obj, "RGD7_WORD1");
    state->u.k6.reg.rgd_word1[8] = cm_object_get_child_by_name(obj, "RGD8_WORD1");
    state->u.k6.reg.rgd_word1[9] = cm_object_get_child_by_name(obj, "RGD9_WORD1");
    state->u.k6.reg.rgd_word1[10] = cm_object_get_child_by_name(obj, "RGD10_WORD1");
    state->u.k6.reg.rgd_word1[11] = cm_object_get_child_by_name(obj, "RGD11_WORD1");
    state->u.k6.reg.rgd_word2[0] = cm_object_get_child_by_name(obj, "RGD0_WORD2");
    state->u.k6.reg.rgd_word2[1] = cm_object_get_child_by_name(obj, "RGD1_WORD2");
    state->u.k6.reg.rgd_word2[2] = cm_object_get_child_by_name(obj, "RGD2_WORD2");
    state->u.k6.reg.rgd_word2[3] = cm_object_get_child_by_name(obj, "RGD3_WORD2");
    state->u.k6.reg.rgd_word2[4] = cm_object_get_child_by_name(obj, "RGD4_WORD2");
    state->u.k6.reg.rgd_word2[5] = cm_object_get_child_by_name(obj, "RGD5_WORD2");
    state->u.k6.reg.rgd_word2[6] = cm_object_get_child_by_name(obj, "RGD6_WORD2");
    state->u.k6.reg.rgd_word2[7] = cm_object_get_child_by_name(obj, "RGD7_WORD2");
    state->u.k6.reg.rgd_word2[8] = cm_object_get_child_by_name(obj, "RGD8_WORD2");
    state->u.k6.reg.rgd_word2[9] = cm_object_get_child_by_name(obj, "RGD9_WORD2");
    state->u.k6.reg.rgd_word2[10] = cm_object_get_child_by_name(obj, "RGD10_WORD2");
    state->u.k6.reg.rgd_word2[11] = cm_object_get_child_by_name(obj, "RGD11_WORD2");
    state->u.k6.reg.rgd_word3[0] = cm_object_get_child_by_name(obj, "RGD0_WORD3");
    state->u.k6.reg.rgd_word3[1] = cm_object_get_child_by_name(obj, "RGD1_WORD3");
    state->u.k6.reg.rgd_word3[2] = cm_object_get_child_by_name(obj, "RGD2_WORD3");
    state->u.k6.reg.rgd_word3[3] = cm_object_get_child_by_name(obj, "RGD3_WORD3");
    state->u.k6.reg.rgd_word3[4] = cm_object_get_child_by_name(obj, "RGD4_WORD3");
    state->u.k6.reg.rgd_word3[5] = cm_object_get_child_by_name(obj, "RGD5_WORD3");
    state->u.k6.reg.rgd_word3[6] = cm_object_get_child_by_name(obj, "RGD6_WORD3");
    state->u.k6.reg.rgd_word3[7] = cm_object_get_child_by_name(obj, "RGD7_WORD3");
    state->u.k6.reg.rgd_word3[8] = cm_object_get_child_by_name(obj, "RGD8_WORD3");
    state->u.k6.reg.rgd_word3[9] = cm_object_get_child_by_name(obj, "RGD9_WORD3");
    state->u.k6.reg.rgd_word3[10] = cm_object_get_child_by_name(obj, "RGD10_WORD3");
    state->u.k6.reg.rgd_word3[11] = cm_object_get_child_by_name(obj, "RGD11_WORD3");
    state->u.k6.reg.rgdaac[0] = cm_object_get_child_by_name(obj, "RGDAAC0");
    state->u.k6.reg.rgdaac[1] = cm_object_get_child_by_name(obj, "RGDAAC1");
    state->u.k6.reg.rgdaac[2] = cm_object_get_child_by_name(obj, "RGDAAC2");
    state->u.k6.reg.rgdaac[3] = cm_object_get_child_by_name(obj, "RGDAAC3");
    state->u.k6.reg.rgdaac[4] = cm_object_get_child_by_name(obj, "RGDAAC4");
    state->u.k6.reg.rgdaac[5] = cm_object_get_child_by_name(obj, "RGDAAC5");
    state->u.k6.reg.rgdaac[6] = cm_object_get_child_by_name(obj, "RGDAAC6");
    state->u.k6.reg.rgdaac[7] = cm_object_get_child_by_name(obj, "RGDAAC7");
    state->u.k6.reg.rgdaac[8] = cm_object_get_child_by_name(obj, "RGDAAC8");
    state->u.k6.reg.rgdaac[9] = cm_object_get_child_by_name(obj, "RGDAAC9");
    state->u.k6.reg.rgdaac[10] = cm_object_get_child_by_name(obj, "RGDAAC10");
    state->u.k6.reg.rgdaac[11] = cm_object_get_child_by_name(obj, "RGDAAC11");

    // CESR bitfields.
    state->u.k6.fld.cesr.vld = cm_object_get_child_by_name(state->u.k6.reg.cesr, "VLD");
    state->u.k6.fld.cesr.nrgd = cm_object_get_child_by_name(state->u.k6.reg.cesr, "NRGD");
    state->u.k6.fld.cesr.nsp = cm_object_get_child_by_name(state->u.k6.reg.cesr, "NSP");
    state->u.k6.fld.cesr.hrl = cm_object_get_child_by_name(state->u.k6.reg.cesr, "HRL");
    state->u.k6.fld.cesr.sperr = cm_object_get_child_by_name(state->u.k6.reg.cesr, "SPERR");
    // EAR0 bitfields.
    state->u.k6.fld.ear[0].eaddr = cm_object_get_child_by_name(state->u.k6.reg.ear[0], "EADDR");
    // EAR1 bitfields.
    state->u.k6.fld.ear[1].eaddr = cm_object_get_child_by_name(state->u.k6.reg.ear[1], "EADDR");
    // EAR2 bitfields.
    state->u.k6.fld.ear[2].eaddr = cm_object_get_child_by_name(state->u.k6.reg.ear[2], "EADDR");
    // EAR3 bitfields.
    state->u.k6.fld.ear[3].eaddr = cm_object_get_child_by_name(state->u.k6.reg.ear[3], "EADDR");
    // EAR4 bitfields.
    state->u.k6.fld.ear[4].eaddr = cm_object_get_child_by_name(state->u.k6.reg.ear[4], "EADDR");
    // EDR0 bitfields.
    state->u.k6.fld.edr[0].erw = cm_object_get_child_by_name(state->u.k6.reg.edr[0], "ERW");
    state->u.k6.fld.edr[0].eattr = cm_object_get_child_by_name(state->u.k6.reg.edr[0], "EATTR");
    state->u.k6.fld.edr[0].emn = cm_object_get_child_by_name(state->u.k6.reg.edr[0], "EMN");
    state->u.k6.fld.edr[0].epid = cm_object_get_child_by_name(state->u.k6.reg.edr[0], "EPID");
    state->u.k6.fld.edr[0].eacd = cm_object_get_child_by_name(state->u.k6.reg.edr[0], "EACD");
    // EDR1 bitfields.
    state->u.k6.fld.edr[1].erw = cm_object_get_child_by_name(state->u.k6.reg.edr[1], "ERW");
    state->u.k6.fld.edr[1].eattr = cm_object_get_child_by_name(state->u.k6.reg.edr[1], "EATTR");
    state->u.k6.fld.edr[1].emn = cm_object_get_child_by_name(state->u.k6.reg.edr[1], "EMN");
    state->u.k6.fld.edr[1].epid = cm_object_get_child_by_name(state->u.k6.reg.edr[1], "EPID");
    state->u.k6.fld.edr[1].eacd = cm_object_get_child_by_name(state->u.k6.reg.edr[1], "EACD");
    // EDR2 bitfields.
    state->u.k6.fld.edr[2].erw = cm_object_get_child_by_name(state->u.k6.reg.edr[2], "ERW");
    state->u.k6.fld.edr[2].eattr = cm_object_get_child_by_name(state->u.k6.reg.edr[2], "EATTR");
    state->u.k6.fld.edr[2].emn = cm_object_get_child_by_name(state->u.k6.reg.edr[2], "EMN");
    state->u.k6.fld.edr[2].epid = cm_object_get_child_by_name(state->u.k6.reg.edr[2], "EPID");
    state->u.k6.fld.edr[2].eacd = cm_object_get_child_by_name(state->u.k6.reg.edr[2], "EACD");
    // EDR3 bitfields.
    state->u.k6.fld.edr[3].erw = cm_object_get_child_by_name(state->u.k6.reg.edr[3], "ERW");
    state->u.k6.fld.edr[3].eattr = cm_object_get_child_by_name(state->u.k6.reg.edr[3], "EATTR");
    state->u.k6.fld.edr[3].emn = cm_object_get_child_by_name(state->u.k6.reg.edr[3], "EMN");
    state->u.k6.fld.edr[3].epid = cm_object_get_child_by_name(state->u.k6.reg.edr[3], "EPID");
    state->u.k6.fld.edr[3].eacd = cm_object_get_child_by_name(state->u.k6.reg.edr[3], "EACD");
    // EDR4 bitfields.
    state->u.k6.fld.edr[4].erw = cm_object_get_child_by_name(state->u.k6.reg.edr[4], "ERW");
    state->u.k6.fld.edr[4].eattr = cm_object_get_child_by_name(state->u.k6.reg.edr[4], "EATTR");
    state->u.k6.fld.edr[4].emn = cm_object_get_child_by_name(state->u.k6.reg.edr[4], "EMN");
    state->u.k6.fld.edr[4].epid = cm_object_get_child_by_name(state->u.k6.reg.edr[4], "EPID");
    state->u.k6.fld.edr[4].eacd = cm_object_get_child_by_name(state->u.k6.reg.edr[4], "EACD");
    // RGD0_WORD0 bitfields.
    state->u.k6.fld.rgd_word0[0].srtaddr = cm_object_get_child_by_name(state->u.k6.reg.rgd_word0[0], "SRTADDR");
    // RGD1_WORD0 bitfields.
    state->u.k6.fld.rgd_word0[1].srtaddr = cm_object_get_child_by_name(state->u.k6.reg.rgd_word0[1], "SRTADDR");
    // RGD2_WORD0 bitfields.
    state->u.k6.fld.rgd_word0[2].srtaddr = cm_object_get_child_by_name(state->u.k6.reg.rgd_word0[2], "SRTADDR");
    // RGD3_WORD0 bitfields.
    state->u.k6.fld.rgd_word0[3].srtaddr = cm_object_get_child_by_name(state->u.k6.reg.rgd_word0[3], "SRTADDR");
    // RGD4_WORD0 bitfields.
    state->u.k6.fld.rgd_word0[4].srtaddr = cm_object_get_child_by_name(state->u.k6.reg.rgd_word0[4], "SRTADDR");
    // RGD5_WORD0 bitfields.
    state->u.k6.fld.rgd_word0[5].srtaddr = cm_object_get_child_by_name(state->u.k6.reg.rgd_word0[5], "SRTADDR");
    // RGD6_WORD0 bitfields.
    state->u.k6.fld.rgd_word0[6].srtaddr = cm_object_get_child_by_name(state->u.k6.reg.rgd_word0[6], "SRTADDR");
    // RGD7_WORD0 bitfields.
    state->u.k6.fld.rgd_word0[7].srtaddr = cm_object_get_child_by_name(state->u.k6.reg.rgd_word0[7], "SRTADDR");
    // RGD8_WORD0 bitfields.
    state->u.k6.fld.rgd_word0[8].srtaddr = cm_object_get_child_by_name(state->u.k6.reg.rgd_word0[8], "SRTADDR");
    // RGD9_WORD0 bitfields.
    state->u.k6.fld.rgd_word0[9].srtaddr = cm_object_get_child_by_name(state->u.k6.reg.rgd_word0[9], "SRTADDR");
    // RGD10_WORD0 bitfields.
    state->u.k6.fld.rgd_word0[10].srtaddr = cm_object_get_child_by_name(state->u.k6.reg.rgd_word0[10], "SRTADDR");
    // RGD11_WORD0 bitfields.
    state->u.k6.fld.rgd_word0[11].srtaddr = cm_object_get_child_by_name(state->u.k6.reg.rgd_word0[11], "SRTADDR");
    // RGD0_WORD1 bitfields.
    state->u.k6.fld.rgd_word1[0].endaddr = cm_object_get_child_by_name(state->u.k6.reg.rgd_word1[0], "ENDADDR");
    // RGD1_WORD1 bitfields.
    state->u.k6.fld.rgd_word1[1].endaddr = cm_object_get_child_by_name(state->u.k6.reg.rgd_word1[1], "ENDADDR");
    // RGD2_WORD1 bitfields.
    state->u.k6.fld.rgd_word1[2].endaddr = cm_object_get_child_by_name(state->u.k6.reg.rgd_word1[2], "ENDADDR");
    // RGD3_WORD1 bitfields.
    state->u.k6.fld.rgd_word1[3].endaddr = cm_object_get_child_by_name(state->u.k6.reg.rgd_word1[3], "ENDADDR");
    // RGD4_WORD1 bitfields.
    state->u.k6.fld.rgd_word1[4].endaddr = cm_object_get_child_by_name(state->u.k6.reg.rgd_word1[4], "ENDADDR");
    // RGD5_WORD1 bitfields.
    state->u.k6.fld.rgd_word1[5].endaddr = cm_object_get_child_by_name(state->u.k6.reg.rgd_word1[5], "ENDADDR");
    // RGD6_WORD1 bitfields.
    state->u.k6.fld.rgd_word1[6].endaddr = cm_object_get_child_by_name(state->u.k6.reg.rgd_word1[6], "ENDADDR");
    // RGD7_WORD1 bitfields.
    state->u.k6.fld.rgd_word1[7].endaddr = cm_object_get_child_by_name(state->u.k6.reg.rgd_word1[7], "ENDADDR");
    // RGD8_WORD1 bitfields.
    state->u.k6.fld.rgd_word1[8].endaddr = cm_object_get_child_by_name(state->u.k6.reg.rgd_word1[8], "ENDADDR");
    // RGD9_WORD1 bitfields.
    state->u.k6.fld.rgd_word1[9].endaddr = cm_object_get_child_by_name(state->u.k6.reg.rgd_word1[9], "ENDADDR");
    // RGD10_WORD1 bitfields.
    state->u.k6.fld.rgd_word1[10].endaddr = cm_object_get_child_by_name(state->u.k6.reg.rgd_word1[10], "ENDADDR");
    // RGD11_WORD1 bitfields.
    state->u.k6.fld.rgd_word1[11].endaddr = cm_object_get_child_by_name(state->u.k6.reg.rgd_word1[11], "ENDADDR");
    // RGD0_WORD2 bitfields.
    state->u.k6.fld.rgd_word2[0].m0um = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[0], "M0UM");
    state->u.k6.fld.rgd_word2[0].m0sm = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[0], "M0SM");
    state->u.k6.fld.rgd_word2[0].m0pe = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[0], "M0PE");
    state->u.k6.fld.rgd_word2[0].m1um = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[0], "M1UM");
    state->u.k6.fld.rgd_word2[0].m1sm = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[0], "M1SM");
    state->u.k6.fld.rgd_word2[0].m1pe = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[0], "M1PE");
    state->u.k6.fld.rgd_word2[0].m2um = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[0], "M2UM");
    state->u.k6.fld.rgd_word2[0].m2sm = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[0], "M2SM");
    state->u.k6.fld.rgd_word2[0].m2pe = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[0], "M2PE");
    state->u.k6.fld.rgd_word2[0].m3um = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[0], "M3UM");
    state->u.k6.fld.rgd_word2[0].m3sm = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[0], "M3SM");
    state->u.k6.fld.rgd_word2[0].m3pe = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[0], "M3PE");
    state->u.k6.fld.rgd_word2[0].m4we = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[0], "M4WE");
    state->u.k6.fld.rgd_word2[0].m4re = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[0], "M4RE");
    state->u.k6.fld.rgd_word2[0].m5we = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[0], "M5WE");
    state->u.k6.fld.rgd_word2[0].m5re = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[0], "M5RE");
    state->u.k6.fld.rgd_word2[0].m6we = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[0], "M6WE");
    state->u.k6.fld.rgd_word2[0].m6re = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[0], "M6RE");
    state->u.k6.fld.rgd_word2[0].m7we = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[0], "M7WE");
    state->u.k6.fld.rgd_word2[0].m7re = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[0], "M7RE");
    // RGD1_WORD2 bitfields.
    state->u.k6.fld.rgd_word2[1].m0um = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[1], "M0UM");
    state->u.k6.fld.rgd_word2[1].m0sm = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[1], "M0SM");
    state->u.k6.fld.rgd_word2[1].m0pe = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[1], "M0PE");
    state->u.k6.fld.rgd_word2[1].m1um = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[1], "M1UM");
    state->u.k6.fld.rgd_word2[1].m1sm = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[1], "M1SM");
    state->u.k6.fld.rgd_word2[1].m1pe = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[1], "M1PE");
    state->u.k6.fld.rgd_word2[1].m2um = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[1], "M2UM");
    state->u.k6.fld.rgd_word2[1].m2sm = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[1], "M2SM");
    state->u.k6.fld.rgd_word2[1].m2pe = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[1], "M2PE");
    state->u.k6.fld.rgd_word2[1].m3um = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[1], "M3UM");
    state->u.k6.fld.rgd_word2[1].m3sm = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[1], "M3SM");
    state->u.k6.fld.rgd_word2[1].m3pe = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[1], "M3PE");
    state->u.k6.fld.rgd_word2[1].m4we = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[1], "M4WE");
    state->u.k6.fld.rgd_word2[1].m4re = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[1], "M4RE");
    state->u.k6.fld.rgd_word2[1].m5we = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[1], "M5WE");
    state->u.k6.fld.rgd_word2[1].m5re = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[1], "M5RE");
    state->u.k6.fld.rgd_word2[1].m6we = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[1], "M6WE");
    state->u.k6.fld.rgd_word2[1].m6re = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[1], "M6RE");
    state->u.k6.fld.rgd_word2[1].m7we = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[1], "M7WE");
    state->u.k6.fld.rgd_word2[1].m7re = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[1], "M7RE");
    // RGD2_WORD2 bitfields.
    state->u.k6.fld.rgd_word2[2].m0um = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[2], "M0UM");
    state->u.k6.fld.rgd_word2[2].m0sm = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[2], "M0SM");
    state->u.k6.fld.rgd_word2[2].m0pe = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[2], "M0PE");
    state->u.k6.fld.rgd_word2[2].m1um = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[2], "M1UM");
    state->u.k6.fld.rgd_word2[2].m1sm = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[2], "M1SM");
    state->u.k6.fld.rgd_word2[2].m1pe = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[2], "M1PE");
    state->u.k6.fld.rgd_word2[2].m2um = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[2], "M2UM");
    state->u.k6.fld.rgd_word2[2].m2sm = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[2], "M2SM");
    state->u.k6.fld.rgd_word2[2].m2pe = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[2], "M2PE");
    state->u.k6.fld.rgd_word2[2].m3um = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[2], "M3UM");
    state->u.k6.fld.rgd_word2[2].m3sm = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[2], "M3SM");
    state->u.k6.fld.rgd_word2[2].m3pe = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[2], "M3PE");
    state->u.k6.fld.rgd_word2[2].m4we = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[2], "M4WE");
    state->u.k6.fld.rgd_word2[2].m4re = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[2], "M4RE");
    state->u.k6.fld.rgd_word2[2].m5we = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[2], "M5WE");
    state->u.k6.fld.rgd_word2[2].m5re = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[2], "M5RE");
    state->u.k6.fld.rgd_word2[2].m6we = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[2], "M6WE");
    state->u.k6.fld.rgd_word2[2].m6re = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[2], "M6RE");
    state->u.k6.fld.rgd_word2[2].m7we = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[2], "M7WE");
    state->u.k6.fld.rgd_word2[2].m7re = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[2], "M7RE");
    // RGD3_WORD2 bitfields.
    state->u.k6.fld.rgd_word2[3].m0um = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[3], "M0UM");
    state->u.k6.fld.rgd_word2[3].m0sm = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[3], "M0SM");
    state->u.k6.fld.rgd_word2[3].m0pe = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[3], "M0PE");
    state->u.k6.fld.rgd_word2[3].m1um = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[3], "M1UM");
    state->u.k6.fld.rgd_word2[3].m1sm = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[3], "M1SM");
    state->u.k6.fld.rgd_word2[3].m1pe = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[3], "M1PE");
    state->u.k6.fld.rgd_word2[3].m2um = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[3], "M2UM");
    state->u.k6.fld.rgd_word2[3].m2sm = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[3], "M2SM");
    state->u.k6.fld.rgd_word2[3].m2pe = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[3], "M2PE");
    state->u.k6.fld.rgd_word2[3].m3um = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[3], "M3UM");
    state->u.k6.fld.rgd_word2[3].m3sm = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[3], "M3SM");
    state->u.k6.fld.rgd_word2[3].m3pe = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[3], "M3PE");
    state->u.k6.fld.rgd_word2[3].m4we = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[3], "M4WE");
    state->u.k6.fld.rgd_word2[3].m4re = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[3], "M4RE");
    state->u.k6.fld.rgd_word2[3].m5we = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[3], "M5WE");
    state->u.k6.fld.rgd_word2[3].m5re = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[3], "M5RE");
    state->u.k6.fld.rgd_word2[3].m6we = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[3], "M6WE");
    state->u.k6.fld.rgd_word2[3].m6re = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[3], "M6RE");
    state->u.k6.fld.rgd_word2[3].m7we = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[3], "M7WE");
    state->u.k6.fld.rgd_word2[3].m7re = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[3], "M7RE");
    // RGD4_WORD2 bitfields.
    state->u.k6.fld.rgd_word2[4].m0um = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[4], "M0UM");
    state->u.k6.fld.rgd_word2[4].m0sm = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[4], "M0SM");
    state->u.k6.fld.rgd_word2[4].m0pe = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[4], "M0PE");
    state->u.k6.fld.rgd_word2[4].m1um = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[4], "M1UM");
    state->u.k6.fld.rgd_word2[4].m1sm = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[4], "M1SM");
    state->u.k6.fld.rgd_word2[4].m1pe = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[4], "M1PE");
    state->u.k6.fld.rgd_word2[4].m2um = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[4], "M2UM");
    state->u.k6.fld.rgd_word2[4].m2sm = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[4], "M2SM");
    state->u.k6.fld.rgd_word2[4].m2pe = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[4], "M2PE");
    state->u.k6.fld.rgd_word2[4].m3um = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[4], "M3UM");
    state->u.k6.fld.rgd_word2[4].m3sm = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[4], "M3SM");
    state->u.k6.fld.rgd_word2[4].m3pe = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[4], "M3PE");
    state->u.k6.fld.rgd_word2[4].m4we = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[4], "M4WE");
    state->u.k6.fld.rgd_word2[4].m4re = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[4], "M4RE");
    state->u.k6.fld.rgd_word2[4].m5we = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[4], "M5WE");
    state->u.k6.fld.rgd_word2[4].m5re = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[4], "M5RE");
    state->u.k6.fld.rgd_word2[4].m6we = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[4], "M6WE");
    state->u.k6.fld.rgd_word2[4].m6re = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[4], "M6RE");
    state->u.k6.fld.rgd_word2[4].m7we = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[4], "M7WE");
    state->u.k6.fld.rgd_word2[4].m7re = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[4], "M7RE");
    // RGD5_WORD2 bitfields.
    state->u.k6.fld.rgd_word2[5].m0um = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[5], "M0UM");
    state->u.k6.fld.rgd_word2[5].m0sm = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[5], "M0SM");
    state->u.k6.fld.rgd_word2[5].m0pe = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[5], "M0PE");
    state->u.k6.fld.rgd_word2[5].m1um = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[5], "M1UM");
    state->u.k6.fld.rgd_word2[5].m1sm = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[5], "M1SM");
    state->u.k6.fld.rgd_word2[5].m1pe = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[5], "M1PE");
    state->u.k6.fld.rgd_word2[5].m2um = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[5], "M2UM");
    state->u.k6.fld.rgd_word2[5].m2sm = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[5], "M2SM");
    state->u.k6.fld.rgd_word2[5].m2pe = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[5], "M2PE");
    state->u.k6.fld.rgd_word2[5].m3um = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[5], "M3UM");
    state->u.k6.fld.rgd_word2[5].m3sm = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[5], "M3SM");
    state->u.k6.fld.rgd_word2[5].m3pe = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[5], "M3PE");
    state->u.k6.fld.rgd_word2[5].m4we = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[5], "M4WE");
    state->u.k6.fld.rgd_word2[5].m4re = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[5], "M4RE");
    state->u.k6.fld.rgd_word2[5].m5we = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[5], "M5WE");
    state->u.k6.fld.rgd_word2[5].m5re = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[5], "M5RE");
    state->u.k6.fld.rgd_word2[5].m6we = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[5], "M6WE");
    state->u.k6.fld.rgd_word2[5].m6re = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[5], "M6RE");
    state->u.k6.fld.rgd_word2[5].m7we = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[5], "M7WE");
    state->u.k6.fld.rgd_word2[5].m7re = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[5], "M7RE");
    // RGD6_WORD2 bitfields.
    state->u.k6.fld.rgd_word2[6].m0um = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[6], "M0UM");
    state->u.k6.fld.rgd_word2[6].m0sm = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[6], "M0SM");
    state->u.k6.fld.rgd_word2[6].m0pe = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[6], "M0PE");
    state->u.k6.fld.rgd_word2[6].m1um = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[6], "M1UM");
    state->u.k6.fld.rgd_word2[6].m1sm = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[6], "M1SM");
    state->u.k6.fld.rgd_word2[6].m1pe = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[6], "M1PE");
    state->u.k6.fld.rgd_word2[6].m2um = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[6], "M2UM");
    state->u.k6.fld.rgd_word2[6].m2sm = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[6], "M2SM");
    state->u.k6.fld.rgd_word2[6].m2pe = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[6], "M2PE");
    state->u.k6.fld.rgd_word2[6].m3um = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[6], "M3UM");
    state->u.k6.fld.rgd_word2[6].m3sm = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[6], "M3SM");
    state->u.k6.fld.rgd_word2[6].m3pe = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[6], "M3PE");
    state->u.k6.fld.rgd_word2[6].m4we = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[6], "M4WE");
    state->u.k6.fld.rgd_word2[6].m4re = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[6], "M4RE");
    state->u.k6.fld.rgd_word2[6].m5we = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[6], "M5WE");
    state->u.k6.fld.rgd_word2[6].m5re = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[6], "M5RE");
    state->u.k6.fld.rgd_word2[6].m6we = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[6], "M6WE");
    state->u.k6.fld.rgd_word2[6].m6re = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[6], "M6RE");
    state->u.k6.fld.rgd_word2[6].m7we = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[6], "M7WE");
    state->u.k6.fld.rgd_word2[6].m7re = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[6], "M7RE");
    // RGD7_WORD2 bitfields.
    state->u.k6.fld.rgd_word2[7].m0um = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[7], "M0UM");
    state->u.k6.fld.rgd_word2[7].m0sm = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[7], "M0SM");
    state->u.k6.fld.rgd_word2[7].m0pe = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[7], "M0PE");
    state->u.k6.fld.rgd_word2[7].m1um = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[7], "M1UM");
    state->u.k6.fld.rgd_word2[7].m1sm = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[7], "M1SM");
    state->u.k6.fld.rgd_word2[7].m1pe = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[7], "M1PE");
    state->u.k6.fld.rgd_word2[7].m2um = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[7], "M2UM");
    state->u.k6.fld.rgd_word2[7].m2sm = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[7], "M2SM");
    state->u.k6.fld.rgd_word2[7].m2pe = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[7], "M2PE");
    state->u.k6.fld.rgd_word2[7].m3um = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[7], "M3UM");
    state->u.k6.fld.rgd_word2[7].m3sm = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[7], "M3SM");
    state->u.k6.fld.rgd_word2[7].m3pe = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[7], "M3PE");
    state->u.k6.fld.rgd_word2[7].m4we = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[7], "M4WE");
    state->u.k6.fld.rgd_word2[7].m4re = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[7], "M4RE");
    state->u.k6.fld.rgd_word2[7].m5we = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[7], "M5WE");
    state->u.k6.fld.rgd_word2[7].m5re = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[7], "M5RE");
    state->u.k6.fld.rgd_word2[7].m6we = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[7], "M6WE");
    state->u.k6.fld.rgd_word2[7].m6re = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[7], "M6RE");
    state->u.k6.fld.rgd_word2[7].m7we = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[7], "M7WE");
    state->u.k6.fld.rgd_word2[7].m7re = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[7], "M7RE");
    // RGD8_WORD2 bitfields.
    state->u.k6.fld.rgd_word2[8].m0um = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[8], "M0UM");
    state->u.k6.fld.rgd_word2[8].m0sm = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[8], "M0SM");
    state->u.k6.fld.rgd_word2[8].m0pe = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[8], "M0PE");
    state->u.k6.fld.rgd_word2[8].m1um = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[8], "M1UM");
    state->u.k6.fld.rgd_word2[8].m1sm = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[8], "M1SM");
    state->u.k6.fld.rgd_word2[8].m1pe = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[8], "M1PE");
    state->u.k6.fld.rgd_word2[8].m2um = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[8], "M2UM");
    state->u.k6.fld.rgd_word2[8].m2sm = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[8], "M2SM");
    state->u.k6.fld.rgd_word2[8].m2pe = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[8], "M2PE");
    state->u.k6.fld.rgd_word2[8].m3um = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[8], "M3UM");
    state->u.k6.fld.rgd_word2[8].m3sm = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[8], "M3SM");
    state->u.k6.fld.rgd_word2[8].m3pe = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[8], "M3PE");
    state->u.k6.fld.rgd_word2[8].m4we = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[8], "M4WE");
    state->u.k6.fld.rgd_word2[8].m4re = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[8], "M4RE");
    state->u.k6.fld.rgd_word2[8].m5we = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[8], "M5WE");
    state->u.k6.fld.rgd_word2[8].m5re = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[8], "M5RE");
    state->u.k6.fld.rgd_word2[8].m6we = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[8], "M6WE");
    state->u.k6.fld.rgd_word2[8].m6re = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[8], "M6RE");
    state->u.k6.fld.rgd_word2[8].m7we = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[8], "M7WE");
    state->u.k6.fld.rgd_word2[8].m7re = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[8], "M7RE");
    // RGD9_WORD2 bitfields.
    state->u.k6.fld.rgd_word2[9].m0um = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[9], "M0UM");
    state->u.k6.fld.rgd_word2[9].m0sm = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[9], "M0SM");
    state->u.k6.fld.rgd_word2[9].m0pe = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[9], "M0PE");
    state->u.k6.fld.rgd_word2[9].m1um = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[9], "M1UM");
    state->u.k6.fld.rgd_word2[9].m1sm = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[9], "M1SM");
    state->u.k6.fld.rgd_word2[9].m1pe = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[9], "M1PE");
    state->u.k6.fld.rgd_word2[9].m2um = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[9], "M2UM");
    state->u.k6.fld.rgd_word2[9].m2sm = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[9], "M2SM");
    state->u.k6.fld.rgd_word2[9].m2pe = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[9], "M2PE");
    state->u.k6.fld.rgd_word2[9].m3um = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[9], "M3UM");
    state->u.k6.fld.rgd_word2[9].m3sm = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[9], "M3SM");
    state->u.k6.fld.rgd_word2[9].m3pe = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[9], "M3PE");
    state->u.k6.fld.rgd_word2[9].m4we = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[9], "M4WE");
    state->u.k6.fld.rgd_word2[9].m4re = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[9], "M4RE");
    state->u.k6.fld.rgd_word2[9].m5we = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[9], "M5WE");
    state->u.k6.fld.rgd_word2[9].m5re = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[9], "M5RE");
    state->u.k6.fld.rgd_word2[9].m6we = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[9], "M6WE");
    state->u.k6.fld.rgd_word2[9].m6re = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[9], "M6RE");
    state->u.k6.fld.rgd_word2[9].m7we = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[9], "M7WE");
    state->u.k6.fld.rgd_word2[9].m7re = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[9], "M7RE");
    // RGD10_WORD2 bitfields.
    state->u.k6.fld.rgd_word2[10].m0um = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[10], "M0UM");
    state->u.k6.fld.rgd_word2[10].m0sm = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[10], "M0SM");
    state->u.k6.fld.rgd_word2[10].m0pe = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[10], "M0PE");
    state->u.k6.fld.rgd_word2[10].m1um = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[10], "M1UM");
    state->u.k6.fld.rgd_word2[10].m1sm = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[10], "M1SM");
    state->u.k6.fld.rgd_word2[10].m1pe = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[10], "M1PE");
    state->u.k6.fld.rgd_word2[10].m2um = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[10], "M2UM");
    state->u.k6.fld.rgd_word2[10].m2sm = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[10], "M2SM");
    state->u.k6.fld.rgd_word2[10].m2pe = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[10], "M2PE");
    state->u.k6.fld.rgd_word2[10].m3um = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[10], "M3UM");
    state->u.k6.fld.rgd_word2[10].m3sm = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[10], "M3SM");
    state->u.k6.fld.rgd_word2[10].m3pe = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[10], "M3PE");
    state->u.k6.fld.rgd_word2[10].m4we = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[10], "M4WE");
    state->u.k6.fld.rgd_word2[10].m4re = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[10], "M4RE");
    state->u.k6.fld.rgd_word2[10].m5we = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[10], "M5WE");
    state->u.k6.fld.rgd_word2[10].m5re = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[10], "M5RE");
    state->u.k6.fld.rgd_word2[10].m6we = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[10], "M6WE");
    state->u.k6.fld.rgd_word2[10].m6re = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[10], "M6RE");
    state->u.k6.fld.rgd_word2[10].m7we = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[10], "M7WE");
    state->u.k6.fld.rgd_word2[10].m7re = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[10], "M7RE");
    // RGD11_WORD2 bitfields.
    state->u.k6.fld.rgd_word2[11].m0um = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[11], "M0UM");
    state->u.k6.fld.rgd_word2[11].m0sm = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[11], "M0SM");
    state->u.k6.fld.rgd_word2[11].m0pe = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[11], "M0PE");
    state->u.k6.fld.rgd_word2[11].m1um = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[11], "M1UM");
    state->u.k6.fld.rgd_word2[11].m1sm = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[11], "M1SM");
    state->u.k6.fld.rgd_word2[11].m1pe = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[11], "M1PE");
    state->u.k6.fld.rgd_word2[11].m2um = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[11], "M2UM");
    state->u.k6.fld.rgd_word2[11].m2sm = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[11], "M2SM");
    state->u.k6.fld.rgd_word2[11].m2pe = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[11], "M2PE");
    state->u.k6.fld.rgd_word2[11].m3um = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[11], "M3UM");
    state->u.k6.fld.rgd_word2[11].m3sm = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[11], "M3SM");
    state->u.k6.fld.rgd_word2[11].m3pe = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[11], "M3PE");
    state->u.k6.fld.rgd_word2[11].m4we = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[11], "M4WE");
    state->u.k6.fld.rgd_word2[11].m4re = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[11], "M4RE");
    state->u.k6.fld.rgd_word2[11].m5we = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[11], "M5WE");
    state->u.k6.fld.rgd_word2[11].m5re = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[11], "M5RE");
    state->u.k6.fld.rgd_word2[11].m6we = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[11], "M6WE");
    state->u.k6.fld.rgd_word2[11].m6re = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[11], "M6RE");
    state->u.k6.fld.rgd_word2[11].m7we = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[11], "M7WE");
    state->u.k6.fld.rgd_word2[11].m7re = cm_object_get_child_by_name(state->u.k6.reg.rgd_word2[11], "M7RE");
    // RGD0_WORD3 bitfields.
    state->u.k6.fld.rgd_word3[0].vld = cm_object_get_child_by_name(state->u.k6.reg.rgd_word3[0], "VLD");
    state->u.k6.fld.rgd_word3[0].pidmask = cm_object_get_child_by_name(state->u.k6.reg.rgd_word3[0], "PIDMASK");
    state->u.k6.fld.rgd_word3[0].pid = cm_object_get_child_by_name(state->u.k6.reg.rgd_word3[0], "PID");
    // RGD1_WORD3 bitfields.
    state->u.k6.fld.rgd_word3[1].vld = cm_object_get_child_by_name(state->u.k6.reg.rgd_word3[1], "VLD");
    state->u.k6.fld.rgd_word3[1].pidmask = cm_object_get_child_by_name(state->u.k6.reg.rgd_word3[1], "PIDMASK");
    state->u.k6.fld.rgd_word3[1].pid = cm_object_get_child_by_name(state->u.k6.reg.rgd_word3[1], "PID");
    // RGD2_WORD3 bitfields.
    state->u.k6.fld.rgd_word3[2].vld = cm_object_get_child_by_name(state->u.k6.reg.rgd_word3[2], "VLD");
    state->u.k6.fld.rgd_word3[2].pidmask = cm_object_get_child_by_name(state->u.k6.reg.rgd_word3[2], "PIDMASK");
    state->u.k6.fld.rgd_word3[2].pid = cm_object_get_child_by_name(state->u.k6.reg.rgd_word3[2], "PID");
    // RGD3_WORD3 bitfields.
    state->u.k6.fld.rgd_word3[3].vld = cm_object_get_child_by_name(state->u.k6.reg.rgd_word3[3], "VLD");
    state->u.k6.fld.rgd_word3[3].pidmask = cm_object_get_child_by_name(state->u.k6.reg.rgd_word3[3], "PIDMASK");
    state->u.k6.fld.rgd_word3[3].pid = cm_object_get_child_by_name(state->u.k6.reg.rgd_word3[3], "PID");
    // RGD4_WORD3 bitfields.
    state->u.k6.fld.rgd_word3[4].vld = cm_object_get_child_by_name(state->u.k6.reg.rgd_word3[4], "VLD");
    state->u.k6.fld.rgd_word3[4].pidmask = cm_object_get_child_by_name(state->u.k6.reg.rgd_word3[4], "PIDMASK");
    state->u.k6.fld.rgd_word3[4].pid = cm_object_get_child_by_name(state->u.k6.reg.rgd_word3[4], "PID");
    // RGD5_WORD3 bitfields.
    state->u.k6.fld.rgd_word3[5].vld = cm_object_get_child_by_name(state->u.k6.reg.rgd_word3[5], "VLD");
    state->u.k6.fld.rgd_word3[5].pidmask = cm_object_get_child_by_name(state->u.k6.reg.rgd_word3[5], "PIDMASK");
    state->u.k6.fld.rgd_word3[5].pid = cm_object_get_child_by_name(state->u.k6.reg.rgd_word3[5], "PID");
    // RGD6_WORD3 bitfields.
    state->u.k6.fld.rgd_word3[6].vld = cm_object_get_child_by_name(state->u.k6.reg.rgd_word3[6], "VLD");
    state->u.k6.fld.rgd_word3[6].pidmask = cm_object_get_child_by_name(state->u.k6.reg.rgd_word3[6], "PIDMASK");
    state->u.k6.fld.rgd_word3[6].pid = cm_object_get_child_by_name(state->u.k6.reg.rgd_word3[6], "PID");
    // RGD7_WORD3 bitfields.
    state->u.k6.fld.rgd_word3[7].vld = cm_object_get_child_by_name(state->u.k6.reg.rgd_word3[7], "VLD");
    state->u.k6.fld.rgd_word3[7].pidmask = cm_object_get_child_by_name(state->u.k6.reg.rgd_word3[7], "PIDMASK");
    state->u.k6.fld.rgd_word3[7].pid = cm_object_get_child_by_name(state->u.k6.reg.rgd_word3[7], "PID");
    // RGD8_WORD3 bitfields.
    state->u.k6.fld.rgd_word3[8].vld = cm_object_get_child_by_name(state->u.k6.reg.rgd_word3[8], "VLD");
    state->u.k6.fld.rgd_word3[8].pidmask = cm_object_get_child_by_name(state->u.k6.reg.rgd_word3[8], "PIDMASK");
    state->u.k6.fld.rgd_word3[8].pid = cm_object_get_child_by_name(state->u.k6.reg.rgd_word3[8], "PID");
    // RGD9_WORD3 bitfields.
    state->u.k6.fld.rgd_word3[9].vld = cm_object_get_child_by_name(state->u.k6.reg.rgd_word3[9], "VLD");
    state->u.k6.fld.rgd_word3[9].pidmask = cm_object_get_child_by_name(state->u.k6.reg.rgd_word3[9], "PIDMASK");
    state->u.k6.fld.rgd_word3[9].pid = cm_object_get_child_by_name(state->u.k6.reg.rgd_word3[9], "PID");
    // RGD10_WORD3 bitfields.
    state->u.k6.fld.rgd_word3[10].vld = cm_object_get_child_by_name(state->u.k6.reg.rgd_word3[10], "VLD");
    state->u.k6.fld.rgd_word3[10].pidmask = cm_object_get_child_by_name(state->u.k6.reg.rgd_word3[10], "PIDMASK");
    state->u.k6.fld.rgd_word3[10].pid = cm_object_get_child_by_name(state->u.k6.reg.rgd_word3[10], "PID");
    // RGD11_WORD3 bitfields.
    state->u.k6.fld.rgd_word3[11].vld = cm_object_get_child_by_name(state->u.k6.reg.rgd_word3[11], "VLD");
    state->u.k6.fld.rgd_word3[11].pidmask = cm_object_get_child_by_name(state->u.k6.reg.rgd_word3[11], "PIDMASK");
    state->u.k6.fld.rgd_word3[11].pid = cm_object_get_child_by_name(state->u.k6.reg.rgd_word3[11], "PID");
    // RGDAAC0 bitfields.
    state->u.k6.fld.rgdaac[0].m0um = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[0], "M0UM");
    state->u.k6.fld.rgdaac[0].m0sm = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[0], "M0SM");
    state->u.k6.fld.rgdaac[0].m0pe = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[0], "M0PE");
    state->u.k6.fld.rgdaac[0].m1um = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[0], "M1UM");
    state->u.k6.fld.rgdaac[0].m1sm = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[0], "M1SM");
    state->u.k6.fld.rgdaac[0].m1pe = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[0], "M1PE");
    state->u.k6.fld.rgdaac[0].m2um = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[0], "M2UM");
    state->u.k6.fld.rgdaac[0].m2sm = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[0], "M2SM");
    state->u.k6.fld.rgdaac[0].m2pe = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[0], "M2PE");
    state->u.k6.fld.rgdaac[0].m3um = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[0], "M3UM");
    state->u.k6.fld.rgdaac[0].m3sm = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[0], "M3SM");
    state->u.k6.fld.rgdaac[0].m3pe = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[0], "M3PE");
    state->u.k6.fld.rgdaac[0].m4we = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[0], "M4WE");
    state->u.k6.fld.rgdaac[0].m4re = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[0], "M4RE");
    state->u.k6.fld.rgdaac[0].m5we = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[0], "M5WE");
    state->u.k6.fld.rgdaac[0].m5re = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[0], "M5RE");
    state->u.k6.fld.rgdaac[0].m6we = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[0], "M6WE");
    state->u.k6.fld.rgdaac[0].m6re = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[0], "M6RE");
    state->u.k6.fld.rgdaac[0].m7we = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[0], "M7WE");
    state->u.k6.fld.rgdaac[0].m7re = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[0], "M7RE");
    // RGDAAC1 bitfields.
    state->u.k6.fld.rgdaac[1].m0um = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[1], "M0UM");
    state->u.k6.fld.rgdaac[1].m0sm = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[1], "M0SM");
    state->u.k6.fld.rgdaac[1].m0pe = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[1], "M0PE");
    state->u.k6.fld.rgdaac[1].m1um = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[1], "M1UM");
    state->u.k6.fld.rgdaac[1].m1sm = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[1], "M1SM");
    state->u.k6.fld.rgdaac[1].m1pe = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[1], "M1PE");
    state->u.k6.fld.rgdaac[1].m2um = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[1], "M2UM");
    state->u.k6.fld.rgdaac[1].m2sm = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[1], "M2SM");
    state->u.k6.fld.rgdaac[1].m2pe = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[1], "M2PE");
    state->u.k6.fld.rgdaac[1].m3um = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[1], "M3UM");
    state->u.k6.fld.rgdaac[1].m3sm = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[1], "M3SM");
    state->u.k6.fld.rgdaac[1].m3pe = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[1], "M3PE");
    state->u.k6.fld.rgdaac[1].m4we = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[1], "M4WE");
    state->u.k6.fld.rgdaac[1].m4re = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[1], "M4RE");
    state->u.k6.fld.rgdaac[1].m5we = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[1], "M5WE");
    state->u.k6.fld.rgdaac[1].m5re = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[1], "M5RE");
    state->u.k6.fld.rgdaac[1].m6we = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[1], "M6WE");
    state->u.k6.fld.rgdaac[1].m6re = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[1], "M6RE");
    state->u.k6.fld.rgdaac[1].m7we = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[1], "M7WE");
    state->u.k6.fld.rgdaac[1].m7re = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[1], "M7RE");
    // RGDAAC2 bitfields.
    state->u.k6.fld.rgdaac[2].m0um = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[2], "M0UM");
    state->u.k6.fld.rgdaac[2].m0sm = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[2], "M0SM");
    state->u.k6.fld.rgdaac[2].m0pe = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[2], "M0PE");
    state->u.k6.fld.rgdaac[2].m1um = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[2], "M1UM");
    state->u.k6.fld.rgdaac[2].m1sm = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[2], "M1SM");
    state->u.k6.fld.rgdaac[2].m1pe = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[2], "M1PE");
    state->u.k6.fld.rgdaac[2].m2um = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[2], "M2UM");
    state->u.k6.fld.rgdaac[2].m2sm = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[2], "M2SM");
    state->u.k6.fld.rgdaac[2].m2pe = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[2], "M2PE");
    state->u.k6.fld.rgdaac[2].m3um = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[2], "M3UM");
    state->u.k6.fld.rgdaac[2].m3sm = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[2], "M3SM");
    state->u.k6.fld.rgdaac[2].m3pe = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[2], "M3PE");
    state->u.k6.fld.rgdaac[2].m4we = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[2], "M4WE");
    state->u.k6.fld.rgdaac[2].m4re = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[2], "M4RE");
    state->u.k6.fld.rgdaac[2].m5we = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[2], "M5WE");
    state->u.k6.fld.rgdaac[2].m5re = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[2], "M5RE");
    state->u.k6.fld.rgdaac[2].m6we = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[2], "M6WE");
    state->u.k6.fld.rgdaac[2].m6re = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[2], "M6RE");
    state->u.k6.fld.rgdaac[2].m7we = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[2], "M7WE");
    state->u.k6.fld.rgdaac[2].m7re = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[2], "M7RE");
    // RGDAAC3 bitfields.
    state->u.k6.fld.rgdaac[3].m0um = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[3], "M0UM");
    state->u.k6.fld.rgdaac[3].m0sm = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[3], "M0SM");
    state->u.k6.fld.rgdaac[3].m0pe = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[3], "M0PE");
    state->u.k6.fld.rgdaac[3].m1um = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[3], "M1UM");
    state->u.k6.fld.rgdaac[3].m1sm = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[3], "M1SM");
    state->u.k6.fld.rgdaac[3].m1pe = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[3], "M1PE");
    state->u.k6.fld.rgdaac[3].m2um = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[3], "M2UM");
    state->u.k6.fld.rgdaac[3].m2sm = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[3], "M2SM");
    state->u.k6.fld.rgdaac[3].m2pe = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[3], "M2PE");
    state->u.k6.fld.rgdaac[3].m3um = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[3], "M3UM");
    state->u.k6.fld.rgdaac[3].m3sm = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[3], "M3SM");
    state->u.k6.fld.rgdaac[3].m3pe = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[3], "M3PE");
    state->u.k6.fld.rgdaac[3].m4we = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[3], "M4WE");
    state->u.k6.fld.rgdaac[3].m4re = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[3], "M4RE");
    state->u.k6.fld.rgdaac[3].m5we = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[3], "M5WE");
    state->u.k6.fld.rgdaac[3].m5re = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[3], "M5RE");
    state->u.k6.fld.rgdaac[3].m6we = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[3], "M6WE");
    state->u.k6.fld.rgdaac[3].m6re = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[3], "M6RE");
    state->u.k6.fld.rgdaac[3].m7we = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[3], "M7WE");
    state->u.k6.fld.rgdaac[3].m7re = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[3], "M7RE");
    // RGDAAC4 bitfields.
    state->u.k6.fld.rgdaac[4].m0um = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[4], "M0UM");
    state->u.k6.fld.rgdaac[4].m0sm = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[4], "M0SM");
    state->u.k6.fld.rgdaac[4].m0pe = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[4], "M0PE");
    state->u.k6.fld.rgdaac[4].m1um = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[4], "M1UM");
    state->u.k6.fld.rgdaac[4].m1sm = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[4], "M1SM");
    state->u.k6.fld.rgdaac[4].m1pe = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[4], "M1PE");
    state->u.k6.fld.rgdaac[4].m2um = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[4], "M2UM");
    state->u.k6.fld.rgdaac[4].m2sm = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[4], "M2SM");
    state->u.k6.fld.rgdaac[4].m2pe = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[4], "M2PE");
    state->u.k6.fld.rgdaac[4].m3um = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[4], "M3UM");
    state->u.k6.fld.rgdaac[4].m3sm = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[4], "M3SM");
    state->u.k6.fld.rgdaac[4].m3pe = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[4], "M3PE");
    state->u.k6.fld.rgdaac[4].m4we = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[4], "M4WE");
    state->u.k6.fld.rgdaac[4].m4re = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[4], "M4RE");
    state->u.k6.fld.rgdaac[4].m5we = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[4], "M5WE");
    state->u.k6.fld.rgdaac[4].m5re = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[4], "M5RE");
    state->u.k6.fld.rgdaac[4].m6we = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[4], "M6WE");
    state->u.k6.fld.rgdaac[4].m6re = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[4], "M6RE");
    state->u.k6.fld.rgdaac[4].m7we = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[4], "M7WE");
    state->u.k6.fld.rgdaac[4].m7re = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[4], "M7RE");
    // RGDAAC5 bitfields.
    state->u.k6.fld.rgdaac[5].m0um = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[5], "M0UM");
    state->u.k6.fld.rgdaac[5].m0sm = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[5], "M0SM");
    state->u.k6.fld.rgdaac[5].m0pe = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[5], "M0PE");
    state->u.k6.fld.rgdaac[5].m1um = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[5], "M1UM");
    state->u.k6.fld.rgdaac[5].m1sm = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[5], "M1SM");
    state->u.k6.fld.rgdaac[5].m1pe = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[5], "M1PE");
    state->u.k6.fld.rgdaac[5].m2um = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[5], "M2UM");
    state->u.k6.fld.rgdaac[5].m2sm = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[5], "M2SM");
    state->u.k6.fld.rgdaac[5].m2pe = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[5], "M2PE");
    state->u.k6.fld.rgdaac[5].m3um = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[5], "M3UM");
    state->u.k6.fld.rgdaac[5].m3sm = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[5], "M3SM");
    state->u.k6.fld.rgdaac[5].m3pe = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[5], "M3PE");
    state->u.k6.fld.rgdaac[5].m4we = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[5], "M4WE");
    state->u.k6.fld.rgdaac[5].m4re = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[5], "M4RE");
    state->u.k6.fld.rgdaac[5].m5we = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[5], "M5WE");
    state->u.k6.fld.rgdaac[5].m5re = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[5], "M5RE");
    state->u.k6.fld.rgdaac[5].m6we = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[5], "M6WE");
    state->u.k6.fld.rgdaac[5].m6re = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[5], "M6RE");
    state->u.k6.fld.rgdaac[5].m7we = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[5], "M7WE");
    state->u.k6.fld.rgdaac[5].m7re = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[5], "M7RE");
    // RGDAAC6 bitfields.
    state->u.k6.fld.rgdaac[6].m0um = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[6], "M0UM");
    state->u.k6.fld.rgdaac[6].m0sm = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[6], "M0SM");
    state->u.k6.fld.rgdaac[6].m0pe = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[6], "M0PE");
    state->u.k6.fld.rgdaac[6].m1um = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[6], "M1UM");
    state->u.k6.fld.rgdaac[6].m1sm = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[6], "M1SM");
    state->u.k6.fld.rgdaac[6].m1pe = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[6], "M1PE");
    state->u.k6.fld.rgdaac[6].m2um = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[6], "M2UM");
    state->u.k6.fld.rgdaac[6].m2sm = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[6], "M2SM");
    state->u.k6.fld.rgdaac[6].m2pe = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[6], "M2PE");
    state->u.k6.fld.rgdaac[6].m3um = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[6], "M3UM");
    state->u.k6.fld.rgdaac[6].m3sm = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[6], "M3SM");
    state->u.k6.fld.rgdaac[6].m3pe = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[6], "M3PE");
    state->u.k6.fld.rgdaac[6].m4we = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[6], "M4WE");
    state->u.k6.fld.rgdaac[6].m4re = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[6], "M4RE");
    state->u.k6.fld.rgdaac[6].m5we = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[6], "M5WE");
    state->u.k6.fld.rgdaac[6].m5re = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[6], "M5RE");
    state->u.k6.fld.rgdaac[6].m6we = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[6], "M6WE");
    state->u.k6.fld.rgdaac[6].m6re = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[6], "M6RE");
    state->u.k6.fld.rgdaac[6].m7we = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[6], "M7WE");
    state->u.k6.fld.rgdaac[6].m7re = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[6], "M7RE");
    // RGDAAC7 bitfields.
    state->u.k6.fld.rgdaac[7].m0um = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[7], "M0UM");
    state->u.k6.fld.rgdaac[7].m0sm = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[7], "M0SM");
    state->u.k6.fld.rgdaac[7].m0pe = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[7], "M0PE");
    state->u.k6.fld.rgdaac[7].m1um = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[7], "M1UM");
    state->u.k6.fld.rgdaac[7].m1sm = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[7], "M1SM");
    state->u.k6.fld.rgdaac[7].m1pe = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[7], "M1PE");
    state->u.k6.fld.rgdaac[7].m2um = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[7], "M2UM");
    state->u.k6.fld.rgdaac[7].m2sm = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[7], "M2SM");
    state->u.k6.fld.rgdaac[7].m2pe = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[7], "M2PE");
    state->u.k6.fld.rgdaac[7].m3um = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[7], "M3UM");
    state->u.k6.fld.rgdaac[7].m3sm = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[7], "M3SM");
    state->u.k6.fld.rgdaac[7].m3pe = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[7], "M3PE");
    state->u.k6.fld.rgdaac[7].m4we = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[7], "M4WE");
    state->u.k6.fld.rgdaac[7].m4re = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[7], "M4RE");
    state->u.k6.fld.rgdaac[7].m5we = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[7], "M5WE");
    state->u.k6.fld.rgdaac[7].m5re = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[7], "M5RE");
    state->u.k6.fld.rgdaac[7].m6we = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[7], "M6WE");
    state->u.k6.fld.rgdaac[7].m6re = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[7], "M6RE");
    state->u.k6.fld.rgdaac[7].m7we = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[7], "M7WE");
    state->u.k6.fld.rgdaac[7].m7re = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[7], "M7RE");
    // RGDAAC8 bitfields.
    state->u.k6.fld.rgdaac[8].m0um = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[8], "M0UM");
    state->u.k6.fld.rgdaac[8].m0sm = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[8], "M0SM");
    state->u.k6.fld.rgdaac[8].m0pe = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[8], "M0PE");
    state->u.k6.fld.rgdaac[8].m1um = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[8], "M1UM");
    state->u.k6.fld.rgdaac[8].m1sm = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[8], "M1SM");
    state->u.k6.fld.rgdaac[8].m1pe = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[8], "M1PE");
    state->u.k6.fld.rgdaac[8].m2um = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[8], "M2UM");
    state->u.k6.fld.rgdaac[8].m2sm = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[8], "M2SM");
    state->u.k6.fld.rgdaac[8].m2pe = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[8], "M2PE");
    state->u.k6.fld.rgdaac[8].m3um = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[8], "M3UM");
    state->u.k6.fld.rgdaac[8].m3sm = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[8], "M3SM");
    state->u.k6.fld.rgdaac[8].m3pe = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[8], "M3PE");
    state->u.k6.fld.rgdaac[8].m4we = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[8], "M4WE");
    state->u.k6.fld.rgdaac[8].m4re = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[8], "M4RE");
    state->u.k6.fld.rgdaac[8].m5we = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[8], "M5WE");
    state->u.k6.fld.rgdaac[8].m5re = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[8], "M5RE");
    state->u.k6.fld.rgdaac[8].m6we = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[8], "M6WE");
    state->u.k6.fld.rgdaac[8].m6re = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[8], "M6RE");
    state->u.k6.fld.rgdaac[8].m7we = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[8], "M7WE");
    state->u.k6.fld.rgdaac[8].m7re = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[8], "M7RE");
    // RGDAAC9 bitfields.
    state->u.k6.fld.rgdaac[9].m0um = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[9], "M0UM");
    state->u.k6.fld.rgdaac[9].m0sm = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[9], "M0SM");
    state->u.k6.fld.rgdaac[9].m0pe = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[9], "M0PE");
    state->u.k6.fld.rgdaac[9].m1um = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[9], "M1UM");
    state->u.k6.fld.rgdaac[9].m1sm = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[9], "M1SM");
    state->u.k6.fld.rgdaac[9].m1pe = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[9], "M1PE");
    state->u.k6.fld.rgdaac[9].m2um = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[9], "M2UM");
    state->u.k6.fld.rgdaac[9].m2sm = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[9], "M2SM");
    state->u.k6.fld.rgdaac[9].m2pe = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[9], "M2PE");
    state->u.k6.fld.rgdaac[9].m3um = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[9], "M3UM");
    state->u.k6.fld.rgdaac[9].m3sm = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[9], "M3SM");
    state->u.k6.fld.rgdaac[9].m3pe = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[9], "M3PE");
    state->u.k6.fld.rgdaac[9].m4we = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[9], "M4WE");
    state->u.k6.fld.rgdaac[9].m4re = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[9], "M4RE");
    state->u.k6.fld.rgdaac[9].m5we = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[9], "M5WE");
    state->u.k6.fld.rgdaac[9].m5re = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[9], "M5RE");
    state->u.k6.fld.rgdaac[9].m6we = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[9], "M6WE");
    state->u.k6.fld.rgdaac[9].m6re = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[9], "M6RE");
    state->u.k6.fld.rgdaac[9].m7we = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[9], "M7WE");
    state->u.k6.fld.rgdaac[9].m7re = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[9], "M7RE");
    // RGDAAC10 bitfields.
    state->u.k6.fld.rgdaac[10].m0um = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[10], "M0UM");
    state->u.k6.fld.rgdaac[10].m0sm = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[10], "M0SM");
    state->u.k6.fld.rgdaac[10].m0pe = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[10], "M0PE");
    state->u.k6.fld.rgdaac[10].m1um = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[10], "M1UM");
    state->u.k6.fld.rgdaac[10].m1sm = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[10], "M1SM");
    state->u.k6.fld.rgdaac[10].m1pe = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[10], "M1PE");
    state->u.k6.fld.rgdaac[10].m2um = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[10], "M2UM");
    state->u.k6.fld.rgdaac[10].m2sm = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[10], "M2SM");
    state->u.k6.fld.rgdaac[10].m2pe = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[10], "M2PE");
    state->u.k6.fld.rgdaac[10].m3um = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[10], "M3UM");
    state->u.k6.fld.rgdaac[10].m3sm = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[10], "M3SM");
    state->u.k6.fld.rgdaac[10].m3pe = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[10], "M3PE");
    state->u.k6.fld.rgdaac[10].m4we = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[10], "M4WE");
    state->u.k6.fld.rgdaac[10].m4re = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[10], "M4RE");
    state->u.k6.fld.rgdaac[10].m5we = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[10], "M5WE");
    state->u.k6.fld.rgdaac[10].m5re = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[10], "M5RE");
    state->u.k6.fld.rgdaac[10].m6we = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[10], "M6WE");
    state->u.k6.fld.rgdaac[10].m6re = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[10], "M6RE");
    state->u.k6.fld.rgdaac[10].m7we = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[10], "M7WE");
    state->u.k6.fld.rgdaac[10].m7re = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[10], "M7RE");
    // RGDAAC11 bitfields.
    state->u.k6.fld.rgdaac[11].m0um = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[11], "M0UM");
    state->u.k6.fld.rgdaac[11].m0sm = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[11], "M0SM");
    state->u.k6.fld.rgdaac[11].m0pe = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[11], "M0PE");
    state->u.k6.fld.rgdaac[11].m1um = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[11], "M1UM");
    state->u.k6.fld.rgdaac[11].m1sm = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[11], "M1SM");
    state->u.k6.fld.rgdaac[11].m1pe = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[11], "M1PE");
    state->u.k6.fld.rgdaac[11].m2um = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[11], "M2UM");
    state->u.k6.fld.rgdaac[11].m2sm = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[11], "M2SM");
    state->u.k6.fld.rgdaac[11].m2pe = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[11], "M2PE");
    state->u.k6.fld.rgdaac[11].m3um = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[11], "M3UM");
    state->u.k6.fld.rgdaac[11].m3sm = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[11], "M3SM");
    state->u.k6.fld.rgdaac[11].m3pe = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[11], "M3PE");
    state->u.k6.fld.rgdaac[11].m4we = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[11], "M4WE");
    state->u.k6.fld.rgdaac[11].m4re = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[11], "M4RE");
    state->u.k6.fld.rgdaac[11].m5we = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[11], "M5WE");
    state->u.k6.fld.rgdaac[11].m5re = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[11], "M5RE");
    state->u.k6.fld.rgdaac[11].m6we = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[11], "M6WE");
    state->u.k6.fld.rgdaac[11].m6re = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[11], "M6RE");
    state->u.k6.fld.rgdaac[11].m7we = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[11], "M7WE");
    state->u.k6.fld.rgdaac[11].m7re = cm_object_get_child_by_name(state->u.k6.reg.rgdaac[11], "M7RE");
}

// ----- 8< ----- 8< -----  8< ----- 8< ----- 8< ----- 8< ----- 8< -----

// ----- Private --------------------------------------------------------------

#if 0
static peripheral_register_t kinetis_mpu_xxx_pre_write_callback(Object *reg,
        Object *periph, uint32_t addr, uint32_t offset, unsigned size,
        peripheral_register_t value, peripheral_register_t full_value)
{
    KinetisMPUState *state = KINETIS_MPU_STATE(periph);

    peripheral_register_t prev_value = peripheral_register_get_raw_prev_value(reg);

    // TODO: Add code to adjust the value (like applying some masks,
    // for example prevent setting interrupts not enabled).
    // Also process cleared/set by write 1/0 bits.
    // The returned value will be stored in the register value.

    return full_value;
}

static void kinetis_mpu_xxx_post_write_callback(Object *reg, Object *periph,
        uint32_t addr, uint32_t offset, unsigned size,
        peripheral_register_t value, peripheral_register_t full_value)
{
    KinetisMPUState *state = KINETIS_MPU_STATE(periph);

    peripheral_register_t prev_value = peripheral_register_get_raw_prev_value(reg);
    // The new register value is full_value, the old one is prev_value.

    // TODO: Add code to send the value to the consumer.
}

static peripheral_register_t kinetis_mpu_xxx_pre_read_callback(Object *reg,
        Object *periph, uint32_t addr, uint32_t offset, unsigned size)
{
    KinetisMPUState *state = KINETIS_MPU_STATE(periph);

    peripheral_register_t value = 0;

    // Add code to get the value from the producer, and return it.

    // This value, possibly masked, will be stored in the register
    // and returned when the register is read.
    return value;
}

static void kinetis_mpu_xxx_post_read_callback(Object *reg, Object *periph,
        uint32_t addr, uint32_t offset, unsigned size)
{
    KinetisMPUState *state = KINETIS_MPU_STATE(periph);

    peripheral_register_t value = peripheral_register_get_raw_value(reg);

    // TODO: add code to perform the post read actions, like clearing some bits.
}
#endif

// ----------------------------------------------------------------------------

// TODO: remove this if the peripheral is always enabled.
static bool kinetis_mpu_is_enabled(Object *obj)
{
    KinetisMPUState *state = KINETIS_MPU_STATE(obj);

    if (register_bitfield_is_non_zero(state->enabling_bit)) {
        return true; // Positive logic, bit == 1 means enabled.
    }

    // Not enabled
    return false;
}

static void kinetis_mpu_instance_init_callback(Object *obj)
{
    qemu_log_function_name();

    KinetisMPUState *state = KINETIS_MPU_STATE(obj);

    // Capabilities are not yet available.

    // TODO: remove this if the peripheral is always enabled.
    state->enabling_bit = NULL;
    
    // TODO: Add code to initialise all members.
}

static void kinetis_mpu_realize_callback(DeviceState *dev, Error **errp)
{
    qemu_log_function_name();

    // Call parent realize().
    if (!cm_device_parent_realize(dev, errp, TYPE_KINETIS_MPU)) {
        return;
    }

    KinetisMCUState *mcu = kinetis_mcu_get();
    CortexMState *cm_state = CORTEXM_MCU_STATE(mcu);

    KinetisMPUState *state = KINETIS_MPU_STATE(dev);
    // First thing first: get capabilities from MCU, needed everywhere.
    state->capabilities = mcu->capabilities;

    // Also keep a local pointer, to access them easier.
    const KinetisCapabilities *capabilities = state->capabilities;
    assert(capabilities != NULL);

    Object *obj = OBJECT(dev);

    const char *periph_name = "MPU";

    svd_set_peripheral_address_block(cm_state->svd_json, periph_name, obj);
    peripheral_create_memory_region(obj);

    // TODO: remove this if the peripheral is always enabled.
    char enabling_bit_name[KINETIS_RCC_SIZEOF_ENABLING_BITFIELD];

    switch (capabilities->family) {
    case KINETIS_FAMILY_K6:


            mk64f12_mpu_create_objects(obj, cm_state->svd_json, periph_name);

            // TODO: add actions.
            // cm_object_property_set_str(state->u.k6.fld.xxx.fff, "GGG", "follows");
            // cm_object_property_set_str(state->u.k6.fld.xxx.fff, "GGG", "cleared-by");

            // TODO: add callbacks.
            // peripheral_register_set_pre_read(state->k6.reg.xxx, &kinetis_mpu_xxx_pre_read_callback);
            // peripheral_register_set_post_read(state->k6.reg.xxx, &kinetis_mpu_xxx_post_read_callback);
            // peripheral_register_set_pre_read(state->k6.reg.xxx, &kinetis_mpu_xxx_pret_read_callback);
            // peripheral_register_set_post_write(state->k6.reg.xxx, &kinetis_mpu_xxx_post_write_callback);

            // TODO: add interrupts.

            // TODO: remove this if the peripheral is always enabled.
            snprintf(enabling_bit_name, sizeof(enabling_bit_name) - 1,
                DEVICE_PATH_KINETIS_RCC "/AHB1ENR/MPUEN");


        break;

    default:
        assert(false);
        break;
    }

    // TODO: remove this if the peripheral is always enabled.
    state->enabling_bit = OBJECT(cm_device_by_name(enabling_bit_name));

    peripheral_prepare_registers(obj);
}

static void kinetis_mpu_reset_callback(DeviceState *dev)
{
    qemu_log_function_name();

    // Call parent reset(); this will reset all children registers.
    cm_device_parent_reset(dev, TYPE_KINETIS_MPU);
}

static void kinetis_mpu_class_init_callback(ObjectClass *klass, void *data)
{
    DeviceClass *dc = DEVICE_CLASS(klass);

    dc->reset = kinetis_mpu_reset_callback;
    dc->realize = kinetis_mpu_realize_callback;

    // TODO: remove this if the peripheral is always enabled.
    PeripheralClass *per_class = PERIPHERAL_CLASS(klass);
    per_class->is_enabled = kinetis_mpu_is_enabled;
}

static const TypeInfo kinetis_mpu_type_info = {
    .name = TYPE_KINETIS_MPU,
    .parent = TYPE_KINETIS_MPU_PARENT,
    .instance_init = kinetis_mpu_instance_init_callback,
    .instance_size = sizeof(KinetisMPUState),
    .class_init = kinetis_mpu_class_init_callback,
    .class_size = sizeof(KinetisMPUClass) };

static void kinetis_mpu_register_types(void)
{
    type_register_static(&kinetis_mpu_type_info);
}

type_init(kinetis_mpu_register_types);

// ----------------------------------------------------------------------------
