add_library(multitapkeypad INTERFACE)

target_sources(multitapkeypad INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MultitapKeypad/src/MultitapKeypad.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MultitapKeypad/src/MultitapKeypad.h"
)

target_include_directories(multitapkeypad INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MultitapKeypad/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(multitapkeypad INTERFACE
    arduino-compat
)
