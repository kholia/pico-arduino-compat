add_library(pac-interpolationlib INTERFACE)

target_sources(pac-interpolationlib INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-Interpolation/src/InterpolationLib.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-Interpolation/src/InterpolationLib.h"
)

target_include_directories(pac-interpolationlib INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino-Interpolation/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-interpolationlib INTERFACE
    arduino-compat
)
