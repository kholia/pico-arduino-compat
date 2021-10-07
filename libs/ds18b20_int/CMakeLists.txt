add_library(pac-ds18b20_int INTERFACE)

target_sources(pac-ds18b20_int INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/DS18B20_INT/DS18B20_INT.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DS18B20_INT/DS18B20_INT.h"
)

target_include_directories(pac-ds18b20_int INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/DS18B20_INT"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-ds18b20_int INTERFACE
    arduino-compat
)
