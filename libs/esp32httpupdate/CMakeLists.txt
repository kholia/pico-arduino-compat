add_library(pac-esp32httpupdate INTERFACE)

target_sources(pac-esp32httpupdate INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/esp32-http-update/src/ESP32httpUpdate.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/esp32-http-update/src/ESP32httpUpdate.h"
)

target_include_directories(pac-esp32httpupdate INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/esp32-http-update/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-esp32httpupdate INTERFACE
    arduino-compat
)
