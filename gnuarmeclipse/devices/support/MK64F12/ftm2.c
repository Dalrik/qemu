/*
 * Kinetis - FTM (FlexTimer Module) emulation.
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

#include <hw/cortexm/kinetis/ftm.h>
#include <hw/cortexm/kinetis/mcu.h>
#include <hw/cortexm/helper.h>
#include <hw/cortexm/svd.h>

// ----- Generated code -------------------------------------------------------
//
// ----- 8< ----- 8< -----  8< ----- 8< ----- 8< ----- 8< ----- 8< -----

// DO NOT EDIT! Automatically generated!
static void mk64f12_ftm_create_objects(Object *obj, JSON_Object *svd, const char *name)
{
    KinetisFTMState *state = KINETIS_FTM_STATE(obj);

    JSON_Object *periph = svd_get_peripheral_by_name(svd, name);
    svd_add_peripheral_properties_and_children(obj, periph, svd);

    // Registers. 
    state->u.k6.reg.sc = cm_object_get_child_by_name(obj, "SC");
    state->u.k6.reg.cnt = cm_object_get_child_by_name(obj, "CNT");
    state->u.k6.reg.mod = cm_object_get_child_by_name(obj, "MOD");
    state->u.k6.reg.csc[0] = cm_object_get_child_by_name(obj, "C0SC");
    state->u.k6.reg.csc[1] = cm_object_get_child_by_name(obj, "C1SC");
    state->u.k6.reg.cv[0] = cm_object_get_child_by_name(obj, "C0V");
    state->u.k6.reg.cv[1] = cm_object_get_child_by_name(obj, "C1V");
    state->u.k6.reg.cntin = cm_object_get_child_by_name(obj, "CNTIN");
    state->u.k6.reg.status = cm_object_get_child_by_name(obj, "STATUS");
    state->u.k6.reg.mode = cm_object_get_child_by_name(obj, "MODE");
    state->u.k6.reg.sync = cm_object_get_child_by_name(obj, "SYNC");
    state->u.k6.reg.outinit = cm_object_get_child_by_name(obj, "OUTINIT");
    state->u.k6.reg.outmask = cm_object_get_child_by_name(obj, "OUTMASK");
    state->u.k6.reg.combine = cm_object_get_child_by_name(obj, "COMBINE");
    state->u.k6.reg.deadtime = cm_object_get_child_by_name(obj, "DEADTIME");
    state->u.k6.reg.exttrig = cm_object_get_child_by_name(obj, "EXTTRIG");
    state->u.k6.reg.pol = cm_object_get_child_by_name(obj, "POL");
    state->u.k6.reg.fms = cm_object_get_child_by_name(obj, "FMS");
    state->u.k6.reg.filter = cm_object_get_child_by_name(obj, "FILTER");
    state->u.k6.reg.fltctrl = cm_object_get_child_by_name(obj, "FLTCTRL");
    state->u.k6.reg.qdctrl = cm_object_get_child_by_name(obj, "QDCTRL");
    state->u.k6.reg.conf = cm_object_get_child_by_name(obj, "CONF");
    state->u.k6.reg.fltpol = cm_object_get_child_by_name(obj, "FLTPOL");
    state->u.k6.reg.synconf = cm_object_get_child_by_name(obj, "SYNCONF");
    state->u.k6.reg.invctrl = cm_object_get_child_by_name(obj, "INVCTRL");
    state->u.k6.reg.swoctrl = cm_object_get_child_by_name(obj, "SWOCTRL");
    state->u.k6.reg.pwmload = cm_object_get_child_by_name(obj, "PWMLOAD");

    // SC bitfields.
    state->u.k6.fld.sc.ps = cm_object_get_child_by_name(state->u.k6.reg.sc, "PS");
    state->u.k6.fld.sc.clks = cm_object_get_child_by_name(state->u.k6.reg.sc, "CLKS");
    state->u.k6.fld.sc.cpwms = cm_object_get_child_by_name(state->u.k6.reg.sc, "CPWMS");
    state->u.k6.fld.sc.toie = cm_object_get_child_by_name(state->u.k6.reg.sc, "TOIE");
    state->u.k6.fld.sc.tof = cm_object_get_child_by_name(state->u.k6.reg.sc, "TOF");

    // CNT bitfields.
    state->u.k6.fld.cnt.count = cm_object_get_child_by_name(state->u.k6.reg.cnt, "COUNT");

    // MOD bitfields.
    state->u.k6.fld.mod.mod = cm_object_get_child_by_name(state->u.k6.reg.mod, "MOD");
    // C0SC bitfields.
    state->u.k6.fld.csc[0].dma = cm_object_get_child_by_name(state->u.k6.reg.csc[0], "DMA");
    state->u.k6.fld.csc[0].elsa = cm_object_get_child_by_name(state->u.k6.reg.csc[0], "ELSA");
    state->u.k6.fld.csc[0].elsb = cm_object_get_child_by_name(state->u.k6.reg.csc[0], "ELSB");
    state->u.k6.fld.csc[0].msa = cm_object_get_child_by_name(state->u.k6.reg.csc[0], "MSA");
    state->u.k6.fld.csc[0].msb = cm_object_get_child_by_name(state->u.k6.reg.csc[0], "MSB");
    state->u.k6.fld.csc[0].chie = cm_object_get_child_by_name(state->u.k6.reg.csc[0], "CHIE");
    state->u.k6.fld.csc[0].chf = cm_object_get_child_by_name(state->u.k6.reg.csc[0], "CHF");
    // C1SC bitfields.
    state->u.k6.fld.csc[1].dma = cm_object_get_child_by_name(state->u.k6.reg.csc[1], "DMA");
    state->u.k6.fld.csc[1].elsa = cm_object_get_child_by_name(state->u.k6.reg.csc[1], "ELSA");
    state->u.k6.fld.csc[1].elsb = cm_object_get_child_by_name(state->u.k6.reg.csc[1], "ELSB");
    state->u.k6.fld.csc[1].msa = cm_object_get_child_by_name(state->u.k6.reg.csc[1], "MSA");
    state->u.k6.fld.csc[1].msb = cm_object_get_child_by_name(state->u.k6.reg.csc[1], "MSB");
    state->u.k6.fld.csc[1].chie = cm_object_get_child_by_name(state->u.k6.reg.csc[1], "CHIE");
    state->u.k6.fld.csc[1].chf = cm_object_get_child_by_name(state->u.k6.reg.csc[1], "CHF");
    // C0V bitfields.
    state->u.k6.fld.cv[0].val = cm_object_get_child_by_name(state->u.k6.reg.cv[0], "VAL");
    // C1V bitfields.
    state->u.k6.fld.cv[1].val = cm_object_get_child_by_name(state->u.k6.reg.cv[1], "VAL");

    // CNTIN bitfields.
    state->u.k6.fld.cntin.init = cm_object_get_child_by_name(state->u.k6.reg.cntin, "INIT");

    // STATUS bitfields.
    state->u.k6.fld.status.ch0f = cm_object_get_child_by_name(state->u.k6.reg.status, "CH0F");
    state->u.k6.fld.status.ch1f = cm_object_get_child_by_name(state->u.k6.reg.status, "CH1F");
    state->u.k6.fld.status.ch2f = cm_object_get_child_by_name(state->u.k6.reg.status, "CH2F");
    state->u.k6.fld.status.ch3f = cm_object_get_child_by_name(state->u.k6.reg.status, "CH3F");
    state->u.k6.fld.status.ch4f = cm_object_get_child_by_name(state->u.k6.reg.status, "CH4F");
    state->u.k6.fld.status.ch5f = cm_object_get_child_by_name(state->u.k6.reg.status, "CH5F");
    state->u.k6.fld.status.ch6f = cm_object_get_child_by_name(state->u.k6.reg.status, "CH6F");
    state->u.k6.fld.status.ch7f = cm_object_get_child_by_name(state->u.k6.reg.status, "CH7F");

    // MODE bitfields.
    state->u.k6.fld.mode.ftmen = cm_object_get_child_by_name(state->u.k6.reg.mode, "FTMEN");
    state->u.k6.fld.mode.init = cm_object_get_child_by_name(state->u.k6.reg.mode, "INIT");
    state->u.k6.fld.mode.wpdis = cm_object_get_child_by_name(state->u.k6.reg.mode, "WPDIS");
    state->u.k6.fld.mode.pwmsync = cm_object_get_child_by_name(state->u.k6.reg.mode, "PWMSYNC");
    state->u.k6.fld.mode.captest = cm_object_get_child_by_name(state->u.k6.reg.mode, "CAPTEST");
    state->u.k6.fld.mode.faultm = cm_object_get_child_by_name(state->u.k6.reg.mode, "FAULTM");
    state->u.k6.fld.mode.faultie = cm_object_get_child_by_name(state->u.k6.reg.mode, "FAULTIE");

    // SYNC bitfields.
    state->u.k6.fld.sync.cntmin = cm_object_get_child_by_name(state->u.k6.reg.sync, "CNTMIN");
    state->u.k6.fld.sync.cntmax = cm_object_get_child_by_name(state->u.k6.reg.sync, "CNTMAX");
    state->u.k6.fld.sync.reinit = cm_object_get_child_by_name(state->u.k6.reg.sync, "REINIT");
    state->u.k6.fld.sync.synchom = cm_object_get_child_by_name(state->u.k6.reg.sync, "SYNCHOM");
    state->u.k6.fld.sync.trig0 = cm_object_get_child_by_name(state->u.k6.reg.sync, "TRIG0");
    state->u.k6.fld.sync.trig1 = cm_object_get_child_by_name(state->u.k6.reg.sync, "TRIG1");
    state->u.k6.fld.sync.trig2 = cm_object_get_child_by_name(state->u.k6.reg.sync, "TRIG2");
    state->u.k6.fld.sync.swsync = cm_object_get_child_by_name(state->u.k6.reg.sync, "SWSYNC");

    // OUTINIT bitfields.
    state->u.k6.fld.outinit.ch0oi = cm_object_get_child_by_name(state->u.k6.reg.outinit, "CH0OI");
    state->u.k6.fld.outinit.ch1oi = cm_object_get_child_by_name(state->u.k6.reg.outinit, "CH1OI");
    state->u.k6.fld.outinit.ch2oi = cm_object_get_child_by_name(state->u.k6.reg.outinit, "CH2OI");
    state->u.k6.fld.outinit.ch3oi = cm_object_get_child_by_name(state->u.k6.reg.outinit, "CH3OI");
    state->u.k6.fld.outinit.ch4oi = cm_object_get_child_by_name(state->u.k6.reg.outinit, "CH4OI");
    state->u.k6.fld.outinit.ch5oi = cm_object_get_child_by_name(state->u.k6.reg.outinit, "CH5OI");
    state->u.k6.fld.outinit.ch6oi = cm_object_get_child_by_name(state->u.k6.reg.outinit, "CH6OI");
    state->u.k6.fld.outinit.ch7oi = cm_object_get_child_by_name(state->u.k6.reg.outinit, "CH7OI");

    // OUTMASK bitfields.
    state->u.k6.fld.outmask.ch0om = cm_object_get_child_by_name(state->u.k6.reg.outmask, "CH0OM");
    state->u.k6.fld.outmask.ch1om = cm_object_get_child_by_name(state->u.k6.reg.outmask, "CH1OM");
    state->u.k6.fld.outmask.ch2om = cm_object_get_child_by_name(state->u.k6.reg.outmask, "CH2OM");
    state->u.k6.fld.outmask.ch3om = cm_object_get_child_by_name(state->u.k6.reg.outmask, "CH3OM");
    state->u.k6.fld.outmask.ch4om = cm_object_get_child_by_name(state->u.k6.reg.outmask, "CH4OM");
    state->u.k6.fld.outmask.ch5om = cm_object_get_child_by_name(state->u.k6.reg.outmask, "CH5OM");
    state->u.k6.fld.outmask.ch6om = cm_object_get_child_by_name(state->u.k6.reg.outmask, "CH6OM");
    state->u.k6.fld.outmask.ch7om = cm_object_get_child_by_name(state->u.k6.reg.outmask, "CH7OM");

    // COMBINE bitfields.
    state->u.k6.fld.combine.combine0 = cm_object_get_child_by_name(state->u.k6.reg.combine, "COMBINE0");
    state->u.k6.fld.combine.comp0 = cm_object_get_child_by_name(state->u.k6.reg.combine, "COMP0");
    state->u.k6.fld.combine.decapen0 = cm_object_get_child_by_name(state->u.k6.reg.combine, "DECAPEN0");
    state->u.k6.fld.combine.decap0 = cm_object_get_child_by_name(state->u.k6.reg.combine, "DECAP0");
    state->u.k6.fld.combine.dten0 = cm_object_get_child_by_name(state->u.k6.reg.combine, "DTEN0");
    state->u.k6.fld.combine.syncen0 = cm_object_get_child_by_name(state->u.k6.reg.combine, "SYNCEN0");
    state->u.k6.fld.combine.faulten0 = cm_object_get_child_by_name(state->u.k6.reg.combine, "FAULTEN0");
    state->u.k6.fld.combine.combine1 = cm_object_get_child_by_name(state->u.k6.reg.combine, "COMBINE1");
    state->u.k6.fld.combine.comp1 = cm_object_get_child_by_name(state->u.k6.reg.combine, "COMP1");
    state->u.k6.fld.combine.decapen1 = cm_object_get_child_by_name(state->u.k6.reg.combine, "DECAPEN1");
    state->u.k6.fld.combine.decap1 = cm_object_get_child_by_name(state->u.k6.reg.combine, "DECAP1");
    state->u.k6.fld.combine.dten1 = cm_object_get_child_by_name(state->u.k6.reg.combine, "DTEN1");
    state->u.k6.fld.combine.syncen1 = cm_object_get_child_by_name(state->u.k6.reg.combine, "SYNCEN1");
    state->u.k6.fld.combine.faulten1 = cm_object_get_child_by_name(state->u.k6.reg.combine, "FAULTEN1");
    state->u.k6.fld.combine.combine2 = cm_object_get_child_by_name(state->u.k6.reg.combine, "COMBINE2");
    state->u.k6.fld.combine.comp2 = cm_object_get_child_by_name(state->u.k6.reg.combine, "COMP2");
    state->u.k6.fld.combine.decapen2 = cm_object_get_child_by_name(state->u.k6.reg.combine, "DECAPEN2");
    state->u.k6.fld.combine.decap2 = cm_object_get_child_by_name(state->u.k6.reg.combine, "DECAP2");
    state->u.k6.fld.combine.dten2 = cm_object_get_child_by_name(state->u.k6.reg.combine, "DTEN2");
    state->u.k6.fld.combine.syncen2 = cm_object_get_child_by_name(state->u.k6.reg.combine, "SYNCEN2");
    state->u.k6.fld.combine.faulten2 = cm_object_get_child_by_name(state->u.k6.reg.combine, "FAULTEN2");
    state->u.k6.fld.combine.combine3 = cm_object_get_child_by_name(state->u.k6.reg.combine, "COMBINE3");
    state->u.k6.fld.combine.comp3 = cm_object_get_child_by_name(state->u.k6.reg.combine, "COMP3");
    state->u.k6.fld.combine.decapen3 = cm_object_get_child_by_name(state->u.k6.reg.combine, "DECAPEN3");
    state->u.k6.fld.combine.decap3 = cm_object_get_child_by_name(state->u.k6.reg.combine, "DECAP3");
    state->u.k6.fld.combine.dten3 = cm_object_get_child_by_name(state->u.k6.reg.combine, "DTEN3");
    state->u.k6.fld.combine.syncen3 = cm_object_get_child_by_name(state->u.k6.reg.combine, "SYNCEN3");
    state->u.k6.fld.combine.faulten3 = cm_object_get_child_by_name(state->u.k6.reg.combine, "FAULTEN3");

    // DEADTIME bitfields.
    state->u.k6.fld.deadtime.dtval = cm_object_get_child_by_name(state->u.k6.reg.deadtime, "DTVAL");
    state->u.k6.fld.deadtime.dtps = cm_object_get_child_by_name(state->u.k6.reg.deadtime, "DTPS");

    // EXTTRIG bitfields.
    state->u.k6.fld.exttrig.ch2trig = cm_object_get_child_by_name(state->u.k6.reg.exttrig, "CH2TRIG");
    state->u.k6.fld.exttrig.ch3trig = cm_object_get_child_by_name(state->u.k6.reg.exttrig, "CH3TRIG");
    state->u.k6.fld.exttrig.ch4trig = cm_object_get_child_by_name(state->u.k6.reg.exttrig, "CH4TRIG");
    state->u.k6.fld.exttrig.ch5trig = cm_object_get_child_by_name(state->u.k6.reg.exttrig, "CH5TRIG");
    state->u.k6.fld.exttrig.ch0trig = cm_object_get_child_by_name(state->u.k6.reg.exttrig, "CH0TRIG");
    state->u.k6.fld.exttrig.ch1trig = cm_object_get_child_by_name(state->u.k6.reg.exttrig, "CH1TRIG");
    state->u.k6.fld.exttrig.inittrigen = cm_object_get_child_by_name(state->u.k6.reg.exttrig, "INITTRIGEN");
    state->u.k6.fld.exttrig.trigf = cm_object_get_child_by_name(state->u.k6.reg.exttrig, "TRIGF");

    // POL bitfields.
    state->u.k6.fld.pol.pol0 = cm_object_get_child_by_name(state->u.k6.reg.pol, "POL0");
    state->u.k6.fld.pol.pol1 = cm_object_get_child_by_name(state->u.k6.reg.pol, "POL1");
    state->u.k6.fld.pol.pol2 = cm_object_get_child_by_name(state->u.k6.reg.pol, "POL2");
    state->u.k6.fld.pol.pol3 = cm_object_get_child_by_name(state->u.k6.reg.pol, "POL3");
    state->u.k6.fld.pol.pol4 = cm_object_get_child_by_name(state->u.k6.reg.pol, "POL4");
    state->u.k6.fld.pol.pol5 = cm_object_get_child_by_name(state->u.k6.reg.pol, "POL5");
    state->u.k6.fld.pol.pol6 = cm_object_get_child_by_name(state->u.k6.reg.pol, "POL6");
    state->u.k6.fld.pol.pol7 = cm_object_get_child_by_name(state->u.k6.reg.pol, "POL7");

    // FMS bitfields.
    state->u.k6.fld.fms.faultf0 = cm_object_get_child_by_name(state->u.k6.reg.fms, "FAULTF0");
    state->u.k6.fld.fms.faultf1 = cm_object_get_child_by_name(state->u.k6.reg.fms, "FAULTF1");
    state->u.k6.fld.fms.faultf2 = cm_object_get_child_by_name(state->u.k6.reg.fms, "FAULTF2");
    state->u.k6.fld.fms.faultf3 = cm_object_get_child_by_name(state->u.k6.reg.fms, "FAULTF3");
    state->u.k6.fld.fms.faultin = cm_object_get_child_by_name(state->u.k6.reg.fms, "FAULTIN");
    state->u.k6.fld.fms.wpen = cm_object_get_child_by_name(state->u.k6.reg.fms, "WPEN");
    state->u.k6.fld.fms.faultf = cm_object_get_child_by_name(state->u.k6.reg.fms, "FAULTF");

    // FILTER bitfields.
    state->u.k6.fld.filter.ch0fval = cm_object_get_child_by_name(state->u.k6.reg.filter, "CH0FVAL");
    state->u.k6.fld.filter.ch1fval = cm_object_get_child_by_name(state->u.k6.reg.filter, "CH1FVAL");
    state->u.k6.fld.filter.ch2fval = cm_object_get_child_by_name(state->u.k6.reg.filter, "CH2FVAL");
    state->u.k6.fld.filter.ch3fval = cm_object_get_child_by_name(state->u.k6.reg.filter, "CH3FVAL");

    // FLTCTRL bitfields.
    state->u.k6.fld.fltctrl.fault0en = cm_object_get_child_by_name(state->u.k6.reg.fltctrl, "FAULT0EN");
    state->u.k6.fld.fltctrl.fault1en = cm_object_get_child_by_name(state->u.k6.reg.fltctrl, "FAULT1EN");
    state->u.k6.fld.fltctrl.fault2en = cm_object_get_child_by_name(state->u.k6.reg.fltctrl, "FAULT2EN");
    state->u.k6.fld.fltctrl.fault3en = cm_object_get_child_by_name(state->u.k6.reg.fltctrl, "FAULT3EN");
    state->u.k6.fld.fltctrl.ffltr0en = cm_object_get_child_by_name(state->u.k6.reg.fltctrl, "FFLTR0EN");
    state->u.k6.fld.fltctrl.ffltr1en = cm_object_get_child_by_name(state->u.k6.reg.fltctrl, "FFLTR1EN");
    state->u.k6.fld.fltctrl.ffltr2en = cm_object_get_child_by_name(state->u.k6.reg.fltctrl, "FFLTR2EN");
    state->u.k6.fld.fltctrl.ffltr3en = cm_object_get_child_by_name(state->u.k6.reg.fltctrl, "FFLTR3EN");
    state->u.k6.fld.fltctrl.ffval = cm_object_get_child_by_name(state->u.k6.reg.fltctrl, "FFVAL");

    // QDCTRL bitfields.
    state->u.k6.fld.qdctrl.quaden = cm_object_get_child_by_name(state->u.k6.reg.qdctrl, "QUADEN");
    state->u.k6.fld.qdctrl.tofdir = cm_object_get_child_by_name(state->u.k6.reg.qdctrl, "TOFDIR");
    state->u.k6.fld.qdctrl.quadir = cm_object_get_child_by_name(state->u.k6.reg.qdctrl, "QUADIR");
    state->u.k6.fld.qdctrl.quadmode = cm_object_get_child_by_name(state->u.k6.reg.qdctrl, "QUADMODE");
    state->u.k6.fld.qdctrl.phbpol = cm_object_get_child_by_name(state->u.k6.reg.qdctrl, "PHBPOL");
    state->u.k6.fld.qdctrl.phapol = cm_object_get_child_by_name(state->u.k6.reg.qdctrl, "PHAPOL");
    state->u.k6.fld.qdctrl.phbfltren = cm_object_get_child_by_name(state->u.k6.reg.qdctrl, "PHBFLTREN");
    state->u.k6.fld.qdctrl.phafltren = cm_object_get_child_by_name(state->u.k6.reg.qdctrl, "PHAFLTREN");

    // CONF bitfields.
    state->u.k6.fld.conf.numtof = cm_object_get_child_by_name(state->u.k6.reg.conf, "NUMTOF");
    state->u.k6.fld.conf.bdmmode = cm_object_get_child_by_name(state->u.k6.reg.conf, "BDMMODE");
    state->u.k6.fld.conf.gtbeen = cm_object_get_child_by_name(state->u.k6.reg.conf, "GTBEEN");
    state->u.k6.fld.conf.gtbeout = cm_object_get_child_by_name(state->u.k6.reg.conf, "GTBEOUT");

    // FLTPOL bitfields.
    state->u.k6.fld.fltpol.flt0pol = cm_object_get_child_by_name(state->u.k6.reg.fltpol, "FLT0POL");
    state->u.k6.fld.fltpol.flt1pol = cm_object_get_child_by_name(state->u.k6.reg.fltpol, "FLT1POL");
    state->u.k6.fld.fltpol.flt2pol = cm_object_get_child_by_name(state->u.k6.reg.fltpol, "FLT2POL");
    state->u.k6.fld.fltpol.flt3pol = cm_object_get_child_by_name(state->u.k6.reg.fltpol, "FLT3POL");

    // SYNCONF bitfields.
    state->u.k6.fld.synconf.hwtrigmode = cm_object_get_child_by_name(state->u.k6.reg.synconf, "HWTRIGMODE");
    state->u.k6.fld.synconf.cntinc = cm_object_get_child_by_name(state->u.k6.reg.synconf, "CNTINC");
    state->u.k6.fld.synconf.invc = cm_object_get_child_by_name(state->u.k6.reg.synconf, "INVC");
    state->u.k6.fld.synconf.swoc = cm_object_get_child_by_name(state->u.k6.reg.synconf, "SWOC");
    state->u.k6.fld.synconf.syncmode = cm_object_get_child_by_name(state->u.k6.reg.synconf, "SYNCMODE");
    state->u.k6.fld.synconf.swrstcnt = cm_object_get_child_by_name(state->u.k6.reg.synconf, "SWRSTCNT");
    state->u.k6.fld.synconf.swwrbuf = cm_object_get_child_by_name(state->u.k6.reg.synconf, "SWWRBUF");
    state->u.k6.fld.synconf.swom = cm_object_get_child_by_name(state->u.k6.reg.synconf, "SWOM");
    state->u.k6.fld.synconf.swinvc = cm_object_get_child_by_name(state->u.k6.reg.synconf, "SWINVC");
    state->u.k6.fld.synconf.swsoc = cm_object_get_child_by_name(state->u.k6.reg.synconf, "SWSOC");
    state->u.k6.fld.synconf.hwrstcnt = cm_object_get_child_by_name(state->u.k6.reg.synconf, "HWRSTCNT");
    state->u.k6.fld.synconf.hwwrbuf = cm_object_get_child_by_name(state->u.k6.reg.synconf, "HWWRBUF");
    state->u.k6.fld.synconf.hwom = cm_object_get_child_by_name(state->u.k6.reg.synconf, "HWOM");
    state->u.k6.fld.synconf.hwinvc = cm_object_get_child_by_name(state->u.k6.reg.synconf, "HWINVC");
    state->u.k6.fld.synconf.hwsoc = cm_object_get_child_by_name(state->u.k6.reg.synconf, "HWSOC");

    // INVCTRL bitfields.
    state->u.k6.fld.invctrl.inv0en = cm_object_get_child_by_name(state->u.k6.reg.invctrl, "INV0EN");
    state->u.k6.fld.invctrl.inv1en = cm_object_get_child_by_name(state->u.k6.reg.invctrl, "INV1EN");
    state->u.k6.fld.invctrl.inv2en = cm_object_get_child_by_name(state->u.k6.reg.invctrl, "INV2EN");
    state->u.k6.fld.invctrl.inv3en = cm_object_get_child_by_name(state->u.k6.reg.invctrl, "INV3EN");

    // SWOCTRL bitfields.
    state->u.k6.fld.swoctrl.ch0oc = cm_object_get_child_by_name(state->u.k6.reg.swoctrl, "CH0OC");
    state->u.k6.fld.swoctrl.ch1oc = cm_object_get_child_by_name(state->u.k6.reg.swoctrl, "CH1OC");
    state->u.k6.fld.swoctrl.ch2oc = cm_object_get_child_by_name(state->u.k6.reg.swoctrl, "CH2OC");
    state->u.k6.fld.swoctrl.ch3oc = cm_object_get_child_by_name(state->u.k6.reg.swoctrl, "CH3OC");
    state->u.k6.fld.swoctrl.ch4oc = cm_object_get_child_by_name(state->u.k6.reg.swoctrl, "CH4OC");
    state->u.k6.fld.swoctrl.ch5oc = cm_object_get_child_by_name(state->u.k6.reg.swoctrl, "CH5OC");
    state->u.k6.fld.swoctrl.ch6oc = cm_object_get_child_by_name(state->u.k6.reg.swoctrl, "CH6OC");
    state->u.k6.fld.swoctrl.ch7oc = cm_object_get_child_by_name(state->u.k6.reg.swoctrl, "CH7OC");
    state->u.k6.fld.swoctrl.ch0ocv = cm_object_get_child_by_name(state->u.k6.reg.swoctrl, "CH0OCV");
    state->u.k6.fld.swoctrl.ch1ocv = cm_object_get_child_by_name(state->u.k6.reg.swoctrl, "CH1OCV");
    state->u.k6.fld.swoctrl.ch2ocv = cm_object_get_child_by_name(state->u.k6.reg.swoctrl, "CH2OCV");
    state->u.k6.fld.swoctrl.ch3ocv = cm_object_get_child_by_name(state->u.k6.reg.swoctrl, "CH3OCV");
    state->u.k6.fld.swoctrl.ch4ocv = cm_object_get_child_by_name(state->u.k6.reg.swoctrl, "CH4OCV");
    state->u.k6.fld.swoctrl.ch5ocv = cm_object_get_child_by_name(state->u.k6.reg.swoctrl, "CH5OCV");
    state->u.k6.fld.swoctrl.ch6ocv = cm_object_get_child_by_name(state->u.k6.reg.swoctrl, "CH6OCV");
    state->u.k6.fld.swoctrl.ch7ocv = cm_object_get_child_by_name(state->u.k6.reg.swoctrl, "CH7OCV");

    // PWMLOAD bitfields.
    state->u.k6.fld.pwmload.ch0sel = cm_object_get_child_by_name(state->u.k6.reg.pwmload, "CH0SEL");
    state->u.k6.fld.pwmload.ch1sel = cm_object_get_child_by_name(state->u.k6.reg.pwmload, "CH1SEL");
    state->u.k6.fld.pwmload.ch2sel = cm_object_get_child_by_name(state->u.k6.reg.pwmload, "CH2SEL");
    state->u.k6.fld.pwmload.ch3sel = cm_object_get_child_by_name(state->u.k6.reg.pwmload, "CH3SEL");
    state->u.k6.fld.pwmload.ch4sel = cm_object_get_child_by_name(state->u.k6.reg.pwmload, "CH4SEL");
    state->u.k6.fld.pwmload.ch5sel = cm_object_get_child_by_name(state->u.k6.reg.pwmload, "CH5SEL");
    state->u.k6.fld.pwmload.ch6sel = cm_object_get_child_by_name(state->u.k6.reg.pwmload, "CH6SEL");
    state->u.k6.fld.pwmload.ch7sel = cm_object_get_child_by_name(state->u.k6.reg.pwmload, "CH7SEL");
    state->u.k6.fld.pwmload.ldok = cm_object_get_child_by_name(state->u.k6.reg.pwmload, "LDOK");
}

// ----- 8< ----- 8< -----  8< ----- 8< ----- 8< ----- 8< ----- 8< -----

// ----- Private --------------------------------------------------------------

#if 0
static peripheral_register_t kinetis_ftm_xxx_pre_write_callback(Object *reg,
        Object *periph, uint32_t addr, uint32_t offset, unsigned size,
        peripheral_register_t value, peripheral_register_t full_value)
{
    KinetisFTMState *state = KINETIS_FTM_STATE(periph);

    peripheral_register_t prev_value = peripheral_register_get_raw_prev_value(reg);

    // TODO: Add code to adjust the value (like applying some masks,
    // for example prevent setting interrupts not enabled).
    // Also process cleared/set by write 1/0 bits.
    // The returned value will be stored in the register value.

    return full_value;
}

static void kinetis_ftm_xxx_post_write_callback(Object *reg, Object *periph,
        uint32_t addr, uint32_t offset, unsigned size,
        peripheral_register_t value, peripheral_register_t full_value)
{
    KinetisFTMState *state = KINETIS_FTM_STATE(periph);

    peripheral_register_t prev_value = peripheral_register_get_raw_prev_value(reg);
    // The new register value is full_value, the old one is prev_value.

    // TODO: Add code to send the value to the consumer.
}

static peripheral_register_t kinetis_ftm_xxx_pre_read_callback(Object *reg,
        Object *periph, uint32_t addr, uint32_t offset, unsigned size)
{
    KinetisFTMState *state = KINETIS_FTM_STATE(periph);

    peripheral_register_t value = 0;

    // Add code to get the value from the producer, and return it.

    // This value, possibly masked, will be stored in the register
    // and returned when the register is read.
    return value;
}

static void kinetis_ftm_xxx_post_read_callback(Object *reg, Object *periph,
        uint32_t addr, uint32_t offset, unsigned size)
{
    KinetisFTMState *state = KINETIS_FTM_STATE(periph);

    peripheral_register_t value = peripheral_register_get_raw_value(reg);

    // TODO: add code to perform the post read actions, like clearing some bits.
}
#endif

// ----------------------------------------------------------------------------

// TODO: remove this if the peripheral is always enabled.
static bool kinetis_ftm_is_enabled(Object *obj)
{
    KinetisFTMState *state = KINETIS_FTM_STATE(obj);

    if (register_bitfield_is_non_zero(state->enabling_bit)) {
        return true; // Positive logic, bit == 1 means enabled.
    }

    // Not enabled
    return false;
}

static void kinetis_ftm_instance_init_callback(Object *obj)
{
    qemu_log_function_name();

    KinetisFTMState *state = KINETIS_FTM_STATE(obj);

    // Capabilities are not yet available.

    cm_object_property_add_int(obj, "port-index",
            (const int *) &state->port_index);
    state->port_index = KINETIS_PORT_FTM_UNDEFINED;

    // TODO: remove this if the peripheral is always enabled.
    state->enabling_bit = NULL;
    
    // TODO: Add code to initialise all members.
}

static void kinetis_ftm_realize_callback(DeviceState *dev, Error **errp)
{
    qemu_log_function_name();

    // Call parent realize().
    if (!cm_device_parent_realize(dev, errp, TYPE_KINETIS_FTM)) {
        return;
    }

    KinetisMCUState *mcu = kinetis_mcu_get();
    CortexMState *cm_state = CORTEXM_MCU_STATE(mcu);

    KinetisFTMState *state = KINETIS_FTM_STATE(dev);
    // First thing first: get capabilities from MCU, needed everywhere.
    state->capabilities = mcu->capabilities;

    // Also keep a local pointer, to access them easier.
    const KinetisCapabilities *capabilities = state->capabilities;
    assert(capabilities != NULL);

    Object *obj = OBJECT(dev);

    const char *periph_name = "FTM";

    svd_set_peripheral_address_block(cm_state->svd_json, periph_name, obj);
    peripheral_create_memory_region(obj);

    // TODO: remove this if the peripheral is always enabled.
    char enabling_bit_name[KINETIS_RCC_SIZEOF_ENABLING_BITFIELD];

    switch (capabilities->family) {
    case KINETIS_FAMILY_K6:


            mk64f12_ftm_create_objects(obj, cm_state->svd_json, periph_name);

            // TODO: add actions.
            // cm_object_property_set_str(state->u.k6.fld.xxx.fff, "GGG", "follows");
            // cm_object_property_set_str(state->u.k6.fld.xxx.fff, "GGG", "cleared-by");

            // TODO: add callbacks.
            // peripheral_register_set_pre_read(state->k6.reg.xxx, &kinetis_ftm_xxx_pre_read_callback);
            // peripheral_register_set_post_read(state->k6.reg.xxx, &kinetis_ftm_xxx_post_read_callback);
            // peripheral_register_set_pre_read(state->k6.reg.xxx, &kinetis_ftm_xxx_pret_read_callback);
            // peripheral_register_set_post_write(state->k6.reg.xxx, &kinetis_ftm_xxx_post_write_callback);

            // TODO: add interrupts.

            // TODO: remove this if the peripheral is always enabled.
            snprintf(enabling_bit_name, sizeof(enabling_bit_name) - 1,
                DEVICE_PATH_KINETIS_RCC "/AHB1ENR/FTM%dEN",
                1 + state->port_index - KINETIS_PORT_FTM1);


        break;

    default:
        assert(false);
        break;
    }

    // TODO: remove this if the peripheral is always enabled.
    state->enabling_bit = OBJECT(cm_device_by_name(enabling_bit_name));

    peripheral_prepare_registers(obj);
}

static void kinetis_ftm_reset_callback(DeviceState *dev)
{
    qemu_log_function_name();

    // Call parent reset(); this will reset all children registers.
    cm_device_parent_reset(dev, TYPE_KINETIS_FTM);
}

static void kinetis_ftm_class_init_callback(ObjectClass *klass, void *data)
{
    DeviceClass *dc = DEVICE_CLASS(klass);

    dc->reset = kinetis_ftm_reset_callback;
    dc->realize = kinetis_ftm_realize_callback;

    // TODO: remove this if the peripheral is always enabled.
    PeripheralClass *per_class = PERIPHERAL_CLASS(klass);
    per_class->is_enabled = kinetis_ftm_is_enabled;
}

static const TypeInfo kinetis_ftm_type_info = {
    .name = TYPE_KINETIS_FTM,
    .parent = TYPE_KINETIS_FTM_PARENT,
    .instance_init = kinetis_ftm_instance_init_callback,
    .instance_size = sizeof(KinetisFTMState),
    .class_init = kinetis_ftm_class_init_callback,
    .class_size = sizeof(KinetisFTMClass) };

static void kinetis_ftm_register_types(void)
{
    type_register_static(&kinetis_ftm_type_info);
}

type_init(kinetis_ftm_register_types);

// ----------------------------------------------------------------------------
