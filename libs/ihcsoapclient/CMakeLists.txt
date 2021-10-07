add_library(pac-ihcsoapclient INTERFACE)

target_sources(pac-ihcsoapclient INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/esp8266IHCSoapClient/HTTPClientEx.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/esp8266IHCSoapClient/IHCSoapClient.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/esp8266IHCSoapClient/SimpleXml.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/esp8266IHCSoapClient/HTTPClientEx.h"
  "${CMAKE_CURRENT_LIST_DIR}/esp8266IHCSoapClient/SoapPayload.h"
  "${CMAKE_CURRENT_LIST_DIR}/esp8266IHCSoapClient/SimpleXml.h"
  "${CMAKE_CURRENT_LIST_DIR}/esp8266IHCSoapClient/IHCSoapClient.h"
  "${CMAKE_CURRENT_LIST_DIR}/esp8266IHCSoapClient/examples/GetValue/settings.h"
  "${CMAKE_CURRENT_LIST_DIR}/esp8266IHCSoapClient/examples/SetValue/settings.h"
  "${CMAKE_CURRENT_LIST_DIR}/esp8266IHCSoapClient/examples/Notify/settings.h"
)

target_include_directories(pac-ihcsoapclient INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/esp8266IHCSoapClient"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-ihcsoapclient INTERFACE
    arduino-compat
)
