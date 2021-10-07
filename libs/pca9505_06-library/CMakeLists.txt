add_library(pac-pca9505_06-library INTERFACE)

target_sources(pac-pca9505_06-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/PCA9505_06/PCA9505_9506.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PCA9505_06/PCA9505_9506.h"
)

target_include_directories(pac-pca9505_06-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/PCA9505_06"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-pca9505_06-library INTERFACE
    arduino-compat
)
