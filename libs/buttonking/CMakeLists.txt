add_library(buttonking INTERFACE)

target_sources(buttonking INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ButtonKing/ButtonKing.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ButtonKing/ButtonKing.h"
)

target_include_directories(buttonking INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ButtonKing"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(buttonking INTERFACE
    arduino-compat
)
