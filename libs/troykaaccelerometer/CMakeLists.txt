add_library(troykaaccelerometer INTERFACE)

target_sources(troykaaccelerometer INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TroykaAccelerometer/src/TroykaAccelerometer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TroykaAccelerometer/src/TroykaAccelerometer.h"
)

target_include_directories(troykaaccelerometer INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TroykaAccelerometer/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(troykaaccelerometer INTERFACE
    arduino-compat
)
