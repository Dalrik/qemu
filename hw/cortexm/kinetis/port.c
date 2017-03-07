/*
 * Kinetis - PORT (Pin Control and Interrupts) emulation.
 *
 * Copyright (c) 2017 Ian Thompson.
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

#include <hw/cortexm/kinetis/port.h>
#include <hw/cortexm/kinetis/mcu.h>
#include <hw/cortexm/helper.h>
#include <hw/cortexm/svd.h>
#include <qemu/timer.h>

// ----- Generated code -------------------------------------------------------
//
// ----- 8< ----- 8< -----  8< ----- 8< ----- 8< ----- 8< ----- 8< -----

// DO NOT EDIT! Automatically generated!
static void mk64f12_port_create_objects(Object *obj, JSON_Object *svd, const char *name)
{
    KinetisPORTState *state = KINETIS_PORT_STATE(obj);

    JSON_Object *periph = svd_get_peripheral_by_name(svd, name);
    svd_add_peripheral_properties_and_children(obj, periph, svd);

    // Registers. 
    state->u.k6.reg.pcr[0] = cm_object_get_child_by_name(obj, "PCR0");
    state->u.k6.reg.pcr[1] = cm_object_get_child_by_name(obj, "PCR1");
    state->u.k6.reg.pcr[2] = cm_object_get_child_by_name(obj, "PCR2");
    state->u.k6.reg.pcr[3] = cm_object_get_child_by_name(obj, "PCR3");
    state->u.k6.reg.pcr[4] = cm_object_get_child_by_name(obj, "PCR4");
    state->u.k6.reg.pcr[5] = cm_object_get_child_by_name(obj, "PCR5");
    state->u.k6.reg.pcr[6] = cm_object_get_child_by_name(obj, "PCR6");
    state->u.k6.reg.pcr[7] = cm_object_get_child_by_name(obj, "PCR7");
    state->u.k6.reg.pcr[8] = cm_object_get_child_by_name(obj, "PCR8");
    state->u.k6.reg.pcr[9] = cm_object_get_child_by_name(obj, "PCR9");
    state->u.k6.reg.pcr[10] = cm_object_get_child_by_name(obj, "PCR10");
    state->u.k6.reg.pcr[11] = cm_object_get_child_by_name(obj, "PCR11");
    state->u.k6.reg.pcr[12] = cm_object_get_child_by_name(obj, "PCR12");
    state->u.k6.reg.pcr[13] = cm_object_get_child_by_name(obj, "PCR13");
    state->u.k6.reg.pcr[14] = cm_object_get_child_by_name(obj, "PCR14");
    state->u.k6.reg.pcr[15] = cm_object_get_child_by_name(obj, "PCR15");
    state->u.k6.reg.pcr[16] = cm_object_get_child_by_name(obj, "PCR16");
    state->u.k6.reg.pcr[17] = cm_object_get_child_by_name(obj, "PCR17");
    state->u.k6.reg.pcr[18] = cm_object_get_child_by_name(obj, "PCR18");
    state->u.k6.reg.pcr[19] = cm_object_get_child_by_name(obj, "PCR19");
    state->u.k6.reg.pcr[20] = cm_object_get_child_by_name(obj, "PCR20");
    state->u.k6.reg.pcr[21] = cm_object_get_child_by_name(obj, "PCR21");
    state->u.k6.reg.pcr[22] = cm_object_get_child_by_name(obj, "PCR22");
    state->u.k6.reg.pcr[23] = cm_object_get_child_by_name(obj, "PCR23");
    state->u.k6.reg.pcr[24] = cm_object_get_child_by_name(obj, "PCR24");
    state->u.k6.reg.pcr[25] = cm_object_get_child_by_name(obj, "PCR25");
    state->u.k6.reg.pcr[26] = cm_object_get_child_by_name(obj, "PCR26");
    state->u.k6.reg.pcr[27] = cm_object_get_child_by_name(obj, "PCR27");
    state->u.k6.reg.pcr[28] = cm_object_get_child_by_name(obj, "PCR28");
    state->u.k6.reg.pcr[29] = cm_object_get_child_by_name(obj, "PCR29");
    state->u.k6.reg.pcr[30] = cm_object_get_child_by_name(obj, "PCR30");
    state->u.k6.reg.pcr[31] = cm_object_get_child_by_name(obj, "PCR31");
    state->u.k6.reg.gpclr = cm_object_get_child_by_name(obj, "GPCLR");
    state->u.k6.reg.gpchr = cm_object_get_child_by_name(obj, "GPCHR");
    state->u.k6.reg.isfr = cm_object_get_child_by_name(obj, "ISFR");
    // PCR0 bitfields.
    state->u.k6.fld.pcr[0].ps = cm_object_get_child_by_name(state->u.k6.reg.pcr[0], "PS");
    state->u.k6.fld.pcr[0].pe = cm_object_get_child_by_name(state->u.k6.reg.pcr[0], "PE");
    state->u.k6.fld.pcr[0].sre = cm_object_get_child_by_name(state->u.k6.reg.pcr[0], "SRE");
    state->u.k6.fld.pcr[0].pfe = cm_object_get_child_by_name(state->u.k6.reg.pcr[0], "PFE");
    state->u.k6.fld.pcr[0].ode = cm_object_get_child_by_name(state->u.k6.reg.pcr[0], "ODE");
    state->u.k6.fld.pcr[0].dse = cm_object_get_child_by_name(state->u.k6.reg.pcr[0], "DSE");
    state->u.k6.fld.pcr[0].mux = cm_object_get_child_by_name(state->u.k6.reg.pcr[0], "MUX");
    state->u.k6.fld.pcr[0].lk = cm_object_get_child_by_name(state->u.k6.reg.pcr[0], "LK");
    state->u.k6.fld.pcr[0].irqc = cm_object_get_child_by_name(state->u.k6.reg.pcr[0], "IRQC");
    state->u.k6.fld.pcr[0].isf = cm_object_get_child_by_name(state->u.k6.reg.pcr[0], "ISF");
    // PCR1 bitfields.
    state->u.k6.fld.pcr[1].ps = cm_object_get_child_by_name(state->u.k6.reg.pcr[1], "PS");
    state->u.k6.fld.pcr[1].pe = cm_object_get_child_by_name(state->u.k6.reg.pcr[1], "PE");
    state->u.k6.fld.pcr[1].sre = cm_object_get_child_by_name(state->u.k6.reg.pcr[1], "SRE");
    state->u.k6.fld.pcr[1].pfe = cm_object_get_child_by_name(state->u.k6.reg.pcr[1], "PFE");
    state->u.k6.fld.pcr[1].ode = cm_object_get_child_by_name(state->u.k6.reg.pcr[1], "ODE");
    state->u.k6.fld.pcr[1].dse = cm_object_get_child_by_name(state->u.k6.reg.pcr[1], "DSE");
    state->u.k6.fld.pcr[1].mux = cm_object_get_child_by_name(state->u.k6.reg.pcr[1], "MUX");
    state->u.k6.fld.pcr[1].lk = cm_object_get_child_by_name(state->u.k6.reg.pcr[1], "LK");
    state->u.k6.fld.pcr[1].irqc = cm_object_get_child_by_name(state->u.k6.reg.pcr[1], "IRQC");
    state->u.k6.fld.pcr[1].isf = cm_object_get_child_by_name(state->u.k6.reg.pcr[1], "ISF");
    // PCR2 bitfields.
    state->u.k6.fld.pcr[2].ps = cm_object_get_child_by_name(state->u.k6.reg.pcr[2], "PS");
    state->u.k6.fld.pcr[2].pe = cm_object_get_child_by_name(state->u.k6.reg.pcr[2], "PE");
    state->u.k6.fld.pcr[2].sre = cm_object_get_child_by_name(state->u.k6.reg.pcr[2], "SRE");
    state->u.k6.fld.pcr[2].pfe = cm_object_get_child_by_name(state->u.k6.reg.pcr[2], "PFE");
    state->u.k6.fld.pcr[2].ode = cm_object_get_child_by_name(state->u.k6.reg.pcr[2], "ODE");
    state->u.k6.fld.pcr[2].dse = cm_object_get_child_by_name(state->u.k6.reg.pcr[2], "DSE");
    state->u.k6.fld.pcr[2].mux = cm_object_get_child_by_name(state->u.k6.reg.pcr[2], "MUX");
    state->u.k6.fld.pcr[2].lk = cm_object_get_child_by_name(state->u.k6.reg.pcr[2], "LK");
    state->u.k6.fld.pcr[2].irqc = cm_object_get_child_by_name(state->u.k6.reg.pcr[2], "IRQC");
    state->u.k6.fld.pcr[2].isf = cm_object_get_child_by_name(state->u.k6.reg.pcr[2], "ISF");
    // PCR3 bitfields.
    state->u.k6.fld.pcr[3].ps = cm_object_get_child_by_name(state->u.k6.reg.pcr[3], "PS");
    state->u.k6.fld.pcr[3].pe = cm_object_get_child_by_name(state->u.k6.reg.pcr[3], "PE");
    state->u.k6.fld.pcr[3].sre = cm_object_get_child_by_name(state->u.k6.reg.pcr[3], "SRE");
    state->u.k6.fld.pcr[3].pfe = cm_object_get_child_by_name(state->u.k6.reg.pcr[3], "PFE");
    state->u.k6.fld.pcr[3].ode = cm_object_get_child_by_name(state->u.k6.reg.pcr[3], "ODE");
    state->u.k6.fld.pcr[3].dse = cm_object_get_child_by_name(state->u.k6.reg.pcr[3], "DSE");
    state->u.k6.fld.pcr[3].mux = cm_object_get_child_by_name(state->u.k6.reg.pcr[3], "MUX");
    state->u.k6.fld.pcr[3].lk = cm_object_get_child_by_name(state->u.k6.reg.pcr[3], "LK");
    state->u.k6.fld.pcr[3].irqc = cm_object_get_child_by_name(state->u.k6.reg.pcr[3], "IRQC");
    state->u.k6.fld.pcr[3].isf = cm_object_get_child_by_name(state->u.k6.reg.pcr[3], "ISF");
    // PCR4 bitfields.
    state->u.k6.fld.pcr[4].ps = cm_object_get_child_by_name(state->u.k6.reg.pcr[4], "PS");
    state->u.k6.fld.pcr[4].pe = cm_object_get_child_by_name(state->u.k6.reg.pcr[4], "PE");
    state->u.k6.fld.pcr[4].sre = cm_object_get_child_by_name(state->u.k6.reg.pcr[4], "SRE");
    state->u.k6.fld.pcr[4].pfe = cm_object_get_child_by_name(state->u.k6.reg.pcr[4], "PFE");
    state->u.k6.fld.pcr[4].ode = cm_object_get_child_by_name(state->u.k6.reg.pcr[4], "ODE");
    state->u.k6.fld.pcr[4].dse = cm_object_get_child_by_name(state->u.k6.reg.pcr[4], "DSE");
    state->u.k6.fld.pcr[4].mux = cm_object_get_child_by_name(state->u.k6.reg.pcr[4], "MUX");
    state->u.k6.fld.pcr[4].lk = cm_object_get_child_by_name(state->u.k6.reg.pcr[4], "LK");
    state->u.k6.fld.pcr[4].irqc = cm_object_get_child_by_name(state->u.k6.reg.pcr[4], "IRQC");
    state->u.k6.fld.pcr[4].isf = cm_object_get_child_by_name(state->u.k6.reg.pcr[4], "ISF");
    // PCR5 bitfields.
    state->u.k6.fld.pcr[5].ps = cm_object_get_child_by_name(state->u.k6.reg.pcr[5], "PS");
    state->u.k6.fld.pcr[5].pe = cm_object_get_child_by_name(state->u.k6.reg.pcr[5], "PE");
    state->u.k6.fld.pcr[5].sre = cm_object_get_child_by_name(state->u.k6.reg.pcr[5], "SRE");
    state->u.k6.fld.pcr[5].pfe = cm_object_get_child_by_name(state->u.k6.reg.pcr[5], "PFE");
    state->u.k6.fld.pcr[5].ode = cm_object_get_child_by_name(state->u.k6.reg.pcr[5], "ODE");
    state->u.k6.fld.pcr[5].dse = cm_object_get_child_by_name(state->u.k6.reg.pcr[5], "DSE");
    state->u.k6.fld.pcr[5].mux = cm_object_get_child_by_name(state->u.k6.reg.pcr[5], "MUX");
    state->u.k6.fld.pcr[5].lk = cm_object_get_child_by_name(state->u.k6.reg.pcr[5], "LK");
    state->u.k6.fld.pcr[5].irqc = cm_object_get_child_by_name(state->u.k6.reg.pcr[5], "IRQC");
    state->u.k6.fld.pcr[5].isf = cm_object_get_child_by_name(state->u.k6.reg.pcr[5], "ISF");
    // PCR6 bitfields.
    state->u.k6.fld.pcr[6].ps = cm_object_get_child_by_name(state->u.k6.reg.pcr[6], "PS");
    state->u.k6.fld.pcr[6].pe = cm_object_get_child_by_name(state->u.k6.reg.pcr[6], "PE");
    state->u.k6.fld.pcr[6].sre = cm_object_get_child_by_name(state->u.k6.reg.pcr[6], "SRE");
    state->u.k6.fld.pcr[6].pfe = cm_object_get_child_by_name(state->u.k6.reg.pcr[6], "PFE");
    state->u.k6.fld.pcr[6].ode = cm_object_get_child_by_name(state->u.k6.reg.pcr[6], "ODE");
    state->u.k6.fld.pcr[6].dse = cm_object_get_child_by_name(state->u.k6.reg.pcr[6], "DSE");
    state->u.k6.fld.pcr[6].mux = cm_object_get_child_by_name(state->u.k6.reg.pcr[6], "MUX");
    state->u.k6.fld.pcr[6].lk = cm_object_get_child_by_name(state->u.k6.reg.pcr[6], "LK");
    state->u.k6.fld.pcr[6].irqc = cm_object_get_child_by_name(state->u.k6.reg.pcr[6], "IRQC");
    state->u.k6.fld.pcr[6].isf = cm_object_get_child_by_name(state->u.k6.reg.pcr[6], "ISF");
    // PCR7 bitfields.
    state->u.k6.fld.pcr[7].ps = cm_object_get_child_by_name(state->u.k6.reg.pcr[7], "PS");
    state->u.k6.fld.pcr[7].pe = cm_object_get_child_by_name(state->u.k6.reg.pcr[7], "PE");
    state->u.k6.fld.pcr[7].sre = cm_object_get_child_by_name(state->u.k6.reg.pcr[7], "SRE");
    state->u.k6.fld.pcr[7].pfe = cm_object_get_child_by_name(state->u.k6.reg.pcr[7], "PFE");
    state->u.k6.fld.pcr[7].ode = cm_object_get_child_by_name(state->u.k6.reg.pcr[7], "ODE");
    state->u.k6.fld.pcr[7].dse = cm_object_get_child_by_name(state->u.k6.reg.pcr[7], "DSE");
    state->u.k6.fld.pcr[7].mux = cm_object_get_child_by_name(state->u.k6.reg.pcr[7], "MUX");
    state->u.k6.fld.pcr[7].lk = cm_object_get_child_by_name(state->u.k6.reg.pcr[7], "LK");
    state->u.k6.fld.pcr[7].irqc = cm_object_get_child_by_name(state->u.k6.reg.pcr[7], "IRQC");
    state->u.k6.fld.pcr[7].isf = cm_object_get_child_by_name(state->u.k6.reg.pcr[7], "ISF");
    // PCR8 bitfields.
    state->u.k6.fld.pcr[8].ps = cm_object_get_child_by_name(state->u.k6.reg.pcr[8], "PS");
    state->u.k6.fld.pcr[8].pe = cm_object_get_child_by_name(state->u.k6.reg.pcr[8], "PE");
    state->u.k6.fld.pcr[8].sre = cm_object_get_child_by_name(state->u.k6.reg.pcr[8], "SRE");
    state->u.k6.fld.pcr[8].pfe = cm_object_get_child_by_name(state->u.k6.reg.pcr[8], "PFE");
    state->u.k6.fld.pcr[8].ode = cm_object_get_child_by_name(state->u.k6.reg.pcr[8], "ODE");
    state->u.k6.fld.pcr[8].dse = cm_object_get_child_by_name(state->u.k6.reg.pcr[8], "DSE");
    state->u.k6.fld.pcr[8].mux = cm_object_get_child_by_name(state->u.k6.reg.pcr[8], "MUX");
    state->u.k6.fld.pcr[8].lk = cm_object_get_child_by_name(state->u.k6.reg.pcr[8], "LK");
    state->u.k6.fld.pcr[8].irqc = cm_object_get_child_by_name(state->u.k6.reg.pcr[8], "IRQC");
    state->u.k6.fld.pcr[8].isf = cm_object_get_child_by_name(state->u.k6.reg.pcr[8], "ISF");
    // PCR9 bitfields.
    state->u.k6.fld.pcr[9].ps = cm_object_get_child_by_name(state->u.k6.reg.pcr[9], "PS");
    state->u.k6.fld.pcr[9].pe = cm_object_get_child_by_name(state->u.k6.reg.pcr[9], "PE");
    state->u.k6.fld.pcr[9].sre = cm_object_get_child_by_name(state->u.k6.reg.pcr[9], "SRE");
    state->u.k6.fld.pcr[9].pfe = cm_object_get_child_by_name(state->u.k6.reg.pcr[9], "PFE");
    state->u.k6.fld.pcr[9].ode = cm_object_get_child_by_name(state->u.k6.reg.pcr[9], "ODE");
    state->u.k6.fld.pcr[9].dse = cm_object_get_child_by_name(state->u.k6.reg.pcr[9], "DSE");
    state->u.k6.fld.pcr[9].mux = cm_object_get_child_by_name(state->u.k6.reg.pcr[9], "MUX");
    state->u.k6.fld.pcr[9].lk = cm_object_get_child_by_name(state->u.k6.reg.pcr[9], "LK");
    state->u.k6.fld.pcr[9].irqc = cm_object_get_child_by_name(state->u.k6.reg.pcr[9], "IRQC");
    state->u.k6.fld.pcr[9].isf = cm_object_get_child_by_name(state->u.k6.reg.pcr[9], "ISF");
    // PCR10 bitfields.
    state->u.k6.fld.pcr[10].ps = cm_object_get_child_by_name(state->u.k6.reg.pcr[10], "PS");
    state->u.k6.fld.pcr[10].pe = cm_object_get_child_by_name(state->u.k6.reg.pcr[10], "PE");
    state->u.k6.fld.pcr[10].sre = cm_object_get_child_by_name(state->u.k6.reg.pcr[10], "SRE");
    state->u.k6.fld.pcr[10].pfe = cm_object_get_child_by_name(state->u.k6.reg.pcr[10], "PFE");
    state->u.k6.fld.pcr[10].ode = cm_object_get_child_by_name(state->u.k6.reg.pcr[10], "ODE");
    state->u.k6.fld.pcr[10].dse = cm_object_get_child_by_name(state->u.k6.reg.pcr[10], "DSE");
    state->u.k6.fld.pcr[10].mux = cm_object_get_child_by_name(state->u.k6.reg.pcr[10], "MUX");
    state->u.k6.fld.pcr[10].lk = cm_object_get_child_by_name(state->u.k6.reg.pcr[10], "LK");
    state->u.k6.fld.pcr[10].irqc = cm_object_get_child_by_name(state->u.k6.reg.pcr[10], "IRQC");
    state->u.k6.fld.pcr[10].isf = cm_object_get_child_by_name(state->u.k6.reg.pcr[10], "ISF");
    // PCR11 bitfields.
    state->u.k6.fld.pcr[11].ps = cm_object_get_child_by_name(state->u.k6.reg.pcr[11], "PS");
    state->u.k6.fld.pcr[11].pe = cm_object_get_child_by_name(state->u.k6.reg.pcr[11], "PE");
    state->u.k6.fld.pcr[11].sre = cm_object_get_child_by_name(state->u.k6.reg.pcr[11], "SRE");
    state->u.k6.fld.pcr[11].pfe = cm_object_get_child_by_name(state->u.k6.reg.pcr[11], "PFE");
    state->u.k6.fld.pcr[11].ode = cm_object_get_child_by_name(state->u.k6.reg.pcr[11], "ODE");
    state->u.k6.fld.pcr[11].dse = cm_object_get_child_by_name(state->u.k6.reg.pcr[11], "DSE");
    state->u.k6.fld.pcr[11].mux = cm_object_get_child_by_name(state->u.k6.reg.pcr[11], "MUX");
    state->u.k6.fld.pcr[11].lk = cm_object_get_child_by_name(state->u.k6.reg.pcr[11], "LK");
    state->u.k6.fld.pcr[11].irqc = cm_object_get_child_by_name(state->u.k6.reg.pcr[11], "IRQC");
    state->u.k6.fld.pcr[11].isf = cm_object_get_child_by_name(state->u.k6.reg.pcr[11], "ISF");
    // PCR12 bitfields.
    state->u.k6.fld.pcr[12].ps = cm_object_get_child_by_name(state->u.k6.reg.pcr[12], "PS");
    state->u.k6.fld.pcr[12].pe = cm_object_get_child_by_name(state->u.k6.reg.pcr[12], "PE");
    state->u.k6.fld.pcr[12].sre = cm_object_get_child_by_name(state->u.k6.reg.pcr[12], "SRE");
    state->u.k6.fld.pcr[12].pfe = cm_object_get_child_by_name(state->u.k6.reg.pcr[12], "PFE");
    state->u.k6.fld.pcr[12].ode = cm_object_get_child_by_name(state->u.k6.reg.pcr[12], "ODE");
    state->u.k6.fld.pcr[12].dse = cm_object_get_child_by_name(state->u.k6.reg.pcr[12], "DSE");
    state->u.k6.fld.pcr[12].mux = cm_object_get_child_by_name(state->u.k6.reg.pcr[12], "MUX");
    state->u.k6.fld.pcr[12].lk = cm_object_get_child_by_name(state->u.k6.reg.pcr[12], "LK");
    state->u.k6.fld.pcr[12].irqc = cm_object_get_child_by_name(state->u.k6.reg.pcr[12], "IRQC");
    state->u.k6.fld.pcr[12].isf = cm_object_get_child_by_name(state->u.k6.reg.pcr[12], "ISF");
    // PCR13 bitfields.
    state->u.k6.fld.pcr[13].ps = cm_object_get_child_by_name(state->u.k6.reg.pcr[13], "PS");
    state->u.k6.fld.pcr[13].pe = cm_object_get_child_by_name(state->u.k6.reg.pcr[13], "PE");
    state->u.k6.fld.pcr[13].sre = cm_object_get_child_by_name(state->u.k6.reg.pcr[13], "SRE");
    state->u.k6.fld.pcr[13].pfe = cm_object_get_child_by_name(state->u.k6.reg.pcr[13], "PFE");
    state->u.k6.fld.pcr[13].ode = cm_object_get_child_by_name(state->u.k6.reg.pcr[13], "ODE");
    state->u.k6.fld.pcr[13].dse = cm_object_get_child_by_name(state->u.k6.reg.pcr[13], "DSE");
    state->u.k6.fld.pcr[13].mux = cm_object_get_child_by_name(state->u.k6.reg.pcr[13], "MUX");
    state->u.k6.fld.pcr[13].lk = cm_object_get_child_by_name(state->u.k6.reg.pcr[13], "LK");
    state->u.k6.fld.pcr[13].irqc = cm_object_get_child_by_name(state->u.k6.reg.pcr[13], "IRQC");
    state->u.k6.fld.pcr[13].isf = cm_object_get_child_by_name(state->u.k6.reg.pcr[13], "ISF");
    // PCR14 bitfields.
    state->u.k6.fld.pcr[14].ps = cm_object_get_child_by_name(state->u.k6.reg.pcr[14], "PS");
    state->u.k6.fld.pcr[14].pe = cm_object_get_child_by_name(state->u.k6.reg.pcr[14], "PE");
    state->u.k6.fld.pcr[14].sre = cm_object_get_child_by_name(state->u.k6.reg.pcr[14], "SRE");
    state->u.k6.fld.pcr[14].pfe = cm_object_get_child_by_name(state->u.k6.reg.pcr[14], "PFE");
    state->u.k6.fld.pcr[14].ode = cm_object_get_child_by_name(state->u.k6.reg.pcr[14], "ODE");
    state->u.k6.fld.pcr[14].dse = cm_object_get_child_by_name(state->u.k6.reg.pcr[14], "DSE");
    state->u.k6.fld.pcr[14].mux = cm_object_get_child_by_name(state->u.k6.reg.pcr[14], "MUX");
    state->u.k6.fld.pcr[14].lk = cm_object_get_child_by_name(state->u.k6.reg.pcr[14], "LK");
    state->u.k6.fld.pcr[14].irqc = cm_object_get_child_by_name(state->u.k6.reg.pcr[14], "IRQC");
    state->u.k6.fld.pcr[14].isf = cm_object_get_child_by_name(state->u.k6.reg.pcr[14], "ISF");
    // PCR15 bitfields.
    state->u.k6.fld.pcr[15].ps = cm_object_get_child_by_name(state->u.k6.reg.pcr[15], "PS");
    state->u.k6.fld.pcr[15].pe = cm_object_get_child_by_name(state->u.k6.reg.pcr[15], "PE");
    state->u.k6.fld.pcr[15].sre = cm_object_get_child_by_name(state->u.k6.reg.pcr[15], "SRE");
    state->u.k6.fld.pcr[15].pfe = cm_object_get_child_by_name(state->u.k6.reg.pcr[15], "PFE");
    state->u.k6.fld.pcr[15].ode = cm_object_get_child_by_name(state->u.k6.reg.pcr[15], "ODE");
    state->u.k6.fld.pcr[15].dse = cm_object_get_child_by_name(state->u.k6.reg.pcr[15], "DSE");
    state->u.k6.fld.pcr[15].mux = cm_object_get_child_by_name(state->u.k6.reg.pcr[15], "MUX");
    state->u.k6.fld.pcr[15].lk = cm_object_get_child_by_name(state->u.k6.reg.pcr[15], "LK");
    state->u.k6.fld.pcr[15].irqc = cm_object_get_child_by_name(state->u.k6.reg.pcr[15], "IRQC");
    state->u.k6.fld.pcr[15].isf = cm_object_get_child_by_name(state->u.k6.reg.pcr[15], "ISF");
    // PCR16 bitfields.
    state->u.k6.fld.pcr[16].ps = cm_object_get_child_by_name(state->u.k6.reg.pcr[16], "PS");
    state->u.k6.fld.pcr[16].pe = cm_object_get_child_by_name(state->u.k6.reg.pcr[16], "PE");
    state->u.k6.fld.pcr[16].sre = cm_object_get_child_by_name(state->u.k6.reg.pcr[16], "SRE");
    state->u.k6.fld.pcr[16].pfe = cm_object_get_child_by_name(state->u.k6.reg.pcr[16], "PFE");
    state->u.k6.fld.pcr[16].ode = cm_object_get_child_by_name(state->u.k6.reg.pcr[16], "ODE");
    state->u.k6.fld.pcr[16].dse = cm_object_get_child_by_name(state->u.k6.reg.pcr[16], "DSE");
    state->u.k6.fld.pcr[16].mux = cm_object_get_child_by_name(state->u.k6.reg.pcr[16], "MUX");
    state->u.k6.fld.pcr[16].lk = cm_object_get_child_by_name(state->u.k6.reg.pcr[16], "LK");
    state->u.k6.fld.pcr[16].irqc = cm_object_get_child_by_name(state->u.k6.reg.pcr[16], "IRQC");
    state->u.k6.fld.pcr[16].isf = cm_object_get_child_by_name(state->u.k6.reg.pcr[16], "ISF");
    // PCR17 bitfields.
    state->u.k6.fld.pcr[17].ps = cm_object_get_child_by_name(state->u.k6.reg.pcr[17], "PS");
    state->u.k6.fld.pcr[17].pe = cm_object_get_child_by_name(state->u.k6.reg.pcr[17], "PE");
    state->u.k6.fld.pcr[17].sre = cm_object_get_child_by_name(state->u.k6.reg.pcr[17], "SRE");
    state->u.k6.fld.pcr[17].pfe = cm_object_get_child_by_name(state->u.k6.reg.pcr[17], "PFE");
    state->u.k6.fld.pcr[17].ode = cm_object_get_child_by_name(state->u.k6.reg.pcr[17], "ODE");
    state->u.k6.fld.pcr[17].dse = cm_object_get_child_by_name(state->u.k6.reg.pcr[17], "DSE");
    state->u.k6.fld.pcr[17].mux = cm_object_get_child_by_name(state->u.k6.reg.pcr[17], "MUX");
    state->u.k6.fld.pcr[17].lk = cm_object_get_child_by_name(state->u.k6.reg.pcr[17], "LK");
    state->u.k6.fld.pcr[17].irqc = cm_object_get_child_by_name(state->u.k6.reg.pcr[17], "IRQC");
    state->u.k6.fld.pcr[17].isf = cm_object_get_child_by_name(state->u.k6.reg.pcr[17], "ISF");
    // PCR18 bitfields.
    state->u.k6.fld.pcr[18].ps = cm_object_get_child_by_name(state->u.k6.reg.pcr[18], "PS");
    state->u.k6.fld.pcr[18].pe = cm_object_get_child_by_name(state->u.k6.reg.pcr[18], "PE");
    state->u.k6.fld.pcr[18].sre = cm_object_get_child_by_name(state->u.k6.reg.pcr[18], "SRE");
    state->u.k6.fld.pcr[18].pfe = cm_object_get_child_by_name(state->u.k6.reg.pcr[18], "PFE");
    state->u.k6.fld.pcr[18].ode = cm_object_get_child_by_name(state->u.k6.reg.pcr[18], "ODE");
    state->u.k6.fld.pcr[18].dse = cm_object_get_child_by_name(state->u.k6.reg.pcr[18], "DSE");
    state->u.k6.fld.pcr[18].mux = cm_object_get_child_by_name(state->u.k6.reg.pcr[18], "MUX");
    state->u.k6.fld.pcr[18].lk = cm_object_get_child_by_name(state->u.k6.reg.pcr[18], "LK");
    state->u.k6.fld.pcr[18].irqc = cm_object_get_child_by_name(state->u.k6.reg.pcr[18], "IRQC");
    state->u.k6.fld.pcr[18].isf = cm_object_get_child_by_name(state->u.k6.reg.pcr[18], "ISF");
    // PCR19 bitfields.
    state->u.k6.fld.pcr[19].ps = cm_object_get_child_by_name(state->u.k6.reg.pcr[19], "PS");
    state->u.k6.fld.pcr[19].pe = cm_object_get_child_by_name(state->u.k6.reg.pcr[19], "PE");
    state->u.k6.fld.pcr[19].sre = cm_object_get_child_by_name(state->u.k6.reg.pcr[19], "SRE");
    state->u.k6.fld.pcr[19].pfe = cm_object_get_child_by_name(state->u.k6.reg.pcr[19], "PFE");
    state->u.k6.fld.pcr[19].ode = cm_object_get_child_by_name(state->u.k6.reg.pcr[19], "ODE");
    state->u.k6.fld.pcr[19].dse = cm_object_get_child_by_name(state->u.k6.reg.pcr[19], "DSE");
    state->u.k6.fld.pcr[19].mux = cm_object_get_child_by_name(state->u.k6.reg.pcr[19], "MUX");
    state->u.k6.fld.pcr[19].lk = cm_object_get_child_by_name(state->u.k6.reg.pcr[19], "LK");
    state->u.k6.fld.pcr[19].irqc = cm_object_get_child_by_name(state->u.k6.reg.pcr[19], "IRQC");
    state->u.k6.fld.pcr[19].isf = cm_object_get_child_by_name(state->u.k6.reg.pcr[19], "ISF");
    // PCR20 bitfields.
    state->u.k6.fld.pcr[20].ps = cm_object_get_child_by_name(state->u.k6.reg.pcr[20], "PS");
    state->u.k6.fld.pcr[20].pe = cm_object_get_child_by_name(state->u.k6.reg.pcr[20], "PE");
    state->u.k6.fld.pcr[20].sre = cm_object_get_child_by_name(state->u.k6.reg.pcr[20], "SRE");
    state->u.k6.fld.pcr[20].pfe = cm_object_get_child_by_name(state->u.k6.reg.pcr[20], "PFE");
    state->u.k6.fld.pcr[20].ode = cm_object_get_child_by_name(state->u.k6.reg.pcr[20], "ODE");
    state->u.k6.fld.pcr[20].dse = cm_object_get_child_by_name(state->u.k6.reg.pcr[20], "DSE");
    state->u.k6.fld.pcr[20].mux = cm_object_get_child_by_name(state->u.k6.reg.pcr[20], "MUX");
    state->u.k6.fld.pcr[20].lk = cm_object_get_child_by_name(state->u.k6.reg.pcr[20], "LK");
    state->u.k6.fld.pcr[20].irqc = cm_object_get_child_by_name(state->u.k6.reg.pcr[20], "IRQC");
    state->u.k6.fld.pcr[20].isf = cm_object_get_child_by_name(state->u.k6.reg.pcr[20], "ISF");
    // PCR21 bitfields.
    state->u.k6.fld.pcr[21].ps = cm_object_get_child_by_name(state->u.k6.reg.pcr[21], "PS");
    state->u.k6.fld.pcr[21].pe = cm_object_get_child_by_name(state->u.k6.reg.pcr[21], "PE");
    state->u.k6.fld.pcr[21].sre = cm_object_get_child_by_name(state->u.k6.reg.pcr[21], "SRE");
    state->u.k6.fld.pcr[21].pfe = cm_object_get_child_by_name(state->u.k6.reg.pcr[21], "PFE");
    state->u.k6.fld.pcr[21].ode = cm_object_get_child_by_name(state->u.k6.reg.pcr[21], "ODE");
    state->u.k6.fld.pcr[21].dse = cm_object_get_child_by_name(state->u.k6.reg.pcr[21], "DSE");
    state->u.k6.fld.pcr[21].mux = cm_object_get_child_by_name(state->u.k6.reg.pcr[21], "MUX");
    state->u.k6.fld.pcr[21].lk = cm_object_get_child_by_name(state->u.k6.reg.pcr[21], "LK");
    state->u.k6.fld.pcr[21].irqc = cm_object_get_child_by_name(state->u.k6.reg.pcr[21], "IRQC");
    state->u.k6.fld.pcr[21].isf = cm_object_get_child_by_name(state->u.k6.reg.pcr[21], "ISF");
    // PCR22 bitfields.
    state->u.k6.fld.pcr[22].ps = cm_object_get_child_by_name(state->u.k6.reg.pcr[22], "PS");
    state->u.k6.fld.pcr[22].pe = cm_object_get_child_by_name(state->u.k6.reg.pcr[22], "PE");
    state->u.k6.fld.pcr[22].sre = cm_object_get_child_by_name(state->u.k6.reg.pcr[22], "SRE");
    state->u.k6.fld.pcr[22].pfe = cm_object_get_child_by_name(state->u.k6.reg.pcr[22], "PFE");
    state->u.k6.fld.pcr[22].ode = cm_object_get_child_by_name(state->u.k6.reg.pcr[22], "ODE");
    state->u.k6.fld.pcr[22].dse = cm_object_get_child_by_name(state->u.k6.reg.pcr[22], "DSE");
    state->u.k6.fld.pcr[22].mux = cm_object_get_child_by_name(state->u.k6.reg.pcr[22], "MUX");
    state->u.k6.fld.pcr[22].lk = cm_object_get_child_by_name(state->u.k6.reg.pcr[22], "LK");
    state->u.k6.fld.pcr[22].irqc = cm_object_get_child_by_name(state->u.k6.reg.pcr[22], "IRQC");
    state->u.k6.fld.pcr[22].isf = cm_object_get_child_by_name(state->u.k6.reg.pcr[22], "ISF");
    // PCR23 bitfields.
    state->u.k6.fld.pcr[23].ps = cm_object_get_child_by_name(state->u.k6.reg.pcr[23], "PS");
    state->u.k6.fld.pcr[23].pe = cm_object_get_child_by_name(state->u.k6.reg.pcr[23], "PE");
    state->u.k6.fld.pcr[23].sre = cm_object_get_child_by_name(state->u.k6.reg.pcr[23], "SRE");
    state->u.k6.fld.pcr[23].pfe = cm_object_get_child_by_name(state->u.k6.reg.pcr[23], "PFE");
    state->u.k6.fld.pcr[23].ode = cm_object_get_child_by_name(state->u.k6.reg.pcr[23], "ODE");
    state->u.k6.fld.pcr[23].dse = cm_object_get_child_by_name(state->u.k6.reg.pcr[23], "DSE");
    state->u.k6.fld.pcr[23].mux = cm_object_get_child_by_name(state->u.k6.reg.pcr[23], "MUX");
    state->u.k6.fld.pcr[23].lk = cm_object_get_child_by_name(state->u.k6.reg.pcr[23], "LK");
    state->u.k6.fld.pcr[23].irqc = cm_object_get_child_by_name(state->u.k6.reg.pcr[23], "IRQC");
    state->u.k6.fld.pcr[23].isf = cm_object_get_child_by_name(state->u.k6.reg.pcr[23], "ISF");
    // PCR24 bitfields.
    state->u.k6.fld.pcr[24].ps = cm_object_get_child_by_name(state->u.k6.reg.pcr[24], "PS");
    state->u.k6.fld.pcr[24].pe = cm_object_get_child_by_name(state->u.k6.reg.pcr[24], "PE");
    state->u.k6.fld.pcr[24].sre = cm_object_get_child_by_name(state->u.k6.reg.pcr[24], "SRE");
    state->u.k6.fld.pcr[24].pfe = cm_object_get_child_by_name(state->u.k6.reg.pcr[24], "PFE");
    state->u.k6.fld.pcr[24].ode = cm_object_get_child_by_name(state->u.k6.reg.pcr[24], "ODE");
    state->u.k6.fld.pcr[24].dse = cm_object_get_child_by_name(state->u.k6.reg.pcr[24], "DSE");
    state->u.k6.fld.pcr[24].mux = cm_object_get_child_by_name(state->u.k6.reg.pcr[24], "MUX");
    state->u.k6.fld.pcr[24].lk = cm_object_get_child_by_name(state->u.k6.reg.pcr[24], "LK");
    state->u.k6.fld.pcr[24].irqc = cm_object_get_child_by_name(state->u.k6.reg.pcr[24], "IRQC");
    state->u.k6.fld.pcr[24].isf = cm_object_get_child_by_name(state->u.k6.reg.pcr[24], "ISF");
    // PCR25 bitfields.
    state->u.k6.fld.pcr[25].ps = cm_object_get_child_by_name(state->u.k6.reg.pcr[25], "PS");
    state->u.k6.fld.pcr[25].pe = cm_object_get_child_by_name(state->u.k6.reg.pcr[25], "PE");
    state->u.k6.fld.pcr[25].sre = cm_object_get_child_by_name(state->u.k6.reg.pcr[25], "SRE");
    state->u.k6.fld.pcr[25].pfe = cm_object_get_child_by_name(state->u.k6.reg.pcr[25], "PFE");
    state->u.k6.fld.pcr[25].ode = cm_object_get_child_by_name(state->u.k6.reg.pcr[25], "ODE");
    state->u.k6.fld.pcr[25].dse = cm_object_get_child_by_name(state->u.k6.reg.pcr[25], "DSE");
    state->u.k6.fld.pcr[25].mux = cm_object_get_child_by_name(state->u.k6.reg.pcr[25], "MUX");
    state->u.k6.fld.pcr[25].lk = cm_object_get_child_by_name(state->u.k6.reg.pcr[25], "LK");
    state->u.k6.fld.pcr[25].irqc = cm_object_get_child_by_name(state->u.k6.reg.pcr[25], "IRQC");
    state->u.k6.fld.pcr[25].isf = cm_object_get_child_by_name(state->u.k6.reg.pcr[25], "ISF");
    // PCR26 bitfields.
    state->u.k6.fld.pcr[26].ps = cm_object_get_child_by_name(state->u.k6.reg.pcr[26], "PS");
    state->u.k6.fld.pcr[26].pe = cm_object_get_child_by_name(state->u.k6.reg.pcr[26], "PE");
    state->u.k6.fld.pcr[26].sre = cm_object_get_child_by_name(state->u.k6.reg.pcr[26], "SRE");
    state->u.k6.fld.pcr[26].pfe = cm_object_get_child_by_name(state->u.k6.reg.pcr[26], "PFE");
    state->u.k6.fld.pcr[26].ode = cm_object_get_child_by_name(state->u.k6.reg.pcr[26], "ODE");
    state->u.k6.fld.pcr[26].dse = cm_object_get_child_by_name(state->u.k6.reg.pcr[26], "DSE");
    state->u.k6.fld.pcr[26].mux = cm_object_get_child_by_name(state->u.k6.reg.pcr[26], "MUX");
    state->u.k6.fld.pcr[26].lk = cm_object_get_child_by_name(state->u.k6.reg.pcr[26], "LK");
    state->u.k6.fld.pcr[26].irqc = cm_object_get_child_by_name(state->u.k6.reg.pcr[26], "IRQC");
    state->u.k6.fld.pcr[26].isf = cm_object_get_child_by_name(state->u.k6.reg.pcr[26], "ISF");
    // PCR27 bitfields.
    state->u.k6.fld.pcr[27].ps = cm_object_get_child_by_name(state->u.k6.reg.pcr[27], "PS");
    state->u.k6.fld.pcr[27].pe = cm_object_get_child_by_name(state->u.k6.reg.pcr[27], "PE");
    state->u.k6.fld.pcr[27].sre = cm_object_get_child_by_name(state->u.k6.reg.pcr[27], "SRE");
    state->u.k6.fld.pcr[27].pfe = cm_object_get_child_by_name(state->u.k6.reg.pcr[27], "PFE");
    state->u.k6.fld.pcr[27].ode = cm_object_get_child_by_name(state->u.k6.reg.pcr[27], "ODE");
    state->u.k6.fld.pcr[27].dse = cm_object_get_child_by_name(state->u.k6.reg.pcr[27], "DSE");
    state->u.k6.fld.pcr[27].mux = cm_object_get_child_by_name(state->u.k6.reg.pcr[27], "MUX");
    state->u.k6.fld.pcr[27].lk = cm_object_get_child_by_name(state->u.k6.reg.pcr[27], "LK");
    state->u.k6.fld.pcr[27].irqc = cm_object_get_child_by_name(state->u.k6.reg.pcr[27], "IRQC");
    state->u.k6.fld.pcr[27].isf = cm_object_get_child_by_name(state->u.k6.reg.pcr[27], "ISF");
    // PCR28 bitfields.
    state->u.k6.fld.pcr[28].ps = cm_object_get_child_by_name(state->u.k6.reg.pcr[28], "PS");
    state->u.k6.fld.pcr[28].pe = cm_object_get_child_by_name(state->u.k6.reg.pcr[28], "PE");
    state->u.k6.fld.pcr[28].sre = cm_object_get_child_by_name(state->u.k6.reg.pcr[28], "SRE");
    state->u.k6.fld.pcr[28].pfe = cm_object_get_child_by_name(state->u.k6.reg.pcr[28], "PFE");
    state->u.k6.fld.pcr[28].ode = cm_object_get_child_by_name(state->u.k6.reg.pcr[28], "ODE");
    state->u.k6.fld.pcr[28].dse = cm_object_get_child_by_name(state->u.k6.reg.pcr[28], "DSE");
    state->u.k6.fld.pcr[28].mux = cm_object_get_child_by_name(state->u.k6.reg.pcr[28], "MUX");
    state->u.k6.fld.pcr[28].lk = cm_object_get_child_by_name(state->u.k6.reg.pcr[28], "LK");
    state->u.k6.fld.pcr[28].irqc = cm_object_get_child_by_name(state->u.k6.reg.pcr[28], "IRQC");
    state->u.k6.fld.pcr[28].isf = cm_object_get_child_by_name(state->u.k6.reg.pcr[28], "ISF");
    // PCR29 bitfields.
    state->u.k6.fld.pcr[29].ps = cm_object_get_child_by_name(state->u.k6.reg.pcr[29], "PS");
    state->u.k6.fld.pcr[29].pe = cm_object_get_child_by_name(state->u.k6.reg.pcr[29], "PE");
    state->u.k6.fld.pcr[29].sre = cm_object_get_child_by_name(state->u.k6.reg.pcr[29], "SRE");
    state->u.k6.fld.pcr[29].pfe = cm_object_get_child_by_name(state->u.k6.reg.pcr[29], "PFE");
    state->u.k6.fld.pcr[29].ode = cm_object_get_child_by_name(state->u.k6.reg.pcr[29], "ODE");
    state->u.k6.fld.pcr[29].dse = cm_object_get_child_by_name(state->u.k6.reg.pcr[29], "DSE");
    state->u.k6.fld.pcr[29].mux = cm_object_get_child_by_name(state->u.k6.reg.pcr[29], "MUX");
    state->u.k6.fld.pcr[29].lk = cm_object_get_child_by_name(state->u.k6.reg.pcr[29], "LK");
    state->u.k6.fld.pcr[29].irqc = cm_object_get_child_by_name(state->u.k6.reg.pcr[29], "IRQC");
    state->u.k6.fld.pcr[29].isf = cm_object_get_child_by_name(state->u.k6.reg.pcr[29], "ISF");
    // PCR30 bitfields.
    state->u.k6.fld.pcr[30].ps = cm_object_get_child_by_name(state->u.k6.reg.pcr[30], "PS");
    state->u.k6.fld.pcr[30].pe = cm_object_get_child_by_name(state->u.k6.reg.pcr[30], "PE");
    state->u.k6.fld.pcr[30].sre = cm_object_get_child_by_name(state->u.k6.reg.pcr[30], "SRE");
    state->u.k6.fld.pcr[30].pfe = cm_object_get_child_by_name(state->u.k6.reg.pcr[30], "PFE");
    state->u.k6.fld.pcr[30].ode = cm_object_get_child_by_name(state->u.k6.reg.pcr[30], "ODE");
    state->u.k6.fld.pcr[30].dse = cm_object_get_child_by_name(state->u.k6.reg.pcr[30], "DSE");
    state->u.k6.fld.pcr[30].mux = cm_object_get_child_by_name(state->u.k6.reg.pcr[30], "MUX");
    state->u.k6.fld.pcr[30].lk = cm_object_get_child_by_name(state->u.k6.reg.pcr[30], "LK");
    state->u.k6.fld.pcr[30].irqc = cm_object_get_child_by_name(state->u.k6.reg.pcr[30], "IRQC");
    state->u.k6.fld.pcr[30].isf = cm_object_get_child_by_name(state->u.k6.reg.pcr[30], "ISF");
    // PCR31 bitfields.
    state->u.k6.fld.pcr[31].ps = cm_object_get_child_by_name(state->u.k6.reg.pcr[31], "PS");
    state->u.k6.fld.pcr[31].pe = cm_object_get_child_by_name(state->u.k6.reg.pcr[31], "PE");
    state->u.k6.fld.pcr[31].sre = cm_object_get_child_by_name(state->u.k6.reg.pcr[31], "SRE");
    state->u.k6.fld.pcr[31].pfe = cm_object_get_child_by_name(state->u.k6.reg.pcr[31], "PFE");
    state->u.k6.fld.pcr[31].ode = cm_object_get_child_by_name(state->u.k6.reg.pcr[31], "ODE");
    state->u.k6.fld.pcr[31].dse = cm_object_get_child_by_name(state->u.k6.reg.pcr[31], "DSE");
    state->u.k6.fld.pcr[31].mux = cm_object_get_child_by_name(state->u.k6.reg.pcr[31], "MUX");
    state->u.k6.fld.pcr[31].lk = cm_object_get_child_by_name(state->u.k6.reg.pcr[31], "LK");
    state->u.k6.fld.pcr[31].irqc = cm_object_get_child_by_name(state->u.k6.reg.pcr[31], "IRQC");
    state->u.k6.fld.pcr[31].isf = cm_object_get_child_by_name(state->u.k6.reg.pcr[31], "ISF");

    // GPCLR bitfields.
    state->u.k6.fld.gpclr.gpwd = cm_object_get_child_by_name(state->u.k6.reg.gpclr, "GPWD");
    state->u.k6.fld.gpclr.gpwe = cm_object_get_child_by_name(state->u.k6.reg.gpclr, "GPWE");

    // GPCHR bitfields.
    state->u.k6.fld.gpchr.gpwd = cm_object_get_child_by_name(state->u.k6.reg.gpchr, "GPWD");
    state->u.k6.fld.gpchr.gpwe = cm_object_get_child_by_name(state->u.k6.reg.gpchr, "GPWE");

    // ISFR bitfields.
    state->u.k6.fld.isfr.isf = cm_object_get_child_by_name(state->u.k6.reg.isfr, "ISF");
}

// ----- 8< ----- 8< -----  8< ----- 8< ----- 8< ----- 8< ----- 8< -----

// ----- Public ---------------------------------------------------------------

// Create PORT%c and return it.

Object* kinetis_port_create(Object *parent, kinetis_port_index_t index)
{
    if ((int) index >= KINETIS_PORT_PORT_UNDEFINED) {
        hw_error("Cannot assign PORT%c: QEMU supports only %d ports\n",
                'A' + index, KINETIS_PORT_PORT_UNDEFINED);
    }

    char child_name[10];
    snprintf(child_name, sizeof(child_name) - 1, "PORT%c",
            'A' + index - KINETIS_PORT_PORTA);
    // Passing a local string is ok.
    Object *port = cm_object_new(parent, child_name, TYPE_KINETIS_PORT);

    object_property_set_int(port, index, "port-index", NULL);

    cm_object_realize(port);

    return port;
}

static void kinetis_port_update_out(KinetisPORTState *state);

void kinetis_port_set_gpio_out(KinetisPORTState *state, uint32_t value,
                                  uint32_t mask)
{
    state->gpio_value = value;
    state->gpio_mask  = mask;

    kinetis_port_update_out(state);
}

// ----- Private --------------------------------------------------------------

#if 0
static peripheral_register_t kinetis_port_xxx_pre_write_callback(Object *reg,
        Object *periph, uint32_t addr, uint32_t offset, unsigned size,
        peripheral_register_t value, peripheral_register_t full_value)
{
    KinetisPORTState *state = KINETIS_PORT_STATE(periph);

    peripheral_register_t prev_value = peripheral_register_get_raw_prev_value(reg);

    // TODO: Add code to adjust the value (like applying some masks,
    // for example prevent setting interrupts not enabled).
    // Also process cleared/set by write 1/0 bits.
    // The returned value will be stored in the register value.

    return full_value;
}

static void kinetis_port_xxx_post_write_callback(Object *reg, Object *periph,
        uint32_t addr, uint32_t offset, unsigned size,
        peripheral_register_t value, peripheral_register_t full_value)
{
    KinetisPORTState *state = KINETIS_PORT_STATE(periph);

    peripheral_register_t prev_value = peripheral_register_get_raw_prev_value(reg);
    // The new register value is full_value, the old one is prev_value.

    // TODO: Add code to send the value to the consumer.
}

static peripheral_register_t kinetis_port_xxx_pre_read_callback(Object *reg,
        Object *periph, uint32_t addr, uint32_t offset, unsigned size)
{
    KinetisPORTState *state = KINETIS_PORT_STATE(periph);

    peripheral_register_t value = 0;

    // Add code to get the value from the producer, and return it.

    // This value, possibly masked, will be stored in the register
    // and returned when the register is read.
    return value;
}

static void kinetis_port_xxx_post_read_callback(Object *reg, Object *periph,
        uint32_t addr, uint32_t offset, unsigned size)
{
    KinetisPORTState *state = KINETIS_PORT_STATE(periph);

    peripheral_register_t value = peripheral_register_get_raw_value(reg);

    // TODO: add code to perform the post read actions, like clearing some bits.
}
#endif

static void kinetis_port_update_out(KinetisPORTState *state)
{
    // For now, just print the result out
    char out_str[33];
    int i;
    for (i = 0; i < 32; i++) {
        uint32_t bit_mask = (1 << i);
        if (!(state->gpio_pin_mask & bit_mask)) {
            // Pin is not configured as GPIO
            out_str[31-i] = 'x';
        } else if (!(state->gpio_mask & bit_mask)) {
            // Pin is set as an input
            out_str[31-i] = 'Z';
        } else if (state->gpio_value & bit_mask) {
            // Output is high
            out_str[31-i] = '1';
        } else {
            // Output is low
            out_str[31-i] = '0';
        }
    }
    out_str[32] = '\0';

    int64_t time = qemu_clock_get_ns(QEMU_CLOCK_VIRTUAL);

    qemu_log_mask(LOG_IO, "%s(PORT%c, %s, t=%li)\n", __FUNCTION__, 'A'+state->port_index, out_str, time);
}

static void kinetis_port_pcr_post_write_callback(Object *reg, Object *periph,
        uint32_t addr, uint32_t offset, unsigned size,
        peripheral_register_t value, peripheral_register_t full_value)
{
    KinetisPORTState *state = KINETIS_PORT_STATE(periph);

    uint32_t pin_mask = 0;
    // Recompute the gpio pin mask by iterating through all the PCRs
    int i;
    for (i = 0; i < 32; i++) {
        if (register_bitfield_read_value(state->u.k6.fld.pcr[i].mux) == 1) {
            pin_mask |= (1 << i);
        }
    }

    state->gpio_pin_mask = pin_mask;

    kinetis_port_update_out(state);
}

// ----------------------------------------------------------------------------

// TODO: remove this if the peripheral is always enabled.
static bool kinetis_port_is_enabled(Object *obj)
{
    KinetisPORTState *state = KINETIS_PORT_STATE(obj);

    if (register_bitfield_is_non_zero(state->enabling_bit)) {
        return true; // Positive logic, bit == 1 means enabled.
    }

    // Not enabled
    return false;
}

static void kinetis_port_instance_init_callback(Object *obj)
{
    qemu_log_function_name();

    KinetisPORTState *state = KINETIS_PORT_STATE(obj);

    // Capabilities are not yet available.

    cm_object_property_add_int(obj, "port-index",
            (const int *) &state->port_index);
    state->port_index = KINETIS_PORT_PORT_UNDEFINED;

    // TODO: remove this if the peripheral is always enabled.
    state->enabling_bit = NULL;
    
    // TODO: Add code to initialise all members.
    state->gpio_pin_mask = 0;
    state->gpio_mask = 0;
    state->gpio_value = 0;
}

static void kinetis_port_realize_callback(DeviceState *dev, Error **errp)
{
    qemu_log_function_name();

    // Call parent realize().
    if (!cm_device_parent_realize(dev, errp, TYPE_KINETIS_PORT)) {
        return;
    }

    KinetisMCUState *mcu = kinetis_mcu_get();
    CortexMState *cm_state = CORTEXM_MCU_STATE(mcu);

    KinetisPORTState *state = KINETIS_PORT_STATE(dev);
    // First thing first: get capabilities from MCU, needed everywhere.
    state->capabilities = mcu->capabilities;

    // Also keep a local pointer, to access them easier.
    const KinetisCapabilities *capabilities = state->capabilities;
    assert(capabilities != NULL);

    Object *obj = OBJECT(dev);

    char periph_name[10];
    snprintf(periph_name, sizeof(periph_name) - 1, "PORT%c",
            'A' + state->port_index);

    svd_set_peripheral_address_block(cm_state->svd_json, periph_name, obj);
    peripheral_create_memory_region(obj);

    // TODO: remove this if the peripheral is always enabled.
    char enabling_bit_name[KINETIS_SIM_SIZEOF_ENABLING_BITFIELD];

    switch (capabilities->family) {
    case KINETIS_FAMILY_K6:


            mk64f12_port_create_objects(obj, cm_state->svd_json, periph_name);

            // TODO: add actions.
            // cm_object_property_set_str(state->u.k6.fld.xxx.fff, "GGG", "follows");
            // cm_object_property_set_str(state->u.k6.fld.xxx.fff, "GGG", "cleared-by");

            // TODO: add callbacks.
            // peripheral_register_set_pre_read(state->k6.reg.xxx, &kinetis_port_xxx_pre_read_callback);
            // peripheral_register_set_post_read(state->k6.reg.xxx, &kinetis_port_xxx_post_read_callback);
            // peripheral_register_set_pre_read(state->k6.reg.xxx, &kinetis_port_xxx_pret_read_callback);
            // peripheral_register_set_post_write(state->k6.reg.xxx, &kinetis_port_xxx_post_write_callback);

            for (int i = 0; i < 32; i++) {
                peripheral_register_set_post_write(state->u.k6.reg.pcr[i], &kinetis_port_pcr_post_write_callback);
            }

            // TODO: add interrupts.

            // TODO: remove this if the peripheral is always enabled.
            snprintf(enabling_bit_name, sizeof(enabling_bit_name) - 1,
                DEVICE_PATH_KINETIS_SIM "/SCGC5/PORT%c",
                'A' + state->port_index - KINETIS_PORT_PORTA);


        break;

    default:
        assert(false);
        break;
    }

    // TODO: remove this if the peripheral is always enabled.
    state->enabling_bit = OBJECT(cm_device_by_name(enabling_bit_name));

    peripheral_prepare_registers(obj);
}

static void kinetis_port_reset_callback(DeviceState *dev)
{
    qemu_log_function_name();

    // Call parent reset(); this will reset all children registers.
    cm_device_parent_reset(dev, TYPE_KINETIS_PORT);
}

static void kinetis_port_class_init_callback(ObjectClass *klass, void *data)
{
    DeviceClass *dc = DEVICE_CLASS(klass);

    dc->reset = kinetis_port_reset_callback;
    dc->realize = kinetis_port_realize_callback;

    // TODO: remove this if the peripheral is always enabled.
    PeripheralClass *per_class = PERIPHERAL_CLASS(klass);
    per_class->is_enabled = kinetis_port_is_enabled;
}

static const TypeInfo kinetis_port_type_info = {
    .name = TYPE_KINETIS_PORT,
    .parent = TYPE_KINETIS_PORT_PARENT,
    .instance_init = kinetis_port_instance_init_callback,
    .instance_size = sizeof(KinetisPORTState),
    .class_init = kinetis_port_class_init_callback,
    .class_size = sizeof(KinetisPORTClass) };

static void kinetis_port_register_types(void)
{
    type_register_static(&kinetis_port_type_info);
}

type_init(kinetis_port_register_types);

// ----------------------------------------------------------------------------
