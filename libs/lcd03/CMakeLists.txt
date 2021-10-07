add_library(pac-lcd03 INTERFACE)

target_sources(pac-lcd03 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduino-lcd03/LCD03.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-lcd03/LCD03.h"
)

target_include_directories(pac-lcd03 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduino-lcd03"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-lcd03 INTERFACE
    arduino-compat
)
