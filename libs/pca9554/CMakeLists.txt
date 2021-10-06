add_library(pca9554 INTERFACE)

target_sources(pca9554 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/PCA9554/src/PCA9554.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PCA9554/src/PCA9554.h"
)

target_include_directories(pca9554 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/PCA9554/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pca9554 INTERFACE
    arduino-compat
)
