add_library(pac-firstbuild-relay INTERFACE)

target_sources(pac-firstbuild-relay INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Relay/extras/test/mocks/Arduino/Arduino.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Relay/extras/test/AllTests/AllTests.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Relay/extras/test/RelayTests/RelayTests.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Relay/src/Relay.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Relay/extras/test/mocks/Arduino/pins_arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/Relay/extras/test/mocks/Arduino/Arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/Relay/extras/test/mocks/Arduino/avr/interrupt.h"
  "${CMAKE_CURRENT_LIST_DIR}/Relay/extras/test/mocks/Arduino/avr/io.h"
  "${CMAKE_CURRENT_LIST_DIR}/Relay/extras/test/mocks/Arduino/avr/eeprom.h"
  "${CMAKE_CURRENT_LIST_DIR}/Relay/extras/test/mocks/Arduino/avr/pgmspace.h"
  "${CMAKE_CURRENT_LIST_DIR}/Relay/extras/test/mocks/Arduino/util/delay.h"
  "${CMAKE_CURRENT_LIST_DIR}/Relay/src/Relay.h"
)

target_include_directories(pac-firstbuild-relay INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Relay/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-firstbuild-relay INTERFACE
    arduino-compat
)
