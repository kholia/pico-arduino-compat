add_library(opc INTERFACE)

target_sources(opc INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/OPC/src/OPC/OPC.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/OPC/src/OPC/OPC.h"
  "${CMAKE_CURRENT_LIST_DIR}/OPC/examples/NodeMcuExample/__vm/.NodeMcuExample.vsarduino.h"
)

target_include_directories(opc INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/OPC/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(opc INTERFACE
    arduino-compat
)
