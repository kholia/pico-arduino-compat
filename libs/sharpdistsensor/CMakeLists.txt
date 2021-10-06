add_library(sharpdistsensor INTERFACE)

target_sources(sharpdistsensor INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SharpDistSensor/MedianFilter.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SharpDistSensor/SharpDistSensor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SharpDistSensor/MedianFilter.h"
  "${CMAKE_CURRENT_LIST_DIR}/SharpDistSensor/SharpDistSensor.h"
)

target_include_directories(sharpdistsensor INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SharpDistSensor"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(sharpdistsensor INTERFACE
    arduino-compat
)
