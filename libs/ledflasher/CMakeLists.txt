add_library(pac-ledflasher INTERFACE)

target_sources(pac-ledflasher INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduino-ledflasher/src/ledflasher.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-ledflasher/src/ledflasher.h"
)

target_include_directories(pac-ledflasher INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduino-ledflasher/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-ledflasher INTERFACE
    arduino-compat
)
