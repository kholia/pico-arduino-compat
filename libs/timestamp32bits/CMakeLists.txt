add_library(pac-timestamp32bits INTERFACE)

target_sources(pac-timestamp32bits INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/timestamp32bits/src/timestamp32bits.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/timestamp32bits/src/timestamp32bits.h"
)

target_include_directories(pac-timestamp32bits INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/timestamp32bits/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-timestamp32bits INTERFACE
    arduino-compat
)
