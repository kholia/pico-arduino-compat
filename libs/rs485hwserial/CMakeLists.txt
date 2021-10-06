add_library(rs485hwserial INTERFACE)

target_sources(rs485hwserial INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/RS485HwSerial/src/RS485HwSerial0.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RS485HwSerial/src/RS485HwSerial3.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RS485HwSerial/src/RS485HwSerial.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RS485HwSerial/src/RS485HwSerial1.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RS485HwSerial/src/RS485HwSerial2.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RS485HwSerial/src/RS485HwSerial.h"
  "${CMAKE_CURRENT_LIST_DIR}/RS485HwSerial/src/RS485HwSerial_private.h"
)

target_include_directories(rs485hwserial INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/RS485HwSerial/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(rs485hwserial INTERFACE
    arduino-compat
)
