add_library(richhttpserver INTERFACE)

target_sources(richhttpserver INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/rich_http_server/src/AuthProviders.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/rich_http_server/src/RichResponse.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/rich_http_server/src/Platforms/PlatformAsyncWebServer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/rich_http_server/src/Platforms/PlatformEspressif.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/rich_http_server/src/RichResponse.h"
  "${CMAKE_CURRENT_LIST_DIR}/rich_http_server/src/RichHttpServer.h"
  "${CMAKE_CURRENT_LIST_DIR}/rich_http_server/src/AuthProviders.h"
  "${CMAKE_CURRENT_LIST_DIR}/rich_http_server/src/Platforms/PlatformESP8266.h"
  "${CMAKE_CURRENT_LIST_DIR}/rich_http_server/src/Platforms/PlatformAsyncWebServer.h"
  "${CMAKE_CURRENT_LIST_DIR}/rich_http_server/src/Platforms/PlatformESP32.h"
  "${CMAKE_CURRENT_LIST_DIR}/rich_http_server/src/Platforms/Generics.h"
  "${CMAKE_CURRENT_LIST_DIR}/rich_http_server/src/Platforms/PlatformEspressif.h"
)

target_include_directories(richhttpserver INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/rich_http_server/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(richhttpserver INTERFACE
    arduino-compat
)
