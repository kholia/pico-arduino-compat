add_library(telegrambotclient INTERFACE)

target_sources(telegrambotclient INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TelegramBotClient/src/TelegramBotClient.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TelegramBotClient/src/JsonWebClient.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TelegramBotClient/src/TBCDebug.h"
  "${CMAKE_CURRENT_LIST_DIR}/TelegramBotClient/src/JsonWebClient.h"
  "${CMAKE_CURRENT_LIST_DIR}/TelegramBotClient/src/TelegramBotClient.h"
)

target_include_directories(telegrambotclient INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TelegramBotClient/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(telegrambotclient INTERFACE
    arduino-compat
)
