add_library(pac-sparkfun-micromod-button INTERFACE)

target_sources(pac-sparkfun-micromod-button INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_MicroMod_Button_Arduino_Library/src/SparkFun_MicroMod_Button.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_MicroMod_Button_Arduino_Library/src/SparkFun_MicroMod_Button.h"
)

target_include_directories(pac-sparkfun-micromod-button INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SparkFun_MicroMod_Button_Arduino_Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-sparkfun-micromod-button INTERFACE
    arduino-compat
)
