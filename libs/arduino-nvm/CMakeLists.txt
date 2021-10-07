add_library(pac-arduino-nvm INTERFACE)

target_sources(pac-arduino-nvm INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduino-NVM/src/Flash.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-NVM/src/VirtualPage.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-NVM/src/NVRAM.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-NVM/src/Flash.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-NVM/src/avr_eeprom.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-NVM/src/EEPROM.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-NVM/src/NVRAM.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-NVM/src/VirtualPage.h"
)

target_include_directories(pac-arduino-nvm INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduino-NVM/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-arduino-nvm INTERFACE
    arduino-compat
)
