add_library(pac-esp32_ftpclient INTERFACE)

target_sources(pac-esp32_ftpclient INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ESP32_FTPClient/src/ESP32_FTPClient.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32_FTPClient/src/ESP32_FTPClient.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32_FTPClient/src/octocat.h"
)

target_include_directories(pac-esp32_ftpclient INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ESP32_FTPClient/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-esp32_ftpclient INTERFACE
    arduino-compat
)
