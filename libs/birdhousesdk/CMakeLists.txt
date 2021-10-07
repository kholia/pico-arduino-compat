add_library(pac-birdhousesdk INTERFACE)

target_sources(pac-birdhousesdk INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/birdhouse_sdk/src/an_indicators.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/birdhouse_sdk/src/buttons.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/birdhouse_sdk/src/relays_ext.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/birdhouse_sdk/src/Eeprom_at24c256.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/birdhouse_sdk/src/relays.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/birdhouse_sdk/src/base_relay.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/birdhouse_sdk/src/birdhouse_sdk.h"
)

target_include_directories(pac-birdhousesdk INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/birdhouse_sdk/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-birdhousesdk INTERFACE
    arduino-compat
)
