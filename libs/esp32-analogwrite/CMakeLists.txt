add_library(esp32-analogwrite INTERFACE)

target_sources(esp32-analogwrite INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ESP32_AnalogWrite/src/analogWrite.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32_AnalogWrite/src/analogWrite.h"
)

target_include_directories(esp32-analogwrite INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ESP32_AnalogWrite/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(esp32-analogwrite INTERFACE
    arduino-compat
)
