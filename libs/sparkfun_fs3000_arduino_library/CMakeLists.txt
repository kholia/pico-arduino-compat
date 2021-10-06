add_library(sparkfun_fs3000_arduino_library INTERFACE)

target_sources(sparkfun_fs3000_arduino_library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_FS3000_Arduino_Library/src/SparkFun_FS3000_Arduino_Library.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_FS3000_Arduino_Library/src/SparkFun_FS3000_Arduino_Library.h"
)

target_include_directories(sparkfun_fs3000_arduino_library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SparkFun_FS3000_Arduino_Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(sparkfun_fs3000_arduino_library INTERFACE
    arduino-compat
)
