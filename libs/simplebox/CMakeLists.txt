add_library(pac-simplebox INTERFACE)

target_sources(pac-simplebox INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/simple-box/src/trace/tracer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/simple-box/src/http/client.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/simple-box/src/general/global.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/simple-box/src/ota/ota_api.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/simple-box/src/SimpleBox.h"
  "${CMAKE_CURRENT_LIST_DIR}/simple-box/src/version.h"
  "${CMAKE_CURRENT_LIST_DIR}/simple-box/src/trace/tracer.h"
  "${CMAKE_CURRENT_LIST_DIR}/simple-box/src/http/client.h"
  "${CMAKE_CURRENT_LIST_DIR}/simple-box/src/general/global.h"
  "${CMAKE_CURRENT_LIST_DIR}/simple-box/src/ota/ota_api.h"
  "${CMAKE_CURRENT_LIST_DIR}/simple-box/src/vendor/ArduinoJson.h"
)

target_include_directories(pac-simplebox INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/simple-box/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-simplebox INTERFACE
    arduino-compat
)
