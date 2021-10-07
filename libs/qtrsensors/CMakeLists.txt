add_library(pac-qtrsensors INTERFACE)

target_sources(pac-qtrsensors INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/qtr-sensors-arduino/QTRSensors.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/qtr-sensors-arduino/QTRSensors.h"
)

target_include_directories(pac-qtrsensors INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/qtr-sensors-arduino"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-qtrsensors INTERFACE
    arduino-compat
)
