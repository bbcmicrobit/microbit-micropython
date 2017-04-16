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

#include <string.h>

extern "C" {

#include "py/mpstate.h"
#include "py/mphal.h"
#include "microbitimage.h"
#include "microbitdisplay.h"
#include "serial.h"

void mp_hal_init(void) {
    MP_STATE_PORT(keyboard_interrupt_obj) = mp_obj_new_exception(&mp_type_KeyboardInterrupt);
}

void mp_hal_set_interrupt_char(int c) {
    microbit_serial_set_interrupt_char(c);
}

int mp_hal_stdin_rx_any(void) {
    return microbit_serial_readable();
}

int mp_hal_stdin_rx_chr(void) {
    return microbit_serial_getc();
}

void mp_hal_stdout_tx_str(const char *str) {
    mp_hal_stdout_tx_strn(str, strlen(str));
}

void mp_hal_stdout_tx_strn(const char *str, size_t len) {
    for (; len > 0; --len) {
        microbit_serial_putc(*str++);
    }
}

void mp_hal_stdout_tx_strn_cooked(const char *str, size_t len) {
    for (; len > 0; --len) {
        if (*str == '\n') {
            microbit_serial_putc('\r');
        }
        microbit_serial_putc(*str++);
    }
}

STATIC void mp_hal_print_many(const char chrs[8], unsigned int total) {
    while (total > 0) {
        unsigned int n = total;
        if (n > 8) {
            n = 8;
        }
        total -= n;
        mp_hal_stdout_tx_strn(chrs, n);
    }
}

void mp_hal_move_cursor_back(unsigned int pos) {
    mp_hal_print_many("\b\b\b\b\b\b\b\b", pos);
}

void mp_hal_erase_line_from_cursor(unsigned int n_chars) {
    mp_hal_print_many("        ", n_chars);
    mp_hal_move_cursor_back(n_chars);
}

void mp_hal_display_string(const char *str) {
    microbit_display_scroll(&microbit_display_obj, str, true);
}

extern uint32_t ticks;

void mp_hal_delay_ms(mp_uint_t ms) {
    if (ms <= 0)
        return;
    unsigned long current = ticks;
    unsigned long wakeup = current + ms;
    if (wakeup < current) {
        // Overflow
        do {
            __WFI();
        } while (ticks > current);
    }
    do {
        __WFI();
    } while (ticks < wakeup);
}

}
