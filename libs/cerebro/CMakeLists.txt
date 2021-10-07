add_library(pac-cerebro INTERFACE)

target_sources(pac-cerebro INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/CerebroBoards/src/cerebro.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/CerebroBoards/src/cerebro.h"
)

target_include_directories(pac-cerebro INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/CerebroBoards/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-cerebro INTERFACE
    arduino-compat
)
