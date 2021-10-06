add_library(speedmeasurer INTERFACE)

target_sources(speedmeasurer INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SpeedMeasurer/src/speedMeasurer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SpeedMeasurer/src/speedMeasurer.h"
)

target_include_directories(speedmeasurer INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SpeedMeasurer/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(speedmeasurer INTERFACE
    arduino-compat
)
