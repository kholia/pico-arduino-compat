add_library(pac-adafruit-tsl2561 INTERFACE)

target_sources(pac-adafruit-tsl2561 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_TSL2561/Adafruit_TSL2561_U.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_TSL2561/Adafruit_TSL2561_U.h"
)

target_include_directories(pac-adafruit-tsl2561 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_TSL2561"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-adafruit-tsl2561 INTERFACE
    arduino-compat
)
