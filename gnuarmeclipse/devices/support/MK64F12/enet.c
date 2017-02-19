/*
 * Kinetis - ENET (Ethernet MAC-NET Core) emulation.
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

#include <hw/cortexm/kinetis/enet.h>
#include <hw/cortexm/kinetis/mcu.h>
#include <hw/cortexm/helper.h>
#include <hw/cortexm/svd.h>

// ----- Generated code -------------------------------------------------------
//
// ----- 8< ----- 8< -----  8< ----- 8< ----- 8< ----- 8< ----- 8< -----

// DO NOT EDIT! Automatically generated!
static void mk64f12_enet_create_objects(Object *obj, JSON_Object *svd, const char *name)
{
    KinetisENETState *state = KINETIS_ENET_STATE(obj);

    JSON_Object *periph = svd_get_peripheral_by_name(svd, name);
    svd_add_peripheral_properties_and_children(obj, periph, svd);

    // Registers. 
    state->u.k6.reg.eir = cm_object_get_child_by_name(obj, "EIR");
    state->u.k6.reg.eimr = cm_object_get_child_by_name(obj, "EIMR");
    state->u.k6.reg.rdar = cm_object_get_child_by_name(obj, "RDAR");
    state->u.k6.reg.tdar = cm_object_get_child_by_name(obj, "TDAR");
    state->u.k6.reg.ecr = cm_object_get_child_by_name(obj, "ECR");
    state->u.k6.reg.mmfr = cm_object_get_child_by_name(obj, "MMFR");
    state->u.k6.reg.mscr = cm_object_get_child_by_name(obj, "MSCR");
    state->u.k6.reg.mibc = cm_object_get_child_by_name(obj, "MIBC");
    state->u.k6.reg.rcr = cm_object_get_child_by_name(obj, "RCR");
    state->u.k6.reg.tcr = cm_object_get_child_by_name(obj, "TCR");
    state->u.k6.reg.palr = cm_object_get_child_by_name(obj, "PALR");
    state->u.k6.reg.paur = cm_object_get_child_by_name(obj, "PAUR");
    state->u.k6.reg.opd = cm_object_get_child_by_name(obj, "OPD");
    state->u.k6.reg.iaur = cm_object_get_child_by_name(obj, "IAUR");
    state->u.k6.reg.ialr = cm_object_get_child_by_name(obj, "IALR");
    state->u.k6.reg.gaur = cm_object_get_child_by_name(obj, "GAUR");
    state->u.k6.reg.galr = cm_object_get_child_by_name(obj, "GALR");
    state->u.k6.reg.tfwr = cm_object_get_child_by_name(obj, "TFWR");
    state->u.k6.reg.rdsr = cm_object_get_child_by_name(obj, "RDSR");
    state->u.k6.reg.tdsr = cm_object_get_child_by_name(obj, "TDSR");
    state->u.k6.reg.mrbr = cm_object_get_child_by_name(obj, "MRBR");
    state->u.k6.reg.rsfl = cm_object_get_child_by_name(obj, "RSFL");
    state->u.k6.reg.rsem = cm_object_get_child_by_name(obj, "RSEM");
    state->u.k6.reg.raem = cm_object_get_child_by_name(obj, "RAEM");
    state->u.k6.reg.rafl = cm_object_get_child_by_name(obj, "RAFL");
    state->u.k6.reg.tsem = cm_object_get_child_by_name(obj, "TSEM");
    state->u.k6.reg.taem = cm_object_get_child_by_name(obj, "TAEM");
    state->u.k6.reg.tafl = cm_object_get_child_by_name(obj, "TAFL");
    state->u.k6.reg.tipg = cm_object_get_child_by_name(obj, "TIPG");
    state->u.k6.reg.ftrl = cm_object_get_child_by_name(obj, "FTRL");
    state->u.k6.reg.tacc = cm_object_get_child_by_name(obj, "TACC");
    state->u.k6.reg.racc = cm_object_get_child_by_name(obj, "RACC");
    state->u.k6.reg.rmon_t_packets = cm_object_get_child_by_name(obj, "RMON_T_PACKETS");
    state->u.k6.reg.rmon_t_bc_pkt = cm_object_get_child_by_name(obj, "RMON_T_BC_PKT");
    state->u.k6.reg.rmon_t_mc_pkt = cm_object_get_child_by_name(obj, "RMON_T_MC_PKT");
    state->u.k6.reg.rmon_t_crc_align = cm_object_get_child_by_name(obj, "RMON_T_CRC_ALIGN");
    state->u.k6.reg.rmon_t_undersize = cm_object_get_child_by_name(obj, "RMON_T_UNDERSIZE");
    state->u.k6.reg.rmon_t_oversize = cm_object_get_child_by_name(obj, "RMON_T_OVERSIZE");
    state->u.k6.reg.rmon_t_frag = cm_object_get_child_by_name(obj, "RMON_T_FRAG");
    state->u.k6.reg.rmon_t_jab = cm_object_get_child_by_name(obj, "RMON_T_JAB");
    state->u.k6.reg.rmon_t_col = cm_object_get_child_by_name(obj, "RMON_T_COL");
    state->u.k6.reg.rmon_t_p64 = cm_object_get_child_by_name(obj, "RMON_T_P64");
    state->u.k6.reg.rmon_t_p65to127 = cm_object_get_child_by_name(obj, "RMON_T_P65TO127");
    state->u.k6.reg.rmon_t_p128to255 = cm_object_get_child_by_name(obj, "RMON_T_P128TO255");
    state->u.k6.reg.rmon_t_p256to511 = cm_object_get_child_by_name(obj, "RMON_T_P256TO511");
    state->u.k6.reg.rmon_t_p512to1023 = cm_object_get_child_by_name(obj, "RMON_T_P512TO1023");
    state->u.k6.reg.rmon_t_p1024to2047 = cm_object_get_child_by_name(obj, "RMON_T_P1024TO2047");
    state->u.k6.reg.rmon_t_p_gte2048 = cm_object_get_child_by_name(obj, "RMON_T_P_GTE2048");
    state->u.k6.reg.rmon_t_octets = cm_object_get_child_by_name(obj, "RMON_T_OCTETS");
    state->u.k6.reg.ieee_t_frame_ok = cm_object_get_child_by_name(obj, "IEEE_T_FRAME_OK");
    state->u.k6.reg.ieee_t_1col = cm_object_get_child_by_name(obj, "IEEE_T_1COL");
    state->u.k6.reg.ieee_t_mcol = cm_object_get_child_by_name(obj, "IEEE_T_MCOL");
    state->u.k6.reg.ieee_t_def = cm_object_get_child_by_name(obj, "IEEE_T_DEF");
    state->u.k6.reg.ieee_t_lcol = cm_object_get_child_by_name(obj, "IEEE_T_LCOL");
    state->u.k6.reg.ieee_t_excol = cm_object_get_child_by_name(obj, "IEEE_T_EXCOL");
    state->u.k6.reg.ieee_t_macerr = cm_object_get_child_by_name(obj, "IEEE_T_MACERR");
    state->u.k6.reg.ieee_t_cserr = cm_object_get_child_by_name(obj, "IEEE_T_CSERR");
    state->u.k6.reg.ieee_t_fdxfc = cm_object_get_child_by_name(obj, "IEEE_T_FDXFC");
    state->u.k6.reg.ieee_t_octets_ok = cm_object_get_child_by_name(obj, "IEEE_T_OCTETS_OK");
    state->u.k6.reg.rmon_r_packets = cm_object_get_child_by_name(obj, "RMON_R_PACKETS");
    state->u.k6.reg.rmon_r_bc_pkt = cm_object_get_child_by_name(obj, "RMON_R_BC_PKT");
    state->u.k6.reg.rmon_r_mc_pkt = cm_object_get_child_by_name(obj, "RMON_R_MC_PKT");
    state->u.k6.reg.rmon_r_crc_align = cm_object_get_child_by_name(obj, "RMON_R_CRC_ALIGN");
    state->u.k6.reg.rmon_r_undersize = cm_object_get_child_by_name(obj, "RMON_R_UNDERSIZE");
    state->u.k6.reg.rmon_r_oversize = cm_object_get_child_by_name(obj, "RMON_R_OVERSIZE");
    state->u.k6.reg.rmon_r_frag = cm_object_get_child_by_name(obj, "RMON_R_FRAG");
    state->u.k6.reg.rmon_r_jab = cm_object_get_child_by_name(obj, "RMON_R_JAB");
    state->u.k6.reg.rmon_r_p64 = cm_object_get_child_by_name(obj, "RMON_R_P64");
    state->u.k6.reg.rmon_r_p65to127 = cm_object_get_child_by_name(obj, "RMON_R_P65TO127");
    state->u.k6.reg.rmon_r_p128to255 = cm_object_get_child_by_name(obj, "RMON_R_P128TO255");
    state->u.k6.reg.rmon_r_p256to511 = cm_object_get_child_by_name(obj, "RMON_R_P256TO511");
    state->u.k6.reg.rmon_r_p512to1023 = cm_object_get_child_by_name(obj, "RMON_R_P512TO1023");
    state->u.k6.reg.rmon_r_p1024to2047 = cm_object_get_child_by_name(obj, "RMON_R_P1024TO2047");
    state->u.k6.reg.rmon_r_p_gte2048 = cm_object_get_child_by_name(obj, "RMON_R_P_GTE2048");
    state->u.k6.reg.rmon_r_octets = cm_object_get_child_by_name(obj, "RMON_R_OCTETS");
    state->u.k6.reg.ieee_r_drop = cm_object_get_child_by_name(obj, "IEEE_R_DROP");
    state->u.k6.reg.ieee_r_frame_ok = cm_object_get_child_by_name(obj, "IEEE_R_FRAME_OK");
    state->u.k6.reg.ieee_r_crc = cm_object_get_child_by_name(obj, "IEEE_R_CRC");
    state->u.k6.reg.ieee_r_align = cm_object_get_child_by_name(obj, "IEEE_R_ALIGN");
    state->u.k6.reg.ieee_r_macerr = cm_object_get_child_by_name(obj, "IEEE_R_MACERR");
    state->u.k6.reg.ieee_r_fdxfc = cm_object_get_child_by_name(obj, "IEEE_R_FDXFC");
    state->u.k6.reg.ieee_r_octets_ok = cm_object_get_child_by_name(obj, "IEEE_R_OCTETS_OK");
    state->u.k6.reg.atcr = cm_object_get_child_by_name(obj, "ATCR");
    state->u.k6.reg.atvr = cm_object_get_child_by_name(obj, "ATVR");
    state->u.k6.reg.atoff = cm_object_get_child_by_name(obj, "ATOFF");
    state->u.k6.reg.atper = cm_object_get_child_by_name(obj, "ATPER");
    state->u.k6.reg.atcor = cm_object_get_child_by_name(obj, "ATCOR");
    state->u.k6.reg.atinc = cm_object_get_child_by_name(obj, "ATINC");
    state->u.k6.reg.atstmp = cm_object_get_child_by_name(obj, "ATSTMP");
    state->u.k6.reg.tgsr = cm_object_get_child_by_name(obj, "TGSR");
    state->u.k6.reg.tcsr[0] = cm_object_get_child_by_name(obj, "TCSR0");
    state->u.k6.reg.tcsr[1] = cm_object_get_child_by_name(obj, "TCSR1");
    state->u.k6.reg.tcsr[2] = cm_object_get_child_by_name(obj, "TCSR2");
    state->u.k6.reg.tcsr[3] = cm_object_get_child_by_name(obj, "TCSR3");
    state->u.k6.reg.tccr[0] = cm_object_get_child_by_name(obj, "TCCR0");
    state->u.k6.reg.tccr[1] = cm_object_get_child_by_name(obj, "TCCR1");
    state->u.k6.reg.tccr[2] = cm_object_get_child_by_name(obj, "TCCR2");
    state->u.k6.reg.tccr[3] = cm_object_get_child_by_name(obj, "TCCR3");

    // EIR bitfields.
    state->u.k6.fld.eir.ts_timer = cm_object_get_child_by_name(state->u.k6.reg.eir, "TS_TIMER");
    state->u.k6.fld.eir.ts_avail = cm_object_get_child_by_name(state->u.k6.reg.eir, "TS_AVAIL");
    state->u.k6.fld.eir.wakeup = cm_object_get_child_by_name(state->u.k6.reg.eir, "WAKEUP");
    state->u.k6.fld.eir.plr = cm_object_get_child_by_name(state->u.k6.reg.eir, "PLR");
    state->u.k6.fld.eir.un = cm_object_get_child_by_name(state->u.k6.reg.eir, "UN");
    state->u.k6.fld.eir.rl = cm_object_get_child_by_name(state->u.k6.reg.eir, "RL");
    state->u.k6.fld.eir.lc = cm_object_get_child_by_name(state->u.k6.reg.eir, "LC");
    state->u.k6.fld.eir.eberr = cm_object_get_child_by_name(state->u.k6.reg.eir, "EBERR");
    state->u.k6.fld.eir.mii = cm_object_get_child_by_name(state->u.k6.reg.eir, "MII");
    state->u.k6.fld.eir.rxb = cm_object_get_child_by_name(state->u.k6.reg.eir, "RXB");
    state->u.k6.fld.eir.rxf = cm_object_get_child_by_name(state->u.k6.reg.eir, "RXF");
    state->u.k6.fld.eir.txb = cm_object_get_child_by_name(state->u.k6.reg.eir, "TXB");
    state->u.k6.fld.eir.txf = cm_object_get_child_by_name(state->u.k6.reg.eir, "TXF");
    state->u.k6.fld.eir.gra = cm_object_get_child_by_name(state->u.k6.reg.eir, "GRA");
    state->u.k6.fld.eir.babt = cm_object_get_child_by_name(state->u.k6.reg.eir, "BABT");
    state->u.k6.fld.eir.babr = cm_object_get_child_by_name(state->u.k6.reg.eir, "BABR");

    // EIMR bitfields.
    state->u.k6.fld.eimr.ts_timer = cm_object_get_child_by_name(state->u.k6.reg.eimr, "TS_TIMER");
    state->u.k6.fld.eimr.ts_avail = cm_object_get_child_by_name(state->u.k6.reg.eimr, "TS_AVAIL");
    state->u.k6.fld.eimr.wakeup = cm_object_get_child_by_name(state->u.k6.reg.eimr, "WAKEUP");
    state->u.k6.fld.eimr.plr = cm_object_get_child_by_name(state->u.k6.reg.eimr, "PLR");
    state->u.k6.fld.eimr.un = cm_object_get_child_by_name(state->u.k6.reg.eimr, "UN");
    state->u.k6.fld.eimr.rl = cm_object_get_child_by_name(state->u.k6.reg.eimr, "RL");
    state->u.k6.fld.eimr.lc = cm_object_get_child_by_name(state->u.k6.reg.eimr, "LC");
    state->u.k6.fld.eimr.eberr = cm_object_get_child_by_name(state->u.k6.reg.eimr, "EBERR");
    state->u.k6.fld.eimr.mii = cm_object_get_child_by_name(state->u.k6.reg.eimr, "MII");
    state->u.k6.fld.eimr.rxb = cm_object_get_child_by_name(state->u.k6.reg.eimr, "RXB");
    state->u.k6.fld.eimr.rxf = cm_object_get_child_by_name(state->u.k6.reg.eimr, "RXF");
    state->u.k6.fld.eimr.txb = cm_object_get_child_by_name(state->u.k6.reg.eimr, "TXB");
    state->u.k6.fld.eimr.txf = cm_object_get_child_by_name(state->u.k6.reg.eimr, "TXF");
    state->u.k6.fld.eimr.gra = cm_object_get_child_by_name(state->u.k6.reg.eimr, "GRA");
    state->u.k6.fld.eimr.babt = cm_object_get_child_by_name(state->u.k6.reg.eimr, "BABT");
    state->u.k6.fld.eimr.babr = cm_object_get_child_by_name(state->u.k6.reg.eimr, "BABR");

    // RDAR bitfields.
    state->u.k6.fld.rdar.rdar = cm_object_get_child_by_name(state->u.k6.reg.rdar, "RDAR");

    // TDAR bitfields.
    state->u.k6.fld.tdar.tdar = cm_object_get_child_by_name(state->u.k6.reg.tdar, "TDAR");

    // ECR bitfields.
    state->u.k6.fld.ecr.reset = cm_object_get_child_by_name(state->u.k6.reg.ecr, "RESET");
    state->u.k6.fld.ecr.etheren = cm_object_get_child_by_name(state->u.k6.reg.ecr, "ETHEREN");
    state->u.k6.fld.ecr.magicen = cm_object_get_child_by_name(state->u.k6.reg.ecr, "MAGICEN");
    state->u.k6.fld.ecr.sleep = cm_object_get_child_by_name(state->u.k6.reg.ecr, "SLEEP");
    state->u.k6.fld.ecr.en1588 = cm_object_get_child_by_name(state->u.k6.reg.ecr, "EN1588");
    state->u.k6.fld.ecr.dbgen = cm_object_get_child_by_name(state->u.k6.reg.ecr, "DBGEN");
    state->u.k6.fld.ecr.stopen = cm_object_get_child_by_name(state->u.k6.reg.ecr, "STOPEN");
    state->u.k6.fld.ecr.dbswp = cm_object_get_child_by_name(state->u.k6.reg.ecr, "DBSWP");

    // MMFR bitfields.
    state->u.k6.fld.mmfr.data = cm_object_get_child_by_name(state->u.k6.reg.mmfr, "DATA");
    state->u.k6.fld.mmfr.ta = cm_object_get_child_by_name(state->u.k6.reg.mmfr, "TA");
    state->u.k6.fld.mmfr.ra = cm_object_get_child_by_name(state->u.k6.reg.mmfr, "RA");
    state->u.k6.fld.mmfr.pa = cm_object_get_child_by_name(state->u.k6.reg.mmfr, "PA");
    state->u.k6.fld.mmfr.op = cm_object_get_child_by_name(state->u.k6.reg.mmfr, "OP");
    state->u.k6.fld.mmfr.st = cm_object_get_child_by_name(state->u.k6.reg.mmfr, "ST");

    // MSCR bitfields.
    state->u.k6.fld.mscr.mii_speed = cm_object_get_child_by_name(state->u.k6.reg.mscr, "MII_SPEED");
    state->u.k6.fld.mscr.dis_pre = cm_object_get_child_by_name(state->u.k6.reg.mscr, "DIS_PRE");
    state->u.k6.fld.mscr.holdtime = cm_object_get_child_by_name(state->u.k6.reg.mscr, "HOLDTIME");

    // MIBC bitfields.
    state->u.k6.fld.mibc.mib_clear = cm_object_get_child_by_name(state->u.k6.reg.mibc, "MIB_CLEAR");
    state->u.k6.fld.mibc.mib_idle = cm_object_get_child_by_name(state->u.k6.reg.mibc, "MIB_IDLE");
    state->u.k6.fld.mibc.mib_dis = cm_object_get_child_by_name(state->u.k6.reg.mibc, "MIB_DIS");

    // RCR bitfields.
    state->u.k6.fld.rcr.loop = cm_object_get_child_by_name(state->u.k6.reg.rcr, "LOOP");
    state->u.k6.fld.rcr.drt = cm_object_get_child_by_name(state->u.k6.reg.rcr, "DRT");
    state->u.k6.fld.rcr.mii_mode = cm_object_get_child_by_name(state->u.k6.reg.rcr, "MII_MODE");
    state->u.k6.fld.rcr.prom = cm_object_get_child_by_name(state->u.k6.reg.rcr, "PROM");
    state->u.k6.fld.rcr.bc_rej = cm_object_get_child_by_name(state->u.k6.reg.rcr, "BC_REJ");
    state->u.k6.fld.rcr.fce = cm_object_get_child_by_name(state->u.k6.reg.rcr, "FCE");
    state->u.k6.fld.rcr.rmii_mode = cm_object_get_child_by_name(state->u.k6.reg.rcr, "RMII_MODE");
    state->u.k6.fld.rcr.rmii_10t = cm_object_get_child_by_name(state->u.k6.reg.rcr, "RMII_10T");
    state->u.k6.fld.rcr.paden = cm_object_get_child_by_name(state->u.k6.reg.rcr, "PADEN");
    state->u.k6.fld.rcr.paufwd = cm_object_get_child_by_name(state->u.k6.reg.rcr, "PAUFWD");
    state->u.k6.fld.rcr.crcfwd = cm_object_get_child_by_name(state->u.k6.reg.rcr, "CRCFWD");
    state->u.k6.fld.rcr.cfen = cm_object_get_child_by_name(state->u.k6.reg.rcr, "CFEN");
    state->u.k6.fld.rcr.max_fl = cm_object_get_child_by_name(state->u.k6.reg.rcr, "MAX_FL");
    state->u.k6.fld.rcr.nlc = cm_object_get_child_by_name(state->u.k6.reg.rcr, "NLC");
    state->u.k6.fld.rcr.grs = cm_object_get_child_by_name(state->u.k6.reg.rcr, "GRS");

    // TCR bitfields.
    state->u.k6.fld.tcr.gts = cm_object_get_child_by_name(state->u.k6.reg.tcr, "GTS");
    state->u.k6.fld.tcr.fden = cm_object_get_child_by_name(state->u.k6.reg.tcr, "FDEN");
    state->u.k6.fld.tcr.tfc_pause = cm_object_get_child_by_name(state->u.k6.reg.tcr, "TFC_PAUSE");
    state->u.k6.fld.tcr.rfc_pause = cm_object_get_child_by_name(state->u.k6.reg.tcr, "RFC_PAUSE");
    state->u.k6.fld.tcr.addsel = cm_object_get_child_by_name(state->u.k6.reg.tcr, "ADDSEL");
    state->u.k6.fld.tcr.addins = cm_object_get_child_by_name(state->u.k6.reg.tcr, "ADDINS");
    state->u.k6.fld.tcr.crcfwd = cm_object_get_child_by_name(state->u.k6.reg.tcr, "CRCFWD");

    // PALR bitfields.
    state->u.k6.fld.palr.paddr1 = cm_object_get_child_by_name(state->u.k6.reg.palr, "PADDR1");

    // PAUR bitfields.
    state->u.k6.fld.paur.type = cm_object_get_child_by_name(state->u.k6.reg.paur, "TYPE");
    state->u.k6.fld.paur.paddr2 = cm_object_get_child_by_name(state->u.k6.reg.paur, "PADDR2");

    // OPD bitfields.
    state->u.k6.fld.opd.pause_dur = cm_object_get_child_by_name(state->u.k6.reg.opd, "PAUSE_DUR");
    state->u.k6.fld.opd.opcode = cm_object_get_child_by_name(state->u.k6.reg.opd, "OPCODE");

    // IAUR bitfields.
    state->u.k6.fld.iaur.iaddr1 = cm_object_get_child_by_name(state->u.k6.reg.iaur, "IADDR1");

    // IALR bitfields.
    state->u.k6.fld.ialr.iaddr2 = cm_object_get_child_by_name(state->u.k6.reg.ialr, "IADDR2");

    // GAUR bitfields.
    state->u.k6.fld.gaur.gaddr1 = cm_object_get_child_by_name(state->u.k6.reg.gaur, "GADDR1");

    // GALR bitfields.
    state->u.k6.fld.galr.gaddr2 = cm_object_get_child_by_name(state->u.k6.reg.galr, "GADDR2");

    // TFWR bitfields.
    state->u.k6.fld.tfwr.tfwr = cm_object_get_child_by_name(state->u.k6.reg.tfwr, "TFWR");
    state->u.k6.fld.tfwr.strfwd = cm_object_get_child_by_name(state->u.k6.reg.tfwr, "STRFWD");

    // RDSR bitfields.
    state->u.k6.fld.rdsr.r_des_start = cm_object_get_child_by_name(state->u.k6.reg.rdsr, "R_DES_START");

    // TDSR bitfields.
    state->u.k6.fld.tdsr.x_des_start = cm_object_get_child_by_name(state->u.k6.reg.tdsr, "X_DES_START");

    // MRBR bitfields.
    state->u.k6.fld.mrbr.r_buf_size = cm_object_get_child_by_name(state->u.k6.reg.mrbr, "R_BUF_SIZE");

    // RSFL bitfields.
    state->u.k6.fld.rsfl.rx_section_full = cm_object_get_child_by_name(state->u.k6.reg.rsfl, "RX_SECTION_FULL");

    // RSEM bitfields.
    state->u.k6.fld.rsem.rx_section_empty = cm_object_get_child_by_name(state->u.k6.reg.rsem, "RX_SECTION_EMPTY");
    state->u.k6.fld.rsem.stat_section_empty = cm_object_get_child_by_name(state->u.k6.reg.rsem, "STAT_SECTION_EMPTY");

    // RAEM bitfields.
    state->u.k6.fld.raem.rx_almost_empty = cm_object_get_child_by_name(state->u.k6.reg.raem, "RX_ALMOST_EMPTY");

    // RAFL bitfields.
    state->u.k6.fld.rafl.rx_almost_full = cm_object_get_child_by_name(state->u.k6.reg.rafl, "RX_ALMOST_FULL");

    // TSEM bitfields.
    state->u.k6.fld.tsem.tx_section_empty = cm_object_get_child_by_name(state->u.k6.reg.tsem, "TX_SECTION_EMPTY");

    // TAEM bitfields.
    state->u.k6.fld.taem.tx_almost_empty = cm_object_get_child_by_name(state->u.k6.reg.taem, "TX_ALMOST_EMPTY");

    // TAFL bitfields.
    state->u.k6.fld.tafl.tx_almost_full = cm_object_get_child_by_name(state->u.k6.reg.tafl, "TX_ALMOST_FULL");

    // TIPG bitfields.
    state->u.k6.fld.tipg.ipg = cm_object_get_child_by_name(state->u.k6.reg.tipg, "IPG");

    // FTRL bitfields.
    state->u.k6.fld.ftrl.trunc_fl = cm_object_get_child_by_name(state->u.k6.reg.ftrl, "TRUNC_FL");

    // TACC bitfields.
    state->u.k6.fld.tacc.shift16 = cm_object_get_child_by_name(state->u.k6.reg.tacc, "SHIFT16");
    state->u.k6.fld.tacc.ipchk = cm_object_get_child_by_name(state->u.k6.reg.tacc, "IPCHK");
    state->u.k6.fld.tacc.prochk = cm_object_get_child_by_name(state->u.k6.reg.tacc, "PROCHK");

    // RACC bitfields.
    state->u.k6.fld.racc.padrem = cm_object_get_child_by_name(state->u.k6.reg.racc, "PADREM");
    state->u.k6.fld.racc.ipdis = cm_object_get_child_by_name(state->u.k6.reg.racc, "IPDIS");
    state->u.k6.fld.racc.prodis = cm_object_get_child_by_name(state->u.k6.reg.racc, "PRODIS");
    state->u.k6.fld.racc.linedis = cm_object_get_child_by_name(state->u.k6.reg.racc, "LINEDIS");
    state->u.k6.fld.racc.shift16 = cm_object_get_child_by_name(state->u.k6.reg.racc, "SHIFT16");

    // RMON_T_PACKETS bitfields.
    state->u.k6.fld.rmon_t_packets.txpkts = cm_object_get_child_by_name(state->u.k6.reg.rmon_t_packets, "TXPKTS");

    // RMON_T_BC_PKT bitfields.
    state->u.k6.fld.rmon_t_bc_pkt.txpkts = cm_object_get_child_by_name(state->u.k6.reg.rmon_t_bc_pkt, "TXPKTS");

    // RMON_T_MC_PKT bitfields.
    state->u.k6.fld.rmon_t_mc_pkt.txpkts = cm_object_get_child_by_name(state->u.k6.reg.rmon_t_mc_pkt, "TXPKTS");

    // RMON_T_CRC_ALIGN bitfields.
    state->u.k6.fld.rmon_t_crc_align.txpkts = cm_object_get_child_by_name(state->u.k6.reg.rmon_t_crc_align, "TXPKTS");

    // RMON_T_UNDERSIZE bitfields.
    state->u.k6.fld.rmon_t_undersize.txpkts = cm_object_get_child_by_name(state->u.k6.reg.rmon_t_undersize, "TXPKTS");

    // RMON_T_OVERSIZE bitfields.
    state->u.k6.fld.rmon_t_oversize.txpkts = cm_object_get_child_by_name(state->u.k6.reg.rmon_t_oversize, "TXPKTS");

    // RMON_T_FRAG bitfields.
    state->u.k6.fld.rmon_t_frag.txpkts = cm_object_get_child_by_name(state->u.k6.reg.rmon_t_frag, "TXPKTS");

    // RMON_T_JAB bitfields.
    state->u.k6.fld.rmon_t_jab.txpkts = cm_object_get_child_by_name(state->u.k6.reg.rmon_t_jab, "TXPKTS");

    // RMON_T_COL bitfields.
    state->u.k6.fld.rmon_t_col.txpkts = cm_object_get_child_by_name(state->u.k6.reg.rmon_t_col, "TXPKTS");

    // RMON_T_P64 bitfields.
    state->u.k6.fld.rmon_t_p64.txpkts = cm_object_get_child_by_name(state->u.k6.reg.rmon_t_p64, "TXPKTS");

    // RMON_T_P65TO127 bitfields.
    state->u.k6.fld.rmon_t_p65to127.txpkts = cm_object_get_child_by_name(state->u.k6.reg.rmon_t_p65to127, "TXPKTS");

    // RMON_T_P128TO255 bitfields.
    state->u.k6.fld.rmon_t_p128to255.txpkts = cm_object_get_child_by_name(state->u.k6.reg.rmon_t_p128to255, "TXPKTS");

    // RMON_T_P256TO511 bitfields.
    state->u.k6.fld.rmon_t_p256to511.txpkts = cm_object_get_child_by_name(state->u.k6.reg.rmon_t_p256to511, "TXPKTS");

    // RMON_T_P512TO1023 bitfields.
    state->u.k6.fld.rmon_t_p512to1023.txpkts = cm_object_get_child_by_name(state->u.k6.reg.rmon_t_p512to1023, "TXPKTS");

    // RMON_T_P1024TO2047 bitfields.
    state->u.k6.fld.rmon_t_p1024to2047.txpkts = cm_object_get_child_by_name(state->u.k6.reg.rmon_t_p1024to2047, "TXPKTS");

    // RMON_T_P_GTE2048 bitfields.
    state->u.k6.fld.rmon_t_p_gte2048.txpkts = cm_object_get_child_by_name(state->u.k6.reg.rmon_t_p_gte2048, "TXPKTS");

    // RMON_T_OCTETS bitfields.
    state->u.k6.fld.rmon_t_octets.txocts = cm_object_get_child_by_name(state->u.k6.reg.rmon_t_octets, "TXOCTS");

    // IEEE_T_FRAME_OK bitfields.
    state->u.k6.fld.ieee_t_frame_ok.count = cm_object_get_child_by_name(state->u.k6.reg.ieee_t_frame_ok, "COUNT");

    // IEEE_T_1COL bitfields.
    state->u.k6.fld.ieee_t_1col.count = cm_object_get_child_by_name(state->u.k6.reg.ieee_t_1col, "COUNT");

    // IEEE_T_MCOL bitfields.
    state->u.k6.fld.ieee_t_mcol.count = cm_object_get_child_by_name(state->u.k6.reg.ieee_t_mcol, "COUNT");

    // IEEE_T_DEF bitfields.
    state->u.k6.fld.ieee_t_def.count = cm_object_get_child_by_name(state->u.k6.reg.ieee_t_def, "COUNT");

    // IEEE_T_LCOL bitfields.
    state->u.k6.fld.ieee_t_lcol.count = cm_object_get_child_by_name(state->u.k6.reg.ieee_t_lcol, "COUNT");

    // IEEE_T_EXCOL bitfields.
    state->u.k6.fld.ieee_t_excol.count = cm_object_get_child_by_name(state->u.k6.reg.ieee_t_excol, "COUNT");

    // IEEE_T_MACERR bitfields.
    state->u.k6.fld.ieee_t_macerr.count = cm_object_get_child_by_name(state->u.k6.reg.ieee_t_macerr, "COUNT");

    // IEEE_T_CSERR bitfields.
    state->u.k6.fld.ieee_t_cserr.count = cm_object_get_child_by_name(state->u.k6.reg.ieee_t_cserr, "COUNT");

    // IEEE_T_FDXFC bitfields.
    state->u.k6.fld.ieee_t_fdxfc.count = cm_object_get_child_by_name(state->u.k6.reg.ieee_t_fdxfc, "COUNT");

    // IEEE_T_OCTETS_OK bitfields.
    state->u.k6.fld.ieee_t_octets_ok.count = cm_object_get_child_by_name(state->u.k6.reg.ieee_t_octets_ok, "COUNT");

    // RMON_R_PACKETS bitfields.
    state->u.k6.fld.rmon_r_packets.count = cm_object_get_child_by_name(state->u.k6.reg.rmon_r_packets, "COUNT");

    // RMON_R_BC_PKT bitfields.
    state->u.k6.fld.rmon_r_bc_pkt.count = cm_object_get_child_by_name(state->u.k6.reg.rmon_r_bc_pkt, "COUNT");

    // RMON_R_MC_PKT bitfields.
    state->u.k6.fld.rmon_r_mc_pkt.count = cm_object_get_child_by_name(state->u.k6.reg.rmon_r_mc_pkt, "COUNT");

    // RMON_R_CRC_ALIGN bitfields.
    state->u.k6.fld.rmon_r_crc_align.count = cm_object_get_child_by_name(state->u.k6.reg.rmon_r_crc_align, "COUNT");

    // RMON_R_UNDERSIZE bitfields.
    state->u.k6.fld.rmon_r_undersize.count = cm_object_get_child_by_name(state->u.k6.reg.rmon_r_undersize, "COUNT");

    // RMON_R_OVERSIZE bitfields.
    state->u.k6.fld.rmon_r_oversize.count = cm_object_get_child_by_name(state->u.k6.reg.rmon_r_oversize, "COUNT");

    // RMON_R_FRAG bitfields.
    state->u.k6.fld.rmon_r_frag.count = cm_object_get_child_by_name(state->u.k6.reg.rmon_r_frag, "COUNT");

    // RMON_R_JAB bitfields.
    state->u.k6.fld.rmon_r_jab.count = cm_object_get_child_by_name(state->u.k6.reg.rmon_r_jab, "COUNT");

    // RMON_R_P64 bitfields.
    state->u.k6.fld.rmon_r_p64.count = cm_object_get_child_by_name(state->u.k6.reg.rmon_r_p64, "COUNT");

    // RMON_R_P65TO127 bitfields.
    state->u.k6.fld.rmon_r_p65to127.count = cm_object_get_child_by_name(state->u.k6.reg.rmon_r_p65to127, "COUNT");

    // RMON_R_P128TO255 bitfields.
    state->u.k6.fld.rmon_r_p128to255.count = cm_object_get_child_by_name(state->u.k6.reg.rmon_r_p128to255, "COUNT");

    // RMON_R_P256TO511 bitfields.
    state->u.k6.fld.rmon_r_p256to511.count = cm_object_get_child_by_name(state->u.k6.reg.rmon_r_p256to511, "COUNT");

    // RMON_R_P512TO1023 bitfields.
    state->u.k6.fld.rmon_r_p512to1023.count = cm_object_get_child_by_name(state->u.k6.reg.rmon_r_p512to1023, "COUNT");

    // RMON_R_P1024TO2047 bitfields.
    state->u.k6.fld.rmon_r_p1024to2047.count = cm_object_get_child_by_name(state->u.k6.reg.rmon_r_p1024to2047, "COUNT");

    // RMON_R_P_GTE2048 bitfields.
    state->u.k6.fld.rmon_r_p_gte2048.count = cm_object_get_child_by_name(state->u.k6.reg.rmon_r_p_gte2048, "COUNT");

    // RMON_R_OCTETS bitfields.
    state->u.k6.fld.rmon_r_octets.count = cm_object_get_child_by_name(state->u.k6.reg.rmon_r_octets, "COUNT");

    // IEEE_R_DROP bitfields.
    state->u.k6.fld.ieee_r_drop.count = cm_object_get_child_by_name(state->u.k6.reg.ieee_r_drop, "COUNT");

    // IEEE_R_FRAME_OK bitfields.
    state->u.k6.fld.ieee_r_frame_ok.count = cm_object_get_child_by_name(state->u.k6.reg.ieee_r_frame_ok, "COUNT");

    // IEEE_R_CRC bitfields.
    state->u.k6.fld.ieee_r_crc.count = cm_object_get_child_by_name(state->u.k6.reg.ieee_r_crc, "COUNT");

    // IEEE_R_ALIGN bitfields.
    state->u.k6.fld.ieee_r_align.count = cm_object_get_child_by_name(state->u.k6.reg.ieee_r_align, "COUNT");

    // IEEE_R_MACERR bitfields.
    state->u.k6.fld.ieee_r_macerr.count = cm_object_get_child_by_name(state->u.k6.reg.ieee_r_macerr, "COUNT");

    // IEEE_R_FDXFC bitfields.
    state->u.k6.fld.ieee_r_fdxfc.count = cm_object_get_child_by_name(state->u.k6.reg.ieee_r_fdxfc, "COUNT");

    // IEEE_R_OCTETS_OK bitfields.
    state->u.k6.fld.ieee_r_octets_ok.count = cm_object_get_child_by_name(state->u.k6.reg.ieee_r_octets_ok, "COUNT");

    // ATCR bitfields.
    state->u.k6.fld.atcr.en = cm_object_get_child_by_name(state->u.k6.reg.atcr, "EN");
    state->u.k6.fld.atcr.offen = cm_object_get_child_by_name(state->u.k6.reg.atcr, "OFFEN");
    state->u.k6.fld.atcr.offrst = cm_object_get_child_by_name(state->u.k6.reg.atcr, "OFFRST");
    state->u.k6.fld.atcr.peren = cm_object_get_child_by_name(state->u.k6.reg.atcr, "PEREN");
    state->u.k6.fld.atcr.pinper = cm_object_get_child_by_name(state->u.k6.reg.atcr, "PINPER");
    state->u.k6.fld.atcr.restart = cm_object_get_child_by_name(state->u.k6.reg.atcr, "RESTART");
    state->u.k6.fld.atcr.capture = cm_object_get_child_by_name(state->u.k6.reg.atcr, "CAPTURE");
    state->u.k6.fld.atcr.slave = cm_object_get_child_by_name(state->u.k6.reg.atcr, "SLAVE");

    // ATVR bitfields.
    state->u.k6.fld.atvr.atime = cm_object_get_child_by_name(state->u.k6.reg.atvr, "ATIME");

    // ATOFF bitfields.
    state->u.k6.fld.atoff.offset = cm_object_get_child_by_name(state->u.k6.reg.atoff, "OFFSET");

    // ATPER bitfields.
    state->u.k6.fld.atper.period = cm_object_get_child_by_name(state->u.k6.reg.atper, "PERIOD");

    // ATCOR bitfields.
    state->u.k6.fld.atcor.cor = cm_object_get_child_by_name(state->u.k6.reg.atcor, "COR");

    // ATINC bitfields.
    state->u.k6.fld.atinc.inc = cm_object_get_child_by_name(state->u.k6.reg.atinc, "INC");
    state->u.k6.fld.atinc.inc_corr = cm_object_get_child_by_name(state->u.k6.reg.atinc, "INC_CORR");

    // ATSTMP bitfields.
    state->u.k6.fld.atstmp.timestamp = cm_object_get_child_by_name(state->u.k6.reg.atstmp, "TIMESTAMP");

    // TGSR bitfields.
    state->u.k6.fld.tgsr.tf0 = cm_object_get_child_by_name(state->u.k6.reg.tgsr, "TF0");
    state->u.k6.fld.tgsr.tf1 = cm_object_get_child_by_name(state->u.k6.reg.tgsr, "TF1");
    state->u.k6.fld.tgsr.tf2 = cm_object_get_child_by_name(state->u.k6.reg.tgsr, "TF2");
    state->u.k6.fld.tgsr.tf3 = cm_object_get_child_by_name(state->u.k6.reg.tgsr, "TF3");
    // TCSR0 bitfields.
    state->u.k6.fld.tcsr[0].tdre = cm_object_get_child_by_name(state->u.k6.reg.tcsr[0], "TDRE");
    state->u.k6.fld.tcsr[0].tmode = cm_object_get_child_by_name(state->u.k6.reg.tcsr[0], "TMODE");
    state->u.k6.fld.tcsr[0].tie = cm_object_get_child_by_name(state->u.k6.reg.tcsr[0], "TIE");
    state->u.k6.fld.tcsr[0].tf = cm_object_get_child_by_name(state->u.k6.reg.tcsr[0], "TF");
    // TCSR1 bitfields.
    state->u.k6.fld.tcsr[1].tdre = cm_object_get_child_by_name(state->u.k6.reg.tcsr[1], "TDRE");
    state->u.k6.fld.tcsr[1].tmode = cm_object_get_child_by_name(state->u.k6.reg.tcsr[1], "TMODE");
    state->u.k6.fld.tcsr[1].tie = cm_object_get_child_by_name(state->u.k6.reg.tcsr[1], "TIE");
    state->u.k6.fld.tcsr[1].tf = cm_object_get_child_by_name(state->u.k6.reg.tcsr[1], "TF");
    // TCSR2 bitfields.
    state->u.k6.fld.tcsr[2].tdre = cm_object_get_child_by_name(state->u.k6.reg.tcsr[2], "TDRE");
    state->u.k6.fld.tcsr[2].tmode = cm_object_get_child_by_name(state->u.k6.reg.tcsr[2], "TMODE");
    state->u.k6.fld.tcsr[2].tie = cm_object_get_child_by_name(state->u.k6.reg.tcsr[2], "TIE");
    state->u.k6.fld.tcsr[2].tf = cm_object_get_child_by_name(state->u.k6.reg.tcsr[2], "TF");
    // TCSR3 bitfields.
    state->u.k6.fld.tcsr[3].tdre = cm_object_get_child_by_name(state->u.k6.reg.tcsr[3], "TDRE");
    state->u.k6.fld.tcsr[3].tmode = cm_object_get_child_by_name(state->u.k6.reg.tcsr[3], "TMODE");
    state->u.k6.fld.tcsr[3].tie = cm_object_get_child_by_name(state->u.k6.reg.tcsr[3], "TIE");
    state->u.k6.fld.tcsr[3].tf = cm_object_get_child_by_name(state->u.k6.reg.tcsr[3], "TF");
    // TCCR0 bitfields.
    state->u.k6.fld.tccr[0].tcc = cm_object_get_child_by_name(state->u.k6.reg.tccr[0], "TCC");
    // TCCR1 bitfields.
    state->u.k6.fld.tccr[1].tcc = cm_object_get_child_by_name(state->u.k6.reg.tccr[1], "TCC");
    // TCCR2 bitfields.
    state->u.k6.fld.tccr[2].tcc = cm_object_get_child_by_name(state->u.k6.reg.tccr[2], "TCC");
    // TCCR3 bitfields.
    state->u.k6.fld.tccr[3].tcc = cm_object_get_child_by_name(state->u.k6.reg.tccr[3], "TCC");
}

// ----- 8< ----- 8< -----  8< ----- 8< ----- 8< ----- 8< ----- 8< -----

// ----- Private --------------------------------------------------------------

#if 0
static peripheral_register_t kinetis_enet_xxx_pre_write_callback(Object *reg,
        Object *periph, uint32_t addr, uint32_t offset, unsigned size,
        peripheral_register_t value, peripheral_register_t full_value)
{
    KinetisENETState *state = KINETIS_ENET_STATE(periph);

    peripheral_register_t prev_value = peripheral_register_get_raw_prev_value(reg);

    // TODO: Add code to adjust the value (like applying some masks,
    // for example prevent setting interrupts not enabled).
    // Also process cleared/set by write 1/0 bits.
    // The returned value will be stored in the register value.

    return full_value;
}

static void kinetis_enet_xxx_post_write_callback(Object *reg, Object *periph,
        uint32_t addr, uint32_t offset, unsigned size,
        peripheral_register_t value, peripheral_register_t full_value)
{
    KinetisENETState *state = KINETIS_ENET_STATE(periph);

    peripheral_register_t prev_value = peripheral_register_get_raw_prev_value(reg);
    // The new register value is full_value, the old one is prev_value.

    // TODO: Add code to send the value to the consumer.
}

static peripheral_register_t kinetis_enet_xxx_pre_read_callback(Object *reg,
        Object *periph, uint32_t addr, uint32_t offset, unsigned size)
{
    KinetisENETState *state = KINETIS_ENET_STATE(periph);

    peripheral_register_t value = 0;

    // Add code to get the value from the producer, and return it.

    // This value, possibly masked, will be stored in the register
    // and returned when the register is read.
    return value;
}

static void kinetis_enet_xxx_post_read_callback(Object *reg, Object *periph,
        uint32_t addr, uint32_t offset, unsigned size)
{
    KinetisENETState *state = KINETIS_ENET_STATE(periph);

    peripheral_register_t value = peripheral_register_get_raw_value(reg);

    // TODO: add code to perform the post read actions, like clearing some bits.
}
#endif

// ----------------------------------------------------------------------------

// TODO: remove this if the peripheral is always enabled.
static bool kinetis_enet_is_enabled(Object *obj)
{
    KinetisENETState *state = KINETIS_ENET_STATE(obj);

    if (register_bitfield_is_non_zero(state->enabling_bit)) {
        return true; // Positive logic, bit == 1 means enabled.
    }

    // Not enabled
    return false;
}

static void kinetis_enet_instance_init_callback(Object *obj)
{
    qemu_log_function_name();

    KinetisENETState *state = KINETIS_ENET_STATE(obj);

    // Capabilities are not yet available.

    // TODO: remove this if the peripheral is always enabled.
    state->enabling_bit = NULL;
    
    // TODO: Add code to initialise all members.
}

static void kinetis_enet_realize_callback(DeviceState *dev, Error **errp)
{
    qemu_log_function_name();

    // Call parent realize().
    if (!cm_device_parent_realize(dev, errp, TYPE_KINETIS_ENET)) {
        return;
    }

    KinetisMCUState *mcu = kinetis_mcu_get();
    CortexMState *cm_state = CORTEXM_MCU_STATE(mcu);

    KinetisENETState *state = KINETIS_ENET_STATE(dev);
    // First thing first: get capabilities from MCU, needed everywhere.
    state->capabilities = mcu->capabilities;

    // Also keep a local pointer, to access them easier.
    const KinetisCapabilities *capabilities = state->capabilities;
    assert(capabilities != NULL);

    Object *obj = OBJECT(dev);

    const char *periph_name = "ENET";

    svd_set_peripheral_address_block(cm_state->svd_json, periph_name, obj);
    peripheral_create_memory_region(obj);

    // TODO: remove this if the peripheral is always enabled.
    char enabling_bit_name[KINETIS_RCC_SIZEOF_ENABLING_BITFIELD];

    switch (capabilities->family) {
    case KINETIS_FAMILY_K6:


            mk64f12_enet_create_objects(obj, cm_state->svd_json, periph_name);

            // TODO: add actions.
            // cm_object_property_set_str(state->u.k6.fld.xxx.fff, "GGG", "follows");
            // cm_object_property_set_str(state->u.k6.fld.xxx.fff, "GGG", "cleared-by");

            // TODO: add callbacks.
            // peripheral_register_set_pre_read(state->k6.reg.xxx, &kinetis_enet_xxx_pre_read_callback);
            // peripheral_register_set_post_read(state->k6.reg.xxx, &kinetis_enet_xxx_post_read_callback);
            // peripheral_register_set_pre_read(state->k6.reg.xxx, &kinetis_enet_xxx_pret_read_callback);
            // peripheral_register_set_post_write(state->k6.reg.xxx, &kinetis_enet_xxx_post_write_callback);

            // TODO: add interrupts.

            // TODO: remove this if the peripheral is always enabled.
            snprintf(enabling_bit_name, sizeof(enabling_bit_name) - 1,
                DEVICE_PATH_KINETIS_RCC "/AHB1ENR/ENETEN");


        break;

    default:
        assert(false);
        break;
    }

    // TODO: remove this if the peripheral is always enabled.
    state->enabling_bit = OBJECT(cm_device_by_name(enabling_bit_name));

    peripheral_prepare_registers(obj);
}

static void kinetis_enet_reset_callback(DeviceState *dev)
{
    qemu_log_function_name();

    // Call parent reset(); this will reset all children registers.
    cm_device_parent_reset(dev, TYPE_KINETIS_ENET);
}

static void kinetis_enet_class_init_callback(ObjectClass *klass, void *data)
{
    DeviceClass *dc = DEVICE_CLASS(klass);

    dc->reset = kinetis_enet_reset_callback;
    dc->realize = kinetis_enet_realize_callback;

    // TODO: remove this if the peripheral is always enabled.
    PeripheralClass *per_class = PERIPHERAL_CLASS(klass);
    per_class->is_enabled = kinetis_enet_is_enabled;
}

static const TypeInfo kinetis_enet_type_info = {
    .name = TYPE_KINETIS_ENET,
    .parent = TYPE_KINETIS_ENET_PARENT,
    .instance_init = kinetis_enet_instance_init_callback,
    .instance_size = sizeof(KinetisENETState),
    .class_init = kinetis_enet_class_init_callback,
    .class_size = sizeof(KinetisENETClass) };

static void kinetis_enet_register_types(void)
{
    type_register_static(&kinetis_enet_type_info);
}

type_init(kinetis_enet_register_types);

// ----------------------------------------------------------------------------
