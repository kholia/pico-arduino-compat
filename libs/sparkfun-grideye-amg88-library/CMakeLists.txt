add_library(pac-sparkfun-grideye-amg88-library INTERFACE)

target_sources(pac-sparkfun-grideye-amg88-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_GridEYE_Arduino_Library/src/SparkFun_GridEYE_Arduino_Library.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_GridEYE_Arduino_Library/src/SparkFun_GridEYE_Arduino_Library.h"
)

target_include_directories(pac-sparkfun-grideye-amg88-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SparkFun_GridEYE_Arduino_Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-sparkfun-grideye-amg88-library INTERFACE
    arduino-compat
)
