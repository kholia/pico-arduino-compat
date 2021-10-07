add_library(pac-tlc591x INTERFACE)

target_sources(pac-tlc591x INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TLC591x/src/TLC591x.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TLC591x/src/TLC591x.h"
)

target_include_directories(pac-tlc591x INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TLC591x/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-tlc591x INTERFACE
    arduino-compat
)
