add_library(utlgbotlib INTERFACE)

target_sources(utlgbotlib INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/uTLGBotLib-arduino/src/utlgbotlib.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/uTLGBotLib-arduino/src/utility/multihttpsclient/multihttpsclient_hals/generic/multihttpsclient_generic.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/uTLGBotLib-arduino/src/utility/multihttpsclient/multihttpsclient_hals/espidf/multihttpsclient_espidf.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/uTLGBotLib-arduino/src/utility/multihttpsclient/multihttpsclient_hals/arduino/multihttpsclient_arduino.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/uTLGBotLib-arduino/examples/native_windows_linux/echobot/main.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/uTLGBotLib-arduino/examples/espidf/echobot/echobot.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/uTLGBotLib-arduino/src/utility/jsmn/jsmn.c"
  "${CMAKE_CURRENT_LIST_DIR}/uTLGBotLib-arduino/src/utlgbotlib.h"
  "${CMAKE_CURRENT_LIST_DIR}/uTLGBotLib-arduino/src/utility/multihttpsclient/multihttpsclient.h"
  "${CMAKE_CURRENT_LIST_DIR}/uTLGBotLib-arduino/src/utility/multihttpsclient/multihttpsclient_hals/generic/multihttpsclient_generic.h"
  "${CMAKE_CURRENT_LIST_DIR}/uTLGBotLib-arduino/src/utility/multihttpsclient/multihttpsclient_hals/espidf/multihttpsclient_espidf.h"
  "${CMAKE_CURRENT_LIST_DIR}/uTLGBotLib-arduino/src/utility/multihttpsclient/multihttpsclient_hals/arduino/multihttpsclient_arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/uTLGBotLib-arduino/src/utility/jsmn/jsmn.h"
)

target_include_directories(utlgbotlib INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/uTLGBotLib-arduino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(utlgbotlib INTERFACE
    arduino-compat
)
