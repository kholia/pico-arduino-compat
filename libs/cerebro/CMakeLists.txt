add_library(cerebro INTERFACE)

target_sources(cerebro INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/CerebroBoards/src/cerebro.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/CerebroBoards/src/cerebro.h"
)

target_include_directories(cerebro INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/CerebroBoards/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(cerebro INTERFACE
    arduino-compat
)
