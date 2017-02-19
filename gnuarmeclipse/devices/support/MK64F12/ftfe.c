/*
 * Kinetis - FTFE (Flash Memory Interface) emulation.
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

#include <hw/cortexm/kinetis/ftfe.h>
#include <hw/cortexm/kinetis/mcu.h>
#include <hw/cortexm/helper.h>
#include <hw/cortexm/svd.h>

// ----- Generated code -------------------------------------------------------
//
// ----- 8< ----- 8< -----  8< ----- 8< ----- 8< ----- 8< ----- 8< -----

// DO NOT EDIT! Automatically generated!
static void mk64f12_ftfe_create_objects(Object *obj, JSON_Object *svd, const char *name)
{
    KinetisFTFEState *state = KINETIS_FTFE_STATE(obj);

    JSON_Object *periph = svd_get_peripheral_by_name(svd, name);
    svd_add_peripheral_properties_and_children(obj, periph, svd);

    // Registers. 
    state->u.k6.reg.fstat = cm_object_get_child_by_name(obj, "FSTAT");
    state->u.k6.reg.fcnfg = cm_object_get_child_by_name(obj, "FCNFG");
    state->u.k6.reg.fsec = cm_object_get_child_by_name(obj, "FSEC");
    state->u.k6.reg.fopt = cm_object_get_child_by_name(obj, "FOPT");
    state->u.k6.reg.fccob[0] = cm_object_get_child_by_name(obj, "FCCOB3");
    state->u.k6.reg.fccob[1] = cm_object_get_child_by_name(obj, "FCCOB2");
    state->u.k6.reg.fccob[2] = cm_object_get_child_by_name(obj, "FCCOB1");
    state->u.k6.reg.fccob[3] = cm_object_get_child_by_name(obj, "FCCOB0");
    state->u.k6.reg.fccob[4] = cm_object_get_child_by_name(obj, "FCCOB7");
    state->u.k6.reg.fccob[5] = cm_object_get_child_by_name(obj, "FCCOB6");
    state->u.k6.reg.fccob[6] = cm_object_get_child_by_name(obj, "FCCOB5");
    state->u.k6.reg.fccob[7] = cm_object_get_child_by_name(obj, "FCCOB4");
    state->u.k6.reg.fccob[8] = cm_object_get_child_by_name(obj, "FCCOBB");
    state->u.k6.reg.fccob[9] = cm_object_get_child_by_name(obj, "FCCOBA");
    state->u.k6.reg.fccob[10] = cm_object_get_child_by_name(obj, "FCCOB9");
    state->u.k6.reg.fccob[11] = cm_object_get_child_by_name(obj, "FCCOB8");
    state->u.k6.reg.fprot[0] = cm_object_get_child_by_name(obj, "FPROT3");
    state->u.k6.reg.fprot[1] = cm_object_get_child_by_name(obj, "FPROT2");
    state->u.k6.reg.fprot[2] = cm_object_get_child_by_name(obj, "FPROT1");
    state->u.k6.reg.fprot[3] = cm_object_get_child_by_name(obj, "FPROT0");
    state->u.k6.reg.feprot = cm_object_get_child_by_name(obj, "FEPROT");
    state->u.k6.reg.fdprot = cm_object_get_child_by_name(obj, "FDPROT");

    // FSTAT bitfields.
    state->u.k6.fld.fstat.mgstat0 = cm_object_get_child_by_name(state->u.k6.reg.fstat, "MGSTAT0");
    state->u.k6.fld.fstat.fpviol = cm_object_get_child_by_name(state->u.k6.reg.fstat, "FPVIOL");
    state->u.k6.fld.fstat.accerr = cm_object_get_child_by_name(state->u.k6.reg.fstat, "ACCERR");
    state->u.k6.fld.fstat.rdcolerr = cm_object_get_child_by_name(state->u.k6.reg.fstat, "RDCOLERR");
    state->u.k6.fld.fstat.ccif = cm_object_get_child_by_name(state->u.k6.reg.fstat, "CCIF");

    // FCNFG bitfields.
    state->u.k6.fld.fcnfg.eeerdy = cm_object_get_child_by_name(state->u.k6.reg.fcnfg, "EEERDY");
    state->u.k6.fld.fcnfg.ramrdy = cm_object_get_child_by_name(state->u.k6.reg.fcnfg, "RAMRDY");
    state->u.k6.fld.fcnfg.pflsh = cm_object_get_child_by_name(state->u.k6.reg.fcnfg, "PFLSH");
    state->u.k6.fld.fcnfg.swap = cm_object_get_child_by_name(state->u.k6.reg.fcnfg, "SWAP");
    state->u.k6.fld.fcnfg.erssusp = cm_object_get_child_by_name(state->u.k6.reg.fcnfg, "ERSSUSP");
    state->u.k6.fld.fcnfg.ersareq = cm_object_get_child_by_name(state->u.k6.reg.fcnfg, "ERSAREQ");
    state->u.k6.fld.fcnfg.rdcollie = cm_object_get_child_by_name(state->u.k6.reg.fcnfg, "RDCOLLIE");
    state->u.k6.fld.fcnfg.ccie = cm_object_get_child_by_name(state->u.k6.reg.fcnfg, "CCIE");

    // FSEC bitfields.
    state->u.k6.fld.fsec.sec = cm_object_get_child_by_name(state->u.k6.reg.fsec, "SEC");
    state->u.k6.fld.fsec.fslacc = cm_object_get_child_by_name(state->u.k6.reg.fsec, "FSLACC");
    state->u.k6.fld.fsec.meen = cm_object_get_child_by_name(state->u.k6.reg.fsec, "MEEN");
    state->u.k6.fld.fsec.keyen = cm_object_get_child_by_name(state->u.k6.reg.fsec, "KEYEN");

    // FOPT bitfields.
    state->u.k6.fld.fopt.opt = cm_object_get_child_by_name(state->u.k6.reg.fopt, "OPT");
    // FCCOB3 bitfields.
    state->u.k6.fld.fccob[0].ccobn = cm_object_get_child_by_name(state->u.k6.reg.fccob[0], "CCOBn");
    // FCCOB2 bitfields.
    state->u.k6.fld.fccob[1].ccobn = cm_object_get_child_by_name(state->u.k6.reg.fccob[1], "CCOBn");
    // FCCOB1 bitfields.
    state->u.k6.fld.fccob[2].ccobn = cm_object_get_child_by_name(state->u.k6.reg.fccob[2], "CCOBn");
    // FCCOB0 bitfields.
    state->u.k6.fld.fccob[3].ccobn = cm_object_get_child_by_name(state->u.k6.reg.fccob[3], "CCOBn");
    // FCCOB7 bitfields.
    state->u.k6.fld.fccob[4].ccobn = cm_object_get_child_by_name(state->u.k6.reg.fccob[4], "CCOBn");
    // FCCOB6 bitfields.
    state->u.k6.fld.fccob[5].ccobn = cm_object_get_child_by_name(state->u.k6.reg.fccob[5], "CCOBn");
    // FCCOB5 bitfields.
    state->u.k6.fld.fccob[6].ccobn = cm_object_get_child_by_name(state->u.k6.reg.fccob[6], "CCOBn");
    // FCCOB4 bitfields.
    state->u.k6.fld.fccob[7].ccobn = cm_object_get_child_by_name(state->u.k6.reg.fccob[7], "CCOBn");
    // FCCOBB bitfields.
    state->u.k6.fld.fccob[8].ccobn = cm_object_get_child_by_name(state->u.k6.reg.fccob[8], "CCOBn");
    // FCCOBA bitfields.
    state->u.k6.fld.fccob[9].ccobn = cm_object_get_child_by_name(state->u.k6.reg.fccob[9], "CCOBn");
    // FCCOB9 bitfields.
    state->u.k6.fld.fccob[10].ccobn = cm_object_get_child_by_name(state->u.k6.reg.fccob[10], "CCOBn");
    // FCCOB8 bitfields.
    state->u.k6.fld.fccob[11].ccobn = cm_object_get_child_by_name(state->u.k6.reg.fccob[11], "CCOBn");
    // FPROT3 bitfields.
    state->u.k6.fld.fprot[0].prot = cm_object_get_child_by_name(state->u.k6.reg.fprot[0], "PROT");
    // FPROT2 bitfields.
    state->u.k6.fld.fprot[1].prot = cm_object_get_child_by_name(state->u.k6.reg.fprot[1], "PROT");
    // FPROT1 bitfields.
    state->u.k6.fld.fprot[2].prot = cm_object_get_child_by_name(state->u.k6.reg.fprot[2], "PROT");
    // FPROT0 bitfields.
    state->u.k6.fld.fprot[3].prot = cm_object_get_child_by_name(state->u.k6.reg.fprot[3], "PROT");

    // FEPROT bitfields.
    state->u.k6.fld.feprot.eprot = cm_object_get_child_by_name(state->u.k6.reg.feprot, "EPROT");

    // FDPROT bitfields.
    state->u.k6.fld.fdprot.dprot = cm_object_get_child_by_name(state->u.k6.reg.fdprot, "DPROT");
}

// ----- 8< ----- 8< -----  8< ----- 8< ----- 8< ----- 8< ----- 8< -----

// ----- Private --------------------------------------------------------------

#if 0
static peripheral_register_t kinetis_ftfe_xxx_pre_write_callback(Object *reg,
        Object *periph, uint32_t addr, uint32_t offset, unsigned size,
        peripheral_register_t value, peripheral_register_t full_value)
{
    KinetisFTFEState *state = KINETIS_FTFE_STATE(periph);

    peripheral_register_t prev_value = peripheral_register_get_raw_prev_value(reg);

    // TODO: Add code to adjust the value (like applying some masks,
    // for example prevent setting interrupts not enabled).
    // Also process cleared/set by write 1/0 bits.
    // The returned value will be stored in the register value.

    return full_value;
}

static void kinetis_ftfe_xxx_post_write_callback(Object *reg, Object *periph,
        uint32_t addr, uint32_t offset, unsigned size,
        peripheral_register_t value, peripheral_register_t full_value)
{
    KinetisFTFEState *state = KINETIS_FTFE_STATE(periph);

    peripheral_register_t prev_value = peripheral_register_get_raw_prev_value(reg);
    // The new register value is full_value, the old one is prev_value.

    // TODO: Add code to send the value to the consumer.
}

static peripheral_register_t kinetis_ftfe_xxx_pre_read_callback(Object *reg,
        Object *periph, uint32_t addr, uint32_t offset, unsigned size)
{
    KinetisFTFEState *state = KINETIS_FTFE_STATE(periph);

    peripheral_register_t value = 0;

    // Add code to get the value from the producer, and return it.

    // This value, possibly masked, will be stored in the register
    // and returned when the register is read.
    return value;
}

static void kinetis_ftfe_xxx_post_read_callback(Object *reg, Object *periph,
        uint32_t addr, uint32_t offset, unsigned size)
{
    KinetisFTFEState *state = KINETIS_FTFE_STATE(periph);

    peripheral_register_t value = peripheral_register_get_raw_value(reg);

    // TODO: add code to perform the post read actions, like clearing some bits.
}
#endif

// ----------------------------------------------------------------------------

// TODO: remove this if the peripheral is always enabled.
static bool kinetis_ftfe_is_enabled(Object *obj)
{
    KinetisFTFEState *state = KINETIS_FTFE_STATE(obj);

    if (register_bitfield_is_non_zero(state->enabling_bit)) {
        return true; // Positive logic, bit == 1 means enabled.
    }

    // Not enabled
    return false;
}

static void kinetis_ftfe_instance_init_callback(Object *obj)
{
    qemu_log_function_name();

    KinetisFTFEState *state = KINETIS_FTFE_STATE(obj);

    // Capabilities are not yet available.

    // TODO: remove this if the peripheral is always enabled.
    state->enabling_bit = NULL;
    
    // TODO: Add code to initialise all members.
}

static void kinetis_ftfe_realize_callback(DeviceState *dev, Error **errp)
{
    qemu_log_function_name();

    // Call parent realize().
    if (!cm_device_parent_realize(dev, errp, TYPE_KINETIS_FTFE)) {
        return;
    }

    KinetisMCUState *mcu = kinetis_mcu_get();
    CortexMState *cm_state = CORTEXM_MCU_STATE(mcu);

    KinetisFTFEState *state = KINETIS_FTFE_STATE(dev);
    // First thing first: get capabilities from MCU, needed everywhere.
    state->capabilities = mcu->capabilities;

    // Also keep a local pointer, to access them easier.
    const KinetisCapabilities *capabilities = state->capabilities;
    assert(capabilities != NULL);

    Object *obj = OBJECT(dev);

    const char *periph_name = "FTFE";

    svd_set_peripheral_address_block(cm_state->svd_json, periph_name, obj);
    peripheral_create_memory_region(obj);

    // TODO: remove this if the peripheral is always enabled.
    char enabling_bit_name[KINETIS_RCC_SIZEOF_ENABLING_BITFIELD];

    switch (capabilities->family) {
    case KINETIS_FAMILY_K6:


            mk64f12_ftfe_create_objects(obj, cm_state->svd_json, periph_name);

            // TODO: add actions.
            // cm_object_property_set_str(state->u.k6.fld.xxx.fff, "GGG", "follows");
            // cm_object_property_set_str(state->u.k6.fld.xxx.fff, "GGG", "cleared-by");

            // TODO: add callbacks.
            // peripheral_register_set_pre_read(state->k6.reg.xxx, &kinetis_ftfe_xxx_pre_read_callback);
            // peripheral_register_set_post_read(state->k6.reg.xxx, &kinetis_ftfe_xxx_post_read_callback);
            // peripheral_register_set_pre_read(state->k6.reg.xxx, &kinetis_ftfe_xxx_pret_read_callback);
            // peripheral_register_set_post_write(state->k6.reg.xxx, &kinetis_ftfe_xxx_post_write_callback);

            // TODO: add interrupts.

            // TODO: remove this if the peripheral is always enabled.
            snprintf(enabling_bit_name, sizeof(enabling_bit_name) - 1,
                DEVICE_PATH_KINETIS_RCC "/AHB1ENR/FTFEEN");


        break;

    default:
        assert(false);
        break;
    }

    // TODO: remove this if the peripheral is always enabled.
    state->enabling_bit = OBJECT(cm_device_by_name(enabling_bit_name));

    peripheral_prepare_registers(obj);
}

static void kinetis_ftfe_reset_callback(DeviceState *dev)
{
    qemu_log_function_name();

    // Call parent reset(); this will reset all children registers.
    cm_device_parent_reset(dev, TYPE_KINETIS_FTFE);
}

static void kinetis_ftfe_class_init_callback(ObjectClass *klass, void *data)
{
    DeviceClass *dc = DEVICE_CLASS(klass);

    dc->reset = kinetis_ftfe_reset_callback;
    dc->realize = kinetis_ftfe_realize_callback;

    // TODO: remove this if the peripheral is always enabled.
    PeripheralClass *per_class = PERIPHERAL_CLASS(klass);
    per_class->is_enabled = kinetis_ftfe_is_enabled;
}

static const TypeInfo kinetis_ftfe_type_info = {
    .name = TYPE_KINETIS_FTFE,
    .parent = TYPE_KINETIS_FTFE_PARENT,
    .instance_init = kinetis_ftfe_instance_init_callback,
    .instance_size = sizeof(KinetisFTFEState),
    .class_init = kinetis_ftfe_class_init_callback,
    .class_size = sizeof(KinetisFTFEClass) };

static void kinetis_ftfe_register_types(void)
{
    type_register_static(&kinetis_ftfe_type_info);
}

type_init(kinetis_ftfe_register_types);

// ----------------------------------------------------------------------------
