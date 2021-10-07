add_library(pac-esp32tinyusb INTERFACE)

target_sources(pac-esp32tinyusb INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/EspTinyUSB/src/usb_descriptors.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EspTinyUSB/src/esptinyusb.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EspTinyUSB/src/device/midi/midiusb.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EspTinyUSB/src/device/web/webusb.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EspTinyUSB/src/device/dfu/dfuusb.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EspTinyUSB/src/device/hid/hidcomposite.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EspTinyUSB/src/device/hid/hidgeneric.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EspTinyUSB/src/device/hid/hidusb.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EspTinyUSB/src/device/hid/hidmouse.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EspTinyUSB/src/device/hid/hidgamepad.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EspTinyUSB/src/device/hid/hidkeyboard.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EspTinyUSB/src/device/msc/mscusb.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EspTinyUSB/src/device/msc/sdcard.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EspTinyUSB/src/device/msc/flashdisk.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EspTinyUSB/src/device/msc/ramdisk.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EspTinyUSB/src/device/cdc/cdcusb.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EspTinyUSB/src/host/acm/usb_acm.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EspTinyUSB/src/host/common/usb_device.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EspTinyUSB/src/host/common/usb_host.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EspTinyUSB/src/host/msc/usb_msc.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EspTinyUSB/src/host/msc/vfs/diskio_rawmsc.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EspTinyUSB/src/usb_msc.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/EspTinyUSB/src/usb_requests.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/EspTinyUSB/src/usb_device.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/EspTinyUSB/src/usb_host.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/EspTinyUSB/src/usb_acm.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/EspTinyUSB/src/diskio_rawmsc.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/EspTinyUSB/src/ramdisk.h"
  "${CMAKE_CURRENT_LIST_DIR}/EspTinyUSB/src/hidgamepad.h"
  "${CMAKE_CURRENT_LIST_DIR}/EspTinyUSB/src/hidkeyboard.h"
  "${CMAKE_CURRENT_LIST_DIR}/EspTinyUSB/src/usb_descriptors.h"
  "${CMAKE_CURRENT_LIST_DIR}/EspTinyUSB/src/webusb.h"
  "${CMAKE_CURRENT_LIST_DIR}/EspTinyUSB/src/flashdisk.h"
  "${CMAKE_CURRENT_LIST_DIR}/EspTinyUSB/src/hidusb.h"
  "${CMAKE_CURRENT_LIST_DIR}/EspTinyUSB/src/hidkeylayout.h"
  "${CMAKE_CURRENT_LIST_DIR}/EspTinyUSB/src/esptinyusb.h"
  "${CMAKE_CURRENT_LIST_DIR}/EspTinyUSB/src/hidgeneric.h"
  "${CMAKE_CURRENT_LIST_DIR}/EspTinyUSB/src/hidcomposite.h"
  "${CMAKE_CURRENT_LIST_DIR}/EspTinyUSB/src/cdcusb.h"
  "${CMAKE_CURRENT_LIST_DIR}/EspTinyUSB/src/sdusb.h"
  "${CMAKE_CURRENT_LIST_DIR}/EspTinyUSB/src/dfuusb.h"
  "${CMAKE_CURRENT_LIST_DIR}/EspTinyUSB/src/mscusb.h"
  "${CMAKE_CURRENT_LIST_DIR}/EspTinyUSB/src/midiusb.h"
  "${CMAKE_CURRENT_LIST_DIR}/EspTinyUSB/src/hidmouse.h"
  "${CMAKE_CURRENT_LIST_DIR}/EspTinyUSB/examples/device/midi/song.h"
  "${CMAKE_CURRENT_LIST_DIR}/EspTinyUSB/examples/host/remote_pendrive/app_css.h"
  "${CMAKE_CURRENT_LIST_DIR}/EspTinyUSB/examples/host/remote_pendrive/app_js.h"
  "${CMAKE_CURRENT_LIST_DIR}/EspTinyUSB/examples/host/remote_pendrive/index_html.h"
)

target_include_directories(pac-esp32tinyusb INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/EspTinyUSB/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET pac-sd)
    add_subdirectory(../../libs/sd build_pac-sd)
endif()

target_link_libraries(pac-esp32tinyusb INTERFACE
    arduino-compat
    pac-sd
)
