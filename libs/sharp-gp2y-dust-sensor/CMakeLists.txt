add_library(pac-sharp-gp2y-dust-sensor INTERFACE)

target_sources(pac-sharp-gp2y-dust-sensor INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/GP2YDustSensor/GP2YDustSensor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/GP2YDustSensor/GP2YDustSensor.h"
)

target_include_directories(pac-sharp-gp2y-dust-sensor INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/GP2YDustSensor"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-sharp-gp2y-dust-sensor INTERFACE
    arduino-compat
)
