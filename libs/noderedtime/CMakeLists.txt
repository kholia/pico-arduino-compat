add_library(noderedtime INTERFACE)

target_sources(noderedtime INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/NodeRedTime/src/NodeRedTime.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/NodeRedTime/src/NodeRedTime.h"
)

target_include_directories(noderedtime INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/NodeRedTime/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(noderedtime INTERFACE
    arduino-compat
)
