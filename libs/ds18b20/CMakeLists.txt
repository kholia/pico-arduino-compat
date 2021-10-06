add_library(ds18b20 INTERFACE)

target_sources(ds18b20 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/DS18B20/src/DS18B20.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DS18B20/src/DS18B20.h"
)

target_include_directories(ds18b20 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/DS18B20/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(ds18b20 INTERFACE
    arduino-compat
)
