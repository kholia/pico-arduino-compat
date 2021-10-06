add_library(pca9685_rt INTERFACE)

target_sources(pca9685_rt INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/PCA9685_RT/PCA9685.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PCA9685_RT/test/unit_test_001.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PCA9685_RT/PCA9685.h"
)

target_include_directories(pca9685_rt INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/PCA9685_RT"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pca9685_rt INTERFACE
    arduino-compat
)
