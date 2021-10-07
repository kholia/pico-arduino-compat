add_library(pac-pca9536 INTERFACE)

target_sources(pac-pca9536 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/PCA9536/PCA9536.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PCA9536/utility/PCA9536_PString.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PCA9536/PCA9536.h"
  "${CMAKE_CURRENT_LIST_DIR}/PCA9536/utility/PCA9536ComStr.h"
  "${CMAKE_CURRENT_LIST_DIR}/PCA9536/utility/PCA9536InfoStr.h"
  "${CMAKE_CURRENT_LIST_DIR}/PCA9536/utility/PCA9536_PString.h"
)

target_include_directories(pac-pca9536 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/PCA9536"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-pca9536 INTERFACE
    arduino-compat
)
