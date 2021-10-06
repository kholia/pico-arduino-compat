add_library(esp32_https_server INTERFACE)

target_sources(esp32_https_server INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/esp32_https_server/extras/legacy/https_server.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/esp32_https_server/src/ResourceResolver.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/esp32_https_server/src/HTTPConnection.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/esp32_https_server/src/ResourceParameters.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/esp32_https_server/src/HTTPSConnection.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/esp32_https_server/src/SSLCert.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/esp32_https_server/src/HTTPMultipartBodyParser.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/esp32_https_server/src/HTTPHeaders.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/esp32_https_server/src/ResolvedResource.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/esp32_https_server/src/util.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/esp32_https_server/src/HTTPValidator.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/esp32_https_server/src/HTTPNode.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/esp32_https_server/src/HTTPHeader.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/esp32_https_server/src/ResourceNode.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/esp32_https_server/src/HTTPRequest.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/esp32_https_server/src/HTTPResponse.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/esp32_https_server/src/WebsocketHandler.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/esp32_https_server/src/WebsocketNode.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/esp32_https_server/src/WebsocketInputStreambuf.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/esp32_https_server/src/ConnectionContext.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/esp32_https_server/src/ValidatorFunctions.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/esp32_https_server/src/HTTPSServer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/esp32_https_server/src/HTTPServer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/esp32_https_server/src/HTTPURLEncodedBodyParser.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/esp32_https_server/src/SSLCert.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/esp32_https_server/src/HTTPMiddlewareFunction.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/esp32_https_server/src/ResourceNode.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/esp32_https_server/src/HTTPMultipartBodyParser.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/esp32_https_server/src/ResourceParameters.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/esp32_https_server/src/HTTPSConnection.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/esp32_https_server/src/HTTPHeader.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/esp32_https_server/src/ResourceResolver.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/esp32_https_server/src/HTTPURLEncodedBodyParser.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/esp32_https_server/src/HTTPNode.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/esp32_https_server/src/HTTPSCallbackFunction.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/esp32_https_server/src/HTTPRequest.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/esp32_https_server/src/HTTPBodyParser.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/esp32_https_server/src/HTTPSServerConstants.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/esp32_https_server/src/HTTPServer.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/esp32_https_server/src/WebsocketInputStreambuf.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/esp32_https_server/src/HTTPConnection.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/esp32_https_server/src/util.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/esp32_https_server/src/ValidatorFunctions.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/esp32_https_server/src/ResolvedResource.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/esp32_https_server/src/ConnectionContext.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/esp32_https_server/src/HTTPResponse.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/esp32_https_server/src/HTTPHeaders.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/esp32_https_server/src/WebsocketNode.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/esp32_https_server/src/HTTPSServer.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/esp32_https_server/src/WebsocketHandler.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/esp32_https_server/src/HTTPValidator.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/esp32_https_server/extras/legacy/https_server.h"
  "${CMAKE_CURRENT_LIST_DIR}/esp32_https_server/extras/ci/templates/example-project/src/private_key.h"
  "${CMAKE_CURRENT_LIST_DIR}/esp32_https_server/extras/ci/templates/example-project/src/cert.h"
  "${CMAKE_CURRENT_LIST_DIR}/esp32_https_server/examples/Static-Page/favicon.h"
)

target_include_directories(esp32_https_server INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/esp32_https_server/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(esp32_https_server INTERFACE
    arduino-compat
)
