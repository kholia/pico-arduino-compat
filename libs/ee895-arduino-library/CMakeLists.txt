add_library(ee895-arduino-library INTERFACE)

target_sources(ee895-arduino-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/EE895/test/test-library.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EE895/src/ModbusTransmitFrame.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EE895/src/EE895.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EE895/src/ModbusReceiveFrame.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EE895/src/ModbusFrame.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EE895/src/ModbusReceiveFrame.h"
  "${CMAKE_CURRENT_LIST_DIR}/EE895/src/EE895.h"
  "${CMAKE_CURRENT_LIST_DIR}/EE895/src/ModbusTransmitFrame.h"
  "${CMAKE_CURRENT_LIST_DIR}/EE895/src/ModbusFrame.h"
)

target_include_directories(ee895-arduino-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/EE895/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(ee895-arduino-library INTERFACE
    arduino-compat
)
