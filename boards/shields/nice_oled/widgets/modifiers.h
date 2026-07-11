/*
 * Copyright (c) 2024 The ZMK Contributors
 *
 * SPDX-License-Identifier: MIT
 */

#pragma once

#include <lvgl.h>
#include <zephyr/kernel.h>
#include "util.h"

/* Modifiers widget: now uses a label to show the state as text */
struct zmk_widget_modifiers {
    sys_snode_t node;
    lv_obj_t *obj;
};

/**
 * Initializes the modifiers widget.
 *
 * @param widget Pointer to the widget structure.
 * @param parent Parent LVGL object in which the widget is created.
 * @return 0 on successful initialization.
 */
int zmk_widget_modifiers_init(struct zmk_widget_modifiers *widget, lv_obj_t *parent);
