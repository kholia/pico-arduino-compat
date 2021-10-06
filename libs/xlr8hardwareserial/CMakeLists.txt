add_library(xlr8hardwareserial INTERFACE)

target_sources(xlr8hardwareserial INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/XLR8HardwareSerial/src/XLR8HardwareSerial.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/XLR8HardwareSerial/src/XLR8Serial.h"
  "${CMAKE_CURRENT_LIST_DIR}/XLR8HardwareSerial/src/XLR8HardwareSerial.h"
)

target_include_directories(xlr8hardwareserial INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/XLR8HardwareSerial/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(xlr8hardwareserial INTERFACE
    arduino-compat
)
