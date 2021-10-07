add_library(pac-esp8266-webhooks INTERFACE)

target_sources(pac-esp8266-webhooks INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266Webhook/ESP8266Webhook.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP8266Webhook/ESP8266Webhook.h"
)

target_include_directories(pac-esp8266-webhooks INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ESP8266Webhook"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-esp8266-webhooks INTERFACE
    arduino-compat
)
