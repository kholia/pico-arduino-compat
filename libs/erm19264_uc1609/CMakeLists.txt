add_library(pac-erm19264_uc1609 INTERFACE)

target_sources(pac-erm19264_uc1609 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ERM19264_UC1609/src/ERM19264_UC1609.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ERM19264_UC1609/src/ERM19264_graphics.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ERM19264_UC1609/src/ERM19264_graphics_font.h"
  "${CMAKE_CURRENT_LIST_DIR}/ERM19264_UC1609/src/ERM19264_UC1609.h"
  "${CMAKE_CURRENT_LIST_DIR}/ERM19264_UC1609/src/ERM19264_graphics.h"
)

target_include_directories(pac-erm19264_uc1609 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ERM19264_UC1609/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-erm19264_uc1609 INTERFACE
    arduino-compat
)
