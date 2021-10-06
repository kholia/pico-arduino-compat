add_library(rbd_lightsensor INTERFACE)

target_sources(rbd_lightsensor INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/RBD_LightSensor/src/RBD_LightSensor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RBD_LightSensor/src/RBD_LightSensor.h"
)

target_include_directories(rbd_lightsensor INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/RBD_LightSensor/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(rbd_lightsensor INTERFACE
    arduino-compat
)
