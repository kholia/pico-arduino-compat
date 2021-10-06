add_library(sparkfun-as726x INTERFACE)

target_sources(sparkfun-as726x INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_AS726X_Arduino_Library/src/AS726X.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_AS726X_Arduino_Library/src/AS726X.h"
)

target_include_directories(sparkfun-as726x INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SparkFun_AS726X_Arduino_Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(sparkfun-as726x INTERFACE
    arduino-compat
)
