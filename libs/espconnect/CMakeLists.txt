add_library(espconnect INTERFACE)

target_sources(espconnect INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ESPConnect/src/ESPConnect.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESPConnect/src/espconnect_webpage.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPConnect/src/ESPConnect.h"
)

target_include_directories(espconnect INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ESPConnect/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(espconnect INTERFACE
    arduino-compat
)
