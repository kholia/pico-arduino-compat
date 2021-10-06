add_library(esp32_https_server_compat INTERFACE)

target_sources(esp32_https_server_compat INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/esp32_https_server_compat/src/ESPWebServerSecure.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/esp32_https_server_compat/src/ESPWebServer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/esp32_https_server_compat/src/ESPWebServerSecure.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/esp32_https_server_compat/src/ESPWebServer.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/esp32_https_server_compat/src/HTTP_Method.h"
  "${CMAKE_CURRENT_LIST_DIR}/esp32_https_server_compat/examples/HelloServerSecure/private_key.h"
  "${CMAKE_CURRENT_LIST_DIR}/esp32_https_server_compat/examples/HelloServerSecure/cert.h"
)

target_include_directories(esp32_https_server_compat INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/esp32_https_server_compat/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(esp32_https_server_compat INTERFACE
    arduino-compat
)
