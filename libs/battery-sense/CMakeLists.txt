add_library(pac-battery-sense INTERFACE)

target_sources(pac-battery-sense INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/BatterySense/Battery.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/BatterySense/Battery.h"
)

target_include_directories(pac-battery-sense INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/BatterySense"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-battery-sense INTERFACE
    arduino-compat
)
