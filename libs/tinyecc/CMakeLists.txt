add_library(tinyecc INTERFACE)

target_sources(tinyecc INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/tinyECC-ArduinoIDE/tinyECC.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/tinyECC-ArduinoIDE/tinyECC_mapping_table.h"
  "${CMAKE_CURRENT_LIST_DIR}/tinyECC-ArduinoIDE/tinyECC.h"
)

target_include_directories(tinyecc INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/tinyECC-ArduinoIDE"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(tinyecc INTERFACE
    arduino-compat
)
