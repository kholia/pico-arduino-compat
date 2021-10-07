add_library(pac-mdnsresolver INTERFACE)

target_sources(pac-mdnsresolver INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/mDNSResolver/mocks/WiFiUdp.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/mDNSResolver/mocks/Arduino.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/mDNSResolver/mocks/IPAddress.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/mDNSResolver/test/AnswerTest.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/mDNSResolver/test/QueryTest.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/mDNSResolver/test/Runner.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/mDNSResolver/test/CacheTest.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/mDNSResolver/test/ResponseTest.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/mDNSResolver/test/mDNSResolverTest.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/mDNSResolver/src/Response.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/mDNSResolver/src/mDNSResolver.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/mDNSResolver/src/Answer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/mDNSResolver/src/Cache.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/mDNSResolver/src/Query.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/mDNSResolver/mocks/IPAddress.h"
  "${CMAKE_CURRENT_LIST_DIR}/mDNSResolver/mocks/Arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/mDNSResolver/mocks/WiFiUdp.h"
  "${CMAKE_CURRENT_LIST_DIR}/mDNSResolver/test/catch.h"
  "${CMAKE_CURRENT_LIST_DIR}/mDNSResolver/src/Constants.h"
  "${CMAKE_CURRENT_LIST_DIR}/mDNSResolver/src/Query.h"
  "${CMAKE_CURRENT_LIST_DIR}/mDNSResolver/src/Response.h"
  "${CMAKE_CURRENT_LIST_DIR}/mDNSResolver/src/Cache.h"
  "${CMAKE_CURRENT_LIST_DIR}/mDNSResolver/src/Answer.h"
  "${CMAKE_CURRENT_LIST_DIR}/mDNSResolver/src/mDNSResolver.h"
)

target_include_directories(pac-mdnsresolver INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/mDNSResolver/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-mdnsresolver INTERFACE
    arduino-compat
)
