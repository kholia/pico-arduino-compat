add_library(pac-bb_hx1230 INTERFACE)

target_sources(pac-bb_hx1230 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/bb_hx1230/src/bb_hx1230.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/bb_hx1230/src/bb_hx1230.h"
)

target_include_directories(pac-bb_hx1230 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/bb_hx1230/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-bb_hx1230 INTERFACE
    arduino-compat
)
