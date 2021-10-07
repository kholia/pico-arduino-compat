add_library(pac-telegrambotclient INTERFACE)

target_sources(pac-telegrambotclient INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TelegramBotClient/src/TelegramBotClient.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TelegramBotClient/src/JsonWebClient.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TelegramBotClient/src/TBCDebug.h"
  "${CMAKE_CURRENT_LIST_DIR}/TelegramBotClient/src/JsonWebClient.h"
  "${CMAKE_CURRENT_LIST_DIR}/TelegramBotClient/src/TelegramBotClient.h"
)

target_include_directories(pac-telegrambotclient INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TelegramBotClient/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-telegrambotclient INTERFACE
    arduino-compat
)
