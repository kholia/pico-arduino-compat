add_library(rf24network INTERFACE)

target_sources(rf24network INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/RF24Network/RF24Network.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RF24Network/RPi/pyRF24Network/pyRF24Network.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RF24Network/tests/unit/main.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RF24Network/tests/unit/Globals.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RF24Network/tests/unit/runner.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RF24Network/tests/unit_rx/Finder.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RF24Network/examples_RPi/rx-test.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RF24Network/examples_RPi/helloworld_rx.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RF24Network/examples_RPi/helloworld_tx.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RF24Network/RF24Network_config.h"
  "${CMAKE_CURRENT_LIST_DIR}/RF24Network/RF24Network.h"
  "${CMAKE_CURRENT_LIST_DIR}/RF24Network/tests/unit/Globals.h"
  "${CMAKE_CURRENT_LIST_DIR}/RF24Network/tests/unit_rx/Finder.h"
  "${CMAKE_CURRENT_LIST_DIR}/RF24Network/tests/unit_rx/printf.h"
)

target_include_directories(rf24network INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/RF24Network"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(rf24network INTERFACE
    arduino-compat
)
