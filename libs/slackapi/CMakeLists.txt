add_library(slackapi INTERFACE)

target_sources(slackapi INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduino-slack-api/src/ArduinoSlack.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-slack-api/src/ArduinoSlack.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-slack-api/src/ArduinoSlackCert.h"
)

target_include_directories(slackapi INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduino-slack-api/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(slackapi INTERFACE
    arduino-compat
)
