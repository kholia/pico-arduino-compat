add_library(bmp280_dev INTERFACE)

target_sources(bmp280_dev INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/BMP280_DEV/BMP280_DEV.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/BMP280_DEV/Device.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/BMP280_DEV/Device.h"
  "${CMAKE_CURRENT_LIST_DIR}/BMP280_DEV/BMP280_DEV.h"
)

target_include_directories(bmp280_dev INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/BMP280_DEV"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(bmp280_dev INTERFACE
    arduino-compat
)
