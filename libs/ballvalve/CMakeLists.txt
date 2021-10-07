add_library(pac-ballvalve INTERFACE)

target_sources(pac-ballvalve INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ballvalve/src/Ballvalve.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ballvalve/src/Ballvalve.h"
)

target_include_directories(pac-ballvalve INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ballvalve/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-ballvalve INTERFACE
    arduino-compat
)
