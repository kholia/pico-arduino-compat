add_library(pac-usb-host-shield-library-2.0 INTERFACE)

target_sources(pac-usb-host-shield-library-2.0 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/USB_Host_Shield_2.0/hidcomposite.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/USB_Host_Shield_2.0/AMBX.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/USB_Host_Shield_2.0/PS3BT.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/USB_Host_Shield_2.0/masstorage.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/USB_Host_Shield_2.0/cdcprolific.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/USB_Host_Shield_2.0/Usb.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/USB_Host_Shield_2.0/parsetools.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/USB_Host_Shield_2.0/XBOXUSB.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/USB_Host_Shield_2.0/PS3USB.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/USB_Host_Shield_2.0/hidusagetitlearrays.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/USB_Host_Shield_2.0/max_LCD.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/USB_Host_Shield_2.0/BTD.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/USB_Host_Shield_2.0/cdcftdi.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/USB_Host_Shield_2.0/hidboot.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/USB_Host_Shield_2.0/adk.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/USB_Host_Shield_2.0/usbhid.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/USB_Host_Shield_2.0/usbhub.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/USB_Host_Shield_2.0/hidescriptorparser.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/USB_Host_Shield_2.0/XBOXONE.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/USB_Host_Shield_2.0/hiduniversal.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/USB_Host_Shield_2.0/XBOXONESParser.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/USB_Host_Shield_2.0/XBOXRECV.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/USB_Host_Shield_2.0/BTHID.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/USB_Host_Shield_2.0/UHS2_gpio.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/USB_Host_Shield_2.0/cdcacm.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/USB_Host_Shield_2.0/XBOXOLD.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/USB_Host_Shield_2.0/PSBuzz.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/USB_Host_Shield_2.0/SPP.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/USB_Host_Shield_2.0/cdc_XR21B1411.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/USB_Host_Shield_2.0/SwitchProParser.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/USB_Host_Shield_2.0/Wii.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/USB_Host_Shield_2.0/PS5Trigger.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/USB_Host_Shield_2.0/PS4Parser.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/USB_Host_Shield_2.0/PS5Parser.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/USB_Host_Shield_2.0/message.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/USB_Host_Shield_2.0/MiniDSP.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/USB_Host_Shield_2.0/usbh_midi.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/USB_Host_Shield_2.0/examples/HID/USBHIDJoystick/hidjoystickrptparser.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/USB_Host_Shield_2.0/examples/HID/scale/scale_rptparser.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/USB_Host_Shield_2.0/examples/HID/SRWS1/SRWS1.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/USB_Host_Shield_2.0/examples/HID/le3dp/le3dp_rptparser.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/USB_Host_Shield_2.0/XBOXONESBT.h"
  "${CMAKE_CURRENT_LIST_DIR}/USB_Host_Shield_2.0/cdcprolific.h"
  "${CMAKE_CURRENT_LIST_DIR}/USB_Host_Shield_2.0/Usb.h"
  "${CMAKE_CURRENT_LIST_DIR}/USB_Host_Shield_2.0/controllerEnums.h"
  "${CMAKE_CURRENT_LIST_DIR}/USB_Host_Shield_2.0/masstorage.h"
  "${CMAKE_CURRENT_LIST_DIR}/USB_Host_Shield_2.0/usbhub.h"
  "${CMAKE_CURRENT_LIST_DIR}/USB_Host_Shield_2.0/usb_ch9.h"
  "${CMAKE_CURRENT_LIST_DIR}/USB_Host_Shield_2.0/avrpins.h"
  "${CMAKE_CURRENT_LIST_DIR}/USB_Host_Shield_2.0/PS3BT.h"
  "${CMAKE_CURRENT_LIST_DIR}/USB_Host_Shield_2.0/SwitchProBT.h"
  "${CMAKE_CURRENT_LIST_DIR}/USB_Host_Shield_2.0/PS5USB.h"
  "${CMAKE_CURRENT_LIST_DIR}/USB_Host_Shield_2.0/usbh_midi.h"
  "${CMAKE_CURRENT_LIST_DIR}/USB_Host_Shield_2.0/SPP.h"
  "${CMAKE_CURRENT_LIST_DIR}/USB_Host_Shield_2.0/hidescriptorparser.h"
  "${CMAKE_CURRENT_LIST_DIR}/USB_Host_Shield_2.0/cdcacm.h"
  "${CMAKE_CURRENT_LIST_DIR}/USB_Host_Shield_2.0/adk.h"
  "${CMAKE_CURRENT_LIST_DIR}/USB_Host_Shield_2.0/confdescparser.h"
  "${CMAKE_CURRENT_LIST_DIR}/USB_Host_Shield_2.0/SwitchProUSB.h"
  "${CMAKE_CURRENT_LIST_DIR}/USB_Host_Shield_2.0/hexdump.h"
  "${CMAKE_CURRENT_LIST_DIR}/USB_Host_Shield_2.0/cdc_XR21B1411.h"
  "${CMAKE_CURRENT_LIST_DIR}/USB_Host_Shield_2.0/XBOXONESParser.h"
  "${CMAKE_CURRENT_LIST_DIR}/USB_Host_Shield_2.0/AMBX.h"
  "${CMAKE_CURRENT_LIST_DIR}/USB_Host_Shield_2.0/hidboot.h"
  "${CMAKE_CURRENT_LIST_DIR}/USB_Host_Shield_2.0/PS3Enums.h"
  "${CMAKE_CURRENT_LIST_DIR}/USB_Host_Shield_2.0/address.h"
  "${CMAKE_CURRENT_LIST_DIR}/USB_Host_Shield_2.0/max_LCD.h"
  "${CMAKE_CURRENT_LIST_DIR}/USB_Host_Shield_2.0/UsbCore.h"
  "${CMAKE_CURRENT_LIST_DIR}/USB_Host_Shield_2.0/cdcftdi.h"
  "${CMAKE_CURRENT_LIST_DIR}/USB_Host_Shield_2.0/macros.h"
  "${CMAKE_CURRENT_LIST_DIR}/USB_Host_Shield_2.0/XBOXRECV.h"
  "${CMAKE_CURRENT_LIST_DIR}/USB_Host_Shield_2.0/printhex.h"
  "${CMAKE_CURRENT_LIST_DIR}/USB_Host_Shield_2.0/hidusagestr.h"
  "${CMAKE_CURRENT_LIST_DIR}/USB_Host_Shield_2.0/PS3USB.h"
  "${CMAKE_CURRENT_LIST_DIR}/USB_Host_Shield_2.0/BTHID.h"
  "${CMAKE_CURRENT_LIST_DIR}/USB_Host_Shield_2.0/MiniDSP.h"
  "${CMAKE_CURRENT_LIST_DIR}/USB_Host_Shield_2.0/parsetools.h"
  "${CMAKE_CURRENT_LIST_DIR}/USB_Host_Shield_2.0/xboxEnums.h"
  "${CMAKE_CURRENT_LIST_DIR}/USB_Host_Shield_2.0/XBOXOLD.h"
  "${CMAKE_CURRENT_LIST_DIR}/USB_Host_Shield_2.0/UHS2_gpio.h"
  "${CMAKE_CURRENT_LIST_DIR}/USB_Host_Shield_2.0/hidcomposite.h"
  "${CMAKE_CURRENT_LIST_DIR}/USB_Host_Shield_2.0/Wii.h"
  "${CMAKE_CURRENT_LIST_DIR}/USB_Host_Shield_2.0/PS4Parser.h"
  "${CMAKE_CURRENT_LIST_DIR}/USB_Host_Shield_2.0/settings.h"
  "${CMAKE_CURRENT_LIST_DIR}/USB_Host_Shield_2.0/PS4USB.h"
  "${CMAKE_CURRENT_LIST_DIR}/USB_Host_Shield_2.0/XBOXONE.h"
  "${CMAKE_CURRENT_LIST_DIR}/USB_Host_Shield_2.0/BTD.h"
  "${CMAKE_CURRENT_LIST_DIR}/USB_Host_Shield_2.0/message.h"
  "${CMAKE_CURRENT_LIST_DIR}/USB_Host_Shield_2.0/sink_parser.h"
  "${CMAKE_CURRENT_LIST_DIR}/USB_Host_Shield_2.0/usbhid.h"
  "${CMAKE_CURRENT_LIST_DIR}/USB_Host_Shield_2.0/PSBuzz.h"
  "${CMAKE_CURRENT_LIST_DIR}/USB_Host_Shield_2.0/PS5Parser.h"
  "${CMAKE_CURRENT_LIST_DIR}/USB_Host_Shield_2.0/version_helper.h"
  "${CMAKE_CURRENT_LIST_DIR}/USB_Host_Shield_2.0/XBOXUSB.h"
  "${CMAKE_CURRENT_LIST_DIR}/USB_Host_Shield_2.0/PS5BT.h"
  "${CMAKE_CURRENT_LIST_DIR}/USB_Host_Shield_2.0/PS5Trigger.h"
  "${CMAKE_CURRENT_LIST_DIR}/USB_Host_Shield_2.0/AMBXEnums.h"
  "${CMAKE_CURRENT_LIST_DIR}/USB_Host_Shield_2.0/max3421e.h"
  "${CMAKE_CURRENT_LIST_DIR}/USB_Host_Shield_2.0/PS4BT.h"
  "${CMAKE_CURRENT_LIST_DIR}/USB_Host_Shield_2.0/usbhost.h"
  "${CMAKE_CURRENT_LIST_DIR}/USB_Host_Shield_2.0/SwitchProParser.h"
  "${CMAKE_CURRENT_LIST_DIR}/USB_Host_Shield_2.0/hiduniversal.h"
  "${CMAKE_CURRENT_LIST_DIR}/USB_Host_Shield_2.0/examples/Bluetooth/BTHID/MouseParser.h"
  "${CMAKE_CURRENT_LIST_DIR}/USB_Host_Shield_2.0/examples/Bluetooth/BTHID/KeyboardParser.h"
  "${CMAKE_CURRENT_LIST_DIR}/USB_Host_Shield_2.0/examples/USB_desc/pgmstrings.h"
  "${CMAKE_CURRENT_LIST_DIR}/USB_Host_Shield_2.0/examples/acm/acm_terminal/pgmstrings.h"
  "${CMAKE_CURRENT_LIST_DIR}/USB_Host_Shield_2.0/examples/hub_demo/pgmstrings.h"
  "${CMAKE_CURRENT_LIST_DIR}/USB_Host_Shield_2.0/examples/ftdi/USBFTDILoopback/pgmstrings.h"
  "${CMAKE_CURRENT_LIST_DIR}/USB_Host_Shield_2.0/examples/HID/USBHIDJoystick/hidjoystickrptparser.h"
  "${CMAKE_CURRENT_LIST_DIR}/USB_Host_Shield_2.0/examples/HID/scale/scale_rptparser.h"
  "${CMAKE_CURRENT_LIST_DIR}/USB_Host_Shield_2.0/examples/HID/SRWS1/SRWS1.h"
  "${CMAKE_CURRENT_LIST_DIR}/USB_Host_Shield_2.0/examples/HID/USBHID_desc/pgmstrings.h"
  "${CMAKE_CURRENT_LIST_DIR}/USB_Host_Shield_2.0/examples/HID/le3dp/le3dp_rptparser.h"
)

target_include_directories(pac-usb-host-shield-library-2.0 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/USB_Host_Shield_2.0"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-usb-host-shield-library-2.0 INTERFACE
    arduino-compat
)
