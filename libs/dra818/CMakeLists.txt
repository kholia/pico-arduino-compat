add_library(pac-dra818 INTERFACE)

target_sources(pac-dra818 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduino-dra818/src/DRA818.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-dra818/src/DRA818.h"
)

target_include_directories(pac-dra818 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduino-dra818/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-dra818 INTERFACE
    arduino-compat
)
