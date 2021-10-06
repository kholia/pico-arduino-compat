add_library(twilio-esp32-client INTERFACE)

target_sources(twilio-esp32-client INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/twilio-esp32-client/src/twilio.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/twilio-esp32-client/src/url_coding.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/twilio-esp32-client/src/digicert.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/twilio-esp32-client/src/twilio.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/twilio-esp32-client/src/url_coding.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/twilio-esp32-client/src/digicert.h"
)

target_include_directories(twilio-esp32-client INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/twilio-esp32-client/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(twilio-esp32-client INTERFACE
    arduino-compat
)
