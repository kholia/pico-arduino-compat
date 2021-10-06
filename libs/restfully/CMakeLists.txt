add_library(restfully INTERFACE)

target_sources(restfully INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Restfully/src/Endpoints.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Restfully/src/binbag.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Restfully/src/Pool.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Restfully/tests/basic/binbag.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Restfully/tests/basic/RestEndpointsTests.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Restfully/tests/basic/HandlerTests.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Restfully/tests/basic/RestRequestTests.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Restfully/tests/basic/pool-objects.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Restfully/tests/basic/RestFunctionalTests.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Restfully/tests/basic/RestRequestVptrTests.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Restfully/tests/catch2/catch_reporter_teamcity.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/Restfully/tests/catch2/catch.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/Restfully/src/binbag.h"
  "${CMAKE_CURRENT_LIST_DIR}/Restfully/src/Node.h"
  "${CMAKE_CURRENT_LIST_DIR}/Restfully/src/Argument.h"
  "${CMAKE_CURRENT_LIST_DIR}/Restfully/src/Exception.h"
  "${CMAKE_CURRENT_LIST_DIR}/Restfully/src/ds-config.h"
  "${CMAKE_CURRENT_LIST_DIR}/Restfully/src/Pool.h"
  "${CMAKE_CURRENT_LIST_DIR}/Restfully/src/Mixins.h"
  "${CMAKE_CURRENT_LIST_DIR}/Restfully/src/Parser.h"
  "${CMAKE_CURRENT_LIST_DIR}/Restfully/src/handler.h"
  "${CMAKE_CURRENT_LIST_DIR}/Restfully/src/Literal.h"
  "${CMAKE_CURRENT_LIST_DIR}/Restfully/src/Endpoints.h"
  "${CMAKE_CURRENT_LIST_DIR}/Restfully/src/Restfully.h"
  "${CMAKE_CURRENT_LIST_DIR}/Restfully/src/Token.h"
  "${CMAKE_CURRENT_LIST_DIR}/Restfully/src/Platforms/Esp8266.h"
  "${CMAKE_CURRENT_LIST_DIR}/Restfully/src/Platforms/Esp32.h"
  "${CMAKE_CURRENT_LIST_DIR}/Restfully/src/Platforms/ArduinoPlatform.h"
  "${CMAKE_CURRENT_LIST_DIR}/Restfully/src/Platforms/platform.h"
  "${CMAKE_CURRENT_LIST_DIR}/Restfully/src/Platforms/generics.h"
  "${CMAKE_CURRENT_LIST_DIR}/Restfully/examples/ObjectOrientedRest/Sensor.h"
  "${CMAKE_CURRENT_LIST_DIR}/Restfully/tests/basic/requests.h"
  "${CMAKE_CURRENT_LIST_DIR}/Restfully/tests/common/tests.h"
  "${CMAKE_CURRENT_LIST_DIR}/Restfully/tests/common/stress-tester.h"
)

target_include_directories(restfully INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Restfully/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(restfully INTERFACE
    arduino-compat
)
