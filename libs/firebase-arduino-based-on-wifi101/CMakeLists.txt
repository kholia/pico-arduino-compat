add_library(pac-firebase-arduino-based-on-wifi101 INTERFACE)

target_sources(pac-firebase-arduino-based-on-wifi101 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Firebase-Arduino-WiFi101/src/Firebase_Arduino_WiFi101_HTTPClient.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Firebase-Arduino-WiFi101/src/Firebase_Arduino_WiFi101.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Firebase-Arduino-WiFi101/src/Firebase_Arduino_WiFi101.h"
  "${CMAKE_CURRENT_LIST_DIR}/Firebase-Arduino-WiFi101/src/Firebase_Arduino_WiFi101_HTTPClient.h"
)

target_include_directories(pac-firebase-arduino-based-on-wifi101 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Firebase-Arduino-WiFi101/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-firebase-arduino-based-on-wifi101 INTERFACE
    arduino-compat
)
