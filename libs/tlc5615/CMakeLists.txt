add_library(tlc5615 INTERFACE)

target_sources(tlc5615 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TLC5615/src/TLC5615.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TLC5615/src/TLC5615.h"
)

target_include_directories(tlc5615 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TLC5615/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(tlc5615 INTERFACE
    arduino-compat
)
