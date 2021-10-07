add_library(pac-adctouchsensor INTERFACE)

target_sources(pac-adctouchsensor INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ADCTouchSensor/src/ADCTouchSensor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ADCTouchSensor/src/ADCTouchSensor.h"
)

target_include_directories(pac-adctouchsensor INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ADCTouchSensor/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-adctouchsensor INTERFACE
    arduino-compat
)
