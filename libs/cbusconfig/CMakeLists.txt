add_library(pac-cbusconfig INTERFACE)

target_sources(pac-cbusconfig INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/CBUSconfig/src/CBUSconfig.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/CBUSconfig/src/CBUSconfig.h"
)

target_include_directories(pac-cbusconfig INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/CBUSconfig/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-cbusconfig INTERFACE
    arduino-compat
)
