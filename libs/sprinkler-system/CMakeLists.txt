add_library(pac-sprinkler-system INTERFACE)

target_sources(pac-sprinkler-system INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/sprinkler-system/src/Sprinkler.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/sprinkler-system/src/Sprinkler.h"
)

target_include_directories(pac-sprinkler-system INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/sprinkler-system/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-sprinkler-system INTERFACE
    arduino-compat
)
