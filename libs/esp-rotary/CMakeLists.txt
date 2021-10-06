add_library(esp-rotary INTERFACE)

target_sources(esp-rotary INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ESPRotary/src/ESPRotary.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESPRotary/src/ESPRotary.h"
)

target_include_directories(esp-rotary INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ESPRotary/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(esp-rotary INTERFACE
    arduino-compat
)
