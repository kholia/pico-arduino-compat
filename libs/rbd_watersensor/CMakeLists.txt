add_library(pac-rbd_watersensor INTERFACE)

target_sources(pac-rbd_watersensor INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/RBD_WaterSensor/src/RBD_WaterSensor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RBD_WaterSensor/src/RBD_WaterSensor.h"
)

target_include_directories(pac-rbd_watersensor INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/RBD_WaterSensor/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-rbd_watersensor INTERFACE
    arduino-compat
)
