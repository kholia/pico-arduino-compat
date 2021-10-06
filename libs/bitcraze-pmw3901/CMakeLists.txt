add_library(bitcraze-pmw3901 INTERFACE)

target_sources(bitcraze-pmw3901 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Bitcraze_PMW3901/src/Bitcraze_PMW3901.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Bitcraze_PMW3901/src/Bitcraze_PMW3901.h"
)

target_include_directories(bitcraze-pmw3901 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Bitcraze_PMW3901/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(bitcraze-pmw3901 INTERFACE
    arduino-compat
)
