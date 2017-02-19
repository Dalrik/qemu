/*
 * Kinetis - WDOG (Generation 2008 Watchdog Timer) emulation.
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

#include <hw/cortexm/kinetis/wdog.h>
#include <hw/cortexm/kinetis/mcu.h>
#include <hw/cortexm/helper.h>
#include <hw/cortexm/svd.h>

// ----- Generated code -------------------------------------------------------
//
// ----- 8< ----- 8< -----  8< ----- 8< ----- 8< ----- 8< ----- 8< -----

// DO NOT EDIT! Automatically generated!
static void mk64f12_wdog_create_objects(Object *obj, JSON_Object *svd, const char *name)
{
    KinetisWDOGState *state = KINETIS_WDOG_STATE(obj);

    JSON_Object *periph = svd_get_peripheral_by_name(svd, name);
    svd_add_peripheral_properties_and_children(obj, periph, svd);

    // Registers. 
    state->u.k6.reg.stctrlh = cm_object_get_child_by_name(obj, "STCTRLH");
    state->u.k6.reg.stctrll = cm_object_get_child_by_name(obj, "STCTRLL");
    state->u.k6.reg.tovalh = cm_object_get_child_by_name(obj, "TOVALH");
    state->u.k6.reg.tovall = cm_object_get_child_by_name(obj, "TOVALL");
    state->u.k6.reg.winh = cm_object_get_child_by_name(obj, "WINH");
    state->u.k6.reg.winl = cm_object_get_child_by_name(obj, "WINL");
    state->u.k6.reg.refresh = cm_object_get_child_by_name(obj, "REFRESH");
    state->u.k6.reg.unlock = cm_object_get_child_by_name(obj, "UNLOCK");
    state->u.k6.reg.tmrouth = cm_object_get_child_by_name(obj, "TMROUTH");
    state->u.k6.reg.tmroutl = cm_object_get_child_by_name(obj, "TMROUTL");
    state->u.k6.reg.rstcnt = cm_object_get_child_by_name(obj, "RSTCNT");
    state->u.k6.reg.presc = cm_object_get_child_by_name(obj, "PRESC");

    // STCTRLH bitfields.
    state->u.k6.fld.stctrlh.wdogen = cm_object_get_child_by_name(state->u.k6.reg.stctrlh, "WDOGEN");
    state->u.k6.fld.stctrlh.clksrc = cm_object_get_child_by_name(state->u.k6.reg.stctrlh, "CLKSRC");
    state->u.k6.fld.stctrlh.irqrsten = cm_object_get_child_by_name(state->u.k6.reg.stctrlh, "IRQRSTEN");
    state->u.k6.fld.stctrlh.winen = cm_object_get_child_by_name(state->u.k6.reg.stctrlh, "WINEN");
    state->u.k6.fld.stctrlh.allowupdate = cm_object_get_child_by_name(state->u.k6.reg.stctrlh, "ALLOWUPDATE");
    state->u.k6.fld.stctrlh.dbgen = cm_object_get_child_by_name(state->u.k6.reg.stctrlh, "DBGEN");
    state->u.k6.fld.stctrlh.stopen = cm_object_get_child_by_name(state->u.k6.reg.stctrlh, "STOPEN");
    state->u.k6.fld.stctrlh.waiten = cm_object_get_child_by_name(state->u.k6.reg.stctrlh, "WAITEN");
    state->u.k6.fld.stctrlh.testwdog = cm_object_get_child_by_name(state->u.k6.reg.stctrlh, "TESTWDOG");
    state->u.k6.fld.stctrlh.testsel = cm_object_get_child_by_name(state->u.k6.reg.stctrlh, "TESTSEL");
    state->u.k6.fld.stctrlh.bytesel = cm_object_get_child_by_name(state->u.k6.reg.stctrlh, "BYTESEL");
    state->u.k6.fld.stctrlh.distestwdog = cm_object_get_child_by_name(state->u.k6.reg.stctrlh, "DISTESTWDOG");

    // STCTRLL bitfields.
    state->u.k6.fld.stctrll.intflg = cm_object_get_child_by_name(state->u.k6.reg.stctrll, "INTFLG");

    // TOVALH bitfields.
    state->u.k6.fld.tovalh.tovalhigh = cm_object_get_child_by_name(state->u.k6.reg.tovalh, "TOVALHIGH");

    // TOVALL bitfields.
    state->u.k6.fld.tovall.tovallow = cm_object_get_child_by_name(state->u.k6.reg.tovall, "TOVALLOW");

    // WINH bitfields.
    state->u.k6.fld.winh.winhigh = cm_object_get_child_by_name(state->u.k6.reg.winh, "WINHIGH");

    // WINL bitfields.
    state->u.k6.fld.winl.winlow = cm_object_get_child_by_name(state->u.k6.reg.winl, "WINLOW");

    // REFRESH bitfields.
    state->u.k6.fld.refresh.wdogrefresh = cm_object_get_child_by_name(state->u.k6.reg.refresh, "WDOGREFRESH");

    // UNLOCK bitfields.
    state->u.k6.fld.unlock.wdogunlock = cm_object_get_child_by_name(state->u.k6.reg.unlock, "WDOGUNLOCK");

    // TMROUTH bitfields.
    state->u.k6.fld.tmrouth.timerouthigh = cm_object_get_child_by_name(state->u.k6.reg.tmrouth, "TIMEROUTHIGH");

    // TMROUTL bitfields.
    state->u.k6.fld.tmroutl.timeroutlow = cm_object_get_child_by_name(state->u.k6.reg.tmroutl, "TIMEROUTLOW");

    // RSTCNT bitfields.
    state->u.k6.fld.rstcnt.rstcnt = cm_object_get_child_by_name(state->u.k6.reg.rstcnt, "RSTCNT");

    // PRESC bitfields.
    state->u.k6.fld.presc.prescval = cm_object_get_child_by_name(state->u.k6.reg.presc, "PRESCVAL");
}

// ----- 8< ----- 8< -----  8< ----- 8< ----- 8< ----- 8< ----- 8< -----

// ----- Private --------------------------------------------------------------

#if 0
static peripheral_register_t kinetis_wdog_xxx_pre_write_callback(Object *reg,
        Object *periph, uint32_t addr, uint32_t offset, unsigned size,
        peripheral_register_t value, peripheral_register_t full_value)
{
    KinetisWDOGState *state = KINETIS_WDOG_STATE(periph);

    peripheral_register_t prev_value = peripheral_register_get_raw_prev_value(reg);

    // TODO: Add code to adjust the value (like applying some masks,
    // for example prevent setting interrupts not enabled).
    // Also process cleared/set by write 1/0 bits.
    // The returned value will be stored in the register value.

    return full_value;
}

static void kinetis_wdog_xxx_post_write_callback(Object *reg, Object *periph,
        uint32_t addr, uint32_t offset, unsigned size,
        peripheral_register_t value, peripheral_register_t full_value)
{
    KinetisWDOGState *state = KINETIS_WDOG_STATE(periph);

    peripheral_register_t prev_value = peripheral_register_get_raw_prev_value(reg);
    // The new register value is full_value, the old one is prev_value.

    // TODO: Add code to send the value to the consumer.
}

static peripheral_register_t kinetis_wdog_xxx_pre_read_callback(Object *reg,
        Object *periph, uint32_t addr, uint32_t offset, unsigned size)
{
    KinetisWDOGState *state = KINETIS_WDOG_STATE(periph);

    peripheral_register_t value = 0;

    // Add code to get the value from the producer, and return it.

    // This value, possibly masked, will be stored in the register
    // and returned when the register is read.
    return value;
}

static void kinetis_wdog_xxx_post_read_callback(Object *reg, Object *periph,
        uint32_t addr, uint32_t offset, unsigned size)
{
    KinetisWDOGState *state = KINETIS_WDOG_STATE(periph);

    peripheral_register_t value = peripheral_register_get_raw_value(reg);

    // TODO: add code to perform the post read actions, like clearing some bits.
}
#endif

// ----------------------------------------------------------------------------

// TODO: remove this if the peripheral is always enabled.
static bool kinetis_wdog_is_enabled(Object *obj)
{
    KinetisWDOGState *state = KINETIS_WDOG_STATE(obj);

    if (register_bitfield_is_non_zero(state->enabling_bit)) {
        return true; // Positive logic, bit == 1 means enabled.
    }

    // Not enabled
    return false;
}

static void kinetis_wdog_instance_init_callback(Object *obj)
{
    qemu_log_function_name();

    KinetisWDOGState *state = KINETIS_WDOG_STATE(obj);

    // Capabilities are not yet available.

    // TODO: remove this if the peripheral is always enabled.
    state->enabling_bit = NULL;
    
    // TODO: Add code to initialise all members.
}

static void kinetis_wdog_realize_callback(DeviceState *dev, Error **errp)
{
    qemu_log_function_name();

    // Call parent realize().
    if (!cm_device_parent_realize(dev, errp, TYPE_KINETIS_WDOG)) {
        return;
    }

    KinetisMCUState *mcu = kinetis_mcu_get();
    CortexMState *cm_state = CORTEXM_MCU_STATE(mcu);

    KinetisWDOGState *state = KINETIS_WDOG_STATE(dev);
    // First thing first: get capabilities from MCU, needed everywhere.
    state->capabilities = mcu->capabilities;

    // Also keep a local pointer, to access them easier.
    const KinetisCapabilities *capabilities = state->capabilities;
    assert(capabilities != NULL);

    Object *obj = OBJECT(dev);

    const char *periph_name = "WDOG";

    svd_set_peripheral_address_block(cm_state->svd_json, periph_name, obj);
    peripheral_create_memory_region(obj);

    // TODO: remove this if the peripheral is always enabled.
    char enabling_bit_name[KINETIS_RCC_SIZEOF_ENABLING_BITFIELD];

    switch (capabilities->family) {
    case KINETIS_FAMILY_K6:


            mk64f12_wdog_create_objects(obj, cm_state->svd_json, periph_name);

            // TODO: add actions.
            // cm_object_property_set_str(state->u.k6.fld.xxx.fff, "GGG", "follows");
            // cm_object_property_set_str(state->u.k6.fld.xxx.fff, "GGG", "cleared-by");

            // TODO: add callbacks.
            // peripheral_register_set_pre_read(state->k6.reg.xxx, &kinetis_wdog_xxx_pre_read_callback);
            // peripheral_register_set_post_read(state->k6.reg.xxx, &kinetis_wdog_xxx_post_read_callback);
            // peripheral_register_set_pre_read(state->k6.reg.xxx, &kinetis_wdog_xxx_pret_read_callback);
            // peripheral_register_set_post_write(state->k6.reg.xxx, &kinetis_wdog_xxx_post_write_callback);

            // TODO: add interrupts.

            // TODO: remove this if the peripheral is always enabled.
            snprintf(enabling_bit_name, sizeof(enabling_bit_name) - 1,
                DEVICE_PATH_KINETIS_RCC "/AHB1ENR/WDOGEN");


        break;

    default:
        assert(false);
        break;
    }

    // TODO: remove this if the peripheral is always enabled.
    state->enabling_bit = OBJECT(cm_device_by_name(enabling_bit_name));

    peripheral_prepare_registers(obj);
}

static void kinetis_wdog_reset_callback(DeviceState *dev)
{
    qemu_log_function_name();

    // Call parent reset(); this will reset all children registers.
    cm_device_parent_reset(dev, TYPE_KINETIS_WDOG);
}

static void kinetis_wdog_class_init_callback(ObjectClass *klass, void *data)
{
    DeviceClass *dc = DEVICE_CLASS(klass);

    dc->reset = kinetis_wdog_reset_callback;
    dc->realize = kinetis_wdog_realize_callback;

    // TODO: remove this if the peripheral is always enabled.
    PeripheralClass *per_class = PERIPHERAL_CLASS(klass);
    per_class->is_enabled = kinetis_wdog_is_enabled;
}

static const TypeInfo kinetis_wdog_type_info = {
    .name = TYPE_KINETIS_WDOG,
    .parent = TYPE_KINETIS_WDOG_PARENT,
    .instance_init = kinetis_wdog_instance_init_callback,
    .instance_size = sizeof(KinetisWDOGState),
    .class_init = kinetis_wdog_class_init_callback,
    .class_size = sizeof(KinetisWDOGClass) };

static void kinetis_wdog_register_types(void)
{
    type_register_static(&kinetis_wdog_type_info);
}

type_init(kinetis_wdog_register_types);

// ----------------------------------------------------------------------------
