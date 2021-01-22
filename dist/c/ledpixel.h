// Autogenerated C header file for LED Pixel
#ifndef _JACDAC_SPEC_LED_PIXEL_H
#define _JACDAC_SPEC_LED_PIXEL_H 1

#define JD_SERVICE_CLASS_LED_PIXEL  0x126f00e0

// enum LightType (uint8_t)
#define JD_LED_PIXEL_LIGHT_TYPE_WS2812B_GRB 0x0
#define JD_LED_PIXEL_LIGHT_TYPE_APA102 0x10
#define JD_LED_PIXEL_LIGHT_TYPE_SK9822 0x11

// enum Variant (uint32_t)
#define JD_LED_PIXEL_VARIANT_STRIP 0x1
#define JD_LED_PIXEL_VARIANT_RING 0x2
#define JD_LED_PIXEL_VARIANT_STICK 0x3
#define JD_LED_PIXEL_VARIANT_JEWEL 0x4

/**
 * Read-write ratio uint8_t. Set the luminosity of the strip.
 * At `0` the power to the strip is completely shut down.
 */
#define JD_LED_PIXEL_REG_BRIGHTNESS JD_REG_INTENSITY

/**
 * Read-only ratio uint8_t. This is the luminosity actually applied to the strip.
 * May be lower than `brightness` if power-limited by the `max_power` register.
 * It will rise slowly (few seconds) back to `brightness` is limits are no longer required.
 */
#define JD_LED_PIXEL_REG_ACTUAL_BRIGHTNESS 0x180

/**
 * Read-write LightType (uint8_t). Specifies the type of light strip connected to controller.
 * Controllers which are sold with lights should default to the correct type
 * and could not allow change.
 */
#define JD_LED_PIXEL_REG_LIGHT_TYPE 0x80

/**
 * Read-write uint16_t. Specifies the number of pixels in the strip.
 * Controllers which are sold with lights should default to the correct length
 * and could not allow change.
 * Increasing length at runtime leads to ineffective use of memory and may lead to controller reboot.
 */
#define JD_LED_PIXEL_REG_NUM_PIXELS 0x81

/**
 * Read-write mA uint16_t. Limit the power drawn by the light-strip (and controller).
 */
#define JD_LED_PIXEL_REG_MAX_POWER JD_REG_MAX_POWER

/**
 * Constant uint16_t. The maximum supported number of pixels.
 * All writes to `num_pixels` are clamped to `max_pixels`.
 */
#define JD_LED_PIXEL_REG_MAX_PIXELS 0x181

/**
 * Read-write uint16_t. How many times to repeat the program passed in `run` command.
 * Should be set before the `run` command.
 * Setting to `0` means to repeat forever.
 */
#define JD_LED_PIXEL_REG_NUM_REPEATS 0x82

/**
 * Constant Variant (uint32_t). Specifies the shape of the light strip.
 */
#define JD_LED_PIXEL_REG_VARIANT JD_REG_VARIANT

/**
 * Argument: program bytes. Run the given light "program". See service description for details.
 */
#define JD_LED_PIXEL_CMD_RUN 0x81

#endif