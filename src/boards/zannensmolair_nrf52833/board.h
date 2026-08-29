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

#ifndef _ZNSMOLAIR
#define _ZNSMOLAIR

/*------------------------------------------------------------------*/
/* Power
 *------------------------------------------------------------------*/
// VDDH is shorted to VDD (3.3 V) on this board. REG0 (VDDH -> VDD) is an
// LDO-only stage on the nRF52833 and must saturate in this topology, so its
// UICR output voltage is set to 3.3 V (factory default is 1.8 V).
#define UICR_REGOUT0_VALUE UICR_REGOUT0_VOUT_3V3

// Enable the REG1 DC/DC converter (VDD -> 1.3 V core). This is the only
// on-chip DC/DC stage of the nRF52833 (REG0 is LDO-only, hence no DCDCEN0
// register exists on this chip); the board has the DCC/DEC4 LC network.
#define ENABLE_DCDC_1 1

/*------------------------------------------------------------------*/
/* LED
 *------------------------------------------------------------------*/
#define LEDS_NUMBER     1
#define LED_PRIMARY_PIN PINNUM(0, 31) // White status LED
#define LED_STATE_ON    1

#define NEOPIXELS_NUMBER 0

/*------------------------------------------------------------------*/
/* BUTTON
 *------------------------------------------------------------------*/
// This board has no buttons.

//--------------------------------------------------------------------+
// BLE OTA
//--------------------------------------------------------------------+
#define BLEDIS_MANUFACTURER "ZannenApp"
#define BLEDIS_MODEL        "ZannenSmolAir"

//--------------------------------------------------------------------+
// USB
//--------------------------------------------------------------------+
// VID 0x1209 is the pid.codes open-source VID; PID 0x7691 is the next free
// PID after the ZannenDongle_nRF52840 board (0x7690) of the same vendor.
#define USB_DESC_VID          0x1209
#define USB_DESC_UF2_PID      0x7691
#define USB_DESC_CDC_ONLY_PID 0x7691

// Board/firmware name: "ZannenSmolAir", vendor: "zannen".
#define UF2_PRODUCT_NAME      "ZannenSmolAir"
#define UF2_VOLUME_LABEL      "ZNSMOLAIR"
#define UF2_BOARD_ID          "nRF52833-ZannenSmolAir"
#define UF2_INDEX_URL         "https://github.com/zannendane/SlimeVR-Tracker-nRF"

#endif // _ZNSMOLAIR
