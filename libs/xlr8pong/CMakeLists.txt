add_library(pac-xlr8pong INTERFACE)

target_sources(pac-xlr8pong INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/XLR8Pong/XLR8Pong.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/XLR8Pong/XLR8Pong.h"
)

target_include_directories(pac-xlr8pong INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/XLR8Pong"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-xlr8pong INTERFACE
    arduino-compat
)
