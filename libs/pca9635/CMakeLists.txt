add_library(pca9635 INTERFACE)

target_sources(pca9635 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/PCA9635/PCA9635.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PCA9635/test/unit_test_001.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PCA9635/PCA9635.h"
)

target_include_directories(pca9635 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/PCA9635"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pca9635 INTERFACE
    arduino-compat
)
