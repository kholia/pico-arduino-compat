add_library(hysteresis INTERFACE)

target_sources(hysteresis INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Hysteresis/Hysteresis.h"
)

target_include_directories(hysteresis INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Hysteresis"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(hysteresis INTERFACE
    arduino-compat
)
