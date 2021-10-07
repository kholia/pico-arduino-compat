add_library(pac-tscontroller INTERFACE)

target_sources(pac-tscontroller INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TSController/src/TSController.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TSController/src/TSController.h"
)

target_include_directories(pac-tscontroller INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TSController/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-tscontroller INTERFACE
    arduino-compat
)
