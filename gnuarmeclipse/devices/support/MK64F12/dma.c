/*
 * Kinetis - DMA (Enhanced direct memory access controller) emulation.
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

#include <hw/cortexm/kinetis/dma.h>
#include <hw/cortexm/kinetis/mcu.h>
#include <hw/cortexm/helper.h>
#include <hw/cortexm/svd.h>

// ----- Generated code -------------------------------------------------------
//
// ----- 8< ----- 8< -----  8< ----- 8< ----- 8< ----- 8< ----- 8< -----

// DO NOT EDIT! Automatically generated!
static void mk64f12_dma_create_objects(Object *obj, JSON_Object *svd, const char *name)
{
    KinetisDMAState *state = KINETIS_DMA_STATE(obj);

    JSON_Object *periph = svd_get_peripheral_by_name(svd, name);
    svd_add_peripheral_properties_and_children(obj, periph, svd);

    // Registers. 
    state->u.k6.reg.cr = cm_object_get_child_by_name(obj, "CR");
    state->u.k6.reg.es = cm_object_get_child_by_name(obj, "ES");
    state->u.k6.reg.erq = cm_object_get_child_by_name(obj, "ERQ");
    state->u.k6.reg.eei = cm_object_get_child_by_name(obj, "EEI");
    state->u.k6.reg.ceei = cm_object_get_child_by_name(obj, "CEEI");
    state->u.k6.reg.seei = cm_object_get_child_by_name(obj, "SEEI");
    state->u.k6.reg.cerq = cm_object_get_child_by_name(obj, "CERQ");
    state->u.k6.reg.serq = cm_object_get_child_by_name(obj, "SERQ");
    state->u.k6.reg.cdne = cm_object_get_child_by_name(obj, "CDNE");
    state->u.k6.reg.ssrt = cm_object_get_child_by_name(obj, "SSRT");
    state->u.k6.reg.cerr = cm_object_get_child_by_name(obj, "CERR");
    state->u.k6.reg.cint = cm_object_get_child_by_name(obj, "CINT");
    state->u.k6.reg.int_ = cm_object_get_child_by_name(obj, "INT");
    state->u.k6.reg.err = cm_object_get_child_by_name(obj, "ERR");
    state->u.k6.reg.hrs = cm_object_get_child_by_name(obj, "HRS");
    state->u.k6.reg.dchpri[0] = cm_object_get_child_by_name(obj, "DCHPRI3");
    state->u.k6.reg.dchpri[1] = cm_object_get_child_by_name(obj, "DCHPRI2");
    state->u.k6.reg.dchpri[2] = cm_object_get_child_by_name(obj, "DCHPRI1");
    state->u.k6.reg.dchpri[3] = cm_object_get_child_by_name(obj, "DCHPRI0");
    state->u.k6.reg.dchpri[4] = cm_object_get_child_by_name(obj, "DCHPRI7");
    state->u.k6.reg.dchpri[5] = cm_object_get_child_by_name(obj, "DCHPRI6");
    state->u.k6.reg.dchpri[6] = cm_object_get_child_by_name(obj, "DCHPRI5");
    state->u.k6.reg.dchpri[7] = cm_object_get_child_by_name(obj, "DCHPRI4");
    state->u.k6.reg.dchpri[8] = cm_object_get_child_by_name(obj, "DCHPRI11");
    state->u.k6.reg.dchpri[9] = cm_object_get_child_by_name(obj, "DCHPRI10");
    state->u.k6.reg.dchpri[10] = cm_object_get_child_by_name(obj, "DCHPRI9");
    state->u.k6.reg.dchpri[11] = cm_object_get_child_by_name(obj, "DCHPRI8");
    state->u.k6.reg.dchpri[12] = cm_object_get_child_by_name(obj, "DCHPRI15");
    state->u.k6.reg.dchpri[13] = cm_object_get_child_by_name(obj, "DCHPRI14");
    state->u.k6.reg.dchpri[14] = cm_object_get_child_by_name(obj, "DCHPRI13");
    state->u.k6.reg.dchpri[15] = cm_object_get_child_by_name(obj, "DCHPRI12");
    state->u.k6.reg.tcd_saddr[0] = cm_object_get_child_by_name(obj, "TCD0_SADDR");
    state->u.k6.reg.tcd_saddr[1] = cm_object_get_child_by_name(obj, "TCD1_SADDR");
    state->u.k6.reg.tcd_saddr[2] = cm_object_get_child_by_name(obj, "TCD2_SADDR");
    state->u.k6.reg.tcd_saddr[3] = cm_object_get_child_by_name(obj, "TCD3_SADDR");
    state->u.k6.reg.tcd_saddr[4] = cm_object_get_child_by_name(obj, "TCD4_SADDR");
    state->u.k6.reg.tcd_saddr[5] = cm_object_get_child_by_name(obj, "TCD5_SADDR");
    state->u.k6.reg.tcd_saddr[6] = cm_object_get_child_by_name(obj, "TCD6_SADDR");
    state->u.k6.reg.tcd_saddr[7] = cm_object_get_child_by_name(obj, "TCD7_SADDR");
    state->u.k6.reg.tcd_saddr[8] = cm_object_get_child_by_name(obj, "TCD8_SADDR");
    state->u.k6.reg.tcd_saddr[9] = cm_object_get_child_by_name(obj, "TCD9_SADDR");
    state->u.k6.reg.tcd_saddr[10] = cm_object_get_child_by_name(obj, "TCD10_SADDR");
    state->u.k6.reg.tcd_saddr[11] = cm_object_get_child_by_name(obj, "TCD11_SADDR");
    state->u.k6.reg.tcd_saddr[12] = cm_object_get_child_by_name(obj, "TCD12_SADDR");
    state->u.k6.reg.tcd_saddr[13] = cm_object_get_child_by_name(obj, "TCD13_SADDR");
    state->u.k6.reg.tcd_saddr[14] = cm_object_get_child_by_name(obj, "TCD14_SADDR");
    state->u.k6.reg.tcd_saddr[15] = cm_object_get_child_by_name(obj, "TCD15_SADDR");
    state->u.k6.reg.tcd_soff[0] = cm_object_get_child_by_name(obj, "TCD0_SOFF");
    state->u.k6.reg.tcd_soff[1] = cm_object_get_child_by_name(obj, "TCD1_SOFF");
    state->u.k6.reg.tcd_soff[2] = cm_object_get_child_by_name(obj, "TCD2_SOFF");
    state->u.k6.reg.tcd_soff[3] = cm_object_get_child_by_name(obj, "TCD3_SOFF");
    state->u.k6.reg.tcd_soff[4] = cm_object_get_child_by_name(obj, "TCD4_SOFF");
    state->u.k6.reg.tcd_soff[5] = cm_object_get_child_by_name(obj, "TCD5_SOFF");
    state->u.k6.reg.tcd_soff[6] = cm_object_get_child_by_name(obj, "TCD6_SOFF");
    state->u.k6.reg.tcd_soff[7] = cm_object_get_child_by_name(obj, "TCD7_SOFF");
    state->u.k6.reg.tcd_soff[8] = cm_object_get_child_by_name(obj, "TCD8_SOFF");
    state->u.k6.reg.tcd_soff[9] = cm_object_get_child_by_name(obj, "TCD9_SOFF");
    state->u.k6.reg.tcd_soff[10] = cm_object_get_child_by_name(obj, "TCD10_SOFF");
    state->u.k6.reg.tcd_soff[11] = cm_object_get_child_by_name(obj, "TCD11_SOFF");
    state->u.k6.reg.tcd_soff[12] = cm_object_get_child_by_name(obj, "TCD12_SOFF");
    state->u.k6.reg.tcd_soff[13] = cm_object_get_child_by_name(obj, "TCD13_SOFF");
    state->u.k6.reg.tcd_soff[14] = cm_object_get_child_by_name(obj, "TCD14_SOFF");
    state->u.k6.reg.tcd_soff[15] = cm_object_get_child_by_name(obj, "TCD15_SOFF");
    state->u.k6.reg.tcd_attr[0] = cm_object_get_child_by_name(obj, "TCD0_ATTR");
    state->u.k6.reg.tcd_attr[1] = cm_object_get_child_by_name(obj, "TCD1_ATTR");
    state->u.k6.reg.tcd_attr[2] = cm_object_get_child_by_name(obj, "TCD2_ATTR");
    state->u.k6.reg.tcd_attr[3] = cm_object_get_child_by_name(obj, "TCD3_ATTR");
    state->u.k6.reg.tcd_attr[4] = cm_object_get_child_by_name(obj, "TCD4_ATTR");
    state->u.k6.reg.tcd_attr[5] = cm_object_get_child_by_name(obj, "TCD5_ATTR");
    state->u.k6.reg.tcd_attr[6] = cm_object_get_child_by_name(obj, "TCD6_ATTR");
    state->u.k6.reg.tcd_attr[7] = cm_object_get_child_by_name(obj, "TCD7_ATTR");
    state->u.k6.reg.tcd_attr[8] = cm_object_get_child_by_name(obj, "TCD8_ATTR");
    state->u.k6.reg.tcd_attr[9] = cm_object_get_child_by_name(obj, "TCD9_ATTR");
    state->u.k6.reg.tcd_attr[10] = cm_object_get_child_by_name(obj, "TCD10_ATTR");
    state->u.k6.reg.tcd_attr[11] = cm_object_get_child_by_name(obj, "TCD11_ATTR");
    state->u.k6.reg.tcd_attr[12] = cm_object_get_child_by_name(obj, "TCD12_ATTR");
    state->u.k6.reg.tcd_attr[13] = cm_object_get_child_by_name(obj, "TCD13_ATTR");
    state->u.k6.reg.tcd_attr[14] = cm_object_get_child_by_name(obj, "TCD14_ATTR");
    state->u.k6.reg.tcd_attr[15] = cm_object_get_child_by_name(obj, "TCD15_ATTR");
    state->u.k6.reg.tcd_nbytes_mlno[0] = cm_object_get_child_by_name(obj, "TCD0_NBYTES_MLNO");
    state->u.k6.reg.tcd_nbytes_mlno[1] = cm_object_get_child_by_name(obj, "TCD1_NBYTES_MLNO");
    state->u.k6.reg.tcd_nbytes_mlno[2] = cm_object_get_child_by_name(obj, "TCD2_NBYTES_MLNO");
    state->u.k6.reg.tcd_nbytes_mlno[3] = cm_object_get_child_by_name(obj, "TCD3_NBYTES_MLNO");
    state->u.k6.reg.tcd_nbytes_mlno[4] = cm_object_get_child_by_name(obj, "TCD4_NBYTES_MLNO");
    state->u.k6.reg.tcd_nbytes_mlno[5] = cm_object_get_child_by_name(obj, "TCD5_NBYTES_MLNO");
    state->u.k6.reg.tcd_nbytes_mlno[6] = cm_object_get_child_by_name(obj, "TCD6_NBYTES_MLNO");
    state->u.k6.reg.tcd_nbytes_mlno[7] = cm_object_get_child_by_name(obj, "TCD7_NBYTES_MLNO");
    state->u.k6.reg.tcd_nbytes_mlno[8] = cm_object_get_child_by_name(obj, "TCD8_NBYTES_MLNO");
    state->u.k6.reg.tcd_nbytes_mlno[9] = cm_object_get_child_by_name(obj, "TCD9_NBYTES_MLNO");
    state->u.k6.reg.tcd_nbytes_mlno[10] = cm_object_get_child_by_name(obj, "TCD10_NBYTES_MLNO");
    state->u.k6.reg.tcd_nbytes_mlno[11] = cm_object_get_child_by_name(obj, "TCD11_NBYTES_MLNO");
    state->u.k6.reg.tcd_nbytes_mlno[12] = cm_object_get_child_by_name(obj, "TCD12_NBYTES_MLNO");
    state->u.k6.reg.tcd_nbytes_mlno[13] = cm_object_get_child_by_name(obj, "TCD13_NBYTES_MLNO");
    state->u.k6.reg.tcd_nbytes_mlno[14] = cm_object_get_child_by_name(obj, "TCD14_NBYTES_MLNO");
    state->u.k6.reg.tcd_nbytes_mlno[15] = cm_object_get_child_by_name(obj, "TCD15_NBYTES_MLNO");
    state->u.k6.reg.tcd_nbytes_mloffno[0] = cm_object_get_child_by_name(obj, "TCD0_NBYTES_MLOFFNO");
    state->u.k6.reg.tcd_nbytes_mloffno[1] = cm_object_get_child_by_name(obj, "TCD1_NBYTES_MLOFFNO");
    state->u.k6.reg.tcd_nbytes_mloffno[2] = cm_object_get_child_by_name(obj, "TCD2_NBYTES_MLOFFNO");
    state->u.k6.reg.tcd_nbytes_mloffno[3] = cm_object_get_child_by_name(obj, "TCD3_NBYTES_MLOFFNO");
    state->u.k6.reg.tcd_nbytes_mloffno[4] = cm_object_get_child_by_name(obj, "TCD4_NBYTES_MLOFFNO");
    state->u.k6.reg.tcd_nbytes_mloffno[5] = cm_object_get_child_by_name(obj, "TCD5_NBYTES_MLOFFNO");
    state->u.k6.reg.tcd_nbytes_mloffno[6] = cm_object_get_child_by_name(obj, "TCD6_NBYTES_MLOFFNO");
    state->u.k6.reg.tcd_nbytes_mloffno[7] = cm_object_get_child_by_name(obj, "TCD7_NBYTES_MLOFFNO");
    state->u.k6.reg.tcd_nbytes_mloffno[8] = cm_object_get_child_by_name(obj, "TCD8_NBYTES_MLOFFNO");
    state->u.k6.reg.tcd_nbytes_mloffno[9] = cm_object_get_child_by_name(obj, "TCD9_NBYTES_MLOFFNO");
    state->u.k6.reg.tcd_nbytes_mloffno[10] = cm_object_get_child_by_name(obj, "TCD10_NBYTES_MLOFFNO");
    state->u.k6.reg.tcd_nbytes_mloffno[11] = cm_object_get_child_by_name(obj, "TCD11_NBYTES_MLOFFNO");
    state->u.k6.reg.tcd_nbytes_mloffno[12] = cm_object_get_child_by_name(obj, "TCD12_NBYTES_MLOFFNO");
    state->u.k6.reg.tcd_nbytes_mloffno[13] = cm_object_get_child_by_name(obj, "TCD13_NBYTES_MLOFFNO");
    state->u.k6.reg.tcd_nbytes_mloffno[14] = cm_object_get_child_by_name(obj, "TCD14_NBYTES_MLOFFNO");
    state->u.k6.reg.tcd_nbytes_mloffno[15] = cm_object_get_child_by_name(obj, "TCD15_NBYTES_MLOFFNO");
    state->u.k6.reg.tcd_nbytes_mloffyes[0] = cm_object_get_child_by_name(obj, "TCD0_NBYTES_MLOFFYES");
    state->u.k6.reg.tcd_nbytes_mloffyes[1] = cm_object_get_child_by_name(obj, "TCD1_NBYTES_MLOFFYES");
    state->u.k6.reg.tcd_nbytes_mloffyes[2] = cm_object_get_child_by_name(obj, "TCD2_NBYTES_MLOFFYES");
    state->u.k6.reg.tcd_nbytes_mloffyes[3] = cm_object_get_child_by_name(obj, "TCD3_NBYTES_MLOFFYES");
    state->u.k6.reg.tcd_nbytes_mloffyes[4] = cm_object_get_child_by_name(obj, "TCD4_NBYTES_MLOFFYES");
    state->u.k6.reg.tcd_nbytes_mloffyes[5] = cm_object_get_child_by_name(obj, "TCD5_NBYTES_MLOFFYES");
    state->u.k6.reg.tcd_nbytes_mloffyes[6] = cm_object_get_child_by_name(obj, "TCD6_NBYTES_MLOFFYES");
    state->u.k6.reg.tcd_nbytes_mloffyes[7] = cm_object_get_child_by_name(obj, "TCD7_NBYTES_MLOFFYES");
    state->u.k6.reg.tcd_nbytes_mloffyes[8] = cm_object_get_child_by_name(obj, "TCD8_NBYTES_MLOFFYES");
    state->u.k6.reg.tcd_nbytes_mloffyes[9] = cm_object_get_child_by_name(obj, "TCD9_NBYTES_MLOFFYES");
    state->u.k6.reg.tcd_nbytes_mloffyes[10] = cm_object_get_child_by_name(obj, "TCD10_NBYTES_MLOFFYES");
    state->u.k6.reg.tcd_nbytes_mloffyes[11] = cm_object_get_child_by_name(obj, "TCD11_NBYTES_MLOFFYES");
    state->u.k6.reg.tcd_nbytes_mloffyes[12] = cm_object_get_child_by_name(obj, "TCD12_NBYTES_MLOFFYES");
    state->u.k6.reg.tcd_nbytes_mloffyes[13] = cm_object_get_child_by_name(obj, "TCD13_NBYTES_MLOFFYES");
    state->u.k6.reg.tcd_nbytes_mloffyes[14] = cm_object_get_child_by_name(obj, "TCD14_NBYTES_MLOFFYES");
    state->u.k6.reg.tcd_nbytes_mloffyes[15] = cm_object_get_child_by_name(obj, "TCD15_NBYTES_MLOFFYES");
    state->u.k6.reg.tcd_slast[0] = cm_object_get_child_by_name(obj, "TCD0_SLAST");
    state->u.k6.reg.tcd_slast[1] = cm_object_get_child_by_name(obj, "TCD1_SLAST");
    state->u.k6.reg.tcd_slast[2] = cm_object_get_child_by_name(obj, "TCD2_SLAST");
    state->u.k6.reg.tcd_slast[3] = cm_object_get_child_by_name(obj, "TCD3_SLAST");
    state->u.k6.reg.tcd_slast[4] = cm_object_get_child_by_name(obj, "TCD4_SLAST");
    state->u.k6.reg.tcd_slast[5] = cm_object_get_child_by_name(obj, "TCD5_SLAST");
    state->u.k6.reg.tcd_slast[6] = cm_object_get_child_by_name(obj, "TCD6_SLAST");
    state->u.k6.reg.tcd_slast[7] = cm_object_get_child_by_name(obj, "TCD7_SLAST");
    state->u.k6.reg.tcd_slast[8] = cm_object_get_child_by_name(obj, "TCD8_SLAST");
    state->u.k6.reg.tcd_slast[9] = cm_object_get_child_by_name(obj, "TCD9_SLAST");
    state->u.k6.reg.tcd_slast[10] = cm_object_get_child_by_name(obj, "TCD10_SLAST");
    state->u.k6.reg.tcd_slast[11] = cm_object_get_child_by_name(obj, "TCD11_SLAST");
    state->u.k6.reg.tcd_slast[12] = cm_object_get_child_by_name(obj, "TCD12_SLAST");
    state->u.k6.reg.tcd_slast[13] = cm_object_get_child_by_name(obj, "TCD13_SLAST");
    state->u.k6.reg.tcd_slast[14] = cm_object_get_child_by_name(obj, "TCD14_SLAST");
    state->u.k6.reg.tcd_slast[15] = cm_object_get_child_by_name(obj, "TCD15_SLAST");
    state->u.k6.reg.tcd_daddr[0] = cm_object_get_child_by_name(obj, "TCD0_DADDR");
    state->u.k6.reg.tcd_daddr[1] = cm_object_get_child_by_name(obj, "TCD1_DADDR");
    state->u.k6.reg.tcd_daddr[2] = cm_object_get_child_by_name(obj, "TCD2_DADDR");
    state->u.k6.reg.tcd_daddr[3] = cm_object_get_child_by_name(obj, "TCD3_DADDR");
    state->u.k6.reg.tcd_daddr[4] = cm_object_get_child_by_name(obj, "TCD4_DADDR");
    state->u.k6.reg.tcd_daddr[5] = cm_object_get_child_by_name(obj, "TCD5_DADDR");
    state->u.k6.reg.tcd_daddr[6] = cm_object_get_child_by_name(obj, "TCD6_DADDR");
    state->u.k6.reg.tcd_daddr[7] = cm_object_get_child_by_name(obj, "TCD7_DADDR");
    state->u.k6.reg.tcd_daddr[8] = cm_object_get_child_by_name(obj, "TCD8_DADDR");
    state->u.k6.reg.tcd_daddr[9] = cm_object_get_child_by_name(obj, "TCD9_DADDR");
    state->u.k6.reg.tcd_daddr[10] = cm_object_get_child_by_name(obj, "TCD10_DADDR");
    state->u.k6.reg.tcd_daddr[11] = cm_object_get_child_by_name(obj, "TCD11_DADDR");
    state->u.k6.reg.tcd_daddr[12] = cm_object_get_child_by_name(obj, "TCD12_DADDR");
    state->u.k6.reg.tcd_daddr[13] = cm_object_get_child_by_name(obj, "TCD13_DADDR");
    state->u.k6.reg.tcd_daddr[14] = cm_object_get_child_by_name(obj, "TCD14_DADDR");
    state->u.k6.reg.tcd_daddr[15] = cm_object_get_child_by_name(obj, "TCD15_DADDR");
    state->u.k6.reg.tcd_doff[0] = cm_object_get_child_by_name(obj, "TCD0_DOFF");
    state->u.k6.reg.tcd_doff[1] = cm_object_get_child_by_name(obj, "TCD1_DOFF");
    state->u.k6.reg.tcd_doff[2] = cm_object_get_child_by_name(obj, "TCD2_DOFF");
    state->u.k6.reg.tcd_doff[3] = cm_object_get_child_by_name(obj, "TCD3_DOFF");
    state->u.k6.reg.tcd_doff[4] = cm_object_get_child_by_name(obj, "TCD4_DOFF");
    state->u.k6.reg.tcd_doff[5] = cm_object_get_child_by_name(obj, "TCD5_DOFF");
    state->u.k6.reg.tcd_doff[6] = cm_object_get_child_by_name(obj, "TCD6_DOFF");
    state->u.k6.reg.tcd_doff[7] = cm_object_get_child_by_name(obj, "TCD7_DOFF");
    state->u.k6.reg.tcd_doff[8] = cm_object_get_child_by_name(obj, "TCD8_DOFF");
    state->u.k6.reg.tcd_doff[9] = cm_object_get_child_by_name(obj, "TCD9_DOFF");
    state->u.k6.reg.tcd_doff[10] = cm_object_get_child_by_name(obj, "TCD10_DOFF");
    state->u.k6.reg.tcd_doff[11] = cm_object_get_child_by_name(obj, "TCD11_DOFF");
    state->u.k6.reg.tcd_doff[12] = cm_object_get_child_by_name(obj, "TCD12_DOFF");
    state->u.k6.reg.tcd_doff[13] = cm_object_get_child_by_name(obj, "TCD13_DOFF");
    state->u.k6.reg.tcd_doff[14] = cm_object_get_child_by_name(obj, "TCD14_DOFF");
    state->u.k6.reg.tcd_doff[15] = cm_object_get_child_by_name(obj, "TCD15_DOFF");
    state->u.k6.reg.tcd_citer_elinkno[0] = cm_object_get_child_by_name(obj, "TCD0_CITER_ELINKNO");
    state->u.k6.reg.tcd_citer_elinkno[1] = cm_object_get_child_by_name(obj, "TCD1_CITER_ELINKNO");
    state->u.k6.reg.tcd_citer_elinkno[2] = cm_object_get_child_by_name(obj, "TCD2_CITER_ELINKNO");
    state->u.k6.reg.tcd_citer_elinkno[3] = cm_object_get_child_by_name(obj, "TCD3_CITER_ELINKNO");
    state->u.k6.reg.tcd_citer_elinkno[4] = cm_object_get_child_by_name(obj, "TCD4_CITER_ELINKNO");
    state->u.k6.reg.tcd_citer_elinkno[5] = cm_object_get_child_by_name(obj, "TCD5_CITER_ELINKNO");
    state->u.k6.reg.tcd_citer_elinkno[6] = cm_object_get_child_by_name(obj, "TCD6_CITER_ELINKNO");
    state->u.k6.reg.tcd_citer_elinkno[7] = cm_object_get_child_by_name(obj, "TCD7_CITER_ELINKNO");
    state->u.k6.reg.tcd_citer_elinkno[8] = cm_object_get_child_by_name(obj, "TCD8_CITER_ELINKNO");
    state->u.k6.reg.tcd_citer_elinkno[9] = cm_object_get_child_by_name(obj, "TCD9_CITER_ELINKNO");
    state->u.k6.reg.tcd_citer_elinkno[10] = cm_object_get_child_by_name(obj, "TCD10_CITER_ELINKNO");
    state->u.k6.reg.tcd_citer_elinkno[11] = cm_object_get_child_by_name(obj, "TCD11_CITER_ELINKNO");
    state->u.k6.reg.tcd_citer_elinkno[12] = cm_object_get_child_by_name(obj, "TCD12_CITER_ELINKNO");
    state->u.k6.reg.tcd_citer_elinkno[13] = cm_object_get_child_by_name(obj, "TCD13_CITER_ELINKNO");
    state->u.k6.reg.tcd_citer_elinkno[14] = cm_object_get_child_by_name(obj, "TCD14_CITER_ELINKNO");
    state->u.k6.reg.tcd_citer_elinkno[15] = cm_object_get_child_by_name(obj, "TCD15_CITER_ELINKNO");
    state->u.k6.reg.tcd_citer_elinkyes[0] = cm_object_get_child_by_name(obj, "TCD0_CITER_ELINKYES");
    state->u.k6.reg.tcd_citer_elinkyes[1] = cm_object_get_child_by_name(obj, "TCD1_CITER_ELINKYES");
    state->u.k6.reg.tcd_citer_elinkyes[2] = cm_object_get_child_by_name(obj, "TCD2_CITER_ELINKYES");
    state->u.k6.reg.tcd_citer_elinkyes[3] = cm_object_get_child_by_name(obj, "TCD3_CITER_ELINKYES");
    state->u.k6.reg.tcd_citer_elinkyes[4] = cm_object_get_child_by_name(obj, "TCD4_CITER_ELINKYES");
    state->u.k6.reg.tcd_citer_elinkyes[5] = cm_object_get_child_by_name(obj, "TCD5_CITER_ELINKYES");
    state->u.k6.reg.tcd_citer_elinkyes[6] = cm_object_get_child_by_name(obj, "TCD6_CITER_ELINKYES");
    state->u.k6.reg.tcd_citer_elinkyes[7] = cm_object_get_child_by_name(obj, "TCD7_CITER_ELINKYES");
    state->u.k6.reg.tcd_citer_elinkyes[8] = cm_object_get_child_by_name(obj, "TCD8_CITER_ELINKYES");
    state->u.k6.reg.tcd_citer_elinkyes[9] = cm_object_get_child_by_name(obj, "TCD9_CITER_ELINKYES");
    state->u.k6.reg.tcd_citer_elinkyes[10] = cm_object_get_child_by_name(obj, "TCD10_CITER_ELINKYES");
    state->u.k6.reg.tcd_citer_elinkyes[11] = cm_object_get_child_by_name(obj, "TCD11_CITER_ELINKYES");
    state->u.k6.reg.tcd_citer_elinkyes[12] = cm_object_get_child_by_name(obj, "TCD12_CITER_ELINKYES");
    state->u.k6.reg.tcd_citer_elinkyes[13] = cm_object_get_child_by_name(obj, "TCD13_CITER_ELINKYES");
    state->u.k6.reg.tcd_citer_elinkyes[14] = cm_object_get_child_by_name(obj, "TCD14_CITER_ELINKYES");
    state->u.k6.reg.tcd_citer_elinkyes[15] = cm_object_get_child_by_name(obj, "TCD15_CITER_ELINKYES");
    state->u.k6.reg.tcd_dlastsga[0] = cm_object_get_child_by_name(obj, "TCD0_DLASTSGA");
    state->u.k6.reg.tcd_dlastsga[1] = cm_object_get_child_by_name(obj, "TCD1_DLASTSGA");
    state->u.k6.reg.tcd_dlastsga[2] = cm_object_get_child_by_name(obj, "TCD2_DLASTSGA");
    state->u.k6.reg.tcd_dlastsga[3] = cm_object_get_child_by_name(obj, "TCD3_DLASTSGA");
    state->u.k6.reg.tcd_dlastsga[4] = cm_object_get_child_by_name(obj, "TCD4_DLASTSGA");
    state->u.k6.reg.tcd_dlastsga[5] = cm_object_get_child_by_name(obj, "TCD5_DLASTSGA");
    state->u.k6.reg.tcd_dlastsga[6] = cm_object_get_child_by_name(obj, "TCD6_DLASTSGA");
    state->u.k6.reg.tcd_dlastsga[7] = cm_object_get_child_by_name(obj, "TCD7_DLASTSGA");
    state->u.k6.reg.tcd_dlastsga[8] = cm_object_get_child_by_name(obj, "TCD8_DLASTSGA");
    state->u.k6.reg.tcd_dlastsga[9] = cm_object_get_child_by_name(obj, "TCD9_DLASTSGA");
    state->u.k6.reg.tcd_dlastsga[10] = cm_object_get_child_by_name(obj, "TCD10_DLASTSGA");
    state->u.k6.reg.tcd_dlastsga[11] = cm_object_get_child_by_name(obj, "TCD11_DLASTSGA");
    state->u.k6.reg.tcd_dlastsga[12] = cm_object_get_child_by_name(obj, "TCD12_DLASTSGA");
    state->u.k6.reg.tcd_dlastsga[13] = cm_object_get_child_by_name(obj, "TCD13_DLASTSGA");
    state->u.k6.reg.tcd_dlastsga[14] = cm_object_get_child_by_name(obj, "TCD14_DLASTSGA");
    state->u.k6.reg.tcd_dlastsga[15] = cm_object_get_child_by_name(obj, "TCD15_DLASTSGA");
    state->u.k6.reg.tcd_csr[0] = cm_object_get_child_by_name(obj, "TCD0_CSR");
    state->u.k6.reg.tcd_csr[1] = cm_object_get_child_by_name(obj, "TCD1_CSR");
    state->u.k6.reg.tcd_csr[2] = cm_object_get_child_by_name(obj, "TCD2_CSR");
    state->u.k6.reg.tcd_csr[3] = cm_object_get_child_by_name(obj, "TCD3_CSR");
    state->u.k6.reg.tcd_csr[4] = cm_object_get_child_by_name(obj, "TCD4_CSR");
    state->u.k6.reg.tcd_csr[5] = cm_object_get_child_by_name(obj, "TCD5_CSR");
    state->u.k6.reg.tcd_csr[6] = cm_object_get_child_by_name(obj, "TCD6_CSR");
    state->u.k6.reg.tcd_csr[7] = cm_object_get_child_by_name(obj, "TCD7_CSR");
    state->u.k6.reg.tcd_csr[8] = cm_object_get_child_by_name(obj, "TCD8_CSR");
    state->u.k6.reg.tcd_csr[9] = cm_object_get_child_by_name(obj, "TCD9_CSR");
    state->u.k6.reg.tcd_csr[10] = cm_object_get_child_by_name(obj, "TCD10_CSR");
    state->u.k6.reg.tcd_csr[11] = cm_object_get_child_by_name(obj, "TCD11_CSR");
    state->u.k6.reg.tcd_csr[12] = cm_object_get_child_by_name(obj, "TCD12_CSR");
    state->u.k6.reg.tcd_csr[13] = cm_object_get_child_by_name(obj, "TCD13_CSR");
    state->u.k6.reg.tcd_csr[14] = cm_object_get_child_by_name(obj, "TCD14_CSR");
    state->u.k6.reg.tcd_csr[15] = cm_object_get_child_by_name(obj, "TCD15_CSR");
    state->u.k6.reg.tcd_biter_elinkno[0] = cm_object_get_child_by_name(obj, "TCD0_BITER_ELINKNO");
    state->u.k6.reg.tcd_biter_elinkno[1] = cm_object_get_child_by_name(obj, "TCD1_BITER_ELINKNO");
    state->u.k6.reg.tcd_biter_elinkno[2] = cm_object_get_child_by_name(obj, "TCD2_BITER_ELINKNO");
    state->u.k6.reg.tcd_biter_elinkno[3] = cm_object_get_child_by_name(obj, "TCD3_BITER_ELINKNO");
    state->u.k6.reg.tcd_biter_elinkno[4] = cm_object_get_child_by_name(obj, "TCD4_BITER_ELINKNO");
    state->u.k6.reg.tcd_biter_elinkno[5] = cm_object_get_child_by_name(obj, "TCD5_BITER_ELINKNO");
    state->u.k6.reg.tcd_biter_elinkno[6] = cm_object_get_child_by_name(obj, "TCD6_BITER_ELINKNO");
    state->u.k6.reg.tcd_biter_elinkno[7] = cm_object_get_child_by_name(obj, "TCD7_BITER_ELINKNO");
    state->u.k6.reg.tcd_biter_elinkno[8] = cm_object_get_child_by_name(obj, "TCD8_BITER_ELINKNO");
    state->u.k6.reg.tcd_biter_elinkno[9] = cm_object_get_child_by_name(obj, "TCD9_BITER_ELINKNO");
    state->u.k6.reg.tcd_biter_elinkno[10] = cm_object_get_child_by_name(obj, "TCD10_BITER_ELINKNO");
    state->u.k6.reg.tcd_biter_elinkno[11] = cm_object_get_child_by_name(obj, "TCD11_BITER_ELINKNO");
    state->u.k6.reg.tcd_biter_elinkno[12] = cm_object_get_child_by_name(obj, "TCD12_BITER_ELINKNO");
    state->u.k6.reg.tcd_biter_elinkno[13] = cm_object_get_child_by_name(obj, "TCD13_BITER_ELINKNO");
    state->u.k6.reg.tcd_biter_elinkno[14] = cm_object_get_child_by_name(obj, "TCD14_BITER_ELINKNO");
    state->u.k6.reg.tcd_biter_elinkno[15] = cm_object_get_child_by_name(obj, "TCD15_BITER_ELINKNO");
    state->u.k6.reg.tcd_biter_elinkyes[0] = cm_object_get_child_by_name(obj, "TCD0_BITER_ELINKYES");
    state->u.k6.reg.tcd_biter_elinkyes[1] = cm_object_get_child_by_name(obj, "TCD1_BITER_ELINKYES");
    state->u.k6.reg.tcd_biter_elinkyes[2] = cm_object_get_child_by_name(obj, "TCD2_BITER_ELINKYES");
    state->u.k6.reg.tcd_biter_elinkyes[3] = cm_object_get_child_by_name(obj, "TCD3_BITER_ELINKYES");
    state->u.k6.reg.tcd_biter_elinkyes[4] = cm_object_get_child_by_name(obj, "TCD4_BITER_ELINKYES");
    state->u.k6.reg.tcd_biter_elinkyes[5] = cm_object_get_child_by_name(obj, "TCD5_BITER_ELINKYES");
    state->u.k6.reg.tcd_biter_elinkyes[6] = cm_object_get_child_by_name(obj, "TCD6_BITER_ELINKYES");
    state->u.k6.reg.tcd_biter_elinkyes[7] = cm_object_get_child_by_name(obj, "TCD7_BITER_ELINKYES");
    state->u.k6.reg.tcd_biter_elinkyes[8] = cm_object_get_child_by_name(obj, "TCD8_BITER_ELINKYES");
    state->u.k6.reg.tcd_biter_elinkyes[9] = cm_object_get_child_by_name(obj, "TCD9_BITER_ELINKYES");
    state->u.k6.reg.tcd_biter_elinkyes[10] = cm_object_get_child_by_name(obj, "TCD10_BITER_ELINKYES");
    state->u.k6.reg.tcd_biter_elinkyes[11] = cm_object_get_child_by_name(obj, "TCD11_BITER_ELINKYES");
    state->u.k6.reg.tcd_biter_elinkyes[12] = cm_object_get_child_by_name(obj, "TCD12_BITER_ELINKYES");
    state->u.k6.reg.tcd_biter_elinkyes[13] = cm_object_get_child_by_name(obj, "TCD13_BITER_ELINKYES");
    state->u.k6.reg.tcd_biter_elinkyes[14] = cm_object_get_child_by_name(obj, "TCD14_BITER_ELINKYES");
    state->u.k6.reg.tcd_biter_elinkyes[15] = cm_object_get_child_by_name(obj, "TCD15_BITER_ELINKYES");

    // CR bitfields.
    state->u.k6.fld.cr.edbg = cm_object_get_child_by_name(state->u.k6.reg.cr, "EDBG");
    state->u.k6.fld.cr.erca = cm_object_get_child_by_name(state->u.k6.reg.cr, "ERCA");
    state->u.k6.fld.cr.hoe = cm_object_get_child_by_name(state->u.k6.reg.cr, "HOE");
    state->u.k6.fld.cr.halt = cm_object_get_child_by_name(state->u.k6.reg.cr, "HALT");
    state->u.k6.fld.cr.clm = cm_object_get_child_by_name(state->u.k6.reg.cr, "CLM");
    state->u.k6.fld.cr.emlm = cm_object_get_child_by_name(state->u.k6.reg.cr, "EMLM");
    state->u.k6.fld.cr.ecx = cm_object_get_child_by_name(state->u.k6.reg.cr, "ECX");
    state->u.k6.fld.cr.cx = cm_object_get_child_by_name(state->u.k6.reg.cr, "CX");

    // ES bitfields.
    state->u.k6.fld.es.dbe = cm_object_get_child_by_name(state->u.k6.reg.es, "DBE");
    state->u.k6.fld.es.sbe = cm_object_get_child_by_name(state->u.k6.reg.es, "SBE");
    state->u.k6.fld.es.sge = cm_object_get_child_by_name(state->u.k6.reg.es, "SGE");
    state->u.k6.fld.es.nce = cm_object_get_child_by_name(state->u.k6.reg.es, "NCE");
    state->u.k6.fld.es.doe = cm_object_get_child_by_name(state->u.k6.reg.es, "DOE");
    state->u.k6.fld.es.dae = cm_object_get_child_by_name(state->u.k6.reg.es, "DAE");
    state->u.k6.fld.es.soe = cm_object_get_child_by_name(state->u.k6.reg.es, "SOE");
    state->u.k6.fld.es.sae = cm_object_get_child_by_name(state->u.k6.reg.es, "SAE");
    state->u.k6.fld.es.errchn = cm_object_get_child_by_name(state->u.k6.reg.es, "ERRCHN");
    state->u.k6.fld.es.cpe = cm_object_get_child_by_name(state->u.k6.reg.es, "CPE");
    state->u.k6.fld.es.ecx = cm_object_get_child_by_name(state->u.k6.reg.es, "ECX");
    state->u.k6.fld.es.vld = cm_object_get_child_by_name(state->u.k6.reg.es, "VLD");

    // ERQ bitfields.
    state->u.k6.fld.erq.erq0 = cm_object_get_child_by_name(state->u.k6.reg.erq, "ERQ0");
    state->u.k6.fld.erq.erq1 = cm_object_get_child_by_name(state->u.k6.reg.erq, "ERQ1");
    state->u.k6.fld.erq.erq2 = cm_object_get_child_by_name(state->u.k6.reg.erq, "ERQ2");
    state->u.k6.fld.erq.erq3 = cm_object_get_child_by_name(state->u.k6.reg.erq, "ERQ3");
    state->u.k6.fld.erq.erq4 = cm_object_get_child_by_name(state->u.k6.reg.erq, "ERQ4");
    state->u.k6.fld.erq.erq5 = cm_object_get_child_by_name(state->u.k6.reg.erq, "ERQ5");
    state->u.k6.fld.erq.erq6 = cm_object_get_child_by_name(state->u.k6.reg.erq, "ERQ6");
    state->u.k6.fld.erq.erq7 = cm_object_get_child_by_name(state->u.k6.reg.erq, "ERQ7");
    state->u.k6.fld.erq.erq8 = cm_object_get_child_by_name(state->u.k6.reg.erq, "ERQ8");
    state->u.k6.fld.erq.erq9 = cm_object_get_child_by_name(state->u.k6.reg.erq, "ERQ9");
    state->u.k6.fld.erq.erq10 = cm_object_get_child_by_name(state->u.k6.reg.erq, "ERQ10");
    state->u.k6.fld.erq.erq11 = cm_object_get_child_by_name(state->u.k6.reg.erq, "ERQ11");
    state->u.k6.fld.erq.erq12 = cm_object_get_child_by_name(state->u.k6.reg.erq, "ERQ12");
    state->u.k6.fld.erq.erq13 = cm_object_get_child_by_name(state->u.k6.reg.erq, "ERQ13");
    state->u.k6.fld.erq.erq14 = cm_object_get_child_by_name(state->u.k6.reg.erq, "ERQ14");
    state->u.k6.fld.erq.erq15 = cm_object_get_child_by_name(state->u.k6.reg.erq, "ERQ15");

    // EEI bitfields.
    state->u.k6.fld.eei.eei0 = cm_object_get_child_by_name(state->u.k6.reg.eei, "EEI0");
    state->u.k6.fld.eei.eei1 = cm_object_get_child_by_name(state->u.k6.reg.eei, "EEI1");
    state->u.k6.fld.eei.eei2 = cm_object_get_child_by_name(state->u.k6.reg.eei, "EEI2");
    state->u.k6.fld.eei.eei3 = cm_object_get_child_by_name(state->u.k6.reg.eei, "EEI3");
    state->u.k6.fld.eei.eei4 = cm_object_get_child_by_name(state->u.k6.reg.eei, "EEI4");
    state->u.k6.fld.eei.eei5 = cm_object_get_child_by_name(state->u.k6.reg.eei, "EEI5");
    state->u.k6.fld.eei.eei6 = cm_object_get_child_by_name(state->u.k6.reg.eei, "EEI6");
    state->u.k6.fld.eei.eei7 = cm_object_get_child_by_name(state->u.k6.reg.eei, "EEI7");
    state->u.k6.fld.eei.eei8 = cm_object_get_child_by_name(state->u.k6.reg.eei, "EEI8");
    state->u.k6.fld.eei.eei9 = cm_object_get_child_by_name(state->u.k6.reg.eei, "EEI9");
    state->u.k6.fld.eei.eei10 = cm_object_get_child_by_name(state->u.k6.reg.eei, "EEI10");
    state->u.k6.fld.eei.eei11 = cm_object_get_child_by_name(state->u.k6.reg.eei, "EEI11");
    state->u.k6.fld.eei.eei12 = cm_object_get_child_by_name(state->u.k6.reg.eei, "EEI12");
    state->u.k6.fld.eei.eei13 = cm_object_get_child_by_name(state->u.k6.reg.eei, "EEI13");
    state->u.k6.fld.eei.eei14 = cm_object_get_child_by_name(state->u.k6.reg.eei, "EEI14");
    state->u.k6.fld.eei.eei15 = cm_object_get_child_by_name(state->u.k6.reg.eei, "EEI15");

    // CEEI bitfields.
    state->u.k6.fld.ceei.ceei = cm_object_get_child_by_name(state->u.k6.reg.ceei, "CEEI");
    state->u.k6.fld.ceei.caee = cm_object_get_child_by_name(state->u.k6.reg.ceei, "CAEE");
    state->u.k6.fld.ceei.nop = cm_object_get_child_by_name(state->u.k6.reg.ceei, "NOP");

    // SEEI bitfields.
    state->u.k6.fld.seei.seei = cm_object_get_child_by_name(state->u.k6.reg.seei, "SEEI");
    state->u.k6.fld.seei.saee = cm_object_get_child_by_name(state->u.k6.reg.seei, "SAEE");
    state->u.k6.fld.seei.nop = cm_object_get_child_by_name(state->u.k6.reg.seei, "NOP");

    // CERQ bitfields.
    state->u.k6.fld.cerq.cerq = cm_object_get_child_by_name(state->u.k6.reg.cerq, "CERQ");
    state->u.k6.fld.cerq.caer = cm_object_get_child_by_name(state->u.k6.reg.cerq, "CAER");
    state->u.k6.fld.cerq.nop = cm_object_get_child_by_name(state->u.k6.reg.cerq, "NOP");

    // SERQ bitfields.
    state->u.k6.fld.serq.serq = cm_object_get_child_by_name(state->u.k6.reg.serq, "SERQ");
    state->u.k6.fld.serq.saer = cm_object_get_child_by_name(state->u.k6.reg.serq, "SAER");
    state->u.k6.fld.serq.nop = cm_object_get_child_by_name(state->u.k6.reg.serq, "NOP");

    // CDNE bitfields.
    state->u.k6.fld.cdne.cdne = cm_object_get_child_by_name(state->u.k6.reg.cdne, "CDNE");
    state->u.k6.fld.cdne.cadn = cm_object_get_child_by_name(state->u.k6.reg.cdne, "CADN");
    state->u.k6.fld.cdne.nop = cm_object_get_child_by_name(state->u.k6.reg.cdne, "NOP");

    // SSRT bitfields.
    state->u.k6.fld.ssrt.ssrt = cm_object_get_child_by_name(state->u.k6.reg.ssrt, "SSRT");
    state->u.k6.fld.ssrt.sast = cm_object_get_child_by_name(state->u.k6.reg.ssrt, "SAST");
    state->u.k6.fld.ssrt.nop = cm_object_get_child_by_name(state->u.k6.reg.ssrt, "NOP");

    // CERR bitfields.
    state->u.k6.fld.cerr.cerr = cm_object_get_child_by_name(state->u.k6.reg.cerr, "CERR");
    state->u.k6.fld.cerr.caei = cm_object_get_child_by_name(state->u.k6.reg.cerr, "CAEI");
    state->u.k6.fld.cerr.nop = cm_object_get_child_by_name(state->u.k6.reg.cerr, "NOP");

    // CINT bitfields.
    state->u.k6.fld.cint.cint = cm_object_get_child_by_name(state->u.k6.reg.cint, "CINT");
    state->u.k6.fld.cint.cair = cm_object_get_child_by_name(state->u.k6.reg.cint, "CAIR");
    state->u.k6.fld.cint.nop = cm_object_get_child_by_name(state->u.k6.reg.cint, "NOP");

    // INT bitfields.
    state->u.k6.fld.int_.int0 = cm_object_get_child_by_name(state->u.k6.reg.int_, "INT0");
    state->u.k6.fld.int_.int1 = cm_object_get_child_by_name(state->u.k6.reg.int_, "INT1");
    state->u.k6.fld.int_.int2 = cm_object_get_child_by_name(state->u.k6.reg.int_, "INT2");
    state->u.k6.fld.int_.int3 = cm_object_get_child_by_name(state->u.k6.reg.int_, "INT3");
    state->u.k6.fld.int_.int4 = cm_object_get_child_by_name(state->u.k6.reg.int_, "INT4");
    state->u.k6.fld.int_.int5 = cm_object_get_child_by_name(state->u.k6.reg.int_, "INT5");
    state->u.k6.fld.int_.int6 = cm_object_get_child_by_name(state->u.k6.reg.int_, "INT6");
    state->u.k6.fld.int_.int7 = cm_object_get_child_by_name(state->u.k6.reg.int_, "INT7");
    state->u.k6.fld.int_.int8 = cm_object_get_child_by_name(state->u.k6.reg.int_, "INT8");
    state->u.k6.fld.int_.int9 = cm_object_get_child_by_name(state->u.k6.reg.int_, "INT9");
    state->u.k6.fld.int_.int10 = cm_object_get_child_by_name(state->u.k6.reg.int_, "INT10");
    state->u.k6.fld.int_.int11 = cm_object_get_child_by_name(state->u.k6.reg.int_, "INT11");
    state->u.k6.fld.int_.int12 = cm_object_get_child_by_name(state->u.k6.reg.int_, "INT12");
    state->u.k6.fld.int_.int13 = cm_object_get_child_by_name(state->u.k6.reg.int_, "INT13");
    state->u.k6.fld.int_.int14 = cm_object_get_child_by_name(state->u.k6.reg.int_, "INT14");
    state->u.k6.fld.int_.int15 = cm_object_get_child_by_name(state->u.k6.reg.int_, "INT15");

    // ERR bitfields.
    state->u.k6.fld.err.err0 = cm_object_get_child_by_name(state->u.k6.reg.err, "ERR0");
    state->u.k6.fld.err.err1 = cm_object_get_child_by_name(state->u.k6.reg.err, "ERR1");
    state->u.k6.fld.err.err2 = cm_object_get_child_by_name(state->u.k6.reg.err, "ERR2");
    state->u.k6.fld.err.err3 = cm_object_get_child_by_name(state->u.k6.reg.err, "ERR3");
    state->u.k6.fld.err.err4 = cm_object_get_child_by_name(state->u.k6.reg.err, "ERR4");
    state->u.k6.fld.err.err5 = cm_object_get_child_by_name(state->u.k6.reg.err, "ERR5");
    state->u.k6.fld.err.err6 = cm_object_get_child_by_name(state->u.k6.reg.err, "ERR6");
    state->u.k6.fld.err.err7 = cm_object_get_child_by_name(state->u.k6.reg.err, "ERR7");
    state->u.k6.fld.err.err8 = cm_object_get_child_by_name(state->u.k6.reg.err, "ERR8");
    state->u.k6.fld.err.err9 = cm_object_get_child_by_name(state->u.k6.reg.err, "ERR9");
    state->u.k6.fld.err.err10 = cm_object_get_child_by_name(state->u.k6.reg.err, "ERR10");
    state->u.k6.fld.err.err11 = cm_object_get_child_by_name(state->u.k6.reg.err, "ERR11");
    state->u.k6.fld.err.err12 = cm_object_get_child_by_name(state->u.k6.reg.err, "ERR12");
    state->u.k6.fld.err.err13 = cm_object_get_child_by_name(state->u.k6.reg.err, "ERR13");
    state->u.k6.fld.err.err14 = cm_object_get_child_by_name(state->u.k6.reg.err, "ERR14");
    state->u.k6.fld.err.err15 = cm_object_get_child_by_name(state->u.k6.reg.err, "ERR15");

    // HRS bitfields.
    state->u.k6.fld.hrs.hrs0 = cm_object_get_child_by_name(state->u.k6.reg.hrs, "HRS0");
    state->u.k6.fld.hrs.hrs1 = cm_object_get_child_by_name(state->u.k6.reg.hrs, "HRS1");
    state->u.k6.fld.hrs.hrs2 = cm_object_get_child_by_name(state->u.k6.reg.hrs, "HRS2");
    state->u.k6.fld.hrs.hrs3 = cm_object_get_child_by_name(state->u.k6.reg.hrs, "HRS3");
    state->u.k6.fld.hrs.hrs4 = cm_object_get_child_by_name(state->u.k6.reg.hrs, "HRS4");
    state->u.k6.fld.hrs.hrs5 = cm_object_get_child_by_name(state->u.k6.reg.hrs, "HRS5");
    state->u.k6.fld.hrs.hrs6 = cm_object_get_child_by_name(state->u.k6.reg.hrs, "HRS6");
    state->u.k6.fld.hrs.hrs7 = cm_object_get_child_by_name(state->u.k6.reg.hrs, "HRS7");
    state->u.k6.fld.hrs.hrs8 = cm_object_get_child_by_name(state->u.k6.reg.hrs, "HRS8");
    state->u.k6.fld.hrs.hrs9 = cm_object_get_child_by_name(state->u.k6.reg.hrs, "HRS9");
    state->u.k6.fld.hrs.hrs10 = cm_object_get_child_by_name(state->u.k6.reg.hrs, "HRS10");
    state->u.k6.fld.hrs.hrs11 = cm_object_get_child_by_name(state->u.k6.reg.hrs, "HRS11");
    state->u.k6.fld.hrs.hrs12 = cm_object_get_child_by_name(state->u.k6.reg.hrs, "HRS12");
    state->u.k6.fld.hrs.hrs13 = cm_object_get_child_by_name(state->u.k6.reg.hrs, "HRS13");
    state->u.k6.fld.hrs.hrs14 = cm_object_get_child_by_name(state->u.k6.reg.hrs, "HRS14");
    state->u.k6.fld.hrs.hrs15 = cm_object_get_child_by_name(state->u.k6.reg.hrs, "HRS15");
    // DCHPRI3 bitfields.
    state->u.k6.fld.dchpri[0].chpri = cm_object_get_child_by_name(state->u.k6.reg.dchpri[0], "CHPRI");
    state->u.k6.fld.dchpri[0].dpa = cm_object_get_child_by_name(state->u.k6.reg.dchpri[0], "DPA");
    state->u.k6.fld.dchpri[0].ecp = cm_object_get_child_by_name(state->u.k6.reg.dchpri[0], "ECP");
    // DCHPRI2 bitfields.
    state->u.k6.fld.dchpri[1].chpri = cm_object_get_child_by_name(state->u.k6.reg.dchpri[1], "CHPRI");
    state->u.k6.fld.dchpri[1].dpa = cm_object_get_child_by_name(state->u.k6.reg.dchpri[1], "DPA");
    state->u.k6.fld.dchpri[1].ecp = cm_object_get_child_by_name(state->u.k6.reg.dchpri[1], "ECP");
    // DCHPRI1 bitfields.
    state->u.k6.fld.dchpri[2].chpri = cm_object_get_child_by_name(state->u.k6.reg.dchpri[2], "CHPRI");
    state->u.k6.fld.dchpri[2].dpa = cm_object_get_child_by_name(state->u.k6.reg.dchpri[2], "DPA");
    state->u.k6.fld.dchpri[2].ecp = cm_object_get_child_by_name(state->u.k6.reg.dchpri[2], "ECP");
    // DCHPRI0 bitfields.
    state->u.k6.fld.dchpri[3].chpri = cm_object_get_child_by_name(state->u.k6.reg.dchpri[3], "CHPRI");
    state->u.k6.fld.dchpri[3].dpa = cm_object_get_child_by_name(state->u.k6.reg.dchpri[3], "DPA");
    state->u.k6.fld.dchpri[3].ecp = cm_object_get_child_by_name(state->u.k6.reg.dchpri[3], "ECP");
    // DCHPRI7 bitfields.
    state->u.k6.fld.dchpri[4].chpri = cm_object_get_child_by_name(state->u.k6.reg.dchpri[4], "CHPRI");
    state->u.k6.fld.dchpri[4].dpa = cm_object_get_child_by_name(state->u.k6.reg.dchpri[4], "DPA");
    state->u.k6.fld.dchpri[4].ecp = cm_object_get_child_by_name(state->u.k6.reg.dchpri[4], "ECP");
    // DCHPRI6 bitfields.
    state->u.k6.fld.dchpri[5].chpri = cm_object_get_child_by_name(state->u.k6.reg.dchpri[5], "CHPRI");
    state->u.k6.fld.dchpri[5].dpa = cm_object_get_child_by_name(state->u.k6.reg.dchpri[5], "DPA");
    state->u.k6.fld.dchpri[5].ecp = cm_object_get_child_by_name(state->u.k6.reg.dchpri[5], "ECP");
    // DCHPRI5 bitfields.
    state->u.k6.fld.dchpri[6].chpri = cm_object_get_child_by_name(state->u.k6.reg.dchpri[6], "CHPRI");
    state->u.k6.fld.dchpri[6].dpa = cm_object_get_child_by_name(state->u.k6.reg.dchpri[6], "DPA");
    state->u.k6.fld.dchpri[6].ecp = cm_object_get_child_by_name(state->u.k6.reg.dchpri[6], "ECP");
    // DCHPRI4 bitfields.
    state->u.k6.fld.dchpri[7].chpri = cm_object_get_child_by_name(state->u.k6.reg.dchpri[7], "CHPRI");
    state->u.k6.fld.dchpri[7].dpa = cm_object_get_child_by_name(state->u.k6.reg.dchpri[7], "DPA");
    state->u.k6.fld.dchpri[7].ecp = cm_object_get_child_by_name(state->u.k6.reg.dchpri[7], "ECP");
    // DCHPRI11 bitfields.
    state->u.k6.fld.dchpri[8].chpri = cm_object_get_child_by_name(state->u.k6.reg.dchpri[8], "CHPRI");
    state->u.k6.fld.dchpri[8].dpa = cm_object_get_child_by_name(state->u.k6.reg.dchpri[8], "DPA");
    state->u.k6.fld.dchpri[8].ecp = cm_object_get_child_by_name(state->u.k6.reg.dchpri[8], "ECP");
    // DCHPRI10 bitfields.
    state->u.k6.fld.dchpri[9].chpri = cm_object_get_child_by_name(state->u.k6.reg.dchpri[9], "CHPRI");
    state->u.k6.fld.dchpri[9].dpa = cm_object_get_child_by_name(state->u.k6.reg.dchpri[9], "DPA");
    state->u.k6.fld.dchpri[9].ecp = cm_object_get_child_by_name(state->u.k6.reg.dchpri[9], "ECP");
    // DCHPRI9 bitfields.
    state->u.k6.fld.dchpri[10].chpri = cm_object_get_child_by_name(state->u.k6.reg.dchpri[10], "CHPRI");
    state->u.k6.fld.dchpri[10].dpa = cm_object_get_child_by_name(state->u.k6.reg.dchpri[10], "DPA");
    state->u.k6.fld.dchpri[10].ecp = cm_object_get_child_by_name(state->u.k6.reg.dchpri[10], "ECP");
    // DCHPRI8 bitfields.
    state->u.k6.fld.dchpri[11].chpri = cm_object_get_child_by_name(state->u.k6.reg.dchpri[11], "CHPRI");
    state->u.k6.fld.dchpri[11].dpa = cm_object_get_child_by_name(state->u.k6.reg.dchpri[11], "DPA");
    state->u.k6.fld.dchpri[11].ecp = cm_object_get_child_by_name(state->u.k6.reg.dchpri[11], "ECP");
    // DCHPRI15 bitfields.
    state->u.k6.fld.dchpri[12].chpri = cm_object_get_child_by_name(state->u.k6.reg.dchpri[12], "CHPRI");
    state->u.k6.fld.dchpri[12].dpa = cm_object_get_child_by_name(state->u.k6.reg.dchpri[12], "DPA");
    state->u.k6.fld.dchpri[12].ecp = cm_object_get_child_by_name(state->u.k6.reg.dchpri[12], "ECP");
    // DCHPRI14 bitfields.
    state->u.k6.fld.dchpri[13].chpri = cm_object_get_child_by_name(state->u.k6.reg.dchpri[13], "CHPRI");
    state->u.k6.fld.dchpri[13].dpa = cm_object_get_child_by_name(state->u.k6.reg.dchpri[13], "DPA");
    state->u.k6.fld.dchpri[13].ecp = cm_object_get_child_by_name(state->u.k6.reg.dchpri[13], "ECP");
    // DCHPRI13 bitfields.
    state->u.k6.fld.dchpri[14].chpri = cm_object_get_child_by_name(state->u.k6.reg.dchpri[14], "CHPRI");
    state->u.k6.fld.dchpri[14].dpa = cm_object_get_child_by_name(state->u.k6.reg.dchpri[14], "DPA");
    state->u.k6.fld.dchpri[14].ecp = cm_object_get_child_by_name(state->u.k6.reg.dchpri[14], "ECP");
    // DCHPRI12 bitfields.
    state->u.k6.fld.dchpri[15].chpri = cm_object_get_child_by_name(state->u.k6.reg.dchpri[15], "CHPRI");
    state->u.k6.fld.dchpri[15].dpa = cm_object_get_child_by_name(state->u.k6.reg.dchpri[15], "DPA");
    state->u.k6.fld.dchpri[15].ecp = cm_object_get_child_by_name(state->u.k6.reg.dchpri[15], "ECP");
    // TCD0_SADDR bitfields.
    state->u.k6.fld.tcd_saddr[0].saddr = cm_object_get_child_by_name(state->u.k6.reg.tcd_saddr[0], "SADDR");
    // TCD1_SADDR bitfields.
    state->u.k6.fld.tcd_saddr[1].saddr = cm_object_get_child_by_name(state->u.k6.reg.tcd_saddr[1], "SADDR");
    // TCD2_SADDR bitfields.
    state->u.k6.fld.tcd_saddr[2].saddr = cm_object_get_child_by_name(state->u.k6.reg.tcd_saddr[2], "SADDR");
    // TCD3_SADDR bitfields.
    state->u.k6.fld.tcd_saddr[3].saddr = cm_object_get_child_by_name(state->u.k6.reg.tcd_saddr[3], "SADDR");
    // TCD4_SADDR bitfields.
    state->u.k6.fld.tcd_saddr[4].saddr = cm_object_get_child_by_name(state->u.k6.reg.tcd_saddr[4], "SADDR");
    // TCD5_SADDR bitfields.
    state->u.k6.fld.tcd_saddr[5].saddr = cm_object_get_child_by_name(state->u.k6.reg.tcd_saddr[5], "SADDR");
    // TCD6_SADDR bitfields.
    state->u.k6.fld.tcd_saddr[6].saddr = cm_object_get_child_by_name(state->u.k6.reg.tcd_saddr[6], "SADDR");
    // TCD7_SADDR bitfields.
    state->u.k6.fld.tcd_saddr[7].saddr = cm_object_get_child_by_name(state->u.k6.reg.tcd_saddr[7], "SADDR");
    // TCD8_SADDR bitfields.
    state->u.k6.fld.tcd_saddr[8].saddr = cm_object_get_child_by_name(state->u.k6.reg.tcd_saddr[8], "SADDR");
    // TCD9_SADDR bitfields.
    state->u.k6.fld.tcd_saddr[9].saddr = cm_object_get_child_by_name(state->u.k6.reg.tcd_saddr[9], "SADDR");
    // TCD10_SADDR bitfields.
    state->u.k6.fld.tcd_saddr[10].saddr = cm_object_get_child_by_name(state->u.k6.reg.tcd_saddr[10], "SADDR");
    // TCD11_SADDR bitfields.
    state->u.k6.fld.tcd_saddr[11].saddr = cm_object_get_child_by_name(state->u.k6.reg.tcd_saddr[11], "SADDR");
    // TCD12_SADDR bitfields.
    state->u.k6.fld.tcd_saddr[12].saddr = cm_object_get_child_by_name(state->u.k6.reg.tcd_saddr[12], "SADDR");
    // TCD13_SADDR bitfields.
    state->u.k6.fld.tcd_saddr[13].saddr = cm_object_get_child_by_name(state->u.k6.reg.tcd_saddr[13], "SADDR");
    // TCD14_SADDR bitfields.
    state->u.k6.fld.tcd_saddr[14].saddr = cm_object_get_child_by_name(state->u.k6.reg.tcd_saddr[14], "SADDR");
    // TCD15_SADDR bitfields.
    state->u.k6.fld.tcd_saddr[15].saddr = cm_object_get_child_by_name(state->u.k6.reg.tcd_saddr[15], "SADDR");
    // TCD0_SOFF bitfields.
    state->u.k6.fld.tcd_soff[0].soff = cm_object_get_child_by_name(state->u.k6.reg.tcd_soff[0], "SOFF");
    // TCD1_SOFF bitfields.
    state->u.k6.fld.tcd_soff[1].soff = cm_object_get_child_by_name(state->u.k6.reg.tcd_soff[1], "SOFF");
    // TCD2_SOFF bitfields.
    state->u.k6.fld.tcd_soff[2].soff = cm_object_get_child_by_name(state->u.k6.reg.tcd_soff[2], "SOFF");
    // TCD3_SOFF bitfields.
    state->u.k6.fld.tcd_soff[3].soff = cm_object_get_child_by_name(state->u.k6.reg.tcd_soff[3], "SOFF");
    // TCD4_SOFF bitfields.
    state->u.k6.fld.tcd_soff[4].soff = cm_object_get_child_by_name(state->u.k6.reg.tcd_soff[4], "SOFF");
    // TCD5_SOFF bitfields.
    state->u.k6.fld.tcd_soff[5].soff = cm_object_get_child_by_name(state->u.k6.reg.tcd_soff[5], "SOFF");
    // TCD6_SOFF bitfields.
    state->u.k6.fld.tcd_soff[6].soff = cm_object_get_child_by_name(state->u.k6.reg.tcd_soff[6], "SOFF");
    // TCD7_SOFF bitfields.
    state->u.k6.fld.tcd_soff[7].soff = cm_object_get_child_by_name(state->u.k6.reg.tcd_soff[7], "SOFF");
    // TCD8_SOFF bitfields.
    state->u.k6.fld.tcd_soff[8].soff = cm_object_get_child_by_name(state->u.k6.reg.tcd_soff[8], "SOFF");
    // TCD9_SOFF bitfields.
    state->u.k6.fld.tcd_soff[9].soff = cm_object_get_child_by_name(state->u.k6.reg.tcd_soff[9], "SOFF");
    // TCD10_SOFF bitfields.
    state->u.k6.fld.tcd_soff[10].soff = cm_object_get_child_by_name(state->u.k6.reg.tcd_soff[10], "SOFF");
    // TCD11_SOFF bitfields.
    state->u.k6.fld.tcd_soff[11].soff = cm_object_get_child_by_name(state->u.k6.reg.tcd_soff[11], "SOFF");
    // TCD12_SOFF bitfields.
    state->u.k6.fld.tcd_soff[12].soff = cm_object_get_child_by_name(state->u.k6.reg.tcd_soff[12], "SOFF");
    // TCD13_SOFF bitfields.
    state->u.k6.fld.tcd_soff[13].soff = cm_object_get_child_by_name(state->u.k6.reg.tcd_soff[13], "SOFF");
    // TCD14_SOFF bitfields.
    state->u.k6.fld.tcd_soff[14].soff = cm_object_get_child_by_name(state->u.k6.reg.tcd_soff[14], "SOFF");
    // TCD15_SOFF bitfields.
    state->u.k6.fld.tcd_soff[15].soff = cm_object_get_child_by_name(state->u.k6.reg.tcd_soff[15], "SOFF");
    // TCD0_ATTR bitfields.
    state->u.k6.fld.tcd_attr[0].dsize = cm_object_get_child_by_name(state->u.k6.reg.tcd_attr[0], "DSIZE");
    state->u.k6.fld.tcd_attr[0].dmod = cm_object_get_child_by_name(state->u.k6.reg.tcd_attr[0], "DMOD");
    state->u.k6.fld.tcd_attr[0].ssize = cm_object_get_child_by_name(state->u.k6.reg.tcd_attr[0], "SSIZE");
    state->u.k6.fld.tcd_attr[0].smod = cm_object_get_child_by_name(state->u.k6.reg.tcd_attr[0], "SMOD");
    // TCD1_ATTR bitfields.
    state->u.k6.fld.tcd_attr[1].dsize = cm_object_get_child_by_name(state->u.k6.reg.tcd_attr[1], "DSIZE");
    state->u.k6.fld.tcd_attr[1].dmod = cm_object_get_child_by_name(state->u.k6.reg.tcd_attr[1], "DMOD");
    state->u.k6.fld.tcd_attr[1].ssize = cm_object_get_child_by_name(state->u.k6.reg.tcd_attr[1], "SSIZE");
    state->u.k6.fld.tcd_attr[1].smod = cm_object_get_child_by_name(state->u.k6.reg.tcd_attr[1], "SMOD");
    // TCD2_ATTR bitfields.
    state->u.k6.fld.tcd_attr[2].dsize = cm_object_get_child_by_name(state->u.k6.reg.tcd_attr[2], "DSIZE");
    state->u.k6.fld.tcd_attr[2].dmod = cm_object_get_child_by_name(state->u.k6.reg.tcd_attr[2], "DMOD");
    state->u.k6.fld.tcd_attr[2].ssize = cm_object_get_child_by_name(state->u.k6.reg.tcd_attr[2], "SSIZE");
    state->u.k6.fld.tcd_attr[2].smod = cm_object_get_child_by_name(state->u.k6.reg.tcd_attr[2], "SMOD");
    // TCD3_ATTR bitfields.
    state->u.k6.fld.tcd_attr[3].dsize = cm_object_get_child_by_name(state->u.k6.reg.tcd_attr[3], "DSIZE");
    state->u.k6.fld.tcd_attr[3].dmod = cm_object_get_child_by_name(state->u.k6.reg.tcd_attr[3], "DMOD");
    state->u.k6.fld.tcd_attr[3].ssize = cm_object_get_child_by_name(state->u.k6.reg.tcd_attr[3], "SSIZE");
    state->u.k6.fld.tcd_attr[3].smod = cm_object_get_child_by_name(state->u.k6.reg.tcd_attr[3], "SMOD");
    // TCD4_ATTR bitfields.
    state->u.k6.fld.tcd_attr[4].dsize = cm_object_get_child_by_name(state->u.k6.reg.tcd_attr[4], "DSIZE");
    state->u.k6.fld.tcd_attr[4].dmod = cm_object_get_child_by_name(state->u.k6.reg.tcd_attr[4], "DMOD");
    state->u.k6.fld.tcd_attr[4].ssize = cm_object_get_child_by_name(state->u.k6.reg.tcd_attr[4], "SSIZE");
    state->u.k6.fld.tcd_attr[4].smod = cm_object_get_child_by_name(state->u.k6.reg.tcd_attr[4], "SMOD");
    // TCD5_ATTR bitfields.
    state->u.k6.fld.tcd_attr[5].dsize = cm_object_get_child_by_name(state->u.k6.reg.tcd_attr[5], "DSIZE");
    state->u.k6.fld.tcd_attr[5].dmod = cm_object_get_child_by_name(state->u.k6.reg.tcd_attr[5], "DMOD");
    state->u.k6.fld.tcd_attr[5].ssize = cm_object_get_child_by_name(state->u.k6.reg.tcd_attr[5], "SSIZE");
    state->u.k6.fld.tcd_attr[5].smod = cm_object_get_child_by_name(state->u.k6.reg.tcd_attr[5], "SMOD");
    // TCD6_ATTR bitfields.
    state->u.k6.fld.tcd_attr[6].dsize = cm_object_get_child_by_name(state->u.k6.reg.tcd_attr[6], "DSIZE");
    state->u.k6.fld.tcd_attr[6].dmod = cm_object_get_child_by_name(state->u.k6.reg.tcd_attr[6], "DMOD");
    state->u.k6.fld.tcd_attr[6].ssize = cm_object_get_child_by_name(state->u.k6.reg.tcd_attr[6], "SSIZE");
    state->u.k6.fld.tcd_attr[6].smod = cm_object_get_child_by_name(state->u.k6.reg.tcd_attr[6], "SMOD");
    // TCD7_ATTR bitfields.
    state->u.k6.fld.tcd_attr[7].dsize = cm_object_get_child_by_name(state->u.k6.reg.tcd_attr[7], "DSIZE");
    state->u.k6.fld.tcd_attr[7].dmod = cm_object_get_child_by_name(state->u.k6.reg.tcd_attr[7], "DMOD");
    state->u.k6.fld.tcd_attr[7].ssize = cm_object_get_child_by_name(state->u.k6.reg.tcd_attr[7], "SSIZE");
    state->u.k6.fld.tcd_attr[7].smod = cm_object_get_child_by_name(state->u.k6.reg.tcd_attr[7], "SMOD");
    // TCD8_ATTR bitfields.
    state->u.k6.fld.tcd_attr[8].dsize = cm_object_get_child_by_name(state->u.k6.reg.tcd_attr[8], "DSIZE");
    state->u.k6.fld.tcd_attr[8].dmod = cm_object_get_child_by_name(state->u.k6.reg.tcd_attr[8], "DMOD");
    state->u.k6.fld.tcd_attr[8].ssize = cm_object_get_child_by_name(state->u.k6.reg.tcd_attr[8], "SSIZE");
    state->u.k6.fld.tcd_attr[8].smod = cm_object_get_child_by_name(state->u.k6.reg.tcd_attr[8], "SMOD");
    // TCD9_ATTR bitfields.
    state->u.k6.fld.tcd_attr[9].dsize = cm_object_get_child_by_name(state->u.k6.reg.tcd_attr[9], "DSIZE");
    state->u.k6.fld.tcd_attr[9].dmod = cm_object_get_child_by_name(state->u.k6.reg.tcd_attr[9], "DMOD");
    state->u.k6.fld.tcd_attr[9].ssize = cm_object_get_child_by_name(state->u.k6.reg.tcd_attr[9], "SSIZE");
    state->u.k6.fld.tcd_attr[9].smod = cm_object_get_child_by_name(state->u.k6.reg.tcd_attr[9], "SMOD");
    // TCD10_ATTR bitfields.
    state->u.k6.fld.tcd_attr[10].dsize = cm_object_get_child_by_name(state->u.k6.reg.tcd_attr[10], "DSIZE");
    state->u.k6.fld.tcd_attr[10].dmod = cm_object_get_child_by_name(state->u.k6.reg.tcd_attr[10], "DMOD");
    state->u.k6.fld.tcd_attr[10].ssize = cm_object_get_child_by_name(state->u.k6.reg.tcd_attr[10], "SSIZE");
    state->u.k6.fld.tcd_attr[10].smod = cm_object_get_child_by_name(state->u.k6.reg.tcd_attr[10], "SMOD");
    // TCD11_ATTR bitfields.
    state->u.k6.fld.tcd_attr[11].dsize = cm_object_get_child_by_name(state->u.k6.reg.tcd_attr[11], "DSIZE");
    state->u.k6.fld.tcd_attr[11].dmod = cm_object_get_child_by_name(state->u.k6.reg.tcd_attr[11], "DMOD");
    state->u.k6.fld.tcd_attr[11].ssize = cm_object_get_child_by_name(state->u.k6.reg.tcd_attr[11], "SSIZE");
    state->u.k6.fld.tcd_attr[11].smod = cm_object_get_child_by_name(state->u.k6.reg.tcd_attr[11], "SMOD");
    // TCD12_ATTR bitfields.
    state->u.k6.fld.tcd_attr[12].dsize = cm_object_get_child_by_name(state->u.k6.reg.tcd_attr[12], "DSIZE");
    state->u.k6.fld.tcd_attr[12].dmod = cm_object_get_child_by_name(state->u.k6.reg.tcd_attr[12], "DMOD");
    state->u.k6.fld.tcd_attr[12].ssize = cm_object_get_child_by_name(state->u.k6.reg.tcd_attr[12], "SSIZE");
    state->u.k6.fld.tcd_attr[12].smod = cm_object_get_child_by_name(state->u.k6.reg.tcd_attr[12], "SMOD");
    // TCD13_ATTR bitfields.
    state->u.k6.fld.tcd_attr[13].dsize = cm_object_get_child_by_name(state->u.k6.reg.tcd_attr[13], "DSIZE");
    state->u.k6.fld.tcd_attr[13].dmod = cm_object_get_child_by_name(state->u.k6.reg.tcd_attr[13], "DMOD");
    state->u.k6.fld.tcd_attr[13].ssize = cm_object_get_child_by_name(state->u.k6.reg.tcd_attr[13], "SSIZE");
    state->u.k6.fld.tcd_attr[13].smod = cm_object_get_child_by_name(state->u.k6.reg.tcd_attr[13], "SMOD");
    // TCD14_ATTR bitfields.
    state->u.k6.fld.tcd_attr[14].dsize = cm_object_get_child_by_name(state->u.k6.reg.tcd_attr[14], "DSIZE");
    state->u.k6.fld.tcd_attr[14].dmod = cm_object_get_child_by_name(state->u.k6.reg.tcd_attr[14], "DMOD");
    state->u.k6.fld.tcd_attr[14].ssize = cm_object_get_child_by_name(state->u.k6.reg.tcd_attr[14], "SSIZE");
    state->u.k6.fld.tcd_attr[14].smod = cm_object_get_child_by_name(state->u.k6.reg.tcd_attr[14], "SMOD");
    // TCD15_ATTR bitfields.
    state->u.k6.fld.tcd_attr[15].dsize = cm_object_get_child_by_name(state->u.k6.reg.tcd_attr[15], "DSIZE");
    state->u.k6.fld.tcd_attr[15].dmod = cm_object_get_child_by_name(state->u.k6.reg.tcd_attr[15], "DMOD");
    state->u.k6.fld.tcd_attr[15].ssize = cm_object_get_child_by_name(state->u.k6.reg.tcd_attr[15], "SSIZE");
    state->u.k6.fld.tcd_attr[15].smod = cm_object_get_child_by_name(state->u.k6.reg.tcd_attr[15], "SMOD");
    // TCD0_NBYTES_MLNO bitfields.
    state->u.k6.fld.tcd_nbytes_mlno[0].nbytes = cm_object_get_child_by_name(state->u.k6.reg.tcd_nbytes_mlno[0], "NBYTES");
    // TCD1_NBYTES_MLNO bitfields.
    state->u.k6.fld.tcd_nbytes_mlno[1].nbytes = cm_object_get_child_by_name(state->u.k6.reg.tcd_nbytes_mlno[1], "NBYTES");
    // TCD2_NBYTES_MLNO bitfields.
    state->u.k6.fld.tcd_nbytes_mlno[2].nbytes = cm_object_get_child_by_name(state->u.k6.reg.tcd_nbytes_mlno[2], "NBYTES");
    // TCD3_NBYTES_MLNO bitfields.
    state->u.k6.fld.tcd_nbytes_mlno[3].nbytes = cm_object_get_child_by_name(state->u.k6.reg.tcd_nbytes_mlno[3], "NBYTES");
    // TCD4_NBYTES_MLNO bitfields.
    state->u.k6.fld.tcd_nbytes_mlno[4].nbytes = cm_object_get_child_by_name(state->u.k6.reg.tcd_nbytes_mlno[4], "NBYTES");
    // TCD5_NBYTES_MLNO bitfields.
    state->u.k6.fld.tcd_nbytes_mlno[5].nbytes = cm_object_get_child_by_name(state->u.k6.reg.tcd_nbytes_mlno[5], "NBYTES");
    // TCD6_NBYTES_MLNO bitfields.
    state->u.k6.fld.tcd_nbytes_mlno[6].nbytes = cm_object_get_child_by_name(state->u.k6.reg.tcd_nbytes_mlno[6], "NBYTES");
    // TCD7_NBYTES_MLNO bitfields.
    state->u.k6.fld.tcd_nbytes_mlno[7].nbytes = cm_object_get_child_by_name(state->u.k6.reg.tcd_nbytes_mlno[7], "NBYTES");
    // TCD8_NBYTES_MLNO bitfields.
    state->u.k6.fld.tcd_nbytes_mlno[8].nbytes = cm_object_get_child_by_name(state->u.k6.reg.tcd_nbytes_mlno[8], "NBYTES");
    // TCD9_NBYTES_MLNO bitfields.
    state->u.k6.fld.tcd_nbytes_mlno[9].nbytes = cm_object_get_child_by_name(state->u.k6.reg.tcd_nbytes_mlno[9], "NBYTES");
    // TCD10_NBYTES_MLNO bitfields.
    state->u.k6.fld.tcd_nbytes_mlno[10].nbytes = cm_object_get_child_by_name(state->u.k6.reg.tcd_nbytes_mlno[10], "NBYTES");
    // TCD11_NBYTES_MLNO bitfields.
    state->u.k6.fld.tcd_nbytes_mlno[11].nbytes = cm_object_get_child_by_name(state->u.k6.reg.tcd_nbytes_mlno[11], "NBYTES");
    // TCD12_NBYTES_MLNO bitfields.
    state->u.k6.fld.tcd_nbytes_mlno[12].nbytes = cm_object_get_child_by_name(state->u.k6.reg.tcd_nbytes_mlno[12], "NBYTES");
    // TCD13_NBYTES_MLNO bitfields.
    state->u.k6.fld.tcd_nbytes_mlno[13].nbytes = cm_object_get_child_by_name(state->u.k6.reg.tcd_nbytes_mlno[13], "NBYTES");
    // TCD14_NBYTES_MLNO bitfields.
    state->u.k6.fld.tcd_nbytes_mlno[14].nbytes = cm_object_get_child_by_name(state->u.k6.reg.tcd_nbytes_mlno[14], "NBYTES");
    // TCD15_NBYTES_MLNO bitfields.
    state->u.k6.fld.tcd_nbytes_mlno[15].nbytes = cm_object_get_child_by_name(state->u.k6.reg.tcd_nbytes_mlno[15], "NBYTES");
    // TCD0_NBYTES_MLOFFNO bitfields.
    state->u.k6.fld.tcd_nbytes_mloffno[0].nbytes = cm_object_get_child_by_name(state->u.k6.reg.tcd_nbytes_mloffno[0], "NBYTES");
    state->u.k6.fld.tcd_nbytes_mloffno[0].dmloe = cm_object_get_child_by_name(state->u.k6.reg.tcd_nbytes_mloffno[0], "DMLOE");
    state->u.k6.fld.tcd_nbytes_mloffno[0].smloe = cm_object_get_child_by_name(state->u.k6.reg.tcd_nbytes_mloffno[0], "SMLOE");
    // TCD1_NBYTES_MLOFFNO bitfields.
    state->u.k6.fld.tcd_nbytes_mloffno[1].nbytes = cm_object_get_child_by_name(state->u.k6.reg.tcd_nbytes_mloffno[1], "NBYTES");
    state->u.k6.fld.tcd_nbytes_mloffno[1].dmloe = cm_object_get_child_by_name(state->u.k6.reg.tcd_nbytes_mloffno[1], "DMLOE");
    state->u.k6.fld.tcd_nbytes_mloffno[1].smloe = cm_object_get_child_by_name(state->u.k6.reg.tcd_nbytes_mloffno[1], "SMLOE");
    // TCD2_NBYTES_MLOFFNO bitfields.
    state->u.k6.fld.tcd_nbytes_mloffno[2].nbytes = cm_object_get_child_by_name(state->u.k6.reg.tcd_nbytes_mloffno[2], "NBYTES");
    state->u.k6.fld.tcd_nbytes_mloffno[2].dmloe = cm_object_get_child_by_name(state->u.k6.reg.tcd_nbytes_mloffno[2], "DMLOE");
    state->u.k6.fld.tcd_nbytes_mloffno[2].smloe = cm_object_get_child_by_name(state->u.k6.reg.tcd_nbytes_mloffno[2], "SMLOE");
    // TCD3_NBYTES_MLOFFNO bitfields.
    state->u.k6.fld.tcd_nbytes_mloffno[3].nbytes = cm_object_get_child_by_name(state->u.k6.reg.tcd_nbytes_mloffno[3], "NBYTES");
    state->u.k6.fld.tcd_nbytes_mloffno[3].dmloe = cm_object_get_child_by_name(state->u.k6.reg.tcd_nbytes_mloffno[3], "DMLOE");
    state->u.k6.fld.tcd_nbytes_mloffno[3].smloe = cm_object_get_child_by_name(state->u.k6.reg.tcd_nbytes_mloffno[3], "SMLOE");
    // TCD4_NBYTES_MLOFFNO bitfields.
    state->u.k6.fld.tcd_nbytes_mloffno[4].nbytes = cm_object_get_child_by_name(state->u.k6.reg.tcd_nbytes_mloffno[4], "NBYTES");
    state->u.k6.fld.tcd_nbytes_mloffno[4].dmloe = cm_object_get_child_by_name(state->u.k6.reg.tcd_nbytes_mloffno[4], "DMLOE");
    state->u.k6.fld.tcd_nbytes_mloffno[4].smloe = cm_object_get_child_by_name(state->u.k6.reg.tcd_nbytes_mloffno[4], "SMLOE");
    // TCD5_NBYTES_MLOFFNO bitfields.
    state->u.k6.fld.tcd_nbytes_mloffno[5].nbytes = cm_object_get_child_by_name(state->u.k6.reg.tcd_nbytes_mloffno[5], "NBYTES");
    state->u.k6.fld.tcd_nbytes_mloffno[5].dmloe = cm_object_get_child_by_name(state->u.k6.reg.tcd_nbytes_mloffno[5], "DMLOE");
    state->u.k6.fld.tcd_nbytes_mloffno[5].smloe = cm_object_get_child_by_name(state->u.k6.reg.tcd_nbytes_mloffno[5], "SMLOE");
    // TCD6_NBYTES_MLOFFNO bitfields.
    state->u.k6.fld.tcd_nbytes_mloffno[6].nbytes = cm_object_get_child_by_name(state->u.k6.reg.tcd_nbytes_mloffno[6], "NBYTES");
    state->u.k6.fld.tcd_nbytes_mloffno[6].dmloe = cm_object_get_child_by_name(state->u.k6.reg.tcd_nbytes_mloffno[6], "DMLOE");
    state->u.k6.fld.tcd_nbytes_mloffno[6].smloe = cm_object_get_child_by_name(state->u.k6.reg.tcd_nbytes_mloffno[6], "SMLOE");
    // TCD7_NBYTES_MLOFFNO bitfields.
    state->u.k6.fld.tcd_nbytes_mloffno[7].nbytes = cm_object_get_child_by_name(state->u.k6.reg.tcd_nbytes_mloffno[7], "NBYTES");
    state->u.k6.fld.tcd_nbytes_mloffno[7].dmloe = cm_object_get_child_by_name(state->u.k6.reg.tcd_nbytes_mloffno[7], "DMLOE");
    state->u.k6.fld.tcd_nbytes_mloffno[7].smloe = cm_object_get_child_by_name(state->u.k6.reg.tcd_nbytes_mloffno[7], "SMLOE");
    // TCD8_NBYTES_MLOFFNO bitfields.
    state->u.k6.fld.tcd_nbytes_mloffno[8].nbytes = cm_object_get_child_by_name(state->u.k6.reg.tcd_nbytes_mloffno[8], "NBYTES");
    state->u.k6.fld.tcd_nbytes_mloffno[8].dmloe = cm_object_get_child_by_name(state->u.k6.reg.tcd_nbytes_mloffno[8], "DMLOE");
    state->u.k6.fld.tcd_nbytes_mloffno[8].smloe = cm_object_get_child_by_name(state->u.k6.reg.tcd_nbytes_mloffno[8], "SMLOE");
    // TCD9_NBYTES_MLOFFNO bitfields.
    state->u.k6.fld.tcd_nbytes_mloffno[9].nbytes = cm_object_get_child_by_name(state->u.k6.reg.tcd_nbytes_mloffno[9], "NBYTES");
    state->u.k6.fld.tcd_nbytes_mloffno[9].dmloe = cm_object_get_child_by_name(state->u.k6.reg.tcd_nbytes_mloffno[9], "DMLOE");
    state->u.k6.fld.tcd_nbytes_mloffno[9].smloe = cm_object_get_child_by_name(state->u.k6.reg.tcd_nbytes_mloffno[9], "SMLOE");
    // TCD10_NBYTES_MLOFFNO bitfields.
    state->u.k6.fld.tcd_nbytes_mloffno[10].nbytes = cm_object_get_child_by_name(state->u.k6.reg.tcd_nbytes_mloffno[10], "NBYTES");
    state->u.k6.fld.tcd_nbytes_mloffno[10].dmloe = cm_object_get_child_by_name(state->u.k6.reg.tcd_nbytes_mloffno[10], "DMLOE");
    state->u.k6.fld.tcd_nbytes_mloffno[10].smloe = cm_object_get_child_by_name(state->u.k6.reg.tcd_nbytes_mloffno[10], "SMLOE");
    // TCD11_NBYTES_MLOFFNO bitfields.
    state->u.k6.fld.tcd_nbytes_mloffno[11].nbytes = cm_object_get_child_by_name(state->u.k6.reg.tcd_nbytes_mloffno[11], "NBYTES");
    state->u.k6.fld.tcd_nbytes_mloffno[11].dmloe = cm_object_get_child_by_name(state->u.k6.reg.tcd_nbytes_mloffno[11], "DMLOE");
    state->u.k6.fld.tcd_nbytes_mloffno[11].smloe = cm_object_get_child_by_name(state->u.k6.reg.tcd_nbytes_mloffno[11], "SMLOE");
    // TCD12_NBYTES_MLOFFNO bitfields.
    state->u.k6.fld.tcd_nbytes_mloffno[12].nbytes = cm_object_get_child_by_name(state->u.k6.reg.tcd_nbytes_mloffno[12], "NBYTES");
    state->u.k6.fld.tcd_nbytes_mloffno[12].dmloe = cm_object_get_child_by_name(state->u.k6.reg.tcd_nbytes_mloffno[12], "DMLOE");
    state->u.k6.fld.tcd_nbytes_mloffno[12].smloe = cm_object_get_child_by_name(state->u.k6.reg.tcd_nbytes_mloffno[12], "SMLOE");
    // TCD13_NBYTES_MLOFFNO bitfields.
    state->u.k6.fld.tcd_nbytes_mloffno[13].nbytes = cm_object_get_child_by_name(state->u.k6.reg.tcd_nbytes_mloffno[13], "NBYTES");
    state->u.k6.fld.tcd_nbytes_mloffno[13].dmloe = cm_object_get_child_by_name(state->u.k6.reg.tcd_nbytes_mloffno[13], "DMLOE");
    state->u.k6.fld.tcd_nbytes_mloffno[13].smloe = cm_object_get_child_by_name(state->u.k6.reg.tcd_nbytes_mloffno[13], "SMLOE");
    // TCD14_NBYTES_MLOFFNO bitfields.
    state->u.k6.fld.tcd_nbytes_mloffno[14].nbytes = cm_object_get_child_by_name(state->u.k6.reg.tcd_nbytes_mloffno[14], "NBYTES");
    state->u.k6.fld.tcd_nbytes_mloffno[14].dmloe = cm_object_get_child_by_name(state->u.k6.reg.tcd_nbytes_mloffno[14], "DMLOE");
    state->u.k6.fld.tcd_nbytes_mloffno[14].smloe = cm_object_get_child_by_name(state->u.k6.reg.tcd_nbytes_mloffno[14], "SMLOE");
    // TCD15_NBYTES_MLOFFNO bitfields.
    state->u.k6.fld.tcd_nbytes_mloffno[15].nbytes = cm_object_get_child_by_name(state->u.k6.reg.tcd_nbytes_mloffno[15], "NBYTES");
    state->u.k6.fld.tcd_nbytes_mloffno[15].dmloe = cm_object_get_child_by_name(state->u.k6.reg.tcd_nbytes_mloffno[15], "DMLOE");
    state->u.k6.fld.tcd_nbytes_mloffno[15].smloe = cm_object_get_child_by_name(state->u.k6.reg.tcd_nbytes_mloffno[15], "SMLOE");
    // TCD0_NBYTES_MLOFFYES bitfields.
    state->u.k6.fld.tcd_nbytes_mloffyes[0].nbytes = cm_object_get_child_by_name(state->u.k6.reg.tcd_nbytes_mloffyes[0], "NBYTES");
    state->u.k6.fld.tcd_nbytes_mloffyes[0].mloff = cm_object_get_child_by_name(state->u.k6.reg.tcd_nbytes_mloffyes[0], "MLOFF");
    state->u.k6.fld.tcd_nbytes_mloffyes[0].dmloe = cm_object_get_child_by_name(state->u.k6.reg.tcd_nbytes_mloffyes[0], "DMLOE");
    state->u.k6.fld.tcd_nbytes_mloffyes[0].smloe = cm_object_get_child_by_name(state->u.k6.reg.tcd_nbytes_mloffyes[0], "SMLOE");
    // TCD1_NBYTES_MLOFFYES bitfields.
    state->u.k6.fld.tcd_nbytes_mloffyes[1].nbytes = cm_object_get_child_by_name(state->u.k6.reg.tcd_nbytes_mloffyes[1], "NBYTES");
    state->u.k6.fld.tcd_nbytes_mloffyes[1].mloff = cm_object_get_child_by_name(state->u.k6.reg.tcd_nbytes_mloffyes[1], "MLOFF");
    state->u.k6.fld.tcd_nbytes_mloffyes[1].dmloe = cm_object_get_child_by_name(state->u.k6.reg.tcd_nbytes_mloffyes[1], "DMLOE");
    state->u.k6.fld.tcd_nbytes_mloffyes[1].smloe = cm_object_get_child_by_name(state->u.k6.reg.tcd_nbytes_mloffyes[1], "SMLOE");
    // TCD2_NBYTES_MLOFFYES bitfields.
    state->u.k6.fld.tcd_nbytes_mloffyes[2].nbytes = cm_object_get_child_by_name(state->u.k6.reg.tcd_nbytes_mloffyes[2], "NBYTES");
    state->u.k6.fld.tcd_nbytes_mloffyes[2].mloff = cm_object_get_child_by_name(state->u.k6.reg.tcd_nbytes_mloffyes[2], "MLOFF");
    state->u.k6.fld.tcd_nbytes_mloffyes[2].dmloe = cm_object_get_child_by_name(state->u.k6.reg.tcd_nbytes_mloffyes[2], "DMLOE");
    state->u.k6.fld.tcd_nbytes_mloffyes[2].smloe = cm_object_get_child_by_name(state->u.k6.reg.tcd_nbytes_mloffyes[2], "SMLOE");
    // TCD3_NBYTES_MLOFFYES bitfields.
    state->u.k6.fld.tcd_nbytes_mloffyes[3].nbytes = cm_object_get_child_by_name(state->u.k6.reg.tcd_nbytes_mloffyes[3], "NBYTES");
    state->u.k6.fld.tcd_nbytes_mloffyes[3].mloff = cm_object_get_child_by_name(state->u.k6.reg.tcd_nbytes_mloffyes[3], "MLOFF");
    state->u.k6.fld.tcd_nbytes_mloffyes[3].dmloe = cm_object_get_child_by_name(state->u.k6.reg.tcd_nbytes_mloffyes[3], "DMLOE");
    state->u.k6.fld.tcd_nbytes_mloffyes[3].smloe = cm_object_get_child_by_name(state->u.k6.reg.tcd_nbytes_mloffyes[3], "SMLOE");
    // TCD4_NBYTES_MLOFFYES bitfields.
    state->u.k6.fld.tcd_nbytes_mloffyes[4].nbytes = cm_object_get_child_by_name(state->u.k6.reg.tcd_nbytes_mloffyes[4], "NBYTES");
    state->u.k6.fld.tcd_nbytes_mloffyes[4].mloff = cm_object_get_child_by_name(state->u.k6.reg.tcd_nbytes_mloffyes[4], "MLOFF");
    state->u.k6.fld.tcd_nbytes_mloffyes[4].dmloe = cm_object_get_child_by_name(state->u.k6.reg.tcd_nbytes_mloffyes[4], "DMLOE");
    state->u.k6.fld.tcd_nbytes_mloffyes[4].smloe = cm_object_get_child_by_name(state->u.k6.reg.tcd_nbytes_mloffyes[4], "SMLOE");
    // TCD5_NBYTES_MLOFFYES bitfields.
    state->u.k6.fld.tcd_nbytes_mloffyes[5].nbytes = cm_object_get_child_by_name(state->u.k6.reg.tcd_nbytes_mloffyes[5], "NBYTES");
    state->u.k6.fld.tcd_nbytes_mloffyes[5].mloff = cm_object_get_child_by_name(state->u.k6.reg.tcd_nbytes_mloffyes[5], "MLOFF");
    state->u.k6.fld.tcd_nbytes_mloffyes[5].dmloe = cm_object_get_child_by_name(state->u.k6.reg.tcd_nbytes_mloffyes[5], "DMLOE");
    state->u.k6.fld.tcd_nbytes_mloffyes[5].smloe = cm_object_get_child_by_name(state->u.k6.reg.tcd_nbytes_mloffyes[5], "SMLOE");
    // TCD6_NBYTES_MLOFFYES bitfields.
    state->u.k6.fld.tcd_nbytes_mloffyes[6].nbytes = cm_object_get_child_by_name(state->u.k6.reg.tcd_nbytes_mloffyes[6], "NBYTES");
    state->u.k6.fld.tcd_nbytes_mloffyes[6].mloff = cm_object_get_child_by_name(state->u.k6.reg.tcd_nbytes_mloffyes[6], "MLOFF");
    state->u.k6.fld.tcd_nbytes_mloffyes[6].dmloe = cm_object_get_child_by_name(state->u.k6.reg.tcd_nbytes_mloffyes[6], "DMLOE");
    state->u.k6.fld.tcd_nbytes_mloffyes[6].smloe = cm_object_get_child_by_name(state->u.k6.reg.tcd_nbytes_mloffyes[6], "SMLOE");
    // TCD7_NBYTES_MLOFFYES bitfields.
    state->u.k6.fld.tcd_nbytes_mloffyes[7].nbytes = cm_object_get_child_by_name(state->u.k6.reg.tcd_nbytes_mloffyes[7], "NBYTES");
    state->u.k6.fld.tcd_nbytes_mloffyes[7].mloff = cm_object_get_child_by_name(state->u.k6.reg.tcd_nbytes_mloffyes[7], "MLOFF");
    state->u.k6.fld.tcd_nbytes_mloffyes[7].dmloe = cm_object_get_child_by_name(state->u.k6.reg.tcd_nbytes_mloffyes[7], "DMLOE");
    state->u.k6.fld.tcd_nbytes_mloffyes[7].smloe = cm_object_get_child_by_name(state->u.k6.reg.tcd_nbytes_mloffyes[7], "SMLOE");
    // TCD8_NBYTES_MLOFFYES bitfields.
    state->u.k6.fld.tcd_nbytes_mloffyes[8].nbytes = cm_object_get_child_by_name(state->u.k6.reg.tcd_nbytes_mloffyes[8], "NBYTES");
    state->u.k6.fld.tcd_nbytes_mloffyes[8].mloff = cm_object_get_child_by_name(state->u.k6.reg.tcd_nbytes_mloffyes[8], "MLOFF");
    state->u.k6.fld.tcd_nbytes_mloffyes[8].dmloe = cm_object_get_child_by_name(state->u.k6.reg.tcd_nbytes_mloffyes[8], "DMLOE");
    state->u.k6.fld.tcd_nbytes_mloffyes[8].smloe = cm_object_get_child_by_name(state->u.k6.reg.tcd_nbytes_mloffyes[8], "SMLOE");
    // TCD9_NBYTES_MLOFFYES bitfields.
    state->u.k6.fld.tcd_nbytes_mloffyes[9].nbytes = cm_object_get_child_by_name(state->u.k6.reg.tcd_nbytes_mloffyes[9], "NBYTES");
    state->u.k6.fld.tcd_nbytes_mloffyes[9].mloff = cm_object_get_child_by_name(state->u.k6.reg.tcd_nbytes_mloffyes[9], "MLOFF");
    state->u.k6.fld.tcd_nbytes_mloffyes[9].dmloe = cm_object_get_child_by_name(state->u.k6.reg.tcd_nbytes_mloffyes[9], "DMLOE");
    state->u.k6.fld.tcd_nbytes_mloffyes[9].smloe = cm_object_get_child_by_name(state->u.k6.reg.tcd_nbytes_mloffyes[9], "SMLOE");
    // TCD10_NBYTES_MLOFFYES bitfields.
    state->u.k6.fld.tcd_nbytes_mloffyes[10].nbytes = cm_object_get_child_by_name(state->u.k6.reg.tcd_nbytes_mloffyes[10], "NBYTES");
    state->u.k6.fld.tcd_nbytes_mloffyes[10].mloff = cm_object_get_child_by_name(state->u.k6.reg.tcd_nbytes_mloffyes[10], "MLOFF");
    state->u.k6.fld.tcd_nbytes_mloffyes[10].dmloe = cm_object_get_child_by_name(state->u.k6.reg.tcd_nbytes_mloffyes[10], "DMLOE");
    state->u.k6.fld.tcd_nbytes_mloffyes[10].smloe = cm_object_get_child_by_name(state->u.k6.reg.tcd_nbytes_mloffyes[10], "SMLOE");
    // TCD11_NBYTES_MLOFFYES bitfields.
    state->u.k6.fld.tcd_nbytes_mloffyes[11].nbytes = cm_object_get_child_by_name(state->u.k6.reg.tcd_nbytes_mloffyes[11], "NBYTES");
    state->u.k6.fld.tcd_nbytes_mloffyes[11].mloff = cm_object_get_child_by_name(state->u.k6.reg.tcd_nbytes_mloffyes[11], "MLOFF");
    state->u.k6.fld.tcd_nbytes_mloffyes[11].dmloe = cm_object_get_child_by_name(state->u.k6.reg.tcd_nbytes_mloffyes[11], "DMLOE");
    state->u.k6.fld.tcd_nbytes_mloffyes[11].smloe = cm_object_get_child_by_name(state->u.k6.reg.tcd_nbytes_mloffyes[11], "SMLOE");
    // TCD12_NBYTES_MLOFFYES bitfields.
    state->u.k6.fld.tcd_nbytes_mloffyes[12].nbytes = cm_object_get_child_by_name(state->u.k6.reg.tcd_nbytes_mloffyes[12], "NBYTES");
    state->u.k6.fld.tcd_nbytes_mloffyes[12].mloff = cm_object_get_child_by_name(state->u.k6.reg.tcd_nbytes_mloffyes[12], "MLOFF");
    state->u.k6.fld.tcd_nbytes_mloffyes[12].dmloe = cm_object_get_child_by_name(state->u.k6.reg.tcd_nbytes_mloffyes[12], "DMLOE");
    state->u.k6.fld.tcd_nbytes_mloffyes[12].smloe = cm_object_get_child_by_name(state->u.k6.reg.tcd_nbytes_mloffyes[12], "SMLOE");
    // TCD13_NBYTES_MLOFFYES bitfields.
    state->u.k6.fld.tcd_nbytes_mloffyes[13].nbytes = cm_object_get_child_by_name(state->u.k6.reg.tcd_nbytes_mloffyes[13], "NBYTES");
    state->u.k6.fld.tcd_nbytes_mloffyes[13].mloff = cm_object_get_child_by_name(state->u.k6.reg.tcd_nbytes_mloffyes[13], "MLOFF");
    state->u.k6.fld.tcd_nbytes_mloffyes[13].dmloe = cm_object_get_child_by_name(state->u.k6.reg.tcd_nbytes_mloffyes[13], "DMLOE");
    state->u.k6.fld.tcd_nbytes_mloffyes[13].smloe = cm_object_get_child_by_name(state->u.k6.reg.tcd_nbytes_mloffyes[13], "SMLOE");
    // TCD14_NBYTES_MLOFFYES bitfields.
    state->u.k6.fld.tcd_nbytes_mloffyes[14].nbytes = cm_object_get_child_by_name(state->u.k6.reg.tcd_nbytes_mloffyes[14], "NBYTES");
    state->u.k6.fld.tcd_nbytes_mloffyes[14].mloff = cm_object_get_child_by_name(state->u.k6.reg.tcd_nbytes_mloffyes[14], "MLOFF");
    state->u.k6.fld.tcd_nbytes_mloffyes[14].dmloe = cm_object_get_child_by_name(state->u.k6.reg.tcd_nbytes_mloffyes[14], "DMLOE");
    state->u.k6.fld.tcd_nbytes_mloffyes[14].smloe = cm_object_get_child_by_name(state->u.k6.reg.tcd_nbytes_mloffyes[14], "SMLOE");
    // TCD15_NBYTES_MLOFFYES bitfields.
    state->u.k6.fld.tcd_nbytes_mloffyes[15].nbytes = cm_object_get_child_by_name(state->u.k6.reg.tcd_nbytes_mloffyes[15], "NBYTES");
    state->u.k6.fld.tcd_nbytes_mloffyes[15].mloff = cm_object_get_child_by_name(state->u.k6.reg.tcd_nbytes_mloffyes[15], "MLOFF");
    state->u.k6.fld.tcd_nbytes_mloffyes[15].dmloe = cm_object_get_child_by_name(state->u.k6.reg.tcd_nbytes_mloffyes[15], "DMLOE");
    state->u.k6.fld.tcd_nbytes_mloffyes[15].smloe = cm_object_get_child_by_name(state->u.k6.reg.tcd_nbytes_mloffyes[15], "SMLOE");
    // TCD0_SLAST bitfields.
    state->u.k6.fld.tcd_slast[0].slast = cm_object_get_child_by_name(state->u.k6.reg.tcd_slast[0], "SLAST");
    // TCD1_SLAST bitfields.
    state->u.k6.fld.tcd_slast[1].slast = cm_object_get_child_by_name(state->u.k6.reg.tcd_slast[1], "SLAST");
    // TCD2_SLAST bitfields.
    state->u.k6.fld.tcd_slast[2].slast = cm_object_get_child_by_name(state->u.k6.reg.tcd_slast[2], "SLAST");
    // TCD3_SLAST bitfields.
    state->u.k6.fld.tcd_slast[3].slast = cm_object_get_child_by_name(state->u.k6.reg.tcd_slast[3], "SLAST");
    // TCD4_SLAST bitfields.
    state->u.k6.fld.tcd_slast[4].slast = cm_object_get_child_by_name(state->u.k6.reg.tcd_slast[4], "SLAST");
    // TCD5_SLAST bitfields.
    state->u.k6.fld.tcd_slast[5].slast = cm_object_get_child_by_name(state->u.k6.reg.tcd_slast[5], "SLAST");
    // TCD6_SLAST bitfields.
    state->u.k6.fld.tcd_slast[6].slast = cm_object_get_child_by_name(state->u.k6.reg.tcd_slast[6], "SLAST");
    // TCD7_SLAST bitfields.
    state->u.k6.fld.tcd_slast[7].slast = cm_object_get_child_by_name(state->u.k6.reg.tcd_slast[7], "SLAST");
    // TCD8_SLAST bitfields.
    state->u.k6.fld.tcd_slast[8].slast = cm_object_get_child_by_name(state->u.k6.reg.tcd_slast[8], "SLAST");
    // TCD9_SLAST bitfields.
    state->u.k6.fld.tcd_slast[9].slast = cm_object_get_child_by_name(state->u.k6.reg.tcd_slast[9], "SLAST");
    // TCD10_SLAST bitfields.
    state->u.k6.fld.tcd_slast[10].slast = cm_object_get_child_by_name(state->u.k6.reg.tcd_slast[10], "SLAST");
    // TCD11_SLAST bitfields.
    state->u.k6.fld.tcd_slast[11].slast = cm_object_get_child_by_name(state->u.k6.reg.tcd_slast[11], "SLAST");
    // TCD12_SLAST bitfields.
    state->u.k6.fld.tcd_slast[12].slast = cm_object_get_child_by_name(state->u.k6.reg.tcd_slast[12], "SLAST");
    // TCD13_SLAST bitfields.
    state->u.k6.fld.tcd_slast[13].slast = cm_object_get_child_by_name(state->u.k6.reg.tcd_slast[13], "SLAST");
    // TCD14_SLAST bitfields.
    state->u.k6.fld.tcd_slast[14].slast = cm_object_get_child_by_name(state->u.k6.reg.tcd_slast[14], "SLAST");
    // TCD15_SLAST bitfields.
    state->u.k6.fld.tcd_slast[15].slast = cm_object_get_child_by_name(state->u.k6.reg.tcd_slast[15], "SLAST");
    // TCD0_DADDR bitfields.
    state->u.k6.fld.tcd_daddr[0].daddr = cm_object_get_child_by_name(state->u.k6.reg.tcd_daddr[0], "DADDR");
    // TCD1_DADDR bitfields.
    state->u.k6.fld.tcd_daddr[1].daddr = cm_object_get_child_by_name(state->u.k6.reg.tcd_daddr[1], "DADDR");
    // TCD2_DADDR bitfields.
    state->u.k6.fld.tcd_daddr[2].daddr = cm_object_get_child_by_name(state->u.k6.reg.tcd_daddr[2], "DADDR");
    // TCD3_DADDR bitfields.
    state->u.k6.fld.tcd_daddr[3].daddr = cm_object_get_child_by_name(state->u.k6.reg.tcd_daddr[3], "DADDR");
    // TCD4_DADDR bitfields.
    state->u.k6.fld.tcd_daddr[4].daddr = cm_object_get_child_by_name(state->u.k6.reg.tcd_daddr[4], "DADDR");
    // TCD5_DADDR bitfields.
    state->u.k6.fld.tcd_daddr[5].daddr = cm_object_get_child_by_name(state->u.k6.reg.tcd_daddr[5], "DADDR");
    // TCD6_DADDR bitfields.
    state->u.k6.fld.tcd_daddr[6].daddr = cm_object_get_child_by_name(state->u.k6.reg.tcd_daddr[6], "DADDR");
    // TCD7_DADDR bitfields.
    state->u.k6.fld.tcd_daddr[7].daddr = cm_object_get_child_by_name(state->u.k6.reg.tcd_daddr[7], "DADDR");
    // TCD8_DADDR bitfields.
    state->u.k6.fld.tcd_daddr[8].daddr = cm_object_get_child_by_name(state->u.k6.reg.tcd_daddr[8], "DADDR");
    // TCD9_DADDR bitfields.
    state->u.k6.fld.tcd_daddr[9].daddr = cm_object_get_child_by_name(state->u.k6.reg.tcd_daddr[9], "DADDR");
    // TCD10_DADDR bitfields.
    state->u.k6.fld.tcd_daddr[10].daddr = cm_object_get_child_by_name(state->u.k6.reg.tcd_daddr[10], "DADDR");
    // TCD11_DADDR bitfields.
    state->u.k6.fld.tcd_daddr[11].daddr = cm_object_get_child_by_name(state->u.k6.reg.tcd_daddr[11], "DADDR");
    // TCD12_DADDR bitfields.
    state->u.k6.fld.tcd_daddr[12].daddr = cm_object_get_child_by_name(state->u.k6.reg.tcd_daddr[12], "DADDR");
    // TCD13_DADDR bitfields.
    state->u.k6.fld.tcd_daddr[13].daddr = cm_object_get_child_by_name(state->u.k6.reg.tcd_daddr[13], "DADDR");
    // TCD14_DADDR bitfields.
    state->u.k6.fld.tcd_daddr[14].daddr = cm_object_get_child_by_name(state->u.k6.reg.tcd_daddr[14], "DADDR");
    // TCD15_DADDR bitfields.
    state->u.k6.fld.tcd_daddr[15].daddr = cm_object_get_child_by_name(state->u.k6.reg.tcd_daddr[15], "DADDR");
    // TCD0_DOFF bitfields.
    state->u.k6.fld.tcd_doff[0].doff = cm_object_get_child_by_name(state->u.k6.reg.tcd_doff[0], "DOFF");
    // TCD1_DOFF bitfields.
    state->u.k6.fld.tcd_doff[1].doff = cm_object_get_child_by_name(state->u.k6.reg.tcd_doff[1], "DOFF");
    // TCD2_DOFF bitfields.
    state->u.k6.fld.tcd_doff[2].doff = cm_object_get_child_by_name(state->u.k6.reg.tcd_doff[2], "DOFF");
    // TCD3_DOFF bitfields.
    state->u.k6.fld.tcd_doff[3].doff = cm_object_get_child_by_name(state->u.k6.reg.tcd_doff[3], "DOFF");
    // TCD4_DOFF bitfields.
    state->u.k6.fld.tcd_doff[4].doff = cm_object_get_child_by_name(state->u.k6.reg.tcd_doff[4], "DOFF");
    // TCD5_DOFF bitfields.
    state->u.k6.fld.tcd_doff[5].doff = cm_object_get_child_by_name(state->u.k6.reg.tcd_doff[5], "DOFF");
    // TCD6_DOFF bitfields.
    state->u.k6.fld.tcd_doff[6].doff = cm_object_get_child_by_name(state->u.k6.reg.tcd_doff[6], "DOFF");
    // TCD7_DOFF bitfields.
    state->u.k6.fld.tcd_doff[7].doff = cm_object_get_child_by_name(state->u.k6.reg.tcd_doff[7], "DOFF");
    // TCD8_DOFF bitfields.
    state->u.k6.fld.tcd_doff[8].doff = cm_object_get_child_by_name(state->u.k6.reg.tcd_doff[8], "DOFF");
    // TCD9_DOFF bitfields.
    state->u.k6.fld.tcd_doff[9].doff = cm_object_get_child_by_name(state->u.k6.reg.tcd_doff[9], "DOFF");
    // TCD10_DOFF bitfields.
    state->u.k6.fld.tcd_doff[10].doff = cm_object_get_child_by_name(state->u.k6.reg.tcd_doff[10], "DOFF");
    // TCD11_DOFF bitfields.
    state->u.k6.fld.tcd_doff[11].doff = cm_object_get_child_by_name(state->u.k6.reg.tcd_doff[11], "DOFF");
    // TCD12_DOFF bitfields.
    state->u.k6.fld.tcd_doff[12].doff = cm_object_get_child_by_name(state->u.k6.reg.tcd_doff[12], "DOFF");
    // TCD13_DOFF bitfields.
    state->u.k6.fld.tcd_doff[13].doff = cm_object_get_child_by_name(state->u.k6.reg.tcd_doff[13], "DOFF");
    // TCD14_DOFF bitfields.
    state->u.k6.fld.tcd_doff[14].doff = cm_object_get_child_by_name(state->u.k6.reg.tcd_doff[14], "DOFF");
    // TCD15_DOFF bitfields.
    state->u.k6.fld.tcd_doff[15].doff = cm_object_get_child_by_name(state->u.k6.reg.tcd_doff[15], "DOFF");
    // TCD0_CITER_ELINKNO bitfields.
    state->u.k6.fld.tcd_citer_elinkno[0].citer = cm_object_get_child_by_name(state->u.k6.reg.tcd_citer_elinkno[0], "CITER");
    state->u.k6.fld.tcd_citer_elinkno[0].elink = cm_object_get_child_by_name(state->u.k6.reg.tcd_citer_elinkno[0], "ELINK");
    // TCD1_CITER_ELINKNO bitfields.
    state->u.k6.fld.tcd_citer_elinkno[1].citer = cm_object_get_child_by_name(state->u.k6.reg.tcd_citer_elinkno[1], "CITER");
    state->u.k6.fld.tcd_citer_elinkno[1].elink = cm_object_get_child_by_name(state->u.k6.reg.tcd_citer_elinkno[1], "ELINK");
    // TCD2_CITER_ELINKNO bitfields.
    state->u.k6.fld.tcd_citer_elinkno[2].citer = cm_object_get_child_by_name(state->u.k6.reg.tcd_citer_elinkno[2], "CITER");
    state->u.k6.fld.tcd_citer_elinkno[2].elink = cm_object_get_child_by_name(state->u.k6.reg.tcd_citer_elinkno[2], "ELINK");
    // TCD3_CITER_ELINKNO bitfields.
    state->u.k6.fld.tcd_citer_elinkno[3].citer = cm_object_get_child_by_name(state->u.k6.reg.tcd_citer_elinkno[3], "CITER");
    state->u.k6.fld.tcd_citer_elinkno[3].elink = cm_object_get_child_by_name(state->u.k6.reg.tcd_citer_elinkno[3], "ELINK");
    // TCD4_CITER_ELINKNO bitfields.
    state->u.k6.fld.tcd_citer_elinkno[4].citer = cm_object_get_child_by_name(state->u.k6.reg.tcd_citer_elinkno[4], "CITER");
    state->u.k6.fld.tcd_citer_elinkno[4].elink = cm_object_get_child_by_name(state->u.k6.reg.tcd_citer_elinkno[4], "ELINK");
    // TCD5_CITER_ELINKNO bitfields.
    state->u.k6.fld.tcd_citer_elinkno[5].citer = cm_object_get_child_by_name(state->u.k6.reg.tcd_citer_elinkno[5], "CITER");
    state->u.k6.fld.tcd_citer_elinkno[5].elink = cm_object_get_child_by_name(state->u.k6.reg.tcd_citer_elinkno[5], "ELINK");
    // TCD6_CITER_ELINKNO bitfields.
    state->u.k6.fld.tcd_citer_elinkno[6].citer = cm_object_get_child_by_name(state->u.k6.reg.tcd_citer_elinkno[6], "CITER");
    state->u.k6.fld.tcd_citer_elinkno[6].elink = cm_object_get_child_by_name(state->u.k6.reg.tcd_citer_elinkno[6], "ELINK");
    // TCD7_CITER_ELINKNO bitfields.
    state->u.k6.fld.tcd_citer_elinkno[7].citer = cm_object_get_child_by_name(state->u.k6.reg.tcd_citer_elinkno[7], "CITER");
    state->u.k6.fld.tcd_citer_elinkno[7].elink = cm_object_get_child_by_name(state->u.k6.reg.tcd_citer_elinkno[7], "ELINK");
    // TCD8_CITER_ELINKNO bitfields.
    state->u.k6.fld.tcd_citer_elinkno[8].citer = cm_object_get_child_by_name(state->u.k6.reg.tcd_citer_elinkno[8], "CITER");
    state->u.k6.fld.tcd_citer_elinkno[8].elink = cm_object_get_child_by_name(state->u.k6.reg.tcd_citer_elinkno[8], "ELINK");
    // TCD9_CITER_ELINKNO bitfields.
    state->u.k6.fld.tcd_citer_elinkno[9].citer = cm_object_get_child_by_name(state->u.k6.reg.tcd_citer_elinkno[9], "CITER");
    state->u.k6.fld.tcd_citer_elinkno[9].elink = cm_object_get_child_by_name(state->u.k6.reg.tcd_citer_elinkno[9], "ELINK");
    // TCD10_CITER_ELINKNO bitfields.
    state->u.k6.fld.tcd_citer_elinkno[10].citer = cm_object_get_child_by_name(state->u.k6.reg.tcd_citer_elinkno[10], "CITER");
    state->u.k6.fld.tcd_citer_elinkno[10].elink = cm_object_get_child_by_name(state->u.k6.reg.tcd_citer_elinkno[10], "ELINK");
    // TCD11_CITER_ELINKNO bitfields.
    state->u.k6.fld.tcd_citer_elinkno[11].citer = cm_object_get_child_by_name(state->u.k6.reg.tcd_citer_elinkno[11], "CITER");
    state->u.k6.fld.tcd_citer_elinkno[11].elink = cm_object_get_child_by_name(state->u.k6.reg.tcd_citer_elinkno[11], "ELINK");
    // TCD12_CITER_ELINKNO bitfields.
    state->u.k6.fld.tcd_citer_elinkno[12].citer = cm_object_get_child_by_name(state->u.k6.reg.tcd_citer_elinkno[12], "CITER");
    state->u.k6.fld.tcd_citer_elinkno[12].elink = cm_object_get_child_by_name(state->u.k6.reg.tcd_citer_elinkno[12], "ELINK");
    // TCD13_CITER_ELINKNO bitfields.
    state->u.k6.fld.tcd_citer_elinkno[13].citer = cm_object_get_child_by_name(state->u.k6.reg.tcd_citer_elinkno[13], "CITER");
    state->u.k6.fld.tcd_citer_elinkno[13].elink = cm_object_get_child_by_name(state->u.k6.reg.tcd_citer_elinkno[13], "ELINK");
    // TCD14_CITER_ELINKNO bitfields.
    state->u.k6.fld.tcd_citer_elinkno[14].citer = cm_object_get_child_by_name(state->u.k6.reg.tcd_citer_elinkno[14], "CITER");
    state->u.k6.fld.tcd_citer_elinkno[14].elink = cm_object_get_child_by_name(state->u.k6.reg.tcd_citer_elinkno[14], "ELINK");
    // TCD15_CITER_ELINKNO bitfields.
    state->u.k6.fld.tcd_citer_elinkno[15].citer = cm_object_get_child_by_name(state->u.k6.reg.tcd_citer_elinkno[15], "CITER");
    state->u.k6.fld.tcd_citer_elinkno[15].elink = cm_object_get_child_by_name(state->u.k6.reg.tcd_citer_elinkno[15], "ELINK");
    // TCD0_CITER_ELINKYES bitfields.
    state->u.k6.fld.tcd_citer_elinkyes[0].citer = cm_object_get_child_by_name(state->u.k6.reg.tcd_citer_elinkyes[0], "CITER");
    state->u.k6.fld.tcd_citer_elinkyes[0].linkch = cm_object_get_child_by_name(state->u.k6.reg.tcd_citer_elinkyes[0], "LINKCH");
    state->u.k6.fld.tcd_citer_elinkyes[0].elink = cm_object_get_child_by_name(state->u.k6.reg.tcd_citer_elinkyes[0], "ELINK");
    // TCD1_CITER_ELINKYES bitfields.
    state->u.k6.fld.tcd_citer_elinkyes[1].citer = cm_object_get_child_by_name(state->u.k6.reg.tcd_citer_elinkyes[1], "CITER");
    state->u.k6.fld.tcd_citer_elinkyes[1].linkch = cm_object_get_child_by_name(state->u.k6.reg.tcd_citer_elinkyes[1], "LINKCH");
    state->u.k6.fld.tcd_citer_elinkyes[1].elink = cm_object_get_child_by_name(state->u.k6.reg.tcd_citer_elinkyes[1], "ELINK");
    // TCD2_CITER_ELINKYES bitfields.
    state->u.k6.fld.tcd_citer_elinkyes[2].citer = cm_object_get_child_by_name(state->u.k6.reg.tcd_citer_elinkyes[2], "CITER");
    state->u.k6.fld.tcd_citer_elinkyes[2].linkch = cm_object_get_child_by_name(state->u.k6.reg.tcd_citer_elinkyes[2], "LINKCH");
    state->u.k6.fld.tcd_citer_elinkyes[2].elink = cm_object_get_child_by_name(state->u.k6.reg.tcd_citer_elinkyes[2], "ELINK");
    // TCD3_CITER_ELINKYES bitfields.
    state->u.k6.fld.tcd_citer_elinkyes[3].citer = cm_object_get_child_by_name(state->u.k6.reg.tcd_citer_elinkyes[3], "CITER");
    state->u.k6.fld.tcd_citer_elinkyes[3].linkch = cm_object_get_child_by_name(state->u.k6.reg.tcd_citer_elinkyes[3], "LINKCH");
    state->u.k6.fld.tcd_citer_elinkyes[3].elink = cm_object_get_child_by_name(state->u.k6.reg.tcd_citer_elinkyes[3], "ELINK");
    // TCD4_CITER_ELINKYES bitfields.
    state->u.k6.fld.tcd_citer_elinkyes[4].citer = cm_object_get_child_by_name(state->u.k6.reg.tcd_citer_elinkyes[4], "CITER");
    state->u.k6.fld.tcd_citer_elinkyes[4].linkch = cm_object_get_child_by_name(state->u.k6.reg.tcd_citer_elinkyes[4], "LINKCH");
    state->u.k6.fld.tcd_citer_elinkyes[4].elink = cm_object_get_child_by_name(state->u.k6.reg.tcd_citer_elinkyes[4], "ELINK");
    // TCD5_CITER_ELINKYES bitfields.
    state->u.k6.fld.tcd_citer_elinkyes[5].citer = cm_object_get_child_by_name(state->u.k6.reg.tcd_citer_elinkyes[5], "CITER");
    state->u.k6.fld.tcd_citer_elinkyes[5].linkch = cm_object_get_child_by_name(state->u.k6.reg.tcd_citer_elinkyes[5], "LINKCH");
    state->u.k6.fld.tcd_citer_elinkyes[5].elink = cm_object_get_child_by_name(state->u.k6.reg.tcd_citer_elinkyes[5], "ELINK");
    // TCD6_CITER_ELINKYES bitfields.
    state->u.k6.fld.tcd_citer_elinkyes[6].citer = cm_object_get_child_by_name(state->u.k6.reg.tcd_citer_elinkyes[6], "CITER");
    state->u.k6.fld.tcd_citer_elinkyes[6].linkch = cm_object_get_child_by_name(state->u.k6.reg.tcd_citer_elinkyes[6], "LINKCH");
    state->u.k6.fld.tcd_citer_elinkyes[6].elink = cm_object_get_child_by_name(state->u.k6.reg.tcd_citer_elinkyes[6], "ELINK");
    // TCD7_CITER_ELINKYES bitfields.
    state->u.k6.fld.tcd_citer_elinkyes[7].citer = cm_object_get_child_by_name(state->u.k6.reg.tcd_citer_elinkyes[7], "CITER");
    state->u.k6.fld.tcd_citer_elinkyes[7].linkch = cm_object_get_child_by_name(state->u.k6.reg.tcd_citer_elinkyes[7], "LINKCH");
    state->u.k6.fld.tcd_citer_elinkyes[7].elink = cm_object_get_child_by_name(state->u.k6.reg.tcd_citer_elinkyes[7], "ELINK");
    // TCD8_CITER_ELINKYES bitfields.
    state->u.k6.fld.tcd_citer_elinkyes[8].citer = cm_object_get_child_by_name(state->u.k6.reg.tcd_citer_elinkyes[8], "CITER");
    state->u.k6.fld.tcd_citer_elinkyes[8].linkch = cm_object_get_child_by_name(state->u.k6.reg.tcd_citer_elinkyes[8], "LINKCH");
    state->u.k6.fld.tcd_citer_elinkyes[8].elink = cm_object_get_child_by_name(state->u.k6.reg.tcd_citer_elinkyes[8], "ELINK");
    // TCD9_CITER_ELINKYES bitfields.
    state->u.k6.fld.tcd_citer_elinkyes[9].citer = cm_object_get_child_by_name(state->u.k6.reg.tcd_citer_elinkyes[9], "CITER");
    state->u.k6.fld.tcd_citer_elinkyes[9].linkch = cm_object_get_child_by_name(state->u.k6.reg.tcd_citer_elinkyes[9], "LINKCH");
    state->u.k6.fld.tcd_citer_elinkyes[9].elink = cm_object_get_child_by_name(state->u.k6.reg.tcd_citer_elinkyes[9], "ELINK");
    // TCD10_CITER_ELINKYES bitfields.
    state->u.k6.fld.tcd_citer_elinkyes[10].citer = cm_object_get_child_by_name(state->u.k6.reg.tcd_citer_elinkyes[10], "CITER");
    state->u.k6.fld.tcd_citer_elinkyes[10].linkch = cm_object_get_child_by_name(state->u.k6.reg.tcd_citer_elinkyes[10], "LINKCH");
    state->u.k6.fld.tcd_citer_elinkyes[10].elink = cm_object_get_child_by_name(state->u.k6.reg.tcd_citer_elinkyes[10], "ELINK");
    // TCD11_CITER_ELINKYES bitfields.
    state->u.k6.fld.tcd_citer_elinkyes[11].citer = cm_object_get_child_by_name(state->u.k6.reg.tcd_citer_elinkyes[11], "CITER");
    state->u.k6.fld.tcd_citer_elinkyes[11].linkch = cm_object_get_child_by_name(state->u.k6.reg.tcd_citer_elinkyes[11], "LINKCH");
    state->u.k6.fld.tcd_citer_elinkyes[11].elink = cm_object_get_child_by_name(state->u.k6.reg.tcd_citer_elinkyes[11], "ELINK");
    // TCD12_CITER_ELINKYES bitfields.
    state->u.k6.fld.tcd_citer_elinkyes[12].citer = cm_object_get_child_by_name(state->u.k6.reg.tcd_citer_elinkyes[12], "CITER");
    state->u.k6.fld.tcd_citer_elinkyes[12].linkch = cm_object_get_child_by_name(state->u.k6.reg.tcd_citer_elinkyes[12], "LINKCH");
    state->u.k6.fld.tcd_citer_elinkyes[12].elink = cm_object_get_child_by_name(state->u.k6.reg.tcd_citer_elinkyes[12], "ELINK");
    // TCD13_CITER_ELINKYES bitfields.
    state->u.k6.fld.tcd_citer_elinkyes[13].citer = cm_object_get_child_by_name(state->u.k6.reg.tcd_citer_elinkyes[13], "CITER");
    state->u.k6.fld.tcd_citer_elinkyes[13].linkch = cm_object_get_child_by_name(state->u.k6.reg.tcd_citer_elinkyes[13], "LINKCH");
    state->u.k6.fld.tcd_citer_elinkyes[13].elink = cm_object_get_child_by_name(state->u.k6.reg.tcd_citer_elinkyes[13], "ELINK");
    // TCD14_CITER_ELINKYES bitfields.
    state->u.k6.fld.tcd_citer_elinkyes[14].citer = cm_object_get_child_by_name(state->u.k6.reg.tcd_citer_elinkyes[14], "CITER");
    state->u.k6.fld.tcd_citer_elinkyes[14].linkch = cm_object_get_child_by_name(state->u.k6.reg.tcd_citer_elinkyes[14], "LINKCH");
    state->u.k6.fld.tcd_citer_elinkyes[14].elink = cm_object_get_child_by_name(state->u.k6.reg.tcd_citer_elinkyes[14], "ELINK");
    // TCD15_CITER_ELINKYES bitfields.
    state->u.k6.fld.tcd_citer_elinkyes[15].citer = cm_object_get_child_by_name(state->u.k6.reg.tcd_citer_elinkyes[15], "CITER");
    state->u.k6.fld.tcd_citer_elinkyes[15].linkch = cm_object_get_child_by_name(state->u.k6.reg.tcd_citer_elinkyes[15], "LINKCH");
    state->u.k6.fld.tcd_citer_elinkyes[15].elink = cm_object_get_child_by_name(state->u.k6.reg.tcd_citer_elinkyes[15], "ELINK");
    // TCD0_DLASTSGA bitfields.
    state->u.k6.fld.tcd_dlastsga[0].dlastsga = cm_object_get_child_by_name(state->u.k6.reg.tcd_dlastsga[0], "DLASTSGA");
    // TCD1_DLASTSGA bitfields.
    state->u.k6.fld.tcd_dlastsga[1].dlastsga = cm_object_get_child_by_name(state->u.k6.reg.tcd_dlastsga[1], "DLASTSGA");
    // TCD2_DLASTSGA bitfields.
    state->u.k6.fld.tcd_dlastsga[2].dlastsga = cm_object_get_child_by_name(state->u.k6.reg.tcd_dlastsga[2], "DLASTSGA");
    // TCD3_DLASTSGA bitfields.
    state->u.k6.fld.tcd_dlastsga[3].dlastsga = cm_object_get_child_by_name(state->u.k6.reg.tcd_dlastsga[3], "DLASTSGA");
    // TCD4_DLASTSGA bitfields.
    state->u.k6.fld.tcd_dlastsga[4].dlastsga = cm_object_get_child_by_name(state->u.k6.reg.tcd_dlastsga[4], "DLASTSGA");
    // TCD5_DLASTSGA bitfields.
    state->u.k6.fld.tcd_dlastsga[5].dlastsga = cm_object_get_child_by_name(state->u.k6.reg.tcd_dlastsga[5], "DLASTSGA");
    // TCD6_DLASTSGA bitfields.
    state->u.k6.fld.tcd_dlastsga[6].dlastsga = cm_object_get_child_by_name(state->u.k6.reg.tcd_dlastsga[6], "DLASTSGA");
    // TCD7_DLASTSGA bitfields.
    state->u.k6.fld.tcd_dlastsga[7].dlastsga = cm_object_get_child_by_name(state->u.k6.reg.tcd_dlastsga[7], "DLASTSGA");
    // TCD8_DLASTSGA bitfields.
    state->u.k6.fld.tcd_dlastsga[8].dlastsga = cm_object_get_child_by_name(state->u.k6.reg.tcd_dlastsga[8], "DLASTSGA");
    // TCD9_DLASTSGA bitfields.
    state->u.k6.fld.tcd_dlastsga[9].dlastsga = cm_object_get_child_by_name(state->u.k6.reg.tcd_dlastsga[9], "DLASTSGA");
    // TCD10_DLASTSGA bitfields.
    state->u.k6.fld.tcd_dlastsga[10].dlastsga = cm_object_get_child_by_name(state->u.k6.reg.tcd_dlastsga[10], "DLASTSGA");
    // TCD11_DLASTSGA bitfields.
    state->u.k6.fld.tcd_dlastsga[11].dlastsga = cm_object_get_child_by_name(state->u.k6.reg.tcd_dlastsga[11], "DLASTSGA");
    // TCD12_DLASTSGA bitfields.
    state->u.k6.fld.tcd_dlastsga[12].dlastsga = cm_object_get_child_by_name(state->u.k6.reg.tcd_dlastsga[12], "DLASTSGA");
    // TCD13_DLASTSGA bitfields.
    state->u.k6.fld.tcd_dlastsga[13].dlastsga = cm_object_get_child_by_name(state->u.k6.reg.tcd_dlastsga[13], "DLASTSGA");
    // TCD14_DLASTSGA bitfields.
    state->u.k6.fld.tcd_dlastsga[14].dlastsga = cm_object_get_child_by_name(state->u.k6.reg.tcd_dlastsga[14], "DLASTSGA");
    // TCD15_DLASTSGA bitfields.
    state->u.k6.fld.tcd_dlastsga[15].dlastsga = cm_object_get_child_by_name(state->u.k6.reg.tcd_dlastsga[15], "DLASTSGA");
    // TCD0_CSR bitfields.
    state->u.k6.fld.tcd_csr[0].start = cm_object_get_child_by_name(state->u.k6.reg.tcd_csr[0], "START");
    state->u.k6.fld.tcd_csr[0].intmajor = cm_object_get_child_by_name(state->u.k6.reg.tcd_csr[0], "INTMAJOR");
    state->u.k6.fld.tcd_csr[0].inthalf = cm_object_get_child_by_name(state->u.k6.reg.tcd_csr[0], "INTHALF");
    state->u.k6.fld.tcd_csr[0].dreq = cm_object_get_child_by_name(state->u.k6.reg.tcd_csr[0], "DREQ");
    state->u.k6.fld.tcd_csr[0].esg = cm_object_get_child_by_name(state->u.k6.reg.tcd_csr[0], "ESG");
    state->u.k6.fld.tcd_csr[0].majorelink = cm_object_get_child_by_name(state->u.k6.reg.tcd_csr[0], "MAJORELINK");
    state->u.k6.fld.tcd_csr[0].active = cm_object_get_child_by_name(state->u.k6.reg.tcd_csr[0], "ACTIVE");
    state->u.k6.fld.tcd_csr[0].done = cm_object_get_child_by_name(state->u.k6.reg.tcd_csr[0], "DONE");
    state->u.k6.fld.tcd_csr[0].majorlinkch = cm_object_get_child_by_name(state->u.k6.reg.tcd_csr[0], "MAJORLINKCH");
    state->u.k6.fld.tcd_csr[0].bwc = cm_object_get_child_by_name(state->u.k6.reg.tcd_csr[0], "BWC");
    // TCD1_CSR bitfields.
    state->u.k6.fld.tcd_csr[1].start = cm_object_get_child_by_name(state->u.k6.reg.tcd_csr[1], "START");
    state->u.k6.fld.tcd_csr[1].intmajor = cm_object_get_child_by_name(state->u.k6.reg.tcd_csr[1], "INTMAJOR");
    state->u.k6.fld.tcd_csr[1].inthalf = cm_object_get_child_by_name(state->u.k6.reg.tcd_csr[1], "INTHALF");
    state->u.k6.fld.tcd_csr[1].dreq = cm_object_get_child_by_name(state->u.k6.reg.tcd_csr[1], "DREQ");
    state->u.k6.fld.tcd_csr[1].esg = cm_object_get_child_by_name(state->u.k6.reg.tcd_csr[1], "ESG");
    state->u.k6.fld.tcd_csr[1].majorelink = cm_object_get_child_by_name(state->u.k6.reg.tcd_csr[1], "MAJORELINK");
    state->u.k6.fld.tcd_csr[1].active = cm_object_get_child_by_name(state->u.k6.reg.tcd_csr[1], "ACTIVE");
    state->u.k6.fld.tcd_csr[1].done = cm_object_get_child_by_name(state->u.k6.reg.tcd_csr[1], "DONE");
    state->u.k6.fld.tcd_csr[1].majorlinkch = cm_object_get_child_by_name(state->u.k6.reg.tcd_csr[1], "MAJORLINKCH");
    state->u.k6.fld.tcd_csr[1].bwc = cm_object_get_child_by_name(state->u.k6.reg.tcd_csr[1], "BWC");
    // TCD2_CSR bitfields.
    state->u.k6.fld.tcd_csr[2].start = cm_object_get_child_by_name(state->u.k6.reg.tcd_csr[2], "START");
    state->u.k6.fld.tcd_csr[2].intmajor = cm_object_get_child_by_name(state->u.k6.reg.tcd_csr[2], "INTMAJOR");
    state->u.k6.fld.tcd_csr[2].inthalf = cm_object_get_child_by_name(state->u.k6.reg.tcd_csr[2], "INTHALF");
    state->u.k6.fld.tcd_csr[2].dreq = cm_object_get_child_by_name(state->u.k6.reg.tcd_csr[2], "DREQ");
    state->u.k6.fld.tcd_csr[2].esg = cm_object_get_child_by_name(state->u.k6.reg.tcd_csr[2], "ESG");
    state->u.k6.fld.tcd_csr[2].majorelink = cm_object_get_child_by_name(state->u.k6.reg.tcd_csr[2], "MAJORELINK");
    state->u.k6.fld.tcd_csr[2].active = cm_object_get_child_by_name(state->u.k6.reg.tcd_csr[2], "ACTIVE");
    state->u.k6.fld.tcd_csr[2].done = cm_object_get_child_by_name(state->u.k6.reg.tcd_csr[2], "DONE");
    state->u.k6.fld.tcd_csr[2].majorlinkch = cm_object_get_child_by_name(state->u.k6.reg.tcd_csr[2], "MAJORLINKCH");
    state->u.k6.fld.tcd_csr[2].bwc = cm_object_get_child_by_name(state->u.k6.reg.tcd_csr[2], "BWC");
    // TCD3_CSR bitfields.
    state->u.k6.fld.tcd_csr[3].start = cm_object_get_child_by_name(state->u.k6.reg.tcd_csr[3], "START");
    state->u.k6.fld.tcd_csr[3].intmajor = cm_object_get_child_by_name(state->u.k6.reg.tcd_csr[3], "INTMAJOR");
    state->u.k6.fld.tcd_csr[3].inthalf = cm_object_get_child_by_name(state->u.k6.reg.tcd_csr[3], "INTHALF");
    state->u.k6.fld.tcd_csr[3].dreq = cm_object_get_child_by_name(state->u.k6.reg.tcd_csr[3], "DREQ");
    state->u.k6.fld.tcd_csr[3].esg = cm_object_get_child_by_name(state->u.k6.reg.tcd_csr[3], "ESG");
    state->u.k6.fld.tcd_csr[3].majorelink = cm_object_get_child_by_name(state->u.k6.reg.tcd_csr[3], "MAJORELINK");
    state->u.k6.fld.tcd_csr[3].active = cm_object_get_child_by_name(state->u.k6.reg.tcd_csr[3], "ACTIVE");
    state->u.k6.fld.tcd_csr[3].done = cm_object_get_child_by_name(state->u.k6.reg.tcd_csr[3], "DONE");
    state->u.k6.fld.tcd_csr[3].majorlinkch = cm_object_get_child_by_name(state->u.k6.reg.tcd_csr[3], "MAJORLINKCH");
    state->u.k6.fld.tcd_csr[3].bwc = cm_object_get_child_by_name(state->u.k6.reg.tcd_csr[3], "BWC");
    // TCD4_CSR bitfields.
    state->u.k6.fld.tcd_csr[4].start = cm_object_get_child_by_name(state->u.k6.reg.tcd_csr[4], "START");
    state->u.k6.fld.tcd_csr[4].intmajor = cm_object_get_child_by_name(state->u.k6.reg.tcd_csr[4], "INTMAJOR");
    state->u.k6.fld.tcd_csr[4].inthalf = cm_object_get_child_by_name(state->u.k6.reg.tcd_csr[4], "INTHALF");
    state->u.k6.fld.tcd_csr[4].dreq = cm_object_get_child_by_name(state->u.k6.reg.tcd_csr[4], "DREQ");
    state->u.k6.fld.tcd_csr[4].esg = cm_object_get_child_by_name(state->u.k6.reg.tcd_csr[4], "ESG");
    state->u.k6.fld.tcd_csr[4].majorelink = cm_object_get_child_by_name(state->u.k6.reg.tcd_csr[4], "MAJORELINK");
    state->u.k6.fld.tcd_csr[4].active = cm_object_get_child_by_name(state->u.k6.reg.tcd_csr[4], "ACTIVE");
    state->u.k6.fld.tcd_csr[4].done = cm_object_get_child_by_name(state->u.k6.reg.tcd_csr[4], "DONE");
    state->u.k6.fld.tcd_csr[4].majorlinkch = cm_object_get_child_by_name(state->u.k6.reg.tcd_csr[4], "MAJORLINKCH");
    state->u.k6.fld.tcd_csr[4].bwc = cm_object_get_child_by_name(state->u.k6.reg.tcd_csr[4], "BWC");
    // TCD5_CSR bitfields.
    state->u.k6.fld.tcd_csr[5].start = cm_object_get_child_by_name(state->u.k6.reg.tcd_csr[5], "START");
    state->u.k6.fld.tcd_csr[5].intmajor = cm_object_get_child_by_name(state->u.k6.reg.tcd_csr[5], "INTMAJOR");
    state->u.k6.fld.tcd_csr[5].inthalf = cm_object_get_child_by_name(state->u.k6.reg.tcd_csr[5], "INTHALF");
    state->u.k6.fld.tcd_csr[5].dreq = cm_object_get_child_by_name(state->u.k6.reg.tcd_csr[5], "DREQ");
    state->u.k6.fld.tcd_csr[5].esg = cm_object_get_child_by_name(state->u.k6.reg.tcd_csr[5], "ESG");
    state->u.k6.fld.tcd_csr[5].majorelink = cm_object_get_child_by_name(state->u.k6.reg.tcd_csr[5], "MAJORELINK");
    state->u.k6.fld.tcd_csr[5].active = cm_object_get_child_by_name(state->u.k6.reg.tcd_csr[5], "ACTIVE");
    state->u.k6.fld.tcd_csr[5].done = cm_object_get_child_by_name(state->u.k6.reg.tcd_csr[5], "DONE");
    state->u.k6.fld.tcd_csr[5].majorlinkch = cm_object_get_child_by_name(state->u.k6.reg.tcd_csr[5], "MAJORLINKCH");
    state->u.k6.fld.tcd_csr[5].bwc = cm_object_get_child_by_name(state->u.k6.reg.tcd_csr[5], "BWC");
    // TCD6_CSR bitfields.
    state->u.k6.fld.tcd_csr[6].start = cm_object_get_child_by_name(state->u.k6.reg.tcd_csr[6], "START");
    state->u.k6.fld.tcd_csr[6].intmajor = cm_object_get_child_by_name(state->u.k6.reg.tcd_csr[6], "INTMAJOR");
    state->u.k6.fld.tcd_csr[6].inthalf = cm_object_get_child_by_name(state->u.k6.reg.tcd_csr[6], "INTHALF");
    state->u.k6.fld.tcd_csr[6].dreq = cm_object_get_child_by_name(state->u.k6.reg.tcd_csr[6], "DREQ");
    state->u.k6.fld.tcd_csr[6].esg = cm_object_get_child_by_name(state->u.k6.reg.tcd_csr[6], "ESG");
    state->u.k6.fld.tcd_csr[6].majorelink = cm_object_get_child_by_name(state->u.k6.reg.tcd_csr[6], "MAJORELINK");
    state->u.k6.fld.tcd_csr[6].active = cm_object_get_child_by_name(state->u.k6.reg.tcd_csr[6], "ACTIVE");
    state->u.k6.fld.tcd_csr[6].done = cm_object_get_child_by_name(state->u.k6.reg.tcd_csr[6], "DONE");
    state->u.k6.fld.tcd_csr[6].majorlinkch = cm_object_get_child_by_name(state->u.k6.reg.tcd_csr[6], "MAJORLINKCH");
    state->u.k6.fld.tcd_csr[6].bwc = cm_object_get_child_by_name(state->u.k6.reg.tcd_csr[6], "BWC");
    // TCD7_CSR bitfields.
    state->u.k6.fld.tcd_csr[7].start = cm_object_get_child_by_name(state->u.k6.reg.tcd_csr[7], "START");
    state->u.k6.fld.tcd_csr[7].intmajor = cm_object_get_child_by_name(state->u.k6.reg.tcd_csr[7], "INTMAJOR");
    state->u.k6.fld.tcd_csr[7].inthalf = cm_object_get_child_by_name(state->u.k6.reg.tcd_csr[7], "INTHALF");
    state->u.k6.fld.tcd_csr[7].dreq = cm_object_get_child_by_name(state->u.k6.reg.tcd_csr[7], "DREQ");
    state->u.k6.fld.tcd_csr[7].esg = cm_object_get_child_by_name(state->u.k6.reg.tcd_csr[7], "ESG");
    state->u.k6.fld.tcd_csr[7].majorelink = cm_object_get_child_by_name(state->u.k6.reg.tcd_csr[7], "MAJORELINK");
    state->u.k6.fld.tcd_csr[7].active = cm_object_get_child_by_name(state->u.k6.reg.tcd_csr[7], "ACTIVE");
    state->u.k6.fld.tcd_csr[7].done = cm_object_get_child_by_name(state->u.k6.reg.tcd_csr[7], "DONE");
    state->u.k6.fld.tcd_csr[7].majorlinkch = cm_object_get_child_by_name(state->u.k6.reg.tcd_csr[7], "MAJORLINKCH");
    state->u.k6.fld.tcd_csr[7].bwc = cm_object_get_child_by_name(state->u.k6.reg.tcd_csr[7], "BWC");
    // TCD8_CSR bitfields.
    state->u.k6.fld.tcd_csr[8].start = cm_object_get_child_by_name(state->u.k6.reg.tcd_csr[8], "START");
    state->u.k6.fld.tcd_csr[8].intmajor = cm_object_get_child_by_name(state->u.k6.reg.tcd_csr[8], "INTMAJOR");
    state->u.k6.fld.tcd_csr[8].inthalf = cm_object_get_child_by_name(state->u.k6.reg.tcd_csr[8], "INTHALF");
    state->u.k6.fld.tcd_csr[8].dreq = cm_object_get_child_by_name(state->u.k6.reg.tcd_csr[8], "DREQ");
    state->u.k6.fld.tcd_csr[8].esg = cm_object_get_child_by_name(state->u.k6.reg.tcd_csr[8], "ESG");
    state->u.k6.fld.tcd_csr[8].majorelink = cm_object_get_child_by_name(state->u.k6.reg.tcd_csr[8], "MAJORELINK");
    state->u.k6.fld.tcd_csr[8].active = cm_object_get_child_by_name(state->u.k6.reg.tcd_csr[8], "ACTIVE");
    state->u.k6.fld.tcd_csr[8].done = cm_object_get_child_by_name(state->u.k6.reg.tcd_csr[8], "DONE");
    state->u.k6.fld.tcd_csr[8].majorlinkch = cm_object_get_child_by_name(state->u.k6.reg.tcd_csr[8], "MAJORLINKCH");
    state->u.k6.fld.tcd_csr[8].bwc = cm_object_get_child_by_name(state->u.k6.reg.tcd_csr[8], "BWC");
    // TCD9_CSR bitfields.
    state->u.k6.fld.tcd_csr[9].start = cm_object_get_child_by_name(state->u.k6.reg.tcd_csr[9], "START");
    state->u.k6.fld.tcd_csr[9].intmajor = cm_object_get_child_by_name(state->u.k6.reg.tcd_csr[9], "INTMAJOR");
    state->u.k6.fld.tcd_csr[9].inthalf = cm_object_get_child_by_name(state->u.k6.reg.tcd_csr[9], "INTHALF");
    state->u.k6.fld.tcd_csr[9].dreq = cm_object_get_child_by_name(state->u.k6.reg.tcd_csr[9], "DREQ");
    state->u.k6.fld.tcd_csr[9].esg = cm_object_get_child_by_name(state->u.k6.reg.tcd_csr[9], "ESG");
    state->u.k6.fld.tcd_csr[9].majorelink = cm_object_get_child_by_name(state->u.k6.reg.tcd_csr[9], "MAJORELINK");
    state->u.k6.fld.tcd_csr[9].active = cm_object_get_child_by_name(state->u.k6.reg.tcd_csr[9], "ACTIVE");
    state->u.k6.fld.tcd_csr[9].done = cm_object_get_child_by_name(state->u.k6.reg.tcd_csr[9], "DONE");
    state->u.k6.fld.tcd_csr[9].majorlinkch = cm_object_get_child_by_name(state->u.k6.reg.tcd_csr[9], "MAJORLINKCH");
    state->u.k6.fld.tcd_csr[9].bwc = cm_object_get_child_by_name(state->u.k6.reg.tcd_csr[9], "BWC");
    // TCD10_CSR bitfields.
    state->u.k6.fld.tcd_csr[10].start = cm_object_get_child_by_name(state->u.k6.reg.tcd_csr[10], "START");
    state->u.k6.fld.tcd_csr[10].intmajor = cm_object_get_child_by_name(state->u.k6.reg.tcd_csr[10], "INTMAJOR");
    state->u.k6.fld.tcd_csr[10].inthalf = cm_object_get_child_by_name(state->u.k6.reg.tcd_csr[10], "INTHALF");
    state->u.k6.fld.tcd_csr[10].dreq = cm_object_get_child_by_name(state->u.k6.reg.tcd_csr[10], "DREQ");
    state->u.k6.fld.tcd_csr[10].esg = cm_object_get_child_by_name(state->u.k6.reg.tcd_csr[10], "ESG");
    state->u.k6.fld.tcd_csr[10].majorelink = cm_object_get_child_by_name(state->u.k6.reg.tcd_csr[10], "MAJORELINK");
    state->u.k6.fld.tcd_csr[10].active = cm_object_get_child_by_name(state->u.k6.reg.tcd_csr[10], "ACTIVE");
    state->u.k6.fld.tcd_csr[10].done = cm_object_get_child_by_name(state->u.k6.reg.tcd_csr[10], "DONE");
    state->u.k6.fld.tcd_csr[10].majorlinkch = cm_object_get_child_by_name(state->u.k6.reg.tcd_csr[10], "MAJORLINKCH");
    state->u.k6.fld.tcd_csr[10].bwc = cm_object_get_child_by_name(state->u.k6.reg.tcd_csr[10], "BWC");
    // TCD11_CSR bitfields.
    state->u.k6.fld.tcd_csr[11].start = cm_object_get_child_by_name(state->u.k6.reg.tcd_csr[11], "START");
    state->u.k6.fld.tcd_csr[11].intmajor = cm_object_get_child_by_name(state->u.k6.reg.tcd_csr[11], "INTMAJOR");
    state->u.k6.fld.tcd_csr[11].inthalf = cm_object_get_child_by_name(state->u.k6.reg.tcd_csr[11], "INTHALF");
    state->u.k6.fld.tcd_csr[11].dreq = cm_object_get_child_by_name(state->u.k6.reg.tcd_csr[11], "DREQ");
    state->u.k6.fld.tcd_csr[11].esg = cm_object_get_child_by_name(state->u.k6.reg.tcd_csr[11], "ESG");
    state->u.k6.fld.tcd_csr[11].majorelink = cm_object_get_child_by_name(state->u.k6.reg.tcd_csr[11], "MAJORELINK");
    state->u.k6.fld.tcd_csr[11].active = cm_object_get_child_by_name(state->u.k6.reg.tcd_csr[11], "ACTIVE");
    state->u.k6.fld.tcd_csr[11].done = cm_object_get_child_by_name(state->u.k6.reg.tcd_csr[11], "DONE");
    state->u.k6.fld.tcd_csr[11].majorlinkch = cm_object_get_child_by_name(state->u.k6.reg.tcd_csr[11], "MAJORLINKCH");
    state->u.k6.fld.tcd_csr[11].bwc = cm_object_get_child_by_name(state->u.k6.reg.tcd_csr[11], "BWC");
    // TCD12_CSR bitfields.
    state->u.k6.fld.tcd_csr[12].start = cm_object_get_child_by_name(state->u.k6.reg.tcd_csr[12], "START");
    state->u.k6.fld.tcd_csr[12].intmajor = cm_object_get_child_by_name(state->u.k6.reg.tcd_csr[12], "INTMAJOR");
    state->u.k6.fld.tcd_csr[12].inthalf = cm_object_get_child_by_name(state->u.k6.reg.tcd_csr[12], "INTHALF");
    state->u.k6.fld.tcd_csr[12].dreq = cm_object_get_child_by_name(state->u.k6.reg.tcd_csr[12], "DREQ");
    state->u.k6.fld.tcd_csr[12].esg = cm_object_get_child_by_name(state->u.k6.reg.tcd_csr[12], "ESG");
    state->u.k6.fld.tcd_csr[12].majorelink = cm_object_get_child_by_name(state->u.k6.reg.tcd_csr[12], "MAJORELINK");
    state->u.k6.fld.tcd_csr[12].active = cm_object_get_child_by_name(state->u.k6.reg.tcd_csr[12], "ACTIVE");
    state->u.k6.fld.tcd_csr[12].done = cm_object_get_child_by_name(state->u.k6.reg.tcd_csr[12], "DONE");
    state->u.k6.fld.tcd_csr[12].majorlinkch = cm_object_get_child_by_name(state->u.k6.reg.tcd_csr[12], "MAJORLINKCH");
    state->u.k6.fld.tcd_csr[12].bwc = cm_object_get_child_by_name(state->u.k6.reg.tcd_csr[12], "BWC");
    // TCD13_CSR bitfields.
    state->u.k6.fld.tcd_csr[13].start = cm_object_get_child_by_name(state->u.k6.reg.tcd_csr[13], "START");
    state->u.k6.fld.tcd_csr[13].intmajor = cm_object_get_child_by_name(state->u.k6.reg.tcd_csr[13], "INTMAJOR");
    state->u.k6.fld.tcd_csr[13].inthalf = cm_object_get_child_by_name(state->u.k6.reg.tcd_csr[13], "INTHALF");
    state->u.k6.fld.tcd_csr[13].dreq = cm_object_get_child_by_name(state->u.k6.reg.tcd_csr[13], "DREQ");
    state->u.k6.fld.tcd_csr[13].esg = cm_object_get_child_by_name(state->u.k6.reg.tcd_csr[13], "ESG");
    state->u.k6.fld.tcd_csr[13].majorelink = cm_object_get_child_by_name(state->u.k6.reg.tcd_csr[13], "MAJORELINK");
    state->u.k6.fld.tcd_csr[13].active = cm_object_get_child_by_name(state->u.k6.reg.tcd_csr[13], "ACTIVE");
    state->u.k6.fld.tcd_csr[13].done = cm_object_get_child_by_name(state->u.k6.reg.tcd_csr[13], "DONE");
    state->u.k6.fld.tcd_csr[13].majorlinkch = cm_object_get_child_by_name(state->u.k6.reg.tcd_csr[13], "MAJORLINKCH");
    state->u.k6.fld.tcd_csr[13].bwc = cm_object_get_child_by_name(state->u.k6.reg.tcd_csr[13], "BWC");
    // TCD14_CSR bitfields.
    state->u.k6.fld.tcd_csr[14].start = cm_object_get_child_by_name(state->u.k6.reg.tcd_csr[14], "START");
    state->u.k6.fld.tcd_csr[14].intmajor = cm_object_get_child_by_name(state->u.k6.reg.tcd_csr[14], "INTMAJOR");
    state->u.k6.fld.tcd_csr[14].inthalf = cm_object_get_child_by_name(state->u.k6.reg.tcd_csr[14], "INTHALF");
    state->u.k6.fld.tcd_csr[14].dreq = cm_object_get_child_by_name(state->u.k6.reg.tcd_csr[14], "DREQ");
    state->u.k6.fld.tcd_csr[14].esg = cm_object_get_child_by_name(state->u.k6.reg.tcd_csr[14], "ESG");
    state->u.k6.fld.tcd_csr[14].majorelink = cm_object_get_child_by_name(state->u.k6.reg.tcd_csr[14], "MAJORELINK");
    state->u.k6.fld.tcd_csr[14].active = cm_object_get_child_by_name(state->u.k6.reg.tcd_csr[14], "ACTIVE");
    state->u.k6.fld.tcd_csr[14].done = cm_object_get_child_by_name(state->u.k6.reg.tcd_csr[14], "DONE");
    state->u.k6.fld.tcd_csr[14].majorlinkch = cm_object_get_child_by_name(state->u.k6.reg.tcd_csr[14], "MAJORLINKCH");
    state->u.k6.fld.tcd_csr[14].bwc = cm_object_get_child_by_name(state->u.k6.reg.tcd_csr[14], "BWC");
    // TCD15_CSR bitfields.
    state->u.k6.fld.tcd_csr[15].start = cm_object_get_child_by_name(state->u.k6.reg.tcd_csr[15], "START");
    state->u.k6.fld.tcd_csr[15].intmajor = cm_object_get_child_by_name(state->u.k6.reg.tcd_csr[15], "INTMAJOR");
    state->u.k6.fld.tcd_csr[15].inthalf = cm_object_get_child_by_name(state->u.k6.reg.tcd_csr[15], "INTHALF");
    state->u.k6.fld.tcd_csr[15].dreq = cm_object_get_child_by_name(state->u.k6.reg.tcd_csr[15], "DREQ");
    state->u.k6.fld.tcd_csr[15].esg = cm_object_get_child_by_name(state->u.k6.reg.tcd_csr[15], "ESG");
    state->u.k6.fld.tcd_csr[15].majorelink = cm_object_get_child_by_name(state->u.k6.reg.tcd_csr[15], "MAJORELINK");
    state->u.k6.fld.tcd_csr[15].active = cm_object_get_child_by_name(state->u.k6.reg.tcd_csr[15], "ACTIVE");
    state->u.k6.fld.tcd_csr[15].done = cm_object_get_child_by_name(state->u.k6.reg.tcd_csr[15], "DONE");
    state->u.k6.fld.tcd_csr[15].majorlinkch = cm_object_get_child_by_name(state->u.k6.reg.tcd_csr[15], "MAJORLINKCH");
    state->u.k6.fld.tcd_csr[15].bwc = cm_object_get_child_by_name(state->u.k6.reg.tcd_csr[15], "BWC");
    // TCD0_BITER_ELINKNO bitfields.
    state->u.k6.fld.tcd_biter_elinkno[0].biter = cm_object_get_child_by_name(state->u.k6.reg.tcd_biter_elinkno[0], "BITER");
    state->u.k6.fld.tcd_biter_elinkno[0].elink = cm_object_get_child_by_name(state->u.k6.reg.tcd_biter_elinkno[0], "ELINK");
    // TCD1_BITER_ELINKNO bitfields.
    state->u.k6.fld.tcd_biter_elinkno[1].biter = cm_object_get_child_by_name(state->u.k6.reg.tcd_biter_elinkno[1], "BITER");
    state->u.k6.fld.tcd_biter_elinkno[1].elink = cm_object_get_child_by_name(state->u.k6.reg.tcd_biter_elinkno[1], "ELINK");
    // TCD2_BITER_ELINKNO bitfields.
    state->u.k6.fld.tcd_biter_elinkno[2].biter = cm_object_get_child_by_name(state->u.k6.reg.tcd_biter_elinkno[2], "BITER");
    state->u.k6.fld.tcd_biter_elinkno[2].elink = cm_object_get_child_by_name(state->u.k6.reg.tcd_biter_elinkno[2], "ELINK");
    // TCD3_BITER_ELINKNO bitfields.
    state->u.k6.fld.tcd_biter_elinkno[3].biter = cm_object_get_child_by_name(state->u.k6.reg.tcd_biter_elinkno[3], "BITER");
    state->u.k6.fld.tcd_biter_elinkno[3].elink = cm_object_get_child_by_name(state->u.k6.reg.tcd_biter_elinkno[3], "ELINK");
    // TCD4_BITER_ELINKNO bitfields.
    state->u.k6.fld.tcd_biter_elinkno[4].biter = cm_object_get_child_by_name(state->u.k6.reg.tcd_biter_elinkno[4], "BITER");
    state->u.k6.fld.tcd_biter_elinkno[4].elink = cm_object_get_child_by_name(state->u.k6.reg.tcd_biter_elinkno[4], "ELINK");
    // TCD5_BITER_ELINKNO bitfields.
    state->u.k6.fld.tcd_biter_elinkno[5].biter = cm_object_get_child_by_name(state->u.k6.reg.tcd_biter_elinkno[5], "BITER");
    state->u.k6.fld.tcd_biter_elinkno[5].elink = cm_object_get_child_by_name(state->u.k6.reg.tcd_biter_elinkno[5], "ELINK");
    // TCD6_BITER_ELINKNO bitfields.
    state->u.k6.fld.tcd_biter_elinkno[6].biter = cm_object_get_child_by_name(state->u.k6.reg.tcd_biter_elinkno[6], "BITER");
    state->u.k6.fld.tcd_biter_elinkno[6].elink = cm_object_get_child_by_name(state->u.k6.reg.tcd_biter_elinkno[6], "ELINK");
    // TCD7_BITER_ELINKNO bitfields.
    state->u.k6.fld.tcd_biter_elinkno[7].biter = cm_object_get_child_by_name(state->u.k6.reg.tcd_biter_elinkno[7], "BITER");
    state->u.k6.fld.tcd_biter_elinkno[7].elink = cm_object_get_child_by_name(state->u.k6.reg.tcd_biter_elinkno[7], "ELINK");
    // TCD8_BITER_ELINKNO bitfields.
    state->u.k6.fld.tcd_biter_elinkno[8].biter = cm_object_get_child_by_name(state->u.k6.reg.tcd_biter_elinkno[8], "BITER");
    state->u.k6.fld.tcd_biter_elinkno[8].elink = cm_object_get_child_by_name(state->u.k6.reg.tcd_biter_elinkno[8], "ELINK");
    // TCD9_BITER_ELINKNO bitfields.
    state->u.k6.fld.tcd_biter_elinkno[9].biter = cm_object_get_child_by_name(state->u.k6.reg.tcd_biter_elinkno[9], "BITER");
    state->u.k6.fld.tcd_biter_elinkno[9].elink = cm_object_get_child_by_name(state->u.k6.reg.tcd_biter_elinkno[9], "ELINK");
    // TCD10_BITER_ELINKNO bitfields.
    state->u.k6.fld.tcd_biter_elinkno[10].biter = cm_object_get_child_by_name(state->u.k6.reg.tcd_biter_elinkno[10], "BITER");
    state->u.k6.fld.tcd_biter_elinkno[10].elink = cm_object_get_child_by_name(state->u.k6.reg.tcd_biter_elinkno[10], "ELINK");
    // TCD11_BITER_ELINKNO bitfields.
    state->u.k6.fld.tcd_biter_elinkno[11].biter = cm_object_get_child_by_name(state->u.k6.reg.tcd_biter_elinkno[11], "BITER");
    state->u.k6.fld.tcd_biter_elinkno[11].elink = cm_object_get_child_by_name(state->u.k6.reg.tcd_biter_elinkno[11], "ELINK");
    // TCD12_BITER_ELINKNO bitfields.
    state->u.k6.fld.tcd_biter_elinkno[12].biter = cm_object_get_child_by_name(state->u.k6.reg.tcd_biter_elinkno[12], "BITER");
    state->u.k6.fld.tcd_biter_elinkno[12].elink = cm_object_get_child_by_name(state->u.k6.reg.tcd_biter_elinkno[12], "ELINK");
    // TCD13_BITER_ELINKNO bitfields.
    state->u.k6.fld.tcd_biter_elinkno[13].biter = cm_object_get_child_by_name(state->u.k6.reg.tcd_biter_elinkno[13], "BITER");
    state->u.k6.fld.tcd_biter_elinkno[13].elink = cm_object_get_child_by_name(state->u.k6.reg.tcd_biter_elinkno[13], "ELINK");
    // TCD14_BITER_ELINKNO bitfields.
    state->u.k6.fld.tcd_biter_elinkno[14].biter = cm_object_get_child_by_name(state->u.k6.reg.tcd_biter_elinkno[14], "BITER");
    state->u.k6.fld.tcd_biter_elinkno[14].elink = cm_object_get_child_by_name(state->u.k6.reg.tcd_biter_elinkno[14], "ELINK");
    // TCD15_BITER_ELINKNO bitfields.
    state->u.k6.fld.tcd_biter_elinkno[15].biter = cm_object_get_child_by_name(state->u.k6.reg.tcd_biter_elinkno[15], "BITER");
    state->u.k6.fld.tcd_biter_elinkno[15].elink = cm_object_get_child_by_name(state->u.k6.reg.tcd_biter_elinkno[15], "ELINK");
    // TCD0_BITER_ELINKYES bitfields.
    state->u.k6.fld.tcd_biter_elinkyes[0].biter = cm_object_get_child_by_name(state->u.k6.reg.tcd_biter_elinkyes[0], "BITER");
    state->u.k6.fld.tcd_biter_elinkyes[0].linkch = cm_object_get_child_by_name(state->u.k6.reg.tcd_biter_elinkyes[0], "LINKCH");
    state->u.k6.fld.tcd_biter_elinkyes[0].elink = cm_object_get_child_by_name(state->u.k6.reg.tcd_biter_elinkyes[0], "ELINK");
    // TCD1_BITER_ELINKYES bitfields.
    state->u.k6.fld.tcd_biter_elinkyes[1].biter = cm_object_get_child_by_name(state->u.k6.reg.tcd_biter_elinkyes[1], "BITER");
    state->u.k6.fld.tcd_biter_elinkyes[1].linkch = cm_object_get_child_by_name(state->u.k6.reg.tcd_biter_elinkyes[1], "LINKCH");
    state->u.k6.fld.tcd_biter_elinkyes[1].elink = cm_object_get_child_by_name(state->u.k6.reg.tcd_biter_elinkyes[1], "ELINK");
    // TCD2_BITER_ELINKYES bitfields.
    state->u.k6.fld.tcd_biter_elinkyes[2].biter = cm_object_get_child_by_name(state->u.k6.reg.tcd_biter_elinkyes[2], "BITER");
    state->u.k6.fld.tcd_biter_elinkyes[2].linkch = cm_object_get_child_by_name(state->u.k6.reg.tcd_biter_elinkyes[2], "LINKCH");
    state->u.k6.fld.tcd_biter_elinkyes[2].elink = cm_object_get_child_by_name(state->u.k6.reg.tcd_biter_elinkyes[2], "ELINK");
    // TCD3_BITER_ELINKYES bitfields.
    state->u.k6.fld.tcd_biter_elinkyes[3].biter = cm_object_get_child_by_name(state->u.k6.reg.tcd_biter_elinkyes[3], "BITER");
    state->u.k6.fld.tcd_biter_elinkyes[3].linkch = cm_object_get_child_by_name(state->u.k6.reg.tcd_biter_elinkyes[3], "LINKCH");
    state->u.k6.fld.tcd_biter_elinkyes[3].elink = cm_object_get_child_by_name(state->u.k6.reg.tcd_biter_elinkyes[3], "ELINK");
    // TCD4_BITER_ELINKYES bitfields.
    state->u.k6.fld.tcd_biter_elinkyes[4].biter = cm_object_get_child_by_name(state->u.k6.reg.tcd_biter_elinkyes[4], "BITER");
    state->u.k6.fld.tcd_biter_elinkyes[4].linkch = cm_object_get_child_by_name(state->u.k6.reg.tcd_biter_elinkyes[4], "LINKCH");
    state->u.k6.fld.tcd_biter_elinkyes[4].elink = cm_object_get_child_by_name(state->u.k6.reg.tcd_biter_elinkyes[4], "ELINK");
    // TCD5_BITER_ELINKYES bitfields.
    state->u.k6.fld.tcd_biter_elinkyes[5].biter = cm_object_get_child_by_name(state->u.k6.reg.tcd_biter_elinkyes[5], "BITER");
    state->u.k6.fld.tcd_biter_elinkyes[5].linkch = cm_object_get_child_by_name(state->u.k6.reg.tcd_biter_elinkyes[5], "LINKCH");
    state->u.k6.fld.tcd_biter_elinkyes[5].elink = cm_object_get_child_by_name(state->u.k6.reg.tcd_biter_elinkyes[5], "ELINK");
    // TCD6_BITER_ELINKYES bitfields.
    state->u.k6.fld.tcd_biter_elinkyes[6].biter = cm_object_get_child_by_name(state->u.k6.reg.tcd_biter_elinkyes[6], "BITER");
    state->u.k6.fld.tcd_biter_elinkyes[6].linkch = cm_object_get_child_by_name(state->u.k6.reg.tcd_biter_elinkyes[6], "LINKCH");
    state->u.k6.fld.tcd_biter_elinkyes[6].elink = cm_object_get_child_by_name(state->u.k6.reg.tcd_biter_elinkyes[6], "ELINK");
    // TCD7_BITER_ELINKYES bitfields.
    state->u.k6.fld.tcd_biter_elinkyes[7].biter = cm_object_get_child_by_name(state->u.k6.reg.tcd_biter_elinkyes[7], "BITER");
    state->u.k6.fld.tcd_biter_elinkyes[7].linkch = cm_object_get_child_by_name(state->u.k6.reg.tcd_biter_elinkyes[7], "LINKCH");
    state->u.k6.fld.tcd_biter_elinkyes[7].elink = cm_object_get_child_by_name(state->u.k6.reg.tcd_biter_elinkyes[7], "ELINK");
    // TCD8_BITER_ELINKYES bitfields.
    state->u.k6.fld.tcd_biter_elinkyes[8].biter = cm_object_get_child_by_name(state->u.k6.reg.tcd_biter_elinkyes[8], "BITER");
    state->u.k6.fld.tcd_biter_elinkyes[8].linkch = cm_object_get_child_by_name(state->u.k6.reg.tcd_biter_elinkyes[8], "LINKCH");
    state->u.k6.fld.tcd_biter_elinkyes[8].elink = cm_object_get_child_by_name(state->u.k6.reg.tcd_biter_elinkyes[8], "ELINK");
    // TCD9_BITER_ELINKYES bitfields.
    state->u.k6.fld.tcd_biter_elinkyes[9].biter = cm_object_get_child_by_name(state->u.k6.reg.tcd_biter_elinkyes[9], "BITER");
    state->u.k6.fld.tcd_biter_elinkyes[9].linkch = cm_object_get_child_by_name(state->u.k6.reg.tcd_biter_elinkyes[9], "LINKCH");
    state->u.k6.fld.tcd_biter_elinkyes[9].elink = cm_object_get_child_by_name(state->u.k6.reg.tcd_biter_elinkyes[9], "ELINK");
    // TCD10_BITER_ELINKYES bitfields.
    state->u.k6.fld.tcd_biter_elinkyes[10].biter = cm_object_get_child_by_name(state->u.k6.reg.tcd_biter_elinkyes[10], "BITER");
    state->u.k6.fld.tcd_biter_elinkyes[10].linkch = cm_object_get_child_by_name(state->u.k6.reg.tcd_biter_elinkyes[10], "LINKCH");
    state->u.k6.fld.tcd_biter_elinkyes[10].elink = cm_object_get_child_by_name(state->u.k6.reg.tcd_biter_elinkyes[10], "ELINK");
    // TCD11_BITER_ELINKYES bitfields.
    state->u.k6.fld.tcd_biter_elinkyes[11].biter = cm_object_get_child_by_name(state->u.k6.reg.tcd_biter_elinkyes[11], "BITER");
    state->u.k6.fld.tcd_biter_elinkyes[11].linkch = cm_object_get_child_by_name(state->u.k6.reg.tcd_biter_elinkyes[11], "LINKCH");
    state->u.k6.fld.tcd_biter_elinkyes[11].elink = cm_object_get_child_by_name(state->u.k6.reg.tcd_biter_elinkyes[11], "ELINK");
    // TCD12_BITER_ELINKYES bitfields.
    state->u.k6.fld.tcd_biter_elinkyes[12].biter = cm_object_get_child_by_name(state->u.k6.reg.tcd_biter_elinkyes[12], "BITER");
    state->u.k6.fld.tcd_biter_elinkyes[12].linkch = cm_object_get_child_by_name(state->u.k6.reg.tcd_biter_elinkyes[12], "LINKCH");
    state->u.k6.fld.tcd_biter_elinkyes[12].elink = cm_object_get_child_by_name(state->u.k6.reg.tcd_biter_elinkyes[12], "ELINK");
    // TCD13_BITER_ELINKYES bitfields.
    state->u.k6.fld.tcd_biter_elinkyes[13].biter = cm_object_get_child_by_name(state->u.k6.reg.tcd_biter_elinkyes[13], "BITER");
    state->u.k6.fld.tcd_biter_elinkyes[13].linkch = cm_object_get_child_by_name(state->u.k6.reg.tcd_biter_elinkyes[13], "LINKCH");
    state->u.k6.fld.tcd_biter_elinkyes[13].elink = cm_object_get_child_by_name(state->u.k6.reg.tcd_biter_elinkyes[13], "ELINK");
    // TCD14_BITER_ELINKYES bitfields.
    state->u.k6.fld.tcd_biter_elinkyes[14].biter = cm_object_get_child_by_name(state->u.k6.reg.tcd_biter_elinkyes[14], "BITER");
    state->u.k6.fld.tcd_biter_elinkyes[14].linkch = cm_object_get_child_by_name(state->u.k6.reg.tcd_biter_elinkyes[14], "LINKCH");
    state->u.k6.fld.tcd_biter_elinkyes[14].elink = cm_object_get_child_by_name(state->u.k6.reg.tcd_biter_elinkyes[14], "ELINK");
    // TCD15_BITER_ELINKYES bitfields.
    state->u.k6.fld.tcd_biter_elinkyes[15].biter = cm_object_get_child_by_name(state->u.k6.reg.tcd_biter_elinkyes[15], "BITER");
    state->u.k6.fld.tcd_biter_elinkyes[15].linkch = cm_object_get_child_by_name(state->u.k6.reg.tcd_biter_elinkyes[15], "LINKCH");
    state->u.k6.fld.tcd_biter_elinkyes[15].elink = cm_object_get_child_by_name(state->u.k6.reg.tcd_biter_elinkyes[15], "ELINK");
}

// ----- 8< ----- 8< -----  8< ----- 8< ----- 8< ----- 8< ----- 8< -----

// ----- Private --------------------------------------------------------------

#if 0
static peripheral_register_t kinetis_dma_xxx_pre_write_callback(Object *reg,
        Object *periph, uint32_t addr, uint32_t offset, unsigned size,
        peripheral_register_t value, peripheral_register_t full_value)
{
    KinetisDMAState *state = KINETIS_DMA_STATE(periph);

    peripheral_register_t prev_value = peripheral_register_get_raw_prev_value(reg);

    // TODO: Add code to adjust the value (like applying some masks,
    // for example prevent setting interrupts not enabled).
    // Also process cleared/set by write 1/0 bits.
    // The returned value will be stored in the register value.

    return full_value;
}

static void kinetis_dma_xxx_post_write_callback(Object *reg, Object *periph,
        uint32_t addr, uint32_t offset, unsigned size,
        peripheral_register_t value, peripheral_register_t full_value)
{
    KinetisDMAState *state = KINETIS_DMA_STATE(periph);

    peripheral_register_t prev_value = peripheral_register_get_raw_prev_value(reg);
    // The new register value is full_value, the old one is prev_value.

    // TODO: Add code to send the value to the consumer.
}

static peripheral_register_t kinetis_dma_xxx_pre_read_callback(Object *reg,
        Object *periph, uint32_t addr, uint32_t offset, unsigned size)
{
    KinetisDMAState *state = KINETIS_DMA_STATE(periph);

    peripheral_register_t value = 0;

    // Add code to get the value from the producer, and return it.

    // This value, possibly masked, will be stored in the register
    // and returned when the register is read.
    return value;
}

static void kinetis_dma_xxx_post_read_callback(Object *reg, Object *periph,
        uint32_t addr, uint32_t offset, unsigned size)
{
    KinetisDMAState *state = KINETIS_DMA_STATE(periph);

    peripheral_register_t value = peripheral_register_get_raw_value(reg);

    // TODO: add code to perform the post read actions, like clearing some bits.
}
#endif

// ----------------------------------------------------------------------------

// TODO: remove this if the peripheral is always enabled.
static bool kinetis_dma_is_enabled(Object *obj)
{
    KinetisDMAState *state = KINETIS_DMA_STATE(obj);

    if (register_bitfield_is_non_zero(state->enabling_bit)) {
        return true; // Positive logic, bit == 1 means enabled.
    }

    // Not enabled
    return false;
}

static void kinetis_dma_instance_init_callback(Object *obj)
{
    qemu_log_function_name();

    KinetisDMAState *state = KINETIS_DMA_STATE(obj);

    // Capabilities are not yet available.

    // TODO: remove this if the peripheral is always enabled.
    state->enabling_bit = NULL;
    
    // TODO: Add code to initialise all members.
}

static void kinetis_dma_realize_callback(DeviceState *dev, Error **errp)
{
    qemu_log_function_name();

    // Call parent realize().
    if (!cm_device_parent_realize(dev, errp, TYPE_KINETIS_DMA)) {
        return;
    }

    KinetisMCUState *mcu = kinetis_mcu_get();
    CortexMState *cm_state = CORTEXM_MCU_STATE(mcu);

    KinetisDMAState *state = KINETIS_DMA_STATE(dev);
    // First thing first: get capabilities from MCU, needed everywhere.
    state->capabilities = mcu->capabilities;

    // Also keep a local pointer, to access them easier.
    const KinetisCapabilities *capabilities = state->capabilities;
    assert(capabilities != NULL);

    Object *obj = OBJECT(dev);

    const char *periph_name = "DMA";

    svd_set_peripheral_address_block(cm_state->svd_json, periph_name, obj);
    peripheral_create_memory_region(obj);

    // TODO: remove this if the peripheral is always enabled.
    char enabling_bit_name[KINETIS_RCC_SIZEOF_ENABLING_BITFIELD];

    switch (capabilities->family) {
    case KINETIS_FAMILY_K6:


            mk64f12_dma_create_objects(obj, cm_state->svd_json, periph_name);

            // TODO: add actions.
            // cm_object_property_set_str(state->u.k6.fld.xxx.fff, "GGG", "follows");
            // cm_object_property_set_str(state->u.k6.fld.xxx.fff, "GGG", "cleared-by");

            // TODO: add callbacks.
            // peripheral_register_set_pre_read(state->k6.reg.xxx, &kinetis_dma_xxx_pre_read_callback);
            // peripheral_register_set_post_read(state->k6.reg.xxx, &kinetis_dma_xxx_post_read_callback);
            // peripheral_register_set_pre_read(state->k6.reg.xxx, &kinetis_dma_xxx_pret_read_callback);
            // peripheral_register_set_post_write(state->k6.reg.xxx, &kinetis_dma_xxx_post_write_callback);

            // TODO: add interrupts.

            // TODO: remove this if the peripheral is always enabled.
            snprintf(enabling_bit_name, sizeof(enabling_bit_name) - 1,
                DEVICE_PATH_KINETIS_RCC "/AHB1ENR/DMAEN");


        break;

    default:
        assert(false);
        break;
    }

    // TODO: remove this if the peripheral is always enabled.
    state->enabling_bit = OBJECT(cm_device_by_name(enabling_bit_name));

    peripheral_prepare_registers(obj);
}

static void kinetis_dma_reset_callback(DeviceState *dev)
{
    qemu_log_function_name();

    // Call parent reset(); this will reset all children registers.
    cm_device_parent_reset(dev, TYPE_KINETIS_DMA);
}

static void kinetis_dma_class_init_callback(ObjectClass *klass, void *data)
{
    DeviceClass *dc = DEVICE_CLASS(klass);

    dc->reset = kinetis_dma_reset_callback;
    dc->realize = kinetis_dma_realize_callback;

    // TODO: remove this if the peripheral is always enabled.
    PeripheralClass *per_class = PERIPHERAL_CLASS(klass);
    per_class->is_enabled = kinetis_dma_is_enabled;
}

static const TypeInfo kinetis_dma_type_info = {
    .name = TYPE_KINETIS_DMA,
    .parent = TYPE_KINETIS_DMA_PARENT,
    .instance_init = kinetis_dma_instance_init_callback,
    .instance_size = sizeof(KinetisDMAState),
    .class_init = kinetis_dma_class_init_callback,
    .class_size = sizeof(KinetisDMAClass) };

static void kinetis_dma_register_types(void)
{
    type_register_static(&kinetis_dma_type_info);
}

type_init(kinetis_dma_register_types);

// ----------------------------------------------------------------------------
