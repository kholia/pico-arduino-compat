add_library(pac-sparkfun-kx13x-arduino-library INTERFACE)

target_sources(pac-sparkfun-kx13x-arduino-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_KX13X_Arduino_Library/src/SparkFun_Qwiic_KX13X.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_KX13X_Arduino_Library/src/SparkFun_Qwiic_KX13X.h"
)

target_include_directories(pac-sparkfun-kx13x-arduino-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SparkFun_KX13X_Arduino_Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-sparkfun-kx13x-arduino-library INTERFACE
    arduino-compat
)
