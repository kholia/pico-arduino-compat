add_library(regexp INTERFACE)

target_sources(regexp INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Regexp/src/Regexp.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Regexp/Regexp.h"
  "${CMAKE_CURRENT_LIST_DIR}/Regexp/src/Regexp.h"
)

target_include_directories(regexp INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Regexp/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(regexp INTERFACE
    arduino-compat
)
