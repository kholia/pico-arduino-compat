add_library(akafugu-twikeyboard-library INTERFACE)

target_sources(akafugu-twikeyboard-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TWIKeyboardLibrary/TWIKeyboard.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TWIKeyboardLibrary/TWIKeyboard.h"
)

target_include_directories(akafugu-twikeyboard-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TWIKeyboardLibrary"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(akafugu-twikeyboard-library INTERFACE
    arduino-compat
)
