add_library(pulsepattern INTERFACE)

target_sources(pulsepattern INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/PulsePattern/PulsePattern.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PulsePattern/PulsePattern.h"
)

target_include_directories(pulsepattern INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/PulsePattern"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pulsepattern INTERFACE
    arduino-compat
)
