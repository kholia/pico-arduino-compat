add_library(esp32analogread INTERFACE)

target_sources(esp32analogread INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ESP32AnalogRead/ESP32AnalogRead.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32AnalogRead/ESP32AnalogRead.h"
)

target_include_directories(esp32analogread INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ESP32AnalogRead"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(esp32analogread INTERFACE
    arduino-compat
)
