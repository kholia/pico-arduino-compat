add_library(pulseposition INTERFACE)

target_sources(pulseposition INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/PulsePosition/PulsePosition.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PulsePosition/PulsePositionIMXRT.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PulsePosition/PulsePositionIMXRT.h"
  "${CMAKE_CURRENT_LIST_DIR}/PulsePosition/PulsePosition.h"
)

target_include_directories(pulseposition INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/PulsePosition"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pulseposition INTERFACE
    arduino-compat
)
