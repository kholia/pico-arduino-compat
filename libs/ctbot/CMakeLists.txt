add_library(ctbot INTERFACE)

target_sources(ctbot INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/CTBot/src/CTBot.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/CTBot/src/CTBotInlineKeyboard.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/CTBot/src/CTBotReplyKeyboard.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/CTBot/src/CTBotWifiSetup.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/CTBot/src/CTBotStatusPin.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/CTBot/src/Utilities.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/CTBot/src/CTBotSecureConnection.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/CTBot/src/CTBotInlineKeyboard.h"
  "${CMAKE_CURRENT_LIST_DIR}/CTBot/src/CTBotSecureConnection.h"
  "${CMAKE_CURRENT_LIST_DIR}/CTBot/src/CTBotReplyKeyboard.h"
  "${CMAKE_CURRENT_LIST_DIR}/CTBot/src/CTBotDefines.h"
  "${CMAKE_CURRENT_LIST_DIR}/CTBot/src/Utilities.h"
  "${CMAKE_CURRENT_LIST_DIR}/CTBot/src/CTBotStatusPin.h"
  "${CMAKE_CURRENT_LIST_DIR}/CTBot/src/CTBot.h"
  "${CMAKE_CURRENT_LIST_DIR}/CTBot/src/CTBotWifiSetup.h"
  "${CMAKE_CURRENT_LIST_DIR}/CTBot/src/CTBotDataStructures.h"
)

target_include_directories(ctbot INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/CTBot/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(ctbot INTERFACE
    arduino-compat
)
