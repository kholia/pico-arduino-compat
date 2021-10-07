add_library(pac-seg16 INTERFACE)

target_sources(pac-seg16 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Seg16/src/Seg16.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Seg16/examples/alternating.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Seg16/examples/basic.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Seg16/src/Seg16.h"
)

target_include_directories(pac-seg16 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Seg16/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-seg16 INTERFACE
    arduino-compat
)
