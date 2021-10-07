add_library(pac-sparkfun-pht-ms8607-arduino-library INTERFACE)

target_sources(pac-sparkfun-pht-ms8607-arduino-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_PHT_MS8607_Arduino_Library/src/SparkFun_PHT_MS8607_Arduino_Library.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_PHT_MS8607_Arduino_Library/examples/Example9_Original_TE_Example/ms8607.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_PHT_MS8607_Arduino_Library/src/SparkFun_PHT_MS8607_Arduino_Library.h"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_PHT_MS8607_Arduino_Library/examples/Example9_Original_TE_Example/ms8607.h"
)

target_include_directories(pac-sparkfun-pht-ms8607-arduino-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SparkFun_PHT_MS8607_Arduino_Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-sparkfun-pht-ms8607-arduino-library INTERFACE
    arduino-compat
)
