add_library(moving-average-library INTERFACE)

target_sources(moving-average-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MovingAverage_ArduinoLibrary/src/MovingAverage.h"
)

target_include_directories(moving-average-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MovingAverage_ArduinoLibrary/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(moving-average-library INTERFACE
    arduino-compat
)
