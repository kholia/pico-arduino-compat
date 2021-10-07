add_library(pac-timeout INTERFACE)

target_sources(pac-timeout INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TimeOut/src/TimeOut.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TimeOut/src/TimeOut.h"
)

target_include_directories(pac-timeout INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TimeOut/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-timeout INTERFACE
    arduino-compat
)
