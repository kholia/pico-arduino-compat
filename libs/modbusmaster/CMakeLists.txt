add_library(modbusmaster INTERFACE)

target_sources(modbusmaster INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ModbusMaster/src/ModbusMaster.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ModbusMaster/src/ModbusMaster.h"
  "${CMAKE_CURRENT_LIST_DIR}/ModbusMaster/src/util/crc16.h"
  "${CMAKE_CURRENT_LIST_DIR}/ModbusMaster/src/util/word.h"
)

target_include_directories(modbusmaster INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ModbusMaster/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(modbusmaster INTERFACE
    arduino-compat
)
