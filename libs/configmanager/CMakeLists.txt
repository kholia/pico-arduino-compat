add_library(pac-configmanager INTERFACE)

target_sources(pac-configmanager INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ConfigManager/src/ConfigManager.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ConfigManager/src/ConfigManager.h"
)

target_include_directories(pac-configmanager INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ConfigManager/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-configmanager INTERFACE
    arduino-compat
)
