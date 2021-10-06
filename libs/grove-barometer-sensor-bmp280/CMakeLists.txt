add_library(grove-barometer-sensor-bmp280 INTERFACE)

target_sources(grove-barometer-sensor-bmp280 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Grove_BMP280/Seeed_BMP280.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Grove_BMP280/Seeed_BMP280.h"
)

target_include_directories(grove-barometer-sensor-bmp280 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Grove_BMP280"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(grove-barometer-sensor-bmp280 INTERFACE
    arduino-compat
)
