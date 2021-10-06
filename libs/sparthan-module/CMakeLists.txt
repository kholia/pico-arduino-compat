add_library(sparthan-module INTERFACE)

target_sources(sparthan-module INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/sparthan-module/src/sparthan.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/sparthan-module/src/crc/crc.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/sparthan-module/src/sparthan.h"
  "${CMAKE_CURRENT_LIST_DIR}/sparthan-module/src/crc/crc.h"
)

target_include_directories(sparthan-module INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/sparthan-module/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(sparthan-module INTERFACE
    arduino-compat
)
