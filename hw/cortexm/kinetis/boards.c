/*
 * Freescale Kinetis boards emulation.
 *
 * Copyright (c) 2014 Liviu Ionescu.
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

#include <hw/cortexm/board.h>
#include <hw/cortexm/kinetis/mcus.h>
#include <hw/cortexm/helper.h>

#if defined(CONFIG_VERBOSE)
#include "verbosity.h"
#endif

/*
 * This file defines several Kinetis boards.
 * Where available, the board names follow the CMSIS Packs names.
 */

/* ----- FRDM-K64F ----- */
static void frdm_k64f_board_init_callback(MachineState *machine)
{
    CortexMBoardState *board = CORTEXM_BOARD_STATE(machine);

    cortexm_board_greeting(board);
//    BoardGraphicContext *board_graphic_context =
//            cortexm_board_init_graphic_image(board, "FRDM-K64F.jpg");
    {
        // Create the MCU.
        Object *mcu = cm_object_new_mcu(machine, TYPE_MK64FN1M0VLL12);

        // Set the board specific oscillator frequencies.
        cm_object_property_set_int(mcu, 50000000, "xtal-freq-hz"); // 50.0 MHz
        cm_object_property_set_int(mcu, 32768, "xtal32-freq-hz"); // 32 kHz

        cm_object_realize(mcu);
    }

#if 0
    Object *peripheral = cm_container_get_peripheral();
    // Create board LEDs
    gpio_led_create_from_info(peripheral, stm32f4_discovery_leds_info,
            board_graphic_context);

    if (board_graphic_context != NULL) {
        // Create board buttons.
        button_reset_create_from_info(peripheral,
                &stm32f4_discovery_button_reset_info, board_graphic_context);
        button_gpio_create_from_info(peripheral,
                stm32f4_discovery_buttons_user_info, board_graphic_context);
    }
#endif
}

static void frdm_k64f_board_class_init_callback(ObjectClass *oc,
        void *data)
{
    MachineClass *mc = MACHINE_CLASS(oc);

    mc->desc = "Freescale Freedom Development Platform for "
               "Kinetis K6[34] and K24 MCUs (Experimental)";
    mc->init = frdm_k64f_board_init_callback;
}

static const TypeInfo frdm_k64f_machine = {
    .name = BOARD_TYPE_NAME("FRDM-K64F"),
    .parent = TYPE_CORTEXM_BOARD,
    .class_init = frdm_k64f_board_class_init_callback,
};

#if 0

/* ----- FRDM-K20D50M ----- */
static void frdm_k20d50m_board_init(MachineState *machine);

static QEMUMachine frdm_k20d50m_machine = {
    .name = "FRDM-K20D50M",
    .desc = "Freescale Freedom Development Platform for "
            "Kinetis K20 USB MCUs (Experimental)",
    .init = frdm_k20d50m_board_init };

static void frdm_k20d50m_board_init(MachineState *machine)
{
    cm_board_greeting(machine);
    mk20dx128vlh5_mcu_init(machine);
    /* TODO: Add board inits */
}

/* ----- FRDM-K22F ----- */
static void frdm_k22f_board_init(MachineState *machine);

static QEMUMachine frdm_k22f_machine = {
    .name = "FRDM-K22F",
    .desc = "Freescale Freedom Development Platform for "
            "Kinetis K22 MCUs (Experimental)",
    .init = frdm_k22f_board_init };

static void frdm_k22f_board_init(MachineState *machine)
{
    cm_board_greeting(machine);
    mk22fn512vlh12_mcu_init(machine);
    /* TODO: Add board inits */
}

/* ----- TWR-K60F120M ----- */
static void twr_k60f120m_board_init(MachineState *machine);

static QEMUMachine twr_k60f120m_machine = {
    .name = "TWR-K60F120M",
    .desc = "Freescale Kinetis K60 120 MHz Tower System Module (Experimental)",
    .init = twr_k60f120m_board_init };

static void twr_k60f120m_board_init(MachineState *machine)
{
    cm_board_greeting(machine);
    mk64fn1m0vll12_mcu_init(machine);
    /* TODO: Add board inits */
}

/* ----- FRDM-KL25Z ----- */
static void frdm_kl25z_board_init(MachineState *machine);

static QEMUMachine frdm_kl25z_machine = {
    .name = "FRDM-KL25Z",
    .desc = "Freescale Freedom Development Platform for "
            "Kinetis KL[12][45] MCUs (Experimental)",
    .init = frdm_kl25z_board_init };

static void frdm_kl25z_board_init(MachineState *machine)
{
    cm_board_greeting(machine);
    mkl25z128vlk4_mcu_init(machine);
    /* TODO: Add board inits */
}

/* ----- FRDM-KL26Z ----- */
static void frdm_kl26z_board_init(MachineState *machine);

static QEMUMachine frdm_kl26z_machine = {
    .name = "FRDM-KL26Z",
    .desc = "Freescale Freedom Development Platform for "
            "Kinetis KL[12]6 MCUs (Experimental)",
    .init = frdm_kl26z_board_init };

static void frdm_kl26z_board_init(MachineState *machine)
{
    cm_board_greeting(machine);
    mkl26z128vlh4_mcu_init(machine);

    /* TODO: Add board inits */
}

/* ----- FRDM-KL43Z ----- */
static void frdm_kl43z_board_init(MachineState *machine);

static QEMUMachine frdm_kl43z_machine = {
    .name = "FRDM-KL43Z",
    .desc = "Freescale Freedom Development Platform for "
            "Kinetis KL[34]3, KL[12]7 MCUs (Experimental)",
    .init = frdm_kl43z_board_init };

static void frdm_kl43z_board_init(MachineState *machine)
{
    cm_board_greeting(machine);
    mkl43z256vlh4_mcu_init(machine);

    /* TODO: Add board inits */
}

/* ----- FRDM-KL46Z ----- */
static void frdm_kl46z_board_init(MachineState *machine);

static QEMUMachine frdm_kl46z_machine = {
    .name = "FRDM-KL46Z",
    .desc = "Freescale Freedom Development Platform for "
            "Kinetis KL[34]x MCUs (Experimental)",
    .init = frdm_kl46z_board_init };

static void frdm_kl46z_board_init(MachineState *machine)
{
    cm_board_greeting(machine);
    mkl46z256vll4_mcu_init(machine);

    /* TODO: Add board inits */
}
#endif

/* ----- Boards inits ----- */
static void kinetis_machines_init(void)
{
    type_register_static(&frdm_k64f_machine);
#if 0
    qemu_register_machine(&frdm_k20d50m_machine);
    qemu_register_machine(&frdm_k22f_machine);
    qemu_register_machine(&twr_k60f120m_machine);
    qemu_register_machine(&frdm_kl25z_machine);
    qemu_register_machine(&frdm_kl26z_machine);
    qemu_register_machine(&frdm_kl46z_machine);
    qemu_register_machine(&frdm_kl43z_machine);
#endif
}

type_init(kinetis_machines_init);
