add_library(fabo-222-environment-bme680 INTERFACE)

target_sources(fabo-222-environment-bme680 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/FaBoEnvironment-BME680-Library/src/FaBoEnvironment_BME680.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FaBoEnvironment-BME680-Library/src/FaBoEnvironment_BME680.h"
)

target_include_directories(fabo-222-environment-bme680 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/FaBoEnvironment-BME680-Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(fabo-222-environment-bme680 INTERFACE
    arduino-compat
)
