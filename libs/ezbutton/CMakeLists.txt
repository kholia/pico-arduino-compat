add_library(ezbutton INTERFACE)

target_sources(ezbutton INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/button/src/ezButton.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/button/src/ezButton.h"
)

target_include_directories(ezbutton INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/button/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(ezbutton INTERFACE
    arduino-compat
)
