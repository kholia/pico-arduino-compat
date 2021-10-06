add_library(ucr-esp8266 INTERFACE)

target_sources(ucr-esp8266 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/UCR-ESP8266/src/UCR.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/UCR-ESP8266/src/UCR.h"
)

target_include_directories(ucr-esp8266 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/UCR-ESP8266/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(ucr-esp8266 INTERFACE
    arduino-compat
)
