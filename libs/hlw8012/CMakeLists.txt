add_library(pac-hlw8012 INTERFACE)

target_sources(pac-hlw8012 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/hlw8012/src/HLW8012.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/hlw8012/src/HLW8012.h"
)

target_include_directories(pac-hlw8012 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/hlw8012/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-hlw8012 INTERFACE
    arduino-compat
)
