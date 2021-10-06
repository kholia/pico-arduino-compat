add_library(protocentral-healthypi-v4-library INTERFACE)

target_sources(protocentral-healthypi-v4-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/protocentral_healthypi4_arduino/src/Protocentral_spo2_algorithm.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/protocentral_healthypi4_arduino/src/Protocentral_ecg_resp_signal_processing.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/protocentral_healthypi4_arduino/src/Protocentral_ADS1292r.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/protocentral_healthypi4_arduino/src/Protocentral_AFE4490_Oximeter.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/protocentral_healthypi4_arduino/src/arduinoFFT.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/protocentral_healthypi4_arduino/src/Protocentral_MLX90632.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/protocentral_healthypi4_arduino/src/Protocentral_MAX30205.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/protocentral_healthypi4_arduino/src/defs.h"
  "${CMAKE_CURRENT_LIST_DIR}/protocentral_healthypi4_arduino/src/Protocentral_ecg_resp_signal_processing.h"
  "${CMAKE_CURRENT_LIST_DIR}/protocentral_healthypi4_arduino/src/Protocentral_spo2_algorithm.h"
  "${CMAKE_CURRENT_LIST_DIR}/protocentral_healthypi4_arduino/src/Protocentral_AFE4490_Oximeter.h"
  "${CMAKE_CURRENT_LIST_DIR}/protocentral_healthypi4_arduino/src/types.h"
  "${CMAKE_CURRENT_LIST_DIR}/protocentral_healthypi4_arduino/src/arduinoFFT.h"
  "${CMAKE_CURRENT_LIST_DIR}/protocentral_healthypi4_arduino/src/Protocentral_MLX90632.h"
  "${CMAKE_CURRENT_LIST_DIR}/protocentral_healthypi4_arduino/src/Protocentral_MAX30205.h"
  "${CMAKE_CURRENT_LIST_DIR}/protocentral_healthypi4_arduino/src/Protocentral_ADS1292r.h"
)

target_include_directories(protocentral-healthypi-v4-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/protocentral_healthypi4_arduino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(protocentral-healthypi-v4-library INTERFACE
    arduino-compat
)
