add_library(pac-bootstrapper INTERFACE)

target_sources(pac-bootstrapper INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduino_bootstrapper/src/BootstrapManager.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino_bootstrapper/src/WifiManager.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino_bootstrapper/src/Helpers.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino_bootstrapper/src/QueueManager.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino_bootstrapper/src/PingESP.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino_bootstrapper/src/Configuration.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino_bootstrapper/examples/ChangeName.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino_bootstrapper/src/Secrets.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino_bootstrapper/src/WifiManager.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino_bootstrapper/src/BootstrapManager.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino_bootstrapper/src/Helpers.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino_bootstrapper/src/QueueManager.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino_bootstrapper/src/Configuration.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino_bootstrapper/src/PingESP.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino_bootstrapper/examples/ChangeName.h"
)

target_include_directories(pac-bootstrapper INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduino_bootstrapper/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET pac-adafruit-gfx-library)
    add_subdirectory(../../libs/adafruit-gfx-library build_pac-adafruit-gfx-library)
endif()

target_link_libraries(pac-bootstrapper INTERFACE
    arduino-compat
    pac-adafruit-gfx-library
)
