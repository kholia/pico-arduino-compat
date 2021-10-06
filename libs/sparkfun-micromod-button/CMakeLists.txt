add_library(sparkfun-micromod-button INTERFACE)

target_sources(sparkfun-micromod-button INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_MicroMod_Button_Arduino_Library/src/SparkFun_MicroMod_Button.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_MicroMod_Button_Arduino_Library/src/SparkFun_MicroMod_Button.h"
)

target_include_directories(sparkfun-micromod-button INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SparkFun_MicroMod_Button_Arduino_Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(sparkfun-micromod-button INTERFACE
    arduino-compat
)
