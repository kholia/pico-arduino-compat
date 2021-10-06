add_library(slight_debugmenu INTERFACE)

target_sources(slight_debugmenu INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/slight_DebugMenu/src/slight_DebugMenu.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/slight_DebugMenu/src/slight_DebugMenu.h"
)

target_include_directories(slight_debugmenu INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/slight_DebugMenu/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(slight_debugmenu INTERFACE
    arduino-compat
)
