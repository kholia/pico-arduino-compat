add_library(pac-ezbutton INTERFACE)

target_sources(pac-ezbutton INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/button/src/ezButton.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/button/src/ezButton.h"
)

target_include_directories(pac-ezbutton INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/button/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-ezbutton INTERFACE
    arduino-compat
)
