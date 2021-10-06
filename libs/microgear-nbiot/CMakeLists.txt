add_library(microgear-nbiot INTERFACE)

target_sources(microgear-nbiot INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/microgear-nbiot-arduino/CoAP.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/microgear-nbiot-arduino/NTPClient.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/microgear-nbiot-arduino/BC95Udp.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/microgear-nbiot-arduino/Dns.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/microgear-nbiot-arduino/BC95.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/microgear-nbiot-arduino/MicrogearNB.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/microgear-nbiot-arduino/MicrogearNB.h"
  "${CMAKE_CURRENT_LIST_DIR}/microgear-nbiot-arduino/BC95Udp.h"
  "${CMAKE_CURRENT_LIST_DIR}/microgear-nbiot-arduino/NTPClient.h"
  "${CMAKE_CURRENT_LIST_DIR}/microgear-nbiot-arduino/CoAP.h"
  "${CMAKE_CURRENT_LIST_DIR}/microgear-nbiot-arduino/Dns.h"
  "${CMAKE_CURRENT_LIST_DIR}/microgear-nbiot-arduino/BC95.h"
  "${CMAKE_CURRENT_LIST_DIR}/microgear-nbiot-arduino/settings.h"
)

target_include_directories(microgear-nbiot INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/microgear-nbiot-arduino"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(microgear-nbiot INTERFACE
    arduino-compat
)
