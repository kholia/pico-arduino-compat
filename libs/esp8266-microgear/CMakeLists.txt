add_library(esp8266-microgear INTERFACE)

target_sources(esp8266-microgear INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/microgear-esp8266-arduino/AuthClient.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/microgear-esp8266-arduino/PubSubClient.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/microgear-esp8266-arduino/SHA1.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/microgear-esp8266-arduino/MicroGear.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/microgear-esp8266-arduino/examples/BasicAsyncPublish/CMMC_Interval.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/microgear-esp8266-arduino/SHA1.h"
  "${CMAKE_CURRENT_LIST_DIR}/microgear-esp8266-arduino/AuthClient.h"
  "${CMAKE_CURRENT_LIST_DIR}/microgear-esp8266-arduino/PubSubClient.h"
  "${CMAKE_CURRENT_LIST_DIR}/microgear-esp8266-arduino/MicroGear.h"
  "${CMAKE_CURRENT_LIST_DIR}/microgear-esp8266-arduino/MQTTClient.h"
  "${CMAKE_CURRENT_LIST_DIR}/microgear-esp8266-arduino/debug.h"
)

target_include_directories(esp8266-microgear INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/microgear-esp8266-arduino"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(esp8266-microgear INTERFACE
    arduino-compat
)
