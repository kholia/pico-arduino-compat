add_library(pac-sparkfun-atsha204-library INTERFACE)

target_sources(pac-sparkfun-atsha204-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_ATSHA204_Arduino_Library/src/sha204_library.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_ATSHA204_Arduino_Library/src/sha204_library.h"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_ATSHA204_Arduino_Library/src/sha204_includes/sha204_lib_return_codes.h"
)

target_include_directories(pac-sparkfun-atsha204-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SparkFun_ATSHA204_Arduino_Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-sparkfun-atsha204-library INTERFACE
    arduino-compat
)
