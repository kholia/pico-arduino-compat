add_library(pac-calibratedspeed INTERFACE)

target_sources(pac-calibratedspeed INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/CalibratedSpeed/src/CalibratedSpeed.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/CalibratedSpeed/src/CalibratedSpeed.h"
)

target_include_directories(pac-calibratedspeed INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/CalibratedSpeed/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-calibratedspeed INTERFACE
    arduino-compat
)
