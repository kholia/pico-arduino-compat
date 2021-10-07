add_library(pac-firebase-arduino-based-on-wifinina INTERFACE)

target_sources(pac-firebase-arduino-based-on-wifinina INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Firebase-Arduino-WiFiNINA/src/Firebase_Arduino_WiFiNINA.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Firebase-Arduino-WiFiNINA/src/Firebase_Arduino_WiFiNINA_HTTPClient.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Firebase-Arduino-WiFiNINA/src/Firebase_Arduino_WiFiNINA.h"
  "${CMAKE_CURRENT_LIST_DIR}/Firebase-Arduino-WiFiNINA/src/Firebase_Arduino_WiFiNINA_HTTPClient.h"
)

target_include_directories(pac-firebase-arduino-based-on-wifinina INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Firebase-Arduino-WiFiNINA/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-firebase-arduino-based-on-wifinina INTERFACE
    arduino-compat
)
