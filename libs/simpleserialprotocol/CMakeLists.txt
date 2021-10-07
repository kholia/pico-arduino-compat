add_library(pac-simpleserialprotocol INTERFACE)

target_sources(pac-simpleserialprotocol INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/simple-serial-protocol-arduino/src/SimpleSerialProtocol.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/simple-serial-protocol-arduino/src/Core.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/simple-serial-protocol-arduino/src/Core.h"
  "${CMAKE_CURRENT_LIST_DIR}/simple-serial-protocol-arduino/src/SimpleSerialProtocol.h"
)

target_include_directories(pac-simpleserialprotocol INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/simple-serial-protocol-arduino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-simpleserialprotocol INTERFACE
    arduino-compat
)
