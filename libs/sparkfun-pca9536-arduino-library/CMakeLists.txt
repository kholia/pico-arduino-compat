add_library(sparkfun-pca9536-arduino-library INTERFACE)

target_sources(sparkfun-pca9536-arduino-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_PCA9536_Arduino_Library/src/SparkFun_PCA9536_Arduino_Library.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_PCA9536_Arduino_Library/src/SparkFun_PCA9536_Arduino_Library.h"
)

target_include_directories(sparkfun-pca9536-arduino-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SparkFun_PCA9536_Arduino_Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(sparkfun-pca9536-arduino-library INTERFACE
    arduino-compat
)
