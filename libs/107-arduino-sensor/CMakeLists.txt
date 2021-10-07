add_library(pac-107-arduino-sensor INTERFACE)

target_sources(pac-107-arduino-sensor INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/107-Arduino-Sensor/src/107-Arduino-Sensor.hpp"
)

target_include_directories(pac-107-arduino-sensor INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/107-Arduino-Sensor/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-107-arduino-sensor INTERFACE
    arduino-compat
)
