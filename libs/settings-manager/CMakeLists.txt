add_library(pac-settings-manager INTERFACE)

target_sources(pac-settings-manager INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/settingsmanager/test/test_main.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/settingsmanager/src/SettingsManager.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/settingsmanager/src/SettingsManager.h"
  "${CMAKE_CURRENT_LIST_DIR}/settingsmanager/src/Macro.h"
)

target_include_directories(pac-settings-manager INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/settingsmanager/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-settings-manager INTERFACE
    arduino-compat
)
