add_library(pac-regexp INTERFACE)

target_sources(pac-regexp INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Regexp/src/Regexp.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Regexp/Regexp.h"
  "${CMAKE_CURRENT_LIST_DIR}/Regexp/src/Regexp.h"
)

target_include_directories(pac-regexp INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Regexp/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-regexp INTERFACE
    arduino-compat
)
