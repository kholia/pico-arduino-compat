add_library(pac-emsevensegment INTERFACE)

target_sources(pac-emsevensegment INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/EmSevenSegment/src/EmSevenSegment.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EmSevenSegment/src/EmSevenSegment.h"
  "${CMAKE_CURRENT_LIST_DIR}/EmSevenSegment/src/CharacterEncoding.h"
)

target_include_directories(pac-emsevensegment INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/EmSevenSegment/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-emsevensegment INTERFACE
    arduino-compat
)
