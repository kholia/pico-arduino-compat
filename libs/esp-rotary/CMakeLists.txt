add_library(pac-esp-rotary INTERFACE)

target_sources(pac-esp-rotary INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ESPRotary/src/ESPRotary.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESPRotary/src/ESPRotary.h"
)

target_include_directories(pac-esp-rotary INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ESPRotary/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-esp-rotary INTERFACE
    arduino-compat
)
