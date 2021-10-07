add_library(pac-s4alib INTERFACE)

target_sources(pac-s4alib INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/S4ALib/src/S4ALib.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/S4ALib/src/S4ALib.h"
)

target_include_directories(pac-s4alib INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/S4ALib/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-s4alib INTERFACE
    arduino-compat
)
