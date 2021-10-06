add_library(sparkfun-minigen INTERFACE)

target_sources(sparkfun-minigen INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_MiniGen_Arduino_Library/src/hardware.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_MiniGen_Arduino_Library/src/SparkFun_MiniGen.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_MiniGen_Arduino_Library/src/SparkFun_MiniGen.h"
)

target_include_directories(sparkfun-minigen INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SparkFun_MiniGen_Arduino_Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(sparkfun-minigen INTERFACE
    arduino-compat
)
