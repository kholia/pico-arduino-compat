add_library(automaton-esp8266 INTERFACE)

target_sources(automaton-esp8266 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Automaton-Esp8266/src/Atm_esp8266_httpd_simple.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Automaton-Esp8266/src/Atm_esp8266_wifi.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Automaton-Esp8266/src/Atm_esp8266_httpc_simple.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Automaton-Esp8266/src/Atm_esp8266_httpd_simple.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/Automaton-Esp8266/src/Atm_esp8266_httpc_simple.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/Automaton-Esp8266/src/Atm_esp8266_wifi.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/Automaton-Esp8266/src/Atm_esp8266.h"
)

target_include_directories(automaton-esp8266 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Automaton-Esp8266/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(automaton-esp8266 INTERFACE
    arduino-compat
)
