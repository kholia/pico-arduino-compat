add_library(pac-ramp INTERFACE)

target_sources(pac-ramp INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/RAMP/src/Ramp.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RAMP/src/Ramp.h"
)

target_include_directories(pac-ramp INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/RAMP/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-ramp INTERFACE
    arduino-compat
)
