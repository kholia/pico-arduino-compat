add_library(keyboardbutton INTERFACE)

target_sources(keyboardbutton INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/keyboardButton/src/KeyboardButton.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/keyboardButton/src/KeyboardButton.h"
)

target_include_directories(keyboardbutton INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/keyboardButton/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(keyboardbutton INTERFACE
    arduino-compat
)
