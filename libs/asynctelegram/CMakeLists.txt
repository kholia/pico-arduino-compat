add_library(asynctelegram INTERFACE)

target_sources(asynctelegram INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/AsyncTelegram/src/InlineKeyboard.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AsyncTelegram/src/ReplyKeyboard.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AsyncTelegram/src/Utilities.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AsyncTelegram/src/AsyncTelegram.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AsyncTelegram/src/ReplyKeyboard.h"
  "${CMAKE_CURRENT_LIST_DIR}/AsyncTelegram/src/InlineKeyboard.h"
  "${CMAKE_CURRENT_LIST_DIR}/AsyncTelegram/src/ca_cert.h"
  "${CMAKE_CURRENT_LIST_DIR}/AsyncTelegram/src/DataStructures.h"
  "${CMAKE_CURRENT_LIST_DIR}/AsyncTelegram/src/serial_log.h"
  "${CMAKE_CURRENT_LIST_DIR}/AsyncTelegram/src/AsyncTelegram.h"
  "${CMAKE_CURRENT_LIST_DIR}/AsyncTelegram/src/Utilities.h"
  "${CMAKE_CURRENT_LIST_DIR}/AsyncTelegram/examples/ESP32-CAM/camera.h"
)

target_include_directories(asynctelegram INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/AsyncTelegram/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(asynctelegram INTERFACE
    arduino-compat
)
