add_library(pac-blynk_teensy INTERFACE)

target_sources(pac-blynk_teensy INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Blynk_Teensy/src/BlynkSimpleShieldEsp8266_Teensy.h"
  "${CMAKE_CURRENT_LIST_DIR}/Blynk_Teensy/src/Blynk/BlynkDetectDevice.h"
)

target_include_directories(pac-blynk_teensy INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Blynk_Teensy/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-blynk_teensy INTERFACE
    arduino-compat
)
