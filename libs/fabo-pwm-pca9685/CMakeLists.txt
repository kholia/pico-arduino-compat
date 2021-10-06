add_library(fabo-pwm-pca9685 INTERFACE)

target_sources(fabo-pwm-pca9685 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/FaBoPWM-PCA9685-Library/src/FaBoPWM_PCA9685.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FaBoPWM-PCA9685-Library/src/FaBoPWM_PCA9685.h"
)

target_include_directories(fabo-pwm-pca9685 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/FaBoPWM-PCA9685-Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(fabo-pwm-pca9685 INTERFACE
    arduino-compat
)
