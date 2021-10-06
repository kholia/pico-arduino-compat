add_library(ledflasher INTERFACE)

target_sources(ledflasher INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduino-ledflasher/src/ledflasher.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-ledflasher/src/ledflasher.h"
)

target_include_directories(ledflasher INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduino-ledflasher/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(ledflasher INTERFACE
    arduino-compat
)
