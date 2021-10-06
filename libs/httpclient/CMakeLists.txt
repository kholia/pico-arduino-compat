add_library(httpclient INTERFACE)

target_sources(httpclient INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/HttpClient/b64.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/HttpClient/HttpClient.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/HttpClient/HttpClient.h"
  "${CMAKE_CURRENT_LIST_DIR}/HttpClient/b64.h"
)

target_include_directories(httpclient INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/HttpClient"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(httpclient INTERFACE
    arduino-compat
)
