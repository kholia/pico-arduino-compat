add_library(pac-pca9685_rt INTERFACE)

target_sources(pac-pca9685_rt INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/PCA9685_RT/PCA9685.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PCA9685_RT/test/unit_test_001.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PCA9685_RT/PCA9685.h"
)

target_include_directories(pac-pca9685_rt INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/PCA9685_RT"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-pca9685_rt INTERFACE
    arduino-compat
)
