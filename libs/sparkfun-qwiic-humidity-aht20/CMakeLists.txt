add_library(pac-sparkfun-qwiic-humidity-aht20 INTERFACE)

target_sources(pac-sparkfun-qwiic-humidity-aht20 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_Qwiic_Humidity_AHT20_Arduino_Library/src/SparkFun_Qwiic_Humidity_AHT20.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_Qwiic_Humidity_AHT20_Arduino_Library/src/SparkFun_Qwiic_Humidity_AHT20.h"
)

target_include_directories(pac-sparkfun-qwiic-humidity-aht20 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SparkFun_Qwiic_Humidity_AHT20_Arduino_Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-sparkfun-qwiic-humidity-aht20 INTERFACE
    arduino-compat
)
