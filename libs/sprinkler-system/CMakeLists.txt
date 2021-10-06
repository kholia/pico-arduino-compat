add_library(sprinkler-system INTERFACE)

target_sources(sprinkler-system INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/sprinkler-system/src/Sprinkler.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/sprinkler-system/src/Sprinkler.h"
)

target_include_directories(sprinkler-system INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/sprinkler-system/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(sprinkler-system INTERFACE
    arduino-compat
)
