add_library(esp-wifisettings INTERFACE)

target_sources(esp-wifisettings INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ESP-WiFiSettings/WiFiSettings.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP-WiFiSettings/WiFiSettings.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP-WiFiSettings/WiFiSettings_strings.h"
)

target_include_directories(esp-wifisettings INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ESP-WiFiSettings"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(esp-wifisettings INTERFACE
    arduino-compat
)
