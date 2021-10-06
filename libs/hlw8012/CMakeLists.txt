add_library(hlw8012 INTERFACE)

target_sources(hlw8012 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/hlw8012/src/HLW8012.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/hlw8012/src/HLW8012.h"
)

target_include_directories(hlw8012 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/hlw8012/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(hlw8012 INTERFACE
    arduino-compat
)
