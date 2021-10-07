add_library(pac-tinyecc INTERFACE)

target_sources(pac-tinyecc INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/tinyECC-ArduinoIDE/tinyECC.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/tinyECC-ArduinoIDE/tinyECC_mapping_table.h"
  "${CMAKE_CURRENT_LIST_DIR}/tinyECC-ArduinoIDE/tinyECC.h"
)

target_include_directories(pac-tinyecc INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/tinyECC-ArduinoIDE"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-tinyecc INTERFACE
    arduino-compat
)
