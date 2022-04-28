// Autogenerated C header file for LED Single
#ifndef _JACDAC_SPEC_LED_SINGLE_H
#define _JACDAC_SPEC_LED_SINGLE_H 1

#define JD_SERVICE_CLASS_LED_SINGLE  0x1e3048f8

// enum Variant (uint8_t)
#define JD_LED_SINGLE_VARIANT_THROUGH_HOLE 0x1
#define JD_LED_SINGLE_VARIANT_SMD 0x2
#define JD_LED_SINGLE_VARIANT_POWER 0x3
#define JD_LED_SINGLE_VARIANT_BEAD 0x4

/**
 * This has the same semantics as `set_status_light` in the control service.
 */
#define JD_LED_SINGLE_CMD_ANIMATE 0x80
typedef struct jd_led_single_animate {
    uint8_t to_red;
    uint8_t to_green;
    uint8_t to_blue;
    uint8_t speed;
} jd_led_single_animate_t;


/**
 * The current color of the LED.
 */
#define JD_LED_SINGLE_REG_COLOR 0x180
typedef struct jd_led_single_color {
    uint8_t red;
    uint8_t green;
    uint8_t blue;
} jd_led_single_color_t;


/**
 * Read-write mA uint16_t. Limit the power drawn by the light-strip (and controller).
 */
#define JD_LED_SINGLE_REG_MAX_POWER JD_REG_MAX_POWER

/**
 * Constant uint16_t. If known, specifies the number of LEDs in parallel on this device.
 */
#define JD_LED_SINGLE_REG_LED_COUNT 0x183

/**
 * Constant nm uint16_t. If monochrome LED, specifies the wave length of the LED.
 */
#define JD_LED_SINGLE_REG_WAVE_LENGTH 0x181

/**
 * Constant mcd uint16_t. The luminous intensity of the LED, at full value, in micro candella.
 */
#define JD_LED_SINGLE_REG_LUMINOUS_INTENSITY 0x182

/**
 * Constant Variant (uint8_t). The physical type of LED.
 */
#define JD_LED_SINGLE_REG_VARIANT JD_REG_VARIANT

#endif