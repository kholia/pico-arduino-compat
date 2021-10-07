add_library(pac-telegrambot INTERFACE)

target_sources(pac-telegrambot INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TelegramBot-Library/src/TelegramKeyboard.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TelegramBot-Library/src/TelegramBot.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TelegramBot-Library/src/TelegramKeyboard.h"
  "${CMAKE_CURRENT_LIST_DIR}/TelegramBot-Library/src/TelegramBot.h"
  "${CMAKE_CURRENT_LIST_DIR}/TelegramBot-Library/examples/EchoBot-ESP8266/arduino_secrets.h"
  "${CMAKE_CURRENT_LIST_DIR}/TelegramBot-Library/examples/EchoBot/arduino_secrets.h"
  "${CMAKE_CURRENT_LIST_DIR}/TelegramBot-Library/examples/Custom_Keyboard/arduino_secrets.h"
)

target_include_directories(pac-telegrambot INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TelegramBot-Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-telegrambot INTERFACE
    arduino-compat
)
