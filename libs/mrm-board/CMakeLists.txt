add_library(pac-mrm-board INTERFACE)

target_sources(pac-mrm-board INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/mrm-board/src/mrm-board.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/mrm-board/src/mrm-board.h"
)

target_include_directories(pac-mrm-board INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/mrm-board/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-mrm-board INTERFACE
    arduino-compat
)
