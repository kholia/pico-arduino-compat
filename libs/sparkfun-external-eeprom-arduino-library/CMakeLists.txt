add_library(pac-sparkfun-external-eeprom-arduino-library INTERFACE)

target_sources(pac-sparkfun-external-eeprom-arduino-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_External_EEPROM_Arduino_Library/src/SparkFun_External_EEPROM.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_External_EEPROM_Arduino_Library/src/SparkFun_External_EEPROM.h"
)

target_include_directories(pac-sparkfun-external-eeprom-arduino-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SparkFun_External_EEPROM_Arduino_Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-sparkfun-external-eeprom-arduino-library INTERFACE
    arduino-compat
)
