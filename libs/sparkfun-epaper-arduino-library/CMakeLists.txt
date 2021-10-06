add_library(sparkfun-epaper-arduino-library INTERFACE)

target_sources(sparkfun-epaper-arduino-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_ePaper_Arduino_Library/src/SparkFun_ePaper_750.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_ePaper_Arduino_Library/src/SparkFun_ePaper_420.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_ePaper_Arduino_Library/src/SparkFun_ePaper.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_ePaper_Arduino_Library/src/SparkFun_ePaper_154.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_ePaper_Arduino_Library/src/SparkFun_ePaper_420.h"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_ePaper_Arduino_Library/src/SparkFun_ePaper_154.h"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_ePaper_Arduino_Library/src/SparkFun_ePaper.h"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_ePaper_Arduino_Library/src/SparkFun_ePaper_750.h"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_ePaper_Arduino_Library/examples/Example4_Array/image154.h"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_ePaper_Arduino_Library/examples/Example4_Array/image750.h"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_ePaper_Arduino_Library/examples/Example4_Array/image420.h"
)

target_include_directories(sparkfun-epaper-arduino-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SparkFun_ePaper_Arduino_Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(sparkfun-epaper-arduino-library INTERFACE
    arduino-compat
)
