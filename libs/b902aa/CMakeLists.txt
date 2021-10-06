add_library(b902aa INTERFACE)

target_sources(b902aa INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/B902AA/src/B902AA.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/B902AA/src/B902AA.h"
)

target_include_directories(b902aa INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/B902AA/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(b902aa INTERFACE
    arduino-compat
)
