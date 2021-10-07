add_library(pac-keyboard INTERFACE)

target_sources(pac-keyboard INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Keyboard/src/Keyboard.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Keyboard/src/Keyboard.h"
)

target_include_directories(pac-keyboard INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Keyboard/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-keyboard INTERFACE
    arduino-compat
)
