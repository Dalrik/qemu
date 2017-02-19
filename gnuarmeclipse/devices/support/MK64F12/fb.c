/*
 * Kinetis - FB (FlexBus external bus interface) emulation.
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

#include <hw/cortexm/kinetis/fb.h>
#include <hw/cortexm/kinetis/mcu.h>
#include <hw/cortexm/helper.h>
#include <hw/cortexm/svd.h>

// ----- Generated code -------------------------------------------------------
//
// ----- 8< ----- 8< -----  8< ----- 8< ----- 8< ----- 8< ----- 8< -----

// DO NOT EDIT! Automatically generated!
static void mk64f12_fb_create_objects(Object *obj, JSON_Object *svd, const char *name)
{
    KinetisFBState *state = KINETIS_FB_STATE(obj);

    JSON_Object *periph = svd_get_peripheral_by_name(svd, name);
    svd_add_peripheral_properties_and_children(obj, periph, svd);

    // Registers. 
    state->u.k6.reg.csar[0] = cm_object_get_child_by_name(obj, "CSAR0");
    state->u.k6.reg.csar[1] = cm_object_get_child_by_name(obj, "CSAR1");
    state->u.k6.reg.csar[2] = cm_object_get_child_by_name(obj, "CSAR2");
    state->u.k6.reg.csar[3] = cm_object_get_child_by_name(obj, "CSAR3");
    state->u.k6.reg.csar[4] = cm_object_get_child_by_name(obj, "CSAR4");
    state->u.k6.reg.csar[5] = cm_object_get_child_by_name(obj, "CSAR5");
    state->u.k6.reg.csmr[0] = cm_object_get_child_by_name(obj, "CSMR0");
    state->u.k6.reg.csmr[1] = cm_object_get_child_by_name(obj, "CSMR1");
    state->u.k6.reg.csmr[2] = cm_object_get_child_by_name(obj, "CSMR2");
    state->u.k6.reg.csmr[3] = cm_object_get_child_by_name(obj, "CSMR3");
    state->u.k6.reg.csmr[4] = cm_object_get_child_by_name(obj, "CSMR4");
    state->u.k6.reg.csmr[5] = cm_object_get_child_by_name(obj, "CSMR5");
    state->u.k6.reg.cscr[0] = cm_object_get_child_by_name(obj, "CSCR0");
    state->u.k6.reg.cscr[1] = cm_object_get_child_by_name(obj, "CSCR1");
    state->u.k6.reg.cscr[2] = cm_object_get_child_by_name(obj, "CSCR2");
    state->u.k6.reg.cscr[3] = cm_object_get_child_by_name(obj, "CSCR3");
    state->u.k6.reg.cscr[4] = cm_object_get_child_by_name(obj, "CSCR4");
    state->u.k6.reg.cscr[5] = cm_object_get_child_by_name(obj, "CSCR5");
    state->u.k6.reg.cspmcr = cm_object_get_child_by_name(obj, "CSPMCR");
    // CSAR0 bitfields.
    state->u.k6.fld.csar[0].ba = cm_object_get_child_by_name(state->u.k6.reg.csar[0], "BA");
    // CSAR1 bitfields.
    state->u.k6.fld.csar[1].ba = cm_object_get_child_by_name(state->u.k6.reg.csar[1], "BA");
    // CSAR2 bitfields.
    state->u.k6.fld.csar[2].ba = cm_object_get_child_by_name(state->u.k6.reg.csar[2], "BA");
    // CSAR3 bitfields.
    state->u.k6.fld.csar[3].ba = cm_object_get_child_by_name(state->u.k6.reg.csar[3], "BA");
    // CSAR4 bitfields.
    state->u.k6.fld.csar[4].ba = cm_object_get_child_by_name(state->u.k6.reg.csar[4], "BA");
    // CSAR5 bitfields.
    state->u.k6.fld.csar[5].ba = cm_object_get_child_by_name(state->u.k6.reg.csar[5], "BA");
    // CSMR0 bitfields.
    state->u.k6.fld.csmr[0].v = cm_object_get_child_by_name(state->u.k6.reg.csmr[0], "V");
    state->u.k6.fld.csmr[0].wp = cm_object_get_child_by_name(state->u.k6.reg.csmr[0], "WP");
    state->u.k6.fld.csmr[0].bam = cm_object_get_child_by_name(state->u.k6.reg.csmr[0], "BAM");
    // CSMR1 bitfields.
    state->u.k6.fld.csmr[1].v = cm_object_get_child_by_name(state->u.k6.reg.csmr[1], "V");
    state->u.k6.fld.csmr[1].wp = cm_object_get_child_by_name(state->u.k6.reg.csmr[1], "WP");
    state->u.k6.fld.csmr[1].bam = cm_object_get_child_by_name(state->u.k6.reg.csmr[1], "BAM");
    // CSMR2 bitfields.
    state->u.k6.fld.csmr[2].v = cm_object_get_child_by_name(state->u.k6.reg.csmr[2], "V");
    state->u.k6.fld.csmr[2].wp = cm_object_get_child_by_name(state->u.k6.reg.csmr[2], "WP");
    state->u.k6.fld.csmr[2].bam = cm_object_get_child_by_name(state->u.k6.reg.csmr[2], "BAM");
    // CSMR3 bitfields.
    state->u.k6.fld.csmr[3].v = cm_object_get_child_by_name(state->u.k6.reg.csmr[3], "V");
    state->u.k6.fld.csmr[3].wp = cm_object_get_child_by_name(state->u.k6.reg.csmr[3], "WP");
    state->u.k6.fld.csmr[3].bam = cm_object_get_child_by_name(state->u.k6.reg.csmr[3], "BAM");
    // CSMR4 bitfields.
    state->u.k6.fld.csmr[4].v = cm_object_get_child_by_name(state->u.k6.reg.csmr[4], "V");
    state->u.k6.fld.csmr[4].wp = cm_object_get_child_by_name(state->u.k6.reg.csmr[4], "WP");
    state->u.k6.fld.csmr[4].bam = cm_object_get_child_by_name(state->u.k6.reg.csmr[4], "BAM");
    // CSMR5 bitfields.
    state->u.k6.fld.csmr[5].v = cm_object_get_child_by_name(state->u.k6.reg.csmr[5], "V");
    state->u.k6.fld.csmr[5].wp = cm_object_get_child_by_name(state->u.k6.reg.csmr[5], "WP");
    state->u.k6.fld.csmr[5].bam = cm_object_get_child_by_name(state->u.k6.reg.csmr[5], "BAM");
    // CSCR0 bitfields.
    state->u.k6.fld.cscr[0].bstw = cm_object_get_child_by_name(state->u.k6.reg.cscr[0], "BSTW");
    state->u.k6.fld.cscr[0].bstr = cm_object_get_child_by_name(state->u.k6.reg.cscr[0], "BSTR");
    state->u.k6.fld.cscr[0].bem = cm_object_get_child_by_name(state->u.k6.reg.cscr[0], "BEM");
    state->u.k6.fld.cscr[0].ps = cm_object_get_child_by_name(state->u.k6.reg.cscr[0], "PS");
    state->u.k6.fld.cscr[0].aa = cm_object_get_child_by_name(state->u.k6.reg.cscr[0], "AA");
    state->u.k6.fld.cscr[0].bls = cm_object_get_child_by_name(state->u.k6.reg.cscr[0], "BLS");
    state->u.k6.fld.cscr[0].ws = cm_object_get_child_by_name(state->u.k6.reg.cscr[0], "WS");
    state->u.k6.fld.cscr[0].wrah = cm_object_get_child_by_name(state->u.k6.reg.cscr[0], "WRAH");
    state->u.k6.fld.cscr[0].rdah = cm_object_get_child_by_name(state->u.k6.reg.cscr[0], "RDAH");
    state->u.k6.fld.cscr[0].aset = cm_object_get_child_by_name(state->u.k6.reg.cscr[0], "ASET");
    state->u.k6.fld.cscr[0].exts = cm_object_get_child_by_name(state->u.k6.reg.cscr[0], "EXTS");
    state->u.k6.fld.cscr[0].swsen = cm_object_get_child_by_name(state->u.k6.reg.cscr[0], "SWSEN");
    state->u.k6.fld.cscr[0].sws = cm_object_get_child_by_name(state->u.k6.reg.cscr[0], "SWS");
    // CSCR1 bitfields.
    state->u.k6.fld.cscr[1].bstw = cm_object_get_child_by_name(state->u.k6.reg.cscr[1], "BSTW");
    state->u.k6.fld.cscr[1].bstr = cm_object_get_child_by_name(state->u.k6.reg.cscr[1], "BSTR");
    state->u.k6.fld.cscr[1].bem = cm_object_get_child_by_name(state->u.k6.reg.cscr[1], "BEM");
    state->u.k6.fld.cscr[1].ps = cm_object_get_child_by_name(state->u.k6.reg.cscr[1], "PS");
    state->u.k6.fld.cscr[1].aa = cm_object_get_child_by_name(state->u.k6.reg.cscr[1], "AA");
    state->u.k6.fld.cscr[1].bls = cm_object_get_child_by_name(state->u.k6.reg.cscr[1], "BLS");
    state->u.k6.fld.cscr[1].ws = cm_object_get_child_by_name(state->u.k6.reg.cscr[1], "WS");
    state->u.k6.fld.cscr[1].wrah = cm_object_get_child_by_name(state->u.k6.reg.cscr[1], "WRAH");
    state->u.k6.fld.cscr[1].rdah = cm_object_get_child_by_name(state->u.k6.reg.cscr[1], "RDAH");
    state->u.k6.fld.cscr[1].aset = cm_object_get_child_by_name(state->u.k6.reg.cscr[1], "ASET");
    state->u.k6.fld.cscr[1].exts = cm_object_get_child_by_name(state->u.k6.reg.cscr[1], "EXTS");
    state->u.k6.fld.cscr[1].swsen = cm_object_get_child_by_name(state->u.k6.reg.cscr[1], "SWSEN");
    state->u.k6.fld.cscr[1].sws = cm_object_get_child_by_name(state->u.k6.reg.cscr[1], "SWS");
    // CSCR2 bitfields.
    state->u.k6.fld.cscr[2].bstw = cm_object_get_child_by_name(state->u.k6.reg.cscr[2], "BSTW");
    state->u.k6.fld.cscr[2].bstr = cm_object_get_child_by_name(state->u.k6.reg.cscr[2], "BSTR");
    state->u.k6.fld.cscr[2].bem = cm_object_get_child_by_name(state->u.k6.reg.cscr[2], "BEM");
    state->u.k6.fld.cscr[2].ps = cm_object_get_child_by_name(state->u.k6.reg.cscr[2], "PS");
    state->u.k6.fld.cscr[2].aa = cm_object_get_child_by_name(state->u.k6.reg.cscr[2], "AA");
    state->u.k6.fld.cscr[2].bls = cm_object_get_child_by_name(state->u.k6.reg.cscr[2], "BLS");
    state->u.k6.fld.cscr[2].ws = cm_object_get_child_by_name(state->u.k6.reg.cscr[2], "WS");
    state->u.k6.fld.cscr[2].wrah = cm_object_get_child_by_name(state->u.k6.reg.cscr[2], "WRAH");
    state->u.k6.fld.cscr[2].rdah = cm_object_get_child_by_name(state->u.k6.reg.cscr[2], "RDAH");
    state->u.k6.fld.cscr[2].aset = cm_object_get_child_by_name(state->u.k6.reg.cscr[2], "ASET");
    state->u.k6.fld.cscr[2].exts = cm_object_get_child_by_name(state->u.k6.reg.cscr[2], "EXTS");
    state->u.k6.fld.cscr[2].swsen = cm_object_get_child_by_name(state->u.k6.reg.cscr[2], "SWSEN");
    state->u.k6.fld.cscr[2].sws = cm_object_get_child_by_name(state->u.k6.reg.cscr[2], "SWS");
    // CSCR3 bitfields.
    state->u.k6.fld.cscr[3].bstw = cm_object_get_child_by_name(state->u.k6.reg.cscr[3], "BSTW");
    state->u.k6.fld.cscr[3].bstr = cm_object_get_child_by_name(state->u.k6.reg.cscr[3], "BSTR");
    state->u.k6.fld.cscr[3].bem = cm_object_get_child_by_name(state->u.k6.reg.cscr[3], "BEM");
    state->u.k6.fld.cscr[3].ps = cm_object_get_child_by_name(state->u.k6.reg.cscr[3], "PS");
    state->u.k6.fld.cscr[3].aa = cm_object_get_child_by_name(state->u.k6.reg.cscr[3], "AA");
    state->u.k6.fld.cscr[3].bls = cm_object_get_child_by_name(state->u.k6.reg.cscr[3], "BLS");
    state->u.k6.fld.cscr[3].ws = cm_object_get_child_by_name(state->u.k6.reg.cscr[3], "WS");
    state->u.k6.fld.cscr[3].wrah = cm_object_get_child_by_name(state->u.k6.reg.cscr[3], "WRAH");
    state->u.k6.fld.cscr[3].rdah = cm_object_get_child_by_name(state->u.k6.reg.cscr[3], "RDAH");
    state->u.k6.fld.cscr[3].aset = cm_object_get_child_by_name(state->u.k6.reg.cscr[3], "ASET");
    state->u.k6.fld.cscr[3].exts = cm_object_get_child_by_name(state->u.k6.reg.cscr[3], "EXTS");
    state->u.k6.fld.cscr[3].swsen = cm_object_get_child_by_name(state->u.k6.reg.cscr[3], "SWSEN");
    state->u.k6.fld.cscr[3].sws = cm_object_get_child_by_name(state->u.k6.reg.cscr[3], "SWS");
    // CSCR4 bitfields.
    state->u.k6.fld.cscr[4].bstw = cm_object_get_child_by_name(state->u.k6.reg.cscr[4], "BSTW");
    state->u.k6.fld.cscr[4].bstr = cm_object_get_child_by_name(state->u.k6.reg.cscr[4], "BSTR");
    state->u.k6.fld.cscr[4].bem = cm_object_get_child_by_name(state->u.k6.reg.cscr[4], "BEM");
    state->u.k6.fld.cscr[4].ps = cm_object_get_child_by_name(state->u.k6.reg.cscr[4], "PS");
    state->u.k6.fld.cscr[4].aa = cm_object_get_child_by_name(state->u.k6.reg.cscr[4], "AA");
    state->u.k6.fld.cscr[4].bls = cm_object_get_child_by_name(state->u.k6.reg.cscr[4], "BLS");
    state->u.k6.fld.cscr[4].ws = cm_object_get_child_by_name(state->u.k6.reg.cscr[4], "WS");
    state->u.k6.fld.cscr[4].wrah = cm_object_get_child_by_name(state->u.k6.reg.cscr[4], "WRAH");
    state->u.k6.fld.cscr[4].rdah = cm_object_get_child_by_name(state->u.k6.reg.cscr[4], "RDAH");
    state->u.k6.fld.cscr[4].aset = cm_object_get_child_by_name(state->u.k6.reg.cscr[4], "ASET");
    state->u.k6.fld.cscr[4].exts = cm_object_get_child_by_name(state->u.k6.reg.cscr[4], "EXTS");
    state->u.k6.fld.cscr[4].swsen = cm_object_get_child_by_name(state->u.k6.reg.cscr[4], "SWSEN");
    state->u.k6.fld.cscr[4].sws = cm_object_get_child_by_name(state->u.k6.reg.cscr[4], "SWS");
    // CSCR5 bitfields.
    state->u.k6.fld.cscr[5].bstw = cm_object_get_child_by_name(state->u.k6.reg.cscr[5], "BSTW");
    state->u.k6.fld.cscr[5].bstr = cm_object_get_child_by_name(state->u.k6.reg.cscr[5], "BSTR");
    state->u.k6.fld.cscr[5].bem = cm_object_get_child_by_name(state->u.k6.reg.cscr[5], "BEM");
    state->u.k6.fld.cscr[5].ps = cm_object_get_child_by_name(state->u.k6.reg.cscr[5], "PS");
    state->u.k6.fld.cscr[5].aa = cm_object_get_child_by_name(state->u.k6.reg.cscr[5], "AA");
    state->u.k6.fld.cscr[5].bls = cm_object_get_child_by_name(state->u.k6.reg.cscr[5], "BLS");
    state->u.k6.fld.cscr[5].ws = cm_object_get_child_by_name(state->u.k6.reg.cscr[5], "WS");
    state->u.k6.fld.cscr[5].wrah = cm_object_get_child_by_name(state->u.k6.reg.cscr[5], "WRAH");
    state->u.k6.fld.cscr[5].rdah = cm_object_get_child_by_name(state->u.k6.reg.cscr[5], "RDAH");
    state->u.k6.fld.cscr[5].aset = cm_object_get_child_by_name(state->u.k6.reg.cscr[5], "ASET");
    state->u.k6.fld.cscr[5].exts = cm_object_get_child_by_name(state->u.k6.reg.cscr[5], "EXTS");
    state->u.k6.fld.cscr[5].swsen = cm_object_get_child_by_name(state->u.k6.reg.cscr[5], "SWSEN");
    state->u.k6.fld.cscr[5].sws = cm_object_get_child_by_name(state->u.k6.reg.cscr[5], "SWS");

    // CSPMCR bitfields.
    state->u.k6.fld.cspmcr.group5 = cm_object_get_child_by_name(state->u.k6.reg.cspmcr, "GROUP5");
    state->u.k6.fld.cspmcr.group4 = cm_object_get_child_by_name(state->u.k6.reg.cspmcr, "GROUP4");
    state->u.k6.fld.cspmcr.group3 = cm_object_get_child_by_name(state->u.k6.reg.cspmcr, "GROUP3");
    state->u.k6.fld.cspmcr.group2 = cm_object_get_child_by_name(state->u.k6.reg.cspmcr, "GROUP2");
    state->u.k6.fld.cspmcr.group1 = cm_object_get_child_by_name(state->u.k6.reg.cspmcr, "GROUP1");
}

// ----- 8< ----- 8< -----  8< ----- 8< ----- 8< ----- 8< ----- 8< -----

// ----- Private --------------------------------------------------------------

#if 0
static peripheral_register_t kinetis_fb_xxx_pre_write_callback(Object *reg,
        Object *periph, uint32_t addr, uint32_t offset, unsigned size,
        peripheral_register_t value, peripheral_register_t full_value)
{
    KinetisFBState *state = KINETIS_FB_STATE(periph);

    peripheral_register_t prev_value = peripheral_register_get_raw_prev_value(reg);

    // TODO: Add code to adjust the value (like applying some masks,
    // for example prevent setting interrupts not enabled).
    // Also process cleared/set by write 1/0 bits.
    // The returned value will be stored in the register value.

    return full_value;
}

static void kinetis_fb_xxx_post_write_callback(Object *reg, Object *periph,
        uint32_t addr, uint32_t offset, unsigned size,
        peripheral_register_t value, peripheral_register_t full_value)
{
    KinetisFBState *state = KINETIS_FB_STATE(periph);

    peripheral_register_t prev_value = peripheral_register_get_raw_prev_value(reg);
    // The new register value is full_value, the old one is prev_value.

    // TODO: Add code to send the value to the consumer.
}

static peripheral_register_t kinetis_fb_xxx_pre_read_callback(Object *reg,
        Object *periph, uint32_t addr, uint32_t offset, unsigned size)
{
    KinetisFBState *state = KINETIS_FB_STATE(periph);

    peripheral_register_t value = 0;

    // Add code to get the value from the producer, and return it.

    // This value, possibly masked, will be stored in the register
    // and returned when the register is read.
    return value;
}

static void kinetis_fb_xxx_post_read_callback(Object *reg, Object *periph,
        uint32_t addr, uint32_t offset, unsigned size)
{
    KinetisFBState *state = KINETIS_FB_STATE(periph);

    peripheral_register_t value = peripheral_register_get_raw_value(reg);

    // TODO: add code to perform the post read actions, like clearing some bits.
}
#endif

// ----------------------------------------------------------------------------

// TODO: remove this if the peripheral is always enabled.
static bool kinetis_fb_is_enabled(Object *obj)
{
    KinetisFBState *state = KINETIS_FB_STATE(obj);

    if (register_bitfield_is_non_zero(state->enabling_bit)) {
        return true; // Positive logic, bit == 1 means enabled.
    }

    // Not enabled
    return false;
}

static void kinetis_fb_instance_init_callback(Object *obj)
{
    qemu_log_function_name();

    KinetisFBState *state = KINETIS_FB_STATE(obj);

    // Capabilities are not yet available.

    // TODO: remove this if the peripheral is always enabled.
    state->enabling_bit = NULL;
    
    // TODO: Add code to initialise all members.
}

static void kinetis_fb_realize_callback(DeviceState *dev, Error **errp)
{
    qemu_log_function_name();

    // Call parent realize().
    if (!cm_device_parent_realize(dev, errp, TYPE_KINETIS_FB)) {
        return;
    }

    KinetisMCUState *mcu = kinetis_mcu_get();
    CortexMState *cm_state = CORTEXM_MCU_STATE(mcu);

    KinetisFBState *state = KINETIS_FB_STATE(dev);
    // First thing first: get capabilities from MCU, needed everywhere.
    state->capabilities = mcu->capabilities;

    // Also keep a local pointer, to access them easier.
    const KinetisCapabilities *capabilities = state->capabilities;
    assert(capabilities != NULL);

    Object *obj = OBJECT(dev);

    const char *periph_name = "FB";

    svd_set_peripheral_address_block(cm_state->svd_json, periph_name, obj);
    peripheral_create_memory_region(obj);

    // TODO: remove this if the peripheral is always enabled.
    char enabling_bit_name[KINETIS_RCC_SIZEOF_ENABLING_BITFIELD];

    switch (capabilities->family) {
    case KINETIS_FAMILY_K6:


            mk64f12_fb_create_objects(obj, cm_state->svd_json, periph_name);

            // TODO: add actions.
            // cm_object_property_set_str(state->u.k6.fld.xxx.fff, "GGG", "follows");
            // cm_object_property_set_str(state->u.k6.fld.xxx.fff, "GGG", "cleared-by");

            // TODO: add callbacks.
            // peripheral_register_set_pre_read(state->k6.reg.xxx, &kinetis_fb_xxx_pre_read_callback);
            // peripheral_register_set_post_read(state->k6.reg.xxx, &kinetis_fb_xxx_post_read_callback);
            // peripheral_register_set_pre_read(state->k6.reg.xxx, &kinetis_fb_xxx_pret_read_callback);
            // peripheral_register_set_post_write(state->k6.reg.xxx, &kinetis_fb_xxx_post_write_callback);

            // TODO: add interrupts.

            // TODO: remove this if the peripheral is always enabled.
            snprintf(enabling_bit_name, sizeof(enabling_bit_name) - 1,
                DEVICE_PATH_KINETIS_RCC "/AHB1ENR/FBEN");


        break;

    default:
        assert(false);
        break;
    }

    // TODO: remove this if the peripheral is always enabled.
    state->enabling_bit = OBJECT(cm_device_by_name(enabling_bit_name));

    peripheral_prepare_registers(obj);
}

static void kinetis_fb_reset_callback(DeviceState *dev)
{
    qemu_log_function_name();

    // Call parent reset(); this will reset all children registers.
    cm_device_parent_reset(dev, TYPE_KINETIS_FB);
}

static void kinetis_fb_class_init_callback(ObjectClass *klass, void *data)
{
    DeviceClass *dc = DEVICE_CLASS(klass);

    dc->reset = kinetis_fb_reset_callback;
    dc->realize = kinetis_fb_realize_callback;

    // TODO: remove this if the peripheral is always enabled.
    PeripheralClass *per_class = PERIPHERAL_CLASS(klass);
    per_class->is_enabled = kinetis_fb_is_enabled;
}

static const TypeInfo kinetis_fb_type_info = {
    .name = TYPE_KINETIS_FB,
    .parent = TYPE_KINETIS_FB_PARENT,
    .instance_init = kinetis_fb_instance_init_callback,
    .instance_size = sizeof(KinetisFBState),
    .class_init = kinetis_fb_class_init_callback,
    .class_size = sizeof(KinetisFBClass) };

static void kinetis_fb_register_types(void)
{
    type_register_static(&kinetis_fb_type_info);
}

type_init(kinetis_fb_register_types);

// ----------------------------------------------------------------------------
