// Autogenerated C header file for Dimmer
#ifndef _JACDAC_SPEC_DIMMER_H
#define _JACDAC_SPEC_DIMMER_H 1

#define JD_SERVICE_CLASS_DIMMER  0x1fb02645

// enum Variant (uint8_t)
#define JD_DIMMER_VARIANT_LIGHT 0x1
#define JD_DIMMER_VARIANT_FAN 0x2
#define JD_DIMMER_VARIANT_PUMP 0x3

/**
 * Read-write ratio u0.16 (uint16_t). The intensity of the current. Set to ``0`` to turn off completely the current.
 */
#define JD_DIMMER_REG_INTENSITY JD_REG_INTENSITY

/**
 * Constant Variant (uint8_t). The type of physical device
 */
#define JD_DIMMER_REG_VARIANT JD_REG_VARIANT

#endif