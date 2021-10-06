add_library(braccio INTERFACE)

target_sources(braccio INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Braccio/src/Braccio.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Braccio/src/Braccio.h"
)

target_include_directories(braccio INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Braccio/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(braccio INTERFACE
    arduino-compat
)
