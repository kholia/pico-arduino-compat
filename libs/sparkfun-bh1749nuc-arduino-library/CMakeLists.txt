add_library(pac-sparkfun-bh1749nuc-arduino-library INTERFACE)

target_sources(pac-sparkfun-bh1749nuc-arduino-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_BH1749NUC_Arduino_Library/src/SparkFun_BH1749NUC_Arduino_Library.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_BH1749NUC_Arduino_Library/src/SparkFun_BH1749NUC_Arduino_Library.h"
)

target_include_directories(pac-sparkfun-bh1749nuc-arduino-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SparkFun_BH1749NUC_Arduino_Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-sparkfun-bh1749nuc-arduino-library INTERFACE
    arduino-compat
)
