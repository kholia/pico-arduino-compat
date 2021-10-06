add_library(esp32_gamepad INTERFACE)

target_sources(esp32_gamepad INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/esp32_gamepad/src/esp32_gamepad.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/esp32_gamepad/src/esp32_gamepad.h"
)

target_include_directories(esp32_gamepad INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/esp32_gamepad/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(esp32_gamepad INTERFACE
    arduino-compat
)
