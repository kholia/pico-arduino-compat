add_library(pac-shifty INTERFACE)

target_sources(pac-shifty INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Shifty/src/Shifty.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Shifty/src/Shifty.h"
)

target_include_directories(pac-shifty INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Shifty/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-shifty INTERFACE
    arduino-compat
)
