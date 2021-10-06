add_library(ramp INTERFACE)

target_sources(ramp INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/RAMP/src/Ramp.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RAMP/src/Ramp.h"
)

target_include_directories(ramp INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/RAMP/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(ramp INTERFACE
    arduino-compat
)
