add_library(pac-rx8010sj INTERFACE)

target_sources(pac-rx8010sj INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/RX8010SJ/src/RX8010SJ.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RX8010SJ/src/main.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RX8010SJ/src/RX8010SJ.h"
)

target_include_directories(pac-rx8010sj INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/RX8010SJ/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-rx8010sj INTERFACE
    arduino-compat
)
