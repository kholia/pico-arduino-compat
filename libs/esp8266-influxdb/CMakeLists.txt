add_library(pac-esp8266-influxdb INTERFACE)

target_sources(pac-esp8266-influxdb INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/InfluxDB-Client-for-Arduino/test/TestSupport.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/InfluxDB-Client-for-Arduino/test/Test.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/InfluxDB-Client-for-Arduino/test/TestBase.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/InfluxDB-Client-for-Arduino/test/E2ETest.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/InfluxDB-Client-for-Arduino/src/InfluxData.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/InfluxDB-Client-for-Arduino/src/Point.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/InfluxDB-Client-for-Arduino/src/HTTPService.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/InfluxDB-Client-for-Arduino/src/BucketsClient.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/InfluxDB-Client-for-Arduino/src/InfluxDbClient.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/InfluxDB-Client-for-Arduino/src/InfluxDb.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/InfluxDB-Client-for-Arduino/src/Options.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/InfluxDB-Client-for-Arduino/src/util/helpers.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/InfluxDB-Client-for-Arduino/src/query/HttpStreamScanner.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/InfluxDB-Client-for-Arduino/src/query/FluxParser.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/InfluxDB-Client-for-Arduino/src/query/FluxTypes.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/InfluxDB-Client-for-Arduino/src/query/CsvReader.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/InfluxDB-Client-for-Arduino/test/Test.h"
  "${CMAKE_CURRENT_LIST_DIR}/InfluxDB-Client-for-Arduino/test/TestSupport.h"
  "${CMAKE_CURRENT_LIST_DIR}/InfluxDB-Client-for-Arduino/test/E2ETest.h"
  "${CMAKE_CURRENT_LIST_DIR}/InfluxDB-Client-for-Arduino/test/TestBase.h"
  "${CMAKE_CURRENT_LIST_DIR}/InfluxDB-Client-for-Arduino/test/customSettings.h"
  "${CMAKE_CURRENT_LIST_DIR}/InfluxDB-Client-for-Arduino/src/Version.h"
  "${CMAKE_CURRENT_LIST_DIR}/InfluxDB-Client-for-Arduino/src/InfluxDb.h"
  "${CMAKE_CURRENT_LIST_DIR}/InfluxDB-Client-for-Arduino/src/WritePrecision.h"
  "${CMAKE_CURRENT_LIST_DIR}/InfluxDB-Client-for-Arduino/src/InfluxDbClient.h"
  "${CMAKE_CURRENT_LIST_DIR}/InfluxDB-Client-for-Arduino/src/BucketsClient.h"
  "${CMAKE_CURRENT_LIST_DIR}/InfluxDB-Client-for-Arduino/src/Options.h"
  "${CMAKE_CURRENT_LIST_DIR}/InfluxDB-Client-for-Arduino/src/HTTPService.h"
  "${CMAKE_CURRENT_LIST_DIR}/InfluxDB-Client-for-Arduino/src/InfluxDbCloud.h"
  "${CMAKE_CURRENT_LIST_DIR}/InfluxDB-Client-for-Arduino/src/Point.h"
  "${CMAKE_CURRENT_LIST_DIR}/InfluxDB-Client-for-Arduino/src/InfluxData.h"
  "${CMAKE_CURRENT_LIST_DIR}/InfluxDB-Client-for-Arduino/src/Platform.h"
  "${CMAKE_CURRENT_LIST_DIR}/InfluxDB-Client-for-Arduino/src/util/helpers.h"
  "${CMAKE_CURRENT_LIST_DIR}/InfluxDB-Client-for-Arduino/src/util/debug.h"
  "${CMAKE_CURRENT_LIST_DIR}/InfluxDB-Client-for-Arduino/src/query/HttpStreamScanner.h"
  "${CMAKE_CURRENT_LIST_DIR}/InfluxDB-Client-for-Arduino/src/query/FluxParser.h"
  "${CMAKE_CURRENT_LIST_DIR}/InfluxDB-Client-for-Arduino/src/query/CsvReader.h"
  "${CMAKE_CURRENT_LIST_DIR}/InfluxDB-Client-for-Arduino/src/query/FluxTypes.h"
)

target_include_directories(pac-esp8266-influxdb INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/InfluxDB-Client-for-Arduino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-esp8266-influxdb INTERFACE
    arduino-compat
)
