add_library(arduino_json INTERFACE)

target_sources(arduino_json INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_JSON/src/JSONVar.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_JSON/src/JSON.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_JSON/src/cjson/cJSON.c"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_JSON/src/JSON.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_JSON/src/Arduino_JSON.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_JSON/src/JSONVar.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_JSON/src/cjson/cJSON.h"
)

target_include_directories(arduino_json INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino_JSON/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(arduino_json INTERFACE
    arduino-compat
)
