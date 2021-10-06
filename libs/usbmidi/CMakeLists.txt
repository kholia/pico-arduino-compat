add_library(usbmidi INTERFACE)

target_sources(usbmidi INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/USBMIDI/src/usbmidi_pluggableusb.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/USBMIDI/src/midi_serialization.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/USBMIDI/src/usbmidi_vusb.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/USBMIDI/vusb/libs-host/hiddata.c"
  "${CMAKE_CURRENT_LIST_DIR}/USBMIDI/vusb/libs-host/opendevice.c"
  "${CMAKE_CURRENT_LIST_DIR}/USBMIDI/vusb/libs-device/osccal.c"
  "${CMAKE_CURRENT_LIST_DIR}/USBMIDI/vusb/examples/usbtool/usbtool.c"
  "${CMAKE_CURRENT_LIST_DIR}/USBMIDI/vusb/examples/usbtool/opendevice.c"
  "${CMAKE_CURRENT_LIST_DIR}/USBMIDI/vusb/examples/hid-custom-rq/commandline/opendevice.c"
  "${CMAKE_CURRENT_LIST_DIR}/USBMIDI/vusb/examples/hid-custom-rq/commandline/set-led.c"
  "${CMAKE_CURRENT_LIST_DIR}/USBMIDI/vusb/examples/hid-custom-rq/firmware/main.c"
  "${CMAKE_CURRENT_LIST_DIR}/USBMIDI/vusb/examples/hid-mouse/firmware/main.c"
  "${CMAKE_CURRENT_LIST_DIR}/USBMIDI/vusb/examples/hid-data/commandline/hiddata.c"
  "${CMAKE_CURRENT_LIST_DIR}/USBMIDI/vusb/examples/hid-data/commandline/hidtool.c"
  "${CMAKE_CURRENT_LIST_DIR}/USBMIDI/vusb/examples/hid-data/firmware/main.c"
  "${CMAKE_CURRENT_LIST_DIR}/USBMIDI/vusb/examples/custom-class/commandline/opendevice.c"
  "${CMAKE_CURRENT_LIST_DIR}/USBMIDI/vusb/examples/custom-class/commandline/set-led.c"
  "${CMAKE_CURRENT_LIST_DIR}/USBMIDI/vusb/examples/custom-class/firmware/main.c"
  "${CMAKE_CURRENT_LIST_DIR}/USBMIDI/vusb/tests/main.c"
  "${CMAKE_CURRENT_LIST_DIR}/USBMIDI/vusb/tests/null.c"
  "${CMAKE_CURRENT_LIST_DIR}/USBMIDI/vusb/usbdrv/oddebug.c"
  "${CMAKE_CURRENT_LIST_DIR}/USBMIDI/vusb/usbdrv/usbdrv.c"
  "${CMAKE_CURRENT_LIST_DIR}/USBMIDI/src/vusb.c"
  "${CMAKE_CURRENT_LIST_DIR}/USBMIDI/vusb/libs-host/opendevice.h"
  "${CMAKE_CURRENT_LIST_DIR}/USBMIDI/vusb/libs-host/hidsdi.h"
  "${CMAKE_CURRENT_LIST_DIR}/USBMIDI/vusb/libs-host/hiddata.h"
  "${CMAKE_CURRENT_LIST_DIR}/USBMIDI/vusb/libs-device/osccal.h"
  "${CMAKE_CURRENT_LIST_DIR}/USBMIDI/vusb/libs-device/osctune.h"
  "${CMAKE_CURRENT_LIST_DIR}/USBMIDI/vusb/examples/usbtool/opendevice.h"
  "${CMAKE_CURRENT_LIST_DIR}/USBMIDI/vusb/examples/hid-custom-rq/commandline/opendevice.h"
  "${CMAKE_CURRENT_LIST_DIR}/USBMIDI/vusb/examples/hid-custom-rq/firmware/usbconfig.h"
  "${CMAKE_CURRENT_LIST_DIR}/USBMIDI/vusb/examples/hid-custom-rq/firmware/requests.h"
  "${CMAKE_CURRENT_LIST_DIR}/USBMIDI/vusb/examples/hid-mouse/firmware/usbconfig.h"
  "${CMAKE_CURRENT_LIST_DIR}/USBMIDI/vusb/examples/hid-data/commandline/hidsdi.h"
  "${CMAKE_CURRENT_LIST_DIR}/USBMIDI/vusb/examples/hid-data/commandline/hiddata.h"
  "${CMAKE_CURRENT_LIST_DIR}/USBMIDI/vusb/examples/hid-data/firmware/usbconfig.h"
  "${CMAKE_CURRENT_LIST_DIR}/USBMIDI/vusb/examples/custom-class/commandline/opendevice.h"
  "${CMAKE_CURRENT_LIST_DIR}/USBMIDI/vusb/examples/custom-class/firmware/usbconfig.h"
  "${CMAKE_CURRENT_LIST_DIR}/USBMIDI/vusb/examples/custom-class/firmware/requests.h"
  "${CMAKE_CURRENT_LIST_DIR}/USBMIDI/vusb/tests/usbconfig.h"
  "${CMAKE_CURRENT_LIST_DIR}/USBMIDI/vusb/usbdrv/usbdrv.h"
  "${CMAKE_CURRENT_LIST_DIR}/USBMIDI/vusb/usbdrv/oddebug.h"
  "${CMAKE_CURRENT_LIST_DIR}/USBMIDI/vusb/usbdrv/usbportability.h"
  "${CMAKE_CURRENT_LIST_DIR}/USBMIDI/vusb/usbdrv/usbconfig-prototype.h"
  "${CMAKE_CURRENT_LIST_DIR}/USBMIDI/src/usbmidi.h"
  "${CMAKE_CURRENT_LIST_DIR}/USBMIDI/src/fifo.h"
  "${CMAKE_CURRENT_LIST_DIR}/USBMIDI/src/midi_serialization.h"
  "${CMAKE_CURRENT_LIST_DIR}/USBMIDI/src/usbconfig.h"
  "${CMAKE_CURRENT_LIST_DIR}/USBMIDI/src/midi_messages.h"
  "${CMAKE_CURRENT_LIST_DIR}/USBMIDI/src/usbdrv.h"
  "${CMAKE_CURRENT_LIST_DIR}/USBMIDI/src/usbboard.h"
)

target_include_directories(usbmidi INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/USBMIDI/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(usbmidi INTERFACE
    arduino-compat
)
