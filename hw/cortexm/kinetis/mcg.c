/*
 * Kinetis - MCG (Multipurpose Clock Generator module) emulation.
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

#include <hw/cortexm/kinetis/mcg.h>
#include <hw/cortexm/kinetis/mcu.h>
#include <hw/cortexm/helper.h>
#include <hw/cortexm/svd.h>

// ----- Generated code -------------------------------------------------------
//
// ----- 8< ----- 8< -----  8< ----- 8< ----- 8< ----- 8< ----- 8< -----

// DO NOT EDIT! Automatically generated!
static void mk64f12_mcg_create_objects(Object *obj, JSON_Object *svd, const char *name)
{
    KinetisMCGState *state = KINETIS_MCG_STATE(obj);

    JSON_Object *periph = svd_get_peripheral_by_name(svd, name);
    svd_add_peripheral_properties_and_children(obj, periph, svd);

    // Registers. 
    state->u.k6.reg.c1 = cm_object_get_child_by_name(obj, "C1");
    state->u.k6.reg.c2 = cm_object_get_child_by_name(obj, "C2");
    state->u.k6.reg.c3 = cm_object_get_child_by_name(obj, "C3");
    state->u.k6.reg.c4 = cm_object_get_child_by_name(obj, "C4");
    state->u.k6.reg.c5 = cm_object_get_child_by_name(obj, "C5");
    state->u.k6.reg.c6 = cm_object_get_child_by_name(obj, "C6");
    state->u.k6.reg.s = cm_object_get_child_by_name(obj, "S");
    state->u.k6.reg.sc = cm_object_get_child_by_name(obj, "SC");
    state->u.k6.reg.atcvh = cm_object_get_child_by_name(obj, "ATCVH");
    state->u.k6.reg.atcvl = cm_object_get_child_by_name(obj, "ATCVL");
    state->u.k6.reg.c7 = cm_object_get_child_by_name(obj, "C7");
    state->u.k6.reg.c8 = cm_object_get_child_by_name(obj, "C8");

    // C1 bitfields.
    state->u.k6.fld.c1.irefsten = cm_object_get_child_by_name(state->u.k6.reg.c1, "IREFSTEN");
    state->u.k6.fld.c1.irclken = cm_object_get_child_by_name(state->u.k6.reg.c1, "IRCLKEN");
    state->u.k6.fld.c1.irefs = cm_object_get_child_by_name(state->u.k6.reg.c1, "IREFS");
    state->u.k6.fld.c1.frdiv = cm_object_get_child_by_name(state->u.k6.reg.c1, "FRDIV");
    state->u.k6.fld.c1.clks = cm_object_get_child_by_name(state->u.k6.reg.c1, "CLKS");

    // C2 bitfields.
    state->u.k6.fld.c2.ircs = cm_object_get_child_by_name(state->u.k6.reg.c2, "IRCS");
    state->u.k6.fld.c2.lp = cm_object_get_child_by_name(state->u.k6.reg.c2, "LP");
    state->u.k6.fld.c2.erefs = cm_object_get_child_by_name(state->u.k6.reg.c2, "EREFS");
    state->u.k6.fld.c2.hgo = cm_object_get_child_by_name(state->u.k6.reg.c2, "HGO");
    state->u.k6.fld.c2.range = cm_object_get_child_by_name(state->u.k6.reg.c2, "RANGE");
    state->u.k6.fld.c2.fcftrim = cm_object_get_child_by_name(state->u.k6.reg.c2, "FCFTRIM");
    state->u.k6.fld.c2.locre0 = cm_object_get_child_by_name(state->u.k6.reg.c2, "LOCRE0");

    // C3 bitfields.
    state->u.k6.fld.c3.sctrim = cm_object_get_child_by_name(state->u.k6.reg.c3, "SCTRIM");

    // C4 bitfields.
    state->u.k6.fld.c4.scftrim = cm_object_get_child_by_name(state->u.k6.reg.c4, "SCFTRIM");
    state->u.k6.fld.c4.fctrim = cm_object_get_child_by_name(state->u.k6.reg.c4, "FCTRIM");
    state->u.k6.fld.c4.drst_drs = cm_object_get_child_by_name(state->u.k6.reg.c4, "DRST_DRS");
    state->u.k6.fld.c4.dmx32 = cm_object_get_child_by_name(state->u.k6.reg.c4, "DMX32");

    // C5 bitfields.
    state->u.k6.fld.c5.prdiv0 = cm_object_get_child_by_name(state->u.k6.reg.c5, "PRDIV0");
    state->u.k6.fld.c5.pllsten0 = cm_object_get_child_by_name(state->u.k6.reg.c5, "PLLSTEN0");
    state->u.k6.fld.c5.pllclken0 = cm_object_get_child_by_name(state->u.k6.reg.c5, "PLLCLKEN0");

    // C6 bitfields.
    state->u.k6.fld.c6.vdiv0 = cm_object_get_child_by_name(state->u.k6.reg.c6, "VDIV0");
    state->u.k6.fld.c6.cme0 = cm_object_get_child_by_name(state->u.k6.reg.c6, "CME0");
    state->u.k6.fld.c6.plls = cm_object_get_child_by_name(state->u.k6.reg.c6, "PLLS");
    state->u.k6.fld.c6.lolie0 = cm_object_get_child_by_name(state->u.k6.reg.c6, "LOLIE0");

    // S bitfields.
    state->u.k6.fld.s.ircst = cm_object_get_child_by_name(state->u.k6.reg.s, "IRCST");
    state->u.k6.fld.s.oscinit0 = cm_object_get_child_by_name(state->u.k6.reg.s, "OSCINIT0");
    state->u.k6.fld.s.clkst = cm_object_get_child_by_name(state->u.k6.reg.s, "CLKST");
    state->u.k6.fld.s.irefst = cm_object_get_child_by_name(state->u.k6.reg.s, "IREFST");
    state->u.k6.fld.s.pllst = cm_object_get_child_by_name(state->u.k6.reg.s, "PLLST");
    state->u.k6.fld.s.lock0 = cm_object_get_child_by_name(state->u.k6.reg.s, "LOCK0");
    state->u.k6.fld.s.lols0 = cm_object_get_child_by_name(state->u.k6.reg.s, "LOLS0");

    // SC bitfields.
    state->u.k6.fld.sc.locs0 = cm_object_get_child_by_name(state->u.k6.reg.sc, "LOCS0");
    state->u.k6.fld.sc.fcrdiv = cm_object_get_child_by_name(state->u.k6.reg.sc, "FCRDIV");
    state->u.k6.fld.sc.fltprsrv = cm_object_get_child_by_name(state->u.k6.reg.sc, "FLTPRSRV");
    state->u.k6.fld.sc.atmf = cm_object_get_child_by_name(state->u.k6.reg.sc, "ATMF");
    state->u.k6.fld.sc.atms = cm_object_get_child_by_name(state->u.k6.reg.sc, "ATMS");
    state->u.k6.fld.sc.atme = cm_object_get_child_by_name(state->u.k6.reg.sc, "ATME");

    // ATCVH bitfields.
    state->u.k6.fld.atcvh.atcvh = cm_object_get_child_by_name(state->u.k6.reg.atcvh, "ATCVH");

    // ATCVL bitfields.
    state->u.k6.fld.atcvl.atcvl = cm_object_get_child_by_name(state->u.k6.reg.atcvl, "ATCVL");

    // C7 bitfields.
    state->u.k6.fld.c7.oscsel = cm_object_get_child_by_name(state->u.k6.reg.c7, "OSCSEL");

    // C8 bitfields.
    state->u.k6.fld.c8.locs1 = cm_object_get_child_by_name(state->u.k6.reg.c8, "LOCS1");
    state->u.k6.fld.c8.cme1 = cm_object_get_child_by_name(state->u.k6.reg.c8, "CME1");
    state->u.k6.fld.c8.lolre = cm_object_get_child_by_name(state->u.k6.reg.c8, "LOLRE");
    state->u.k6.fld.c8.locre1 = cm_object_get_child_by_name(state->u.k6.reg.c8, "LOCRE1");
}

// ----- 8< ----- 8< -----  8< ----- 8< ----- 8< ----- 8< ----- 8< -----

// ----- Private --------------------------------------------------------------

#if 0
static peripheral_register_t kinetis_mcg_xxx_pre_write_callback(Object *reg,
        Object *periph, uint32_t addr, uint32_t offset, unsigned size,
        peripheral_register_t value, peripheral_register_t full_value)
{
    KinetisMCGState *state = KINETIS_MCG_STATE(periph);

    peripheral_register_t prev_value = peripheral_register_get_raw_prev_value(reg);

    // TODO: Add code to adjust the value (like applying some masks,
    // for example prevent setting interrupts not enabled).
    // Also process cleared/set by write 1/0 bits.
    // The returned value will be stored in the register value.

    return full_value;
}

static void kinetis_mcg_xxx_post_write_callback(Object *reg, Object *periph,
        uint32_t addr, uint32_t offset, unsigned size,
        peripheral_register_t value, peripheral_register_t full_value)
{
    KinetisMCGState *state = KINETIS_MCG_STATE(periph);

    peripheral_register_t prev_value = peripheral_register_get_raw_prev_value(reg);
    // The new register value is full_value, the old one is prev_value.

    // TODO: Add code to send the value to the consumer.
}

static peripheral_register_t kinetis_mcg_xxx_pre_read_callback(Object *reg,
        Object *periph, uint32_t addr, uint32_t offset, unsigned size)
{
    KinetisMCGState *state = KINETIS_MCG_STATE(periph);

    peripheral_register_t value = 0;

    // Add code to get the value from the producer, and return it.

    // This value, possibly masked, will be stored in the register
    // and returned when the register is read.
    return value;
}

static void kinetis_mcg_xxx_post_read_callback(Object *reg, Object *periph,
        uint32_t addr, uint32_t offset, unsigned size)
{
    KinetisMCGState *state = KINETIS_MCG_STATE(periph);

    peripheral_register_t value = peripheral_register_get_raw_value(reg);

    // TODO: add code to perform the post read actions, like clearing some bits.
}
#endif

static void kinetis_mcg_update_clocks(KinetisMCGState *state)
{
    uint32_t mcg_out_freq_hz = 0;
    uint16_t divider;
    // This code adapted from system_MK64F12.c

    if (register_bitfield_is_zero(state->u.k6.fld.c1.clks)) {
        /* Output of FLL or PLL is selected */
        if (register_bitfield_is_zero(state->u.k6.fld.c6.plls)) {
            /* FLL is selected */
            if (register_bitfield_is_zero(state->u.k6.fld.c1.irefs)) {
                /* External reference clock is selected */
                switch (register_bitfield_read_value(state->u.k6.fld.c7.oscsel)) {
                    case 0x00U:
                        mcg_out_freq_hz = state->xtal_freq_hz; /* System oscillator drives MCG clock */
                        break;
                    case 0x01U:
                        mcg_out_freq_hz = state->xtal32_freq_hz; /* RTC 32 kHz oscillator drives MCG clock */
                        break;
                    case 0x02U:
                    default:
                        mcg_out_freq_hz = state->int_irc_freq_hz; /* IRC 48MHz oscillator drives MCG clock */
                        break;
                }
                uint8_t frdiv = register_bitfield_read_value(state->u.k6.fld.c1.frdiv);
                if (register_bitfield_is_non_zero(state->u.k6.fld.c2.range) && (register_bitfield_read_value(state->u.k6.fld.c7.oscsel) != 0x01U)) {
                    switch (frdiv) {
                        case 0x7U:
                            divider = 1536U;
                            break;
                        case 0x6U:
                            divider = 1280U;
                            break;
                        default:
                            divider = (uint16_t)(32LU << frdiv);
                            break;
                    }
                } else {/* ((MCG->C2 & MCG_C2_RANGE_MASK) != 0x00U) */
                    divider = (uint16_t)(1LU << frdiv);
                }
                mcg_out_freq_hz = (mcg_out_freq_hz / divider); /* Calculate the divided FLL reference clock */
            } else { /* (!((MCG->C1 & MCG_C1_IREFS_MASK) == 0x00U)) */
                mcg_out_freq_hz = state->int_slow_freq_hz; /* The slow internal reference clock is selected */
            } /* (!((MCG->C1 & MCG_C1_IREFS_MASK) == 0x00U)) */
            /* Select correct multiplier to calculate the MCG output clock  */
            uint8_t drst_drs_dmx32 = (register_bitfield_read_value(state->u.k6.fld.c4.drst_drs) << 1) |
                register_bitfield_read_value(state->u.k6.fld.c4.dmx32);
            switch (drst_drs_dmx32) {
                case 0x00U:
                    mcg_out_freq_hz *= 640U;
                    break;
                case 0x01U:
                    mcg_out_freq_hz *= 732U;
                    break;
                case 0x02U:
                    mcg_out_freq_hz *= 1280U;
                    break;
                case 0x03U:
                    mcg_out_freq_hz *= 1464U;
                    break;
                case 0x04U:
                    mcg_out_freq_hz *= 1920U;
                    break;
                case 0x05U:
                    mcg_out_freq_hz *= 2197U;
                    break;
                case 0x06U:
                    mcg_out_freq_hz *= 2560U;
                    break;
                case 0x07U:
                    mcg_out_freq_hz *= 2929U;
                    break;
                default:
                    break;
            }
        } else { /* (!((MCG->C6 & MCG_C6_PLLS_MASK) == 0x00U)) */
            /* PLL is selected */
            divider = (((uint16_t)register_bitfield_read_value(state->u.k6.fld.c5.prdiv0)) + 0x01U);
            mcg_out_freq_hz = (uint32_t)(state->xtal_freq_hz / divider); /* Calculate the PLL reference clock */
            divider = (((uint16_t)register_bitfield_read_value(state->u.k6.fld.c6.vdiv0)) + 24U);
            mcg_out_freq_hz *= divider;          /* Calculate the MCG output clock */
        } /* (!((MCG->C6 & MCG_C6_PLLS_MASK) == 0x00U)) */
    } else if (register_bitfield_read_value(state->u.k6.fld.c1.clks) == 1) {
        /* Internal reference clock is selected */
        if (register_bitfield_is_zero(state->u.k6.fld.c2.ircs)) {
            mcg_out_freq_hz = state->int_slow_freq_hz; /* Slow internal reference clock selected */
        } else { /* (!((MCG->C2 & MCG_C2_IRCS_MASK) == 0x00U)) */
            divider = (uint16_t)(0x01LU << register_bitfield_read_value(state->u.k6.fld.sc.fcrdiv));
            mcg_out_freq_hz = (uint32_t) (state->int_fast_freq_hz / divider); /* Fast internal reference clock selected */
        } /* (!((MCG->C2 & MCG_C2_IRCS_MASK) == 0x00U)) */
    } else if (register_bitfield_read_value(state->u.k6.fld.c1.clks) == 2) {
        /* External reference clock is selected */
        switch (register_bitfield_read_value(state->u.k6.fld.c7.oscsel)) {
            case 0x00U:
                mcg_out_freq_hz = state->xtal_freq_hz;   /* System oscillator drives MCG clock */
                break;
            case 0x01U:
                mcg_out_freq_hz = state->xtal32_freq_hz; /* RTC 32 kHz oscillator drives MCG clock */
                break;
            case 0x02U:
            default:
                mcg_out_freq_hz = state->int_irc_freq_hz; /* IRC 48MHz oscillator drives MCG clock */
                break;
        }
    } else { /* (!((MCG->C1 & MCG_C1_CLKS_MASK) == 0x80U)) */
        /* Reserved value */
    } /* (!((MCG->C1 & MCG_C1_CLKS_MASK) == 0x80U)) */

    qemu_log_mask(LOG_FUNC, "%s() mcg_out_freq_hz=%d\n", __FUNCTION__, mcg_out_freq_hz);

    KinetisSIMState *sim_state = KINETIS_SIM_STATE(cm_device_by_name(DEVICE_PATH_KINETIS_SIM));
    sim_state->mcg_out_freq_hz = mcg_out_freq_hz;
    kinetis_sim_update_clocks(sim_state);
}

static void kinetis_mcg_post_write_callback(Object *reg, Object *periph,
        uint32_t addr, uint32_t offset, unsigned size,
        peripheral_register_t value, peripheral_register_t full_value)
{
    KinetisMCGState *state = KINETIS_MCG_STATE(periph);
    kinetis_mcg_update_clocks(state);
}

// ----------------------------------------------------------------------------

static void kinetis_mcg_instance_init_callback(Object *obj)
{
    qemu_log_function_name();

    KinetisMCGState *state = KINETIS_MCG_STATE(obj);

    cm_object_property_add_uint32(obj, "xtal-freq-hz", &state->xtal_freq_hz);
    state->xtal_freq_hz = 0;

    cm_object_property_add_uint32(obj, "xtal32-freq-hz", &state->xtal32_freq_hz);
    state->xtal32_freq_hz = 0;

    cm_object_property_add_uint32(obj, "int-irc-freq-hz", &state->int_irc_freq_hz);
    state->int_irc_freq_hz = 0;

    cm_object_property_add_uint32(obj, "int-fast-freq-hz", &state->int_fast_freq_hz);
    state->int_fast_freq_hz = 0;

    cm_object_property_add_uint32(obj, "int-slow-freq-hz", &state->int_slow_freq_hz);
    state->int_slow_freq_hz = 0;

    // TODO: Add code to initialise all members.
}

static void kinetis_mcg_realize_callback(DeviceState *dev, Error **errp)
{
    qemu_log_function_name();

    // Call parent realize().
    if (!cm_device_parent_realize(dev, errp, TYPE_KINETIS_MCG)) {
        return;
    }

    KinetisMCUState *mcu = kinetis_mcu_get();
    CortexMState *cm_state = CORTEXM_MCU_STATE(mcu);

    KinetisMCGState *state = KINETIS_MCG_STATE(dev);
    // First thing first: get capabilities from MCU, needed everywhere.
    state->capabilities = mcu->capabilities;

    // Also keep a local pointer, to access them easier.
    const KinetisCapabilities *capabilities = state->capabilities;
    assert(capabilities != NULL);

    Object *obj = OBJECT(dev);

    const char *periph_name = "MCG";

    svd_set_peripheral_address_block(cm_state->svd_json, periph_name, obj);
    peripheral_create_memory_region(obj);

    cm_object_property_set_int(obj, 1, "register-size-bytes");

    assert(capabilities->int_irc_freq_hz);
    assert(capabilities->int_fast_freq_hz);
    assert(capabilities->int_slow_freq_hz);

    if (state->int_irc_freq_hz == 0) {
        state->int_irc_freq_hz = capabilities->int_irc_freq_hz;
    }

    if (state->int_fast_freq_hz == 0) {
        state->int_fast_freq_hz = capabilities->int_fast_freq_hz;
    }

    if (state->int_slow_freq_hz == 0) {
        state->int_slow_freq_hz = capabilities->int_slow_freq_hz;
    }

    switch (capabilities->family) {
        case KINETIS_FAMILY_K6:


            mk64f12_mcg_create_objects(obj, cm_state->svd_json, periph_name);

            // TODO: add actions.
            // cm_object_property_set_str(state->u.k6.fld.xxx.fff, "GGG", "follows");
            // cm_object_property_set_str(state->u.k6.fld.xxx.fff, "GGG", "cleared-by");

            // TODO: add callbacks.
            // peripheral_register_set_pre_read(state->k6.reg.xxx, &kinetis_mcg_xxx_pre_read_callback);
            // peripheral_register_set_post_read(state->k6.reg.xxx, &kinetis_mcg_xxx_post_read_callback);
            // peripheral_register_set_pre_read(state->k6.reg.xxx, &kinetis_mcg_xxx_pret_read_callback);
            // peripheral_register_set_post_write(state->k6.reg.xxx, &kinetis_mcg_xxx_post_write_callback);
            peripheral_register_set_post_write(state->u.k6.reg.c1,
                    &kinetis_mcg_post_write_callback);
            peripheral_register_set_post_write(state->u.k6.reg.c2,
                    &kinetis_mcg_post_write_callback);
            peripheral_register_set_post_write(state->u.k6.reg.c4,
                    &kinetis_mcg_post_write_callback);
            peripheral_register_set_post_write(state->u.k6.reg.c5,
                    &kinetis_mcg_post_write_callback);
            peripheral_register_set_post_write(state->u.k6.reg.c6,
                    &kinetis_mcg_post_write_callback);
            peripheral_register_set_post_write(state->u.k6.reg.c7,
                    &kinetis_mcg_post_write_callback);
            peripheral_register_set_post_write(state->u.k6.reg.sc,
                    &kinetis_mcg_post_write_callback);

            // TODO: add interrupts.


            break;

        default:
            assert(false);
            break;
    }

    peripheral_prepare_registers(obj);
}

static void kinetis_mcg_reset_callback(DeviceState *dev)
{
    qemu_log_function_name();

    // Call parent reset(); this will reset all children registers.
    cm_device_parent_reset(dev, TYPE_KINETIS_MCG);

    KinetisMCGState *state = KINETIS_MCG_STATE(dev);

    kinetis_mcg_update_clocks(state);
}

static void kinetis_mcg_class_init_callback(ObjectClass *klass, void *data)
{
    DeviceClass *dc = DEVICE_CLASS(klass);

    dc->reset = kinetis_mcg_reset_callback;
    dc->realize = kinetis_mcg_realize_callback;
}

static const TypeInfo kinetis_mcg_type_info = {
    .name = TYPE_KINETIS_MCG,
    .parent = TYPE_KINETIS_MCG_PARENT,
    .instance_init = kinetis_mcg_instance_init_callback,
    .instance_size = sizeof(KinetisMCGState),
    .class_init = kinetis_mcg_class_init_callback,
    .class_size = sizeof(KinetisMCGClass) };

static void kinetis_mcg_register_types(void)
{
    type_register_static(&kinetis_mcg_type_info);
}

type_init(kinetis_mcg_register_types);

// ----------------------------------------------------------------------------
