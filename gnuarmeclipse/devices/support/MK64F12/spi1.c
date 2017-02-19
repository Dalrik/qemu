/*
 * Kinetis - SPI (Serial Peripheral Interface) emulation.
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

#include <hw/cortexm/kinetis/spi.h>
#include <hw/cortexm/kinetis/mcu.h>
#include <hw/cortexm/helper.h>
#include <hw/cortexm/svd.h>

// ----- Generated code -------------------------------------------------------
//
// ----- 8< ----- 8< -----  8< ----- 8< ----- 8< ----- 8< ----- 8< -----

// DO NOT EDIT! Automatically generated!
static void mk64f12_spi_create_objects(Object *obj, JSON_Object *svd, const char *name)
{
    KinetisSPIState *state = KINETIS_SPI_STATE(obj);

    JSON_Object *periph = svd_get_peripheral_by_name(svd, name);
    svd_add_peripheral_properties_and_children(obj, periph, svd);

    // Registers. 
    state->u.k6.reg.mcr = cm_object_get_child_by_name(obj, "MCR");
    state->u.k6.reg.tcr = cm_object_get_child_by_name(obj, "TCR");
    state->u.k6.reg.ctar[0] = cm_object_get_child_by_name(obj, "CTAR0");
    state->u.k6.reg.ctar[1] = cm_object_get_child_by_name(obj, "CTAR1");
    state->u.k6.reg.ctar_slave = cm_object_get_child_by_name(obj, "CTAR_SLAVE");
    state->u.k6.reg.sr = cm_object_get_child_by_name(obj, "SR");
    state->u.k6.reg.rser = cm_object_get_child_by_name(obj, "RSER");
    state->u.k6.reg.pushr = cm_object_get_child_by_name(obj, "PUSHR");
    state->u.k6.reg.pushr_slave = cm_object_get_child_by_name(obj, "PUSHR_SLAVE");
    state->u.k6.reg.popr = cm_object_get_child_by_name(obj, "POPR");
    state->u.k6.reg.txfr[0] = cm_object_get_child_by_name(obj, "TXFR0");
    state->u.k6.reg.txfr[1] = cm_object_get_child_by_name(obj, "TXFR1");
    state->u.k6.reg.txfr[2] = cm_object_get_child_by_name(obj, "TXFR2");
    state->u.k6.reg.txfr[3] = cm_object_get_child_by_name(obj, "TXFR3");
    state->u.k6.reg.rxfr[0] = cm_object_get_child_by_name(obj, "RXFR0");
    state->u.k6.reg.rxfr[1] = cm_object_get_child_by_name(obj, "RXFR1");
    state->u.k6.reg.rxfr[2] = cm_object_get_child_by_name(obj, "RXFR2");
    state->u.k6.reg.rxfr[3] = cm_object_get_child_by_name(obj, "RXFR3");

    // MCR bitfields.
    state->u.k6.fld.mcr.halt = cm_object_get_child_by_name(state->u.k6.reg.mcr, "HALT");
    state->u.k6.fld.mcr.smpl_pt = cm_object_get_child_by_name(state->u.k6.reg.mcr, "SMPL_PT");
    state->u.k6.fld.mcr.clr_rxf = cm_object_get_child_by_name(state->u.k6.reg.mcr, "CLR_RXF");
    state->u.k6.fld.mcr.clr_txf = cm_object_get_child_by_name(state->u.k6.reg.mcr, "CLR_TXF");
    state->u.k6.fld.mcr.dis_rxf = cm_object_get_child_by_name(state->u.k6.reg.mcr, "DIS_RXF");
    state->u.k6.fld.mcr.dis_txf = cm_object_get_child_by_name(state->u.k6.reg.mcr, "DIS_TXF");
    state->u.k6.fld.mcr.mdis = cm_object_get_child_by_name(state->u.k6.reg.mcr, "MDIS");
    state->u.k6.fld.mcr.doze = cm_object_get_child_by_name(state->u.k6.reg.mcr, "DOZE");
    state->u.k6.fld.mcr.pcsis = cm_object_get_child_by_name(state->u.k6.reg.mcr, "PCSIS");
    state->u.k6.fld.mcr.rooe = cm_object_get_child_by_name(state->u.k6.reg.mcr, "ROOE");
    state->u.k6.fld.mcr.pcsse = cm_object_get_child_by_name(state->u.k6.reg.mcr, "PCSSE");
    state->u.k6.fld.mcr.mtfe = cm_object_get_child_by_name(state->u.k6.reg.mcr, "MTFE");
    state->u.k6.fld.mcr.frz = cm_object_get_child_by_name(state->u.k6.reg.mcr, "FRZ");
    state->u.k6.fld.mcr.dconf = cm_object_get_child_by_name(state->u.k6.reg.mcr, "DCONF");
    state->u.k6.fld.mcr.cont_scke = cm_object_get_child_by_name(state->u.k6.reg.mcr, "CONT_SCKE");
    state->u.k6.fld.mcr.mstr = cm_object_get_child_by_name(state->u.k6.reg.mcr, "MSTR");

    // TCR bitfields.
    state->u.k6.fld.tcr.spi_tcnt = cm_object_get_child_by_name(state->u.k6.reg.tcr, "SPI_TCNT");
    // CTAR0 bitfields.
    state->u.k6.fld.ctar[0].br = cm_object_get_child_by_name(state->u.k6.reg.ctar[0], "BR");
    state->u.k6.fld.ctar[0].dt = cm_object_get_child_by_name(state->u.k6.reg.ctar[0], "DT");
    state->u.k6.fld.ctar[0].asc = cm_object_get_child_by_name(state->u.k6.reg.ctar[0], "ASC");
    state->u.k6.fld.ctar[0].cssck = cm_object_get_child_by_name(state->u.k6.reg.ctar[0], "CSSCK");
    state->u.k6.fld.ctar[0].pbr = cm_object_get_child_by_name(state->u.k6.reg.ctar[0], "PBR");
    state->u.k6.fld.ctar[0].pdt = cm_object_get_child_by_name(state->u.k6.reg.ctar[0], "PDT");
    state->u.k6.fld.ctar[0].pasc = cm_object_get_child_by_name(state->u.k6.reg.ctar[0], "PASC");
    state->u.k6.fld.ctar[0].pcssck = cm_object_get_child_by_name(state->u.k6.reg.ctar[0], "PCSSCK");
    state->u.k6.fld.ctar[0].lsbfe = cm_object_get_child_by_name(state->u.k6.reg.ctar[0], "LSBFE");
    state->u.k6.fld.ctar[0].cpha = cm_object_get_child_by_name(state->u.k6.reg.ctar[0], "CPHA");
    state->u.k6.fld.ctar[0].cpol = cm_object_get_child_by_name(state->u.k6.reg.ctar[0], "CPOL");
    state->u.k6.fld.ctar[0].fmsz = cm_object_get_child_by_name(state->u.k6.reg.ctar[0], "FMSZ");
    state->u.k6.fld.ctar[0].dbr = cm_object_get_child_by_name(state->u.k6.reg.ctar[0], "DBR");
    // CTAR1 bitfields.
    state->u.k6.fld.ctar[1].br = cm_object_get_child_by_name(state->u.k6.reg.ctar[1], "BR");
    state->u.k6.fld.ctar[1].dt = cm_object_get_child_by_name(state->u.k6.reg.ctar[1], "DT");
    state->u.k6.fld.ctar[1].asc = cm_object_get_child_by_name(state->u.k6.reg.ctar[1], "ASC");
    state->u.k6.fld.ctar[1].cssck = cm_object_get_child_by_name(state->u.k6.reg.ctar[1], "CSSCK");
    state->u.k6.fld.ctar[1].pbr = cm_object_get_child_by_name(state->u.k6.reg.ctar[1], "PBR");
    state->u.k6.fld.ctar[1].pdt = cm_object_get_child_by_name(state->u.k6.reg.ctar[1], "PDT");
    state->u.k6.fld.ctar[1].pasc = cm_object_get_child_by_name(state->u.k6.reg.ctar[1], "PASC");
    state->u.k6.fld.ctar[1].pcssck = cm_object_get_child_by_name(state->u.k6.reg.ctar[1], "PCSSCK");
    state->u.k6.fld.ctar[1].lsbfe = cm_object_get_child_by_name(state->u.k6.reg.ctar[1], "LSBFE");
    state->u.k6.fld.ctar[1].cpha = cm_object_get_child_by_name(state->u.k6.reg.ctar[1], "CPHA");
    state->u.k6.fld.ctar[1].cpol = cm_object_get_child_by_name(state->u.k6.reg.ctar[1], "CPOL");
    state->u.k6.fld.ctar[1].fmsz = cm_object_get_child_by_name(state->u.k6.reg.ctar[1], "FMSZ");
    state->u.k6.fld.ctar[1].dbr = cm_object_get_child_by_name(state->u.k6.reg.ctar[1], "DBR");

    // CTAR_SLAVE bitfields.
    state->u.k6.fld.ctar_slave.cpha = cm_object_get_child_by_name(state->u.k6.reg.ctar_slave, "CPHA");
    state->u.k6.fld.ctar_slave.cpol = cm_object_get_child_by_name(state->u.k6.reg.ctar_slave, "CPOL");
    state->u.k6.fld.ctar_slave.fmsz = cm_object_get_child_by_name(state->u.k6.reg.ctar_slave, "FMSZ");

    // SR bitfields.
    state->u.k6.fld.sr.popnxtptr = cm_object_get_child_by_name(state->u.k6.reg.sr, "POPNXTPTR");
    state->u.k6.fld.sr.rxctr = cm_object_get_child_by_name(state->u.k6.reg.sr, "RXCTR");
    state->u.k6.fld.sr.txnxtptr = cm_object_get_child_by_name(state->u.k6.reg.sr, "TXNXTPTR");
    state->u.k6.fld.sr.txctr = cm_object_get_child_by_name(state->u.k6.reg.sr, "TXCTR");
    state->u.k6.fld.sr.rfdf = cm_object_get_child_by_name(state->u.k6.reg.sr, "RFDF");
    state->u.k6.fld.sr.rfof = cm_object_get_child_by_name(state->u.k6.reg.sr, "RFOF");
    state->u.k6.fld.sr.tfff = cm_object_get_child_by_name(state->u.k6.reg.sr, "TFFF");
    state->u.k6.fld.sr.tfuf = cm_object_get_child_by_name(state->u.k6.reg.sr, "TFUF");
    state->u.k6.fld.sr.eoqf = cm_object_get_child_by_name(state->u.k6.reg.sr, "EOQF");
    state->u.k6.fld.sr.txrxs = cm_object_get_child_by_name(state->u.k6.reg.sr, "TXRXS");
    state->u.k6.fld.sr.tcf = cm_object_get_child_by_name(state->u.k6.reg.sr, "TCF");

    // RSER bitfields.
    state->u.k6.fld.rser.rfdf_dirs = cm_object_get_child_by_name(state->u.k6.reg.rser, "RFDF_DIRS");
    state->u.k6.fld.rser.rfdf_re = cm_object_get_child_by_name(state->u.k6.reg.rser, "RFDF_RE");
    state->u.k6.fld.rser.rfof_re = cm_object_get_child_by_name(state->u.k6.reg.rser, "RFOF_RE");
    state->u.k6.fld.rser.tfff_dirs = cm_object_get_child_by_name(state->u.k6.reg.rser, "TFFF_DIRS");
    state->u.k6.fld.rser.tfff_re = cm_object_get_child_by_name(state->u.k6.reg.rser, "TFFF_RE");
    state->u.k6.fld.rser.tfuf_re = cm_object_get_child_by_name(state->u.k6.reg.rser, "TFUF_RE");
    state->u.k6.fld.rser.eoqf_re = cm_object_get_child_by_name(state->u.k6.reg.rser, "EOQF_RE");
    state->u.k6.fld.rser.tcf_re = cm_object_get_child_by_name(state->u.k6.reg.rser, "TCF_RE");

    // PUSHR bitfields.
    state->u.k6.fld.pushr.txdata = cm_object_get_child_by_name(state->u.k6.reg.pushr, "TXDATA");
    state->u.k6.fld.pushr.pcs = cm_object_get_child_by_name(state->u.k6.reg.pushr, "PCS");
    state->u.k6.fld.pushr.ctcnt = cm_object_get_child_by_name(state->u.k6.reg.pushr, "CTCNT");
    state->u.k6.fld.pushr.eoq = cm_object_get_child_by_name(state->u.k6.reg.pushr, "EOQ");
    state->u.k6.fld.pushr.ctas = cm_object_get_child_by_name(state->u.k6.reg.pushr, "CTAS");
    state->u.k6.fld.pushr.cont = cm_object_get_child_by_name(state->u.k6.reg.pushr, "CONT");

    // PUSHR_SLAVE bitfields.
    state->u.k6.fld.pushr_slave.txdata = cm_object_get_child_by_name(state->u.k6.reg.pushr_slave, "TXDATA");

    // POPR bitfields.
    state->u.k6.fld.popr.rxdata = cm_object_get_child_by_name(state->u.k6.reg.popr, "RXDATA");
    // TXFR0 bitfields.
    state->u.k6.fld.txfr[0].txdata = cm_object_get_child_by_name(state->u.k6.reg.txfr[0], "TXDATA");
    state->u.k6.fld.txfr[0].txcmd_txdata = cm_object_get_child_by_name(state->u.k6.reg.txfr[0], "TXCMD_TXDATA");
    // TXFR1 bitfields.
    state->u.k6.fld.txfr[1].txdata = cm_object_get_child_by_name(state->u.k6.reg.txfr[1], "TXDATA");
    state->u.k6.fld.txfr[1].txcmd_txdata = cm_object_get_child_by_name(state->u.k6.reg.txfr[1], "TXCMD_TXDATA");
    // TXFR2 bitfields.
    state->u.k6.fld.txfr[2].txdata = cm_object_get_child_by_name(state->u.k6.reg.txfr[2], "TXDATA");
    state->u.k6.fld.txfr[2].txcmd_txdata = cm_object_get_child_by_name(state->u.k6.reg.txfr[2], "TXCMD_TXDATA");
    // TXFR3 bitfields.
    state->u.k6.fld.txfr[3].txdata = cm_object_get_child_by_name(state->u.k6.reg.txfr[3], "TXDATA");
    state->u.k6.fld.txfr[3].txcmd_txdata = cm_object_get_child_by_name(state->u.k6.reg.txfr[3], "TXCMD_TXDATA");
    // RXFR0 bitfields.
    state->u.k6.fld.rxfr[0].rxdata = cm_object_get_child_by_name(state->u.k6.reg.rxfr[0], "RXDATA");
    // RXFR1 bitfields.
    state->u.k6.fld.rxfr[1].rxdata = cm_object_get_child_by_name(state->u.k6.reg.rxfr[1], "RXDATA");
    // RXFR2 bitfields.
    state->u.k6.fld.rxfr[2].rxdata = cm_object_get_child_by_name(state->u.k6.reg.rxfr[2], "RXDATA");
    // RXFR3 bitfields.
    state->u.k6.fld.rxfr[3].rxdata = cm_object_get_child_by_name(state->u.k6.reg.rxfr[3], "RXDATA");
}

// ----- 8< ----- 8< -----  8< ----- 8< ----- 8< ----- 8< ----- 8< -----

// ----- Private --------------------------------------------------------------

#if 0
static peripheral_register_t kinetis_spi_xxx_pre_write_callback(Object *reg,
        Object *periph, uint32_t addr, uint32_t offset, unsigned size,
        peripheral_register_t value, peripheral_register_t full_value)
{
    KinetisSPIState *state = KINETIS_SPI_STATE(periph);

    peripheral_register_t prev_value = peripheral_register_get_raw_prev_value(reg);

    // TODO: Add code to adjust the value (like applying some masks,
    // for example prevent setting interrupts not enabled).
    // Also process cleared/set by write 1/0 bits.
    // The returned value will be stored in the register value.

    return full_value;
}

static void kinetis_spi_xxx_post_write_callback(Object *reg, Object *periph,
        uint32_t addr, uint32_t offset, unsigned size,
        peripheral_register_t value, peripheral_register_t full_value)
{
    KinetisSPIState *state = KINETIS_SPI_STATE(periph);

    peripheral_register_t prev_value = peripheral_register_get_raw_prev_value(reg);
    // The new register value is full_value, the old one is prev_value.

    // TODO: Add code to send the value to the consumer.
}

static peripheral_register_t kinetis_spi_xxx_pre_read_callback(Object *reg,
        Object *periph, uint32_t addr, uint32_t offset, unsigned size)
{
    KinetisSPIState *state = KINETIS_SPI_STATE(periph);

    peripheral_register_t value = 0;

    // Add code to get the value from the producer, and return it.

    // This value, possibly masked, will be stored in the register
    // and returned when the register is read.
    return value;
}

static void kinetis_spi_xxx_post_read_callback(Object *reg, Object *periph,
        uint32_t addr, uint32_t offset, unsigned size)
{
    KinetisSPIState *state = KINETIS_SPI_STATE(periph);

    peripheral_register_t value = peripheral_register_get_raw_value(reg);

    // TODO: add code to perform the post read actions, like clearing some bits.
}
#endif

// ----------------------------------------------------------------------------

// TODO: remove this if the peripheral is always enabled.
static bool kinetis_spi_is_enabled(Object *obj)
{
    KinetisSPIState *state = KINETIS_SPI_STATE(obj);

    if (register_bitfield_is_non_zero(state->enabling_bit)) {
        return true; // Positive logic, bit == 1 means enabled.
    }

    // Not enabled
    return false;
}

static void kinetis_spi_instance_init_callback(Object *obj)
{
    qemu_log_function_name();

    KinetisSPIState *state = KINETIS_SPI_STATE(obj);

    // Capabilities are not yet available.

    cm_object_property_add_int(obj, "port-index",
            (const int *) &state->port_index);
    state->port_index = KINETIS_PORT_SPI_UNDEFINED;

    // TODO: remove this if the peripheral is always enabled.
    state->enabling_bit = NULL;
    
    // TODO: Add code to initialise all members.
}

static void kinetis_spi_realize_callback(DeviceState *dev, Error **errp)
{
    qemu_log_function_name();

    // Call parent realize().
    if (!cm_device_parent_realize(dev, errp, TYPE_KINETIS_SPI)) {
        return;
    }

    KinetisMCUState *mcu = kinetis_mcu_get();
    CortexMState *cm_state = CORTEXM_MCU_STATE(mcu);

    KinetisSPIState *state = KINETIS_SPI_STATE(dev);
    // First thing first: get capabilities from MCU, needed everywhere.
    state->capabilities = mcu->capabilities;

    // Also keep a local pointer, to access them easier.
    const KinetisCapabilities *capabilities = state->capabilities;
    assert(capabilities != NULL);

    Object *obj = OBJECT(dev);

    const char *periph_name = "SPI";

    svd_set_peripheral_address_block(cm_state->svd_json, periph_name, obj);
    peripheral_create_memory_region(obj);

    // TODO: remove this if the peripheral is always enabled.
    char enabling_bit_name[KINETIS_RCC_SIZEOF_ENABLING_BITFIELD];

    switch (capabilities->family) {
    case KINETIS_FAMILY_K6:


            mk64f12_spi_create_objects(obj, cm_state->svd_json, periph_name);

            // TODO: add actions.
            // cm_object_property_set_str(state->u.k6.fld.xxx.fff, "GGG", "follows");
            // cm_object_property_set_str(state->u.k6.fld.xxx.fff, "GGG", "cleared-by");

            // TODO: add callbacks.
            // peripheral_register_set_pre_read(state->k6.reg.xxx, &kinetis_spi_xxx_pre_read_callback);
            // peripheral_register_set_post_read(state->k6.reg.xxx, &kinetis_spi_xxx_post_read_callback);
            // peripheral_register_set_pre_read(state->k6.reg.xxx, &kinetis_spi_xxx_pret_read_callback);
            // peripheral_register_set_post_write(state->k6.reg.xxx, &kinetis_spi_xxx_post_write_callback);

            // TODO: add interrupts.

            // TODO: remove this if the peripheral is always enabled.
            snprintf(enabling_bit_name, sizeof(enabling_bit_name) - 1,
                DEVICE_PATH_KINETIS_RCC "/AHB1ENR/SPI%dEN",
                1 + state->port_index - KINETIS_PORT_SPI1);


        break;

    default:
        assert(false);
        break;
    }

    // TODO: remove this if the peripheral is always enabled.
    state->enabling_bit = OBJECT(cm_device_by_name(enabling_bit_name));

    peripheral_prepare_registers(obj);
}

static void kinetis_spi_reset_callback(DeviceState *dev)
{
    qemu_log_function_name();

    // Call parent reset(); this will reset all children registers.
    cm_device_parent_reset(dev, TYPE_KINETIS_SPI);
}

static void kinetis_spi_class_init_callback(ObjectClass *klass, void *data)
{
    DeviceClass *dc = DEVICE_CLASS(klass);

    dc->reset = kinetis_spi_reset_callback;
    dc->realize = kinetis_spi_realize_callback;

    // TODO: remove this if the peripheral is always enabled.
    PeripheralClass *per_class = PERIPHERAL_CLASS(klass);
    per_class->is_enabled = kinetis_spi_is_enabled;
}

static const TypeInfo kinetis_spi_type_info = {
    .name = TYPE_KINETIS_SPI,
    .parent = TYPE_KINETIS_SPI_PARENT,
    .instance_init = kinetis_spi_instance_init_callback,
    .instance_size = sizeof(KinetisSPIState),
    .class_init = kinetis_spi_class_init_callback,
    .class_size = sizeof(KinetisSPIClass) };

static void kinetis_spi_register_types(void)
{
    type_register_static(&kinetis_spi_type_info);
}

type_init(kinetis_spi_register_types);

// ----------------------------------------------------------------------------
