// Autogenerated C header file for HID Adapter
#ifndef _JACDAC_SPEC_H_IDADAPTER_H
#define _JACDAC_SPEC_H_IDADAPTER_H 1

#define JD_SERVICE_CLASS_H_IDADAPTER  0x1e5758b5

/**
 * Read-write uint8_t. The number of configurations stored on the server.
 */
#define JD_H_IDADAPTER_REG_NUM_CONFIGURATIONS 0x80

/**
 * Read-write uint8_t. The current configuration the server is using.
 */
#define JD_H_IDADAPTER_REG_CURRENT_CONFIGURATION 0x81

/**
 * Retrieves a configuration stored on the server. If the configuration does not exist, an empty report will be returned
 */
#define JD_H_IDADAPTER_CMD_GET_CONFIGURATION 0x80
typedef struct jd_h_idadapter_get_configuration {
    uint8_t results[12];  // pipe
    uint8_t configuration_number;
} jd_h_idadapter_get_configuration_t;


/**
 * Retrieves a configuration stored on the server. If the configuration does not exist, an empty report will be returned
 */
typedef struct jd_h_idadapter_configuration {
    uint8_t configuration_number;
    uint8_t binding_index;
    uint16_t padding;  // u8[2]
    uint64_t device_id;
    uint32_t service_class;
    uint32_t trigger_value;
    uint8_t trigger_context;
    uint8_t service_index;
    uint16_t selector;
    uint16_t modifiers;
} jd_h_idadapter_configuration_t;


/**
 * Stores the given binding on the server. If a binding exists at this index, the new binding will replace it.
 */
#define JD_H_IDADAPTER_CMD_SET_BINDING 0x82
typedef struct jd_h_idadapter_set_binding {
    uint8_t configuration_number;
    uint8_t binding_index;
    uint16_t padding;  // u8[2]
    uint64_t device_id;
    uint32_t service_class;
    uint32_t trigger_value;
    uint8_t trigger_context;
    uint8_t service_index;
    uint16_t selector;
    uint16_t modifiers;
} jd_h_idadapter_set_binding_t;


/**
 * Clears a specific binding stored on the device.
 */
#define JD_H_IDADAPTER_CMD_CLEAR_BINDING 0x83
typedef struct jd_h_idadapter_clear_binding {
    uint8_t configuration_number;
    uint8_t binding_index;
} jd_h_idadapter_clear_binding_t;


/**
 * Argument: configuration_number uint8_t. Clears a specific configuration stored on the device.
 */
#define JD_H_IDADAPTER_CMD_CLEAR_CONFIGURATION 0x84

/**
 * No args. Clears all configurations and bindings stored on the device.
 */
#define JD_H_IDADAPTER_CMD_CLEAR 0x85

/**
 * Event that notifies clients that the server has swapped to a new configuration or changed key bindings.
 */
#define JD_H_IDADAPTER_EV_CHANGED JD_EV_CHANGE

#endif
