add_library(pac-esp32time INTERFACE)

target_sources(pac-esp32time INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ESP32Time/ESP32Time.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32Time/ESP32Time.h"
)

target_include_directories(pac-esp32time INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ESP32Time"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-esp32time INTERFACE
    arduino-compat
)
