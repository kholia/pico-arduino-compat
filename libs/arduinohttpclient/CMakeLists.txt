add_library(arduinohttpclient INTERFACE)

target_sources(arduinohttpclient INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoHttpClient/src/b64.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoHttpClient/src/URLEncoder.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoHttpClient/src/WebSocketClient.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoHttpClient/src/HttpClient.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoHttpClient/src/HttpClient.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoHttpClient/src/b64.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoHttpClient/src/WebSocketClient.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoHttpClient/src/URLEncoder.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoHttpClient/src/ArduinoHttpClient.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoHttpClient/examples/CustomHeader/arduino_secrets.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoHttpClient/examples/SimpleHttpExample/arduino_secrets.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoHttpClient/examples/BasicAuthGet/arduino_secrets.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoHttpClient/examples/SimplePut/arduino_secrets.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoHttpClient/examples/SimpleGet/arduino_secrets.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoHttpClient/examples/HueBlink/arduino_secrets.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoHttpClient/examples/SimpleDelete/arduino_secrets.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoHttpClient/examples/SimplePost/arduino_secrets.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoHttpClient/examples/SimpleWebSocket/arduino_secrets.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoHttpClient/examples/DweetGet/arduino_secrets.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoHttpClient/examples/PostWithHeaders/arduino_secrets.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoHttpClient/examples/DweetPost/arduino_secrets.h"
)

target_include_directories(arduinohttpclient INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ArduinoHttpClient/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(arduinohttpclient INTERFACE
    arduino-compat
)
