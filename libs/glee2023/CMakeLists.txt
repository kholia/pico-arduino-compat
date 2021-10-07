add_library(pac-glee2023 INTERFACE)

target_sources(pac-glee2023 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/GLEE2023/src/CAP.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/GLEE2023/src/LunaSat.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/GLEE2023/src/GLEE_Radio.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/GLEE2023/src/MPU6000.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/GLEE2023/src/TMP117.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/GLEE2023/src/TPIS1385.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/GLEE2023/src/MLX90393.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/GLEE2023/src/GLEE_Sensor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/GLEE2023/src/MLX90393.h"
  "${CMAKE_CURRENT_LIST_DIR}/GLEE2023/src/GLEE_Radio.h"
  "${CMAKE_CURRENT_LIST_DIR}/GLEE2023/src/LunaSat.h"
  "${CMAKE_CURRENT_LIST_DIR}/GLEE2023/src/CAP.h"
  "${CMAKE_CURRENT_LIST_DIR}/GLEE2023/src/TMP117.h"
  "${CMAKE_CURRENT_LIST_DIR}/GLEE2023/src/TPIS1385.h"
  "${CMAKE_CURRENT_LIST_DIR}/GLEE2023/src/GLEE_Sensor.h"
  "${CMAKE_CURRENT_LIST_DIR}/GLEE2023/src/MPU6000.h"
)

target_include_directories(pac-glee2023 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/GLEE2023/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET pac-adafruit-busio)
    add_subdirectory(../../libs/adafruit-busio build_pac-adafruit-busio)
endif()

target_link_libraries(pac-glee2023 INTERFACE
    arduino-compat
    pac-adafruit-busio
)
