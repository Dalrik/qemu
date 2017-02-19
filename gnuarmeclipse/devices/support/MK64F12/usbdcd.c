/*
 * Kinetis - USBDCD (USB Device Charger Detection module) emulation.
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

#include <hw/cortexm/kinetis/usbdcd.h>
#include <hw/cortexm/kinetis/mcu.h>
#include <hw/cortexm/helper.h>
#include <hw/cortexm/svd.h>

// ----- Generated code -------------------------------------------------------
//
// ----- 8< ----- 8< -----  8< ----- 8< ----- 8< ----- 8< ----- 8< -----

// DO NOT EDIT! Automatically generated!
static void mk64f12_usbdcd_create_objects(Object *obj, JSON_Object *svd, const char *name)
{
    KinetisUSBDCDState *state = KINETIS_USBDCD_STATE(obj);

    JSON_Object *periph = svd_get_peripheral_by_name(svd, name);
    svd_add_peripheral_properties_and_children(obj, periph, svd);

    // Registers. 
    state->u.k6.reg.control = cm_object_get_child_by_name(obj, "CONTROL");
    state->u.k6.reg.clock = cm_object_get_child_by_name(obj, "CLOCK");
    state->u.k6.reg.status = cm_object_get_child_by_name(obj, "STATUS");
    state->u.k6.reg.timer0 = cm_object_get_child_by_name(obj, "TIMER0");
    state->u.k6.reg.timer1 = cm_object_get_child_by_name(obj, "TIMER1");
    state->u.k6.reg.timer2_bc11 = cm_object_get_child_by_name(obj, "TIMER2_BC11");
    state->u.k6.reg.timer2_bc12 = cm_object_get_child_by_name(obj, "TIMER2_BC12");

    // CONTROL bitfields.
    state->u.k6.fld.control.iack = cm_object_get_child_by_name(state->u.k6.reg.control, "IACK");
    state->u.k6.fld.control.if_ = cm_object_get_child_by_name(state->u.k6.reg.control, "IF");
    state->u.k6.fld.control.ie = cm_object_get_child_by_name(state->u.k6.reg.control, "IE");
    state->u.k6.fld.control.bc12 = cm_object_get_child_by_name(state->u.k6.reg.control, "BC12");
    state->u.k6.fld.control.start = cm_object_get_child_by_name(state->u.k6.reg.control, "START");
    state->u.k6.fld.control.sr = cm_object_get_child_by_name(state->u.k6.reg.control, "SR");

    // CLOCK bitfields.
    state->u.k6.fld.clock.clock_unit = cm_object_get_child_by_name(state->u.k6.reg.clock, "CLOCK_UNIT");
    state->u.k6.fld.clock.clock_speed = cm_object_get_child_by_name(state->u.k6.reg.clock, "CLOCK_SPEED");

    // STATUS bitfields.
    state->u.k6.fld.status.seq_res = cm_object_get_child_by_name(state->u.k6.reg.status, "SEQ_RES");
    state->u.k6.fld.status.seq_stat = cm_object_get_child_by_name(state->u.k6.reg.status, "SEQ_STAT");
    state->u.k6.fld.status.err = cm_object_get_child_by_name(state->u.k6.reg.status, "ERR");
    state->u.k6.fld.status.to = cm_object_get_child_by_name(state->u.k6.reg.status, "TO");
    state->u.k6.fld.status.active = cm_object_get_child_by_name(state->u.k6.reg.status, "ACTIVE");

    // TIMER0 bitfields.
    state->u.k6.fld.timer0.tunitcon = cm_object_get_child_by_name(state->u.k6.reg.timer0, "TUNITCON");
    state->u.k6.fld.timer0.tseq_init = cm_object_get_child_by_name(state->u.k6.reg.timer0, "TSEQ_INIT");

    // TIMER1 bitfields.
    state->u.k6.fld.timer1.tvdpsrc_on = cm_object_get_child_by_name(state->u.k6.reg.timer1, "TVDPSRC_ON");
    state->u.k6.fld.timer1.tdcd_dbnc = cm_object_get_child_by_name(state->u.k6.reg.timer1, "TDCD_DBNC");

    // TIMER2_BC11 bitfields.
    state->u.k6.fld.timer2_bc11.check_dm = cm_object_get_child_by_name(state->u.k6.reg.timer2_bc11, "CHECK_DM");
    state->u.k6.fld.timer2_bc11.tvdpsrc_con = cm_object_get_child_by_name(state->u.k6.reg.timer2_bc11, "TVDPSRC_CON");

    // TIMER2_BC12 bitfields.
    state->u.k6.fld.timer2_bc12.tvdmsrc_on = cm_object_get_child_by_name(state->u.k6.reg.timer2_bc12, "TVDMSRC_ON");
    state->u.k6.fld.timer2_bc12.twait_after_prd = cm_object_get_child_by_name(state->u.k6.reg.timer2_bc12, "TWAIT_AFTER_PRD");
}

// ----- 8< ----- 8< -----  8< ----- 8< ----- 8< ----- 8< ----- 8< -----

// ----- Private --------------------------------------------------------------

#if 0
static peripheral_register_t kinetis_usbdcd_xxx_pre_write_callback(Object *reg,
        Object *periph, uint32_t addr, uint32_t offset, unsigned size,
        peripheral_register_t value, peripheral_register_t full_value)
{
    KinetisUSBDCDState *state = KINETIS_USBDCD_STATE(periph);

    peripheral_register_t prev_value = peripheral_register_get_raw_prev_value(reg);

    // TODO: Add code to adjust the value (like applying some masks,
    // for example prevent setting interrupts not enabled).
    // Also process cleared/set by write 1/0 bits.
    // The returned value will be stored in the register value.

    return full_value;
}

static void kinetis_usbdcd_xxx_post_write_callback(Object *reg, Object *periph,
        uint32_t addr, uint32_t offset, unsigned size,
        peripheral_register_t value, peripheral_register_t full_value)
{
    KinetisUSBDCDState *state = KINETIS_USBDCD_STATE(periph);

    peripheral_register_t prev_value = peripheral_register_get_raw_prev_value(reg);
    // The new register value is full_value, the old one is prev_value.

    // TODO: Add code to send the value to the consumer.
}

static peripheral_register_t kinetis_usbdcd_xxx_pre_read_callback(Object *reg,
        Object *periph, uint32_t addr, uint32_t offset, unsigned size)
{
    KinetisUSBDCDState *state = KINETIS_USBDCD_STATE(periph);

    peripheral_register_t value = 0;

    // Add code to get the value from the producer, and return it.

    // This value, possibly masked, will be stored in the register
    // and returned when the register is read.
    return value;
}

static void kinetis_usbdcd_xxx_post_read_callback(Object *reg, Object *periph,
        uint32_t addr, uint32_t offset, unsigned size)
{
    KinetisUSBDCDState *state = KINETIS_USBDCD_STATE(periph);

    peripheral_register_t value = peripheral_register_get_raw_value(reg);

    // TODO: add code to perform the post read actions, like clearing some bits.
}
#endif

// ----------------------------------------------------------------------------

// TODO: remove this if the peripheral is always enabled.
static bool kinetis_usbdcd_is_enabled(Object *obj)
{
    KinetisUSBDCDState *state = KINETIS_USBDCD_STATE(obj);

    if (register_bitfield_is_non_zero(state->enabling_bit)) {
        return true; // Positive logic, bit == 1 means enabled.
    }

    // Not enabled
    return false;
}

static void kinetis_usbdcd_instance_init_callback(Object *obj)
{
    qemu_log_function_name();

    KinetisUSBDCDState *state = KINETIS_USBDCD_STATE(obj);

    // Capabilities are not yet available.

    // TODO: remove this if the peripheral is always enabled.
    state->enabling_bit = NULL;
    
    // TODO: Add code to initialise all members.
}

static void kinetis_usbdcd_realize_callback(DeviceState *dev, Error **errp)
{
    qemu_log_function_name();

    // Call parent realize().
    if (!cm_device_parent_realize(dev, errp, TYPE_KINETIS_USBDCD)) {
        return;
    }

    KinetisMCUState *mcu = kinetis_mcu_get();
    CortexMState *cm_state = CORTEXM_MCU_STATE(mcu);

    KinetisUSBDCDState *state = KINETIS_USBDCD_STATE(dev);
    // First thing first: get capabilities from MCU, needed everywhere.
    state->capabilities = mcu->capabilities;

    // Also keep a local pointer, to access them easier.
    const KinetisCapabilities *capabilities = state->capabilities;
    assert(capabilities != NULL);

    Object *obj = OBJECT(dev);

    const char *periph_name = "USBDCD";

    svd_set_peripheral_address_block(cm_state->svd_json, periph_name, obj);
    peripheral_create_memory_region(obj);

    // TODO: remove this if the peripheral is always enabled.
    char enabling_bit_name[KINETIS_RCC_SIZEOF_ENABLING_BITFIELD];

    switch (capabilities->family) {
    case KINETIS_FAMILY_K6:


            mk64f12_usbdcd_create_objects(obj, cm_state->svd_json, periph_name);

            // TODO: add actions.
            // cm_object_property_set_str(state->u.k6.fld.xxx.fff, "GGG", "follows");
            // cm_object_property_set_str(state->u.k6.fld.xxx.fff, "GGG", "cleared-by");

            // TODO: add callbacks.
            // peripheral_register_set_pre_read(state->k6.reg.xxx, &kinetis_usbdcd_xxx_pre_read_callback);
            // peripheral_register_set_post_read(state->k6.reg.xxx, &kinetis_usbdcd_xxx_post_read_callback);
            // peripheral_register_set_pre_read(state->k6.reg.xxx, &kinetis_usbdcd_xxx_pret_read_callback);
            // peripheral_register_set_post_write(state->k6.reg.xxx, &kinetis_usbdcd_xxx_post_write_callback);

            // TODO: add interrupts.

            // TODO: remove this if the peripheral is always enabled.
            snprintf(enabling_bit_name, sizeof(enabling_bit_name) - 1,
                DEVICE_PATH_KINETIS_RCC "/AHB1ENR/USBDCDEN");


        break;

    default:
        assert(false);
        break;
    }

    // TODO: remove this if the peripheral is always enabled.
    state->enabling_bit = OBJECT(cm_device_by_name(enabling_bit_name));

    peripheral_prepare_registers(obj);
}

static void kinetis_usbdcd_reset_callback(DeviceState *dev)
{
    qemu_log_function_name();

    // Call parent reset(); this will reset all children registers.
    cm_device_parent_reset(dev, TYPE_KINETIS_USBDCD);
}

static void kinetis_usbdcd_class_init_callback(ObjectClass *klass, void *data)
{
    DeviceClass *dc = DEVICE_CLASS(klass);

    dc->reset = kinetis_usbdcd_reset_callback;
    dc->realize = kinetis_usbdcd_realize_callback;

    // TODO: remove this if the peripheral is always enabled.
    PeripheralClass *per_class = PERIPHERAL_CLASS(klass);
    per_class->is_enabled = kinetis_usbdcd_is_enabled;
}

static const TypeInfo kinetis_usbdcd_type_info = {
    .name = TYPE_KINETIS_USBDCD,
    .parent = TYPE_KINETIS_USBDCD_PARENT,
    .instance_init = kinetis_usbdcd_instance_init_callback,
    .instance_size = sizeof(KinetisUSBDCDState),
    .class_init = kinetis_usbdcd_class_init_callback,
    .class_size = sizeof(KinetisUSBDCDClass) };

static void kinetis_usbdcd_register_types(void)
{
    type_register_static(&kinetis_usbdcd_type_info);
}

type_init(kinetis_usbdcd_register_types);

// ----------------------------------------------------------------------------
