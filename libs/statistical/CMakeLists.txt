add_library(pac-statistical INTERFACE)

target_sources(pac-statistical INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Statistical/src/Statistical.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Statistical/src/Statistical.h"
)

target_include_directories(pac-statistical INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Statistical/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-statistical INTERFACE
    arduino-compat
)
