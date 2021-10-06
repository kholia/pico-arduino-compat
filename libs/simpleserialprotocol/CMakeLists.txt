add_library(simpleserialprotocol INTERFACE)

target_sources(simpleserialprotocol INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/simple-serial-protocol-arduino/src/SimpleSerialProtocol.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/simple-serial-protocol-arduino/src/Core.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/simple-serial-protocol-arduino/src/Core.h"
  "${CMAKE_CURRENT_LIST_DIR}/simple-serial-protocol-arduino/src/SimpleSerialProtocol.h"
)

target_include_directories(simpleserialprotocol INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/simple-serial-protocol-arduino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(simpleserialprotocol INTERFACE
    arduino-compat
)
