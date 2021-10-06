add_library(ds18b20events INTERFACE)

target_sources(ds18b20events INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduino-temperature-control-events/src/DS18B20Events.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-temperature-control-events/src/DS18B20Events.h"
)

target_include_directories(ds18b20events INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduino-temperature-control-events/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(ds18b20events INTERFACE
    arduino-compat
)
