add_library(pac-stackstring INTERFACE)

target_sources(pac-stackstring INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/stackstring/src/StackString.hpp"
)

target_include_directories(pac-stackstring INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/stackstring/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-stackstring INTERFACE
    arduino-compat
)
