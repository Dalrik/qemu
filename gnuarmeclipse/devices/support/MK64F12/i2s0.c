/*
 * Kinetis - I2S (Inter-IC Sound / Synchronous Audio Interface) emulation.
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

#include <hw/cortexm/kinetis/i2s.h>
#include <hw/cortexm/kinetis/mcu.h>
#include <hw/cortexm/helper.h>
#include <hw/cortexm/svd.h>

// ----- Generated code -------------------------------------------------------
//
// ----- 8< ----- 8< -----  8< ----- 8< ----- 8< ----- 8< ----- 8< -----

// DO NOT EDIT! Automatically generated!
static void mk64f12_i2s_create_objects(Object *obj, JSON_Object *svd, const char *name)
{
    KinetisI2SState *state = KINETIS_I2S_STATE(obj);

    JSON_Object *periph = svd_get_peripheral_by_name(svd, name);
    svd_add_peripheral_properties_and_children(obj, periph, svd);

    // Registers. 
    state->u.k6.reg.tcsr = cm_object_get_child_by_name(obj, "TCSR");
    state->u.k6.reg.tcr1 = cm_object_get_child_by_name(obj, "TCR1");
    state->u.k6.reg.tcr2 = cm_object_get_child_by_name(obj, "TCR2");
    state->u.k6.reg.tcr3 = cm_object_get_child_by_name(obj, "TCR3");
    state->u.k6.reg.tcr4 = cm_object_get_child_by_name(obj, "TCR4");
    state->u.k6.reg.tcr5 = cm_object_get_child_by_name(obj, "TCR5");
    state->u.k6.reg.tdr[0] = cm_object_get_child_by_name(obj, "TDR0");
    state->u.k6.reg.tdr[1] = cm_object_get_child_by_name(obj, "TDR1");
    state->u.k6.reg.tfr[0] = cm_object_get_child_by_name(obj, "TFR0");
    state->u.k6.reg.tfr[1] = cm_object_get_child_by_name(obj, "TFR1");
    state->u.k6.reg.tmr = cm_object_get_child_by_name(obj, "TMR");
    state->u.k6.reg.rcsr = cm_object_get_child_by_name(obj, "RCSR");
    state->u.k6.reg.rcr1 = cm_object_get_child_by_name(obj, "RCR1");
    state->u.k6.reg.rcr2 = cm_object_get_child_by_name(obj, "RCR2");
    state->u.k6.reg.rcr3 = cm_object_get_child_by_name(obj, "RCR3");
    state->u.k6.reg.rcr4 = cm_object_get_child_by_name(obj, "RCR4");
    state->u.k6.reg.rcr5 = cm_object_get_child_by_name(obj, "RCR5");
    state->u.k6.reg.rdr[0] = cm_object_get_child_by_name(obj, "RDR0");
    state->u.k6.reg.rdr[1] = cm_object_get_child_by_name(obj, "RDR1");
    state->u.k6.reg.rfr[0] = cm_object_get_child_by_name(obj, "RFR0");
    state->u.k6.reg.rfr[1] = cm_object_get_child_by_name(obj, "RFR1");
    state->u.k6.reg.rmr = cm_object_get_child_by_name(obj, "RMR");
    state->u.k6.reg.mcr = cm_object_get_child_by_name(obj, "MCR");
    state->u.k6.reg.mdr = cm_object_get_child_by_name(obj, "MDR");

    // TCSR bitfields.
    state->u.k6.fld.tcsr.frde = cm_object_get_child_by_name(state->u.k6.reg.tcsr, "FRDE");
    state->u.k6.fld.tcsr.fwde = cm_object_get_child_by_name(state->u.k6.reg.tcsr, "FWDE");
    state->u.k6.fld.tcsr.frie = cm_object_get_child_by_name(state->u.k6.reg.tcsr, "FRIE");
    state->u.k6.fld.tcsr.fwie = cm_object_get_child_by_name(state->u.k6.reg.tcsr, "FWIE");
    state->u.k6.fld.tcsr.feie = cm_object_get_child_by_name(state->u.k6.reg.tcsr, "FEIE");
    state->u.k6.fld.tcsr.seie = cm_object_get_child_by_name(state->u.k6.reg.tcsr, "SEIE");
    state->u.k6.fld.tcsr.wsie = cm_object_get_child_by_name(state->u.k6.reg.tcsr, "WSIE");
    state->u.k6.fld.tcsr.frf = cm_object_get_child_by_name(state->u.k6.reg.tcsr, "FRF");
    state->u.k6.fld.tcsr.fwf = cm_object_get_child_by_name(state->u.k6.reg.tcsr, "FWF");
    state->u.k6.fld.tcsr.fef = cm_object_get_child_by_name(state->u.k6.reg.tcsr, "FEF");
    state->u.k6.fld.tcsr.sef = cm_object_get_child_by_name(state->u.k6.reg.tcsr, "SEF");
    state->u.k6.fld.tcsr.wsf = cm_object_get_child_by_name(state->u.k6.reg.tcsr, "WSF");
    state->u.k6.fld.tcsr.sr = cm_object_get_child_by_name(state->u.k6.reg.tcsr, "SR");
    state->u.k6.fld.tcsr.fr = cm_object_get_child_by_name(state->u.k6.reg.tcsr, "FR");
    state->u.k6.fld.tcsr.bce = cm_object_get_child_by_name(state->u.k6.reg.tcsr, "BCE");
    state->u.k6.fld.tcsr.dbge = cm_object_get_child_by_name(state->u.k6.reg.tcsr, "DBGE");
    state->u.k6.fld.tcsr.stope = cm_object_get_child_by_name(state->u.k6.reg.tcsr, "STOPE");
    state->u.k6.fld.tcsr.te = cm_object_get_child_by_name(state->u.k6.reg.tcsr, "TE");

    // TCR1 bitfields.
    state->u.k6.fld.tcr1.tfw = cm_object_get_child_by_name(state->u.k6.reg.tcr1, "TFW");

    // TCR2 bitfields.
    state->u.k6.fld.tcr2.div = cm_object_get_child_by_name(state->u.k6.reg.tcr2, "DIV");
    state->u.k6.fld.tcr2.bcd = cm_object_get_child_by_name(state->u.k6.reg.tcr2, "BCD");
    state->u.k6.fld.tcr2.bcp = cm_object_get_child_by_name(state->u.k6.reg.tcr2, "BCP");
    state->u.k6.fld.tcr2.msel = cm_object_get_child_by_name(state->u.k6.reg.tcr2, "MSEL");
    state->u.k6.fld.tcr2.bci = cm_object_get_child_by_name(state->u.k6.reg.tcr2, "BCI");
    state->u.k6.fld.tcr2.bcs = cm_object_get_child_by_name(state->u.k6.reg.tcr2, "BCS");
    state->u.k6.fld.tcr2.sync = cm_object_get_child_by_name(state->u.k6.reg.tcr2, "SYNC");

    // TCR3 bitfields.
    state->u.k6.fld.tcr3.wdfl = cm_object_get_child_by_name(state->u.k6.reg.tcr3, "WDFL");
    state->u.k6.fld.tcr3.tce = cm_object_get_child_by_name(state->u.k6.reg.tcr3, "TCE");

    // TCR4 bitfields.
    state->u.k6.fld.tcr4.fsd = cm_object_get_child_by_name(state->u.k6.reg.tcr4, "FSD");
    state->u.k6.fld.tcr4.fsp = cm_object_get_child_by_name(state->u.k6.reg.tcr4, "FSP");
    state->u.k6.fld.tcr4.fse = cm_object_get_child_by_name(state->u.k6.reg.tcr4, "FSE");
    state->u.k6.fld.tcr4.mf = cm_object_get_child_by_name(state->u.k6.reg.tcr4, "MF");
    state->u.k6.fld.tcr4.sywd = cm_object_get_child_by_name(state->u.k6.reg.tcr4, "SYWD");
    state->u.k6.fld.tcr4.frsz = cm_object_get_child_by_name(state->u.k6.reg.tcr4, "FRSZ");

    // TCR5 bitfields.
    state->u.k6.fld.tcr5.fbt = cm_object_get_child_by_name(state->u.k6.reg.tcr5, "FBT");
    state->u.k6.fld.tcr5.w0w = cm_object_get_child_by_name(state->u.k6.reg.tcr5, "W0W");
    state->u.k6.fld.tcr5.wnw = cm_object_get_child_by_name(state->u.k6.reg.tcr5, "WNW");
    // TDR0 bitfields.
    state->u.k6.fld.tdr[0].tdr = cm_object_get_child_by_name(state->u.k6.reg.tdr[0], "TDR");
    // TDR1 bitfields.
    state->u.k6.fld.tdr[1].tdr = cm_object_get_child_by_name(state->u.k6.reg.tdr[1], "TDR");
    // TFR0 bitfields.
    state->u.k6.fld.tfr[0].rfp = cm_object_get_child_by_name(state->u.k6.reg.tfr[0], "RFP");
    state->u.k6.fld.tfr[0].wfp = cm_object_get_child_by_name(state->u.k6.reg.tfr[0], "WFP");
    // TFR1 bitfields.
    state->u.k6.fld.tfr[1].rfp = cm_object_get_child_by_name(state->u.k6.reg.tfr[1], "RFP");
    state->u.k6.fld.tfr[1].wfp = cm_object_get_child_by_name(state->u.k6.reg.tfr[1], "WFP");

    // TMR bitfields.
    state->u.k6.fld.tmr.twm = cm_object_get_child_by_name(state->u.k6.reg.tmr, "TWM");

    // RCSR bitfields.
    state->u.k6.fld.rcsr.frde = cm_object_get_child_by_name(state->u.k6.reg.rcsr, "FRDE");
    state->u.k6.fld.rcsr.fwde = cm_object_get_child_by_name(state->u.k6.reg.rcsr, "FWDE");
    state->u.k6.fld.rcsr.frie = cm_object_get_child_by_name(state->u.k6.reg.rcsr, "FRIE");
    state->u.k6.fld.rcsr.fwie = cm_object_get_child_by_name(state->u.k6.reg.rcsr, "FWIE");
    state->u.k6.fld.rcsr.feie = cm_object_get_child_by_name(state->u.k6.reg.rcsr, "FEIE");
    state->u.k6.fld.rcsr.seie = cm_object_get_child_by_name(state->u.k6.reg.rcsr, "SEIE");
    state->u.k6.fld.rcsr.wsie = cm_object_get_child_by_name(state->u.k6.reg.rcsr, "WSIE");
    state->u.k6.fld.rcsr.frf = cm_object_get_child_by_name(state->u.k6.reg.rcsr, "FRF");
    state->u.k6.fld.rcsr.fwf = cm_object_get_child_by_name(state->u.k6.reg.rcsr, "FWF");
    state->u.k6.fld.rcsr.fef = cm_object_get_child_by_name(state->u.k6.reg.rcsr, "FEF");
    state->u.k6.fld.rcsr.sef = cm_object_get_child_by_name(state->u.k6.reg.rcsr, "SEF");
    state->u.k6.fld.rcsr.wsf = cm_object_get_child_by_name(state->u.k6.reg.rcsr, "WSF");
    state->u.k6.fld.rcsr.sr = cm_object_get_child_by_name(state->u.k6.reg.rcsr, "SR");
    state->u.k6.fld.rcsr.fr = cm_object_get_child_by_name(state->u.k6.reg.rcsr, "FR");
    state->u.k6.fld.rcsr.bce = cm_object_get_child_by_name(state->u.k6.reg.rcsr, "BCE");
    state->u.k6.fld.rcsr.dbge = cm_object_get_child_by_name(state->u.k6.reg.rcsr, "DBGE");
    state->u.k6.fld.rcsr.stope = cm_object_get_child_by_name(state->u.k6.reg.rcsr, "STOPE");
    state->u.k6.fld.rcsr.re = cm_object_get_child_by_name(state->u.k6.reg.rcsr, "RE");

    // RCR1 bitfields.
    state->u.k6.fld.rcr1.rfw = cm_object_get_child_by_name(state->u.k6.reg.rcr1, "RFW");

    // RCR2 bitfields.
    state->u.k6.fld.rcr2.div = cm_object_get_child_by_name(state->u.k6.reg.rcr2, "DIV");
    state->u.k6.fld.rcr2.bcd = cm_object_get_child_by_name(state->u.k6.reg.rcr2, "BCD");
    state->u.k6.fld.rcr2.bcp = cm_object_get_child_by_name(state->u.k6.reg.rcr2, "BCP");
    state->u.k6.fld.rcr2.msel = cm_object_get_child_by_name(state->u.k6.reg.rcr2, "MSEL");
    state->u.k6.fld.rcr2.bci = cm_object_get_child_by_name(state->u.k6.reg.rcr2, "BCI");
    state->u.k6.fld.rcr2.bcs = cm_object_get_child_by_name(state->u.k6.reg.rcr2, "BCS");
    state->u.k6.fld.rcr2.sync = cm_object_get_child_by_name(state->u.k6.reg.rcr2, "SYNC");

    // RCR3 bitfields.
    state->u.k6.fld.rcr3.wdfl = cm_object_get_child_by_name(state->u.k6.reg.rcr3, "WDFL");
    state->u.k6.fld.rcr3.rce = cm_object_get_child_by_name(state->u.k6.reg.rcr3, "RCE");

    // RCR4 bitfields.
    state->u.k6.fld.rcr4.fsd = cm_object_get_child_by_name(state->u.k6.reg.rcr4, "FSD");
    state->u.k6.fld.rcr4.fsp = cm_object_get_child_by_name(state->u.k6.reg.rcr4, "FSP");
    state->u.k6.fld.rcr4.fse = cm_object_get_child_by_name(state->u.k6.reg.rcr4, "FSE");
    state->u.k6.fld.rcr4.mf = cm_object_get_child_by_name(state->u.k6.reg.rcr4, "MF");
    state->u.k6.fld.rcr4.sywd = cm_object_get_child_by_name(state->u.k6.reg.rcr4, "SYWD");
    state->u.k6.fld.rcr4.frsz = cm_object_get_child_by_name(state->u.k6.reg.rcr4, "FRSZ");

    // RCR5 bitfields.
    state->u.k6.fld.rcr5.fbt = cm_object_get_child_by_name(state->u.k6.reg.rcr5, "FBT");
    state->u.k6.fld.rcr5.w0w = cm_object_get_child_by_name(state->u.k6.reg.rcr5, "W0W");
    state->u.k6.fld.rcr5.wnw = cm_object_get_child_by_name(state->u.k6.reg.rcr5, "WNW");
    // RDR0 bitfields.
    state->u.k6.fld.rdr[0].rdr = cm_object_get_child_by_name(state->u.k6.reg.rdr[0], "RDR");
    // RDR1 bitfields.
    state->u.k6.fld.rdr[1].rdr = cm_object_get_child_by_name(state->u.k6.reg.rdr[1], "RDR");
    // RFR0 bitfields.
    state->u.k6.fld.rfr[0].rfp = cm_object_get_child_by_name(state->u.k6.reg.rfr[0], "RFP");
    state->u.k6.fld.rfr[0].wfp = cm_object_get_child_by_name(state->u.k6.reg.rfr[0], "WFP");
    // RFR1 bitfields.
    state->u.k6.fld.rfr[1].rfp = cm_object_get_child_by_name(state->u.k6.reg.rfr[1], "RFP");
    state->u.k6.fld.rfr[1].wfp = cm_object_get_child_by_name(state->u.k6.reg.rfr[1], "WFP");

    // RMR bitfields.
    state->u.k6.fld.rmr.rwm = cm_object_get_child_by_name(state->u.k6.reg.rmr, "RWM");

    // MCR bitfields.
    state->u.k6.fld.mcr.mics = cm_object_get_child_by_name(state->u.k6.reg.mcr, "MICS");
    state->u.k6.fld.mcr.moe = cm_object_get_child_by_name(state->u.k6.reg.mcr, "MOE");
    state->u.k6.fld.mcr.duf = cm_object_get_child_by_name(state->u.k6.reg.mcr, "DUF");

    // MDR bitfields.
    state->u.k6.fld.mdr.divide = cm_object_get_child_by_name(state->u.k6.reg.mdr, "DIVIDE");
    state->u.k6.fld.mdr.fract = cm_object_get_child_by_name(state->u.k6.reg.mdr, "FRACT");
}

// ----- 8< ----- 8< -----  8< ----- 8< ----- 8< ----- 8< ----- 8< -----

// ----- Private --------------------------------------------------------------

#if 0
static peripheral_register_t kinetis_i2s_xxx_pre_write_callback(Object *reg,
        Object *periph, uint32_t addr, uint32_t offset, unsigned size,
        peripheral_register_t value, peripheral_register_t full_value)
{
    KinetisI2SState *state = KINETIS_I2S_STATE(periph);

    peripheral_register_t prev_value = peripheral_register_get_raw_prev_value(reg);

    // TODO: Add code to adjust the value (like applying some masks,
    // for example prevent setting interrupts not enabled).
    // Also process cleared/set by write 1/0 bits.
    // The returned value will be stored in the register value.

    return full_value;
}

static void kinetis_i2s_xxx_post_write_callback(Object *reg, Object *periph,
        uint32_t addr, uint32_t offset, unsigned size,
        peripheral_register_t value, peripheral_register_t full_value)
{
    KinetisI2SState *state = KINETIS_I2S_STATE(periph);

    peripheral_register_t prev_value = peripheral_register_get_raw_prev_value(reg);
    // The new register value is full_value, the old one is prev_value.

    // TODO: Add code to send the value to the consumer.
}

static peripheral_register_t kinetis_i2s_xxx_pre_read_callback(Object *reg,
        Object *periph, uint32_t addr, uint32_t offset, unsigned size)
{
    KinetisI2SState *state = KINETIS_I2S_STATE(periph);

    peripheral_register_t value = 0;

    // Add code to get the value from the producer, and return it.

    // This value, possibly masked, will be stored in the register
    // and returned when the register is read.
    return value;
}

static void kinetis_i2s_xxx_post_read_callback(Object *reg, Object *periph,
        uint32_t addr, uint32_t offset, unsigned size)
{
    KinetisI2SState *state = KINETIS_I2S_STATE(periph);

    peripheral_register_t value = peripheral_register_get_raw_value(reg);

    // TODO: add code to perform the post read actions, like clearing some bits.
}
#endif

// ----------------------------------------------------------------------------

// TODO: remove this if the peripheral is always enabled.
static bool kinetis_i2s_is_enabled(Object *obj)
{
    KinetisI2SState *state = KINETIS_I2S_STATE(obj);

    if (register_bitfield_is_non_zero(state->enabling_bit)) {
        return true; // Positive logic, bit == 1 means enabled.
    }

    // Not enabled
    return false;
}

static void kinetis_i2s_instance_init_callback(Object *obj)
{
    qemu_log_function_name();

    KinetisI2SState *state = KINETIS_I2S_STATE(obj);

    // Capabilities are not yet available.

    cm_object_property_add_int(obj, "port-index",
            (const int *) &state->port_index);
    state->port_index = KINETIS_PORT_I2S_UNDEFINED;

    // TODO: remove this if the peripheral is always enabled.
    state->enabling_bit = NULL;
    
    // TODO: Add code to initialise all members.
}

static void kinetis_i2s_realize_callback(DeviceState *dev, Error **errp)
{
    qemu_log_function_name();

    // Call parent realize().
    if (!cm_device_parent_realize(dev, errp, TYPE_KINETIS_I2S)) {
        return;
    }

    KinetisMCUState *mcu = kinetis_mcu_get();
    CortexMState *cm_state = CORTEXM_MCU_STATE(mcu);

    KinetisI2SState *state = KINETIS_I2S_STATE(dev);
    // First thing first: get capabilities from MCU, needed everywhere.
    state->capabilities = mcu->capabilities;

    // Also keep a local pointer, to access them easier.
    const KinetisCapabilities *capabilities = state->capabilities;
    assert(capabilities != NULL);

    Object *obj = OBJECT(dev);

    const char *periph_name = "I2S";

    svd_set_peripheral_address_block(cm_state->svd_json, periph_name, obj);
    peripheral_create_memory_region(obj);

    // TODO: remove this if the peripheral is always enabled.
    char enabling_bit_name[KINETIS_RCC_SIZEOF_ENABLING_BITFIELD];

    switch (capabilities->family) {
    case KINETIS_FAMILY_K6:


            mk64f12_i2s_create_objects(obj, cm_state->svd_json, periph_name);

            // TODO: add actions.
            // cm_object_property_set_str(state->u.k6.fld.xxx.fff, "GGG", "follows");
            // cm_object_property_set_str(state->u.k6.fld.xxx.fff, "GGG", "cleared-by");

            // TODO: add callbacks.
            // peripheral_register_set_pre_read(state->k6.reg.xxx, &kinetis_i2s_xxx_pre_read_callback);
            // peripheral_register_set_post_read(state->k6.reg.xxx, &kinetis_i2s_xxx_post_read_callback);
            // peripheral_register_set_pre_read(state->k6.reg.xxx, &kinetis_i2s_xxx_pret_read_callback);
            // peripheral_register_set_post_write(state->k6.reg.xxx, &kinetis_i2s_xxx_post_write_callback);

            // TODO: add interrupts.

            // TODO: remove this if the peripheral is always enabled.
            snprintf(enabling_bit_name, sizeof(enabling_bit_name) - 1,
                DEVICE_PATH_KINETIS_RCC "/AHB1ENR/I2S%dEN",
                1 + state->port_index - KINETIS_PORT_I2S1);


        break;

    default:
        assert(false);
        break;
    }

    // TODO: remove this if the peripheral is always enabled.
    state->enabling_bit = OBJECT(cm_device_by_name(enabling_bit_name));

    peripheral_prepare_registers(obj);
}

static void kinetis_i2s_reset_callback(DeviceState *dev)
{
    qemu_log_function_name();

    // Call parent reset(); this will reset all children registers.
    cm_device_parent_reset(dev, TYPE_KINETIS_I2S);
}

static void kinetis_i2s_class_init_callback(ObjectClass *klass, void *data)
{
    DeviceClass *dc = DEVICE_CLASS(klass);

    dc->reset = kinetis_i2s_reset_callback;
    dc->realize = kinetis_i2s_realize_callback;

    // TODO: remove this if the peripheral is always enabled.
    PeripheralClass *per_class = PERIPHERAL_CLASS(klass);
    per_class->is_enabled = kinetis_i2s_is_enabled;
}

static const TypeInfo kinetis_i2s_type_info = {
    .name = TYPE_KINETIS_I2S,
    .parent = TYPE_KINETIS_I2S_PARENT,
    .instance_init = kinetis_i2s_instance_init_callback,
    .instance_size = sizeof(KinetisI2SState),
    .class_init = kinetis_i2s_class_init_callback,
    .class_size = sizeof(KinetisI2SClass) };

static void kinetis_i2s_register_types(void)
{
    type_register_static(&kinetis_i2s_type_info);
}

type_init(kinetis_i2s_register_types);

// ----------------------------------------------------------------------------
