add_library(pac-analogio-arduino INTERFACE)

target_sources(pac-analogio-arduino INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/AnalogIO-Arduino/src/incl/AnalogOut.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AnalogIO-Arduino/src/incl/AnalogIn.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AnalogIO-Arduino/src/incl/AnalogController.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AnalogIO-Arduino/src/AnalogIO.h"
  "${CMAKE_CURRENT_LIST_DIR}/AnalogIO-Arduino/src/incl/globalData.h"
  "${CMAKE_CURRENT_LIST_DIR}/AnalogIO-Arduino/src/incl/AnalogOut.h"
  "${CMAKE_CURRENT_LIST_DIR}/AnalogIO-Arduino/src/incl/AnalogController.h"
  "${CMAKE_CURRENT_LIST_DIR}/AnalogIO-Arduino/src/incl/AnalogIn.h"
)

target_include_directories(pac-analogio-arduino INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/AnalogIO-Arduino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-analogio-arduino INTERFACE
    arduino-compat
)
