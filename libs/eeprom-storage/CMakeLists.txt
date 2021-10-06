add_library(eeprom-storage INTERFACE)

target_sources(eeprom-storage INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/EEPROM-Storage/src/Checksum.h"
  "${CMAKE_CURRENT_LIST_DIR}/EEPROM-Storage/src/EEPROM-Storage.h"
  "${CMAKE_CURRENT_LIST_DIR}/EEPROM-Storage/examples/tests/TestLibrary.h"
)

target_include_directories(eeprom-storage INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/EEPROM-Storage/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(eeprom-storage INTERFACE
    arduino-compat
)
