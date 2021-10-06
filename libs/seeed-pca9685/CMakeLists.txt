add_library(seeed-pca9685 INTERFACE)

target_sources(seeed-pca9685 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_PCA9685/PCA9685.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_PCA9685/I2Cdev.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_PCA9685/I2Cdev.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_PCA9685/PCA9685.h"
)

target_include_directories(seeed-pca9685 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Seeed_PCA9685"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(seeed-pca9685 INTERFACE
    arduino-compat
)
