add_library(tsunami INTERFACE)

target_sources(tsunami INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/tsunami-arduino/src/tsunami.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/tsunami-arduino/src/ad983x/ad983x.c"
  "${CMAKE_CURRENT_LIST_DIR}/tsunami-arduino/src/mcp49xx/mcp49xx.c"
  "${CMAKE_CURRENT_LIST_DIR}/tsunami-arduino/src/tsunami.h"
  "${CMAKE_CURRENT_LIST_DIR}/tsunami-arduino/src/ad983x/ad983x.h"
  "${CMAKE_CURRENT_LIST_DIR}/tsunami-arduino/src/mcp49xx/mcp49xx.h"
)

target_include_directories(tsunami INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/tsunami-arduino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(tsunami INTERFACE
    arduino-compat
)
