add_library(pac-buttonfever INTERFACE)

target_sources(pac-buttonfever INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ButtonFever/src/BfButtonManager.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ButtonFever/src/BfButton.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ButtonFever/src/BfButtonManager.h"
  "${CMAKE_CURRENT_LIST_DIR}/ButtonFever/src/BfButton.h"
)

target_include_directories(pac-buttonfever INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ButtonFever/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-buttonfever INTERFACE
    arduino-compat
)
