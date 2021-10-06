add_library(rbd_watersensor INTERFACE)

target_sources(rbd_watersensor INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/RBD_WaterSensor/src/RBD_WaterSensor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RBD_WaterSensor/src/RBD_WaterSensor.h"
)

target_include_directories(rbd_watersensor INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/RBD_WaterSensor/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(rbd_watersensor INTERFACE
    arduino-compat
)
