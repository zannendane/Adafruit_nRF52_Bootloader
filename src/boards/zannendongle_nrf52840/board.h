/*
 * The MIT License (MIT)
 *
 * Copyright (c) 2020 Nick Winans
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

#ifndef _ZNDONGLE
#define _ZNDONGLE

#define UICR_REGOUT0_VALUE UICR_REGOUT0_VOUT_3V3

/*------------------------------------------------------------------*/
/* LED
 *------------------------------------------------------------------*/
#define LEDS_NUMBER     2
#define LED_PRIMARY_PIN PINNUM(0, 8) // Blue
#define LED_SECONDARY_PIN PINNUM(0, 12) // Red
#define LED_STATE_ON    1

// RGB LED (for internal status colors)
#define LED_RGB_RED_PIN        PINNUM(0, 12)   // P0.12
#define LED_RGB_GREEN_PIN      PINNUM(1, 9)    // P1.09
#define LED_RGB_BLUE_PIN       PINNUM(0, 8)    // P0.08
#define BOARD_RGB_BRIGHTNESS   0x404040

#define NEOPIXELS_NUMBER      0

/*------------------------------------------------------------------*/
/* BUTTON
 *------------------------------------------------------------------*/
// This board has no buttons

//--------------------------------------------------------------------+
// BLE OTA
//--------------------------------------------------------------------+
#define BLEDIS_MANUFACTURER "ZannenApp"
#define BLEDIS_MODEL        "ZannenDongle"

//--------------------------------------------------------------------+
// USB
//--------------------------------------------------------------------+
#define USB_DESC_VID          0x1209
#define USB_DESC_UF2_PID      0x7690
#define USB_DESC_CDC_ONLY_PID 0x7690

#define UF2_PRODUCT_NAME      "ZannenDongle_nRF52840"
#define UF2_VOLUME_LABEL      "ZNDONGLE"
#define UF2_BOARD_ID          "nRF52840-ZannenDongle"
#define UF2_INDEX_URL         "https://github.com/zannendane/SlimeVR-Tracker-nRF-Receiver"

#endif // _ZNDONGLE
