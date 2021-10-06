add_library(micronmea INTERFACE)

target_sources(micronmea INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MicroNMEA/extras/test/test_MicroNMEA.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MicroNMEA/src/MicroNMEA.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MicroNMEA/extras/test/arduino_compat.h"
  "${CMAKE_CURRENT_LIST_DIR}/MicroNMEA/extras/test/Arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/MicroNMEA/src/MicroNMEA.h"
)

target_include_directories(micronmea INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MicroNMEA/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(micronmea INTERFACE
    arduino-compat
)
