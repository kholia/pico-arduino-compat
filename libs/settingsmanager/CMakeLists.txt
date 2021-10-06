add_library(settingsmanager INTERFACE)

target_sources(settingsmanager INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/settingsManager/src/settingsManager.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/settingsManager/src/settingsManager.h"
)

target_include_directories(settingsmanager INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/settingsManager/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(settingsmanager INTERFACE
    arduino-compat
)
