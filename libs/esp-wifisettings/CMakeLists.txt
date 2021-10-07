add_library(pac-esp-wifisettings INTERFACE)

target_sources(pac-esp-wifisettings INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ESP-WiFiSettings/WiFiSettings.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP-WiFiSettings/WiFiSettings.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP-WiFiSettings/WiFiSettings_strings.h"
)

target_include_directories(pac-esp-wifisettings INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ESP-WiFiSettings"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-esp-wifisettings INTERFACE
    arduino-compat
)
