add_library(pac-stled316s INTERFACE)

target_sources(pac-stled316s INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/STLED316S/src/STLED316S.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/STLED316S/src/STLED316S.h"
)

target_include_directories(pac-stled316s INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/STLED316S/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-stled316s INTERFACE
    arduino-compat
)
