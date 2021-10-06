add_library(http INTERFACE)

target_sources(http INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_HTTP/src/httpHeader.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_HTTP/src/httpLog.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_HTTP/src/httpHeader.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_HTTP/src/httpMessage.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_HTTP/src/httpRequestHandler.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_HTTP/src/httpServer.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_HTTP/src/httpRemoteClient.hpp"
)

target_include_directories(http INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino_HTTP/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(http INTERFACE
    arduino-compat
)
