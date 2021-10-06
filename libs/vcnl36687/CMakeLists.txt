add_library(vcnl36687 INTERFACE)

target_sources(vcnl36687 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/VCNL36687/src/VCNL36687.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/VCNL36687/src/VCNL36687.h"
)

target_include_directories(vcnl36687 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/VCNL36687/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(vcnl36687 INTERFACE
    arduino-compat
)
