add_library(pac-tm1637 INTERFACE)

target_sources(pac-tm1637 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TM1637/TM1637Display.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TM1637/TM1637Display.h"
)

target_include_directories(pac-tm1637 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TM1637"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-tm1637 INTERFACE
    arduino-compat
)
