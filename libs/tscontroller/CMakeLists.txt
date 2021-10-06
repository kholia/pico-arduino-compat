add_library(tscontroller INTERFACE)

target_sources(tscontroller INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TSController/src/TSController.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TSController/src/TSController.h"
)

target_include_directories(tscontroller INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TSController/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(tscontroller INTERFACE
    arduino-compat
)
