add_library(mrm-board INTERFACE)

target_sources(mrm-board INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/mrm-board/src/mrm-board.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/mrm-board/src/mrm-board.h"
)

target_include_directories(mrm-board INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/mrm-board/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(mrm-board INTERFACE
    arduino-compat
)
