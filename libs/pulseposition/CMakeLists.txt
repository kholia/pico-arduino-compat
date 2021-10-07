add_library(pac-pulseposition INTERFACE)

target_sources(pac-pulseposition INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/PulsePosition/PulsePosition.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PulsePosition/PulsePositionIMXRT.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PulsePosition/PulsePositionIMXRT.h"
  "${CMAKE_CURRENT_LIST_DIR}/PulsePosition/PulsePosition.h"
)

target_include_directories(pac-pulseposition INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/PulsePosition"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-pulseposition INTERFACE
    arduino-compat
)
