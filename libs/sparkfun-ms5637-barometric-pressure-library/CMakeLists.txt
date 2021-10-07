add_library(pac-sparkfun-ms5637-barometric-pressure-library INTERFACE)

target_sources(pac-sparkfun-ms5637-barometric-pressure-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_MS5637_Arduino_Library/src/SparkFun_MS5637_Arduino_Library.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_MS5637_Arduino_Library/examples/Example9_Original_TE_Example/ms5637.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_MS5637_Arduino_Library/src/SparkFun_MS5637_Arduino_Library.h"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_MS5637_Arduino_Library/examples/Example9_Original_TE_Example/ms5637.h"
)

target_include_directories(pac-sparkfun-ms5637-barometric-pressure-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SparkFun_MS5637_Arduino_Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-sparkfun-ms5637-barometric-pressure-library INTERFACE
    arduino-compat
)
