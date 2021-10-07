add_library(pac-asynctelegram2 INTERFACE)

target_sources(pac-asynctelegram2 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/AsyncTelegram2/src/InlineKeyboard.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AsyncTelegram2/src/ReplyKeyboard.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AsyncTelegram2/src/AsyncTelegram2.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AsyncTelegram2/src/ReplyKeyboard.h"
  "${CMAKE_CURRENT_LIST_DIR}/AsyncTelegram2/src/InlineKeyboard.h"
  "${CMAKE_CURRENT_LIST_DIR}/AsyncTelegram2/src/DataStructures.h"
  "${CMAKE_CURRENT_LIST_DIR}/AsyncTelegram2/src/serial_log.h"
  "${CMAKE_CURRENT_LIST_DIR}/AsyncTelegram2/src/tg_certificate.h"
  "${CMAKE_CURRENT_LIST_DIR}/AsyncTelegram2/src/AsyncTelegram2.h"
  "${CMAKE_CURRENT_LIST_DIR}/AsyncTelegram2/examples/ESP32/ESP32-CAM-PIR/camera_pins.h"
  "${CMAKE_CURRENT_LIST_DIR}/AsyncTelegram2/examples/Ethernet/certificates.h"
  "${CMAKE_CURRENT_LIST_DIR}/AsyncTelegram2/examples/advanced/EventScheduler/fw_updater.h"
  "${CMAKE_CURRENT_LIST_DIR}/AsyncTelegram2/examples/advanced/EventScheduler/ev_scheduler.h"
  "${CMAKE_CURRENT_LIST_DIR}/AsyncTelegram2/examples/advanced/multipleTimers/scheduler.h"
)

target_include_directories(pac-asynctelegram2 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/AsyncTelegram2/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-asynctelegram2 INTERFACE
    arduino-compat
)
