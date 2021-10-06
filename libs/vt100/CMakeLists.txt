add_library(vt100 INTERFACE)

target_sources(vt100 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/VT100/src/VT100.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/VT100/src/VT100.h"
)

target_include_directories(vt100 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/VT100/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(vt100 INTERFACE
    arduino-compat
)
