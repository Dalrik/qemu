/*
 * Kinetis - I2C (Inter-Integrated Circuit) emulation.
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

#include <hw/cortexm/kinetis/i2c.h>
#include <hw/cortexm/kinetis/mcu.h>
#include <hw/cortexm/helper.h>
#include <hw/cortexm/svd.h>

// ----- Generated code -------------------------------------------------------
//
// ----- 8< ----- 8< -----  8< ----- 8< ----- 8< ----- 8< ----- 8< -----

// DO NOT EDIT! Automatically generated!
static void mk64f12_i2c_create_objects(Object *obj, JSON_Object *svd, const char *name)
{
    KinetisI2CState *state = KINETIS_I2C_STATE(obj);

    JSON_Object *periph = svd_get_peripheral_by_name(svd, name);
    svd_add_peripheral_properties_and_children(obj, periph, svd);

    // Registers. 
    state->u.k6.reg.a1 = cm_object_get_child_by_name(obj, "A1");
    state->u.k6.reg.f = cm_object_get_child_by_name(obj, "F");
    state->u.k6.reg.c1 = cm_object_get_child_by_name(obj, "C1");
    state->u.k6.reg.s = cm_object_get_child_by_name(obj, "S");
    state->u.k6.reg.d = cm_object_get_child_by_name(obj, "D");
    state->u.k6.reg.c2 = cm_object_get_child_by_name(obj, "C2");
    state->u.k6.reg.flt = cm_object_get_child_by_name(obj, "FLT");
    state->u.k6.reg.ra = cm_object_get_child_by_name(obj, "RA");
    state->u.k6.reg.smb = cm_object_get_child_by_name(obj, "SMB");
    state->u.k6.reg.a2 = cm_object_get_child_by_name(obj, "A2");
    state->u.k6.reg.slth = cm_object_get_child_by_name(obj, "SLTH");
    state->u.k6.reg.sltl = cm_object_get_child_by_name(obj, "SLTL");

    // A1 bitfields.
    state->u.k6.fld.a1.ad = cm_object_get_child_by_name(state->u.k6.reg.a1, "AD");

    // F bitfields.
    state->u.k6.fld.f.icr = cm_object_get_child_by_name(state->u.k6.reg.f, "ICR");
    state->u.k6.fld.f.mult = cm_object_get_child_by_name(state->u.k6.reg.f, "MULT");

    // C1 bitfields.
    state->u.k6.fld.c1.dmaen = cm_object_get_child_by_name(state->u.k6.reg.c1, "DMAEN");
    state->u.k6.fld.c1.wuen = cm_object_get_child_by_name(state->u.k6.reg.c1, "WUEN");
    state->u.k6.fld.c1.rsta = cm_object_get_child_by_name(state->u.k6.reg.c1, "RSTA");
    state->u.k6.fld.c1.txak = cm_object_get_child_by_name(state->u.k6.reg.c1, "TXAK");
    state->u.k6.fld.c1.tx = cm_object_get_child_by_name(state->u.k6.reg.c1, "TX");
    state->u.k6.fld.c1.mst = cm_object_get_child_by_name(state->u.k6.reg.c1, "MST");
    state->u.k6.fld.c1.iicie = cm_object_get_child_by_name(state->u.k6.reg.c1, "IICIE");
    state->u.k6.fld.c1.iicen = cm_object_get_child_by_name(state->u.k6.reg.c1, "IICEN");

    // S bitfields.
    state->u.k6.fld.s.rxak = cm_object_get_child_by_name(state->u.k6.reg.s, "RXAK");
    state->u.k6.fld.s.iicif = cm_object_get_child_by_name(state->u.k6.reg.s, "IICIF");
    state->u.k6.fld.s.srw = cm_object_get_child_by_name(state->u.k6.reg.s, "SRW");
    state->u.k6.fld.s.ram = cm_object_get_child_by_name(state->u.k6.reg.s, "RAM");
    state->u.k6.fld.s.arbl = cm_object_get_child_by_name(state->u.k6.reg.s, "ARBL");
    state->u.k6.fld.s.busy = cm_object_get_child_by_name(state->u.k6.reg.s, "BUSY");
    state->u.k6.fld.s.iaas = cm_object_get_child_by_name(state->u.k6.reg.s, "IAAS");
    state->u.k6.fld.s.tcf = cm_object_get_child_by_name(state->u.k6.reg.s, "TCF");

    // D bitfields.
    state->u.k6.fld.d.data = cm_object_get_child_by_name(state->u.k6.reg.d, "DATA");

    // C2 bitfields.
    state->u.k6.fld.c2.ad = cm_object_get_child_by_name(state->u.k6.reg.c2, "AD");
    state->u.k6.fld.c2.rmen = cm_object_get_child_by_name(state->u.k6.reg.c2, "RMEN");
    state->u.k6.fld.c2.sbrc = cm_object_get_child_by_name(state->u.k6.reg.c2, "SBRC");
    state->u.k6.fld.c2.hdrs = cm_object_get_child_by_name(state->u.k6.reg.c2, "HDRS");
    state->u.k6.fld.c2.adext = cm_object_get_child_by_name(state->u.k6.reg.c2, "ADEXT");
    state->u.k6.fld.c2.gcaen = cm_object_get_child_by_name(state->u.k6.reg.c2, "GCAEN");

    // FLT bitfields.
    state->u.k6.fld.flt.flt = cm_object_get_child_by_name(state->u.k6.reg.flt, "FLT");
    state->u.k6.fld.flt.startf = cm_object_get_child_by_name(state->u.k6.reg.flt, "STARTF");
    state->u.k6.fld.flt.ssie = cm_object_get_child_by_name(state->u.k6.reg.flt, "SSIE");
    state->u.k6.fld.flt.stopf = cm_object_get_child_by_name(state->u.k6.reg.flt, "STOPF");
    state->u.k6.fld.flt.shen = cm_object_get_child_by_name(state->u.k6.reg.flt, "SHEN");

    // RA bitfields.
    state->u.k6.fld.ra.rad = cm_object_get_child_by_name(state->u.k6.reg.ra, "RAD");

    // SMB bitfields.
    state->u.k6.fld.smb.shtf2ie = cm_object_get_child_by_name(state->u.k6.reg.smb, "SHTF2IE");
    state->u.k6.fld.smb.shtf2 = cm_object_get_child_by_name(state->u.k6.reg.smb, "SHTF2");
    state->u.k6.fld.smb.shtf1 = cm_object_get_child_by_name(state->u.k6.reg.smb, "SHTF1");
    state->u.k6.fld.smb.sltf = cm_object_get_child_by_name(state->u.k6.reg.smb, "SLTF");
    state->u.k6.fld.smb.tcksel = cm_object_get_child_by_name(state->u.k6.reg.smb, "TCKSEL");
    state->u.k6.fld.smb.siicaen = cm_object_get_child_by_name(state->u.k6.reg.smb, "SIICAEN");
    state->u.k6.fld.smb.alerten = cm_object_get_child_by_name(state->u.k6.reg.smb, "ALERTEN");
    state->u.k6.fld.smb.fack = cm_object_get_child_by_name(state->u.k6.reg.smb, "FACK");

    // A2 bitfields.
    state->u.k6.fld.a2.sad = cm_object_get_child_by_name(state->u.k6.reg.a2, "SAD");

    // SLTH bitfields.
    state->u.k6.fld.slth.sslt = cm_object_get_child_by_name(state->u.k6.reg.slth, "SSLT");

    // SLTL bitfields.
    state->u.k6.fld.sltl.sslt = cm_object_get_child_by_name(state->u.k6.reg.sltl, "SSLT");
}

// ----- 8< ----- 8< -----  8< ----- 8< ----- 8< ----- 8< ----- 8< -----

// ----- Private --------------------------------------------------------------

#if 0
static peripheral_register_t kinetis_i2c_xxx_pre_write_callback(Object *reg,
        Object *periph, uint32_t addr, uint32_t offset, unsigned size,
        peripheral_register_t value, peripheral_register_t full_value)
{
    KinetisI2CState *state = KINETIS_I2C_STATE(periph);

    peripheral_register_t prev_value = peripheral_register_get_raw_prev_value(reg);

    // TODO: Add code to adjust the value (like applying some masks,
    // for example prevent setting interrupts not enabled).
    // Also process cleared/set by write 1/0 bits.
    // The returned value will be stored in the register value.

    return full_value;
}

static void kinetis_i2c_xxx_post_write_callback(Object *reg, Object *periph,
        uint32_t addr, uint32_t offset, unsigned size,
        peripheral_register_t value, peripheral_register_t full_value)
{
    KinetisI2CState *state = KINETIS_I2C_STATE(periph);

    peripheral_register_t prev_value = peripheral_register_get_raw_prev_value(reg);
    // The new register value is full_value, the old one is prev_value.

    // TODO: Add code to send the value to the consumer.
}

static peripheral_register_t kinetis_i2c_xxx_pre_read_callback(Object *reg,
        Object *periph, uint32_t addr, uint32_t offset, unsigned size)
{
    KinetisI2CState *state = KINETIS_I2C_STATE(periph);

    peripheral_register_t value = 0;

    // Add code to get the value from the producer, and return it.

    // This value, possibly masked, will be stored in the register
    // and returned when the register is read.
    return value;
}

static void kinetis_i2c_xxx_post_read_callback(Object *reg, Object *periph,
        uint32_t addr, uint32_t offset, unsigned size)
{
    KinetisI2CState *state = KINETIS_I2C_STATE(periph);

    peripheral_register_t value = peripheral_register_get_raw_value(reg);

    // TODO: add code to perform the post read actions, like clearing some bits.
}
#endif

// ----------------------------------------------------------------------------

// TODO: remove this if the peripheral is always enabled.
static bool kinetis_i2c_is_enabled(Object *obj)
{
    KinetisI2CState *state = KINETIS_I2C_STATE(obj);

    if (register_bitfield_is_non_zero(state->enabling_bit)) {
        return true; // Positive logic, bit == 1 means enabled.
    }

    // Not enabled
    return false;
}

static void kinetis_i2c_instance_init_callback(Object *obj)
{
    qemu_log_function_name();

    KinetisI2CState *state = KINETIS_I2C_STATE(obj);

    // Capabilities are not yet available.

    cm_object_property_add_int(obj, "port-index",
            (const int *) &state->port_index);
    state->port_index = KINETIS_PORT_I2C_UNDEFINED;

    // TODO: remove this if the peripheral is always enabled.
    state->enabling_bit = NULL;
    
    // TODO: Add code to initialise all members.
}

static void kinetis_i2c_realize_callback(DeviceState *dev, Error **errp)
{
    qemu_log_function_name();

    // Call parent realize().
    if (!cm_device_parent_realize(dev, errp, TYPE_KINETIS_I2C)) {
        return;
    }

    KinetisMCUState *mcu = kinetis_mcu_get();
    CortexMState *cm_state = CORTEXM_MCU_STATE(mcu);

    KinetisI2CState *state = KINETIS_I2C_STATE(dev);
    // First thing first: get capabilities from MCU, needed everywhere.
    state->capabilities = mcu->capabilities;

    // Also keep a local pointer, to access them easier.
    const KinetisCapabilities *capabilities = state->capabilities;
    assert(capabilities != NULL);

    Object *obj = OBJECT(dev);

    const char *periph_name = "I2C";

    svd_set_peripheral_address_block(cm_state->svd_json, periph_name, obj);
    peripheral_create_memory_region(obj);

    // TODO: remove this if the peripheral is always enabled.
    char enabling_bit_name[KINETIS_RCC_SIZEOF_ENABLING_BITFIELD];

    switch (capabilities->family) {
    case KINETIS_FAMILY_K6:


            mk64f12_i2c_create_objects(obj, cm_state->svd_json, periph_name);

            // TODO: add actions.
            // cm_object_property_set_str(state->u.k6.fld.xxx.fff, "GGG", "follows");
            // cm_object_property_set_str(state->u.k6.fld.xxx.fff, "GGG", "cleared-by");

            // TODO: add callbacks.
            // peripheral_register_set_pre_read(state->k6.reg.xxx, &kinetis_i2c_xxx_pre_read_callback);
            // peripheral_register_set_post_read(state->k6.reg.xxx, &kinetis_i2c_xxx_post_read_callback);
            // peripheral_register_set_pre_read(state->k6.reg.xxx, &kinetis_i2c_xxx_pret_read_callback);
            // peripheral_register_set_post_write(state->k6.reg.xxx, &kinetis_i2c_xxx_post_write_callback);

            // TODO: add interrupts.

            // TODO: remove this if the peripheral is always enabled.
            snprintf(enabling_bit_name, sizeof(enabling_bit_name) - 1,
                DEVICE_PATH_KINETIS_RCC "/AHB1ENR/I2C%dEN",
                1 + state->port_index - KINETIS_PORT_I2C1);


        break;

    default:
        assert(false);
        break;
    }

    // TODO: remove this if the peripheral is always enabled.
    state->enabling_bit = OBJECT(cm_device_by_name(enabling_bit_name));

    peripheral_prepare_registers(obj);
}

static void kinetis_i2c_reset_callback(DeviceState *dev)
{
    qemu_log_function_name();

    // Call parent reset(); this will reset all children registers.
    cm_device_parent_reset(dev, TYPE_KINETIS_I2C);
}

static void kinetis_i2c_class_init_callback(ObjectClass *klass, void *data)
{
    DeviceClass *dc = DEVICE_CLASS(klass);

    dc->reset = kinetis_i2c_reset_callback;
    dc->realize = kinetis_i2c_realize_callback;

    // TODO: remove this if the peripheral is always enabled.
    PeripheralClass *per_class = PERIPHERAL_CLASS(klass);
    per_class->is_enabled = kinetis_i2c_is_enabled;
}

static const TypeInfo kinetis_i2c_type_info = {
    .name = TYPE_KINETIS_I2C,
    .parent = TYPE_KINETIS_I2C_PARENT,
    .instance_init = kinetis_i2c_instance_init_callback,
    .instance_size = sizeof(KinetisI2CState),
    .class_init = kinetis_i2c_class_init_callback,
    .class_size = sizeof(KinetisI2CClass) };

static void kinetis_i2c_register_types(void)
{
    type_register_static(&kinetis_i2c_type_info);
}

type_init(kinetis_i2c_register_types);

// ----------------------------------------------------------------------------
