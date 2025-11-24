/**
 * @file main.cpp
 * @author Chimipupu(https://github.com/Chimipupu)
 * @brief メインファイル
 * @version 0.1
 * @date 2025-11-24
 * 
 * @copyright Copyright (c) 2025 Chimipupu All Rights Reserved.
 * 
 */

#include <Arduino.h>
#include <stdint.h>
#include "drv_dac.h"

void setup()
{
    // UART初期化
    Serial.begin(115200);
    delay(100);
    Serial.println("SAM3X8E Develop by Chimipupu(https://github.com/Chimipupu)");

    // DAC初期化
    drv_dac_init();

    // GPIO初期化
    pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
    static bool s_val = false;
    digitalWrite(LED_BUILTIN, s_val);
    s_val = !s_val;
    delay(500);
}