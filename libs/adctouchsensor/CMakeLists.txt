add_library(adctouchsensor INTERFACE)

target_sources(adctouchsensor INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ADCTouchSensor/src/ADCTouchSensor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ADCTouchSensor/src/ADCTouchSensor.h"
)

target_include_directories(adctouchsensor INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ADCTouchSensor/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(adctouchsensor INTERFACE
    arduino-compat
)
