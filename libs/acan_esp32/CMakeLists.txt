add_library(acan_esp32 INTERFACE)

target_sources(acan_esp32 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/acan-esp32/src/ACAN_ESP32.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/acan-esp32/src/ACAN_ESP32_Settings.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/acan-esp32/src/ACAN_ESP32_Settings.h"
  "${CMAKE_CURRENT_LIST_DIR}/acan-esp32/src/ACAN_ESP32_CANRegisters.h"
  "${CMAKE_CURRENT_LIST_DIR}/acan-esp32/src/ACANBuffer16.h"
  "${CMAKE_CURRENT_LIST_DIR}/acan-esp32/src/ACAN_ESP32.h"
  "${CMAKE_CURRENT_LIST_DIR}/acan-esp32/src/ACAN_ESP32_AcceptanceFilters.h"
  "${CMAKE_CURRENT_LIST_DIR}/acan-esp32/src/CANMessage.h"
)

target_include_directories(acan_esp32 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/acan-esp32/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(acan_esp32 INTERFACE
    arduino-compat
)
