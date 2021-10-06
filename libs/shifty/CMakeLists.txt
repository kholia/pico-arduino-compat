add_library(shifty INTERFACE)

target_sources(shifty INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Shifty/src/Shifty.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Shifty/src/Shifty.h"
)

target_include_directories(shifty INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Shifty/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(shifty INTERFACE
    arduino-compat
)
