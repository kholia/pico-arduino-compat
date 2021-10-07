add_library(pac-rf24mesh INTERFACE)

target_sources(pac-rf24mesh INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/RF24Mesh/RF24Mesh.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RF24Mesh/pyRF24Mesh/pyRF24Mesh.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RF24Mesh/examples_RPi/RF24Mesh_Example.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RF24Mesh/examples_RPi/RF24Mesh_Example_Master.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RF24Mesh/examples_RPi/ncurses/RF24Mesh_Ncurses_Master.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RF24Mesh/RF24Mesh_config.h"
  "${CMAKE_CURRENT_LIST_DIR}/RF24Mesh/RF24Mesh.h"
)

target_include_directories(pac-rf24mesh INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/RF24Mesh"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-rf24mesh INTERFACE
    arduino-compat
)
