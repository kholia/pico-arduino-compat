add_library(pac-sanke INTERFACE)

target_sources(pac-sanke INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/7SegmentsSnake/src/Snake.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/7SegmentsSnake/src/Snake.h"
)

target_include_directories(pac-sanke INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/7SegmentsSnake/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-sanke INTERFACE
    arduino-compat
)
