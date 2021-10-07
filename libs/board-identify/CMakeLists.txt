add_library(pac-board-identify INTERFACE)

target_sources(pac-board-identify INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Board_Identify/src/Board_Identify.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Board_Identify/src/Board_Identify.h"
)

target_include_directories(pac-board-identify INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Board_Identify/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-board-identify INTERFACE
    arduino-compat
)
