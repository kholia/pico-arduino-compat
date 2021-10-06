add_library(serialmenucmd INTERFACE)

target_sources(serialmenucmd INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SerialMenuCmd/src/SerialMenuCmd.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SerialMenuCmd/src/SerialMenuCmd.h"
  "${CMAKE_CURRENT_LIST_DIR}/SerialMenuCmd/src/SerialMenuCmdLang.h"
)

target_include_directories(serialmenucmd INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SerialMenuCmd/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(serialmenucmd INTERFACE
    arduino-compat
)
