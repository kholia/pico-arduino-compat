add_library(pac-keyboardbutton INTERFACE)

target_sources(pac-keyboardbutton INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/keyboardButton/src/KeyboardButton.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/keyboardButton/src/KeyboardButton.h"
)

target_include_directories(pac-keyboardbutton INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/keyboardButton/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-keyboardbutton INTERFACE
    arduino-compat
)
