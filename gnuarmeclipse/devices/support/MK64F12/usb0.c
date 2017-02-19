/*
 * Kinetis - USB (Universal Serial Bus, OTG Capable Controller) emulation.
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

#include <hw/cortexm/kinetis/usb.h>
#include <hw/cortexm/kinetis/mcu.h>
#include <hw/cortexm/helper.h>
#include <hw/cortexm/svd.h>

// ----- Generated code -------------------------------------------------------
//
// ----- 8< ----- 8< -----  8< ----- 8< ----- 8< ----- 8< ----- 8< -----

// DO NOT EDIT! Automatically generated!
static void mk64f12_usb_create_objects(Object *obj, JSON_Object *svd, const char *name)
{
    KinetisUSBState *state = KINETIS_USB_STATE(obj);

    JSON_Object *periph = svd_get_peripheral_by_name(svd, name);
    svd_add_peripheral_properties_and_children(obj, periph, svd);

    // Registers. 
    state->u.k6.reg.perid = cm_object_get_child_by_name(obj, "PERID");
    state->u.k6.reg.idcomp = cm_object_get_child_by_name(obj, "IDCOMP");
    state->u.k6.reg.rev = cm_object_get_child_by_name(obj, "REV");
    state->u.k6.reg.addinfo = cm_object_get_child_by_name(obj, "ADDINFO");
    state->u.k6.reg.otgistat = cm_object_get_child_by_name(obj, "OTGISTAT");
    state->u.k6.reg.otgicr = cm_object_get_child_by_name(obj, "OTGICR");
    state->u.k6.reg.otgstat = cm_object_get_child_by_name(obj, "OTGSTAT");
    state->u.k6.reg.otgctl = cm_object_get_child_by_name(obj, "OTGCTL");
    state->u.k6.reg.istat = cm_object_get_child_by_name(obj, "ISTAT");
    state->u.k6.reg.inten = cm_object_get_child_by_name(obj, "INTEN");
    state->u.k6.reg.errstat = cm_object_get_child_by_name(obj, "ERRSTAT");
    state->u.k6.reg.erren = cm_object_get_child_by_name(obj, "ERREN");
    state->u.k6.reg.stat = cm_object_get_child_by_name(obj, "STAT");
    state->u.k6.reg.ctl = cm_object_get_child_by_name(obj, "CTL");
    state->u.k6.reg.addr = cm_object_get_child_by_name(obj, "ADDR");
    state->u.k6.reg.bdtpage1 = cm_object_get_child_by_name(obj, "BDTPAGE1");
    state->u.k6.reg.frmnuml = cm_object_get_child_by_name(obj, "FRMNUML");
    state->u.k6.reg.frmnumh = cm_object_get_child_by_name(obj, "FRMNUMH");
    state->u.k6.reg.token = cm_object_get_child_by_name(obj, "TOKEN");
    state->u.k6.reg.softhld = cm_object_get_child_by_name(obj, "SOFTHLD");
    state->u.k6.reg.bdtpage2 = cm_object_get_child_by_name(obj, "BDTPAGE2");
    state->u.k6.reg.bdtpage3 = cm_object_get_child_by_name(obj, "BDTPAGE3");
    state->u.k6.reg.endpt[0] = cm_object_get_child_by_name(obj, "ENDPT0");
    state->u.k6.reg.endpt[1] = cm_object_get_child_by_name(obj, "ENDPT1");
    state->u.k6.reg.endpt[2] = cm_object_get_child_by_name(obj, "ENDPT2");
    state->u.k6.reg.endpt[3] = cm_object_get_child_by_name(obj, "ENDPT3");
    state->u.k6.reg.endpt[4] = cm_object_get_child_by_name(obj, "ENDPT4");
    state->u.k6.reg.endpt[5] = cm_object_get_child_by_name(obj, "ENDPT5");
    state->u.k6.reg.endpt[6] = cm_object_get_child_by_name(obj, "ENDPT6");
    state->u.k6.reg.endpt[7] = cm_object_get_child_by_name(obj, "ENDPT7");
    state->u.k6.reg.endpt[8] = cm_object_get_child_by_name(obj, "ENDPT8");
    state->u.k6.reg.endpt[9] = cm_object_get_child_by_name(obj, "ENDPT9");
    state->u.k6.reg.endpt[10] = cm_object_get_child_by_name(obj, "ENDPT10");
    state->u.k6.reg.endpt[11] = cm_object_get_child_by_name(obj, "ENDPT11");
    state->u.k6.reg.endpt[12] = cm_object_get_child_by_name(obj, "ENDPT12");
    state->u.k6.reg.endpt[13] = cm_object_get_child_by_name(obj, "ENDPT13");
    state->u.k6.reg.endpt[14] = cm_object_get_child_by_name(obj, "ENDPT14");
    state->u.k6.reg.endpt[15] = cm_object_get_child_by_name(obj, "ENDPT15");
    state->u.k6.reg.usbctrl = cm_object_get_child_by_name(obj, "USBCTRL");
    state->u.k6.reg.observe = cm_object_get_child_by_name(obj, "OBSERVE");
    state->u.k6.reg.control = cm_object_get_child_by_name(obj, "CONTROL");
    state->u.k6.reg.usbtrc0 = cm_object_get_child_by_name(obj, "USBTRC0");
    state->u.k6.reg.usbfrmadjust = cm_object_get_child_by_name(obj, "USBFRMADJUST");
    state->u.k6.reg.clk_recover_ctrl = cm_object_get_child_by_name(obj, "CLK_RECOVER_CTRL");
    state->u.k6.reg.clk_recover_irc_en = cm_object_get_child_by_name(obj, "CLK_RECOVER_IRC_EN");
    state->u.k6.reg.clk_recover_int_status = cm_object_get_child_by_name(obj, "CLK_RECOVER_INT_STATUS");

    // PERID bitfields.
    state->u.k6.fld.perid.id = cm_object_get_child_by_name(state->u.k6.reg.perid, "ID");

    // IDCOMP bitfields.
    state->u.k6.fld.idcomp.nid = cm_object_get_child_by_name(state->u.k6.reg.idcomp, "NID");

    // REV bitfields.
    state->u.k6.fld.rev.rev = cm_object_get_child_by_name(state->u.k6.reg.rev, "REV");

    // ADDINFO bitfields.
    state->u.k6.fld.addinfo.iehost = cm_object_get_child_by_name(state->u.k6.reg.addinfo, "IEHOST");
    state->u.k6.fld.addinfo.irqnum = cm_object_get_child_by_name(state->u.k6.reg.addinfo, "IRQNUM");

    // OTGISTAT bitfields.
    state->u.k6.fld.otgistat.avbuschg = cm_object_get_child_by_name(state->u.k6.reg.otgistat, "AVBUSCHG");
    state->u.k6.fld.otgistat.b_sess_chg = cm_object_get_child_by_name(state->u.k6.reg.otgistat, "B_SESS_CHG");
    state->u.k6.fld.otgistat.sessvldchg = cm_object_get_child_by_name(state->u.k6.reg.otgistat, "SESSVLDCHG");
    state->u.k6.fld.otgistat.line_state_chg = cm_object_get_child_by_name(state->u.k6.reg.otgistat, "LINE_STATE_CHG");
    state->u.k6.fld.otgistat.onemsec = cm_object_get_child_by_name(state->u.k6.reg.otgistat, "ONEMSEC");
    state->u.k6.fld.otgistat.idchg = cm_object_get_child_by_name(state->u.k6.reg.otgistat, "IDCHG");

    // OTGICR bitfields.
    state->u.k6.fld.otgicr.avbusen = cm_object_get_child_by_name(state->u.k6.reg.otgicr, "AVBUSEN");
    state->u.k6.fld.otgicr.bsessen = cm_object_get_child_by_name(state->u.k6.reg.otgicr, "BSESSEN");
    state->u.k6.fld.otgicr.sessvlden = cm_object_get_child_by_name(state->u.k6.reg.otgicr, "SESSVLDEN");
    state->u.k6.fld.otgicr.linestateen = cm_object_get_child_by_name(state->u.k6.reg.otgicr, "LINESTATEEN");
    state->u.k6.fld.otgicr.onemsecen = cm_object_get_child_by_name(state->u.k6.reg.otgicr, "ONEMSECEN");
    state->u.k6.fld.otgicr.iden = cm_object_get_child_by_name(state->u.k6.reg.otgicr, "IDEN");

    // OTGSTAT bitfields.
    state->u.k6.fld.otgstat.avbusvld = cm_object_get_child_by_name(state->u.k6.reg.otgstat, "AVBUSVLD");
    state->u.k6.fld.otgstat.bsessend = cm_object_get_child_by_name(state->u.k6.reg.otgstat, "BSESSEND");
    state->u.k6.fld.otgstat.sess_vld = cm_object_get_child_by_name(state->u.k6.reg.otgstat, "SESS_VLD");
    state->u.k6.fld.otgstat.linestatestable = cm_object_get_child_by_name(state->u.k6.reg.otgstat, "LINESTATESTABLE");
    state->u.k6.fld.otgstat.onemsecen = cm_object_get_child_by_name(state->u.k6.reg.otgstat, "ONEMSECEN");
    state->u.k6.fld.otgstat.id = cm_object_get_child_by_name(state->u.k6.reg.otgstat, "ID");

    // OTGCTL bitfields.
    state->u.k6.fld.otgctl.otgen = cm_object_get_child_by_name(state->u.k6.reg.otgctl, "OTGEN");
    state->u.k6.fld.otgctl.dmlow = cm_object_get_child_by_name(state->u.k6.reg.otgctl, "DMLOW");
    state->u.k6.fld.otgctl.dplow = cm_object_get_child_by_name(state->u.k6.reg.otgctl, "DPLOW");
    state->u.k6.fld.otgctl.dphigh = cm_object_get_child_by_name(state->u.k6.reg.otgctl, "DPHIGH");

    // ISTAT bitfields.
    state->u.k6.fld.istat.usbrst = cm_object_get_child_by_name(state->u.k6.reg.istat, "USBRST");
    state->u.k6.fld.istat.error = cm_object_get_child_by_name(state->u.k6.reg.istat, "ERROR");
    state->u.k6.fld.istat.softok = cm_object_get_child_by_name(state->u.k6.reg.istat, "SOFTOK");
    state->u.k6.fld.istat.tokdne = cm_object_get_child_by_name(state->u.k6.reg.istat, "TOKDNE");
    state->u.k6.fld.istat.sleep = cm_object_get_child_by_name(state->u.k6.reg.istat, "SLEEP");
    state->u.k6.fld.istat.resume = cm_object_get_child_by_name(state->u.k6.reg.istat, "RESUME");
    state->u.k6.fld.istat.attach = cm_object_get_child_by_name(state->u.k6.reg.istat, "ATTACH");
    state->u.k6.fld.istat.stall = cm_object_get_child_by_name(state->u.k6.reg.istat, "STALL");

    // INTEN bitfields.
    state->u.k6.fld.inten.usbrsten = cm_object_get_child_by_name(state->u.k6.reg.inten, "USBRSTEN");
    state->u.k6.fld.inten.erroren = cm_object_get_child_by_name(state->u.k6.reg.inten, "ERROREN");
    state->u.k6.fld.inten.softoken = cm_object_get_child_by_name(state->u.k6.reg.inten, "SOFTOKEN");
    state->u.k6.fld.inten.tokdneen = cm_object_get_child_by_name(state->u.k6.reg.inten, "TOKDNEEN");
    state->u.k6.fld.inten.sleepen = cm_object_get_child_by_name(state->u.k6.reg.inten, "SLEEPEN");
    state->u.k6.fld.inten.resumeen = cm_object_get_child_by_name(state->u.k6.reg.inten, "RESUMEEN");
    state->u.k6.fld.inten.attachen = cm_object_get_child_by_name(state->u.k6.reg.inten, "ATTACHEN");
    state->u.k6.fld.inten.stallen = cm_object_get_child_by_name(state->u.k6.reg.inten, "STALLEN");

    // ERRSTAT bitfields.
    state->u.k6.fld.errstat.piderr = cm_object_get_child_by_name(state->u.k6.reg.errstat, "PIDERR");
    state->u.k6.fld.errstat.crc5eof = cm_object_get_child_by_name(state->u.k6.reg.errstat, "CRC5EOF");
    state->u.k6.fld.errstat.crc16 = cm_object_get_child_by_name(state->u.k6.reg.errstat, "CRC16");
    state->u.k6.fld.errstat.dfn8 = cm_object_get_child_by_name(state->u.k6.reg.errstat, "DFN8");
    state->u.k6.fld.errstat.btoerr = cm_object_get_child_by_name(state->u.k6.reg.errstat, "BTOERR");
    state->u.k6.fld.errstat.dmaerr = cm_object_get_child_by_name(state->u.k6.reg.errstat, "DMAERR");
    state->u.k6.fld.errstat.btserr = cm_object_get_child_by_name(state->u.k6.reg.errstat, "BTSERR");

    // ERREN bitfields.
    state->u.k6.fld.erren.piderren = cm_object_get_child_by_name(state->u.k6.reg.erren, "PIDERREN");
    state->u.k6.fld.erren.crc5eofen = cm_object_get_child_by_name(state->u.k6.reg.erren, "CRC5EOFEN");
    state->u.k6.fld.erren.crc16en = cm_object_get_child_by_name(state->u.k6.reg.erren, "CRC16EN");
    state->u.k6.fld.erren.dfn8en = cm_object_get_child_by_name(state->u.k6.reg.erren, "DFN8EN");
    state->u.k6.fld.erren.btoerren = cm_object_get_child_by_name(state->u.k6.reg.erren, "BTOERREN");
    state->u.k6.fld.erren.dmaerren = cm_object_get_child_by_name(state->u.k6.reg.erren, "DMAERREN");
    state->u.k6.fld.erren.btserren = cm_object_get_child_by_name(state->u.k6.reg.erren, "BTSERREN");

    // STAT bitfields.
    state->u.k6.fld.stat.odd = cm_object_get_child_by_name(state->u.k6.reg.stat, "ODD");
    state->u.k6.fld.stat.tx = cm_object_get_child_by_name(state->u.k6.reg.stat, "TX");
    state->u.k6.fld.stat.endp = cm_object_get_child_by_name(state->u.k6.reg.stat, "ENDP");

    // CTL bitfields.
    state->u.k6.fld.ctl.usbensofen = cm_object_get_child_by_name(state->u.k6.reg.ctl, "USBENSOFEN");
    state->u.k6.fld.ctl.oddrst = cm_object_get_child_by_name(state->u.k6.reg.ctl, "ODDRST");
    state->u.k6.fld.ctl.resume = cm_object_get_child_by_name(state->u.k6.reg.ctl, "RESUME");
    state->u.k6.fld.ctl.hostmodeen = cm_object_get_child_by_name(state->u.k6.reg.ctl, "HOSTMODEEN");
    state->u.k6.fld.ctl.reset = cm_object_get_child_by_name(state->u.k6.reg.ctl, "RESET");
    state->u.k6.fld.ctl.txsuspendtokenbusy = cm_object_get_child_by_name(state->u.k6.reg.ctl, "TXSUSPENDTOKENBUSY");
    state->u.k6.fld.ctl.se0 = cm_object_get_child_by_name(state->u.k6.reg.ctl, "SE0");
    state->u.k6.fld.ctl.jstate = cm_object_get_child_by_name(state->u.k6.reg.ctl, "JSTATE");

    // ADDR bitfields.
    state->u.k6.fld.addr.addr = cm_object_get_child_by_name(state->u.k6.reg.addr, "ADDR");
    state->u.k6.fld.addr.lsen = cm_object_get_child_by_name(state->u.k6.reg.addr, "LSEN");

    // BDTPAGE1 bitfields.
    state->u.k6.fld.bdtpage1.bdtba = cm_object_get_child_by_name(state->u.k6.reg.bdtpage1, "BDTBA");

    // FRMNUML bitfields.
    state->u.k6.fld.frmnuml.frm = cm_object_get_child_by_name(state->u.k6.reg.frmnuml, "FRM");

    // FRMNUMH bitfields.
    state->u.k6.fld.frmnumh.frm = cm_object_get_child_by_name(state->u.k6.reg.frmnumh, "FRM");

    // TOKEN bitfields.
    state->u.k6.fld.token.tokenendpt = cm_object_get_child_by_name(state->u.k6.reg.token, "TOKENENDPT");
    state->u.k6.fld.token.tokenpid = cm_object_get_child_by_name(state->u.k6.reg.token, "TOKENPID");

    // SOFTHLD bitfields.
    state->u.k6.fld.softhld.cnt = cm_object_get_child_by_name(state->u.k6.reg.softhld, "CNT");

    // BDTPAGE2 bitfields.
    state->u.k6.fld.bdtpage2.bdtba = cm_object_get_child_by_name(state->u.k6.reg.bdtpage2, "BDTBA");

    // BDTPAGE3 bitfields.
    state->u.k6.fld.bdtpage3.bdtba = cm_object_get_child_by_name(state->u.k6.reg.bdtpage3, "BDTBA");
    // ENDPT0 bitfields.
    state->u.k6.fld.endpt[0].ephshk = cm_object_get_child_by_name(state->u.k6.reg.endpt[0], "EPHSHK");
    state->u.k6.fld.endpt[0].epstall = cm_object_get_child_by_name(state->u.k6.reg.endpt[0], "EPSTALL");
    state->u.k6.fld.endpt[0].eptxen = cm_object_get_child_by_name(state->u.k6.reg.endpt[0], "EPTXEN");
    state->u.k6.fld.endpt[0].eprxen = cm_object_get_child_by_name(state->u.k6.reg.endpt[0], "EPRXEN");
    state->u.k6.fld.endpt[0].epctldis = cm_object_get_child_by_name(state->u.k6.reg.endpt[0], "EPCTLDIS");
    state->u.k6.fld.endpt[0].retrydis = cm_object_get_child_by_name(state->u.k6.reg.endpt[0], "RETRYDIS");
    state->u.k6.fld.endpt[0].hostwohub = cm_object_get_child_by_name(state->u.k6.reg.endpt[0], "HOSTWOHUB");
    // ENDPT1 bitfields.
    state->u.k6.fld.endpt[1].ephshk = cm_object_get_child_by_name(state->u.k6.reg.endpt[1], "EPHSHK");
    state->u.k6.fld.endpt[1].epstall = cm_object_get_child_by_name(state->u.k6.reg.endpt[1], "EPSTALL");
    state->u.k6.fld.endpt[1].eptxen = cm_object_get_child_by_name(state->u.k6.reg.endpt[1], "EPTXEN");
    state->u.k6.fld.endpt[1].eprxen = cm_object_get_child_by_name(state->u.k6.reg.endpt[1], "EPRXEN");
    state->u.k6.fld.endpt[1].epctldis = cm_object_get_child_by_name(state->u.k6.reg.endpt[1], "EPCTLDIS");
    state->u.k6.fld.endpt[1].retrydis = cm_object_get_child_by_name(state->u.k6.reg.endpt[1], "RETRYDIS");
    state->u.k6.fld.endpt[1].hostwohub = cm_object_get_child_by_name(state->u.k6.reg.endpt[1], "HOSTWOHUB");
    // ENDPT2 bitfields.
    state->u.k6.fld.endpt[2].ephshk = cm_object_get_child_by_name(state->u.k6.reg.endpt[2], "EPHSHK");
    state->u.k6.fld.endpt[2].epstall = cm_object_get_child_by_name(state->u.k6.reg.endpt[2], "EPSTALL");
    state->u.k6.fld.endpt[2].eptxen = cm_object_get_child_by_name(state->u.k6.reg.endpt[2], "EPTXEN");
    state->u.k6.fld.endpt[2].eprxen = cm_object_get_child_by_name(state->u.k6.reg.endpt[2], "EPRXEN");
    state->u.k6.fld.endpt[2].epctldis = cm_object_get_child_by_name(state->u.k6.reg.endpt[2], "EPCTLDIS");
    state->u.k6.fld.endpt[2].retrydis = cm_object_get_child_by_name(state->u.k6.reg.endpt[2], "RETRYDIS");
    state->u.k6.fld.endpt[2].hostwohub = cm_object_get_child_by_name(state->u.k6.reg.endpt[2], "HOSTWOHUB");
    // ENDPT3 bitfields.
    state->u.k6.fld.endpt[3].ephshk = cm_object_get_child_by_name(state->u.k6.reg.endpt[3], "EPHSHK");
    state->u.k6.fld.endpt[3].epstall = cm_object_get_child_by_name(state->u.k6.reg.endpt[3], "EPSTALL");
    state->u.k6.fld.endpt[3].eptxen = cm_object_get_child_by_name(state->u.k6.reg.endpt[3], "EPTXEN");
    state->u.k6.fld.endpt[3].eprxen = cm_object_get_child_by_name(state->u.k6.reg.endpt[3], "EPRXEN");
    state->u.k6.fld.endpt[3].epctldis = cm_object_get_child_by_name(state->u.k6.reg.endpt[3], "EPCTLDIS");
    state->u.k6.fld.endpt[3].retrydis = cm_object_get_child_by_name(state->u.k6.reg.endpt[3], "RETRYDIS");
    state->u.k6.fld.endpt[3].hostwohub = cm_object_get_child_by_name(state->u.k6.reg.endpt[3], "HOSTWOHUB");
    // ENDPT4 bitfields.
    state->u.k6.fld.endpt[4].ephshk = cm_object_get_child_by_name(state->u.k6.reg.endpt[4], "EPHSHK");
    state->u.k6.fld.endpt[4].epstall = cm_object_get_child_by_name(state->u.k6.reg.endpt[4], "EPSTALL");
    state->u.k6.fld.endpt[4].eptxen = cm_object_get_child_by_name(state->u.k6.reg.endpt[4], "EPTXEN");
    state->u.k6.fld.endpt[4].eprxen = cm_object_get_child_by_name(state->u.k6.reg.endpt[4], "EPRXEN");
    state->u.k6.fld.endpt[4].epctldis = cm_object_get_child_by_name(state->u.k6.reg.endpt[4], "EPCTLDIS");
    state->u.k6.fld.endpt[4].retrydis = cm_object_get_child_by_name(state->u.k6.reg.endpt[4], "RETRYDIS");
    state->u.k6.fld.endpt[4].hostwohub = cm_object_get_child_by_name(state->u.k6.reg.endpt[4], "HOSTWOHUB");
    // ENDPT5 bitfields.
    state->u.k6.fld.endpt[5].ephshk = cm_object_get_child_by_name(state->u.k6.reg.endpt[5], "EPHSHK");
    state->u.k6.fld.endpt[5].epstall = cm_object_get_child_by_name(state->u.k6.reg.endpt[5], "EPSTALL");
    state->u.k6.fld.endpt[5].eptxen = cm_object_get_child_by_name(state->u.k6.reg.endpt[5], "EPTXEN");
    state->u.k6.fld.endpt[5].eprxen = cm_object_get_child_by_name(state->u.k6.reg.endpt[5], "EPRXEN");
    state->u.k6.fld.endpt[5].epctldis = cm_object_get_child_by_name(state->u.k6.reg.endpt[5], "EPCTLDIS");
    state->u.k6.fld.endpt[5].retrydis = cm_object_get_child_by_name(state->u.k6.reg.endpt[5], "RETRYDIS");
    state->u.k6.fld.endpt[5].hostwohub = cm_object_get_child_by_name(state->u.k6.reg.endpt[5], "HOSTWOHUB");
    // ENDPT6 bitfields.
    state->u.k6.fld.endpt[6].ephshk = cm_object_get_child_by_name(state->u.k6.reg.endpt[6], "EPHSHK");
    state->u.k6.fld.endpt[6].epstall = cm_object_get_child_by_name(state->u.k6.reg.endpt[6], "EPSTALL");
    state->u.k6.fld.endpt[6].eptxen = cm_object_get_child_by_name(state->u.k6.reg.endpt[6], "EPTXEN");
    state->u.k6.fld.endpt[6].eprxen = cm_object_get_child_by_name(state->u.k6.reg.endpt[6], "EPRXEN");
    state->u.k6.fld.endpt[6].epctldis = cm_object_get_child_by_name(state->u.k6.reg.endpt[6], "EPCTLDIS");
    state->u.k6.fld.endpt[6].retrydis = cm_object_get_child_by_name(state->u.k6.reg.endpt[6], "RETRYDIS");
    state->u.k6.fld.endpt[6].hostwohub = cm_object_get_child_by_name(state->u.k6.reg.endpt[6], "HOSTWOHUB");
    // ENDPT7 bitfields.
    state->u.k6.fld.endpt[7].ephshk = cm_object_get_child_by_name(state->u.k6.reg.endpt[7], "EPHSHK");
    state->u.k6.fld.endpt[7].epstall = cm_object_get_child_by_name(state->u.k6.reg.endpt[7], "EPSTALL");
    state->u.k6.fld.endpt[7].eptxen = cm_object_get_child_by_name(state->u.k6.reg.endpt[7], "EPTXEN");
    state->u.k6.fld.endpt[7].eprxen = cm_object_get_child_by_name(state->u.k6.reg.endpt[7], "EPRXEN");
    state->u.k6.fld.endpt[7].epctldis = cm_object_get_child_by_name(state->u.k6.reg.endpt[7], "EPCTLDIS");
    state->u.k6.fld.endpt[7].retrydis = cm_object_get_child_by_name(state->u.k6.reg.endpt[7], "RETRYDIS");
    state->u.k6.fld.endpt[7].hostwohub = cm_object_get_child_by_name(state->u.k6.reg.endpt[7], "HOSTWOHUB");
    // ENDPT8 bitfields.
    state->u.k6.fld.endpt[8].ephshk = cm_object_get_child_by_name(state->u.k6.reg.endpt[8], "EPHSHK");
    state->u.k6.fld.endpt[8].epstall = cm_object_get_child_by_name(state->u.k6.reg.endpt[8], "EPSTALL");
    state->u.k6.fld.endpt[8].eptxen = cm_object_get_child_by_name(state->u.k6.reg.endpt[8], "EPTXEN");
    state->u.k6.fld.endpt[8].eprxen = cm_object_get_child_by_name(state->u.k6.reg.endpt[8], "EPRXEN");
    state->u.k6.fld.endpt[8].epctldis = cm_object_get_child_by_name(state->u.k6.reg.endpt[8], "EPCTLDIS");
    state->u.k6.fld.endpt[8].retrydis = cm_object_get_child_by_name(state->u.k6.reg.endpt[8], "RETRYDIS");
    state->u.k6.fld.endpt[8].hostwohub = cm_object_get_child_by_name(state->u.k6.reg.endpt[8], "HOSTWOHUB");
    // ENDPT9 bitfields.
    state->u.k6.fld.endpt[9].ephshk = cm_object_get_child_by_name(state->u.k6.reg.endpt[9], "EPHSHK");
    state->u.k6.fld.endpt[9].epstall = cm_object_get_child_by_name(state->u.k6.reg.endpt[9], "EPSTALL");
    state->u.k6.fld.endpt[9].eptxen = cm_object_get_child_by_name(state->u.k6.reg.endpt[9], "EPTXEN");
    state->u.k6.fld.endpt[9].eprxen = cm_object_get_child_by_name(state->u.k6.reg.endpt[9], "EPRXEN");
    state->u.k6.fld.endpt[9].epctldis = cm_object_get_child_by_name(state->u.k6.reg.endpt[9], "EPCTLDIS");
    state->u.k6.fld.endpt[9].retrydis = cm_object_get_child_by_name(state->u.k6.reg.endpt[9], "RETRYDIS");
    state->u.k6.fld.endpt[9].hostwohub = cm_object_get_child_by_name(state->u.k6.reg.endpt[9], "HOSTWOHUB");
    // ENDPT10 bitfields.
    state->u.k6.fld.endpt[10].ephshk = cm_object_get_child_by_name(state->u.k6.reg.endpt[10], "EPHSHK");
    state->u.k6.fld.endpt[10].epstall = cm_object_get_child_by_name(state->u.k6.reg.endpt[10], "EPSTALL");
    state->u.k6.fld.endpt[10].eptxen = cm_object_get_child_by_name(state->u.k6.reg.endpt[10], "EPTXEN");
    state->u.k6.fld.endpt[10].eprxen = cm_object_get_child_by_name(state->u.k6.reg.endpt[10], "EPRXEN");
    state->u.k6.fld.endpt[10].epctldis = cm_object_get_child_by_name(state->u.k6.reg.endpt[10], "EPCTLDIS");
    state->u.k6.fld.endpt[10].retrydis = cm_object_get_child_by_name(state->u.k6.reg.endpt[10], "RETRYDIS");
    state->u.k6.fld.endpt[10].hostwohub = cm_object_get_child_by_name(state->u.k6.reg.endpt[10], "HOSTWOHUB");
    // ENDPT11 bitfields.
    state->u.k6.fld.endpt[11].ephshk = cm_object_get_child_by_name(state->u.k6.reg.endpt[11], "EPHSHK");
    state->u.k6.fld.endpt[11].epstall = cm_object_get_child_by_name(state->u.k6.reg.endpt[11], "EPSTALL");
    state->u.k6.fld.endpt[11].eptxen = cm_object_get_child_by_name(state->u.k6.reg.endpt[11], "EPTXEN");
    state->u.k6.fld.endpt[11].eprxen = cm_object_get_child_by_name(state->u.k6.reg.endpt[11], "EPRXEN");
    state->u.k6.fld.endpt[11].epctldis = cm_object_get_child_by_name(state->u.k6.reg.endpt[11], "EPCTLDIS");
    state->u.k6.fld.endpt[11].retrydis = cm_object_get_child_by_name(state->u.k6.reg.endpt[11], "RETRYDIS");
    state->u.k6.fld.endpt[11].hostwohub = cm_object_get_child_by_name(state->u.k6.reg.endpt[11], "HOSTWOHUB");
    // ENDPT12 bitfields.
    state->u.k6.fld.endpt[12].ephshk = cm_object_get_child_by_name(state->u.k6.reg.endpt[12], "EPHSHK");
    state->u.k6.fld.endpt[12].epstall = cm_object_get_child_by_name(state->u.k6.reg.endpt[12], "EPSTALL");
    state->u.k6.fld.endpt[12].eptxen = cm_object_get_child_by_name(state->u.k6.reg.endpt[12], "EPTXEN");
    state->u.k6.fld.endpt[12].eprxen = cm_object_get_child_by_name(state->u.k6.reg.endpt[12], "EPRXEN");
    state->u.k6.fld.endpt[12].epctldis = cm_object_get_child_by_name(state->u.k6.reg.endpt[12], "EPCTLDIS");
    state->u.k6.fld.endpt[12].retrydis = cm_object_get_child_by_name(state->u.k6.reg.endpt[12], "RETRYDIS");
    state->u.k6.fld.endpt[12].hostwohub = cm_object_get_child_by_name(state->u.k6.reg.endpt[12], "HOSTWOHUB");
    // ENDPT13 bitfields.
    state->u.k6.fld.endpt[13].ephshk = cm_object_get_child_by_name(state->u.k6.reg.endpt[13], "EPHSHK");
    state->u.k6.fld.endpt[13].epstall = cm_object_get_child_by_name(state->u.k6.reg.endpt[13], "EPSTALL");
    state->u.k6.fld.endpt[13].eptxen = cm_object_get_child_by_name(state->u.k6.reg.endpt[13], "EPTXEN");
    state->u.k6.fld.endpt[13].eprxen = cm_object_get_child_by_name(state->u.k6.reg.endpt[13], "EPRXEN");
    state->u.k6.fld.endpt[13].epctldis = cm_object_get_child_by_name(state->u.k6.reg.endpt[13], "EPCTLDIS");
    state->u.k6.fld.endpt[13].retrydis = cm_object_get_child_by_name(state->u.k6.reg.endpt[13], "RETRYDIS");
    state->u.k6.fld.endpt[13].hostwohub = cm_object_get_child_by_name(state->u.k6.reg.endpt[13], "HOSTWOHUB");
    // ENDPT14 bitfields.
    state->u.k6.fld.endpt[14].ephshk = cm_object_get_child_by_name(state->u.k6.reg.endpt[14], "EPHSHK");
    state->u.k6.fld.endpt[14].epstall = cm_object_get_child_by_name(state->u.k6.reg.endpt[14], "EPSTALL");
    state->u.k6.fld.endpt[14].eptxen = cm_object_get_child_by_name(state->u.k6.reg.endpt[14], "EPTXEN");
    state->u.k6.fld.endpt[14].eprxen = cm_object_get_child_by_name(state->u.k6.reg.endpt[14], "EPRXEN");
    state->u.k6.fld.endpt[14].epctldis = cm_object_get_child_by_name(state->u.k6.reg.endpt[14], "EPCTLDIS");
    state->u.k6.fld.endpt[14].retrydis = cm_object_get_child_by_name(state->u.k6.reg.endpt[14], "RETRYDIS");
    state->u.k6.fld.endpt[14].hostwohub = cm_object_get_child_by_name(state->u.k6.reg.endpt[14], "HOSTWOHUB");
    // ENDPT15 bitfields.
    state->u.k6.fld.endpt[15].ephshk = cm_object_get_child_by_name(state->u.k6.reg.endpt[15], "EPHSHK");
    state->u.k6.fld.endpt[15].epstall = cm_object_get_child_by_name(state->u.k6.reg.endpt[15], "EPSTALL");
    state->u.k6.fld.endpt[15].eptxen = cm_object_get_child_by_name(state->u.k6.reg.endpt[15], "EPTXEN");
    state->u.k6.fld.endpt[15].eprxen = cm_object_get_child_by_name(state->u.k6.reg.endpt[15], "EPRXEN");
    state->u.k6.fld.endpt[15].epctldis = cm_object_get_child_by_name(state->u.k6.reg.endpt[15], "EPCTLDIS");
    state->u.k6.fld.endpt[15].retrydis = cm_object_get_child_by_name(state->u.k6.reg.endpt[15], "RETRYDIS");
    state->u.k6.fld.endpt[15].hostwohub = cm_object_get_child_by_name(state->u.k6.reg.endpt[15], "HOSTWOHUB");

    // USBCTRL bitfields.
    state->u.k6.fld.usbctrl.pde = cm_object_get_child_by_name(state->u.k6.reg.usbctrl, "PDE");
    state->u.k6.fld.usbctrl.susp = cm_object_get_child_by_name(state->u.k6.reg.usbctrl, "SUSP");

    // OBSERVE bitfields.
    state->u.k6.fld.observe.dmpd = cm_object_get_child_by_name(state->u.k6.reg.observe, "DMPD");
    state->u.k6.fld.observe.dppd = cm_object_get_child_by_name(state->u.k6.reg.observe, "DPPD");
    state->u.k6.fld.observe.dppu = cm_object_get_child_by_name(state->u.k6.reg.observe, "DPPU");

    // CONTROL bitfields.
    state->u.k6.fld.control.dppullupnonotg = cm_object_get_child_by_name(state->u.k6.reg.control, "DPPULLUPNONOTG");

    // USBTRC0 bitfields.
    state->u.k6.fld.usbtrc0.usb_resume_int = cm_object_get_child_by_name(state->u.k6.reg.usbtrc0, "USB_RESUME_INT");
    state->u.k6.fld.usbtrc0.sync_det = cm_object_get_child_by_name(state->u.k6.reg.usbtrc0, "SYNC_DET");
    state->u.k6.fld.usbtrc0.usb_clk_recovery_int = cm_object_get_child_by_name(state->u.k6.reg.usbtrc0, "USB_CLK_RECOVERY_INT");
    state->u.k6.fld.usbtrc0.usbresmen = cm_object_get_child_by_name(state->u.k6.reg.usbtrc0, "USBRESMEN");
    state->u.k6.fld.usbtrc0.usbreset = cm_object_get_child_by_name(state->u.k6.reg.usbtrc0, "USBRESET");

    // USBFRMADJUST bitfields.
    state->u.k6.fld.usbfrmadjust.adj = cm_object_get_child_by_name(state->u.k6.reg.usbfrmadjust, "ADJ");

    // CLK_RECOVER_CTRL bitfields.
    state->u.k6.fld.clk_recover_ctrl.restart_ifrtrim_en = cm_object_get_child_by_name(state->u.k6.reg.clk_recover_ctrl, "RESTART_IFRTRIM_EN");
    state->u.k6.fld.clk_recover_ctrl.reset_resume_rough_en = cm_object_get_child_by_name(state->u.k6.reg.clk_recover_ctrl, "RESET_RESUME_ROUGH_EN");
    state->u.k6.fld.clk_recover_ctrl.clock_recover_en = cm_object_get_child_by_name(state->u.k6.reg.clk_recover_ctrl, "CLOCK_RECOVER_EN");

    // CLK_RECOVER_IRC_EN bitfields.
    state->u.k6.fld.clk_recover_irc_en.reg_en = cm_object_get_child_by_name(state->u.k6.reg.clk_recover_irc_en, "REG_EN");
    state->u.k6.fld.clk_recover_irc_en.irc_en = cm_object_get_child_by_name(state->u.k6.reg.clk_recover_irc_en, "IRC_EN");

    // CLK_RECOVER_INT_STATUS bitfields.
    state->u.k6.fld.clk_recover_int_status.ovf_error = cm_object_get_child_by_name(state->u.k6.reg.clk_recover_int_status, "OVF_ERROR");
}

// ----- 8< ----- 8< -----  8< ----- 8< ----- 8< ----- 8< ----- 8< -----

// ----- Private --------------------------------------------------------------

#if 0
static peripheral_register_t kinetis_usb_xxx_pre_write_callback(Object *reg,
        Object *periph, uint32_t addr, uint32_t offset, unsigned size,
        peripheral_register_t value, peripheral_register_t full_value)
{
    KinetisUSBState *state = KINETIS_USB_STATE(periph);

    peripheral_register_t prev_value = peripheral_register_get_raw_prev_value(reg);

    // TODO: Add code to adjust the value (like applying some masks,
    // for example prevent setting interrupts not enabled).
    // Also process cleared/set by write 1/0 bits.
    // The returned value will be stored in the register value.

    return full_value;
}

static void kinetis_usb_xxx_post_write_callback(Object *reg, Object *periph,
        uint32_t addr, uint32_t offset, unsigned size,
        peripheral_register_t value, peripheral_register_t full_value)
{
    KinetisUSBState *state = KINETIS_USB_STATE(periph);

    peripheral_register_t prev_value = peripheral_register_get_raw_prev_value(reg);
    // The new register value is full_value, the old one is prev_value.

    // TODO: Add code to send the value to the consumer.
}

static peripheral_register_t kinetis_usb_xxx_pre_read_callback(Object *reg,
        Object *periph, uint32_t addr, uint32_t offset, unsigned size)
{
    KinetisUSBState *state = KINETIS_USB_STATE(periph);

    peripheral_register_t value = 0;

    // Add code to get the value from the producer, and return it.

    // This value, possibly masked, will be stored in the register
    // and returned when the register is read.
    return value;
}

static void kinetis_usb_xxx_post_read_callback(Object *reg, Object *periph,
        uint32_t addr, uint32_t offset, unsigned size)
{
    KinetisUSBState *state = KINETIS_USB_STATE(periph);

    peripheral_register_t value = peripheral_register_get_raw_value(reg);

    // TODO: add code to perform the post read actions, like clearing some bits.
}
#endif

// ----------------------------------------------------------------------------

// TODO: remove this if the peripheral is always enabled.
static bool kinetis_usb_is_enabled(Object *obj)
{
    KinetisUSBState *state = KINETIS_USB_STATE(obj);

    if (register_bitfield_is_non_zero(state->enabling_bit)) {
        return true; // Positive logic, bit == 1 means enabled.
    }

    // Not enabled
    return false;
}

static void kinetis_usb_instance_init_callback(Object *obj)
{
    qemu_log_function_name();

    KinetisUSBState *state = KINETIS_USB_STATE(obj);

    // Capabilities are not yet available.

    cm_object_property_add_int(obj, "port-index",
            (const int *) &state->port_index);
    state->port_index = KINETIS_PORT_USB_UNDEFINED;

    // TODO: remove this if the peripheral is always enabled.
    state->enabling_bit = NULL;
    
    // TODO: Add code to initialise all members.
}

static void kinetis_usb_realize_callback(DeviceState *dev, Error **errp)
{
    qemu_log_function_name();

    // Call parent realize().
    if (!cm_device_parent_realize(dev, errp, TYPE_KINETIS_USB)) {
        return;
    }

    KinetisMCUState *mcu = kinetis_mcu_get();
    CortexMState *cm_state = CORTEXM_MCU_STATE(mcu);

    KinetisUSBState *state = KINETIS_USB_STATE(dev);
    // First thing first: get capabilities from MCU, needed everywhere.
    state->capabilities = mcu->capabilities;

    // Also keep a local pointer, to access them easier.
    const KinetisCapabilities *capabilities = state->capabilities;
    assert(capabilities != NULL);

    Object *obj = OBJECT(dev);

    const char *periph_name = "USB";

    svd_set_peripheral_address_block(cm_state->svd_json, periph_name, obj);
    peripheral_create_memory_region(obj);

    // TODO: remove this if the peripheral is always enabled.
    char enabling_bit_name[KINETIS_RCC_SIZEOF_ENABLING_BITFIELD];

    switch (capabilities->family) {
    case KINETIS_FAMILY_K6:


            mk64f12_usb_create_objects(obj, cm_state->svd_json, periph_name);

            // TODO: add actions.
            // cm_object_property_set_str(state->u.k6.fld.xxx.fff, "GGG", "follows");
            // cm_object_property_set_str(state->u.k6.fld.xxx.fff, "GGG", "cleared-by");

            // TODO: add callbacks.
            // peripheral_register_set_pre_read(state->k6.reg.xxx, &kinetis_usb_xxx_pre_read_callback);
            // peripheral_register_set_post_read(state->k6.reg.xxx, &kinetis_usb_xxx_post_read_callback);
            // peripheral_register_set_pre_read(state->k6.reg.xxx, &kinetis_usb_xxx_pret_read_callback);
            // peripheral_register_set_post_write(state->k6.reg.xxx, &kinetis_usb_xxx_post_write_callback);

            // TODO: add interrupts.

            // TODO: remove this if the peripheral is always enabled.
            snprintf(enabling_bit_name, sizeof(enabling_bit_name) - 1,
                DEVICE_PATH_KINETIS_RCC "/AHB1ENR/USB%dEN",
                1 + state->port_index - KINETIS_PORT_USB1);


        break;

    default:
        assert(false);
        break;
    }

    // TODO: remove this if the peripheral is always enabled.
    state->enabling_bit = OBJECT(cm_device_by_name(enabling_bit_name));

    peripheral_prepare_registers(obj);
}

static void kinetis_usb_reset_callback(DeviceState *dev)
{
    qemu_log_function_name();

    // Call parent reset(); this will reset all children registers.
    cm_device_parent_reset(dev, TYPE_KINETIS_USB);
}

static void kinetis_usb_class_init_callback(ObjectClass *klass, void *data)
{
    DeviceClass *dc = DEVICE_CLASS(klass);

    dc->reset = kinetis_usb_reset_callback;
    dc->realize = kinetis_usb_realize_callback;

    // TODO: remove this if the peripheral is always enabled.
    PeripheralClass *per_class = PERIPHERAL_CLASS(klass);
    per_class->is_enabled = kinetis_usb_is_enabled;
}

static const TypeInfo kinetis_usb_type_info = {
    .name = TYPE_KINETIS_USB,
    .parent = TYPE_KINETIS_USB_PARENT,
    .instance_init = kinetis_usb_instance_init_callback,
    .instance_size = sizeof(KinetisUSBState),
    .class_init = kinetis_usb_class_init_callback,
    .class_size = sizeof(KinetisUSBClass) };

static void kinetis_usb_register_types(void)
{
    type_register_static(&kinetis_usb_type_info);
}

type_init(kinetis_usb_register_types);

// ----------------------------------------------------------------------------
