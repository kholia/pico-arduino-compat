add_library(pac-tsunami INTERFACE)

target_sources(pac-tsunami INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/tsunami-arduino/src/tsunami.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/tsunami-arduino/src/ad983x/ad983x.c"
  "${CMAKE_CURRENT_LIST_DIR}/tsunami-arduino/src/mcp49xx/mcp49xx.c"
  "${CMAKE_CURRENT_LIST_DIR}/tsunami-arduino/src/tsunami.h"
  "${CMAKE_CURRENT_LIST_DIR}/tsunami-arduino/src/ad983x/ad983x.h"
  "${CMAKE_CURRENT_LIST_DIR}/tsunami-arduino/src/mcp49xx/mcp49xx.h"
)

target_include_directories(pac-tsunami INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/tsunami-arduino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-tsunami INTERFACE
    arduino-compat
)
