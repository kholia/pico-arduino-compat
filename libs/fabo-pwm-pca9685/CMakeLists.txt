add_library(pac-fabo-pwm-pca9685 INTERFACE)

target_sources(pac-fabo-pwm-pca9685 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/FaBoPWM-PCA9685-Library/src/FaBoPWM_PCA9685.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FaBoPWM-PCA9685-Library/src/FaBoPWM_PCA9685.h"
)

target_include_directories(pac-fabo-pwm-pca9685 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/FaBoPWM-PCA9685-Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-fabo-pwm-pca9685 INTERFACE
    arduino-compat
)
