add_library(ultrasonicsensor INTERFACE)

target_sources(ultrasonicsensor INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduino-ULTRASONIC_SENSOR/src/UltrasonicSensor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-ULTRASONIC_SENSOR/src/UltrasonicSensor.h"
)

target_include_directories(ultrasonicsensor INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduino-ULTRASONIC_SENSOR/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(ultrasonicsensor INTERFACE
    arduino-compat
)
