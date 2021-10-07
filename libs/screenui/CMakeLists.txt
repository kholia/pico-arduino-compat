add_library(pac-screenui INTERFACE)

target_sources(pac-screenui INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ScreenUi/ScreenUi.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ScreenUi/ScreenUi.h"
)

target_include_directories(pac-screenui INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ScreenUi"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-screenui INTERFACE
    arduino-compat
)
