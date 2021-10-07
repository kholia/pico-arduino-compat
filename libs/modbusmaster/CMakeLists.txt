add_library(pac-modbusmaster INTERFACE)

target_sources(pac-modbusmaster INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ModbusMaster/src/ModbusMaster.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ModbusMaster/src/ModbusMaster.h"
  "${CMAKE_CURRENT_LIST_DIR}/ModbusMaster/src/util/crc16.h"
  "${CMAKE_CURRENT_LIST_DIR}/ModbusMaster/src/util/word.h"
)

target_include_directories(pac-modbusmaster INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ModbusMaster/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-modbusmaster INTERFACE
    arduino-compat
)
