add_library(pac-cubigel INTERFACE)

target_sources(pac-cubigel INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Cubigel/src/Cubigel.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Cubigel/src/Cubigel.h"
)

target_include_directories(pac-cubigel INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Cubigel/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-cubigel INTERFACE
    arduino-compat
)
