add_library(pac-opc INTERFACE)

target_sources(pac-opc INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/OPC/src/OPC/OPC.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/OPC/src/OPC/OPC.h"
  "${CMAKE_CURRENT_LIST_DIR}/OPC/examples/NodeMcuExample/__vm/.NodeMcuExample.vsarduino.h"
)

target_include_directories(pac-opc INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/OPC/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-opc INTERFACE
    arduino-compat
)
