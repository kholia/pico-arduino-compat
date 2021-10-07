add_library(pac-hysteresis INTERFACE)

target_sources(pac-hysteresis INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Hysteresis/Hysteresis.h"
)

target_include_directories(pac-hysteresis INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Hysteresis"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-hysteresis INTERFACE
    arduino-compat
)
