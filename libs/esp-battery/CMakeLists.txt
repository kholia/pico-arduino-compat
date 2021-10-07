add_library(pac-esp-battery INTERFACE)

target_sources(pac-esp-battery INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ESPBattery/ESPBattery.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESPBattery/ESPBattery.h"
)

target_include_directories(pac-esp-battery INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ESPBattery"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-esp-battery INTERFACE
    arduino-compat
)
