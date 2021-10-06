add_library(buttonfever INTERFACE)

target_sources(buttonfever INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ButtonFever/src/BfButtonManager.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ButtonFever/src/BfButton.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ButtonFever/src/BfButtonManager.h"
  "${CMAKE_CURRENT_LIST_DIR}/ButtonFever/src/BfButton.h"
)

target_include_directories(buttonfever INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ButtonFever/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(buttonfever INTERFACE
    arduino-compat
)
