add_library(universaltelegrambot INTERFACE)

target_sources(universaltelegrambot INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Universal-Arduino-Telegram-Bot/src/UniversalTelegramBot.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Universal-Arduino-Telegram-Bot/src/TelegramCertificate.h"
  "${CMAKE_CURRENT_LIST_DIR}/Universal-Arduino-Telegram-Bot/src/UniversalTelegramBot.h"
  "${CMAKE_CURRENT_LIST_DIR}/Universal-Arduino-Telegram-Bot/examples/ESP32/SendPhoto/ESP32-Cam/camera_pins.h"
  "${CMAKE_CURRENT_LIST_DIR}/Universal-Arduino-Telegram-Bot/examples/ESP32/SendPhoto/ESP32-Cam/camera_code.h"
)

target_include_directories(universaltelegrambot INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Universal-Arduino-Telegram-Bot/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(universaltelegrambot INTERFACE
    arduino-compat
)
