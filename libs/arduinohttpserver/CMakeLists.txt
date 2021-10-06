add_library(arduinohttpserver INTERFACE)

target_sources(arduinohttpserver INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoHttpServer/test/test_FixString.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoHttpServer/src/internals/HttpResource.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoHttpServer/src/internals/HttpVersion.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoHttpServer/src/internals/StreamHttpReply.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoHttpServer/src/internals/HttpField.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoHttpServer/examples/HelloHttp/HelloHttp.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoHttpServer/src/internals/StreamHttpReply.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoHttpServer/src/internals/HttpVersion.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoHttpServer/src/internals/HttpField.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoHttpServer/src/internals/StreamHttpRequest.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoHttpServer/src/internals/FixString.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoHttpServer/src/internals/HttpResource.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoHttpServer/src/ArduinoHttpServer.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoHttpServer/src/internals/ArduinoHttpServerDebug.h"
)

target_include_directories(arduinohttpserver INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ArduinoHttpServer/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(arduinohttpserver INTERFACE
    arduino-compat
)
