add_library(pac-multitapkeypad INTERFACE)

target_sources(pac-multitapkeypad INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MultitapKeypad/src/MultitapKeypad.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MultitapKeypad/src/MultitapKeypad.h"
)

target_include_directories(pac-multitapkeypad INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MultitapKeypad/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-multitapkeypad INTERFACE
    arduino-compat
)
