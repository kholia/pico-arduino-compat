add_library(pac-tftterminal INTERFACE)

target_sources(pac-tftterminal INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TFTTerminal/src/TFTTerminal.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TFTTerminal/src/TFTTerminal.h"
)

target_include_directories(pac-tftterminal INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TFTTerminal/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-tftterminal INTERFACE
    arduino-compat
)
