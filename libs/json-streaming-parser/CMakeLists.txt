add_library(pac-json-streaming-parser INTERFACE)

target_sources(pac-json-streaming-parser INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/json-streaming-parser/JsonListener.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/json-streaming-parser/JsonStreamingParser.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/json-streaming-parser/examples/JsonStreamingParser/ExampleParser.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/json-streaming-parser/JsonStreamingParser.h"
  "${CMAKE_CURRENT_LIST_DIR}/json-streaming-parser/JsonListener.h"
  "${CMAKE_CURRENT_LIST_DIR}/json-streaming-parser/examples/JsonStreamingParser/ExampleParser.h"
)

target_include_directories(pac-json-streaming-parser INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/json-streaming-parser"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-json-streaming-parser INTERFACE
    arduino-compat
)
