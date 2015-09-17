/*
 * This file is part of the Micro Python project, http://micropython.org/
 *
 * The MIT License (MIT)
 *
 * Copyright (c) 2015 Damien P. George
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */
#ifndef __MICROPY_INCLUDED_MICROBIT_MODMICROBIT_H__
#define __MICROPY_INCLUDED_MICROBIT_MODMICROBIT_H__

#include "py/objtuple.h"

extern const mp_obj_type_t microbit_pin_type;
extern const struct _microbit_pin_obj_t microbit_p0_obj;
extern const struct _microbit_pin_obj_t microbit_p1_obj;
extern const struct _microbit_pin_obj_t microbit_p2_obj;
extern const struct _microbit_pin_obj_t microbit_p3_obj;
extern const struct _microbit_pin_obj_t microbit_p4_obj;
extern const struct _microbit_pin_obj_t microbit_p5_obj;
extern const struct _microbit_pin_obj_t microbit_p6_obj;
extern const struct _microbit_pin_obj_t microbit_p7_obj;
extern const struct _microbit_pin_obj_t microbit_p8_obj;
extern const struct _microbit_pin_obj_t microbit_p9_obj;
extern const struct _microbit_pin_obj_t microbit_p10_obj;
extern const struct _microbit_pin_obj_t microbit_p11_obj;
extern const struct _microbit_pin_obj_t microbit_p12_obj;
extern const struct _microbit_pin_obj_t microbit_p13_obj;
extern const struct _microbit_pin_obj_t microbit_p14_obj;
extern const struct _microbit_pin_obj_t microbit_p15_obj;
extern const struct _microbit_pin_obj_t microbit_p16_obj;
extern const struct _microbit_pin_obj_t microbit_p19_obj;
extern const struct _microbit_pin_obj_t microbit_p20_obj;

extern const mp_obj_type_t microbit_io_type;
extern const struct _microbit_io_obj_t microbit_io_obj;

extern const mp_obj_type_t microbit_image_type;
extern const struct _microbit_image_obj_t microbit_image_obj;

extern const mp_obj_type_t microbit_accelerometer_type;
extern const struct _microbit_accelerometer_obj_t microbit_accelerometer_obj;

extern const struct _microbit_display_obj_t microbit_display_obj;
extern const struct _microbit_button_obj_t microbit_button_a_obj;
extern const struct _microbit_button_obj_t microbit_button_b_obj;
extern const struct _microbit_compass_obj_t microbit_compass_obj;

MP_DECLARE_CONST_FUN_OBJ(microbit_sleep_obj);
MP_DECLARE_CONST_FUN_OBJ(microbit_random_obj);
MP_DECLARE_CONST_FUN_OBJ(microbit_system_time_obj);
MP_DECLARE_CONST_FUN_OBJ(microbit_panic_obj);
MP_DECLARE_CONST_FUN_OBJ(microbit_accelerometer_get_x_obj);
MP_DECLARE_CONST_FUN_OBJ(microbit_accelerometer_get_y_obj);
MP_DECLARE_CONST_FUN_OBJ(microbit_accelerometer_get_z_obj);
MP_DECLARE_CONST_FUN_OBJ(microbit_button_is_pressed_obj);
MP_DECLARE_CONST_FUN_OBJ(microbit_compass_is_calibrated_obj);
MP_DECLARE_CONST_FUN_OBJ(microbit_compass_calibrate_obj);
MP_DECLARE_CONST_FUN_OBJ(microbit_compass_is_calibrating_obj);
MP_DECLARE_CONST_FUN_OBJ(microbit_compass_clear_calibration_obj);
MP_DECLARE_CONST_FUN_OBJ(microbit_compass_get_x_obj);
MP_DECLARE_CONST_FUN_OBJ(microbit_compass_get_y_obj);
MP_DECLARE_CONST_FUN_OBJ(microbit_compass_get_z_obj);
MP_DECLARE_CONST_FUN_OBJ(microbit_display_print_obj);
MP_DECLARE_CONST_FUN_OBJ(microbit_display_scroll_obj);
MP_DECLARE_CONST_FUN_OBJ(microbit_display_clear_obj);
MP_DECLARE_CONST_FUN_OBJ(microbit_display_animate_obj);
MP_DECLARE_CONST_FUN_OBJ(microbit_display_set_brightness_obj);
MP_DECLARE_CONST_FUN_OBJ(microbit_display_set_display_mode_obj);
MP_DECLARE_CONST_FUN_OBJ(microbit_image_set_pixel_value_obj);
MP_DECLARE_CONST_FUN_OBJ(microbit_pin_set_digital_value_obj);
MP_DECLARE_CONST_FUN_OBJ(microbit_pin_get_digital_value_obj);
MP_DECLARE_CONST_FUN_OBJ(microbit_pin_set_analog_value_obj);
MP_DECLARE_CONST_FUN_OBJ(microbit_pin_get_analog_value_obj);
MP_DECLARE_CONST_FUN_OBJ(microbit_pin_is_touched_obj);

extern const mp_obj_module_t microbit_module;

#endif // __MICROPY_INCLUDED_MICROBIT_MODMICROBIT_H__
