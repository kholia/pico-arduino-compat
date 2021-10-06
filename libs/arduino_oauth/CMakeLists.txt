add_library(arduino_oauth INTERFACE)

target_sources(arduino_oauth INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_OAuth/src/OAuthClient.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_OAuth/src/Arduino_OAuth.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_OAuth/src/OAuthClient.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_OAuth/examples/GetTwitterStatus/arduino_secrets.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_OAuth/examples/Tweeter/arduino_secrets.h"
)

target_include_directories(arduino_oauth INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino_OAuth/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(arduino_oauth INTERFACE
    arduino-compat
)
