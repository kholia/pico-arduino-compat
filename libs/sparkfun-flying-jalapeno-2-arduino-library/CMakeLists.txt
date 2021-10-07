add_library(pac-sparkfun-flying-jalapeno-2-arduino-library INTERFACE)

target_sources(pac-sparkfun-flying-jalapeno-2-arduino-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_Flying_Jalapeno_2_Arduino_Library/src/SparkFun_Flying_Jalapeno_2_Arduino_Library.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_Flying_Jalapeno_2_Arduino_Library/src/SparkFun_Flying_Jalapeno_2_Arduino_Library.h"
)

target_include_directories(pac-sparkfun-flying-jalapeno-2-arduino-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SparkFun_Flying_Jalapeno_2_Arduino_Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-sparkfun-flying-jalapeno-2-arduino-library INTERFACE
    arduino-compat
)
