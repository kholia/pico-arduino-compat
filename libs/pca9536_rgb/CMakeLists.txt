add_library(pca9536_rgb INTERFACE)

target_sources(pca9536_rgb INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/PCA9536_RGB/PCA9536_RGB.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PCA9536_RGB/PCA9536_RGB.h"
)

target_include_directories(pca9536_rgb INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/PCA9536_RGB"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pca9536_rgb INTERFACE
    arduino-compat
)
