add_library(pac-wharehauorawifimanager INTERFACE)

target_sources(pac-wharehauorawifimanager INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/WiFiManager/WiFiManager.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/WiFiManager/WiFiManager.h"
  "${CMAKE_CURRENT_LIST_DIR}/WiFiManager/extras/template.h"
)

target_include_directories(pac-wharehauorawifimanager INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/WiFiManager"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-wharehauorawifimanager INTERFACE
    arduino-compat
)
