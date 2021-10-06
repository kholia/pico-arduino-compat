add_library(md_tcs230 INTERFACE)

target_sources(md_tcs230 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MD_TCS230/src/MD_TCS230.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MD_TCS230/src/MD_TCS230.h"
  "${CMAKE_CURRENT_LIST_DIR}/MD_TCS230/examples/ColorMatch_TCS230/ColorMatch.h"
  "${CMAKE_CURRENT_LIST_DIR}/MD_TCS230/examples/ColorMatch_TCS230/ColorMatch_Original.h"
)

target_include_directories(md_tcs230 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MD_TCS230/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(md_tcs230 INTERFACE
    arduino-compat
)
