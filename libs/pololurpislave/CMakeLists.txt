add_library(pac-pololurpislave INTERFACE)

target_sources(pac-pololurpislave INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/pololu-rpi-slave-arduino-library/src/PololuTWISlave.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/pololu-rpi-slave-arduino-library/src/PololuTWISlave.h"
  "${CMAKE_CURRENT_LIST_DIR}/pololu-rpi-slave-arduino-library/src/PololuRPiSlave.h"
)

target_include_directories(pac-pololurpislave INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/pololu-rpi-slave-arduino-library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-pololurpislave INTERFACE
    arduino-compat
)
