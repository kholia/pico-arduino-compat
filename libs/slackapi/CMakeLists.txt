add_library(pac-slackapi INTERFACE)

target_sources(pac-slackapi INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduino-slack-api/src/ArduinoSlack.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-slack-api/src/ArduinoSlack.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-slack-api/src/ArduinoSlackCert.h"
)

target_include_directories(pac-slackapi INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduino-slack-api/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-slackapi INTERFACE
    arduino-compat
)
