add_library(pac-telemetrix4esp8266 INTERFACE)

target_sources(pac-telemetrix4esp8266 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Telemetrix4Esp8266/Telemetrix4Esp8266.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Telemetrix4Esp8266/Telemetrix4Esp8266.h"
)

target_include_directories(pac-telemetrix4esp8266 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Telemetrix4Esp8266"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-telemetrix4esp8266 INTERFACE
    arduino-compat
)
