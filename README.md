# Arduino Due(ATSAM3X8E)評価F/W開発

## 開発環境

> [!CAUTION]
> ⚠️Arduino Due(ATSAM3X8E)のArduino側のサポートが5年前(2020年)から更新なし

- H/W
  - [Arduino Due](https://docs.arduino.cc/hardware/due/)🔗
- S/W
  - IDE
    - [Arduino IDE V2.3.6](https://github.com/arduino/arduino-ide/releases/tag/2.3.6)🔗
  - ボードライブラリ
    - [ArduinoCore-sam](https://github.com/arduino/ArduinoCore-sam)🔗

## ATSAM3X8Eのスペック

> [!IMPORTANT]
> Atmel作成の[データシート](https://ww1.microchip.com/downloads/en/DeviceDoc/Atmel-11057-32-bit-Cortex-M3-Microcontroller-SAM3X-SAM3A_Datasheet.pdf)🔗をリファレンスに開発

| 機能 | 本数 | 備考 |
| --- | --- | --- |
| CPU | x1 | ARM Cortex-M3 |
| Clock | 84 MHz | - |
| Flash | 512 KB | - |
| SRAM | 96 KB | - |
| DMA | x6本 | - |
| GPIO | x103本 | - |
| 外部バス | 32bit x7本 |  |
| I2C | x2本 | - |
| I2S | x1本 | - |
| SPI | x6本 | - |
| USART | x3本 | - |
| UART | x2本 | - |
| SDIO | x1本 | - |
| 汎用タイマー | 32bit x9本 | - |
| PWM | 16bit x8本 | - |
| RTC | x1本 | カレンダー機能あり |
| ADC | 12bit x16本 @1Msps | - |
| DAC | 12bit x2本 | - |
| CAN | x2本 | - |
| Ethernet MAC | x1本 @10 / 100 Mbit | - |
| USB | x1本 | USB2.0 @480 Mbps<br>(Deveice / Host) |
| TRNG | x1本 | 真性乱数生成器 |
