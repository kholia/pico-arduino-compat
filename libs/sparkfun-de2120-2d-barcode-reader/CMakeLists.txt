add_library(sparkfun-de2120-2d-barcode-reader INTERFACE)

target_sources(sparkfun-de2120-2d-barcode-reader INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_DE2120_Arduino_Library/src/SparkFun_DE2120_Arduino_Library.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_DE2120_Arduino_Library/src/SparkFun_DE2120_Arduino_Library.h"
)

target_include_directories(sparkfun-de2120-2d-barcode-reader INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SparkFun_DE2120_Arduino_Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(sparkfun-de2120-2d-barcode-reader INTERFACE
    arduino-compat
)
