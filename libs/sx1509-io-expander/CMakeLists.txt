add_library(pac-sx1509-io-expander INTERFACE)

target_sources(pac-sx1509-io-expander INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_SX1509_Arduino_Library/src/SparkFunSX1509.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_SX1509_Arduino_Library/src/SparkFunSX1509.h"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_SX1509_Arduino_Library/src/util/sx1509_registers.h"
)

target_include_directories(pac-sx1509-io-expander INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SparkFun_SX1509_Arduino_Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-sx1509-io-expander INTERFACE
    arduino-compat
)
