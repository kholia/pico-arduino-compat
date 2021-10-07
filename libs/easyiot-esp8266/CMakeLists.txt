add_library(pac-easyiot-esp8266 INTERFACE)

target_sources(pac-easyiot-esp8266 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Easyiot-Esp8266/src/Easyiot-Esp8266.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Easyiot-Esp8266/src/Easyiot-Esp8266.h"
)

target_include_directories(pac-easyiot-esp8266 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Easyiot-Esp8266/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-easyiot-esp8266 INTERFACE
    arduino-compat
)
