add_library(pac-hid-project INTERFACE)

target_sources(pac-hid-project INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/HID/src/port/samd.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/HID/src/SingleReport/SingleConsumer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/HID/src/SingleReport/SingleSystem.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/HID/src/SingleReport/SingleAbsoluteMouse.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/HID/src/SingleReport/SingleNKROKeyboard.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/HID/src/SingleReport/RawHID.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/HID/src/SingleReport/BootKeyboard.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/HID/src/SingleReport/SingleGamepad.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/HID/src/SingleReport/BootMouse.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/HID/src/MultiReport/System.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/HID/src/MultiReport/NKROKeyboard.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/HID/src/MultiReport/Consumer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/HID/src/MultiReport/Gamepad.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/HID/src/MultiReport/ImprovedKeyboard.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/HID/src/MultiReport/ImprovedMouse.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/HID/src/MultiReport/AbsoluteMouse.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/HID/src/MultiReport/SurfaceDial.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/HID/src/HID-APIs/TeensyKeyboardAPI.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/HID/src/HID-APIs/SurfaceDialAPI.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/HID/src/HID-APIs/AbsoluteMouseAPI.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/HID/src/HID-APIs/SystemAPI.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/HID/src/HID-APIs/MouseAPI.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/HID/src/HID-APIs/KeyboardAPI.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/HID/src/HID-APIs/NKROKeyboardAPI.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/HID/src/HID-APIs/ConsumerAPI.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/HID/src/HID-APIs/DefaultKeyboardAPI.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/HID/src/HID-APIs/GamepadAPI.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/HID/extras/rawhid/hid_LINUX.c"
  "${CMAKE_CURRENT_LIST_DIR}/HID/extras/rawhid/hid_WINDOWS.c"
  "${CMAKE_CURRENT_LIST_DIR}/HID/extras/rawhid/rawhid_test.c"
  "${CMAKE_CURRENT_LIST_DIR}/HID/extras/rawhid/hid_MACOSX.c"
  "${CMAKE_CURRENT_LIST_DIR}/HID/extras/rawhid/hid.h"
  "${CMAKE_CURRENT_LIST_DIR}/HID/src/HID-Settings.h"
  "${CMAKE_CURRENT_LIST_DIR}/HID/src/HID-Project.h"
  "${CMAKE_CURRENT_LIST_DIR}/HID/src/HID-APIs/KeyboardAPI.h"
  "${CMAKE_CURRENT_LIST_DIR}/HID/src/HID-APIs/MouseAPI.h"
  "${CMAKE_CURRENT_LIST_DIR}/HID/src/HID-APIs/SystemAPI.h"
  "${CMAKE_CURRENT_LIST_DIR}/HID/src/HID-APIs/NKROKeyboardAPI.h"
  "${CMAKE_CURRENT_LIST_DIR}/HID/src/HID-APIs/AbsoluteMouseAPI.h"
  "${CMAKE_CURRENT_LIST_DIR}/HID/src/HID-APIs/TeensyKeylayouts.h"
  "${CMAKE_CURRENT_LIST_DIR}/HID/src/HID-APIs/ConsumerAPI.h"
  "${CMAKE_CURRENT_LIST_DIR}/HID/src/HID-APIs/TeensyKeyboardAPI.h"
  "${CMAKE_CURRENT_LIST_DIR}/HID/src/HID-APIs/GamepadAPI.h"
  "${CMAKE_CURRENT_LIST_DIR}/HID/src/HID-APIs/DefaultKeyboardAPI.h"
  "${CMAKE_CURRENT_LIST_DIR}/HID/src/HID-APIs/SurfaceDialAPI.h"
  "${CMAKE_CURRENT_LIST_DIR}/HID/src/KeyboardLayouts/ImprovedKeylayoutsES.h"
  "${CMAKE_CURRENT_LIST_DIR}/HID/src/KeyboardLayouts/ImprovedKeylayoutsIT.h"
  "${CMAKE_CURRENT_LIST_DIR}/HID/src/KeyboardLayouts/ImprovedKeylayoutsSE.h"
  "${CMAKE_CURRENT_LIST_DIR}/HID/src/KeyboardLayouts/ImprovedKeylayoutsCH.h"
  "${CMAKE_CURRENT_LIST_DIR}/HID/src/KeyboardLayouts/ImprovedKeylayoutsDK.h"
  "${CMAKE_CURRENT_LIST_DIR}/HID/src/KeyboardLayouts/ImprovedKeylayoutsPT.h"
  "${CMAKE_CURRENT_LIST_DIR}/HID/src/KeyboardLayouts/ImprovedKeylayoutsDE.h"
  "${CMAKE_CURRENT_LIST_DIR}/HID/src/KeyboardLayouts/ImprovedKeylayoutsBE.h"
  "${CMAKE_CURRENT_LIST_DIR}/HID/src/KeyboardLayouts/ImprovedKeylayoutsUK.h"
  "${CMAKE_CURRENT_LIST_DIR}/HID/src/KeyboardLayouts/ImprovedKeylayouts.h"
  "${CMAKE_CURRENT_LIST_DIR}/HID/src/KeyboardLayouts/ImprovedKeylayoutsFR.h"
  "${CMAKE_CURRENT_LIST_DIR}/HID/src/KeyboardLayouts/ImprovedKeylayoutsUS.h"
  "${CMAKE_CURRENT_LIST_DIR}/HID/src/KeyboardLayouts/ImprovedKeylayoutsNO.h"
  "${CMAKE_CURRENT_LIST_DIR}/HID/src/SingleReport/SingleSystem.h"
  "${CMAKE_CURRENT_LIST_DIR}/HID/src/SingleReport/SingleAbsoluteMouse.h"
  "${CMAKE_CURRENT_LIST_DIR}/HID/src/SingleReport/RawHID.h"
  "${CMAKE_CURRENT_LIST_DIR}/HID/src/SingleReport/BootMouse.h"
  "${CMAKE_CURRENT_LIST_DIR}/HID/src/SingleReport/SingleConsumer.h"
  "${CMAKE_CURRENT_LIST_DIR}/HID/src/SingleReport/SingleNKROKeyboard.h"
  "${CMAKE_CURRENT_LIST_DIR}/HID/src/SingleReport/SingleGamepad.h"
  "${CMAKE_CURRENT_LIST_DIR}/HID/src/SingleReport/BootKeyboard.h"
  "${CMAKE_CURRENT_LIST_DIR}/HID/src/MultiReport/AbsoluteMouse.h"
  "${CMAKE_CURRENT_LIST_DIR}/HID/src/MultiReport/NKROKeyboard.h"
  "${CMAKE_CURRENT_LIST_DIR}/HID/src/MultiReport/System.h"
  "${CMAKE_CURRENT_LIST_DIR}/HID/src/MultiReport/SurfaceDial.h"
  "${CMAKE_CURRENT_LIST_DIR}/HID/src/MultiReport/Consumer.h"
  "${CMAKE_CURRENT_LIST_DIR}/HID/src/MultiReport/Gamepad.h"
  "${CMAKE_CURRENT_LIST_DIR}/HID/src/MultiReport/ImprovedMouse.h"
  "${CMAKE_CURRENT_LIST_DIR}/HID/src/MultiReport/ImprovedKeyboard.h"
)

target_include_directories(pac-hid-project INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/HID/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-hid-project INTERFACE
    arduino-compat
)
