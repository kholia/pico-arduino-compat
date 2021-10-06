add_library(modbusconfig INTERFACE)

target_sources(modbusconfig INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ModbusConfig/src/ModbusConfig.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ModbusConfig/src/EspFS.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ModbusConfig/ModbusConfig.h"
  "${CMAKE_CURRENT_LIST_DIR}/ModbusConfig/src/ModbusConfig.h"
  "${CMAKE_CURRENT_LIST_DIR}/ModbusConfig/src/EspFS.h"
)

target_include_directories(modbusconfig INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ModbusConfig/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(modbusconfig INTERFACE
    arduino-compat
)
