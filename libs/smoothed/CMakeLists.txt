add_library(pac-smoothed INTERFACE)

target_sources(pac-smoothed INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Smoothed/src/Smoothed.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Smoothed/src/Smoothed.h"
)

target_include_directories(pac-smoothed INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Smoothed/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-smoothed INTERFACE
    arduino-compat
)
