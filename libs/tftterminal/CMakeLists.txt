add_library(tftterminal INTERFACE)

target_sources(tftterminal INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TFTTerminal/src/TFTTerminal.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TFTTerminal/src/TFTTerminal.h"
)

target_include_directories(tftterminal INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TFTTerminal/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(tftterminal INTERFACE
    arduino-compat
)
