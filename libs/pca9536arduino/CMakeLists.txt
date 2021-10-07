add_library(pac-pca9536arduino INTERFACE)

target_sources(pac-pca9536arduino INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/PCA9536/PCA9536.h"
)

target_include_directories(pac-pca9536arduino INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/PCA9536"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-pca9536arduino INTERFACE
    arduino-compat
)
