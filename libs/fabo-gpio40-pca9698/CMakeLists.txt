add_library(fabo-gpio40-pca9698 INTERFACE)

target_sources(fabo-gpio40-pca9698 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/FaBoGPIO40-PCA9698-Library/src/FaBoGPIO40_PCA9698.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FaBoGPIO40-PCA9698-Library/src/FaBoGPIO40_PCA9698.h"
)

target_include_directories(fabo-gpio40-pca9698 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/FaBoGPIO40-PCA9698-Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(fabo-gpio40-pca9698 INTERFACE
    arduino-compat
)
