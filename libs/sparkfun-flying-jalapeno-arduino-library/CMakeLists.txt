add_library(sparkfun-flying-jalapeno-arduino-library INTERFACE)

target_sources(sparkfun-flying-jalapeno-arduino-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_Flying_Jalapeno_Arduino_Library/src/SparkFun_Flying_Jalapeno_Arduino_Library.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_Flying_Jalapeno_Arduino_Library/src/SparkFun_Flying_Jalapeno_Arduino_Library.h"
)

target_include_directories(sparkfun-flying-jalapeno-arduino-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SparkFun_Flying_Jalapeno_Arduino_Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(sparkfun-flying-jalapeno-arduino-library INTERFACE
    arduino-compat
)
