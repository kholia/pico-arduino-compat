add_library(pac-dwarf433 INTERFACE)

target_sources(pac-dwarf433 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/dwarf433/List.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/dwarf433/RF433.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/dwarf433/RF433Detector.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/dwarf433/List.h"
  "${CMAKE_CURRENT_LIST_DIR}/dwarf433/RF433Detector.h"
  "${CMAKE_CURRENT_LIST_DIR}/dwarf433/RF433.h"
)

target_include_directories(pac-dwarf433 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/dwarf433"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-dwarf433 INTERFACE
    arduino-compat
)
