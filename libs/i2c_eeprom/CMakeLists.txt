add_library(i2c_eeprom INTERFACE)

target_sources(i2c_eeprom INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/I2C_EEPROM/I2C_eeprom.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/I2C_EEPROM/test/unit_test_cyclic_store.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/I2C_EEPROM/test/unit_test_page_size.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/I2C_EEPROM/test/unit_test_001.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/I2C_EEPROM/I2C_eeprom_cyclic_store.h"
  "${CMAKE_CURRENT_LIST_DIR}/I2C_EEPROM/I2C_eeprom.h"
)

target_include_directories(i2c_eeprom INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/I2C_EEPROM"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(i2c_eeprom INTERFACE
    arduino-compat
)
