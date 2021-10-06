add_library(perswifimanager INTERFACE)

target_sources(perswifimanager INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/PersWiFiManager/PersWiFiManager.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PersWiFiManager/PersWiFiManager.h"
)

target_include_directories(perswifimanager INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/PersWiFiManager"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(perswifimanager INTERFACE
    arduino-compat
)
