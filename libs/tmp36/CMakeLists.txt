add_library(pac-tmp36 INTERFACE)

target_sources(pac-tmp36 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TMP36/src/TMP36.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TMP36/src/TMP36.h"
)

target_include_directories(pac-tmp36 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TMP36/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-tmp36 INTERFACE
    arduino-compat
)
