add_library(pac-fabo-203-color-s11059 INTERFACE)

target_sources(pac-fabo-203-color-s11059 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/FaBoColor-s11059-Library/src/FaBoColor_S11059.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FaBoColor-s11059-Library/src/FaBoColor_S11059.h"
)

target_include_directories(pac-fabo-203-color-s11059 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/FaBoColor-s11059-Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-fabo-203-color-s11059 INTERFACE
    arduino-compat
)
