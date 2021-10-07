add_library(pac-rbd_humansensor INTERFACE)

target_sources(pac-rbd_humansensor INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/RBD_HumanSensor/src/RBD_HumanSensor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RBD_HumanSensor/src/RBD_HumanSensor.h"
)

target_include_directories(pac-rbd_humansensor INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/RBD_HumanSensor/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-rbd_humansensor INTERFACE
    arduino-compat
)
