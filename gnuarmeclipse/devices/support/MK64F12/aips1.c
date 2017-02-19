/*
 * Kinetis - AIPS (AIPS-Lite Bridge) emulation.
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

#include <hw/cortexm/kinetis/aips.h>
#include <hw/cortexm/kinetis/mcu.h>
#include <hw/cortexm/helper.h>
#include <hw/cortexm/svd.h>

// ----- Generated code -------------------------------------------------------
//
// ----- 8< ----- 8< -----  8< ----- 8< ----- 8< ----- 8< ----- 8< -----

// DO NOT EDIT! Automatically generated!
static void mk64f12_aips_create_objects(Object *obj, JSON_Object *svd, const char *name)
{
    KinetisAIPSState *state = KINETIS_AIPS_STATE(obj);

    JSON_Object *periph = svd_get_peripheral_by_name(svd, name);
    svd_add_peripheral_properties_and_children(obj, periph, svd);

    // Registers. 
    state->u.k6.reg.mpra = cm_object_get_child_by_name(obj, "MPRA");
    state->u.k6.reg.pacra = cm_object_get_child_by_name(obj, "PACRA");
    state->u.k6.reg.pacrb = cm_object_get_child_by_name(obj, "PACRB");
    state->u.k6.reg.pacrc = cm_object_get_child_by_name(obj, "PACRC");
    state->u.k6.reg.pacrd = cm_object_get_child_by_name(obj, "PACRD");
    state->u.k6.reg.pacre = cm_object_get_child_by_name(obj, "PACRE");
    state->u.k6.reg.pacrf = cm_object_get_child_by_name(obj, "PACRF");
    state->u.k6.reg.pacrg = cm_object_get_child_by_name(obj, "PACRG");
    state->u.k6.reg.pacrh = cm_object_get_child_by_name(obj, "PACRH");
    state->u.k6.reg.pacri = cm_object_get_child_by_name(obj, "PACRI");
    state->u.k6.reg.pacrj = cm_object_get_child_by_name(obj, "PACRJ");
    state->u.k6.reg.pacrk = cm_object_get_child_by_name(obj, "PACRK");
    state->u.k6.reg.pacrl = cm_object_get_child_by_name(obj, "PACRL");
    state->u.k6.reg.pacrm = cm_object_get_child_by_name(obj, "PACRM");
    state->u.k6.reg.pacrn = cm_object_get_child_by_name(obj, "PACRN");
    state->u.k6.reg.pacro = cm_object_get_child_by_name(obj, "PACRO");
    state->u.k6.reg.pacrp = cm_object_get_child_by_name(obj, "PACRP");
    state->u.k6.reg.pacru = cm_object_get_child_by_name(obj, "PACRU");

    // MPRA bitfields.
    state->u.k6.fld.mpra.mpl5 = cm_object_get_child_by_name(state->u.k6.reg.mpra, "MPL5");
    state->u.k6.fld.mpra.mtw5 = cm_object_get_child_by_name(state->u.k6.reg.mpra, "MTW5");
    state->u.k6.fld.mpra.mtr5 = cm_object_get_child_by_name(state->u.k6.reg.mpra, "MTR5");
    state->u.k6.fld.mpra.mpl4 = cm_object_get_child_by_name(state->u.k6.reg.mpra, "MPL4");
    state->u.k6.fld.mpra.mtw4 = cm_object_get_child_by_name(state->u.k6.reg.mpra, "MTW4");
    state->u.k6.fld.mpra.mtr4 = cm_object_get_child_by_name(state->u.k6.reg.mpra, "MTR4");
    state->u.k6.fld.mpra.mpl3 = cm_object_get_child_by_name(state->u.k6.reg.mpra, "MPL3");
    state->u.k6.fld.mpra.mtw3 = cm_object_get_child_by_name(state->u.k6.reg.mpra, "MTW3");
    state->u.k6.fld.mpra.mtr3 = cm_object_get_child_by_name(state->u.k6.reg.mpra, "MTR3");
    state->u.k6.fld.mpra.mpl2 = cm_object_get_child_by_name(state->u.k6.reg.mpra, "MPL2");
    state->u.k6.fld.mpra.mtw2 = cm_object_get_child_by_name(state->u.k6.reg.mpra, "MTW2");
    state->u.k6.fld.mpra.mtr2 = cm_object_get_child_by_name(state->u.k6.reg.mpra, "MTR2");
    state->u.k6.fld.mpra.mpl1 = cm_object_get_child_by_name(state->u.k6.reg.mpra, "MPL1");
    state->u.k6.fld.mpra.mtw1 = cm_object_get_child_by_name(state->u.k6.reg.mpra, "MTW1");
    state->u.k6.fld.mpra.mtr1 = cm_object_get_child_by_name(state->u.k6.reg.mpra, "MTR1");
    state->u.k6.fld.mpra.mpl0 = cm_object_get_child_by_name(state->u.k6.reg.mpra, "MPL0");
    state->u.k6.fld.mpra.mtw0 = cm_object_get_child_by_name(state->u.k6.reg.mpra, "MTW0");
    state->u.k6.fld.mpra.mtr0 = cm_object_get_child_by_name(state->u.k6.reg.mpra, "MTR0");

    // PACRA bitfields.
    state->u.k6.fld.pacra.tp7 = cm_object_get_child_by_name(state->u.k6.reg.pacra, "TP7");
    state->u.k6.fld.pacra.wp7 = cm_object_get_child_by_name(state->u.k6.reg.pacra, "WP7");
    state->u.k6.fld.pacra.sp7 = cm_object_get_child_by_name(state->u.k6.reg.pacra, "SP7");
    state->u.k6.fld.pacra.tp6 = cm_object_get_child_by_name(state->u.k6.reg.pacra, "TP6");
    state->u.k6.fld.pacra.wp6 = cm_object_get_child_by_name(state->u.k6.reg.pacra, "WP6");
    state->u.k6.fld.pacra.sp6 = cm_object_get_child_by_name(state->u.k6.reg.pacra, "SP6");
    state->u.k6.fld.pacra.tp5 = cm_object_get_child_by_name(state->u.k6.reg.pacra, "TP5");
    state->u.k6.fld.pacra.wp5 = cm_object_get_child_by_name(state->u.k6.reg.pacra, "WP5");
    state->u.k6.fld.pacra.sp5 = cm_object_get_child_by_name(state->u.k6.reg.pacra, "SP5");
    state->u.k6.fld.pacra.tp4 = cm_object_get_child_by_name(state->u.k6.reg.pacra, "TP4");
    state->u.k6.fld.pacra.wp4 = cm_object_get_child_by_name(state->u.k6.reg.pacra, "WP4");
    state->u.k6.fld.pacra.sp4 = cm_object_get_child_by_name(state->u.k6.reg.pacra, "SP4");
    state->u.k6.fld.pacra.tp3 = cm_object_get_child_by_name(state->u.k6.reg.pacra, "TP3");
    state->u.k6.fld.pacra.wp3 = cm_object_get_child_by_name(state->u.k6.reg.pacra, "WP3");
    state->u.k6.fld.pacra.sp3 = cm_object_get_child_by_name(state->u.k6.reg.pacra, "SP3");
    state->u.k6.fld.pacra.tp2 = cm_object_get_child_by_name(state->u.k6.reg.pacra, "TP2");
    state->u.k6.fld.pacra.wp2 = cm_object_get_child_by_name(state->u.k6.reg.pacra, "WP2");
    state->u.k6.fld.pacra.sp2 = cm_object_get_child_by_name(state->u.k6.reg.pacra, "SP2");
    state->u.k6.fld.pacra.tp1 = cm_object_get_child_by_name(state->u.k6.reg.pacra, "TP1");
    state->u.k6.fld.pacra.wp1 = cm_object_get_child_by_name(state->u.k6.reg.pacra, "WP1");
    state->u.k6.fld.pacra.sp1 = cm_object_get_child_by_name(state->u.k6.reg.pacra, "SP1");
    state->u.k6.fld.pacra.tp0 = cm_object_get_child_by_name(state->u.k6.reg.pacra, "TP0");
    state->u.k6.fld.pacra.wp0 = cm_object_get_child_by_name(state->u.k6.reg.pacra, "WP0");
    state->u.k6.fld.pacra.sp0 = cm_object_get_child_by_name(state->u.k6.reg.pacra, "SP0");

    // PACRB bitfields.
    state->u.k6.fld.pacrb.tp7 = cm_object_get_child_by_name(state->u.k6.reg.pacrb, "TP7");
    state->u.k6.fld.pacrb.wp7 = cm_object_get_child_by_name(state->u.k6.reg.pacrb, "WP7");
    state->u.k6.fld.pacrb.sp7 = cm_object_get_child_by_name(state->u.k6.reg.pacrb, "SP7");
    state->u.k6.fld.pacrb.tp6 = cm_object_get_child_by_name(state->u.k6.reg.pacrb, "TP6");
    state->u.k6.fld.pacrb.wp6 = cm_object_get_child_by_name(state->u.k6.reg.pacrb, "WP6");
    state->u.k6.fld.pacrb.sp6 = cm_object_get_child_by_name(state->u.k6.reg.pacrb, "SP6");
    state->u.k6.fld.pacrb.tp5 = cm_object_get_child_by_name(state->u.k6.reg.pacrb, "TP5");
    state->u.k6.fld.pacrb.wp5 = cm_object_get_child_by_name(state->u.k6.reg.pacrb, "WP5");
    state->u.k6.fld.pacrb.sp5 = cm_object_get_child_by_name(state->u.k6.reg.pacrb, "SP5");
    state->u.k6.fld.pacrb.tp4 = cm_object_get_child_by_name(state->u.k6.reg.pacrb, "TP4");
    state->u.k6.fld.pacrb.wp4 = cm_object_get_child_by_name(state->u.k6.reg.pacrb, "WP4");
    state->u.k6.fld.pacrb.sp4 = cm_object_get_child_by_name(state->u.k6.reg.pacrb, "SP4");
    state->u.k6.fld.pacrb.tp3 = cm_object_get_child_by_name(state->u.k6.reg.pacrb, "TP3");
    state->u.k6.fld.pacrb.wp3 = cm_object_get_child_by_name(state->u.k6.reg.pacrb, "WP3");
    state->u.k6.fld.pacrb.sp3 = cm_object_get_child_by_name(state->u.k6.reg.pacrb, "SP3");
    state->u.k6.fld.pacrb.tp2 = cm_object_get_child_by_name(state->u.k6.reg.pacrb, "TP2");
    state->u.k6.fld.pacrb.wp2 = cm_object_get_child_by_name(state->u.k6.reg.pacrb, "WP2");
    state->u.k6.fld.pacrb.sp2 = cm_object_get_child_by_name(state->u.k6.reg.pacrb, "SP2");
    state->u.k6.fld.pacrb.tp1 = cm_object_get_child_by_name(state->u.k6.reg.pacrb, "TP1");
    state->u.k6.fld.pacrb.wp1 = cm_object_get_child_by_name(state->u.k6.reg.pacrb, "WP1");
    state->u.k6.fld.pacrb.sp1 = cm_object_get_child_by_name(state->u.k6.reg.pacrb, "SP1");
    state->u.k6.fld.pacrb.tp0 = cm_object_get_child_by_name(state->u.k6.reg.pacrb, "TP0");
    state->u.k6.fld.pacrb.wp0 = cm_object_get_child_by_name(state->u.k6.reg.pacrb, "WP0");
    state->u.k6.fld.pacrb.sp0 = cm_object_get_child_by_name(state->u.k6.reg.pacrb, "SP0");

    // PACRC bitfields.
    state->u.k6.fld.pacrc.tp7 = cm_object_get_child_by_name(state->u.k6.reg.pacrc, "TP7");
    state->u.k6.fld.pacrc.wp7 = cm_object_get_child_by_name(state->u.k6.reg.pacrc, "WP7");
    state->u.k6.fld.pacrc.sp7 = cm_object_get_child_by_name(state->u.k6.reg.pacrc, "SP7");
    state->u.k6.fld.pacrc.tp6 = cm_object_get_child_by_name(state->u.k6.reg.pacrc, "TP6");
    state->u.k6.fld.pacrc.wp6 = cm_object_get_child_by_name(state->u.k6.reg.pacrc, "WP6");
    state->u.k6.fld.pacrc.sp6 = cm_object_get_child_by_name(state->u.k6.reg.pacrc, "SP6");
    state->u.k6.fld.pacrc.tp5 = cm_object_get_child_by_name(state->u.k6.reg.pacrc, "TP5");
    state->u.k6.fld.pacrc.wp5 = cm_object_get_child_by_name(state->u.k6.reg.pacrc, "WP5");
    state->u.k6.fld.pacrc.sp5 = cm_object_get_child_by_name(state->u.k6.reg.pacrc, "SP5");
    state->u.k6.fld.pacrc.tp4 = cm_object_get_child_by_name(state->u.k6.reg.pacrc, "TP4");
    state->u.k6.fld.pacrc.wp4 = cm_object_get_child_by_name(state->u.k6.reg.pacrc, "WP4");
    state->u.k6.fld.pacrc.sp4 = cm_object_get_child_by_name(state->u.k6.reg.pacrc, "SP4");
    state->u.k6.fld.pacrc.tp3 = cm_object_get_child_by_name(state->u.k6.reg.pacrc, "TP3");
    state->u.k6.fld.pacrc.wp3 = cm_object_get_child_by_name(state->u.k6.reg.pacrc, "WP3");
    state->u.k6.fld.pacrc.sp3 = cm_object_get_child_by_name(state->u.k6.reg.pacrc, "SP3");
    state->u.k6.fld.pacrc.tp2 = cm_object_get_child_by_name(state->u.k6.reg.pacrc, "TP2");
    state->u.k6.fld.pacrc.wp2 = cm_object_get_child_by_name(state->u.k6.reg.pacrc, "WP2");
    state->u.k6.fld.pacrc.sp2 = cm_object_get_child_by_name(state->u.k6.reg.pacrc, "SP2");
    state->u.k6.fld.pacrc.tp1 = cm_object_get_child_by_name(state->u.k6.reg.pacrc, "TP1");
    state->u.k6.fld.pacrc.wp1 = cm_object_get_child_by_name(state->u.k6.reg.pacrc, "WP1");
    state->u.k6.fld.pacrc.sp1 = cm_object_get_child_by_name(state->u.k6.reg.pacrc, "SP1");
    state->u.k6.fld.pacrc.tp0 = cm_object_get_child_by_name(state->u.k6.reg.pacrc, "TP0");
    state->u.k6.fld.pacrc.wp0 = cm_object_get_child_by_name(state->u.k6.reg.pacrc, "WP0");
    state->u.k6.fld.pacrc.sp0 = cm_object_get_child_by_name(state->u.k6.reg.pacrc, "SP0");

    // PACRD bitfields.
    state->u.k6.fld.pacrd.tp7 = cm_object_get_child_by_name(state->u.k6.reg.pacrd, "TP7");
    state->u.k6.fld.pacrd.wp7 = cm_object_get_child_by_name(state->u.k6.reg.pacrd, "WP7");
    state->u.k6.fld.pacrd.sp7 = cm_object_get_child_by_name(state->u.k6.reg.pacrd, "SP7");
    state->u.k6.fld.pacrd.tp6 = cm_object_get_child_by_name(state->u.k6.reg.pacrd, "TP6");
    state->u.k6.fld.pacrd.wp6 = cm_object_get_child_by_name(state->u.k6.reg.pacrd, "WP6");
    state->u.k6.fld.pacrd.sp6 = cm_object_get_child_by_name(state->u.k6.reg.pacrd, "SP6");
    state->u.k6.fld.pacrd.tp5 = cm_object_get_child_by_name(state->u.k6.reg.pacrd, "TP5");
    state->u.k6.fld.pacrd.wp5 = cm_object_get_child_by_name(state->u.k6.reg.pacrd, "WP5");
    state->u.k6.fld.pacrd.sp5 = cm_object_get_child_by_name(state->u.k6.reg.pacrd, "SP5");
    state->u.k6.fld.pacrd.tp4 = cm_object_get_child_by_name(state->u.k6.reg.pacrd, "TP4");
    state->u.k6.fld.pacrd.wp4 = cm_object_get_child_by_name(state->u.k6.reg.pacrd, "WP4");
    state->u.k6.fld.pacrd.sp4 = cm_object_get_child_by_name(state->u.k6.reg.pacrd, "SP4");
    state->u.k6.fld.pacrd.tp3 = cm_object_get_child_by_name(state->u.k6.reg.pacrd, "TP3");
    state->u.k6.fld.pacrd.wp3 = cm_object_get_child_by_name(state->u.k6.reg.pacrd, "WP3");
    state->u.k6.fld.pacrd.sp3 = cm_object_get_child_by_name(state->u.k6.reg.pacrd, "SP3");
    state->u.k6.fld.pacrd.tp2 = cm_object_get_child_by_name(state->u.k6.reg.pacrd, "TP2");
    state->u.k6.fld.pacrd.wp2 = cm_object_get_child_by_name(state->u.k6.reg.pacrd, "WP2");
    state->u.k6.fld.pacrd.sp2 = cm_object_get_child_by_name(state->u.k6.reg.pacrd, "SP2");
    state->u.k6.fld.pacrd.tp1 = cm_object_get_child_by_name(state->u.k6.reg.pacrd, "TP1");
    state->u.k6.fld.pacrd.wp1 = cm_object_get_child_by_name(state->u.k6.reg.pacrd, "WP1");
    state->u.k6.fld.pacrd.sp1 = cm_object_get_child_by_name(state->u.k6.reg.pacrd, "SP1");
    state->u.k6.fld.pacrd.tp0 = cm_object_get_child_by_name(state->u.k6.reg.pacrd, "TP0");
    state->u.k6.fld.pacrd.wp0 = cm_object_get_child_by_name(state->u.k6.reg.pacrd, "WP0");
    state->u.k6.fld.pacrd.sp0 = cm_object_get_child_by_name(state->u.k6.reg.pacrd, "SP0");

    // PACRE bitfields.
    state->u.k6.fld.pacre.tp7 = cm_object_get_child_by_name(state->u.k6.reg.pacre, "TP7");
    state->u.k6.fld.pacre.wp7 = cm_object_get_child_by_name(state->u.k6.reg.pacre, "WP7");
    state->u.k6.fld.pacre.sp7 = cm_object_get_child_by_name(state->u.k6.reg.pacre, "SP7");
    state->u.k6.fld.pacre.tp6 = cm_object_get_child_by_name(state->u.k6.reg.pacre, "TP6");
    state->u.k6.fld.pacre.wp6 = cm_object_get_child_by_name(state->u.k6.reg.pacre, "WP6");
    state->u.k6.fld.pacre.sp6 = cm_object_get_child_by_name(state->u.k6.reg.pacre, "SP6");
    state->u.k6.fld.pacre.tp5 = cm_object_get_child_by_name(state->u.k6.reg.pacre, "TP5");
    state->u.k6.fld.pacre.wp5 = cm_object_get_child_by_name(state->u.k6.reg.pacre, "WP5");
    state->u.k6.fld.pacre.sp5 = cm_object_get_child_by_name(state->u.k6.reg.pacre, "SP5");
    state->u.k6.fld.pacre.tp4 = cm_object_get_child_by_name(state->u.k6.reg.pacre, "TP4");
    state->u.k6.fld.pacre.wp4 = cm_object_get_child_by_name(state->u.k6.reg.pacre, "WP4");
    state->u.k6.fld.pacre.sp4 = cm_object_get_child_by_name(state->u.k6.reg.pacre, "SP4");
    state->u.k6.fld.pacre.tp3 = cm_object_get_child_by_name(state->u.k6.reg.pacre, "TP3");
    state->u.k6.fld.pacre.wp3 = cm_object_get_child_by_name(state->u.k6.reg.pacre, "WP3");
    state->u.k6.fld.pacre.sp3 = cm_object_get_child_by_name(state->u.k6.reg.pacre, "SP3");
    state->u.k6.fld.pacre.tp2 = cm_object_get_child_by_name(state->u.k6.reg.pacre, "TP2");
    state->u.k6.fld.pacre.wp2 = cm_object_get_child_by_name(state->u.k6.reg.pacre, "WP2");
    state->u.k6.fld.pacre.sp2 = cm_object_get_child_by_name(state->u.k6.reg.pacre, "SP2");
    state->u.k6.fld.pacre.tp1 = cm_object_get_child_by_name(state->u.k6.reg.pacre, "TP1");
    state->u.k6.fld.pacre.wp1 = cm_object_get_child_by_name(state->u.k6.reg.pacre, "WP1");
    state->u.k6.fld.pacre.sp1 = cm_object_get_child_by_name(state->u.k6.reg.pacre, "SP1");
    state->u.k6.fld.pacre.tp0 = cm_object_get_child_by_name(state->u.k6.reg.pacre, "TP0");
    state->u.k6.fld.pacre.wp0 = cm_object_get_child_by_name(state->u.k6.reg.pacre, "WP0");
    state->u.k6.fld.pacre.sp0 = cm_object_get_child_by_name(state->u.k6.reg.pacre, "SP0");

    // PACRF bitfields.
    state->u.k6.fld.pacrf.tp7 = cm_object_get_child_by_name(state->u.k6.reg.pacrf, "TP7");
    state->u.k6.fld.pacrf.wp7 = cm_object_get_child_by_name(state->u.k6.reg.pacrf, "WP7");
    state->u.k6.fld.pacrf.sp7 = cm_object_get_child_by_name(state->u.k6.reg.pacrf, "SP7");
    state->u.k6.fld.pacrf.tp6 = cm_object_get_child_by_name(state->u.k6.reg.pacrf, "TP6");
    state->u.k6.fld.pacrf.wp6 = cm_object_get_child_by_name(state->u.k6.reg.pacrf, "WP6");
    state->u.k6.fld.pacrf.sp6 = cm_object_get_child_by_name(state->u.k6.reg.pacrf, "SP6");
    state->u.k6.fld.pacrf.tp5 = cm_object_get_child_by_name(state->u.k6.reg.pacrf, "TP5");
    state->u.k6.fld.pacrf.wp5 = cm_object_get_child_by_name(state->u.k6.reg.pacrf, "WP5");
    state->u.k6.fld.pacrf.sp5 = cm_object_get_child_by_name(state->u.k6.reg.pacrf, "SP5");
    state->u.k6.fld.pacrf.tp4 = cm_object_get_child_by_name(state->u.k6.reg.pacrf, "TP4");
    state->u.k6.fld.pacrf.wp4 = cm_object_get_child_by_name(state->u.k6.reg.pacrf, "WP4");
    state->u.k6.fld.pacrf.sp4 = cm_object_get_child_by_name(state->u.k6.reg.pacrf, "SP4");
    state->u.k6.fld.pacrf.tp3 = cm_object_get_child_by_name(state->u.k6.reg.pacrf, "TP3");
    state->u.k6.fld.pacrf.wp3 = cm_object_get_child_by_name(state->u.k6.reg.pacrf, "WP3");
    state->u.k6.fld.pacrf.sp3 = cm_object_get_child_by_name(state->u.k6.reg.pacrf, "SP3");
    state->u.k6.fld.pacrf.tp2 = cm_object_get_child_by_name(state->u.k6.reg.pacrf, "TP2");
    state->u.k6.fld.pacrf.wp2 = cm_object_get_child_by_name(state->u.k6.reg.pacrf, "WP2");
    state->u.k6.fld.pacrf.sp2 = cm_object_get_child_by_name(state->u.k6.reg.pacrf, "SP2");
    state->u.k6.fld.pacrf.tp1 = cm_object_get_child_by_name(state->u.k6.reg.pacrf, "TP1");
    state->u.k6.fld.pacrf.wp1 = cm_object_get_child_by_name(state->u.k6.reg.pacrf, "WP1");
    state->u.k6.fld.pacrf.sp1 = cm_object_get_child_by_name(state->u.k6.reg.pacrf, "SP1");
    state->u.k6.fld.pacrf.tp0 = cm_object_get_child_by_name(state->u.k6.reg.pacrf, "TP0");
    state->u.k6.fld.pacrf.wp0 = cm_object_get_child_by_name(state->u.k6.reg.pacrf, "WP0");
    state->u.k6.fld.pacrf.sp0 = cm_object_get_child_by_name(state->u.k6.reg.pacrf, "SP0");

    // PACRG bitfields.
    state->u.k6.fld.pacrg.tp7 = cm_object_get_child_by_name(state->u.k6.reg.pacrg, "TP7");
    state->u.k6.fld.pacrg.wp7 = cm_object_get_child_by_name(state->u.k6.reg.pacrg, "WP7");
    state->u.k6.fld.pacrg.sp7 = cm_object_get_child_by_name(state->u.k6.reg.pacrg, "SP7");
    state->u.k6.fld.pacrg.tp6 = cm_object_get_child_by_name(state->u.k6.reg.pacrg, "TP6");
    state->u.k6.fld.pacrg.wp6 = cm_object_get_child_by_name(state->u.k6.reg.pacrg, "WP6");
    state->u.k6.fld.pacrg.sp6 = cm_object_get_child_by_name(state->u.k6.reg.pacrg, "SP6");
    state->u.k6.fld.pacrg.tp5 = cm_object_get_child_by_name(state->u.k6.reg.pacrg, "TP5");
    state->u.k6.fld.pacrg.wp5 = cm_object_get_child_by_name(state->u.k6.reg.pacrg, "WP5");
    state->u.k6.fld.pacrg.sp5 = cm_object_get_child_by_name(state->u.k6.reg.pacrg, "SP5");
    state->u.k6.fld.pacrg.tp4 = cm_object_get_child_by_name(state->u.k6.reg.pacrg, "TP4");
    state->u.k6.fld.pacrg.wp4 = cm_object_get_child_by_name(state->u.k6.reg.pacrg, "WP4");
    state->u.k6.fld.pacrg.sp4 = cm_object_get_child_by_name(state->u.k6.reg.pacrg, "SP4");
    state->u.k6.fld.pacrg.tp3 = cm_object_get_child_by_name(state->u.k6.reg.pacrg, "TP3");
    state->u.k6.fld.pacrg.wp3 = cm_object_get_child_by_name(state->u.k6.reg.pacrg, "WP3");
    state->u.k6.fld.pacrg.sp3 = cm_object_get_child_by_name(state->u.k6.reg.pacrg, "SP3");
    state->u.k6.fld.pacrg.tp2 = cm_object_get_child_by_name(state->u.k6.reg.pacrg, "TP2");
    state->u.k6.fld.pacrg.wp2 = cm_object_get_child_by_name(state->u.k6.reg.pacrg, "WP2");
    state->u.k6.fld.pacrg.sp2 = cm_object_get_child_by_name(state->u.k6.reg.pacrg, "SP2");
    state->u.k6.fld.pacrg.tp1 = cm_object_get_child_by_name(state->u.k6.reg.pacrg, "TP1");
    state->u.k6.fld.pacrg.wp1 = cm_object_get_child_by_name(state->u.k6.reg.pacrg, "WP1");
    state->u.k6.fld.pacrg.sp1 = cm_object_get_child_by_name(state->u.k6.reg.pacrg, "SP1");
    state->u.k6.fld.pacrg.tp0 = cm_object_get_child_by_name(state->u.k6.reg.pacrg, "TP0");
    state->u.k6.fld.pacrg.wp0 = cm_object_get_child_by_name(state->u.k6.reg.pacrg, "WP0");
    state->u.k6.fld.pacrg.sp0 = cm_object_get_child_by_name(state->u.k6.reg.pacrg, "SP0");

    // PACRH bitfields.
    state->u.k6.fld.pacrh.tp7 = cm_object_get_child_by_name(state->u.k6.reg.pacrh, "TP7");
    state->u.k6.fld.pacrh.wp7 = cm_object_get_child_by_name(state->u.k6.reg.pacrh, "WP7");
    state->u.k6.fld.pacrh.sp7 = cm_object_get_child_by_name(state->u.k6.reg.pacrh, "SP7");
    state->u.k6.fld.pacrh.tp6 = cm_object_get_child_by_name(state->u.k6.reg.pacrh, "TP6");
    state->u.k6.fld.pacrh.wp6 = cm_object_get_child_by_name(state->u.k6.reg.pacrh, "WP6");
    state->u.k6.fld.pacrh.sp6 = cm_object_get_child_by_name(state->u.k6.reg.pacrh, "SP6");
    state->u.k6.fld.pacrh.tp5 = cm_object_get_child_by_name(state->u.k6.reg.pacrh, "TP5");
    state->u.k6.fld.pacrh.wp5 = cm_object_get_child_by_name(state->u.k6.reg.pacrh, "WP5");
    state->u.k6.fld.pacrh.sp5 = cm_object_get_child_by_name(state->u.k6.reg.pacrh, "SP5");
    state->u.k6.fld.pacrh.tp4 = cm_object_get_child_by_name(state->u.k6.reg.pacrh, "TP4");
    state->u.k6.fld.pacrh.wp4 = cm_object_get_child_by_name(state->u.k6.reg.pacrh, "WP4");
    state->u.k6.fld.pacrh.sp4 = cm_object_get_child_by_name(state->u.k6.reg.pacrh, "SP4");
    state->u.k6.fld.pacrh.tp3 = cm_object_get_child_by_name(state->u.k6.reg.pacrh, "TP3");
    state->u.k6.fld.pacrh.wp3 = cm_object_get_child_by_name(state->u.k6.reg.pacrh, "WP3");
    state->u.k6.fld.pacrh.sp3 = cm_object_get_child_by_name(state->u.k6.reg.pacrh, "SP3");
    state->u.k6.fld.pacrh.tp2 = cm_object_get_child_by_name(state->u.k6.reg.pacrh, "TP2");
    state->u.k6.fld.pacrh.wp2 = cm_object_get_child_by_name(state->u.k6.reg.pacrh, "WP2");
    state->u.k6.fld.pacrh.sp2 = cm_object_get_child_by_name(state->u.k6.reg.pacrh, "SP2");
    state->u.k6.fld.pacrh.tp1 = cm_object_get_child_by_name(state->u.k6.reg.pacrh, "TP1");
    state->u.k6.fld.pacrh.wp1 = cm_object_get_child_by_name(state->u.k6.reg.pacrh, "WP1");
    state->u.k6.fld.pacrh.sp1 = cm_object_get_child_by_name(state->u.k6.reg.pacrh, "SP1");
    state->u.k6.fld.pacrh.tp0 = cm_object_get_child_by_name(state->u.k6.reg.pacrh, "TP0");
    state->u.k6.fld.pacrh.wp0 = cm_object_get_child_by_name(state->u.k6.reg.pacrh, "WP0");
    state->u.k6.fld.pacrh.sp0 = cm_object_get_child_by_name(state->u.k6.reg.pacrh, "SP0");

    // PACRI bitfields.
    state->u.k6.fld.pacri.tp7 = cm_object_get_child_by_name(state->u.k6.reg.pacri, "TP7");
    state->u.k6.fld.pacri.wp7 = cm_object_get_child_by_name(state->u.k6.reg.pacri, "WP7");
    state->u.k6.fld.pacri.sp7 = cm_object_get_child_by_name(state->u.k6.reg.pacri, "SP7");
    state->u.k6.fld.pacri.tp6 = cm_object_get_child_by_name(state->u.k6.reg.pacri, "TP6");
    state->u.k6.fld.pacri.wp6 = cm_object_get_child_by_name(state->u.k6.reg.pacri, "WP6");
    state->u.k6.fld.pacri.sp6 = cm_object_get_child_by_name(state->u.k6.reg.pacri, "SP6");
    state->u.k6.fld.pacri.tp5 = cm_object_get_child_by_name(state->u.k6.reg.pacri, "TP5");
    state->u.k6.fld.pacri.wp5 = cm_object_get_child_by_name(state->u.k6.reg.pacri, "WP5");
    state->u.k6.fld.pacri.sp5 = cm_object_get_child_by_name(state->u.k6.reg.pacri, "SP5");
    state->u.k6.fld.pacri.tp4 = cm_object_get_child_by_name(state->u.k6.reg.pacri, "TP4");
    state->u.k6.fld.pacri.wp4 = cm_object_get_child_by_name(state->u.k6.reg.pacri, "WP4");
    state->u.k6.fld.pacri.sp4 = cm_object_get_child_by_name(state->u.k6.reg.pacri, "SP4");
    state->u.k6.fld.pacri.tp3 = cm_object_get_child_by_name(state->u.k6.reg.pacri, "TP3");
    state->u.k6.fld.pacri.wp3 = cm_object_get_child_by_name(state->u.k6.reg.pacri, "WP3");
    state->u.k6.fld.pacri.sp3 = cm_object_get_child_by_name(state->u.k6.reg.pacri, "SP3");
    state->u.k6.fld.pacri.tp2 = cm_object_get_child_by_name(state->u.k6.reg.pacri, "TP2");
    state->u.k6.fld.pacri.wp2 = cm_object_get_child_by_name(state->u.k6.reg.pacri, "WP2");
    state->u.k6.fld.pacri.sp2 = cm_object_get_child_by_name(state->u.k6.reg.pacri, "SP2");
    state->u.k6.fld.pacri.tp1 = cm_object_get_child_by_name(state->u.k6.reg.pacri, "TP1");
    state->u.k6.fld.pacri.wp1 = cm_object_get_child_by_name(state->u.k6.reg.pacri, "WP1");
    state->u.k6.fld.pacri.sp1 = cm_object_get_child_by_name(state->u.k6.reg.pacri, "SP1");
    state->u.k6.fld.pacri.tp0 = cm_object_get_child_by_name(state->u.k6.reg.pacri, "TP0");
    state->u.k6.fld.pacri.wp0 = cm_object_get_child_by_name(state->u.k6.reg.pacri, "WP0");
    state->u.k6.fld.pacri.sp0 = cm_object_get_child_by_name(state->u.k6.reg.pacri, "SP0");

    // PACRJ bitfields.
    state->u.k6.fld.pacrj.tp7 = cm_object_get_child_by_name(state->u.k6.reg.pacrj, "TP7");
    state->u.k6.fld.pacrj.wp7 = cm_object_get_child_by_name(state->u.k6.reg.pacrj, "WP7");
    state->u.k6.fld.pacrj.sp7 = cm_object_get_child_by_name(state->u.k6.reg.pacrj, "SP7");
    state->u.k6.fld.pacrj.tp6 = cm_object_get_child_by_name(state->u.k6.reg.pacrj, "TP6");
    state->u.k6.fld.pacrj.wp6 = cm_object_get_child_by_name(state->u.k6.reg.pacrj, "WP6");
    state->u.k6.fld.pacrj.sp6 = cm_object_get_child_by_name(state->u.k6.reg.pacrj, "SP6");
    state->u.k6.fld.pacrj.tp5 = cm_object_get_child_by_name(state->u.k6.reg.pacrj, "TP5");
    state->u.k6.fld.pacrj.wp5 = cm_object_get_child_by_name(state->u.k6.reg.pacrj, "WP5");
    state->u.k6.fld.pacrj.sp5 = cm_object_get_child_by_name(state->u.k6.reg.pacrj, "SP5");
    state->u.k6.fld.pacrj.tp4 = cm_object_get_child_by_name(state->u.k6.reg.pacrj, "TP4");
    state->u.k6.fld.pacrj.wp4 = cm_object_get_child_by_name(state->u.k6.reg.pacrj, "WP4");
    state->u.k6.fld.pacrj.sp4 = cm_object_get_child_by_name(state->u.k6.reg.pacrj, "SP4");
    state->u.k6.fld.pacrj.tp3 = cm_object_get_child_by_name(state->u.k6.reg.pacrj, "TP3");
    state->u.k6.fld.pacrj.wp3 = cm_object_get_child_by_name(state->u.k6.reg.pacrj, "WP3");
    state->u.k6.fld.pacrj.sp3 = cm_object_get_child_by_name(state->u.k6.reg.pacrj, "SP3");
    state->u.k6.fld.pacrj.tp2 = cm_object_get_child_by_name(state->u.k6.reg.pacrj, "TP2");
    state->u.k6.fld.pacrj.wp2 = cm_object_get_child_by_name(state->u.k6.reg.pacrj, "WP2");
    state->u.k6.fld.pacrj.sp2 = cm_object_get_child_by_name(state->u.k6.reg.pacrj, "SP2");
    state->u.k6.fld.pacrj.tp1 = cm_object_get_child_by_name(state->u.k6.reg.pacrj, "TP1");
    state->u.k6.fld.pacrj.wp1 = cm_object_get_child_by_name(state->u.k6.reg.pacrj, "WP1");
    state->u.k6.fld.pacrj.sp1 = cm_object_get_child_by_name(state->u.k6.reg.pacrj, "SP1");
    state->u.k6.fld.pacrj.tp0 = cm_object_get_child_by_name(state->u.k6.reg.pacrj, "TP0");
    state->u.k6.fld.pacrj.wp0 = cm_object_get_child_by_name(state->u.k6.reg.pacrj, "WP0");
    state->u.k6.fld.pacrj.sp0 = cm_object_get_child_by_name(state->u.k6.reg.pacrj, "SP0");

    // PACRK bitfields.
    state->u.k6.fld.pacrk.tp7 = cm_object_get_child_by_name(state->u.k6.reg.pacrk, "TP7");
    state->u.k6.fld.pacrk.wp7 = cm_object_get_child_by_name(state->u.k6.reg.pacrk, "WP7");
    state->u.k6.fld.pacrk.sp7 = cm_object_get_child_by_name(state->u.k6.reg.pacrk, "SP7");
    state->u.k6.fld.pacrk.tp6 = cm_object_get_child_by_name(state->u.k6.reg.pacrk, "TP6");
    state->u.k6.fld.pacrk.wp6 = cm_object_get_child_by_name(state->u.k6.reg.pacrk, "WP6");
    state->u.k6.fld.pacrk.sp6 = cm_object_get_child_by_name(state->u.k6.reg.pacrk, "SP6");
    state->u.k6.fld.pacrk.tp5 = cm_object_get_child_by_name(state->u.k6.reg.pacrk, "TP5");
    state->u.k6.fld.pacrk.wp5 = cm_object_get_child_by_name(state->u.k6.reg.pacrk, "WP5");
    state->u.k6.fld.pacrk.sp5 = cm_object_get_child_by_name(state->u.k6.reg.pacrk, "SP5");
    state->u.k6.fld.pacrk.tp4 = cm_object_get_child_by_name(state->u.k6.reg.pacrk, "TP4");
    state->u.k6.fld.pacrk.wp4 = cm_object_get_child_by_name(state->u.k6.reg.pacrk, "WP4");
    state->u.k6.fld.pacrk.sp4 = cm_object_get_child_by_name(state->u.k6.reg.pacrk, "SP4");
    state->u.k6.fld.pacrk.tp3 = cm_object_get_child_by_name(state->u.k6.reg.pacrk, "TP3");
    state->u.k6.fld.pacrk.wp3 = cm_object_get_child_by_name(state->u.k6.reg.pacrk, "WP3");
    state->u.k6.fld.pacrk.sp3 = cm_object_get_child_by_name(state->u.k6.reg.pacrk, "SP3");
    state->u.k6.fld.pacrk.tp2 = cm_object_get_child_by_name(state->u.k6.reg.pacrk, "TP2");
    state->u.k6.fld.pacrk.wp2 = cm_object_get_child_by_name(state->u.k6.reg.pacrk, "WP2");
    state->u.k6.fld.pacrk.sp2 = cm_object_get_child_by_name(state->u.k6.reg.pacrk, "SP2");
    state->u.k6.fld.pacrk.tp1 = cm_object_get_child_by_name(state->u.k6.reg.pacrk, "TP1");
    state->u.k6.fld.pacrk.wp1 = cm_object_get_child_by_name(state->u.k6.reg.pacrk, "WP1");
    state->u.k6.fld.pacrk.sp1 = cm_object_get_child_by_name(state->u.k6.reg.pacrk, "SP1");
    state->u.k6.fld.pacrk.tp0 = cm_object_get_child_by_name(state->u.k6.reg.pacrk, "TP0");
    state->u.k6.fld.pacrk.wp0 = cm_object_get_child_by_name(state->u.k6.reg.pacrk, "WP0");
    state->u.k6.fld.pacrk.sp0 = cm_object_get_child_by_name(state->u.k6.reg.pacrk, "SP0");

    // PACRL bitfields.
    state->u.k6.fld.pacrl.tp7 = cm_object_get_child_by_name(state->u.k6.reg.pacrl, "TP7");
    state->u.k6.fld.pacrl.wp7 = cm_object_get_child_by_name(state->u.k6.reg.pacrl, "WP7");
    state->u.k6.fld.pacrl.sp7 = cm_object_get_child_by_name(state->u.k6.reg.pacrl, "SP7");
    state->u.k6.fld.pacrl.tp6 = cm_object_get_child_by_name(state->u.k6.reg.pacrl, "TP6");
    state->u.k6.fld.pacrl.wp6 = cm_object_get_child_by_name(state->u.k6.reg.pacrl, "WP6");
    state->u.k6.fld.pacrl.sp6 = cm_object_get_child_by_name(state->u.k6.reg.pacrl, "SP6");
    state->u.k6.fld.pacrl.tp5 = cm_object_get_child_by_name(state->u.k6.reg.pacrl, "TP5");
    state->u.k6.fld.pacrl.wp5 = cm_object_get_child_by_name(state->u.k6.reg.pacrl, "WP5");
    state->u.k6.fld.pacrl.sp5 = cm_object_get_child_by_name(state->u.k6.reg.pacrl, "SP5");
    state->u.k6.fld.pacrl.tp4 = cm_object_get_child_by_name(state->u.k6.reg.pacrl, "TP4");
    state->u.k6.fld.pacrl.wp4 = cm_object_get_child_by_name(state->u.k6.reg.pacrl, "WP4");
    state->u.k6.fld.pacrl.sp4 = cm_object_get_child_by_name(state->u.k6.reg.pacrl, "SP4");
    state->u.k6.fld.pacrl.tp3 = cm_object_get_child_by_name(state->u.k6.reg.pacrl, "TP3");
    state->u.k6.fld.pacrl.wp3 = cm_object_get_child_by_name(state->u.k6.reg.pacrl, "WP3");
    state->u.k6.fld.pacrl.sp3 = cm_object_get_child_by_name(state->u.k6.reg.pacrl, "SP3");
    state->u.k6.fld.pacrl.tp2 = cm_object_get_child_by_name(state->u.k6.reg.pacrl, "TP2");
    state->u.k6.fld.pacrl.wp2 = cm_object_get_child_by_name(state->u.k6.reg.pacrl, "WP2");
    state->u.k6.fld.pacrl.sp2 = cm_object_get_child_by_name(state->u.k6.reg.pacrl, "SP2");
    state->u.k6.fld.pacrl.tp1 = cm_object_get_child_by_name(state->u.k6.reg.pacrl, "TP1");
    state->u.k6.fld.pacrl.wp1 = cm_object_get_child_by_name(state->u.k6.reg.pacrl, "WP1");
    state->u.k6.fld.pacrl.sp1 = cm_object_get_child_by_name(state->u.k6.reg.pacrl, "SP1");
    state->u.k6.fld.pacrl.tp0 = cm_object_get_child_by_name(state->u.k6.reg.pacrl, "TP0");
    state->u.k6.fld.pacrl.wp0 = cm_object_get_child_by_name(state->u.k6.reg.pacrl, "WP0");
    state->u.k6.fld.pacrl.sp0 = cm_object_get_child_by_name(state->u.k6.reg.pacrl, "SP0");

    // PACRM bitfields.
    state->u.k6.fld.pacrm.tp7 = cm_object_get_child_by_name(state->u.k6.reg.pacrm, "TP7");
    state->u.k6.fld.pacrm.wp7 = cm_object_get_child_by_name(state->u.k6.reg.pacrm, "WP7");
    state->u.k6.fld.pacrm.sp7 = cm_object_get_child_by_name(state->u.k6.reg.pacrm, "SP7");
    state->u.k6.fld.pacrm.tp6 = cm_object_get_child_by_name(state->u.k6.reg.pacrm, "TP6");
    state->u.k6.fld.pacrm.wp6 = cm_object_get_child_by_name(state->u.k6.reg.pacrm, "WP6");
    state->u.k6.fld.pacrm.sp6 = cm_object_get_child_by_name(state->u.k6.reg.pacrm, "SP6");
    state->u.k6.fld.pacrm.tp5 = cm_object_get_child_by_name(state->u.k6.reg.pacrm, "TP5");
    state->u.k6.fld.pacrm.wp5 = cm_object_get_child_by_name(state->u.k6.reg.pacrm, "WP5");
    state->u.k6.fld.pacrm.sp5 = cm_object_get_child_by_name(state->u.k6.reg.pacrm, "SP5");
    state->u.k6.fld.pacrm.tp4 = cm_object_get_child_by_name(state->u.k6.reg.pacrm, "TP4");
    state->u.k6.fld.pacrm.wp4 = cm_object_get_child_by_name(state->u.k6.reg.pacrm, "WP4");
    state->u.k6.fld.pacrm.sp4 = cm_object_get_child_by_name(state->u.k6.reg.pacrm, "SP4");
    state->u.k6.fld.pacrm.tp3 = cm_object_get_child_by_name(state->u.k6.reg.pacrm, "TP3");
    state->u.k6.fld.pacrm.wp3 = cm_object_get_child_by_name(state->u.k6.reg.pacrm, "WP3");
    state->u.k6.fld.pacrm.sp3 = cm_object_get_child_by_name(state->u.k6.reg.pacrm, "SP3");
    state->u.k6.fld.pacrm.tp2 = cm_object_get_child_by_name(state->u.k6.reg.pacrm, "TP2");
    state->u.k6.fld.pacrm.wp2 = cm_object_get_child_by_name(state->u.k6.reg.pacrm, "WP2");
    state->u.k6.fld.pacrm.sp2 = cm_object_get_child_by_name(state->u.k6.reg.pacrm, "SP2");
    state->u.k6.fld.pacrm.tp1 = cm_object_get_child_by_name(state->u.k6.reg.pacrm, "TP1");
    state->u.k6.fld.pacrm.wp1 = cm_object_get_child_by_name(state->u.k6.reg.pacrm, "WP1");
    state->u.k6.fld.pacrm.sp1 = cm_object_get_child_by_name(state->u.k6.reg.pacrm, "SP1");
    state->u.k6.fld.pacrm.tp0 = cm_object_get_child_by_name(state->u.k6.reg.pacrm, "TP0");
    state->u.k6.fld.pacrm.wp0 = cm_object_get_child_by_name(state->u.k6.reg.pacrm, "WP0");
    state->u.k6.fld.pacrm.sp0 = cm_object_get_child_by_name(state->u.k6.reg.pacrm, "SP0");

    // PACRN bitfields.
    state->u.k6.fld.pacrn.tp7 = cm_object_get_child_by_name(state->u.k6.reg.pacrn, "TP7");
    state->u.k6.fld.pacrn.wp7 = cm_object_get_child_by_name(state->u.k6.reg.pacrn, "WP7");
    state->u.k6.fld.pacrn.sp7 = cm_object_get_child_by_name(state->u.k6.reg.pacrn, "SP7");
    state->u.k6.fld.pacrn.tp6 = cm_object_get_child_by_name(state->u.k6.reg.pacrn, "TP6");
    state->u.k6.fld.pacrn.wp6 = cm_object_get_child_by_name(state->u.k6.reg.pacrn, "WP6");
    state->u.k6.fld.pacrn.sp6 = cm_object_get_child_by_name(state->u.k6.reg.pacrn, "SP6");
    state->u.k6.fld.pacrn.tp5 = cm_object_get_child_by_name(state->u.k6.reg.pacrn, "TP5");
    state->u.k6.fld.pacrn.wp5 = cm_object_get_child_by_name(state->u.k6.reg.pacrn, "WP5");
    state->u.k6.fld.pacrn.sp5 = cm_object_get_child_by_name(state->u.k6.reg.pacrn, "SP5");
    state->u.k6.fld.pacrn.tp4 = cm_object_get_child_by_name(state->u.k6.reg.pacrn, "TP4");
    state->u.k6.fld.pacrn.wp4 = cm_object_get_child_by_name(state->u.k6.reg.pacrn, "WP4");
    state->u.k6.fld.pacrn.sp4 = cm_object_get_child_by_name(state->u.k6.reg.pacrn, "SP4");
    state->u.k6.fld.pacrn.tp3 = cm_object_get_child_by_name(state->u.k6.reg.pacrn, "TP3");
    state->u.k6.fld.pacrn.wp3 = cm_object_get_child_by_name(state->u.k6.reg.pacrn, "WP3");
    state->u.k6.fld.pacrn.sp3 = cm_object_get_child_by_name(state->u.k6.reg.pacrn, "SP3");
    state->u.k6.fld.pacrn.tp2 = cm_object_get_child_by_name(state->u.k6.reg.pacrn, "TP2");
    state->u.k6.fld.pacrn.wp2 = cm_object_get_child_by_name(state->u.k6.reg.pacrn, "WP2");
    state->u.k6.fld.pacrn.sp2 = cm_object_get_child_by_name(state->u.k6.reg.pacrn, "SP2");
    state->u.k6.fld.pacrn.tp1 = cm_object_get_child_by_name(state->u.k6.reg.pacrn, "TP1");
    state->u.k6.fld.pacrn.wp1 = cm_object_get_child_by_name(state->u.k6.reg.pacrn, "WP1");
    state->u.k6.fld.pacrn.sp1 = cm_object_get_child_by_name(state->u.k6.reg.pacrn, "SP1");
    state->u.k6.fld.pacrn.tp0 = cm_object_get_child_by_name(state->u.k6.reg.pacrn, "TP0");
    state->u.k6.fld.pacrn.wp0 = cm_object_get_child_by_name(state->u.k6.reg.pacrn, "WP0");
    state->u.k6.fld.pacrn.sp0 = cm_object_get_child_by_name(state->u.k6.reg.pacrn, "SP0");

    // PACRO bitfields.
    state->u.k6.fld.pacro.tp7 = cm_object_get_child_by_name(state->u.k6.reg.pacro, "TP7");
    state->u.k6.fld.pacro.wp7 = cm_object_get_child_by_name(state->u.k6.reg.pacro, "WP7");
    state->u.k6.fld.pacro.sp7 = cm_object_get_child_by_name(state->u.k6.reg.pacro, "SP7");
    state->u.k6.fld.pacro.tp6 = cm_object_get_child_by_name(state->u.k6.reg.pacro, "TP6");
    state->u.k6.fld.pacro.wp6 = cm_object_get_child_by_name(state->u.k6.reg.pacro, "WP6");
    state->u.k6.fld.pacro.sp6 = cm_object_get_child_by_name(state->u.k6.reg.pacro, "SP6");
    state->u.k6.fld.pacro.tp5 = cm_object_get_child_by_name(state->u.k6.reg.pacro, "TP5");
    state->u.k6.fld.pacro.wp5 = cm_object_get_child_by_name(state->u.k6.reg.pacro, "WP5");
    state->u.k6.fld.pacro.sp5 = cm_object_get_child_by_name(state->u.k6.reg.pacro, "SP5");
    state->u.k6.fld.pacro.tp4 = cm_object_get_child_by_name(state->u.k6.reg.pacro, "TP4");
    state->u.k6.fld.pacro.wp4 = cm_object_get_child_by_name(state->u.k6.reg.pacro, "WP4");
    state->u.k6.fld.pacro.sp4 = cm_object_get_child_by_name(state->u.k6.reg.pacro, "SP4");
    state->u.k6.fld.pacro.tp3 = cm_object_get_child_by_name(state->u.k6.reg.pacro, "TP3");
    state->u.k6.fld.pacro.wp3 = cm_object_get_child_by_name(state->u.k6.reg.pacro, "WP3");
    state->u.k6.fld.pacro.sp3 = cm_object_get_child_by_name(state->u.k6.reg.pacro, "SP3");
    state->u.k6.fld.pacro.tp2 = cm_object_get_child_by_name(state->u.k6.reg.pacro, "TP2");
    state->u.k6.fld.pacro.wp2 = cm_object_get_child_by_name(state->u.k6.reg.pacro, "WP2");
    state->u.k6.fld.pacro.sp2 = cm_object_get_child_by_name(state->u.k6.reg.pacro, "SP2");
    state->u.k6.fld.pacro.tp1 = cm_object_get_child_by_name(state->u.k6.reg.pacro, "TP1");
    state->u.k6.fld.pacro.wp1 = cm_object_get_child_by_name(state->u.k6.reg.pacro, "WP1");
    state->u.k6.fld.pacro.sp1 = cm_object_get_child_by_name(state->u.k6.reg.pacro, "SP1");
    state->u.k6.fld.pacro.tp0 = cm_object_get_child_by_name(state->u.k6.reg.pacro, "TP0");
    state->u.k6.fld.pacro.wp0 = cm_object_get_child_by_name(state->u.k6.reg.pacro, "WP0");
    state->u.k6.fld.pacro.sp0 = cm_object_get_child_by_name(state->u.k6.reg.pacro, "SP0");

    // PACRP bitfields.
    state->u.k6.fld.pacrp.tp7 = cm_object_get_child_by_name(state->u.k6.reg.pacrp, "TP7");
    state->u.k6.fld.pacrp.wp7 = cm_object_get_child_by_name(state->u.k6.reg.pacrp, "WP7");
    state->u.k6.fld.pacrp.sp7 = cm_object_get_child_by_name(state->u.k6.reg.pacrp, "SP7");
    state->u.k6.fld.pacrp.tp6 = cm_object_get_child_by_name(state->u.k6.reg.pacrp, "TP6");
    state->u.k6.fld.pacrp.wp6 = cm_object_get_child_by_name(state->u.k6.reg.pacrp, "WP6");
    state->u.k6.fld.pacrp.sp6 = cm_object_get_child_by_name(state->u.k6.reg.pacrp, "SP6");
    state->u.k6.fld.pacrp.tp5 = cm_object_get_child_by_name(state->u.k6.reg.pacrp, "TP5");
    state->u.k6.fld.pacrp.wp5 = cm_object_get_child_by_name(state->u.k6.reg.pacrp, "WP5");
    state->u.k6.fld.pacrp.sp5 = cm_object_get_child_by_name(state->u.k6.reg.pacrp, "SP5");
    state->u.k6.fld.pacrp.tp4 = cm_object_get_child_by_name(state->u.k6.reg.pacrp, "TP4");
    state->u.k6.fld.pacrp.wp4 = cm_object_get_child_by_name(state->u.k6.reg.pacrp, "WP4");
    state->u.k6.fld.pacrp.sp4 = cm_object_get_child_by_name(state->u.k6.reg.pacrp, "SP4");
    state->u.k6.fld.pacrp.tp3 = cm_object_get_child_by_name(state->u.k6.reg.pacrp, "TP3");
    state->u.k6.fld.pacrp.wp3 = cm_object_get_child_by_name(state->u.k6.reg.pacrp, "WP3");
    state->u.k6.fld.pacrp.sp3 = cm_object_get_child_by_name(state->u.k6.reg.pacrp, "SP3");
    state->u.k6.fld.pacrp.tp2 = cm_object_get_child_by_name(state->u.k6.reg.pacrp, "TP2");
    state->u.k6.fld.pacrp.wp2 = cm_object_get_child_by_name(state->u.k6.reg.pacrp, "WP2");
    state->u.k6.fld.pacrp.sp2 = cm_object_get_child_by_name(state->u.k6.reg.pacrp, "SP2");
    state->u.k6.fld.pacrp.tp1 = cm_object_get_child_by_name(state->u.k6.reg.pacrp, "TP1");
    state->u.k6.fld.pacrp.wp1 = cm_object_get_child_by_name(state->u.k6.reg.pacrp, "WP1");
    state->u.k6.fld.pacrp.sp1 = cm_object_get_child_by_name(state->u.k6.reg.pacrp, "SP1");
    state->u.k6.fld.pacrp.tp0 = cm_object_get_child_by_name(state->u.k6.reg.pacrp, "TP0");
    state->u.k6.fld.pacrp.wp0 = cm_object_get_child_by_name(state->u.k6.reg.pacrp, "WP0");
    state->u.k6.fld.pacrp.sp0 = cm_object_get_child_by_name(state->u.k6.reg.pacrp, "SP0");

    // PACRU bitfields.
    state->u.k6.fld.pacru.tp1 = cm_object_get_child_by_name(state->u.k6.reg.pacru, "TP1");
    state->u.k6.fld.pacru.wp1 = cm_object_get_child_by_name(state->u.k6.reg.pacru, "WP1");
    state->u.k6.fld.pacru.sp1 = cm_object_get_child_by_name(state->u.k6.reg.pacru, "SP1");
    state->u.k6.fld.pacru.tp0 = cm_object_get_child_by_name(state->u.k6.reg.pacru, "TP0");
    state->u.k6.fld.pacru.wp0 = cm_object_get_child_by_name(state->u.k6.reg.pacru, "WP0");
    state->u.k6.fld.pacru.sp0 = cm_object_get_child_by_name(state->u.k6.reg.pacru, "SP0");
}

// ----- 8< ----- 8< -----  8< ----- 8< ----- 8< ----- 8< ----- 8< -----

// ----- Private --------------------------------------------------------------

#if 0
static peripheral_register_t kinetis_aips_xxx_pre_write_callback(Object *reg,
        Object *periph, uint32_t addr, uint32_t offset, unsigned size,
        peripheral_register_t value, peripheral_register_t full_value)
{
    KinetisAIPSState *state = KINETIS_AIPS_STATE(periph);

    peripheral_register_t prev_value = peripheral_register_get_raw_prev_value(reg);

    // TODO: Add code to adjust the value (like applying some masks,
    // for example prevent setting interrupts not enabled).
    // Also process cleared/set by write 1/0 bits.
    // The returned value will be stored in the register value.

    return full_value;
}

static void kinetis_aips_xxx_post_write_callback(Object *reg, Object *periph,
        uint32_t addr, uint32_t offset, unsigned size,
        peripheral_register_t value, peripheral_register_t full_value)
{
    KinetisAIPSState *state = KINETIS_AIPS_STATE(periph);

    peripheral_register_t prev_value = peripheral_register_get_raw_prev_value(reg);
    // The new register value is full_value, the old one is prev_value.

    // TODO: Add code to send the value to the consumer.
}

static peripheral_register_t kinetis_aips_xxx_pre_read_callback(Object *reg,
        Object *periph, uint32_t addr, uint32_t offset, unsigned size)
{
    KinetisAIPSState *state = KINETIS_AIPS_STATE(periph);

    peripheral_register_t value = 0;

    // Add code to get the value from the producer, and return it.

    // This value, possibly masked, will be stored in the register
    // and returned when the register is read.
    return value;
}

static void kinetis_aips_xxx_post_read_callback(Object *reg, Object *periph,
        uint32_t addr, uint32_t offset, unsigned size)
{
    KinetisAIPSState *state = KINETIS_AIPS_STATE(periph);

    peripheral_register_t value = peripheral_register_get_raw_value(reg);

    // TODO: add code to perform the post read actions, like clearing some bits.
}
#endif

// ----------------------------------------------------------------------------

// TODO: remove this if the peripheral is always enabled.
static bool kinetis_aips_is_enabled(Object *obj)
{
    KinetisAIPSState *state = KINETIS_AIPS_STATE(obj);

    if (register_bitfield_is_non_zero(state->enabling_bit)) {
        return true; // Positive logic, bit == 1 means enabled.
    }

    // Not enabled
    return false;
}

static void kinetis_aips_instance_init_callback(Object *obj)
{
    qemu_log_function_name();

    KinetisAIPSState *state = KINETIS_AIPS_STATE(obj);

    // Capabilities are not yet available.

    cm_object_property_add_int(obj, "port-index",
            (const int *) &state->port_index);
    state->port_index = KINETIS_PORT_AIPS_UNDEFINED;

    // TODO: remove this if the peripheral is always enabled.
    state->enabling_bit = NULL;
    
    // TODO: Add code to initialise all members.
}

static void kinetis_aips_realize_callback(DeviceState *dev, Error **errp)
{
    qemu_log_function_name();

    // Call parent realize().
    if (!cm_device_parent_realize(dev, errp, TYPE_KINETIS_AIPS)) {
        return;
    }

    KinetisMCUState *mcu = kinetis_mcu_get();
    CortexMState *cm_state = CORTEXM_MCU_STATE(mcu);

    KinetisAIPSState *state = KINETIS_AIPS_STATE(dev);
    // First thing first: get capabilities from MCU, needed everywhere.
    state->capabilities = mcu->capabilities;

    // Also keep a local pointer, to access them easier.
    const KinetisCapabilities *capabilities = state->capabilities;
    assert(capabilities != NULL);

    Object *obj = OBJECT(dev);

    const char *periph_name = "AIPS";

    svd_set_peripheral_address_block(cm_state->svd_json, periph_name, obj);
    peripheral_create_memory_region(obj);

    // TODO: remove this if the peripheral is always enabled.
    char enabling_bit_name[KINETIS_RCC_SIZEOF_ENABLING_BITFIELD];

    switch (capabilities->family) {
    case KINETIS_FAMILY_K6:


            mk64f12_aips_create_objects(obj, cm_state->svd_json, periph_name);

            // TODO: add actions.
            // cm_object_property_set_str(state->u.k6.fld.xxx.fff, "GGG", "follows");
            // cm_object_property_set_str(state->u.k6.fld.xxx.fff, "GGG", "cleared-by");

            // TODO: add callbacks.
            // peripheral_register_set_pre_read(state->k6.reg.xxx, &kinetis_aips_xxx_pre_read_callback);
            // peripheral_register_set_post_read(state->k6.reg.xxx, &kinetis_aips_xxx_post_read_callback);
            // peripheral_register_set_pre_read(state->k6.reg.xxx, &kinetis_aips_xxx_pret_read_callback);
            // peripheral_register_set_post_write(state->k6.reg.xxx, &kinetis_aips_xxx_post_write_callback);

            // TODO: add interrupts.

            // TODO: remove this if the peripheral is always enabled.
            snprintf(enabling_bit_name, sizeof(enabling_bit_name) - 1,
                DEVICE_PATH_KINETIS_RCC "/AHB1ENR/AIPS%dEN",
                1 + state->port_index - KINETIS_PORT_AIPS1);


        break;

    default:
        assert(false);
        break;
    }

    // TODO: remove this if the peripheral is always enabled.
    state->enabling_bit = OBJECT(cm_device_by_name(enabling_bit_name));

    peripheral_prepare_registers(obj);
}

static void kinetis_aips_reset_callback(DeviceState *dev)
{
    qemu_log_function_name();

    // Call parent reset(); this will reset all children registers.
    cm_device_parent_reset(dev, TYPE_KINETIS_AIPS);
}

static void kinetis_aips_class_init_callback(ObjectClass *klass, void *data)
{
    DeviceClass *dc = DEVICE_CLASS(klass);

    dc->reset = kinetis_aips_reset_callback;
    dc->realize = kinetis_aips_realize_callback;

    // TODO: remove this if the peripheral is always enabled.
    PeripheralClass *per_class = PERIPHERAL_CLASS(klass);
    per_class->is_enabled = kinetis_aips_is_enabled;
}

static const TypeInfo kinetis_aips_type_info = {
    .name = TYPE_KINETIS_AIPS,
    .parent = TYPE_KINETIS_AIPS_PARENT,
    .instance_init = kinetis_aips_instance_init_callback,
    .instance_size = sizeof(KinetisAIPSState),
    .class_init = kinetis_aips_class_init_callback,
    .class_size = sizeof(KinetisAIPSClass) };

static void kinetis_aips_register_types(void)
{
    type_register_static(&kinetis_aips_type_info);
}

type_init(kinetis_aips_register_types);

// ----------------------------------------------------------------------------
