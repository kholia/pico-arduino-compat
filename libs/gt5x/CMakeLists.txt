add_library(pac-gt5x INTERFACE)

target_sources(pac-gt5x INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/GT5X/src/GT5X.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/GT5X/src/GT5X.h"
)

target_include_directories(pac-gt5x INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/GT5X/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-gt5x INTERFACE
    arduino-compat
)
