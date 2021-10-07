add_library(pac-i2c_eeprom INTERFACE)

target_sources(pac-i2c_eeprom INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/I2C_EEPROM/I2C_eeprom.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/I2C_EEPROM/test/unit_test_cyclic_store.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/I2C_EEPROM/test/unit_test_page_size.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/I2C_EEPROM/test/unit_test_001.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/I2C_EEPROM/I2C_eeprom_cyclic_store.h"
  "${CMAKE_CURRENT_LIST_DIR}/I2C_EEPROM/I2C_eeprom.h"
)

target_include_directories(pac-i2c_eeprom INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/I2C_EEPROM"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-i2c_eeprom INTERFACE
    arduino-compat
)
