add_library(everytime INTERFACE)

target_sources(everytime INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/everytime/src/everytime.h"
)

target_include_directories(everytime INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/everytime/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(everytime INTERFACE
    arduino-compat
)
