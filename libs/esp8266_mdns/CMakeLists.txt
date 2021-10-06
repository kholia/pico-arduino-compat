add_library(esp8266_mdns INTERFACE)

target_sources(esp8266_mdns INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/esp8266_mdns/mdns.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/esp8266_mdns/mdns.h"
)

target_include_directories(esp8266_mdns INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/esp8266_mdns"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(esp8266_mdns INTERFACE
    arduino-compat
)
