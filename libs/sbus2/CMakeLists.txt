add_library(sbus2 INTERFACE)

target_sources(sbus2 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SBUS2-Telemetry/src/SBUS_usart_328P.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SBUS2-Telemetry/src/SBUS_usart_ESP32.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SBUS2-Telemetry/src/SBUS2.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SBUS2-Telemetry/src/SBUS_usart.h"
  "${CMAKE_CURRENT_LIST_DIR}/SBUS2-Telemetry/src/SBUS2.h"
)

target_include_directories(sbus2 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SBUS2-Telemetry/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(sbus2 INTERFACE
    arduino-compat
)
