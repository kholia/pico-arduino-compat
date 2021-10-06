add_library(bluepad32 INTERFACE)

target_sources(bluepad32 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/bluepad32-arduino/src/Gamepad.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/bluepad32-arduino/src/Bluepad32.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/bluepad32-arduino/src/utility/spi_drv.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/bluepad32-arduino/src/Bluepad32.h"
  "${CMAKE_CURRENT_LIST_DIR}/bluepad32-arduino/src/constants.h"
  "${CMAKE_CURRENT_LIST_DIR}/bluepad32-arduino/src/Gamepad.h"
  "${CMAKE_CURRENT_LIST_DIR}/bluepad32-arduino/src/utility/wl_definitions.h"
  "${CMAKE_CURRENT_LIST_DIR}/bluepad32-arduino/src/utility/wl_types.h"
  "${CMAKE_CURRENT_LIST_DIR}/bluepad32-arduino/src/utility/wifi_spi.h"
  "${CMAKE_CURRENT_LIST_DIR}/bluepad32-arduino/src/utility/spi_drv.h"
  "${CMAKE_CURRENT_LIST_DIR}/bluepad32-arduino/src/utility/debug.h"
)

target_include_directories(bluepad32 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/bluepad32-arduino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(bluepad32 INTERFACE
    arduino-compat
)
