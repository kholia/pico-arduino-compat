add_library(esp32servo360 INTERFACE)

target_sources(esp32servo360 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ESP32Servo360/src/ESP32Servo360.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32Servo360/src/ESP32Servo360.h"
)

target_include_directories(esp32servo360 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ESP32Servo360/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(esp32servo360 INTERFACE
    arduino-compat
)
