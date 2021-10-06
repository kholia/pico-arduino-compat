add_library(bme680 INTERFACE)

target_sources(bme680 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/BME680/src/Zanshin_BME680.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/BME680/src/Zanshin_BME680.h"
  "${CMAKE_CURRENT_LIST_DIR}/BME680/examples/ESP32FeatherWiFiDemo/WebPageContents.h"
)

target_include_directories(bme680 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/BME680/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(bme680 INTERFACE
    arduino-compat
)
