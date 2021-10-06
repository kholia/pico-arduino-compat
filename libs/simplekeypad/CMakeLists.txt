add_library(simplekeypad INTERFACE)

target_sources(simplekeypad INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SimpleKeypad/SimpleKeypad.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SimpleKeypad/SimpleKeypad.h"
)

target_include_directories(simplekeypad INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SimpleKeypad"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(simplekeypad INTERFACE
    arduino-compat
)
