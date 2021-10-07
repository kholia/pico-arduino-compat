add_library(pac-modbusconfig INTERFACE)

target_sources(pac-modbusconfig INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ModbusConfig/src/ModbusConfig.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ModbusConfig/src/EspFS.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ModbusConfig/ModbusConfig.h"
  "${CMAKE_CURRENT_LIST_DIR}/ModbusConfig/src/ModbusConfig.h"
  "${CMAKE_CURRENT_LIST_DIR}/ModbusConfig/src/EspFS.h"
)

target_include_directories(pac-modbusconfig INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ModbusConfig/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-modbusconfig INTERFACE
    arduino-compat
)
