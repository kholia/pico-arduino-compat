add_library(pac-magalpha-angle-sensor-library INTERFACE)

target_sources(pac-magalpha-angle-sensor-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MagAlpha-Arduino-Library/src/MagAlpha.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MagAlpha-Arduino-Library/src/MagAlpha.h"
)

target_include_directories(pac-magalpha-angle-sensor-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MagAlpha-Arduino-Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-magalpha-angle-sensor-library INTERFACE
    arduino-compat
)
