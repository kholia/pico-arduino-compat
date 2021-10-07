add_library(pac-max30100lib INTERFACE)

target_sources(pac-max30100lib INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-MAX30100/src/MAX30100_BeatDetector.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-MAX30100/src/MAX30100_PulseOximeter.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-MAX30100/src/MAX30100.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-MAX30100/src/MAX30100_SpO2Calculator.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-MAX30100/src/MAX30100.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-MAX30100/src/MAX30100_PulseOximeter.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-MAX30100/src/MAX30100_SpO2Calculator.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-MAX30100/src/CircularBuffer.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-MAX30100/src/MAX30100_Filters.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-MAX30100/src/MAX30100_Registers.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-MAX30100/src/MAX30100_BeatDetector.h"
)

target_include_directories(pac-max30100lib INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino-MAX30100/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-max30100lib INTERFACE
    arduino-compat
)
