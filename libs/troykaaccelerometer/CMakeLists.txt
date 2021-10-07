add_library(pac-troykaaccelerometer INTERFACE)

target_sources(pac-troykaaccelerometer INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TroykaAccelerometer/src/TroykaAccelerometer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TroykaAccelerometer/src/TroykaAccelerometer.h"
)

target_include_directories(pac-troykaaccelerometer INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TroykaAccelerometer/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-troykaaccelerometer INTERFACE
    arduino-compat
)
