add_library(pac-pca9685-16-channel-pwm-driver-module-library INTERFACE)

target_sources(pac-pca9685-16-channel-pwm-driver-module-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/PCA9685-Arduino/src/PCA9685.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PCA9685-Arduino/src/PCA9685.h"
)

target_include_directories(pac-pca9685-16-channel-pwm-driver-module-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/PCA9685-Arduino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-pca9685-16-channel-pwm-driver-module-library INTERFACE
    arduino-compat
)
