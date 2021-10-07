add_library(pac-simplekeypad INTERFACE)

target_sources(pac-simplekeypad INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SimpleKeypad/SimpleKeypad.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SimpleKeypad/SimpleKeypad.h"
)

target_include_directories(pac-simplekeypad INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SimpleKeypad"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-simplekeypad INTERFACE
    arduino-compat
)
