add_library(pca9547 INTERFACE)

target_sources(pca9547 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/PCA9547/PCA9547.h"
)

target_include_directories(pca9547 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/PCA9547"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pca9547 INTERFACE
    arduino-compat
)
