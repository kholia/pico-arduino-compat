add_library(pac-espwebdav INTERFACE)

target_sources(pac-espwebdav INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ESPWebDAV/WebSrv.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESPWebDAV/WebDav4WebServer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESPWebDAV/ESPWebDAV.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESPWebDAV/PolledTimeout_esp32.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPWebDAV/ESPWebDAV.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPWebDAV/WebDav4WebServer.h"
)

target_include_directories(pac-espwebdav INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ESPWebDAV"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-espwebdav INTERFACE
    arduino-compat
)
