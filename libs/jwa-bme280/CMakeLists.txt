add_library(pac-jwa-bme280 INTERFACE)

target_sources(pac-jwa-bme280 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/JWA_BME280/Bme280BoschWrapper.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/JWA_BME280/bme280.c"
  "${CMAKE_CURRENT_LIST_DIR}/JWA_BME280/bme280.h"
  "${CMAKE_CURRENT_LIST_DIR}/JWA_BME280/Bme280BoschWrapper.h"
  "${CMAKE_CURRENT_LIST_DIR}/JWA_BME280/bme280_defs.h"
)

target_include_directories(pac-jwa-bme280 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/JWA_BME280"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-jwa-bme280 INTERFACE
    arduino-compat
)
