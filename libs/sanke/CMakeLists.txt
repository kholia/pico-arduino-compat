add_library(sanke INTERFACE)

target_sources(sanke INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/7SegmentsSnake/src/Snake.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/7SegmentsSnake/src/Snake.h"
)

target_include_directories(sanke INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/7SegmentsSnake/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(sanke INTERFACE
    arduino-compat
)
