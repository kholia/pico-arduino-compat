add_library(pac-opcserver INTERFACE)

target_sources(pac-opcserver INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/OpcServer/src/OpcServer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/OpcServer/src/OpcServer.h"
  "${CMAKE_CURRENT_LIST_DIR}/OpcServer/src/Opc.h"
  "${CMAKE_CURRENT_LIST_DIR}/OpcServer/src/Definitions.h"
  "${CMAKE_CURRENT_LIST_DIR}/OpcServer/src/Config.h"
  "${CMAKE_CURRENT_LIST_DIR}/OpcServer/src/Platforms.h"
)

target_include_directories(pac-opcserver INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/OpcServer/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-opcserver INTERFACE
    arduino-compat
)
