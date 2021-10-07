add_library(pac-pulsepattern INTERFACE)

target_sources(pac-pulsepattern INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/PulsePattern/PulsePattern.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PulsePattern/PulsePattern.h"
)

target_include_directories(pac-pulsepattern INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/PulsePattern"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-pulsepattern INTERFACE
    arduino-compat
)
