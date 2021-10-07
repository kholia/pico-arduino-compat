add_library(pac-json-streaming-parser-2 INTERFACE)

target_sources(pac-json-streaming-parser-2 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/json-streaming-parser2/ElementPath.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/json-streaming-parser2/ArduinoStreamParser.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/json-streaming-parser2/JsonHandler.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/json-streaming-parser2/JsonStreamingParser2.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/json-streaming-parser2/ElementValue.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/json-streaming-parser2/examples/HTTPS_StreamParser/ExampleHandler.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/json-streaming-parser2/examples/SimpleParser/SimpleHandler.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/json-streaming-parser2/JsonHandler.h"
  "${CMAKE_CURRENT_LIST_DIR}/json-streaming-parser2/ElementValue.h"
  "${CMAKE_CURRENT_LIST_DIR}/json-streaming-parser2/ElementPath.h"
  "${CMAKE_CURRENT_LIST_DIR}/json-streaming-parser2/ArduinoStreamParser.h"
  "${CMAKE_CURRENT_LIST_DIR}/json-streaming-parser2/JsonStreamingParser2.h"
  "${CMAKE_CURRENT_LIST_DIR}/json-streaming-parser2/examples/HTTPS_StreamParser/ExampleHandler.h"
  "${CMAKE_CURRENT_LIST_DIR}/json-streaming-parser2/examples/HTTPS_StreamParser_Weather/WeatherForecastHandler.h"
  "${CMAKE_CURRENT_LIST_DIR}/json-streaming-parser2/examples/SimpleParser/SimpleHandler.h"
)

target_include_directories(pac-json-streaming-parser-2 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/json-streaming-parser2"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-json-streaming-parser-2 INTERFACE
    arduino-compat
)
