add_library(pac-movingaverageangle INTERFACE)

target_sources(pac-movingaverageangle INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MovingAverageAngle/MovingAverageAngle.h"
)

target_include_directories(pac-movingaverageangle INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MovingAverageAngle"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-movingaverageangle INTERFACE
    arduino-compat
)
