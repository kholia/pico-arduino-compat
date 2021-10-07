add_library(pac-pca9634-arduino-library INTERFACE)

target_sources(pac-pca9634-arduino-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/pca9634-lib/src/PCA9634.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/pca9634-lib/src/PCA9634.h"
)

target_include_directories(pac-pca9634-arduino-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/pca9634-lib/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-pca9634-arduino-library INTERFACE
    arduino-compat
)
