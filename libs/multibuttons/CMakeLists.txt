add_library(pac-multibuttons INTERFACE)

target_sources(pac-multibuttons INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MultiButtons/src/MultiButtons.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MultiButtons/src/MultiButtons.h"
)

target_include_directories(pac-multibuttons INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MultiButtons/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-multibuttons INTERFACE
    arduino-compat
)
