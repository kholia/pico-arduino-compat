add_library(l293 INTERFACE)

target_sources(l293 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/L293/src/L293_std.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/L293/src/L293_base.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/L293/src/L293_twoWire.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/L293/src/L293_base.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/L293/src/L293_std.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/L293/src/L293_twoWire.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/L293/src/L293.h"
)

target_include_directories(l293 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/L293/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(l293 INTERFACE
    arduino-compat
)
