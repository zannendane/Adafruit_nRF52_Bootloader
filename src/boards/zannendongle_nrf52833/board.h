/*
 * The MIT License (MIT)
 *
 * Copyright (c) 2026 zannen
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

#ifndef _ZNDONGLE33
#define _ZNDONGLE33

/*------------------------------------------------------------------*/
/* Power
 *------------------------------------------------------------------*/
// Normal voltage mode: VDDH is shorted to VDD (3.3 V) on this board, so
// REG0 is automatically disabled and never supplies external components;
// UICR REGOUT0 is intentionally left at its default (do not define
// UICR_REGOUT0_VALUE). The DCC pin is not connected (no LC network), so
// REG1 runs in LDO mode only and DCDC must stay disabled (do not define
// ENABLE_DCDC_1).

/*------------------------------------------------------------------*/
/* LED
 *------------------------------------------------------------------*/
#define LEDS_NUMBER     1
#define LED_PRIMARY_PIN PINNUM(0, 15) // White status LED
#define LED_STATE_ON    1

#define NEOPIXELS_NUMBER 0

/*------------------------------------------------------------------*/
/* BUTTON
 *------------------------------------------------------------------*/
// SW0 on P0.20, switch to GND. Hold at power-on to force DFU mode.
#define BUTTON_DFU     20
#define BUTTON_PULL    NRF_GPIO_PIN_PULLUP

//--------------------------------------------------------------------+
// BLE OTA
//--------------------------------------------------------------------+
#define BLEDIS_MANUFACTURER "ZannenApp"
#define BLEDIS_MODEL        "ZannenDongle33"

//--------------------------------------------------------------------+
// USB
//--------------------------------------------------------------------+
// VID 0x1209 is the pid.codes open-source VID; PID 0x7692 is the next free
// PID after ZannenDongle_nRF52840 (0x7690) and ZannenSmolAir (0x7691).
#define USB_DESC_VID          0x1209
#define USB_DESC_UF2_PID      0x7692
#define USB_DESC_CDC_ONLY_PID 0x7692

#define UF2_PRODUCT_NAME      "ZannenDongle_nRF52833"
#define UF2_VOLUME_LABEL      "ZNDONGLE33"
#define UF2_BOARD_ID          "nRF52833-ZannenDongle33"
#define UF2_INDEX_URL         "https://github.com/zannendane/SlimeVR-Tracker-nRF-Receiver"

#endif // _ZNDONGLE33
