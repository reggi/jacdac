// Autogenerated C header file for Multitouch
#ifndef _JACDAC_SPEC_MULTITOUCH_H
#define _JACDAC_SPEC_MULTITOUCH_H 1

#define JD_SERVICE_CLASS_MULTITOUCH  0x18d55e2b

/**
 * Read-only. Capacitance of channels. The capacitance is continuously calibrated, and a value of `0` indicates
 * no touch, wheres a value of around `100` or more indicates touch.
 * It's best to ignore this (unless debugging), and use events.
 */
#define JD_MULTITOUCH_REG_CAPACITY JD_REG_READING
typedef struct jd_multitouch_capacity {
    int32_t capacitance[0];
} jd_multitouch_capacity_t;


/**
 * Argument: channel uint32_t. Emitted when an input is touched.
 */
#define JD_MULTITOUCH_EV_TOUCH 0x1

/**
 * Argument: channel uint32_t. Emitted when an input is no longer touched.
 */
#define JD_MULTITOUCH_EV_RELEASE 0x2

/**
 * Argument: channel uint32_t. Emitted when an input is briefly touched. TODO Not implemented.
 */
#define JD_MULTITOUCH_EV_TAP 0x3

/**
 * Argument: channel uint32_t. Emitted when an input is touched for longer than 500ms. TODO Not implemented.
 */
#define JD_MULTITOUCH_EV_LONG_PRESS 0x4

/**
 * Emitted when input channels are successively touched in order of increasing channel numbers.
 */
#define JD_MULTITOUCH_EV_SWIPE_POS 0x10

/**
 * Emitted when input channels are successively touched in order of decreasing channel numbers.
 */
#define JD_MULTITOUCH_EV_SWIPE_NEG 0x11

#endif