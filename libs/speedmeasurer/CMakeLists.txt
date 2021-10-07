add_library(pac-speedmeasurer INTERFACE)

target_sources(pac-speedmeasurer INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SpeedMeasurer/src/speedMeasurer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SpeedMeasurer/src/speedMeasurer.h"
)

target_include_directories(pac-speedmeasurer INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SpeedMeasurer/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-speedmeasurer INTERFACE
    arduino-compat
)
