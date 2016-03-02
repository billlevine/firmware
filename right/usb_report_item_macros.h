#ifndef __USB_REPORT_ITEM_DATA_CONST__
#define __USB_REPORT_ITEM_DATA_CONST__

// Includes:

    #include "include/lufa/Common.h"
    #include "include/lufa/HIDClassCommon.h"

// Macros:

    #define HID_RI_USAGE_PAGE_GENERIC_DESKTOP 0x01
    #define HID_RI_USAGE_PAGE_LEDS            0x08
    #define HID_RI_USAGE_PAGE_MOUSE_BUTTONS   0x09

    #define HID_RI_USAGE_POINTER               0x01
    #define HID_RI_USAGE_MOUSE                 0x02
    #define HID_RI_USAGE_JOYSTICK              0x04
    #define HID_RI_USAGE_KEYBOARD              0x06
    #define HID_RI_USAGE_X                     0x30
    #define HID_RI_USAGE_Y                     0x31
    #define HID_RI_USAGE_WHEEL                 0x38
    #define HID_RI_USAGE_RESOLUTION_MULTIPLIER 0x48

    #define HID_RI_COLLECTION_PHYSICAL    0x00
    #define HID_RI_COLLECTION_APPLICATION 0x01
    #define HID_RI_COLLECTION_LOGICAL     0x02

    #define HID_RI_USAGE_PAGE_KEY_CODES 0x07

#endif
