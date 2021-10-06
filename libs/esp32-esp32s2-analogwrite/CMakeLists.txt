add_library(esp32-esp32s2-analogwrite INTERFACE)

target_sources(esp32-esp32s2-analogwrite INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ESP32-ESP32S2-AnalogWrite/analogWrite.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32-ESP32S2-AnalogWrite/analogWrite.h"
)

target_include_directories(esp32-esp32s2-analogwrite INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ESP32-ESP32S2-AnalogWrite"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(esp32-esp32s2-analogwrite INTERFACE
    arduino-compat
)
