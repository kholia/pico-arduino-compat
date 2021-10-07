add_library(pac-sensorfusion INTERFACE)

target_sources(pac-sensorfusion INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SensorFusion/src/SensorFusion.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SensorFusion/src/SensorFusion.h"
)

target_include_directories(pac-sensorfusion INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SensorFusion/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-sensorfusion INTERFACE
    arduino-compat
)
