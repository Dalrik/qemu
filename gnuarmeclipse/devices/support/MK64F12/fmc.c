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

#include <hw/cortexm/kinetis/fmc.h>
#include <hw/cortexm/kinetis/mcu.h>
#include <hw/cortexm/helper.h>
#include <hw/cortexm/svd.h>

// ----- Generated code -------------------------------------------------------
//
// ----- 8< ----- 8< -----  8< ----- 8< ----- 8< ----- 8< ----- 8< -----

// DO NOT EDIT! Automatically generated!
static void mk64f12_fmc_create_objects(Object *obj, JSON_Object *svd, const char *name)
{
    KinetisFMCState *state = KINETIS_FMC_STATE(obj);

    JSON_Object *periph = svd_get_peripheral_by_name(svd, name);
    svd_add_peripheral_properties_and_children(obj, periph, svd);

    // Registers. 
    state->u.k6.reg.pfapr = cm_object_get_child_by_name(obj, "PFAPR");
    state->u.k6.reg.pfb0cr = cm_object_get_child_by_name(obj, "PFB0CR");
    state->u.k6.reg.pfb1cr = cm_object_get_child_by_name(obj, "PFB1CR");
    state->u.k6.reg.tagvdw0s[0] = cm_object_get_child_by_name(obj, "TAGVDW0S0");
    state->u.k6.reg.tagvdw0s[1] = cm_object_get_child_by_name(obj, "TAGVDW0S1");
    state->u.k6.reg.tagvdw0s[2] = cm_object_get_child_by_name(obj, "TAGVDW0S2");
    state->u.k6.reg.tagvdw0s[3] = cm_object_get_child_by_name(obj, "TAGVDW0S3");
    state->u.k6.reg.tagvdw1s[0] = cm_object_get_child_by_name(obj, "TAGVDW1S0");
    state->u.k6.reg.tagvdw1s[1] = cm_object_get_child_by_name(obj, "TAGVDW1S1");
    state->u.k6.reg.tagvdw1s[2] = cm_object_get_child_by_name(obj, "TAGVDW1S2");
    state->u.k6.reg.tagvdw1s[3] = cm_object_get_child_by_name(obj, "TAGVDW1S3");
    state->u.k6.reg.tagvdw2s[0] = cm_object_get_child_by_name(obj, "TAGVDW2S0");
    state->u.k6.reg.tagvdw2s[1] = cm_object_get_child_by_name(obj, "TAGVDW2S1");
    state->u.k6.reg.tagvdw2s[2] = cm_object_get_child_by_name(obj, "TAGVDW2S2");
    state->u.k6.reg.tagvdw2s[3] = cm_object_get_child_by_name(obj, "TAGVDW2S3");
    state->u.k6.reg.tagvdw3s[0] = cm_object_get_child_by_name(obj, "TAGVDW3S0");
    state->u.k6.reg.tagvdw3s[1] = cm_object_get_child_by_name(obj, "TAGVDW3S1");
    state->u.k6.reg.tagvdw3s[2] = cm_object_get_child_by_name(obj, "TAGVDW3S2");
    state->u.k6.reg.tagvdw3s[3] = cm_object_get_child_by_name(obj, "TAGVDW3S3");
    state->u.k6.reg.dataw0su[0] = cm_object_get_child_by_name(obj, "DATAW0S0U");
    state->u.k6.reg.dataw0su[1] = cm_object_get_child_by_name(obj, "DATAW0S1U");
    state->u.k6.reg.dataw0su[2] = cm_object_get_child_by_name(obj, "DATAW0S2U");
    state->u.k6.reg.dataw0su[3] = cm_object_get_child_by_name(obj, "DATAW0S3U");
    state->u.k6.reg.dataw0sl[0] = cm_object_get_child_by_name(obj, "DATAW0S0L");
    state->u.k6.reg.dataw0sl[1] = cm_object_get_child_by_name(obj, "DATAW0S1L");
    state->u.k6.reg.dataw0sl[2] = cm_object_get_child_by_name(obj, "DATAW0S2L");
    state->u.k6.reg.dataw0sl[3] = cm_object_get_child_by_name(obj, "DATAW0S3L");
    state->u.k6.reg.dataw1su[0] = cm_object_get_child_by_name(obj, "DATAW1S0U");
    state->u.k6.reg.dataw1su[1] = cm_object_get_child_by_name(obj, "DATAW1S1U");
    state->u.k6.reg.dataw1su[2] = cm_object_get_child_by_name(obj, "DATAW1S2U");
    state->u.k6.reg.dataw1su[3] = cm_object_get_child_by_name(obj, "DATAW1S3U");
    state->u.k6.reg.dataw1sl[0] = cm_object_get_child_by_name(obj, "DATAW1S0L");
    state->u.k6.reg.dataw1sl[1] = cm_object_get_child_by_name(obj, "DATAW1S1L");
    state->u.k6.reg.dataw1sl[2] = cm_object_get_child_by_name(obj, "DATAW1S2L");
    state->u.k6.reg.dataw1sl[3] = cm_object_get_child_by_name(obj, "DATAW1S3L");
    state->u.k6.reg.dataw2su[0] = cm_object_get_child_by_name(obj, "DATAW2S0U");
    state->u.k6.reg.dataw2su[1] = cm_object_get_child_by_name(obj, "DATAW2S1U");
    state->u.k6.reg.dataw2su[2] = cm_object_get_child_by_name(obj, "DATAW2S2U");
    state->u.k6.reg.dataw2su[3] = cm_object_get_child_by_name(obj, "DATAW2S3U");
    state->u.k6.reg.dataw2sl[0] = cm_object_get_child_by_name(obj, "DATAW2S0L");
    state->u.k6.reg.dataw2sl[1] = cm_object_get_child_by_name(obj, "DATAW2S1L");
    state->u.k6.reg.dataw2sl[2] = cm_object_get_child_by_name(obj, "DATAW2S2L");
    state->u.k6.reg.dataw2sl[3] = cm_object_get_child_by_name(obj, "DATAW2S3L");
    state->u.k6.reg.dataw3su[0] = cm_object_get_child_by_name(obj, "DATAW3S0U");
    state->u.k6.reg.dataw3su[1] = cm_object_get_child_by_name(obj, "DATAW3S1U");
    state->u.k6.reg.dataw3su[2] = cm_object_get_child_by_name(obj, "DATAW3S2U");
    state->u.k6.reg.dataw3su[3] = cm_object_get_child_by_name(obj, "DATAW3S3U");
    state->u.k6.reg.dataw3sl[0] = cm_object_get_child_by_name(obj, "DATAW3S0L");
    state->u.k6.reg.dataw3sl[1] = cm_object_get_child_by_name(obj, "DATAW3S1L");
    state->u.k6.reg.dataw3sl[2] = cm_object_get_child_by_name(obj, "DATAW3S2L");
    state->u.k6.reg.dataw3sl[3] = cm_object_get_child_by_name(obj, "DATAW3S3L");

    // PFAPR bitfields.
    state->u.k6.fld.pfapr.m0ap = cm_object_get_child_by_name(state->u.k6.reg.pfapr, "M0AP");
    state->u.k6.fld.pfapr.m1ap = cm_object_get_child_by_name(state->u.k6.reg.pfapr, "M1AP");
    state->u.k6.fld.pfapr.m2ap = cm_object_get_child_by_name(state->u.k6.reg.pfapr, "M2AP");
    state->u.k6.fld.pfapr.m3ap = cm_object_get_child_by_name(state->u.k6.reg.pfapr, "M3AP");
    state->u.k6.fld.pfapr.m4ap = cm_object_get_child_by_name(state->u.k6.reg.pfapr, "M4AP");
    state->u.k6.fld.pfapr.m5ap = cm_object_get_child_by_name(state->u.k6.reg.pfapr, "M5AP");
    state->u.k6.fld.pfapr.m6ap = cm_object_get_child_by_name(state->u.k6.reg.pfapr, "M6AP");
    state->u.k6.fld.pfapr.m7ap = cm_object_get_child_by_name(state->u.k6.reg.pfapr, "M7AP");
    state->u.k6.fld.pfapr.m0pfd = cm_object_get_child_by_name(state->u.k6.reg.pfapr, "M0PFD");
    state->u.k6.fld.pfapr.m1pfd = cm_object_get_child_by_name(state->u.k6.reg.pfapr, "M1PFD");
    state->u.k6.fld.pfapr.m2pfd = cm_object_get_child_by_name(state->u.k6.reg.pfapr, "M2PFD");
    state->u.k6.fld.pfapr.m3pfd = cm_object_get_child_by_name(state->u.k6.reg.pfapr, "M3PFD");
    state->u.k6.fld.pfapr.m4pfd = cm_object_get_child_by_name(state->u.k6.reg.pfapr, "M4PFD");
    state->u.k6.fld.pfapr.m5pfd = cm_object_get_child_by_name(state->u.k6.reg.pfapr, "M5PFD");
    state->u.k6.fld.pfapr.m6pfd = cm_object_get_child_by_name(state->u.k6.reg.pfapr, "M6PFD");
    state->u.k6.fld.pfapr.m7pfd = cm_object_get_child_by_name(state->u.k6.reg.pfapr, "M7PFD");

    // PFB0CR bitfields.
    state->u.k6.fld.pfb0cr.b0sebe = cm_object_get_child_by_name(state->u.k6.reg.pfb0cr, "B0SEBE");
    state->u.k6.fld.pfb0cr.b0ipe = cm_object_get_child_by_name(state->u.k6.reg.pfb0cr, "B0IPE");
    state->u.k6.fld.pfb0cr.b0dpe = cm_object_get_child_by_name(state->u.k6.reg.pfb0cr, "B0DPE");
    state->u.k6.fld.pfb0cr.b0ice = cm_object_get_child_by_name(state->u.k6.reg.pfb0cr, "B0ICE");
    state->u.k6.fld.pfb0cr.b0dce = cm_object_get_child_by_name(state->u.k6.reg.pfb0cr, "B0DCE");
    state->u.k6.fld.pfb0cr.crc = cm_object_get_child_by_name(state->u.k6.reg.pfb0cr, "CRC");
    state->u.k6.fld.pfb0cr.b0mw = cm_object_get_child_by_name(state->u.k6.reg.pfb0cr, "B0MW");
    state->u.k6.fld.pfb0cr.s_b_inv = cm_object_get_child_by_name(state->u.k6.reg.pfb0cr, "S_B_INV");
    state->u.k6.fld.pfb0cr.cinv_way = cm_object_get_child_by_name(state->u.k6.reg.pfb0cr, "CINV_WAY");
    state->u.k6.fld.pfb0cr.clck_way = cm_object_get_child_by_name(state->u.k6.reg.pfb0cr, "CLCK_WAY");
    state->u.k6.fld.pfb0cr.b0rwsc = cm_object_get_child_by_name(state->u.k6.reg.pfb0cr, "B0RWSC");

    // PFB1CR bitfields.
    state->u.k6.fld.pfb1cr.b1sebe = cm_object_get_child_by_name(state->u.k6.reg.pfb1cr, "B1SEBE");
    state->u.k6.fld.pfb1cr.b1ipe = cm_object_get_child_by_name(state->u.k6.reg.pfb1cr, "B1IPE");
    state->u.k6.fld.pfb1cr.b1dpe = cm_object_get_child_by_name(state->u.k6.reg.pfb1cr, "B1DPE");
    state->u.k6.fld.pfb1cr.b1ice = cm_object_get_child_by_name(state->u.k6.reg.pfb1cr, "B1ICE");
    state->u.k6.fld.pfb1cr.b1dce = cm_object_get_child_by_name(state->u.k6.reg.pfb1cr, "B1DCE");
    state->u.k6.fld.pfb1cr.b1mw = cm_object_get_child_by_name(state->u.k6.reg.pfb1cr, "B1MW");
    state->u.k6.fld.pfb1cr.b1rwsc = cm_object_get_child_by_name(state->u.k6.reg.pfb1cr, "B1RWSC");
    // TAGVDW0S0 bitfields.
    state->u.k6.fld.tagvdw0s[0].valid = cm_object_get_child_by_name(state->u.k6.reg.tagvdw0s[0], "valid");
    state->u.k6.fld.tagvdw0s[0].tag = cm_object_get_child_by_name(state->u.k6.reg.tagvdw0s[0], "tag");
    // TAGVDW0S1 bitfields.
    state->u.k6.fld.tagvdw0s[1].valid = cm_object_get_child_by_name(state->u.k6.reg.tagvdw0s[1], "valid");
    state->u.k6.fld.tagvdw0s[1].tag = cm_object_get_child_by_name(state->u.k6.reg.tagvdw0s[1], "tag");
    // TAGVDW0S2 bitfields.
    state->u.k6.fld.tagvdw0s[2].valid = cm_object_get_child_by_name(state->u.k6.reg.tagvdw0s[2], "valid");
    state->u.k6.fld.tagvdw0s[2].tag = cm_object_get_child_by_name(state->u.k6.reg.tagvdw0s[2], "tag");
    // TAGVDW0S3 bitfields.
    state->u.k6.fld.tagvdw0s[3].valid = cm_object_get_child_by_name(state->u.k6.reg.tagvdw0s[3], "valid");
    state->u.k6.fld.tagvdw0s[3].tag = cm_object_get_child_by_name(state->u.k6.reg.tagvdw0s[3], "tag");
    // TAGVDW1S0 bitfields.
    state->u.k6.fld.tagvdw1s[0].valid = cm_object_get_child_by_name(state->u.k6.reg.tagvdw1s[0], "valid");
    state->u.k6.fld.tagvdw1s[0].tag = cm_object_get_child_by_name(state->u.k6.reg.tagvdw1s[0], "tag");
    // TAGVDW1S1 bitfields.
    state->u.k6.fld.tagvdw1s[1].valid = cm_object_get_child_by_name(state->u.k6.reg.tagvdw1s[1], "valid");
    state->u.k6.fld.tagvdw1s[1].tag = cm_object_get_child_by_name(state->u.k6.reg.tagvdw1s[1], "tag");
    // TAGVDW1S2 bitfields.
    state->u.k6.fld.tagvdw1s[2].valid = cm_object_get_child_by_name(state->u.k6.reg.tagvdw1s[2], "valid");
    state->u.k6.fld.tagvdw1s[2].tag = cm_object_get_child_by_name(state->u.k6.reg.tagvdw1s[2], "tag");
    // TAGVDW1S3 bitfields.
    state->u.k6.fld.tagvdw1s[3].valid = cm_object_get_child_by_name(state->u.k6.reg.tagvdw1s[3], "valid");
    state->u.k6.fld.tagvdw1s[3].tag = cm_object_get_child_by_name(state->u.k6.reg.tagvdw1s[3], "tag");
    // TAGVDW2S0 bitfields.
    state->u.k6.fld.tagvdw2s[0].valid = cm_object_get_child_by_name(state->u.k6.reg.tagvdw2s[0], "valid");
    state->u.k6.fld.tagvdw2s[0].tag = cm_object_get_child_by_name(state->u.k6.reg.tagvdw2s[0], "tag");
    // TAGVDW2S1 bitfields.
    state->u.k6.fld.tagvdw2s[1].valid = cm_object_get_child_by_name(state->u.k6.reg.tagvdw2s[1], "valid");
    state->u.k6.fld.tagvdw2s[1].tag = cm_object_get_child_by_name(state->u.k6.reg.tagvdw2s[1], "tag");
    // TAGVDW2S2 bitfields.
    state->u.k6.fld.tagvdw2s[2].valid = cm_object_get_child_by_name(state->u.k6.reg.tagvdw2s[2], "valid");
    state->u.k6.fld.tagvdw2s[2].tag = cm_object_get_child_by_name(state->u.k6.reg.tagvdw2s[2], "tag");
    // TAGVDW2S3 bitfields.
    state->u.k6.fld.tagvdw2s[3].valid = cm_object_get_child_by_name(state->u.k6.reg.tagvdw2s[3], "valid");
    state->u.k6.fld.tagvdw2s[3].tag = cm_object_get_child_by_name(state->u.k6.reg.tagvdw2s[3], "tag");
    // TAGVDW3S0 bitfields.
    state->u.k6.fld.tagvdw3s[0].valid = cm_object_get_child_by_name(state->u.k6.reg.tagvdw3s[0], "valid");
    state->u.k6.fld.tagvdw3s[0].tag = cm_object_get_child_by_name(state->u.k6.reg.tagvdw3s[0], "tag");
    // TAGVDW3S1 bitfields.
    state->u.k6.fld.tagvdw3s[1].valid = cm_object_get_child_by_name(state->u.k6.reg.tagvdw3s[1], "valid");
    state->u.k6.fld.tagvdw3s[1].tag = cm_object_get_child_by_name(state->u.k6.reg.tagvdw3s[1], "tag");
    // TAGVDW3S2 bitfields.
    state->u.k6.fld.tagvdw3s[2].valid = cm_object_get_child_by_name(state->u.k6.reg.tagvdw3s[2], "valid");
    state->u.k6.fld.tagvdw3s[2].tag = cm_object_get_child_by_name(state->u.k6.reg.tagvdw3s[2], "tag");
    // TAGVDW3S3 bitfields.
    state->u.k6.fld.tagvdw3s[3].valid = cm_object_get_child_by_name(state->u.k6.reg.tagvdw3s[3], "valid");
    state->u.k6.fld.tagvdw3s[3].tag = cm_object_get_child_by_name(state->u.k6.reg.tagvdw3s[3], "tag");
    // DATAW0S0U bitfields.
    state->u.k6.fld.dataw0su[0].data = cm_object_get_child_by_name(state->u.k6.reg.dataw0su[0], "data");
    // DATAW0S1U bitfields.
    state->u.k6.fld.dataw0su[1].data = cm_object_get_child_by_name(state->u.k6.reg.dataw0su[1], "data");
    // DATAW0S2U bitfields.
    state->u.k6.fld.dataw0su[2].data = cm_object_get_child_by_name(state->u.k6.reg.dataw0su[2], "data");
    // DATAW0S3U bitfields.
    state->u.k6.fld.dataw0su[3].data = cm_object_get_child_by_name(state->u.k6.reg.dataw0su[3], "data");
    // DATAW0S0L bitfields.
    state->u.k6.fld.dataw0sl[0].data = cm_object_get_child_by_name(state->u.k6.reg.dataw0sl[0], "data");
    // DATAW0S1L bitfields.
    state->u.k6.fld.dataw0sl[1].data = cm_object_get_child_by_name(state->u.k6.reg.dataw0sl[1], "data");
    // DATAW0S2L bitfields.
    state->u.k6.fld.dataw0sl[2].data = cm_object_get_child_by_name(state->u.k6.reg.dataw0sl[2], "data");
    // DATAW0S3L bitfields.
    state->u.k6.fld.dataw0sl[3].data = cm_object_get_child_by_name(state->u.k6.reg.dataw0sl[3], "data");
    // DATAW1S0U bitfields.
    state->u.k6.fld.dataw1su[0].data = cm_object_get_child_by_name(state->u.k6.reg.dataw1su[0], "data");
    // DATAW1S1U bitfields.
    state->u.k6.fld.dataw1su[1].data = cm_object_get_child_by_name(state->u.k6.reg.dataw1su[1], "data");
    // DATAW1S2U bitfields.
    state->u.k6.fld.dataw1su[2].data = cm_object_get_child_by_name(state->u.k6.reg.dataw1su[2], "data");
    // DATAW1S3U bitfields.
    state->u.k6.fld.dataw1su[3].data = cm_object_get_child_by_name(state->u.k6.reg.dataw1su[3], "data");
    // DATAW1S0L bitfields.
    state->u.k6.fld.dataw1sl[0].data = cm_object_get_child_by_name(state->u.k6.reg.dataw1sl[0], "data");
    // DATAW1S1L bitfields.
    state->u.k6.fld.dataw1sl[1].data = cm_object_get_child_by_name(state->u.k6.reg.dataw1sl[1], "data");
    // DATAW1S2L bitfields.
    state->u.k6.fld.dataw1sl[2].data = cm_object_get_child_by_name(state->u.k6.reg.dataw1sl[2], "data");
    // DATAW1S3L bitfields.
    state->u.k6.fld.dataw1sl[3].data = cm_object_get_child_by_name(state->u.k6.reg.dataw1sl[3], "data");
    // DATAW2S0U bitfields.
    state->u.k6.fld.dataw2su[0].data = cm_object_get_child_by_name(state->u.k6.reg.dataw2su[0], "data");
    // DATAW2S1U bitfields.
    state->u.k6.fld.dataw2su[1].data = cm_object_get_child_by_name(state->u.k6.reg.dataw2su[1], "data");
    // DATAW2S2U bitfields.
    state->u.k6.fld.dataw2su[2].data = cm_object_get_child_by_name(state->u.k6.reg.dataw2su[2], "data");
    // DATAW2S3U bitfields.
    state->u.k6.fld.dataw2su[3].data = cm_object_get_child_by_name(state->u.k6.reg.dataw2su[3], "data");
    // DATAW2S0L bitfields.
    state->u.k6.fld.dataw2sl[0].data = cm_object_get_child_by_name(state->u.k6.reg.dataw2sl[0], "data");
    // DATAW2S1L bitfields.
    state->u.k6.fld.dataw2sl[1].data = cm_object_get_child_by_name(state->u.k6.reg.dataw2sl[1], "data");
    // DATAW2S2L bitfields.
    state->u.k6.fld.dataw2sl[2].data = cm_object_get_child_by_name(state->u.k6.reg.dataw2sl[2], "data");
    // DATAW2S3L bitfields.
    state->u.k6.fld.dataw2sl[3].data = cm_object_get_child_by_name(state->u.k6.reg.dataw2sl[3], "data");
    // DATAW3S0U bitfields.
    state->u.k6.fld.dataw3su[0].data = cm_object_get_child_by_name(state->u.k6.reg.dataw3su[0], "data");
    // DATAW3S1U bitfields.
    state->u.k6.fld.dataw3su[1].data = cm_object_get_child_by_name(state->u.k6.reg.dataw3su[1], "data");
    // DATAW3S2U bitfields.
    state->u.k6.fld.dataw3su[2].data = cm_object_get_child_by_name(state->u.k6.reg.dataw3su[2], "data");
    // DATAW3S3U bitfields.
    state->u.k6.fld.dataw3su[3].data = cm_object_get_child_by_name(state->u.k6.reg.dataw3su[3], "data");
    // DATAW3S0L bitfields.
    state->u.k6.fld.dataw3sl[0].data = cm_object_get_child_by_name(state->u.k6.reg.dataw3sl[0], "data");
    // DATAW3S1L bitfields.
    state->u.k6.fld.dataw3sl[1].data = cm_object_get_child_by_name(state->u.k6.reg.dataw3sl[1], "data");
    // DATAW3S2L bitfields.
    state->u.k6.fld.dataw3sl[2].data = cm_object_get_child_by_name(state->u.k6.reg.dataw3sl[2], "data");
    // DATAW3S3L bitfields.
    state->u.k6.fld.dataw3sl[3].data = cm_object_get_child_by_name(state->u.k6.reg.dataw3sl[3], "data");
}

// ----- 8< ----- 8< -----  8< ----- 8< ----- 8< ----- 8< ----- 8< -----

// ----- Private --------------------------------------------------------------

#if 0
static peripheral_register_t kinetis_fmc_xxx_pre_write_callback(Object *reg,
        Object *periph, uint32_t addr, uint32_t offset, unsigned size,
        peripheral_register_t value, peripheral_register_t full_value)
{
    KinetisFMCState *state = KINETIS_FMC_STATE(periph);

    peripheral_register_t prev_value = peripheral_register_get_raw_prev_value(reg);

    // TODO: Add code to adjust the value (like applying some masks,
    // for example prevent setting interrupts not enabled).
    // Also process cleared/set by write 1/0 bits.
    // The returned value will be stored in the register value.

    return full_value;
}

static void kinetis_fmc_xxx_post_write_callback(Object *reg, Object *periph,
        uint32_t addr, uint32_t offset, unsigned size,
        peripheral_register_t value, peripheral_register_t full_value)
{
    KinetisFMCState *state = KINETIS_FMC_STATE(periph);

    peripheral_register_t prev_value = peripheral_register_get_raw_prev_value(reg);
    // The new register value is full_value, the old one is prev_value.

    // TODO: Add code to send the value to the consumer.
}

static peripheral_register_t kinetis_fmc_xxx_pre_read_callback(Object *reg,
        Object *periph, uint32_t addr, uint32_t offset, unsigned size)
{
    KinetisFMCState *state = KINETIS_FMC_STATE(periph);

    peripheral_register_t value = 0;

    // Add code to get the value from the producer, and return it.

    // This value, possibly masked, will be stored in the register
    // and returned when the register is read.
    return value;
}

static void kinetis_fmc_xxx_post_read_callback(Object *reg, Object *periph,
        uint32_t addr, uint32_t offset, unsigned size)
{
    KinetisFMCState *state = KINETIS_FMC_STATE(periph);

    peripheral_register_t value = peripheral_register_get_raw_value(reg);

    // TODO: add code to perform the post read actions, like clearing some bits.
}
#endif

// ----------------------------------------------------------------------------

// TODO: remove this if the peripheral is always enabled.
static bool kinetis_fmc_is_enabled(Object *obj)
{
    KinetisFMCState *state = KINETIS_FMC_STATE(obj);

    if (register_bitfield_is_non_zero(state->enabling_bit)) {
        return true; // Positive logic, bit == 1 means enabled.
    }

    // Not enabled
    return false;
}

static void kinetis_fmc_instance_init_callback(Object *obj)
{
    qemu_log_function_name();

    KinetisFMCState *state = KINETIS_FMC_STATE(obj);

    // Capabilities are not yet available.

    // TODO: remove this if the peripheral is always enabled.
    state->enabling_bit = NULL;
    
    // TODO: Add code to initialise all members.
}

static void kinetis_fmc_realize_callback(DeviceState *dev, Error **errp)
{
    qemu_log_function_name();

    // Call parent realize().
    if (!cm_device_parent_realize(dev, errp, TYPE_KINETIS_FMC)) {
        return;
    }

    KinetisMCUState *mcu = kinetis_mcu_get();
    CortexMState *cm_state = CORTEXM_MCU_STATE(mcu);

    KinetisFMCState *state = KINETIS_FMC_STATE(dev);
    // First thing first: get capabilities from MCU, needed everywhere.
    state->capabilities = mcu->capabilities;

    // Also keep a local pointer, to access them easier.
    const KinetisCapabilities *capabilities = state->capabilities;
    assert(capabilities != NULL);

    Object *obj = OBJECT(dev);

    const char *periph_name = "FMC";

    svd_set_peripheral_address_block(cm_state->svd_json, periph_name, obj);
    peripheral_create_memory_region(obj);

    // TODO: remove this if the peripheral is always enabled.
    char enabling_bit_name[KINETIS_RCC_SIZEOF_ENABLING_BITFIELD];

    switch (capabilities->family) {
    case KINETIS_FAMILY_K6:


            mk64f12_fmc_create_objects(obj, cm_state->svd_json, periph_name);

            // TODO: add actions.
            // cm_object_property_set_str(state->u.k6.fld.xxx.fff, "GGG", "follows");
            // cm_object_property_set_str(state->u.k6.fld.xxx.fff, "GGG", "cleared-by");

            // TODO: add callbacks.
            // peripheral_register_set_pre_read(state->k6.reg.xxx, &kinetis_fmc_xxx_pre_read_callback);
            // peripheral_register_set_post_read(state->k6.reg.xxx, &kinetis_fmc_xxx_post_read_callback);
            // peripheral_register_set_pre_read(state->k6.reg.xxx, &kinetis_fmc_xxx_pret_read_callback);
            // peripheral_register_set_post_write(state->k6.reg.xxx, &kinetis_fmc_xxx_post_write_callback);

            // TODO: add interrupts.

            // TODO: remove this if the peripheral is always enabled.
            snprintf(enabling_bit_name, sizeof(enabling_bit_name) - 1,
                DEVICE_PATH_KINETIS_RCC "/AHB1ENR/FMCEN");


        break;

    default:
        assert(false);
        break;
    }

    // TODO: remove this if the peripheral is always enabled.
    state->enabling_bit = OBJECT(cm_device_by_name(enabling_bit_name));

    peripheral_prepare_registers(obj);
}

static void kinetis_fmc_reset_callback(DeviceState *dev)
{
    qemu_log_function_name();

    // Call parent reset(); this will reset all children registers.
    cm_device_parent_reset(dev, TYPE_KINETIS_FMC);
}

static void kinetis_fmc_class_init_callback(ObjectClass *klass, void *data)
{
    DeviceClass *dc = DEVICE_CLASS(klass);

    dc->reset = kinetis_fmc_reset_callback;
    dc->realize = kinetis_fmc_realize_callback;

    // TODO: remove this if the peripheral is always enabled.
    PeripheralClass *per_class = PERIPHERAL_CLASS(klass);
    per_class->is_enabled = kinetis_fmc_is_enabled;
}

static const TypeInfo kinetis_fmc_type_info = {
    .name = TYPE_KINETIS_FMC,
    .parent = TYPE_KINETIS_FMC_PARENT,
    .instance_init = kinetis_fmc_instance_init_callback,
    .instance_size = sizeof(KinetisFMCState),
    .class_init = kinetis_fmc_class_init_callback,
    .class_size = sizeof(KinetisFMCClass) };

static void kinetis_fmc_register_types(void)
{
    type_register_static(&kinetis_fmc_type_info);
}

type_init(kinetis_fmc_register_types);

// ----------------------------------------------------------------------------
