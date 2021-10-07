add_library(pac-settingsmanager INTERFACE)

target_sources(pac-settingsmanager INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/settingsManager/src/settingsManager.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/settingsManager/src/settingsManager.h"
)

target_include_directories(pac-settingsmanager INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/settingsManager/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-settingsmanager INTERFACE
    arduino-compat
)
