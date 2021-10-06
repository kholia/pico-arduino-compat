add_library(keyboardazertyfr INTERFACE)

target_sources(keyboardazertyfr INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/KeyboardAzertyFr/src/KeyboardAzertyFr.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/KeyboardAzertyFr/src/KeyboardAzertyFr.h"
)

target_include_directories(keyboardazertyfr INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/KeyboardAzertyFr/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(keyboardazertyfr INTERFACE
    arduino-compat
)
