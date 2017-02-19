/*
 * Kinetis - SDHC (Secured Digital Host Controller) emulation.
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

#include <hw/cortexm/kinetis/sdhc.h>
#include <hw/cortexm/kinetis/mcu.h>
#include <hw/cortexm/helper.h>
#include <hw/cortexm/svd.h>

// ----- Generated code -------------------------------------------------------
//
// ----- 8< ----- 8< -----  8< ----- 8< ----- 8< ----- 8< ----- 8< -----

// DO NOT EDIT! Automatically generated!
static void mk64f12_sdhc_create_objects(Object *obj, JSON_Object *svd, const char *name)
{
    KinetisSDHCState *state = KINETIS_SDHC_STATE(obj);

    JSON_Object *periph = svd_get_peripheral_by_name(svd, name);
    svd_add_peripheral_properties_and_children(obj, periph, svd);

    // Registers. 
    state->u.k6.reg.dsaddr = cm_object_get_child_by_name(obj, "DSADDR");
    state->u.k6.reg.blkattr = cm_object_get_child_by_name(obj, "BLKATTR");
    state->u.k6.reg.cmdarg = cm_object_get_child_by_name(obj, "CMDARG");
    state->u.k6.reg.xfertyp = cm_object_get_child_by_name(obj, "XFERTYP");
    state->u.k6.reg.cmdrsp0 = cm_object_get_child_by_name(obj, "CMDRSP0");
    state->u.k6.reg.cmdrsp1 = cm_object_get_child_by_name(obj, "CMDRSP1");
    state->u.k6.reg.cmdrsp2 = cm_object_get_child_by_name(obj, "CMDRSP2");
    state->u.k6.reg.cmdrsp3 = cm_object_get_child_by_name(obj, "CMDRSP3");
    state->u.k6.reg.datport = cm_object_get_child_by_name(obj, "DATPORT");
    state->u.k6.reg.prsstat = cm_object_get_child_by_name(obj, "PRSSTAT");
    state->u.k6.reg.proctl = cm_object_get_child_by_name(obj, "PROCTL");
    state->u.k6.reg.sysctl = cm_object_get_child_by_name(obj, "SYSCTL");
    state->u.k6.reg.irqstat = cm_object_get_child_by_name(obj, "IRQSTAT");
    state->u.k6.reg.irqstaten = cm_object_get_child_by_name(obj, "IRQSTATEN");
    state->u.k6.reg.irqsigen = cm_object_get_child_by_name(obj, "IRQSIGEN");
    state->u.k6.reg.ac12err = cm_object_get_child_by_name(obj, "AC12ERR");
    state->u.k6.reg.htcapblt = cm_object_get_child_by_name(obj, "HTCAPBLT");
    state->u.k6.reg.wml = cm_object_get_child_by_name(obj, "WML");
    state->u.k6.reg.fevt = cm_object_get_child_by_name(obj, "FEVT");
    state->u.k6.reg.admaes = cm_object_get_child_by_name(obj, "ADMAES");
    state->u.k6.reg.adsaddr = cm_object_get_child_by_name(obj, "ADSADDR");
    state->u.k6.reg.vendor = cm_object_get_child_by_name(obj, "VENDOR");
    state->u.k6.reg.mmcboot = cm_object_get_child_by_name(obj, "MMCBOOT");
    state->u.k6.reg.hostver = cm_object_get_child_by_name(obj, "HOSTVER");

    // DSADDR bitfields.
    state->u.k6.fld.dsaddr.dsaddr = cm_object_get_child_by_name(state->u.k6.reg.dsaddr, "DSADDR");

    // BLKATTR bitfields.
    state->u.k6.fld.blkattr.blksize = cm_object_get_child_by_name(state->u.k6.reg.blkattr, "BLKSIZE");
    state->u.k6.fld.blkattr.blkcnt = cm_object_get_child_by_name(state->u.k6.reg.blkattr, "BLKCNT");

    // CMDARG bitfields.
    state->u.k6.fld.cmdarg.cmdarg = cm_object_get_child_by_name(state->u.k6.reg.cmdarg, "CMDARG");

    // XFERTYP bitfields.
    state->u.k6.fld.xfertyp.dmaen = cm_object_get_child_by_name(state->u.k6.reg.xfertyp, "DMAEN");
    state->u.k6.fld.xfertyp.bcen = cm_object_get_child_by_name(state->u.k6.reg.xfertyp, "BCEN");
    state->u.k6.fld.xfertyp.ac12en = cm_object_get_child_by_name(state->u.k6.reg.xfertyp, "AC12EN");
    state->u.k6.fld.xfertyp.dtdsel = cm_object_get_child_by_name(state->u.k6.reg.xfertyp, "DTDSEL");
    state->u.k6.fld.xfertyp.msbsel = cm_object_get_child_by_name(state->u.k6.reg.xfertyp, "MSBSEL");
    state->u.k6.fld.xfertyp.rsptyp = cm_object_get_child_by_name(state->u.k6.reg.xfertyp, "RSPTYP");
    state->u.k6.fld.xfertyp.cccen = cm_object_get_child_by_name(state->u.k6.reg.xfertyp, "CCCEN");
    state->u.k6.fld.xfertyp.cicen = cm_object_get_child_by_name(state->u.k6.reg.xfertyp, "CICEN");
    state->u.k6.fld.xfertyp.dpsel = cm_object_get_child_by_name(state->u.k6.reg.xfertyp, "DPSEL");
    state->u.k6.fld.xfertyp.cmdtyp = cm_object_get_child_by_name(state->u.k6.reg.xfertyp, "CMDTYP");
    state->u.k6.fld.xfertyp.cmdinx = cm_object_get_child_by_name(state->u.k6.reg.xfertyp, "CMDINX");

    // CMDRSP0 bitfields.
    state->u.k6.fld.cmdrsp0.cmdrsp0 = cm_object_get_child_by_name(state->u.k6.reg.cmdrsp0, "CMDRSP0");

    // CMDRSP1 bitfields.
    state->u.k6.fld.cmdrsp1.cmdrsp1 = cm_object_get_child_by_name(state->u.k6.reg.cmdrsp1, "CMDRSP1");

    // CMDRSP2 bitfields.
    state->u.k6.fld.cmdrsp2.cmdrsp2 = cm_object_get_child_by_name(state->u.k6.reg.cmdrsp2, "CMDRSP2");

    // CMDRSP3 bitfields.
    state->u.k6.fld.cmdrsp3.cmdrsp3 = cm_object_get_child_by_name(state->u.k6.reg.cmdrsp3, "CMDRSP3");

    // DATPORT bitfields.
    state->u.k6.fld.datport.datcont = cm_object_get_child_by_name(state->u.k6.reg.datport, "DATCONT");

    // PRSSTAT bitfields.
    state->u.k6.fld.prsstat.cihb = cm_object_get_child_by_name(state->u.k6.reg.prsstat, "CIHB");
    state->u.k6.fld.prsstat.cdihb = cm_object_get_child_by_name(state->u.k6.reg.prsstat, "CDIHB");
    state->u.k6.fld.prsstat.dla = cm_object_get_child_by_name(state->u.k6.reg.prsstat, "DLA");
    state->u.k6.fld.prsstat.sdstb = cm_object_get_child_by_name(state->u.k6.reg.prsstat, "SDSTB");
    state->u.k6.fld.prsstat.ipgoff = cm_object_get_child_by_name(state->u.k6.reg.prsstat, "IPGOFF");
    state->u.k6.fld.prsstat.hckoff = cm_object_get_child_by_name(state->u.k6.reg.prsstat, "HCKOFF");
    state->u.k6.fld.prsstat.peroff = cm_object_get_child_by_name(state->u.k6.reg.prsstat, "PEROFF");
    state->u.k6.fld.prsstat.sdoff = cm_object_get_child_by_name(state->u.k6.reg.prsstat, "SDOFF");
    state->u.k6.fld.prsstat.wta = cm_object_get_child_by_name(state->u.k6.reg.prsstat, "WTA");
    state->u.k6.fld.prsstat.rta = cm_object_get_child_by_name(state->u.k6.reg.prsstat, "RTA");
    state->u.k6.fld.prsstat.bwen = cm_object_get_child_by_name(state->u.k6.reg.prsstat, "BWEN");
    state->u.k6.fld.prsstat.bren = cm_object_get_child_by_name(state->u.k6.reg.prsstat, "BREN");
    state->u.k6.fld.prsstat.cins = cm_object_get_child_by_name(state->u.k6.reg.prsstat, "CINS");
    state->u.k6.fld.prsstat.clsl = cm_object_get_child_by_name(state->u.k6.reg.prsstat, "CLSL");
    state->u.k6.fld.prsstat.dlsl = cm_object_get_child_by_name(state->u.k6.reg.prsstat, "DLSL");

    // PROCTL bitfields.
    state->u.k6.fld.proctl.lctl = cm_object_get_child_by_name(state->u.k6.reg.proctl, "LCTL");
    state->u.k6.fld.proctl.dtw = cm_object_get_child_by_name(state->u.k6.reg.proctl, "DTW");
    state->u.k6.fld.proctl.d3cd = cm_object_get_child_by_name(state->u.k6.reg.proctl, "D3CD");
    state->u.k6.fld.proctl.emode = cm_object_get_child_by_name(state->u.k6.reg.proctl, "EMODE");
    state->u.k6.fld.proctl.cdtl = cm_object_get_child_by_name(state->u.k6.reg.proctl, "CDTL");
    state->u.k6.fld.proctl.cdss = cm_object_get_child_by_name(state->u.k6.reg.proctl, "CDSS");
    state->u.k6.fld.proctl.dmas = cm_object_get_child_by_name(state->u.k6.reg.proctl, "DMAS");
    state->u.k6.fld.proctl.sabgreq = cm_object_get_child_by_name(state->u.k6.reg.proctl, "SABGREQ");
    state->u.k6.fld.proctl.creq = cm_object_get_child_by_name(state->u.k6.reg.proctl, "CREQ");
    state->u.k6.fld.proctl.rwctl = cm_object_get_child_by_name(state->u.k6.reg.proctl, "RWCTL");
    state->u.k6.fld.proctl.iabg = cm_object_get_child_by_name(state->u.k6.reg.proctl, "IABG");
    state->u.k6.fld.proctl.wecint = cm_object_get_child_by_name(state->u.k6.reg.proctl, "WECINT");
    state->u.k6.fld.proctl.wecins = cm_object_get_child_by_name(state->u.k6.reg.proctl, "WECINS");
    state->u.k6.fld.proctl.wecrm = cm_object_get_child_by_name(state->u.k6.reg.proctl, "WECRM");

    // SYSCTL bitfields.
    state->u.k6.fld.sysctl.ipgen = cm_object_get_child_by_name(state->u.k6.reg.sysctl, "IPGEN");
    state->u.k6.fld.sysctl.hcken = cm_object_get_child_by_name(state->u.k6.reg.sysctl, "HCKEN");
    state->u.k6.fld.sysctl.peren = cm_object_get_child_by_name(state->u.k6.reg.sysctl, "PEREN");
    state->u.k6.fld.sysctl.sdclken = cm_object_get_child_by_name(state->u.k6.reg.sysctl, "SDCLKEN");
    state->u.k6.fld.sysctl.dvs = cm_object_get_child_by_name(state->u.k6.reg.sysctl, "DVS");
    state->u.k6.fld.sysctl.sdclkfs = cm_object_get_child_by_name(state->u.k6.reg.sysctl, "SDCLKFS");
    state->u.k6.fld.sysctl.dtocv = cm_object_get_child_by_name(state->u.k6.reg.sysctl, "DTOCV");
    state->u.k6.fld.sysctl.rsta = cm_object_get_child_by_name(state->u.k6.reg.sysctl, "RSTA");
    state->u.k6.fld.sysctl.rstc = cm_object_get_child_by_name(state->u.k6.reg.sysctl, "RSTC");
    state->u.k6.fld.sysctl.rstd = cm_object_get_child_by_name(state->u.k6.reg.sysctl, "RSTD");
    state->u.k6.fld.sysctl.inita = cm_object_get_child_by_name(state->u.k6.reg.sysctl, "INITA");

    // IRQSTAT bitfields.
    state->u.k6.fld.irqstat.cc = cm_object_get_child_by_name(state->u.k6.reg.irqstat, "CC");
    state->u.k6.fld.irqstat.tc = cm_object_get_child_by_name(state->u.k6.reg.irqstat, "TC");
    state->u.k6.fld.irqstat.bge = cm_object_get_child_by_name(state->u.k6.reg.irqstat, "BGE");
    state->u.k6.fld.irqstat.dint = cm_object_get_child_by_name(state->u.k6.reg.irqstat, "DINT");
    state->u.k6.fld.irqstat.bwr = cm_object_get_child_by_name(state->u.k6.reg.irqstat, "BWR");
    state->u.k6.fld.irqstat.brr = cm_object_get_child_by_name(state->u.k6.reg.irqstat, "BRR");
    state->u.k6.fld.irqstat.cins = cm_object_get_child_by_name(state->u.k6.reg.irqstat, "CINS");
    state->u.k6.fld.irqstat.crm = cm_object_get_child_by_name(state->u.k6.reg.irqstat, "CRM");
    state->u.k6.fld.irqstat.cint = cm_object_get_child_by_name(state->u.k6.reg.irqstat, "CINT");
    state->u.k6.fld.irqstat.ctoe = cm_object_get_child_by_name(state->u.k6.reg.irqstat, "CTOE");
    state->u.k6.fld.irqstat.cce = cm_object_get_child_by_name(state->u.k6.reg.irqstat, "CCE");
    state->u.k6.fld.irqstat.cebe = cm_object_get_child_by_name(state->u.k6.reg.irqstat, "CEBE");
    state->u.k6.fld.irqstat.cie = cm_object_get_child_by_name(state->u.k6.reg.irqstat, "CIE");
    state->u.k6.fld.irqstat.dtoe = cm_object_get_child_by_name(state->u.k6.reg.irqstat, "DTOE");
    state->u.k6.fld.irqstat.dce = cm_object_get_child_by_name(state->u.k6.reg.irqstat, "DCE");
    state->u.k6.fld.irqstat.debe = cm_object_get_child_by_name(state->u.k6.reg.irqstat, "DEBE");
    state->u.k6.fld.irqstat.ac12e = cm_object_get_child_by_name(state->u.k6.reg.irqstat, "AC12E");
    state->u.k6.fld.irqstat.dmae = cm_object_get_child_by_name(state->u.k6.reg.irqstat, "DMAE");

    // IRQSTATEN bitfields.
    state->u.k6.fld.irqstaten.ccsen = cm_object_get_child_by_name(state->u.k6.reg.irqstaten, "CCSEN");
    state->u.k6.fld.irqstaten.tcsen = cm_object_get_child_by_name(state->u.k6.reg.irqstaten, "TCSEN");
    state->u.k6.fld.irqstaten.bgesen = cm_object_get_child_by_name(state->u.k6.reg.irqstaten, "BGESEN");
    state->u.k6.fld.irqstaten.dintsen = cm_object_get_child_by_name(state->u.k6.reg.irqstaten, "DINTSEN");
    state->u.k6.fld.irqstaten.bwrsen = cm_object_get_child_by_name(state->u.k6.reg.irqstaten, "BWRSEN");
    state->u.k6.fld.irqstaten.brrsen = cm_object_get_child_by_name(state->u.k6.reg.irqstaten, "BRRSEN");
    state->u.k6.fld.irqstaten.cinsen = cm_object_get_child_by_name(state->u.k6.reg.irqstaten, "CINSEN");
    state->u.k6.fld.irqstaten.crmsen = cm_object_get_child_by_name(state->u.k6.reg.irqstaten, "CRMSEN");
    state->u.k6.fld.irqstaten.cintsen = cm_object_get_child_by_name(state->u.k6.reg.irqstaten, "CINTSEN");
    state->u.k6.fld.irqstaten.ctoesen = cm_object_get_child_by_name(state->u.k6.reg.irqstaten, "CTOESEN");
    state->u.k6.fld.irqstaten.ccesen = cm_object_get_child_by_name(state->u.k6.reg.irqstaten, "CCESEN");
    state->u.k6.fld.irqstaten.cebesen = cm_object_get_child_by_name(state->u.k6.reg.irqstaten, "CEBESEN");
    state->u.k6.fld.irqstaten.ciesen = cm_object_get_child_by_name(state->u.k6.reg.irqstaten, "CIESEN");
    state->u.k6.fld.irqstaten.dtoesen = cm_object_get_child_by_name(state->u.k6.reg.irqstaten, "DTOESEN");
    state->u.k6.fld.irqstaten.dcesen = cm_object_get_child_by_name(state->u.k6.reg.irqstaten, "DCESEN");
    state->u.k6.fld.irqstaten.debesen = cm_object_get_child_by_name(state->u.k6.reg.irqstaten, "DEBESEN");
    state->u.k6.fld.irqstaten.ac12esen = cm_object_get_child_by_name(state->u.k6.reg.irqstaten, "AC12ESEN");
    state->u.k6.fld.irqstaten.dmaesen = cm_object_get_child_by_name(state->u.k6.reg.irqstaten, "DMAESEN");

    // IRQSIGEN bitfields.
    state->u.k6.fld.irqsigen.ccien = cm_object_get_child_by_name(state->u.k6.reg.irqsigen, "CCIEN");
    state->u.k6.fld.irqsigen.tcien = cm_object_get_child_by_name(state->u.k6.reg.irqsigen, "TCIEN");
    state->u.k6.fld.irqsigen.bgeien = cm_object_get_child_by_name(state->u.k6.reg.irqsigen, "BGEIEN");
    state->u.k6.fld.irqsigen.dintien = cm_object_get_child_by_name(state->u.k6.reg.irqsigen, "DINTIEN");
    state->u.k6.fld.irqsigen.bwrien = cm_object_get_child_by_name(state->u.k6.reg.irqsigen, "BWRIEN");
    state->u.k6.fld.irqsigen.brrien = cm_object_get_child_by_name(state->u.k6.reg.irqsigen, "BRRIEN");
    state->u.k6.fld.irqsigen.cinsien = cm_object_get_child_by_name(state->u.k6.reg.irqsigen, "CINSIEN");
    state->u.k6.fld.irqsigen.crmien = cm_object_get_child_by_name(state->u.k6.reg.irqsigen, "CRMIEN");
    state->u.k6.fld.irqsigen.cintien = cm_object_get_child_by_name(state->u.k6.reg.irqsigen, "CINTIEN");
    state->u.k6.fld.irqsigen.ctoeien = cm_object_get_child_by_name(state->u.k6.reg.irqsigen, "CTOEIEN");
    state->u.k6.fld.irqsigen.cceien = cm_object_get_child_by_name(state->u.k6.reg.irqsigen, "CCEIEN");
    state->u.k6.fld.irqsigen.cebeien = cm_object_get_child_by_name(state->u.k6.reg.irqsigen, "CEBEIEN");
    state->u.k6.fld.irqsigen.cieien = cm_object_get_child_by_name(state->u.k6.reg.irqsigen, "CIEIEN");
    state->u.k6.fld.irqsigen.dtoeien = cm_object_get_child_by_name(state->u.k6.reg.irqsigen, "DTOEIEN");
    state->u.k6.fld.irqsigen.dceien = cm_object_get_child_by_name(state->u.k6.reg.irqsigen, "DCEIEN");
    state->u.k6.fld.irqsigen.debeien = cm_object_get_child_by_name(state->u.k6.reg.irqsigen, "DEBEIEN");
    state->u.k6.fld.irqsigen.ac12eien = cm_object_get_child_by_name(state->u.k6.reg.irqsigen, "AC12EIEN");
    state->u.k6.fld.irqsigen.dmaeien = cm_object_get_child_by_name(state->u.k6.reg.irqsigen, "DMAEIEN");

    // AC12ERR bitfields.
    state->u.k6.fld.ac12err.ac12ne = cm_object_get_child_by_name(state->u.k6.reg.ac12err, "AC12NE");
    state->u.k6.fld.ac12err.ac12toe = cm_object_get_child_by_name(state->u.k6.reg.ac12err, "AC12TOE");
    state->u.k6.fld.ac12err.ac12ebe = cm_object_get_child_by_name(state->u.k6.reg.ac12err, "AC12EBE");
    state->u.k6.fld.ac12err.ac12ce = cm_object_get_child_by_name(state->u.k6.reg.ac12err, "AC12CE");
    state->u.k6.fld.ac12err.ac12ie = cm_object_get_child_by_name(state->u.k6.reg.ac12err, "AC12IE");
    state->u.k6.fld.ac12err.cnibac12e = cm_object_get_child_by_name(state->u.k6.reg.ac12err, "CNIBAC12E");

    // HTCAPBLT bitfields.
    state->u.k6.fld.htcapblt.mbl = cm_object_get_child_by_name(state->u.k6.reg.htcapblt, "MBL");
    state->u.k6.fld.htcapblt.admas = cm_object_get_child_by_name(state->u.k6.reg.htcapblt, "ADMAS");
    state->u.k6.fld.htcapblt.hss = cm_object_get_child_by_name(state->u.k6.reg.htcapblt, "HSS");
    state->u.k6.fld.htcapblt.dmas = cm_object_get_child_by_name(state->u.k6.reg.htcapblt, "DMAS");
    state->u.k6.fld.htcapblt.srs = cm_object_get_child_by_name(state->u.k6.reg.htcapblt, "SRS");
    state->u.k6.fld.htcapblt.vs33 = cm_object_get_child_by_name(state->u.k6.reg.htcapblt, "VS33");

    // WML bitfields.
    state->u.k6.fld.wml.rdwml = cm_object_get_child_by_name(state->u.k6.reg.wml, "RDWML");
    state->u.k6.fld.wml.wrwml = cm_object_get_child_by_name(state->u.k6.reg.wml, "WRWML");

    // FEVT bitfields.
    state->u.k6.fld.fevt.ac12ne = cm_object_get_child_by_name(state->u.k6.reg.fevt, "AC12NE");
    state->u.k6.fld.fevt.ac12toe = cm_object_get_child_by_name(state->u.k6.reg.fevt, "AC12TOE");
    state->u.k6.fld.fevt.ac12ce = cm_object_get_child_by_name(state->u.k6.reg.fevt, "AC12CE");
    state->u.k6.fld.fevt.ac12ebe = cm_object_get_child_by_name(state->u.k6.reg.fevt, "AC12EBE");
    state->u.k6.fld.fevt.ac12ie = cm_object_get_child_by_name(state->u.k6.reg.fevt, "AC12IE");
    state->u.k6.fld.fevt.cnibac12e = cm_object_get_child_by_name(state->u.k6.reg.fevt, "CNIBAC12E");
    state->u.k6.fld.fevt.ctoe = cm_object_get_child_by_name(state->u.k6.reg.fevt, "CTOE");
    state->u.k6.fld.fevt.cce = cm_object_get_child_by_name(state->u.k6.reg.fevt, "CCE");
    state->u.k6.fld.fevt.cebe = cm_object_get_child_by_name(state->u.k6.reg.fevt, "CEBE");
    state->u.k6.fld.fevt.cie = cm_object_get_child_by_name(state->u.k6.reg.fevt, "CIE");
    state->u.k6.fld.fevt.dtoe = cm_object_get_child_by_name(state->u.k6.reg.fevt, "DTOE");
    state->u.k6.fld.fevt.dce = cm_object_get_child_by_name(state->u.k6.reg.fevt, "DCE");
    state->u.k6.fld.fevt.debe = cm_object_get_child_by_name(state->u.k6.reg.fevt, "DEBE");
    state->u.k6.fld.fevt.ac12e = cm_object_get_child_by_name(state->u.k6.reg.fevt, "AC12E");
    state->u.k6.fld.fevt.dmae = cm_object_get_child_by_name(state->u.k6.reg.fevt, "DMAE");
    state->u.k6.fld.fevt.cint = cm_object_get_child_by_name(state->u.k6.reg.fevt, "CINT");

    // ADMAES bitfields.
    state->u.k6.fld.admaes.admaes = cm_object_get_child_by_name(state->u.k6.reg.admaes, "ADMAES");
    state->u.k6.fld.admaes.admalme = cm_object_get_child_by_name(state->u.k6.reg.admaes, "ADMALME");
    state->u.k6.fld.admaes.admadce = cm_object_get_child_by_name(state->u.k6.reg.admaes, "ADMADCE");

    // ADSADDR bitfields.
    state->u.k6.fld.adsaddr.adsaddr = cm_object_get_child_by_name(state->u.k6.reg.adsaddr, "ADSADDR");

    // VENDOR bitfields.
    state->u.k6.fld.vendor.extdmaen = cm_object_get_child_by_name(state->u.k6.reg.vendor, "EXTDMAEN");
    state->u.k6.fld.vendor.exblknu = cm_object_get_child_by_name(state->u.k6.reg.vendor, "EXBLKNU");
    state->u.k6.fld.vendor.intstval = cm_object_get_child_by_name(state->u.k6.reg.vendor, "INTSTVAL");

    // MMCBOOT bitfields.
    state->u.k6.fld.mmcboot.dtocvack = cm_object_get_child_by_name(state->u.k6.reg.mmcboot, "DTOCVACK");
    state->u.k6.fld.mmcboot.bootack = cm_object_get_child_by_name(state->u.k6.reg.mmcboot, "BOOTACK");
    state->u.k6.fld.mmcboot.bootmode = cm_object_get_child_by_name(state->u.k6.reg.mmcboot, "BOOTMODE");
    state->u.k6.fld.mmcboot.booten = cm_object_get_child_by_name(state->u.k6.reg.mmcboot, "BOOTEN");
    state->u.k6.fld.mmcboot.autosabgen = cm_object_get_child_by_name(state->u.k6.reg.mmcboot, "AUTOSABGEN");
    state->u.k6.fld.mmcboot.bootblkcnt = cm_object_get_child_by_name(state->u.k6.reg.mmcboot, "BOOTBLKCNT");

    // HOSTVER bitfields.
    state->u.k6.fld.hostver.svn = cm_object_get_child_by_name(state->u.k6.reg.hostver, "SVN");
    state->u.k6.fld.hostver.vvn = cm_object_get_child_by_name(state->u.k6.reg.hostver, "VVN");
}

// ----- 8< ----- 8< -----  8< ----- 8< ----- 8< ----- 8< ----- 8< -----

// ----- Private --------------------------------------------------------------

#if 0
static peripheral_register_t kinetis_sdhc_xxx_pre_write_callback(Object *reg,
        Object *periph, uint32_t addr, uint32_t offset, unsigned size,
        peripheral_register_t value, peripheral_register_t full_value)
{
    KinetisSDHCState *state = KINETIS_SDHC_STATE(periph);

    peripheral_register_t prev_value = peripheral_register_get_raw_prev_value(reg);

    // TODO: Add code to adjust the value (like applying some masks,
    // for example prevent setting interrupts not enabled).
    // Also process cleared/set by write 1/0 bits.
    // The returned value will be stored in the register value.

    return full_value;
}

static void kinetis_sdhc_xxx_post_write_callback(Object *reg, Object *periph,
        uint32_t addr, uint32_t offset, unsigned size,
        peripheral_register_t value, peripheral_register_t full_value)
{
    KinetisSDHCState *state = KINETIS_SDHC_STATE(periph);

    peripheral_register_t prev_value = peripheral_register_get_raw_prev_value(reg);
    // The new register value is full_value, the old one is prev_value.

    // TODO: Add code to send the value to the consumer.
}

static peripheral_register_t kinetis_sdhc_xxx_pre_read_callback(Object *reg,
        Object *periph, uint32_t addr, uint32_t offset, unsigned size)
{
    KinetisSDHCState *state = KINETIS_SDHC_STATE(periph);

    peripheral_register_t value = 0;

    // Add code to get the value from the producer, and return it.

    // This value, possibly masked, will be stored in the register
    // and returned when the register is read.
    return value;
}

static void kinetis_sdhc_xxx_post_read_callback(Object *reg, Object *periph,
        uint32_t addr, uint32_t offset, unsigned size)
{
    KinetisSDHCState *state = KINETIS_SDHC_STATE(periph);

    peripheral_register_t value = peripheral_register_get_raw_value(reg);

    // TODO: add code to perform the post read actions, like clearing some bits.
}
#endif

// ----------------------------------------------------------------------------

// TODO: remove this if the peripheral is always enabled.
static bool kinetis_sdhc_is_enabled(Object *obj)
{
    KinetisSDHCState *state = KINETIS_SDHC_STATE(obj);

    if (register_bitfield_is_non_zero(state->enabling_bit)) {
        return true; // Positive logic, bit == 1 means enabled.
    }

    // Not enabled
    return false;
}

static void kinetis_sdhc_instance_init_callback(Object *obj)
{
    qemu_log_function_name();

    KinetisSDHCState *state = KINETIS_SDHC_STATE(obj);

    // Capabilities are not yet available.

    // TODO: remove this if the peripheral is always enabled.
    state->enabling_bit = NULL;
    
    // TODO: Add code to initialise all members.
}

static void kinetis_sdhc_realize_callback(DeviceState *dev, Error **errp)
{
    qemu_log_function_name();

    // Call parent realize().
    if (!cm_device_parent_realize(dev, errp, TYPE_KINETIS_SDHC)) {
        return;
    }

    KinetisMCUState *mcu = kinetis_mcu_get();
    CortexMState *cm_state = CORTEXM_MCU_STATE(mcu);

    KinetisSDHCState *state = KINETIS_SDHC_STATE(dev);
    // First thing first: get capabilities from MCU, needed everywhere.
    state->capabilities = mcu->capabilities;

    // Also keep a local pointer, to access them easier.
    const KinetisCapabilities *capabilities = state->capabilities;
    assert(capabilities != NULL);

    Object *obj = OBJECT(dev);

    const char *periph_name = "SDHC";

    svd_set_peripheral_address_block(cm_state->svd_json, periph_name, obj);
    peripheral_create_memory_region(obj);

    // TODO: remove this if the peripheral is always enabled.
    char enabling_bit_name[KINETIS_RCC_SIZEOF_ENABLING_BITFIELD];

    switch (capabilities->family) {
    case KINETIS_FAMILY_K6:


            mk64f12_sdhc_create_objects(obj, cm_state->svd_json, periph_name);

            // TODO: add actions.
            // cm_object_property_set_str(state->u.k6.fld.xxx.fff, "GGG", "follows");
            // cm_object_property_set_str(state->u.k6.fld.xxx.fff, "GGG", "cleared-by");

            // TODO: add callbacks.
            // peripheral_register_set_pre_read(state->k6.reg.xxx, &kinetis_sdhc_xxx_pre_read_callback);
            // peripheral_register_set_post_read(state->k6.reg.xxx, &kinetis_sdhc_xxx_post_read_callback);
            // peripheral_register_set_pre_read(state->k6.reg.xxx, &kinetis_sdhc_xxx_pret_read_callback);
            // peripheral_register_set_post_write(state->k6.reg.xxx, &kinetis_sdhc_xxx_post_write_callback);

            // TODO: add interrupts.

            // TODO: remove this if the peripheral is always enabled.
            snprintf(enabling_bit_name, sizeof(enabling_bit_name) - 1,
                DEVICE_PATH_KINETIS_RCC "/AHB1ENR/SDHCEN");


        break;

    default:
        assert(false);
        break;
    }

    // TODO: remove this if the peripheral is always enabled.
    state->enabling_bit = OBJECT(cm_device_by_name(enabling_bit_name));

    peripheral_prepare_registers(obj);
}

static void kinetis_sdhc_reset_callback(DeviceState *dev)
{
    qemu_log_function_name();

    // Call parent reset(); this will reset all children registers.
    cm_device_parent_reset(dev, TYPE_KINETIS_SDHC);
}

static void kinetis_sdhc_class_init_callback(ObjectClass *klass, void *data)
{
    DeviceClass *dc = DEVICE_CLASS(klass);

    dc->reset = kinetis_sdhc_reset_callback;
    dc->realize = kinetis_sdhc_realize_callback;

    // TODO: remove this if the peripheral is always enabled.
    PeripheralClass *per_class = PERIPHERAL_CLASS(klass);
    per_class->is_enabled = kinetis_sdhc_is_enabled;
}

static const TypeInfo kinetis_sdhc_type_info = {
    .name = TYPE_KINETIS_SDHC,
    .parent = TYPE_KINETIS_SDHC_PARENT,
    .instance_init = kinetis_sdhc_instance_init_callback,
    .instance_size = sizeof(KinetisSDHCState),
    .class_init = kinetis_sdhc_class_init_callback,
    .class_size = sizeof(KinetisSDHCClass) };

static void kinetis_sdhc_register_types(void)
{
    type_register_static(&kinetis_sdhc_type_info);
}

type_init(kinetis_sdhc_register_types);

// ----------------------------------------------------------------------------
