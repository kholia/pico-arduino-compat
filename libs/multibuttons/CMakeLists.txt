add_library(multibuttons INTERFACE)

target_sources(multibuttons INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MultiButtons/src/MultiButtons.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MultiButtons/src/MultiButtons.h"
)

target_include_directories(multibuttons INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MultiButtons/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(multibuttons INTERFACE
    arduino-compat
)
