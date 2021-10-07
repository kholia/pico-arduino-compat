add_library(pac-nxp-pca9633 INTERFACE)

target_sources(pac-nxp-pca9633 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-PCA9633/src/PCA9633.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-PCA9633/src/PCA9633.h"
)

target_include_directories(pac-nxp-pca9633 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino-PCA9633/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-nxp-pca9633 INTERFACE
    arduino-compat
)
