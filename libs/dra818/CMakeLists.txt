add_library(dra818 INTERFACE)

target_sources(dra818 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduino-dra818/src/DRA818.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-dra818/src/DRA818.h"
)

target_include_directories(dra818 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduino-dra818/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(dra818 INTERFACE
    arduino-compat
)
