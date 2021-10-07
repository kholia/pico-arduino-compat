add_library(pac-vl53l1x INTERFACE)

target_sources(pac-vl53l1x INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/vl53l1x-arduino/VL53L1X.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/vl53l1x-arduino/VL53L1X.h"
)

target_include_directories(pac-vl53l1x INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/vl53l1x-arduino"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-vl53l1x INTERFACE
    arduino-compat
)
