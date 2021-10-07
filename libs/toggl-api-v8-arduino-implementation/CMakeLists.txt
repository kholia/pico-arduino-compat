add_library(pac-toggl-api-v8-arduino-implementation INTERFACE)

target_sources(pac-toggl-api-v8-arduino-implementation INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-Toggl-API/src/Toggl_ESP8266.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-Toggl-API/src/base64.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-Toggl-API/src/Toggl_ESP32.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-Toggl-API/src/Toggl.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-Toggl-API/src/base64.h"
)

target_include_directories(pac-toggl-api-v8-arduino-implementation INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino-Toggl-API/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-toggl-api-v8-arduino-implementation INTERFACE
    arduino-compat
)
