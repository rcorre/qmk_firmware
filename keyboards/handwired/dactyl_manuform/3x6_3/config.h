#pragma once

// Communication
#define USE_SERIAL
#define SERIAL_USART_FULL_DUPLEX
#define SERIAL_USART_TX_PIN GP0
#define SERIAL_USART_RX_PIN GP1
#define SERIAL_PIO_USE_PIO0
#define SERIAL_USART_TIMEOUT 100
#define SERIAL_USART_SPEED 921600

// D+/D- are wired to GP0/GP1 on the left half, and reversed on the right.
// If they are wired to the same GP pins on both sides, define SERIAL_USART_PIN_SWAP.
// #define SERIAL_USART_PIN_SWAP

#define MASTER_LEFT

#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 200U
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_LED_MASK 0U

// This makes it easier for fast typists to use dual-function keys
#define PERMISSIVE_HOLD

// Trackball
#define SPLIT_POINTING_ENABLE
#define ROTATIONAL_TRANSFORM_ANGLE  -25
#define POINTING_DEVICE_INVERT_Y
#define POINTING_DEVICE_RIGHT
#define POINTING_DEVICE_TASK_THROTTLE_MS 1
#define PMW33XX_LIFTOFF_DISTANCE 0x02

#define SPI_DRIVER SPID1

#define PMW33XX_CS_PIN GP29
#define SPI_SCK_PIN GP28
#define SPI_MOSI_PIN GP27
#define SPI_MISO_PIN GP26
