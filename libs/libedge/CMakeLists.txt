add_library(pac-libedge INTERFACE)

target_sources(pac-libedge INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/libedge/src/thingplug.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/libedge/src/thingplug.h"
)

target_include_directories(pac-libedge INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/libedge/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-libedge INTERFACE
    arduino-compat
)
