add_library(balemessengerbot_arduino INTERFACE)

target_sources(balemessengerbot_arduino INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/BaleMessengerBot_Arduino/src/BaleMessengerBot.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/BaleMessengerBot_Arduino/src/ArduinoJson.h"
  "${CMAKE_CURRENT_LIST_DIR}/BaleMessengerBot_Arduino/src/BaleMessengerBot.h"
)

target_include_directories(balemessengerbot_arduino INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/BaleMessengerBot_Arduino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(balemessengerbot_arduino INTERFACE
    arduino-compat
)
