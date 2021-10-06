add_library(magalpha-angle-sensor-library INTERFACE)

target_sources(magalpha-angle-sensor-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MagAlpha-Arduino-Library/src/MagAlpha.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MagAlpha-Arduino-Library/src/MagAlpha.h"
)

target_include_directories(magalpha-angle-sensor-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MagAlpha-Arduino-Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(magalpha-angle-sensor-library INTERFACE
    arduino-compat
)
