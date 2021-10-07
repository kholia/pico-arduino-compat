add_library(pac-esp32spislave INTERFACE)

target_sources(pac-esp32spislave INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ESP32SPISlave/ESP32SPISlave.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32SPISlave/ESP32SPISlave.h"
)

target_include_directories(pac-esp32spislave INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ESP32SPISlave"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-esp32spislave INTERFACE
    arduino-compat
)
