add_library(pac-noderedtime INTERFACE)

target_sources(pac-noderedtime INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/NodeRedTime/src/NodeRedTime.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/NodeRedTime/src/NodeRedTime.h"
)

target_include_directories(pac-noderedtime INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/NodeRedTime/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-noderedtime INTERFACE
    arduino-compat
)
