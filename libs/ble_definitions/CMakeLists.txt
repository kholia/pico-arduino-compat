add_library(pac-ble_definitions INTERFACE)

target_sources(pac-ble_definitions INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ble_definitions/src/ble_service_definitions.h"
  "${CMAKE_CURRENT_LIST_DIR}/ble_definitions/src/ble_custom_service_definitions.h"
  "${CMAKE_CURRENT_LIST_DIR}/ble_definitions/src/ble_definitions.h"
  "${CMAKE_CURRENT_LIST_DIR}/ble_definitions/src/ble_custom_characteristic_definitions.h"
  "${CMAKE_CURRENT_LIST_DIR}/ble_definitions/src/ble_characteristic_definitions.h"
)

target_include_directories(pac-ble_definitions INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ble_definitions/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-ble_definitions INTERFACE
    arduino-compat
)
