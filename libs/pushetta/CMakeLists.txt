add_library(pac-pushetta INTERFACE)

target_sources(pac-pushetta INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduino-pushetta-lib/src/Pushetta.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-pushetta-lib/src/Pushetta.h"
)

target_include_directories(pac-pushetta INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduino-pushetta-lib/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-pushetta INTERFACE
    arduino-compat
)
