add_library(emsevensegment INTERFACE)

target_sources(emsevensegment INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/EmSevenSegment/src/EmSevenSegment.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EmSevenSegment/src/EmSevenSegment.h"
  "${CMAKE_CURRENT_LIST_DIR}/EmSevenSegment/src/CharacterEncoding.h"
)

target_include_directories(emsevensegment INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/EmSevenSegment/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(emsevensegment INTERFACE
    arduino-compat
)
