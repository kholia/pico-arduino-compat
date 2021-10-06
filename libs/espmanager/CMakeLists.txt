add_library(espmanager INTERFACE)

target_sources(espmanager INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/espmanager/test/test_main.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/espmanager/src/ESPManager.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/espmanager/src/Macro.h"
  "${CMAKE_CURRENT_LIST_DIR}/espmanager/src/ESPManager.h"
)

target_include_directories(espmanager INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/espmanager/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(espmanager INTERFACE
    arduino-compat
)
