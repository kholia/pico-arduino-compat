add_library(pac-watch INTERFACE)

target_sources(pac-watch INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Watch/src/Watch.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Watch/src/Watch.h"
)

target_include_directories(pac-watch INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Watch/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-watch INTERFACE
    arduino-compat
)
