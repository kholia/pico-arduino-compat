add_library(pac-arduino-async-duplex INTERFACE)

target_sources(pac-arduino-async-duplex INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduino-async-duplex/test/instantiate.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-async-duplex/src/ManagedSerialDevice.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-async-duplex/ManagedSerialDevice.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-async-duplex/src/ManagedSerialDevice.h"
)

target_include_directories(pac-arduino-async-duplex INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduino-async-duplex/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-arduino-async-duplex INTERFACE
    arduino-compat
)
