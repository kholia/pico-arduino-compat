add_library(pac-ssvtimer INTERFACE)

target_sources(pac-ssvtimer INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SSVTimer/SSVTimer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SSVTimer/SSVTimer.h"
)

target_include_directories(pac-ssvtimer INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SSVTimer"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-ssvtimer INTERFACE
    arduino-compat
)
