add_library(pac-soilsensor INTERFACE)

target_sources(pac-soilsensor INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SoilSensor/SoilSensor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SoilSensor/DS28E17.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SoilSensor/SoilSensor.h"
  "${CMAKE_CURRENT_LIST_DIR}/SoilSensor/DS28E17.h"
)

target_include_directories(pac-soilsensor INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SoilSensor"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-soilsensor INTERFACE
    arduino-compat
)
