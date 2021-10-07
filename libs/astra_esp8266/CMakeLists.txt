add_library(pac-astra_esp8266 INTERFACE)

target_sources(pac-astra_esp8266 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/astra_esp8266/src/KeyValStore.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/astra_esp8266/src/AstraLogger.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/astra_esp8266/src/Astra.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/astra_esp8266/src/Astra.h"
  "${CMAKE_CURRENT_LIST_DIR}/astra_esp8266/src/AstraLogger.h"
)

target_include_directories(pac-astra_esp8266 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/astra_esp8266/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-astra_esp8266 INTERFACE
    arduino-compat
)
