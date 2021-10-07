add_library(pac-adafruit-bno055 INTERFACE)

target_sources(pac-adafruit-bno055 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_BNO055/Adafruit_BNO055.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_BNO055/Adafruit_BNO055.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_BNO055/utility/matrix.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_BNO055/utility/quaternion.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_BNO055/utility/imumaths.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_BNO055/utility/vector.h"
)

target_include_directories(pac-adafruit-bno055 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_BNO055"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET pac-adafruit-busio)
    add_subdirectory(../../libs/adafruit-busio build_pac-adafruit-busio)
endif()

target_link_libraries(pac-adafruit-bno055 INTERFACE
    arduino-compat
    pac-adafruit-busio
)
