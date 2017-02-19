/*
 * Kinetis - CAN (Flex Controller Area Network module) emulation.
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

#include <hw/cortexm/kinetis/can.h>
#include <hw/cortexm/kinetis/mcu.h>
#include <hw/cortexm/helper.h>
#include <hw/cortexm/svd.h>

// ----- Generated code -------------------------------------------------------
//
// ----- 8< ----- 8< -----  8< ----- 8< ----- 8< ----- 8< ----- 8< -----

// DO NOT EDIT! Automatically generated!
static void mk64f12_can_create_objects(Object *obj, JSON_Object *svd, const char *name)
{
    KinetisCANState *state = KINETIS_CAN_STATE(obj);

    JSON_Object *periph = svd_get_peripheral_by_name(svd, name);
    svd_add_peripheral_properties_and_children(obj, periph, svd);

    // Registers. 
    state->u.k6.reg.mcr = cm_object_get_child_by_name(obj, "MCR");
    state->u.k6.reg.ctrl1 = cm_object_get_child_by_name(obj, "CTRL1");
    state->u.k6.reg.timer = cm_object_get_child_by_name(obj, "TIMER");
    state->u.k6.reg.rxmgmask = cm_object_get_child_by_name(obj, "RXMGMASK");
    state->u.k6.reg.rx14mask = cm_object_get_child_by_name(obj, "RX14MASK");
    state->u.k6.reg.rx15mask = cm_object_get_child_by_name(obj, "RX15MASK");
    state->u.k6.reg.ecr = cm_object_get_child_by_name(obj, "ECR");
    state->u.k6.reg.esr1 = cm_object_get_child_by_name(obj, "ESR1");
    state->u.k6.reg.imask1 = cm_object_get_child_by_name(obj, "IMASK1");
    state->u.k6.reg.iflag1 = cm_object_get_child_by_name(obj, "IFLAG1");
    state->u.k6.reg.ctrl2 = cm_object_get_child_by_name(obj, "CTRL2");
    state->u.k6.reg.esr2 = cm_object_get_child_by_name(obj, "ESR2");
    state->u.k6.reg.crcr = cm_object_get_child_by_name(obj, "CRCR");
    state->u.k6.reg.rxfgmask = cm_object_get_child_by_name(obj, "RXFGMASK");
    state->u.k6.reg.rxfir = cm_object_get_child_by_name(obj, "RXFIR");
    state->u.k6.reg.cs0 = cm_object_get_child_by_name(obj, "CS0");
    state->u.k6.reg.id0 = cm_object_get_child_by_name(obj, "ID0");
    state->u.k6.reg.word00 = cm_object_get_child_by_name(obj, "WORD00");
    state->u.k6.reg.word10 = cm_object_get_child_by_name(obj, "WORD10");
    state->u.k6.reg.cs1 = cm_object_get_child_by_name(obj, "CS1");
    state->u.k6.reg.id1 = cm_object_get_child_by_name(obj, "ID1");
    state->u.k6.reg.word01 = cm_object_get_child_by_name(obj, "WORD01");
    state->u.k6.reg.word11 = cm_object_get_child_by_name(obj, "WORD11");
    state->u.k6.reg.cs2 = cm_object_get_child_by_name(obj, "CS2");
    state->u.k6.reg.id2 = cm_object_get_child_by_name(obj, "ID2");
    state->u.k6.reg.word02 = cm_object_get_child_by_name(obj, "WORD02");
    state->u.k6.reg.word12 = cm_object_get_child_by_name(obj, "WORD12");
    state->u.k6.reg.cs3 = cm_object_get_child_by_name(obj, "CS3");
    state->u.k6.reg.id3 = cm_object_get_child_by_name(obj, "ID3");
    state->u.k6.reg.word03 = cm_object_get_child_by_name(obj, "WORD03");
    state->u.k6.reg.word13 = cm_object_get_child_by_name(obj, "WORD13");
    state->u.k6.reg.cs4 = cm_object_get_child_by_name(obj, "CS4");
    state->u.k6.reg.id4 = cm_object_get_child_by_name(obj, "ID4");
    state->u.k6.reg.word04 = cm_object_get_child_by_name(obj, "WORD04");
    state->u.k6.reg.word14 = cm_object_get_child_by_name(obj, "WORD14");
    state->u.k6.reg.cs5 = cm_object_get_child_by_name(obj, "CS5");
    state->u.k6.reg.id5 = cm_object_get_child_by_name(obj, "ID5");
    state->u.k6.reg.word05 = cm_object_get_child_by_name(obj, "WORD05");
    state->u.k6.reg.word15 = cm_object_get_child_by_name(obj, "WORD15");
    state->u.k6.reg.cs6 = cm_object_get_child_by_name(obj, "CS6");
    state->u.k6.reg.id6 = cm_object_get_child_by_name(obj, "ID6");
    state->u.k6.reg.word06 = cm_object_get_child_by_name(obj, "WORD06");
    state->u.k6.reg.word16 = cm_object_get_child_by_name(obj, "WORD16");
    state->u.k6.reg.cs7 = cm_object_get_child_by_name(obj, "CS7");
    state->u.k6.reg.id7 = cm_object_get_child_by_name(obj, "ID7");
    state->u.k6.reg.word07 = cm_object_get_child_by_name(obj, "WORD07");
    state->u.k6.reg.word17 = cm_object_get_child_by_name(obj, "WORD17");
    state->u.k6.reg.cs8 = cm_object_get_child_by_name(obj, "CS8");
    state->u.k6.reg.id8 = cm_object_get_child_by_name(obj, "ID8");
    state->u.k6.reg.word08 = cm_object_get_child_by_name(obj, "WORD08");
    state->u.k6.reg.word18 = cm_object_get_child_by_name(obj, "WORD18");
    state->u.k6.reg.cs9 = cm_object_get_child_by_name(obj, "CS9");
    state->u.k6.reg.id9 = cm_object_get_child_by_name(obj, "ID9");
    state->u.k6.reg.word09 = cm_object_get_child_by_name(obj, "WORD09");
    state->u.k6.reg.word19 = cm_object_get_child_by_name(obj, "WORD19");
    state->u.k6.reg.cs10 = cm_object_get_child_by_name(obj, "CS10");
    state->u.k6.reg.id10 = cm_object_get_child_by_name(obj, "ID10");
    state->u.k6.reg.word010 = cm_object_get_child_by_name(obj, "WORD010");
    state->u.k6.reg.word110 = cm_object_get_child_by_name(obj, "WORD110");
    state->u.k6.reg.cs11 = cm_object_get_child_by_name(obj, "CS11");
    state->u.k6.reg.id11 = cm_object_get_child_by_name(obj, "ID11");
    state->u.k6.reg.word011 = cm_object_get_child_by_name(obj, "WORD011");
    state->u.k6.reg.word111 = cm_object_get_child_by_name(obj, "WORD111");
    state->u.k6.reg.cs12 = cm_object_get_child_by_name(obj, "CS12");
    state->u.k6.reg.id12 = cm_object_get_child_by_name(obj, "ID12");
    state->u.k6.reg.word012 = cm_object_get_child_by_name(obj, "WORD012");
    state->u.k6.reg.word112 = cm_object_get_child_by_name(obj, "WORD112");
    state->u.k6.reg.cs13 = cm_object_get_child_by_name(obj, "CS13");
    state->u.k6.reg.id13 = cm_object_get_child_by_name(obj, "ID13");
    state->u.k6.reg.word013 = cm_object_get_child_by_name(obj, "WORD013");
    state->u.k6.reg.word113 = cm_object_get_child_by_name(obj, "WORD113");
    state->u.k6.reg.cs14 = cm_object_get_child_by_name(obj, "CS14");
    state->u.k6.reg.id14 = cm_object_get_child_by_name(obj, "ID14");
    state->u.k6.reg.word014 = cm_object_get_child_by_name(obj, "WORD014");
    state->u.k6.reg.word114 = cm_object_get_child_by_name(obj, "WORD114");
    state->u.k6.reg.cs15 = cm_object_get_child_by_name(obj, "CS15");
    state->u.k6.reg.id15 = cm_object_get_child_by_name(obj, "ID15");
    state->u.k6.reg.word015 = cm_object_get_child_by_name(obj, "WORD015");
    state->u.k6.reg.word115 = cm_object_get_child_by_name(obj, "WORD115");
    state->u.k6.reg.rximr[0] = cm_object_get_child_by_name(obj, "RXIMR0");
    state->u.k6.reg.rximr[1] = cm_object_get_child_by_name(obj, "RXIMR1");
    state->u.k6.reg.rximr[2] = cm_object_get_child_by_name(obj, "RXIMR2");
    state->u.k6.reg.rximr[3] = cm_object_get_child_by_name(obj, "RXIMR3");
    state->u.k6.reg.rximr[4] = cm_object_get_child_by_name(obj, "RXIMR4");
    state->u.k6.reg.rximr[5] = cm_object_get_child_by_name(obj, "RXIMR5");
    state->u.k6.reg.rximr[6] = cm_object_get_child_by_name(obj, "RXIMR6");
    state->u.k6.reg.rximr[7] = cm_object_get_child_by_name(obj, "RXIMR7");
    state->u.k6.reg.rximr[8] = cm_object_get_child_by_name(obj, "RXIMR8");
    state->u.k6.reg.rximr[9] = cm_object_get_child_by_name(obj, "RXIMR9");
    state->u.k6.reg.rximr[10] = cm_object_get_child_by_name(obj, "RXIMR10");
    state->u.k6.reg.rximr[11] = cm_object_get_child_by_name(obj, "RXIMR11");
    state->u.k6.reg.rximr[12] = cm_object_get_child_by_name(obj, "RXIMR12");
    state->u.k6.reg.rximr[13] = cm_object_get_child_by_name(obj, "RXIMR13");
    state->u.k6.reg.rximr[14] = cm_object_get_child_by_name(obj, "RXIMR14");
    state->u.k6.reg.rximr[15] = cm_object_get_child_by_name(obj, "RXIMR15");

    // MCR bitfields.
    state->u.k6.fld.mcr.maxmb = cm_object_get_child_by_name(state->u.k6.reg.mcr, "MAXMB");
    state->u.k6.fld.mcr.idam = cm_object_get_child_by_name(state->u.k6.reg.mcr, "IDAM");
    state->u.k6.fld.mcr.aen = cm_object_get_child_by_name(state->u.k6.reg.mcr, "AEN");
    state->u.k6.fld.mcr.lprioen = cm_object_get_child_by_name(state->u.k6.reg.mcr, "LPRIOEN");
    state->u.k6.fld.mcr.irmq = cm_object_get_child_by_name(state->u.k6.reg.mcr, "IRMQ");
    state->u.k6.fld.mcr.srxdis = cm_object_get_child_by_name(state->u.k6.reg.mcr, "SRXDIS");
    state->u.k6.fld.mcr.waksrc = cm_object_get_child_by_name(state->u.k6.reg.mcr, "WAKSRC");
    state->u.k6.fld.mcr.lpmack = cm_object_get_child_by_name(state->u.k6.reg.mcr, "LPMACK");
    state->u.k6.fld.mcr.wrnen = cm_object_get_child_by_name(state->u.k6.reg.mcr, "WRNEN");
    state->u.k6.fld.mcr.slfwak = cm_object_get_child_by_name(state->u.k6.reg.mcr, "SLFWAK");
    state->u.k6.fld.mcr.supv = cm_object_get_child_by_name(state->u.k6.reg.mcr, "SUPV");
    state->u.k6.fld.mcr.frzack = cm_object_get_child_by_name(state->u.k6.reg.mcr, "FRZACK");
    state->u.k6.fld.mcr.softrst = cm_object_get_child_by_name(state->u.k6.reg.mcr, "SOFTRST");
    state->u.k6.fld.mcr.wakmsk = cm_object_get_child_by_name(state->u.k6.reg.mcr, "WAKMSK");
    state->u.k6.fld.mcr.notrdy = cm_object_get_child_by_name(state->u.k6.reg.mcr, "NOTRDY");
    state->u.k6.fld.mcr.halt = cm_object_get_child_by_name(state->u.k6.reg.mcr, "HALT");
    state->u.k6.fld.mcr.rfen = cm_object_get_child_by_name(state->u.k6.reg.mcr, "RFEN");
    state->u.k6.fld.mcr.frz = cm_object_get_child_by_name(state->u.k6.reg.mcr, "FRZ");
    state->u.k6.fld.mcr.mdis = cm_object_get_child_by_name(state->u.k6.reg.mcr, "MDIS");

    // CTRL1 bitfields.
    state->u.k6.fld.ctrl1.propseg = cm_object_get_child_by_name(state->u.k6.reg.ctrl1, "PROPSEG");
    state->u.k6.fld.ctrl1.lom = cm_object_get_child_by_name(state->u.k6.reg.ctrl1, "LOM");
    state->u.k6.fld.ctrl1.lbuf = cm_object_get_child_by_name(state->u.k6.reg.ctrl1, "LBUF");
    state->u.k6.fld.ctrl1.tsyn = cm_object_get_child_by_name(state->u.k6.reg.ctrl1, "TSYN");
    state->u.k6.fld.ctrl1.boffrec = cm_object_get_child_by_name(state->u.k6.reg.ctrl1, "BOFFREC");
    state->u.k6.fld.ctrl1.smp = cm_object_get_child_by_name(state->u.k6.reg.ctrl1, "SMP");
    state->u.k6.fld.ctrl1.rwrnmsk = cm_object_get_child_by_name(state->u.k6.reg.ctrl1, "RWRNMSK");
    state->u.k6.fld.ctrl1.twrnmsk = cm_object_get_child_by_name(state->u.k6.reg.ctrl1, "TWRNMSK");
    state->u.k6.fld.ctrl1.lpb = cm_object_get_child_by_name(state->u.k6.reg.ctrl1, "LPB");
    state->u.k6.fld.ctrl1.clksrc = cm_object_get_child_by_name(state->u.k6.reg.ctrl1, "CLKSRC");
    state->u.k6.fld.ctrl1.errmsk = cm_object_get_child_by_name(state->u.k6.reg.ctrl1, "ERRMSK");
    state->u.k6.fld.ctrl1.boffmsk = cm_object_get_child_by_name(state->u.k6.reg.ctrl1, "BOFFMSK");
    state->u.k6.fld.ctrl1.pseg2 = cm_object_get_child_by_name(state->u.k6.reg.ctrl1, "PSEG2");
    state->u.k6.fld.ctrl1.pseg1 = cm_object_get_child_by_name(state->u.k6.reg.ctrl1, "PSEG1");
    state->u.k6.fld.ctrl1.rjw = cm_object_get_child_by_name(state->u.k6.reg.ctrl1, "RJW");
    state->u.k6.fld.ctrl1.presdiv = cm_object_get_child_by_name(state->u.k6.reg.ctrl1, "PRESDIV");

    // TIMER bitfields.
    state->u.k6.fld.timer.timer = cm_object_get_child_by_name(state->u.k6.reg.timer, "TIMER");

    // RXMGMASK bitfields.
    state->u.k6.fld.rxmgmask.mg = cm_object_get_child_by_name(state->u.k6.reg.rxmgmask, "MG");

    // RX14MASK bitfields.
    state->u.k6.fld.rx14mask.rx14m = cm_object_get_child_by_name(state->u.k6.reg.rx14mask, "RX14M");

    // RX15MASK bitfields.
    state->u.k6.fld.rx15mask.rx15m = cm_object_get_child_by_name(state->u.k6.reg.rx15mask, "RX15M");

    // ECR bitfields.
    state->u.k6.fld.ecr.txerrcnt = cm_object_get_child_by_name(state->u.k6.reg.ecr, "TXERRCNT");
    state->u.k6.fld.ecr.rxerrcnt = cm_object_get_child_by_name(state->u.k6.reg.ecr, "RXERRCNT");

    // ESR1 bitfields.
    state->u.k6.fld.esr1.wakint = cm_object_get_child_by_name(state->u.k6.reg.esr1, "WAKINT");
    state->u.k6.fld.esr1.errint = cm_object_get_child_by_name(state->u.k6.reg.esr1, "ERRINT");
    state->u.k6.fld.esr1.boffint = cm_object_get_child_by_name(state->u.k6.reg.esr1, "BOFFINT");
    state->u.k6.fld.esr1.rx = cm_object_get_child_by_name(state->u.k6.reg.esr1, "RX");
    state->u.k6.fld.esr1.fltconf = cm_object_get_child_by_name(state->u.k6.reg.esr1, "FLTCONF");
    state->u.k6.fld.esr1.tx = cm_object_get_child_by_name(state->u.k6.reg.esr1, "TX");
    state->u.k6.fld.esr1.idle = cm_object_get_child_by_name(state->u.k6.reg.esr1, "IDLE");
    state->u.k6.fld.esr1.rxwrn = cm_object_get_child_by_name(state->u.k6.reg.esr1, "RXWRN");
    state->u.k6.fld.esr1.txwrn = cm_object_get_child_by_name(state->u.k6.reg.esr1, "TXWRN");
    state->u.k6.fld.esr1.stferr = cm_object_get_child_by_name(state->u.k6.reg.esr1, "STFERR");
    state->u.k6.fld.esr1.frmerr = cm_object_get_child_by_name(state->u.k6.reg.esr1, "FRMERR");
    state->u.k6.fld.esr1.crcerr = cm_object_get_child_by_name(state->u.k6.reg.esr1, "CRCERR");
    state->u.k6.fld.esr1.ackerr = cm_object_get_child_by_name(state->u.k6.reg.esr1, "ACKERR");
    state->u.k6.fld.esr1.bit0err = cm_object_get_child_by_name(state->u.k6.reg.esr1, "BIT0ERR");
    state->u.k6.fld.esr1.bit1err = cm_object_get_child_by_name(state->u.k6.reg.esr1, "BIT1ERR");
    state->u.k6.fld.esr1.rwrnint = cm_object_get_child_by_name(state->u.k6.reg.esr1, "RWRNINT");
    state->u.k6.fld.esr1.twrnint = cm_object_get_child_by_name(state->u.k6.reg.esr1, "TWRNINT");
    state->u.k6.fld.esr1.synch = cm_object_get_child_by_name(state->u.k6.reg.esr1, "SYNCH");

    // IMASK1 bitfields.
    state->u.k6.fld.imask1.buflm = cm_object_get_child_by_name(state->u.k6.reg.imask1, "BUFLM");

    // IFLAG1 bitfields.
    state->u.k6.fld.iflag1.buf0i = cm_object_get_child_by_name(state->u.k6.reg.iflag1, "BUF0I");
    state->u.k6.fld.iflag1.buf4to1i = cm_object_get_child_by_name(state->u.k6.reg.iflag1, "BUF4TO1I");
    state->u.k6.fld.iflag1.buf5i = cm_object_get_child_by_name(state->u.k6.reg.iflag1, "BUF5I");
    state->u.k6.fld.iflag1.buf6i = cm_object_get_child_by_name(state->u.k6.reg.iflag1, "BUF6I");
    state->u.k6.fld.iflag1.buf7i = cm_object_get_child_by_name(state->u.k6.reg.iflag1, "BUF7I");
    state->u.k6.fld.iflag1.buf31to8i = cm_object_get_child_by_name(state->u.k6.reg.iflag1, "BUF31TO8I");

    // CTRL2 bitfields.
    state->u.k6.fld.ctrl2.eacen = cm_object_get_child_by_name(state->u.k6.reg.ctrl2, "EACEN");
    state->u.k6.fld.ctrl2.rrs = cm_object_get_child_by_name(state->u.k6.reg.ctrl2, "RRS");
    state->u.k6.fld.ctrl2.mrp = cm_object_get_child_by_name(state->u.k6.reg.ctrl2, "MRP");
    state->u.k6.fld.ctrl2.tasd = cm_object_get_child_by_name(state->u.k6.reg.ctrl2, "TASD");
    state->u.k6.fld.ctrl2.rffn = cm_object_get_child_by_name(state->u.k6.reg.ctrl2, "RFFN");
    state->u.k6.fld.ctrl2.wrmfrz = cm_object_get_child_by_name(state->u.k6.reg.ctrl2, "WRMFRZ");

    // ESR2 bitfields.
    state->u.k6.fld.esr2.imb = cm_object_get_child_by_name(state->u.k6.reg.esr2, "IMB");
    state->u.k6.fld.esr2.vps = cm_object_get_child_by_name(state->u.k6.reg.esr2, "VPS");
    state->u.k6.fld.esr2.lptm = cm_object_get_child_by_name(state->u.k6.reg.esr2, "LPTM");

    // CRCR bitfields.
    state->u.k6.fld.crcr.txcrc = cm_object_get_child_by_name(state->u.k6.reg.crcr, "TXCRC");
    state->u.k6.fld.crcr.mbcrc = cm_object_get_child_by_name(state->u.k6.reg.crcr, "MBCRC");

    // RXFGMASK bitfields.
    state->u.k6.fld.rxfgmask.fgm = cm_object_get_child_by_name(state->u.k6.reg.rxfgmask, "FGM");

    // RXFIR bitfields.
    state->u.k6.fld.rxfir.idhit = cm_object_get_child_by_name(state->u.k6.reg.rxfir, "IDHIT");

    // CS0 bitfields.
    state->u.k6.fld.cs0.time_stamp = cm_object_get_child_by_name(state->u.k6.reg.cs0, "TIME_STAMP");
    state->u.k6.fld.cs0.dlc = cm_object_get_child_by_name(state->u.k6.reg.cs0, "DLC");
    state->u.k6.fld.cs0.rtr = cm_object_get_child_by_name(state->u.k6.reg.cs0, "RTR");
    state->u.k6.fld.cs0.ide = cm_object_get_child_by_name(state->u.k6.reg.cs0, "IDE");
    state->u.k6.fld.cs0.srr = cm_object_get_child_by_name(state->u.k6.reg.cs0, "SRR");
    state->u.k6.fld.cs0.code = cm_object_get_child_by_name(state->u.k6.reg.cs0, "CODE");

    // ID0 bitfields.
    state->u.k6.fld.id0.ext = cm_object_get_child_by_name(state->u.k6.reg.id0, "EXT");
    state->u.k6.fld.id0.std = cm_object_get_child_by_name(state->u.k6.reg.id0, "STD");
    state->u.k6.fld.id0.prio = cm_object_get_child_by_name(state->u.k6.reg.id0, "PRIO");

    // WORD00 bitfields.
    state->u.k6.fld.word00.data_byte_3 = cm_object_get_child_by_name(state->u.k6.reg.word00, "DATA_BYTE_3");
    state->u.k6.fld.word00.data_byte_2 = cm_object_get_child_by_name(state->u.k6.reg.word00, "DATA_BYTE_2");
    state->u.k6.fld.word00.data_byte_1 = cm_object_get_child_by_name(state->u.k6.reg.word00, "DATA_BYTE_1");
    state->u.k6.fld.word00.data_byte_0 = cm_object_get_child_by_name(state->u.k6.reg.word00, "DATA_BYTE_0");

    // WORD10 bitfields.
    state->u.k6.fld.word10.data_byte_7 = cm_object_get_child_by_name(state->u.k6.reg.word10, "DATA_BYTE_7");
    state->u.k6.fld.word10.data_byte_6 = cm_object_get_child_by_name(state->u.k6.reg.word10, "DATA_BYTE_6");
    state->u.k6.fld.word10.data_byte_5 = cm_object_get_child_by_name(state->u.k6.reg.word10, "DATA_BYTE_5");
    state->u.k6.fld.word10.data_byte_4 = cm_object_get_child_by_name(state->u.k6.reg.word10, "DATA_BYTE_4");

    // CS1 bitfields.
    state->u.k6.fld.cs1.time_stamp = cm_object_get_child_by_name(state->u.k6.reg.cs1, "TIME_STAMP");
    state->u.k6.fld.cs1.dlc = cm_object_get_child_by_name(state->u.k6.reg.cs1, "DLC");
    state->u.k6.fld.cs1.rtr = cm_object_get_child_by_name(state->u.k6.reg.cs1, "RTR");
    state->u.k6.fld.cs1.ide = cm_object_get_child_by_name(state->u.k6.reg.cs1, "IDE");
    state->u.k6.fld.cs1.srr = cm_object_get_child_by_name(state->u.k6.reg.cs1, "SRR");
    state->u.k6.fld.cs1.code = cm_object_get_child_by_name(state->u.k6.reg.cs1, "CODE");

    // ID1 bitfields.
    state->u.k6.fld.id1.ext = cm_object_get_child_by_name(state->u.k6.reg.id1, "EXT");
    state->u.k6.fld.id1.std = cm_object_get_child_by_name(state->u.k6.reg.id1, "STD");
    state->u.k6.fld.id1.prio = cm_object_get_child_by_name(state->u.k6.reg.id1, "PRIO");

    // WORD01 bitfields.
    state->u.k6.fld.word01.data_byte_3 = cm_object_get_child_by_name(state->u.k6.reg.word01, "DATA_BYTE_3");
    state->u.k6.fld.word01.data_byte_2 = cm_object_get_child_by_name(state->u.k6.reg.word01, "DATA_BYTE_2");
    state->u.k6.fld.word01.data_byte_1 = cm_object_get_child_by_name(state->u.k6.reg.word01, "DATA_BYTE_1");
    state->u.k6.fld.word01.data_byte_0 = cm_object_get_child_by_name(state->u.k6.reg.word01, "DATA_BYTE_0");

    // WORD11 bitfields.
    state->u.k6.fld.word11.data_byte_7 = cm_object_get_child_by_name(state->u.k6.reg.word11, "DATA_BYTE_7");
    state->u.k6.fld.word11.data_byte_6 = cm_object_get_child_by_name(state->u.k6.reg.word11, "DATA_BYTE_6");
    state->u.k6.fld.word11.data_byte_5 = cm_object_get_child_by_name(state->u.k6.reg.word11, "DATA_BYTE_5");
    state->u.k6.fld.word11.data_byte_4 = cm_object_get_child_by_name(state->u.k6.reg.word11, "DATA_BYTE_4");

    // CS2 bitfields.
    state->u.k6.fld.cs2.time_stamp = cm_object_get_child_by_name(state->u.k6.reg.cs2, "TIME_STAMP");
    state->u.k6.fld.cs2.dlc = cm_object_get_child_by_name(state->u.k6.reg.cs2, "DLC");
    state->u.k6.fld.cs2.rtr = cm_object_get_child_by_name(state->u.k6.reg.cs2, "RTR");
    state->u.k6.fld.cs2.ide = cm_object_get_child_by_name(state->u.k6.reg.cs2, "IDE");
    state->u.k6.fld.cs2.srr = cm_object_get_child_by_name(state->u.k6.reg.cs2, "SRR");
    state->u.k6.fld.cs2.code = cm_object_get_child_by_name(state->u.k6.reg.cs2, "CODE");

    // ID2 bitfields.
    state->u.k6.fld.id2.ext = cm_object_get_child_by_name(state->u.k6.reg.id2, "EXT");
    state->u.k6.fld.id2.std = cm_object_get_child_by_name(state->u.k6.reg.id2, "STD");
    state->u.k6.fld.id2.prio = cm_object_get_child_by_name(state->u.k6.reg.id2, "PRIO");

    // WORD02 bitfields.
    state->u.k6.fld.word02.data_byte_3 = cm_object_get_child_by_name(state->u.k6.reg.word02, "DATA_BYTE_3");
    state->u.k6.fld.word02.data_byte_2 = cm_object_get_child_by_name(state->u.k6.reg.word02, "DATA_BYTE_2");
    state->u.k6.fld.word02.data_byte_1 = cm_object_get_child_by_name(state->u.k6.reg.word02, "DATA_BYTE_1");
    state->u.k6.fld.word02.data_byte_0 = cm_object_get_child_by_name(state->u.k6.reg.word02, "DATA_BYTE_0");

    // WORD12 bitfields.
    state->u.k6.fld.word12.data_byte_7 = cm_object_get_child_by_name(state->u.k6.reg.word12, "DATA_BYTE_7");
    state->u.k6.fld.word12.data_byte_6 = cm_object_get_child_by_name(state->u.k6.reg.word12, "DATA_BYTE_6");
    state->u.k6.fld.word12.data_byte_5 = cm_object_get_child_by_name(state->u.k6.reg.word12, "DATA_BYTE_5");
    state->u.k6.fld.word12.data_byte_4 = cm_object_get_child_by_name(state->u.k6.reg.word12, "DATA_BYTE_4");

    // CS3 bitfields.
    state->u.k6.fld.cs3.time_stamp = cm_object_get_child_by_name(state->u.k6.reg.cs3, "TIME_STAMP");
    state->u.k6.fld.cs3.dlc = cm_object_get_child_by_name(state->u.k6.reg.cs3, "DLC");
    state->u.k6.fld.cs3.rtr = cm_object_get_child_by_name(state->u.k6.reg.cs3, "RTR");
    state->u.k6.fld.cs3.ide = cm_object_get_child_by_name(state->u.k6.reg.cs3, "IDE");
    state->u.k6.fld.cs3.srr = cm_object_get_child_by_name(state->u.k6.reg.cs3, "SRR");
    state->u.k6.fld.cs3.code = cm_object_get_child_by_name(state->u.k6.reg.cs3, "CODE");

    // ID3 bitfields.
    state->u.k6.fld.id3.ext = cm_object_get_child_by_name(state->u.k6.reg.id3, "EXT");
    state->u.k6.fld.id3.std = cm_object_get_child_by_name(state->u.k6.reg.id3, "STD");
    state->u.k6.fld.id3.prio = cm_object_get_child_by_name(state->u.k6.reg.id3, "PRIO");

    // WORD03 bitfields.
    state->u.k6.fld.word03.data_byte_3 = cm_object_get_child_by_name(state->u.k6.reg.word03, "DATA_BYTE_3");
    state->u.k6.fld.word03.data_byte_2 = cm_object_get_child_by_name(state->u.k6.reg.word03, "DATA_BYTE_2");
    state->u.k6.fld.word03.data_byte_1 = cm_object_get_child_by_name(state->u.k6.reg.word03, "DATA_BYTE_1");
    state->u.k6.fld.word03.data_byte_0 = cm_object_get_child_by_name(state->u.k6.reg.word03, "DATA_BYTE_0");

    // WORD13 bitfields.
    state->u.k6.fld.word13.data_byte_7 = cm_object_get_child_by_name(state->u.k6.reg.word13, "DATA_BYTE_7");
    state->u.k6.fld.word13.data_byte_6 = cm_object_get_child_by_name(state->u.k6.reg.word13, "DATA_BYTE_6");
    state->u.k6.fld.word13.data_byte_5 = cm_object_get_child_by_name(state->u.k6.reg.word13, "DATA_BYTE_5");
    state->u.k6.fld.word13.data_byte_4 = cm_object_get_child_by_name(state->u.k6.reg.word13, "DATA_BYTE_4");

    // CS4 bitfields.
    state->u.k6.fld.cs4.time_stamp = cm_object_get_child_by_name(state->u.k6.reg.cs4, "TIME_STAMP");
    state->u.k6.fld.cs4.dlc = cm_object_get_child_by_name(state->u.k6.reg.cs4, "DLC");
    state->u.k6.fld.cs4.rtr = cm_object_get_child_by_name(state->u.k6.reg.cs4, "RTR");
    state->u.k6.fld.cs4.ide = cm_object_get_child_by_name(state->u.k6.reg.cs4, "IDE");
    state->u.k6.fld.cs4.srr = cm_object_get_child_by_name(state->u.k6.reg.cs4, "SRR");
    state->u.k6.fld.cs4.code = cm_object_get_child_by_name(state->u.k6.reg.cs4, "CODE");

    // ID4 bitfields.
    state->u.k6.fld.id4.ext = cm_object_get_child_by_name(state->u.k6.reg.id4, "EXT");
    state->u.k6.fld.id4.std = cm_object_get_child_by_name(state->u.k6.reg.id4, "STD");
    state->u.k6.fld.id4.prio = cm_object_get_child_by_name(state->u.k6.reg.id4, "PRIO");

    // WORD04 bitfields.
    state->u.k6.fld.word04.data_byte_3 = cm_object_get_child_by_name(state->u.k6.reg.word04, "DATA_BYTE_3");
    state->u.k6.fld.word04.data_byte_2 = cm_object_get_child_by_name(state->u.k6.reg.word04, "DATA_BYTE_2");
    state->u.k6.fld.word04.data_byte_1 = cm_object_get_child_by_name(state->u.k6.reg.word04, "DATA_BYTE_1");
    state->u.k6.fld.word04.data_byte_0 = cm_object_get_child_by_name(state->u.k6.reg.word04, "DATA_BYTE_0");

    // WORD14 bitfields.
    state->u.k6.fld.word14.data_byte_7 = cm_object_get_child_by_name(state->u.k6.reg.word14, "DATA_BYTE_7");
    state->u.k6.fld.word14.data_byte_6 = cm_object_get_child_by_name(state->u.k6.reg.word14, "DATA_BYTE_6");
    state->u.k6.fld.word14.data_byte_5 = cm_object_get_child_by_name(state->u.k6.reg.word14, "DATA_BYTE_5");
    state->u.k6.fld.word14.data_byte_4 = cm_object_get_child_by_name(state->u.k6.reg.word14, "DATA_BYTE_4");

    // CS5 bitfields.
    state->u.k6.fld.cs5.time_stamp = cm_object_get_child_by_name(state->u.k6.reg.cs5, "TIME_STAMP");
    state->u.k6.fld.cs5.dlc = cm_object_get_child_by_name(state->u.k6.reg.cs5, "DLC");
    state->u.k6.fld.cs5.rtr = cm_object_get_child_by_name(state->u.k6.reg.cs5, "RTR");
    state->u.k6.fld.cs5.ide = cm_object_get_child_by_name(state->u.k6.reg.cs5, "IDE");
    state->u.k6.fld.cs5.srr = cm_object_get_child_by_name(state->u.k6.reg.cs5, "SRR");
    state->u.k6.fld.cs5.code = cm_object_get_child_by_name(state->u.k6.reg.cs5, "CODE");

    // ID5 bitfields.
    state->u.k6.fld.id5.ext = cm_object_get_child_by_name(state->u.k6.reg.id5, "EXT");
    state->u.k6.fld.id5.std = cm_object_get_child_by_name(state->u.k6.reg.id5, "STD");
    state->u.k6.fld.id5.prio = cm_object_get_child_by_name(state->u.k6.reg.id5, "PRIO");

    // WORD05 bitfields.
    state->u.k6.fld.word05.data_byte_3 = cm_object_get_child_by_name(state->u.k6.reg.word05, "DATA_BYTE_3");
    state->u.k6.fld.word05.data_byte_2 = cm_object_get_child_by_name(state->u.k6.reg.word05, "DATA_BYTE_2");
    state->u.k6.fld.word05.data_byte_1 = cm_object_get_child_by_name(state->u.k6.reg.word05, "DATA_BYTE_1");
    state->u.k6.fld.word05.data_byte_0 = cm_object_get_child_by_name(state->u.k6.reg.word05, "DATA_BYTE_0");

    // WORD15 bitfields.
    state->u.k6.fld.word15.data_byte_7 = cm_object_get_child_by_name(state->u.k6.reg.word15, "DATA_BYTE_7");
    state->u.k6.fld.word15.data_byte_6 = cm_object_get_child_by_name(state->u.k6.reg.word15, "DATA_BYTE_6");
    state->u.k6.fld.word15.data_byte_5 = cm_object_get_child_by_name(state->u.k6.reg.word15, "DATA_BYTE_5");
    state->u.k6.fld.word15.data_byte_4 = cm_object_get_child_by_name(state->u.k6.reg.word15, "DATA_BYTE_4");

    // CS6 bitfields.
    state->u.k6.fld.cs6.time_stamp = cm_object_get_child_by_name(state->u.k6.reg.cs6, "TIME_STAMP");
    state->u.k6.fld.cs6.dlc = cm_object_get_child_by_name(state->u.k6.reg.cs6, "DLC");
    state->u.k6.fld.cs6.rtr = cm_object_get_child_by_name(state->u.k6.reg.cs6, "RTR");
    state->u.k6.fld.cs6.ide = cm_object_get_child_by_name(state->u.k6.reg.cs6, "IDE");
    state->u.k6.fld.cs6.srr = cm_object_get_child_by_name(state->u.k6.reg.cs6, "SRR");
    state->u.k6.fld.cs6.code = cm_object_get_child_by_name(state->u.k6.reg.cs6, "CODE");

    // ID6 bitfields.
    state->u.k6.fld.id6.ext = cm_object_get_child_by_name(state->u.k6.reg.id6, "EXT");
    state->u.k6.fld.id6.std = cm_object_get_child_by_name(state->u.k6.reg.id6, "STD");
    state->u.k6.fld.id6.prio = cm_object_get_child_by_name(state->u.k6.reg.id6, "PRIO");

    // WORD06 bitfields.
    state->u.k6.fld.word06.data_byte_3 = cm_object_get_child_by_name(state->u.k6.reg.word06, "DATA_BYTE_3");
    state->u.k6.fld.word06.data_byte_2 = cm_object_get_child_by_name(state->u.k6.reg.word06, "DATA_BYTE_2");
    state->u.k6.fld.word06.data_byte_1 = cm_object_get_child_by_name(state->u.k6.reg.word06, "DATA_BYTE_1");
    state->u.k6.fld.word06.data_byte_0 = cm_object_get_child_by_name(state->u.k6.reg.word06, "DATA_BYTE_0");

    // WORD16 bitfields.
    state->u.k6.fld.word16.data_byte_7 = cm_object_get_child_by_name(state->u.k6.reg.word16, "DATA_BYTE_7");
    state->u.k6.fld.word16.data_byte_6 = cm_object_get_child_by_name(state->u.k6.reg.word16, "DATA_BYTE_6");
    state->u.k6.fld.word16.data_byte_5 = cm_object_get_child_by_name(state->u.k6.reg.word16, "DATA_BYTE_5");
    state->u.k6.fld.word16.data_byte_4 = cm_object_get_child_by_name(state->u.k6.reg.word16, "DATA_BYTE_4");

    // CS7 bitfields.
    state->u.k6.fld.cs7.time_stamp = cm_object_get_child_by_name(state->u.k6.reg.cs7, "TIME_STAMP");
    state->u.k6.fld.cs7.dlc = cm_object_get_child_by_name(state->u.k6.reg.cs7, "DLC");
    state->u.k6.fld.cs7.rtr = cm_object_get_child_by_name(state->u.k6.reg.cs7, "RTR");
    state->u.k6.fld.cs7.ide = cm_object_get_child_by_name(state->u.k6.reg.cs7, "IDE");
    state->u.k6.fld.cs7.srr = cm_object_get_child_by_name(state->u.k6.reg.cs7, "SRR");
    state->u.k6.fld.cs7.code = cm_object_get_child_by_name(state->u.k6.reg.cs7, "CODE");

    // ID7 bitfields.
    state->u.k6.fld.id7.ext = cm_object_get_child_by_name(state->u.k6.reg.id7, "EXT");
    state->u.k6.fld.id7.std = cm_object_get_child_by_name(state->u.k6.reg.id7, "STD");
    state->u.k6.fld.id7.prio = cm_object_get_child_by_name(state->u.k6.reg.id7, "PRIO");

    // WORD07 bitfields.
    state->u.k6.fld.word07.data_byte_3 = cm_object_get_child_by_name(state->u.k6.reg.word07, "DATA_BYTE_3");
    state->u.k6.fld.word07.data_byte_2 = cm_object_get_child_by_name(state->u.k6.reg.word07, "DATA_BYTE_2");
    state->u.k6.fld.word07.data_byte_1 = cm_object_get_child_by_name(state->u.k6.reg.word07, "DATA_BYTE_1");
    state->u.k6.fld.word07.data_byte_0 = cm_object_get_child_by_name(state->u.k6.reg.word07, "DATA_BYTE_0");

    // WORD17 bitfields.
    state->u.k6.fld.word17.data_byte_7 = cm_object_get_child_by_name(state->u.k6.reg.word17, "DATA_BYTE_7");
    state->u.k6.fld.word17.data_byte_6 = cm_object_get_child_by_name(state->u.k6.reg.word17, "DATA_BYTE_6");
    state->u.k6.fld.word17.data_byte_5 = cm_object_get_child_by_name(state->u.k6.reg.word17, "DATA_BYTE_5");
    state->u.k6.fld.word17.data_byte_4 = cm_object_get_child_by_name(state->u.k6.reg.word17, "DATA_BYTE_4");

    // CS8 bitfields.
    state->u.k6.fld.cs8.time_stamp = cm_object_get_child_by_name(state->u.k6.reg.cs8, "TIME_STAMP");
    state->u.k6.fld.cs8.dlc = cm_object_get_child_by_name(state->u.k6.reg.cs8, "DLC");
    state->u.k6.fld.cs8.rtr = cm_object_get_child_by_name(state->u.k6.reg.cs8, "RTR");
    state->u.k6.fld.cs8.ide = cm_object_get_child_by_name(state->u.k6.reg.cs8, "IDE");
    state->u.k6.fld.cs8.srr = cm_object_get_child_by_name(state->u.k6.reg.cs8, "SRR");
    state->u.k6.fld.cs8.code = cm_object_get_child_by_name(state->u.k6.reg.cs8, "CODE");

    // ID8 bitfields.
    state->u.k6.fld.id8.ext = cm_object_get_child_by_name(state->u.k6.reg.id8, "EXT");
    state->u.k6.fld.id8.std = cm_object_get_child_by_name(state->u.k6.reg.id8, "STD");
    state->u.k6.fld.id8.prio = cm_object_get_child_by_name(state->u.k6.reg.id8, "PRIO");

    // WORD08 bitfields.
    state->u.k6.fld.word08.data_byte_3 = cm_object_get_child_by_name(state->u.k6.reg.word08, "DATA_BYTE_3");
    state->u.k6.fld.word08.data_byte_2 = cm_object_get_child_by_name(state->u.k6.reg.word08, "DATA_BYTE_2");
    state->u.k6.fld.word08.data_byte_1 = cm_object_get_child_by_name(state->u.k6.reg.word08, "DATA_BYTE_1");
    state->u.k6.fld.word08.data_byte_0 = cm_object_get_child_by_name(state->u.k6.reg.word08, "DATA_BYTE_0");

    // WORD18 bitfields.
    state->u.k6.fld.word18.data_byte_7 = cm_object_get_child_by_name(state->u.k6.reg.word18, "DATA_BYTE_7");
    state->u.k6.fld.word18.data_byte_6 = cm_object_get_child_by_name(state->u.k6.reg.word18, "DATA_BYTE_6");
    state->u.k6.fld.word18.data_byte_5 = cm_object_get_child_by_name(state->u.k6.reg.word18, "DATA_BYTE_5");
    state->u.k6.fld.word18.data_byte_4 = cm_object_get_child_by_name(state->u.k6.reg.word18, "DATA_BYTE_4");

    // CS9 bitfields.
    state->u.k6.fld.cs9.time_stamp = cm_object_get_child_by_name(state->u.k6.reg.cs9, "TIME_STAMP");
    state->u.k6.fld.cs9.dlc = cm_object_get_child_by_name(state->u.k6.reg.cs9, "DLC");
    state->u.k6.fld.cs9.rtr = cm_object_get_child_by_name(state->u.k6.reg.cs9, "RTR");
    state->u.k6.fld.cs9.ide = cm_object_get_child_by_name(state->u.k6.reg.cs9, "IDE");
    state->u.k6.fld.cs9.srr = cm_object_get_child_by_name(state->u.k6.reg.cs9, "SRR");
    state->u.k6.fld.cs9.code = cm_object_get_child_by_name(state->u.k6.reg.cs9, "CODE");

    // ID9 bitfields.
    state->u.k6.fld.id9.ext = cm_object_get_child_by_name(state->u.k6.reg.id9, "EXT");
    state->u.k6.fld.id9.std = cm_object_get_child_by_name(state->u.k6.reg.id9, "STD");
    state->u.k6.fld.id9.prio = cm_object_get_child_by_name(state->u.k6.reg.id9, "PRIO");

    // WORD09 bitfields.
    state->u.k6.fld.word09.data_byte_3 = cm_object_get_child_by_name(state->u.k6.reg.word09, "DATA_BYTE_3");
    state->u.k6.fld.word09.data_byte_2 = cm_object_get_child_by_name(state->u.k6.reg.word09, "DATA_BYTE_2");
    state->u.k6.fld.word09.data_byte_1 = cm_object_get_child_by_name(state->u.k6.reg.word09, "DATA_BYTE_1");
    state->u.k6.fld.word09.data_byte_0 = cm_object_get_child_by_name(state->u.k6.reg.word09, "DATA_BYTE_0");

    // WORD19 bitfields.
    state->u.k6.fld.word19.data_byte_7 = cm_object_get_child_by_name(state->u.k6.reg.word19, "DATA_BYTE_7");
    state->u.k6.fld.word19.data_byte_6 = cm_object_get_child_by_name(state->u.k6.reg.word19, "DATA_BYTE_6");
    state->u.k6.fld.word19.data_byte_5 = cm_object_get_child_by_name(state->u.k6.reg.word19, "DATA_BYTE_5");
    state->u.k6.fld.word19.data_byte_4 = cm_object_get_child_by_name(state->u.k6.reg.word19, "DATA_BYTE_4");

    // CS10 bitfields.
    state->u.k6.fld.cs10.time_stamp = cm_object_get_child_by_name(state->u.k6.reg.cs10, "TIME_STAMP");
    state->u.k6.fld.cs10.dlc = cm_object_get_child_by_name(state->u.k6.reg.cs10, "DLC");
    state->u.k6.fld.cs10.rtr = cm_object_get_child_by_name(state->u.k6.reg.cs10, "RTR");
    state->u.k6.fld.cs10.ide = cm_object_get_child_by_name(state->u.k6.reg.cs10, "IDE");
    state->u.k6.fld.cs10.srr = cm_object_get_child_by_name(state->u.k6.reg.cs10, "SRR");
    state->u.k6.fld.cs10.code = cm_object_get_child_by_name(state->u.k6.reg.cs10, "CODE");

    // ID10 bitfields.
    state->u.k6.fld.id10.ext = cm_object_get_child_by_name(state->u.k6.reg.id10, "EXT");
    state->u.k6.fld.id10.std = cm_object_get_child_by_name(state->u.k6.reg.id10, "STD");
    state->u.k6.fld.id10.prio = cm_object_get_child_by_name(state->u.k6.reg.id10, "PRIO");

    // WORD010 bitfields.
    state->u.k6.fld.word010.data_byte_3 = cm_object_get_child_by_name(state->u.k6.reg.word010, "DATA_BYTE_3");
    state->u.k6.fld.word010.data_byte_2 = cm_object_get_child_by_name(state->u.k6.reg.word010, "DATA_BYTE_2");
    state->u.k6.fld.word010.data_byte_1 = cm_object_get_child_by_name(state->u.k6.reg.word010, "DATA_BYTE_1");
    state->u.k6.fld.word010.data_byte_0 = cm_object_get_child_by_name(state->u.k6.reg.word010, "DATA_BYTE_0");

    // WORD110 bitfields.
    state->u.k6.fld.word110.data_byte_7 = cm_object_get_child_by_name(state->u.k6.reg.word110, "DATA_BYTE_7");
    state->u.k6.fld.word110.data_byte_6 = cm_object_get_child_by_name(state->u.k6.reg.word110, "DATA_BYTE_6");
    state->u.k6.fld.word110.data_byte_5 = cm_object_get_child_by_name(state->u.k6.reg.word110, "DATA_BYTE_5");
    state->u.k6.fld.word110.data_byte_4 = cm_object_get_child_by_name(state->u.k6.reg.word110, "DATA_BYTE_4");

    // CS11 bitfields.
    state->u.k6.fld.cs11.time_stamp = cm_object_get_child_by_name(state->u.k6.reg.cs11, "TIME_STAMP");
    state->u.k6.fld.cs11.dlc = cm_object_get_child_by_name(state->u.k6.reg.cs11, "DLC");
    state->u.k6.fld.cs11.rtr = cm_object_get_child_by_name(state->u.k6.reg.cs11, "RTR");
    state->u.k6.fld.cs11.ide = cm_object_get_child_by_name(state->u.k6.reg.cs11, "IDE");
    state->u.k6.fld.cs11.srr = cm_object_get_child_by_name(state->u.k6.reg.cs11, "SRR");
    state->u.k6.fld.cs11.code = cm_object_get_child_by_name(state->u.k6.reg.cs11, "CODE");

    // ID11 bitfields.
    state->u.k6.fld.id11.ext = cm_object_get_child_by_name(state->u.k6.reg.id11, "EXT");
    state->u.k6.fld.id11.std = cm_object_get_child_by_name(state->u.k6.reg.id11, "STD");
    state->u.k6.fld.id11.prio = cm_object_get_child_by_name(state->u.k6.reg.id11, "PRIO");

    // WORD011 bitfields.
    state->u.k6.fld.word011.data_byte_3 = cm_object_get_child_by_name(state->u.k6.reg.word011, "DATA_BYTE_3");
    state->u.k6.fld.word011.data_byte_2 = cm_object_get_child_by_name(state->u.k6.reg.word011, "DATA_BYTE_2");
    state->u.k6.fld.word011.data_byte_1 = cm_object_get_child_by_name(state->u.k6.reg.word011, "DATA_BYTE_1");
    state->u.k6.fld.word011.data_byte_0 = cm_object_get_child_by_name(state->u.k6.reg.word011, "DATA_BYTE_0");

    // WORD111 bitfields.
    state->u.k6.fld.word111.data_byte_7 = cm_object_get_child_by_name(state->u.k6.reg.word111, "DATA_BYTE_7");
    state->u.k6.fld.word111.data_byte_6 = cm_object_get_child_by_name(state->u.k6.reg.word111, "DATA_BYTE_6");
    state->u.k6.fld.word111.data_byte_5 = cm_object_get_child_by_name(state->u.k6.reg.word111, "DATA_BYTE_5");
    state->u.k6.fld.word111.data_byte_4 = cm_object_get_child_by_name(state->u.k6.reg.word111, "DATA_BYTE_4");

    // CS12 bitfields.
    state->u.k6.fld.cs12.time_stamp = cm_object_get_child_by_name(state->u.k6.reg.cs12, "TIME_STAMP");
    state->u.k6.fld.cs12.dlc = cm_object_get_child_by_name(state->u.k6.reg.cs12, "DLC");
    state->u.k6.fld.cs12.rtr = cm_object_get_child_by_name(state->u.k6.reg.cs12, "RTR");
    state->u.k6.fld.cs12.ide = cm_object_get_child_by_name(state->u.k6.reg.cs12, "IDE");
    state->u.k6.fld.cs12.srr = cm_object_get_child_by_name(state->u.k6.reg.cs12, "SRR");
    state->u.k6.fld.cs12.code = cm_object_get_child_by_name(state->u.k6.reg.cs12, "CODE");

    // ID12 bitfields.
    state->u.k6.fld.id12.ext = cm_object_get_child_by_name(state->u.k6.reg.id12, "EXT");
    state->u.k6.fld.id12.std = cm_object_get_child_by_name(state->u.k6.reg.id12, "STD");
    state->u.k6.fld.id12.prio = cm_object_get_child_by_name(state->u.k6.reg.id12, "PRIO");

    // WORD012 bitfields.
    state->u.k6.fld.word012.data_byte_3 = cm_object_get_child_by_name(state->u.k6.reg.word012, "DATA_BYTE_3");
    state->u.k6.fld.word012.data_byte_2 = cm_object_get_child_by_name(state->u.k6.reg.word012, "DATA_BYTE_2");
    state->u.k6.fld.word012.data_byte_1 = cm_object_get_child_by_name(state->u.k6.reg.word012, "DATA_BYTE_1");
    state->u.k6.fld.word012.data_byte_0 = cm_object_get_child_by_name(state->u.k6.reg.word012, "DATA_BYTE_0");

    // WORD112 bitfields.
    state->u.k6.fld.word112.data_byte_7 = cm_object_get_child_by_name(state->u.k6.reg.word112, "DATA_BYTE_7");
    state->u.k6.fld.word112.data_byte_6 = cm_object_get_child_by_name(state->u.k6.reg.word112, "DATA_BYTE_6");
    state->u.k6.fld.word112.data_byte_5 = cm_object_get_child_by_name(state->u.k6.reg.word112, "DATA_BYTE_5");
    state->u.k6.fld.word112.data_byte_4 = cm_object_get_child_by_name(state->u.k6.reg.word112, "DATA_BYTE_4");

    // CS13 bitfields.
    state->u.k6.fld.cs13.time_stamp = cm_object_get_child_by_name(state->u.k6.reg.cs13, "TIME_STAMP");
    state->u.k6.fld.cs13.dlc = cm_object_get_child_by_name(state->u.k6.reg.cs13, "DLC");
    state->u.k6.fld.cs13.rtr = cm_object_get_child_by_name(state->u.k6.reg.cs13, "RTR");
    state->u.k6.fld.cs13.ide = cm_object_get_child_by_name(state->u.k6.reg.cs13, "IDE");
    state->u.k6.fld.cs13.srr = cm_object_get_child_by_name(state->u.k6.reg.cs13, "SRR");
    state->u.k6.fld.cs13.code = cm_object_get_child_by_name(state->u.k6.reg.cs13, "CODE");

    // ID13 bitfields.
    state->u.k6.fld.id13.ext = cm_object_get_child_by_name(state->u.k6.reg.id13, "EXT");
    state->u.k6.fld.id13.std = cm_object_get_child_by_name(state->u.k6.reg.id13, "STD");
    state->u.k6.fld.id13.prio = cm_object_get_child_by_name(state->u.k6.reg.id13, "PRIO");

    // WORD013 bitfields.
    state->u.k6.fld.word013.data_byte_3 = cm_object_get_child_by_name(state->u.k6.reg.word013, "DATA_BYTE_3");
    state->u.k6.fld.word013.data_byte_2 = cm_object_get_child_by_name(state->u.k6.reg.word013, "DATA_BYTE_2");
    state->u.k6.fld.word013.data_byte_1 = cm_object_get_child_by_name(state->u.k6.reg.word013, "DATA_BYTE_1");
    state->u.k6.fld.word013.data_byte_0 = cm_object_get_child_by_name(state->u.k6.reg.word013, "DATA_BYTE_0");

    // WORD113 bitfields.
    state->u.k6.fld.word113.data_byte_7 = cm_object_get_child_by_name(state->u.k6.reg.word113, "DATA_BYTE_7");
    state->u.k6.fld.word113.data_byte_6 = cm_object_get_child_by_name(state->u.k6.reg.word113, "DATA_BYTE_6");
    state->u.k6.fld.word113.data_byte_5 = cm_object_get_child_by_name(state->u.k6.reg.word113, "DATA_BYTE_5");
    state->u.k6.fld.word113.data_byte_4 = cm_object_get_child_by_name(state->u.k6.reg.word113, "DATA_BYTE_4");

    // CS14 bitfields.
    state->u.k6.fld.cs14.time_stamp = cm_object_get_child_by_name(state->u.k6.reg.cs14, "TIME_STAMP");
    state->u.k6.fld.cs14.dlc = cm_object_get_child_by_name(state->u.k6.reg.cs14, "DLC");
    state->u.k6.fld.cs14.rtr = cm_object_get_child_by_name(state->u.k6.reg.cs14, "RTR");
    state->u.k6.fld.cs14.ide = cm_object_get_child_by_name(state->u.k6.reg.cs14, "IDE");
    state->u.k6.fld.cs14.srr = cm_object_get_child_by_name(state->u.k6.reg.cs14, "SRR");
    state->u.k6.fld.cs14.code = cm_object_get_child_by_name(state->u.k6.reg.cs14, "CODE");

    // ID14 bitfields.
    state->u.k6.fld.id14.ext = cm_object_get_child_by_name(state->u.k6.reg.id14, "EXT");
    state->u.k6.fld.id14.std = cm_object_get_child_by_name(state->u.k6.reg.id14, "STD");
    state->u.k6.fld.id14.prio = cm_object_get_child_by_name(state->u.k6.reg.id14, "PRIO");

    // WORD014 bitfields.
    state->u.k6.fld.word014.data_byte_3 = cm_object_get_child_by_name(state->u.k6.reg.word014, "DATA_BYTE_3");
    state->u.k6.fld.word014.data_byte_2 = cm_object_get_child_by_name(state->u.k6.reg.word014, "DATA_BYTE_2");
    state->u.k6.fld.word014.data_byte_1 = cm_object_get_child_by_name(state->u.k6.reg.word014, "DATA_BYTE_1");
    state->u.k6.fld.word014.data_byte_0 = cm_object_get_child_by_name(state->u.k6.reg.word014, "DATA_BYTE_0");

    // WORD114 bitfields.
    state->u.k6.fld.word114.data_byte_7 = cm_object_get_child_by_name(state->u.k6.reg.word114, "DATA_BYTE_7");
    state->u.k6.fld.word114.data_byte_6 = cm_object_get_child_by_name(state->u.k6.reg.word114, "DATA_BYTE_6");
    state->u.k6.fld.word114.data_byte_5 = cm_object_get_child_by_name(state->u.k6.reg.word114, "DATA_BYTE_5");
    state->u.k6.fld.word114.data_byte_4 = cm_object_get_child_by_name(state->u.k6.reg.word114, "DATA_BYTE_4");

    // CS15 bitfields.
    state->u.k6.fld.cs15.time_stamp = cm_object_get_child_by_name(state->u.k6.reg.cs15, "TIME_STAMP");
    state->u.k6.fld.cs15.dlc = cm_object_get_child_by_name(state->u.k6.reg.cs15, "DLC");
    state->u.k6.fld.cs15.rtr = cm_object_get_child_by_name(state->u.k6.reg.cs15, "RTR");
    state->u.k6.fld.cs15.ide = cm_object_get_child_by_name(state->u.k6.reg.cs15, "IDE");
    state->u.k6.fld.cs15.srr = cm_object_get_child_by_name(state->u.k6.reg.cs15, "SRR");
    state->u.k6.fld.cs15.code = cm_object_get_child_by_name(state->u.k6.reg.cs15, "CODE");

    // ID15 bitfields.
    state->u.k6.fld.id15.ext = cm_object_get_child_by_name(state->u.k6.reg.id15, "EXT");
    state->u.k6.fld.id15.std = cm_object_get_child_by_name(state->u.k6.reg.id15, "STD");
    state->u.k6.fld.id15.prio = cm_object_get_child_by_name(state->u.k6.reg.id15, "PRIO");

    // WORD015 bitfields.
    state->u.k6.fld.word015.data_byte_3 = cm_object_get_child_by_name(state->u.k6.reg.word015, "DATA_BYTE_3");
    state->u.k6.fld.word015.data_byte_2 = cm_object_get_child_by_name(state->u.k6.reg.word015, "DATA_BYTE_2");
    state->u.k6.fld.word015.data_byte_1 = cm_object_get_child_by_name(state->u.k6.reg.word015, "DATA_BYTE_1");
    state->u.k6.fld.word015.data_byte_0 = cm_object_get_child_by_name(state->u.k6.reg.word015, "DATA_BYTE_0");

    // WORD115 bitfields.
    state->u.k6.fld.word115.data_byte_7 = cm_object_get_child_by_name(state->u.k6.reg.word115, "DATA_BYTE_7");
    state->u.k6.fld.word115.data_byte_6 = cm_object_get_child_by_name(state->u.k6.reg.word115, "DATA_BYTE_6");
    state->u.k6.fld.word115.data_byte_5 = cm_object_get_child_by_name(state->u.k6.reg.word115, "DATA_BYTE_5");
    state->u.k6.fld.word115.data_byte_4 = cm_object_get_child_by_name(state->u.k6.reg.word115, "DATA_BYTE_4");
    // RXIMR0 bitfields.
    state->u.k6.fld.rximr[0].mi = cm_object_get_child_by_name(state->u.k6.reg.rximr[0], "MI");
    // RXIMR1 bitfields.
    state->u.k6.fld.rximr[1].mi = cm_object_get_child_by_name(state->u.k6.reg.rximr[1], "MI");
    // RXIMR2 bitfields.
    state->u.k6.fld.rximr[2].mi = cm_object_get_child_by_name(state->u.k6.reg.rximr[2], "MI");
    // RXIMR3 bitfields.
    state->u.k6.fld.rximr[3].mi = cm_object_get_child_by_name(state->u.k6.reg.rximr[3], "MI");
    // RXIMR4 bitfields.
    state->u.k6.fld.rximr[4].mi = cm_object_get_child_by_name(state->u.k6.reg.rximr[4], "MI");
    // RXIMR5 bitfields.
    state->u.k6.fld.rximr[5].mi = cm_object_get_child_by_name(state->u.k6.reg.rximr[5], "MI");
    // RXIMR6 bitfields.
    state->u.k6.fld.rximr[6].mi = cm_object_get_child_by_name(state->u.k6.reg.rximr[6], "MI");
    // RXIMR7 bitfields.
    state->u.k6.fld.rximr[7].mi = cm_object_get_child_by_name(state->u.k6.reg.rximr[7], "MI");
    // RXIMR8 bitfields.
    state->u.k6.fld.rximr[8].mi = cm_object_get_child_by_name(state->u.k6.reg.rximr[8], "MI");
    // RXIMR9 bitfields.
    state->u.k6.fld.rximr[9].mi = cm_object_get_child_by_name(state->u.k6.reg.rximr[9], "MI");
    // RXIMR10 bitfields.
    state->u.k6.fld.rximr[10].mi = cm_object_get_child_by_name(state->u.k6.reg.rximr[10], "MI");
    // RXIMR11 bitfields.
    state->u.k6.fld.rximr[11].mi = cm_object_get_child_by_name(state->u.k6.reg.rximr[11], "MI");
    // RXIMR12 bitfields.
    state->u.k6.fld.rximr[12].mi = cm_object_get_child_by_name(state->u.k6.reg.rximr[12], "MI");
    // RXIMR13 bitfields.
    state->u.k6.fld.rximr[13].mi = cm_object_get_child_by_name(state->u.k6.reg.rximr[13], "MI");
    // RXIMR14 bitfields.
    state->u.k6.fld.rximr[14].mi = cm_object_get_child_by_name(state->u.k6.reg.rximr[14], "MI");
    // RXIMR15 bitfields.
    state->u.k6.fld.rximr[15].mi = cm_object_get_child_by_name(state->u.k6.reg.rximr[15], "MI");
}

// ----- 8< ----- 8< -----  8< ----- 8< ----- 8< ----- 8< ----- 8< -----

// ----- Private --------------------------------------------------------------

#if 0
static peripheral_register_t kinetis_can_xxx_pre_write_callback(Object *reg,
        Object *periph, uint32_t addr, uint32_t offset, unsigned size,
        peripheral_register_t value, peripheral_register_t full_value)
{
    KinetisCANState *state = KINETIS_CAN_STATE(periph);

    peripheral_register_t prev_value = peripheral_register_get_raw_prev_value(reg);

    // TODO: Add code to adjust the value (like applying some masks,
    // for example prevent setting interrupts not enabled).
    // Also process cleared/set by write 1/0 bits.
    // The returned value will be stored in the register value.

    return full_value;
}

static void kinetis_can_xxx_post_write_callback(Object *reg, Object *periph,
        uint32_t addr, uint32_t offset, unsigned size,
        peripheral_register_t value, peripheral_register_t full_value)
{
    KinetisCANState *state = KINETIS_CAN_STATE(periph);

    peripheral_register_t prev_value = peripheral_register_get_raw_prev_value(reg);
    // The new register value is full_value, the old one is prev_value.

    // TODO: Add code to send the value to the consumer.
}

static peripheral_register_t kinetis_can_xxx_pre_read_callback(Object *reg,
        Object *periph, uint32_t addr, uint32_t offset, unsigned size)
{
    KinetisCANState *state = KINETIS_CAN_STATE(periph);

    peripheral_register_t value = 0;

    // Add code to get the value from the producer, and return it.

    // This value, possibly masked, will be stored in the register
    // and returned when the register is read.
    return value;
}

static void kinetis_can_xxx_post_read_callback(Object *reg, Object *periph,
        uint32_t addr, uint32_t offset, unsigned size)
{
    KinetisCANState *state = KINETIS_CAN_STATE(periph);

    peripheral_register_t value = peripheral_register_get_raw_value(reg);

    // TODO: add code to perform the post read actions, like clearing some bits.
}
#endif

// ----------------------------------------------------------------------------

// TODO: remove this if the peripheral is always enabled.
static bool kinetis_can_is_enabled(Object *obj)
{
    KinetisCANState *state = KINETIS_CAN_STATE(obj);

    if (register_bitfield_is_non_zero(state->enabling_bit)) {
        return true; // Positive logic, bit == 1 means enabled.
    }

    // Not enabled
    return false;
}

static void kinetis_can_instance_init_callback(Object *obj)
{
    qemu_log_function_name();

    KinetisCANState *state = KINETIS_CAN_STATE(obj);

    // Capabilities are not yet available.

    cm_object_property_add_int(obj, "port-index",
            (const int *) &state->port_index);
    state->port_index = KINETIS_PORT_CAN_UNDEFINED;

    // TODO: remove this if the peripheral is always enabled.
    state->enabling_bit = NULL;
    
    // TODO: Add code to initialise all members.
}

static void kinetis_can_realize_callback(DeviceState *dev, Error **errp)
{
    qemu_log_function_name();

    // Call parent realize().
    if (!cm_device_parent_realize(dev, errp, TYPE_KINETIS_CAN)) {
        return;
    }

    KinetisMCUState *mcu = kinetis_mcu_get();
    CortexMState *cm_state = CORTEXM_MCU_STATE(mcu);

    KinetisCANState *state = KINETIS_CAN_STATE(dev);
    // First thing first: get capabilities from MCU, needed everywhere.
    state->capabilities = mcu->capabilities;

    // Also keep a local pointer, to access them easier.
    const KinetisCapabilities *capabilities = state->capabilities;
    assert(capabilities != NULL);

    Object *obj = OBJECT(dev);

    const char *periph_name = "CAN";

    svd_set_peripheral_address_block(cm_state->svd_json, periph_name, obj);
    peripheral_create_memory_region(obj);

    // TODO: remove this if the peripheral is always enabled.
    char enabling_bit_name[KINETIS_RCC_SIZEOF_ENABLING_BITFIELD];

    switch (capabilities->family) {
    case KINETIS_FAMILY_K6:


            mk64f12_can_create_objects(obj, cm_state->svd_json, periph_name);

            // TODO: add actions.
            // cm_object_property_set_str(state->u.k6.fld.xxx.fff, "GGG", "follows");
            // cm_object_property_set_str(state->u.k6.fld.xxx.fff, "GGG", "cleared-by");

            // TODO: add callbacks.
            // peripheral_register_set_pre_read(state->k6.reg.xxx, &kinetis_can_xxx_pre_read_callback);
            // peripheral_register_set_post_read(state->k6.reg.xxx, &kinetis_can_xxx_post_read_callback);
            // peripheral_register_set_pre_read(state->k6.reg.xxx, &kinetis_can_xxx_pret_read_callback);
            // peripheral_register_set_post_write(state->k6.reg.xxx, &kinetis_can_xxx_post_write_callback);

            // TODO: add interrupts.

            // TODO: remove this if the peripheral is always enabled.
            snprintf(enabling_bit_name, sizeof(enabling_bit_name) - 1,
                DEVICE_PATH_KINETIS_RCC "/AHB1ENR/CAN%dEN",
                1 + state->port_index - KINETIS_PORT_CAN1);


        break;

    default:
        assert(false);
        break;
    }

    // TODO: remove this if the peripheral is always enabled.
    state->enabling_bit = OBJECT(cm_device_by_name(enabling_bit_name));

    peripheral_prepare_registers(obj);
}

static void kinetis_can_reset_callback(DeviceState *dev)
{
    qemu_log_function_name();

    // Call parent reset(); this will reset all children registers.
    cm_device_parent_reset(dev, TYPE_KINETIS_CAN);
}

static void kinetis_can_class_init_callback(ObjectClass *klass, void *data)
{
    DeviceClass *dc = DEVICE_CLASS(klass);

    dc->reset = kinetis_can_reset_callback;
    dc->realize = kinetis_can_realize_callback;

    // TODO: remove this if the peripheral is always enabled.
    PeripheralClass *per_class = PERIPHERAL_CLASS(klass);
    per_class->is_enabled = kinetis_can_is_enabled;
}

static const TypeInfo kinetis_can_type_info = {
    .name = TYPE_KINETIS_CAN,
    .parent = TYPE_KINETIS_CAN_PARENT,
    .instance_init = kinetis_can_instance_init_callback,
    .instance_size = sizeof(KinetisCANState),
    .class_init = kinetis_can_class_init_callback,
    .class_size = sizeof(KinetisCANClass) };

static void kinetis_can_register_types(void)
{
    type_register_static(&kinetis_can_type_info);
}

type_init(kinetis_can_register_types);

// ----------------------------------------------------------------------------
