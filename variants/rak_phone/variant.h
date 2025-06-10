// #ifndef _VARIANT_H
// #define _VARIANT_H

#define I2C_SDA 9
#define I2C_SCL 40

#define USE_SX1262

#define LORA_SCK 5
#define LORA_MISO 3
#define LORA_MOSI 6
#define LORA_CS 7
#define LORA_RESET 8

#ifdef USE_SX1262
#define SX126X_CS LORA_CS
#define SX126X_DIO1 47
#define SX126X_BUSY 48
#define SX126X_RESET LORA_RESET
#define SX126X_DIO2_AS_RF_SWITCH
#define SX126X_DIO3_TCXO_VOLTAGE 1.8
#endif

#define SX126X_POWER_EN (4)

// #define PIN_POWER_EN PIN_3V3_EN
// #define PIN_3V3_EN (2)

#define SPI_MOSI (11)
#define SPI_SCK (13)
#define SPI_MISO (10)
#define SPI_CS (12)

#define SCREEN_ROTATE

#define HAS_BUTTON 1
#define BUTTON_PIN 38

#define CANNED_MESSAGE_MODULE_ENABLE 1
#define USE_VIRTUAL_KEYBOARD 1
// #endif