add_library(pac-usbhid INTERFACE)

target_sources(pac-usbhid INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/USBHID_stm32f1/USBMultiSerial.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/USBHID_stm32f1/Consumer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/USBHID_stm32f1/Mouse.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/USBHID_stm32f1/usb_setup.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/USBHID_stm32f1/AbsMouse.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/USBHID_stm32f1/USBMIDI.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/USBHID_stm32f1/HIDReports.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/USBHID_stm32f1/USBHID.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/USBHID_stm32f1/Digitizer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/USBHID_stm32f1/Joystick.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/USBHID_stm32f1/USBComposite.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/USBHID_stm32f1/USBMultiXBox360.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/USBHID_stm32f1/USBCompositeSerial.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/USBHID_stm32f1/Keyboard.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/USBHID_stm32f1/USBAudio.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/USBHID_stm32f1/USBXBox360Reporter.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/USBHID_stm32f1/USBXBox360W.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/USBHID_stm32f1/USBMassStorage.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/USBHID_stm32f1/usb_mass_mal.c"
  "${CMAKE_CURRENT_LIST_DIR}/USBHID_stm32f1/usb_midi_device.c"
  "${CMAKE_CURRENT_LIST_DIR}/USBHID_stm32f1/usb_audio.c"
  "${CMAKE_CURRENT_LIST_DIR}/USBHID_stm32f1/usb_x360_generic.c"
  "${CMAKE_CURRENT_LIST_DIR}/USBHID_stm32f1/usb_generic.c"
  "${CMAKE_CURRENT_LIST_DIR}/USBHID_stm32f1/usb_mass.c"
  "${CMAKE_CURRENT_LIST_DIR}/USBHID_stm32f1/usb_composite_serial.c"
  "${CMAKE_CURRENT_LIST_DIR}/USBHID_stm32f1/usb_hid.c"
  "${CMAKE_CURRENT_LIST_DIR}/USBHID_stm32f1/usb_scsi.c"
  "${CMAKE_CURRENT_LIST_DIR}/USBHID_stm32f1/MinSysex.c"
  "${CMAKE_CURRENT_LIST_DIR}/USBHID_stm32f1/usb_x360w.c"
  "${CMAKE_CURRENT_LIST_DIR}/USBHID_stm32f1/usb_multi_x360.c"
  "${CMAKE_CURRENT_LIST_DIR}/USBHID_stm32f1/usb_multi_serial.c"
  "${CMAKE_CURRENT_LIST_DIR}/USBHID_stm32f1/usb_scsi_data.c"
  "${CMAKE_CURRENT_LIST_DIR}/USBHID_stm32f1/USBHID.h"
  "${CMAKE_CURRENT_LIST_DIR}/USBHID_stm32f1/USBXBox360.h"
  "${CMAKE_CURRENT_LIST_DIR}/USBHID_stm32f1/usb_multi_serial.h"
  "${CMAKE_CURRENT_LIST_DIR}/USBHID_stm32f1/usb_midi_device.h"
  "${CMAKE_CURRENT_LIST_DIR}/USBHID_stm32f1/usb_mass_internal.h"
  "${CMAKE_CURRENT_LIST_DIR}/USBHID_stm32f1/usb_x360w.h"
  "${CMAKE_CURRENT_LIST_DIR}/USBHID_stm32f1/usb_mass_mal.h"
  "${CMAKE_CURRENT_LIST_DIR}/USBHID_stm32f1/usb_scsi.h"
  "${CMAKE_CURRENT_LIST_DIR}/USBHID_stm32f1/USBAudio.h"
  "${CMAKE_CURRENT_LIST_DIR}/USBHID_stm32f1/usb_composite_serial.h"
  "${CMAKE_CURRENT_LIST_DIR}/USBHID_stm32f1/usb_mass.h"
  "${CMAKE_CURRENT_LIST_DIR}/USBHID_stm32f1/USBMassStorage.h"
  "${CMAKE_CURRENT_LIST_DIR}/USBHID_stm32f1/USBMIDI.h"
  "${CMAKE_CURRENT_LIST_DIR}/USBHID_stm32f1/MinSysex.h"
  "${CMAKE_CURRENT_LIST_DIR}/USBHID_stm32f1/usb_multi_x360.h"
  "${CMAKE_CURRENT_LIST_DIR}/USBHID_stm32f1/USBMultiSerial.h"
  "${CMAKE_CURRENT_LIST_DIR}/USBHID_stm32f1/USBCompositeSerial.h"
  "${CMAKE_CURRENT_LIST_DIR}/USBHID_stm32f1/usb_hid.h"
  "${CMAKE_CURRENT_LIST_DIR}/USBHID_stm32f1/MidiSpecs.h"
  "${CMAKE_CURRENT_LIST_DIR}/USBHID_stm32f1/usb_x360_generic.h"
  "${CMAKE_CURRENT_LIST_DIR}/USBHID_stm32f1/USBComposite.h"
  "${CMAKE_CURRENT_LIST_DIR}/USBHID_stm32f1/USBMultiXBox360.h"
  "${CMAKE_CURRENT_LIST_DIR}/USBHID_stm32f1/usb_generic.h"
  "${CMAKE_CURRENT_LIST_DIR}/USBHID_stm32f1/usb_audio.h"
  "${CMAKE_CURRENT_LIST_DIR}/USBHID_stm32f1/examples/mass/image.h"
)

target_include_directories(pac-usbhid INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/USBHID_stm32f1"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-usbhid INTERFACE
    arduino-compat
)
