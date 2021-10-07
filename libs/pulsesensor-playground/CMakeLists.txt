add_library(pac-pulsesensor-playground INTERFACE)

target_sources(pac-pulsesensor-playground INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/PulseSensorPlayground/src/PulseSensorPlayground.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PulseSensorPlayground/src/utility/PulseSensor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PulseSensorPlayground/src/utility/PulseSensorTimingStatistics.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PulseSensorPlayground/src/utility/PulseSensorSerialOutput.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PulseSensorPlayground/src/PulseSensorPlayground.h"
  "${CMAKE_CURRENT_LIST_DIR}/PulseSensorPlayground/src/utility/PulseSensor.h"
  "${CMAKE_CURRENT_LIST_DIR}/PulseSensorPlayground/src/utility/PulseSensorSerialOutput.h"
  "${CMAKE_CURRENT_LIST_DIR}/PulseSensorPlayground/src/utility/PulseSensorTimingStatistics.h"
  "${CMAKE_CURRENT_LIST_DIR}/PulseSensorPlayground/src/utility/Interrupts.h"
)

target_include_directories(pac-pulsesensor-playground INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/PulseSensorPlayground/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-pulsesensor-playground INTERFACE
    arduino-compat
)
