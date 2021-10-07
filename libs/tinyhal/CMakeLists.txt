add_library(pac-tinyhal INTERFACE)

target_sources(pac-tinyhal INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/tinyhal/unittest/main.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/tinyhal/unittest/hal_tests.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/tinyhal/buildsys/unittest/simple_lib/src/source.c"
  "${CMAKE_CURRENT_LIST_DIR}/tinyhal/src/hal/tiny_serial.c"
  "${CMAKE_CURRENT_LIST_DIR}/tinyhal/src/hal/tiny_list.c"
  "${CMAKE_CURRENT_LIST_DIR}/tinyhal/src/hal/tiny_types.c"
  "${CMAKE_CURRENT_LIST_DIR}/tinyhal/buildsys/unittest/simple_lib/src/header.h"
  "${CMAKE_CURRENT_LIST_DIR}/tinyhal/src/tiny_hal.h"
  "${CMAKE_CURRENT_LIST_DIR}/tinyhal/src/hal/tiny_debug.h"
  "${CMAKE_CURRENT_LIST_DIR}/tinyhal/src/hal/tiny_list.h"
  "${CMAKE_CURRENT_LIST_DIR}/tinyhal/src/hal/tiny_serial.h"
  "${CMAKE_CURRENT_LIST_DIR}/tinyhal/src/hal/tiny_types.h"
  "${CMAKE_CURRENT_LIST_DIR}/tinyhal/src/hal/avr/avr_hal.h"
  "${CMAKE_CURRENT_LIST_DIR}/tinyhal/src/hal/mingw32/mingw32_hal.h"
  "${CMAKE_CURRENT_LIST_DIR}/tinyhal/src/hal/esp32/esp32_hal.h"
  "${CMAKE_CURRENT_LIST_DIR}/tinyhal/src/hal/arduino/arduino_hal.h"
  "${CMAKE_CURRENT_LIST_DIR}/tinyhal/src/hal/linux/linux_hal.h"
  "${CMAKE_CURRENT_LIST_DIR}/tinyhal/src/hal/linux/linux_serial.h"
  "${CMAKE_CURRENT_LIST_DIR}/tinyhal/src/hal/no_platform/no_platform_hal.h"
  "${CMAKE_CURRENT_LIST_DIR}/tinyhal/src/hal/no_platform/noplatform_serial.h"
  "${CMAKE_CURRENT_LIST_DIR}/tinyhal/src/hal/win32/win32_hal.h"
  "${CMAKE_CURRENT_LIST_DIR}/tinyhal/src/hal/win32/win32_serial.h"
)

target_include_directories(pac-tinyhal INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/tinyhal/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-tinyhal INTERFACE
    arduino-compat
)
