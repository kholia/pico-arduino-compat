add_library(pac-s7xg INTERFACE)

target_sources(pac-s7xg INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/s7xg/src/S7XG.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/s7xg/src/S7XG.h"
)

target_include_directories(pac-s7xg INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/s7xg/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-s7xg INTERFACE
    arduino-compat
)
