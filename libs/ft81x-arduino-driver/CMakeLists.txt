add_library(ft81x-arduino-driver INTERFACE)

target_sources(ft81x-arduino-driver INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/FT81x_Arduino_Driver/src/FT81x.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FT81x_Arduino_Driver/src/platforms/teensy/DmaSpi.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FT81x_Arduino_Driver/src/FT81x.h"
  "${CMAKE_CURRENT_LIST_DIR}/FT81x_Arduino_Driver/src/platforms/teensy/DmaSpi.h"
  "${CMAKE_CURRENT_LIST_DIR}/FT81x_Arduino_Driver/src/platforms/teensy/ChipSelect.h"
)

target_include_directories(ft81x-arduino-driver INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/FT81x_Arduino_Driver/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(ft81x-arduino-driver INTERFACE
    arduino-compat
)
