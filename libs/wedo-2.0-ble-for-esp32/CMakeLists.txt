add_library(wedo-2.0-ble-for-esp32 INTERFACE)

target_sources(wedo-2.0-ble-for-esp32 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/esp32_ble_wedo/ble_functions.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/esp32_ble_wedo/esp32_ble_wedo.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/esp32_ble_wedo/ble_help_functions.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/esp32_ble_wedo/wedo_color_definitions.h"
  "${CMAKE_CURRENT_LIST_DIR}/esp32_ble_wedo/ble_help_functions.h"
  "${CMAKE_CURRENT_LIST_DIR}/esp32_ble_wedo/esp32_ble_wedo.h"
  "${CMAKE_CURRENT_LIST_DIR}/esp32_ble_wedo/ble_functions.h"
)

target_include_directories(wedo-2.0-ble-for-esp32 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/esp32_ble_wedo"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(wedo-2.0-ble-for-esp32 INTERFACE
    arduino-compat
)
