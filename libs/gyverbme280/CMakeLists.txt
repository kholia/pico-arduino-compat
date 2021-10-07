add_library(pac-gyverbme280 INTERFACE)

target_sources(pac-gyverbme280 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/GyverBME280/src/GyverBME280.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/GyverBME280/src/GyverBME280.h"
)

target_include_directories(pac-gyverbme280 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/GyverBME280/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-gyverbme280 INTERFACE
    arduino-compat
)
