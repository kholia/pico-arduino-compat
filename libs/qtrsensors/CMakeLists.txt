add_library(qtrsensors INTERFACE)

target_sources(qtrsensors INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/qtr-sensors-arduino/QTRSensors.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/qtr-sensors-arduino/QTRSensors.h"
)

target_include_directories(qtrsensors INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/qtr-sensors-arduino"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(qtrsensors INTERFACE
    arduino-compat
)
