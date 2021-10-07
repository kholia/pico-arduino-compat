add_library(pac-rbd_lightsensor INTERFACE)

target_sources(pac-rbd_lightsensor INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/RBD_LightSensor/src/RBD_LightSensor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RBD_LightSensor/src/RBD_LightSensor.h"
)

target_include_directories(pac-rbd_lightsensor INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/RBD_LightSensor/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-rbd_lightsensor INTERFACE
    arduino-compat
)
