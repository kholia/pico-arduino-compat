add_library(pac-vt100 INTERFACE)

target_sources(pac-vt100 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/VT100/src/VT100.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/VT100/src/VT100.h"
)

target_include_directories(pac-vt100 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/VT100/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-vt100 INTERFACE
    arduino-compat
)
