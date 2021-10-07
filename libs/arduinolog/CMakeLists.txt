add_library(pac-arduinolog INTERFACE)

target_sources(pac-arduinolog INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-Log/ArduinoLog.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-Log/examples/platformio-basic/test/test_native.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-Log/examples/platformio-basic/src/main.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-Log/ArduinoLog.h"
)

target_include_directories(pac-arduinolog INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino-Log"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-arduinolog INTERFACE
    arduino-compat
)
