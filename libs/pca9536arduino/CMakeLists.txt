add_library(pca9536arduino INTERFACE)

target_sources(pca9536arduino INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/PCA9536/PCA9536.h"
)

target_include_directories(pca9536arduino INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/PCA9536"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pca9536arduino INTERFACE
    arduino-compat
)
