/*
 * Kinetis - RTC (Secure Real Time Clock) emulation.
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

#include <hw/cortexm/kinetis/rtc.h>
#include <hw/cortexm/kinetis/mcu.h>
#include <hw/cortexm/helper.h>
#include <hw/cortexm/svd.h>

// ----- Generated code -------------------------------------------------------
//
// ----- 8< ----- 8< -----  8< ----- 8< ----- 8< ----- 8< ----- 8< -----

// DO NOT EDIT! Automatically generated!
static void mk64f12_rtc_create_objects(Object *obj, JSON_Object *svd, const char *name)
{
    KinetisRTCState *state = KINETIS_RTC_STATE(obj);

    JSON_Object *periph = svd_get_peripheral_by_name(svd, name);
    svd_add_peripheral_properties_and_children(obj, periph, svd);

    // Registers. 
    state->u.k6.reg.tsr = cm_object_get_child_by_name(obj, "TSR");
    state->u.k6.reg.tpr = cm_object_get_child_by_name(obj, "TPR");
    state->u.k6.reg.tar = cm_object_get_child_by_name(obj, "TAR");
    state->u.k6.reg.tcr = cm_object_get_child_by_name(obj, "TCR");
    state->u.k6.reg.cr = cm_object_get_child_by_name(obj, "CR");
    state->u.k6.reg.sr = cm_object_get_child_by_name(obj, "SR");
    state->u.k6.reg.lr = cm_object_get_child_by_name(obj, "LR");
    state->u.k6.reg.ier = cm_object_get_child_by_name(obj, "IER");
    state->u.k6.reg.war = cm_object_get_child_by_name(obj, "WAR");
    state->u.k6.reg.rar = cm_object_get_child_by_name(obj, "RAR");

    // TSR bitfields.
    state->u.k6.fld.tsr.tsr = cm_object_get_child_by_name(state->u.k6.reg.tsr, "TSR");

    // TPR bitfields.
    state->u.k6.fld.tpr.tpr = cm_object_get_child_by_name(state->u.k6.reg.tpr, "TPR");

    // TAR bitfields.
    state->u.k6.fld.tar.tar = cm_object_get_child_by_name(state->u.k6.reg.tar, "TAR");

    // TCR bitfields.
    state->u.k6.fld.tcr.tcr = cm_object_get_child_by_name(state->u.k6.reg.tcr, "TCR");
    state->u.k6.fld.tcr.cir = cm_object_get_child_by_name(state->u.k6.reg.tcr, "CIR");
    state->u.k6.fld.tcr.tcv = cm_object_get_child_by_name(state->u.k6.reg.tcr, "TCV");
    state->u.k6.fld.tcr.cic = cm_object_get_child_by_name(state->u.k6.reg.tcr, "CIC");

    // CR bitfields.
    state->u.k6.fld.cr.swr = cm_object_get_child_by_name(state->u.k6.reg.cr, "SWR");
    state->u.k6.fld.cr.wpe = cm_object_get_child_by_name(state->u.k6.reg.cr, "WPE");
    state->u.k6.fld.cr.sup = cm_object_get_child_by_name(state->u.k6.reg.cr, "SUP");
    state->u.k6.fld.cr.um = cm_object_get_child_by_name(state->u.k6.reg.cr, "UM");
    state->u.k6.fld.cr.wps = cm_object_get_child_by_name(state->u.k6.reg.cr, "WPS");
    state->u.k6.fld.cr.osce = cm_object_get_child_by_name(state->u.k6.reg.cr, "OSCE");
    state->u.k6.fld.cr.clko = cm_object_get_child_by_name(state->u.k6.reg.cr, "CLKO");
    state->u.k6.fld.cr.sc16p = cm_object_get_child_by_name(state->u.k6.reg.cr, "SC16P");
    state->u.k6.fld.cr.sc8p = cm_object_get_child_by_name(state->u.k6.reg.cr, "SC8P");
    state->u.k6.fld.cr.sc4p = cm_object_get_child_by_name(state->u.k6.reg.cr, "SC4P");
    state->u.k6.fld.cr.sc2p = cm_object_get_child_by_name(state->u.k6.reg.cr, "SC2P");

    // SR bitfields.
    state->u.k6.fld.sr.tif = cm_object_get_child_by_name(state->u.k6.reg.sr, "TIF");
    state->u.k6.fld.sr.tof = cm_object_get_child_by_name(state->u.k6.reg.sr, "TOF");
    state->u.k6.fld.sr.taf = cm_object_get_child_by_name(state->u.k6.reg.sr, "TAF");
    state->u.k6.fld.sr.tce = cm_object_get_child_by_name(state->u.k6.reg.sr, "TCE");

    // LR bitfields.
    state->u.k6.fld.lr.tcl = cm_object_get_child_by_name(state->u.k6.reg.lr, "TCL");
    state->u.k6.fld.lr.crl = cm_object_get_child_by_name(state->u.k6.reg.lr, "CRL");
    state->u.k6.fld.lr.srl = cm_object_get_child_by_name(state->u.k6.reg.lr, "SRL");
    state->u.k6.fld.lr.lrl = cm_object_get_child_by_name(state->u.k6.reg.lr, "LRL");

    // IER bitfields.
    state->u.k6.fld.ier.tiie = cm_object_get_child_by_name(state->u.k6.reg.ier, "TIIE");
    state->u.k6.fld.ier.toie = cm_object_get_child_by_name(state->u.k6.reg.ier, "TOIE");
    state->u.k6.fld.ier.taie = cm_object_get_child_by_name(state->u.k6.reg.ier, "TAIE");
    state->u.k6.fld.ier.tsie = cm_object_get_child_by_name(state->u.k6.reg.ier, "TSIE");
    state->u.k6.fld.ier.wpon = cm_object_get_child_by_name(state->u.k6.reg.ier, "WPON");

    // WAR bitfields.
    state->u.k6.fld.war.tsrw = cm_object_get_child_by_name(state->u.k6.reg.war, "TSRW");
    state->u.k6.fld.war.tprw = cm_object_get_child_by_name(state->u.k6.reg.war, "TPRW");
    state->u.k6.fld.war.tarw = cm_object_get_child_by_name(state->u.k6.reg.war, "TARW");
    state->u.k6.fld.war.tcrw = cm_object_get_child_by_name(state->u.k6.reg.war, "TCRW");
    state->u.k6.fld.war.crw = cm_object_get_child_by_name(state->u.k6.reg.war, "CRW");
    state->u.k6.fld.war.srw = cm_object_get_child_by_name(state->u.k6.reg.war, "SRW");
    state->u.k6.fld.war.lrw = cm_object_get_child_by_name(state->u.k6.reg.war, "LRW");
    state->u.k6.fld.war.ierw = cm_object_get_child_by_name(state->u.k6.reg.war, "IERW");

    // RAR bitfields.
    state->u.k6.fld.rar.tsrr = cm_object_get_child_by_name(state->u.k6.reg.rar, "TSRR");
    state->u.k6.fld.rar.tprr = cm_object_get_child_by_name(state->u.k6.reg.rar, "TPRR");
    state->u.k6.fld.rar.tarr = cm_object_get_child_by_name(state->u.k6.reg.rar, "TARR");
    state->u.k6.fld.rar.tcrr = cm_object_get_child_by_name(state->u.k6.reg.rar, "TCRR");
    state->u.k6.fld.rar.crr = cm_object_get_child_by_name(state->u.k6.reg.rar, "CRR");
    state->u.k6.fld.rar.srr = cm_object_get_child_by_name(state->u.k6.reg.rar, "SRR");
    state->u.k6.fld.rar.lrr = cm_object_get_child_by_name(state->u.k6.reg.rar, "LRR");
    state->u.k6.fld.rar.ierr = cm_object_get_child_by_name(state->u.k6.reg.rar, "IERR");
}

// ----- 8< ----- 8< -----  8< ----- 8< ----- 8< ----- 8< ----- 8< -----

// ----- Private --------------------------------------------------------------

#if 0
static peripheral_register_t kinetis_rtc_xxx_pre_write_callback(Object *reg,
        Object *periph, uint32_t addr, uint32_t offset, unsigned size,
        peripheral_register_t value, peripheral_register_t full_value)
{
    KinetisRTCState *state = KINETIS_RTC_STATE(periph);

    peripheral_register_t prev_value = peripheral_register_get_raw_prev_value(reg);

    // TODO: Add code to adjust the value (like applying some masks,
    // for example prevent setting interrupts not enabled).
    // Also process cleared/set by write 1/0 bits.
    // The returned value will be stored in the register value.

    return full_value;
}

static void kinetis_rtc_xxx_post_write_callback(Object *reg, Object *periph,
        uint32_t addr, uint32_t offset, unsigned size,
        peripheral_register_t value, peripheral_register_t full_value)
{
    KinetisRTCState *state = KINETIS_RTC_STATE(periph);

    peripheral_register_t prev_value = peripheral_register_get_raw_prev_value(reg);
    // The new register value is full_value, the old one is prev_value.

    // TODO: Add code to send the value to the consumer.
}

static peripheral_register_t kinetis_rtc_xxx_pre_read_callback(Object *reg,
        Object *periph, uint32_t addr, uint32_t offset, unsigned size)
{
    KinetisRTCState *state = KINETIS_RTC_STATE(periph);

    peripheral_register_t value = 0;

    // Add code to get the value from the producer, and return it.

    // This value, possibly masked, will be stored in the register
    // and returned when the register is read.
    return value;
}

static void kinetis_rtc_xxx_post_read_callback(Object *reg, Object *periph,
        uint32_t addr, uint32_t offset, unsigned size)
{
    KinetisRTCState *state = KINETIS_RTC_STATE(periph);

    peripheral_register_t value = peripheral_register_get_raw_value(reg);

    // TODO: add code to perform the post read actions, like clearing some bits.
}
#endif

// ----------------------------------------------------------------------------

// TODO: remove this if the peripheral is always enabled.
static bool kinetis_rtc_is_enabled(Object *obj)
{
    KinetisRTCState *state = KINETIS_RTC_STATE(obj);

    if (register_bitfield_is_non_zero(state->enabling_bit)) {
        return true; // Positive logic, bit == 1 means enabled.
    }

    // Not enabled
    return false;
}

static void kinetis_rtc_instance_init_callback(Object *obj)
{
    qemu_log_function_name();

    KinetisRTCState *state = KINETIS_RTC_STATE(obj);

    // Capabilities are not yet available.

    // TODO: remove this if the peripheral is always enabled.
    state->enabling_bit = NULL;
    
    // TODO: Add code to initialise all members.
}

static void kinetis_rtc_realize_callback(DeviceState *dev, Error **errp)
{
    qemu_log_function_name();

    // Call parent realize().
    if (!cm_device_parent_realize(dev, errp, TYPE_KINETIS_RTC)) {
        return;
    }

    KinetisMCUState *mcu = kinetis_mcu_get();
    CortexMState *cm_state = CORTEXM_MCU_STATE(mcu);

    KinetisRTCState *state = KINETIS_RTC_STATE(dev);
    // First thing first: get capabilities from MCU, needed everywhere.
    state->capabilities = mcu->capabilities;

    // Also keep a local pointer, to access them easier.
    const KinetisCapabilities *capabilities = state->capabilities;
    assert(capabilities != NULL);

    Object *obj = OBJECT(dev);

    const char *periph_name = "RTC";

    svd_set_peripheral_address_block(cm_state->svd_json, periph_name, obj);
    peripheral_create_memory_region(obj);

    // TODO: remove this if the peripheral is always enabled.
    char enabling_bit_name[KINETIS_RCC_SIZEOF_ENABLING_BITFIELD];

    switch (capabilities->family) {
    case KINETIS_FAMILY_K6:


            mk64f12_rtc_create_objects(obj, cm_state->svd_json, periph_name);

            // TODO: add actions.
            // cm_object_property_set_str(state->u.k6.fld.xxx.fff, "GGG", "follows");
            // cm_object_property_set_str(state->u.k6.fld.xxx.fff, "GGG", "cleared-by");

            // TODO: add callbacks.
            // peripheral_register_set_pre_read(state->k6.reg.xxx, &kinetis_rtc_xxx_pre_read_callback);
            // peripheral_register_set_post_read(state->k6.reg.xxx, &kinetis_rtc_xxx_post_read_callback);
            // peripheral_register_set_pre_read(state->k6.reg.xxx, &kinetis_rtc_xxx_pret_read_callback);
            // peripheral_register_set_post_write(state->k6.reg.xxx, &kinetis_rtc_xxx_post_write_callback);

            // TODO: add interrupts.

            // TODO: remove this if the peripheral is always enabled.
            snprintf(enabling_bit_name, sizeof(enabling_bit_name) - 1,
                DEVICE_PATH_KINETIS_RCC "/AHB1ENR/RTCEN");


        break;

    default:
        assert(false);
        break;
    }

    // TODO: remove this if the peripheral is always enabled.
    state->enabling_bit = OBJECT(cm_device_by_name(enabling_bit_name));

    peripheral_prepare_registers(obj);
}

static void kinetis_rtc_reset_callback(DeviceState *dev)
{
    qemu_log_function_name();

    // Call parent reset(); this will reset all children registers.
    cm_device_parent_reset(dev, TYPE_KINETIS_RTC);
}

static void kinetis_rtc_class_init_callback(ObjectClass *klass, void *data)
{
    DeviceClass *dc = DEVICE_CLASS(klass);

    dc->reset = kinetis_rtc_reset_callback;
    dc->realize = kinetis_rtc_realize_callback;

    // TODO: remove this if the peripheral is always enabled.
    PeripheralClass *per_class = PERIPHERAL_CLASS(klass);
    per_class->is_enabled = kinetis_rtc_is_enabled;
}

static const TypeInfo kinetis_rtc_type_info = {
    .name = TYPE_KINETIS_RTC,
    .parent = TYPE_KINETIS_RTC_PARENT,
    .instance_init = kinetis_rtc_instance_init_callback,
    .instance_size = sizeof(KinetisRTCState),
    .class_init = kinetis_rtc_class_init_callback,
    .class_size = sizeof(KinetisRTCClass) };

static void kinetis_rtc_register_types(void)
{
    type_register_static(&kinetis_rtc_type_info);
}

type_init(kinetis_rtc_register_types);

// ----------------------------------------------------------------------------
