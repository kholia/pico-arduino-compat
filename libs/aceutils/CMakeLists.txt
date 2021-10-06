add_library(aceutils INTERFACE)

target_sources(aceutils INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/AceUtils/src/crc_eeprom/CrcEeprom.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AceUtils/src/buffered_eeprom_stm32/BufferedEEPROMClass.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AceUtils/src/cli/ChannelProcessorCoroutine.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AceUtils/src/cli/CommandDispatcher.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AceUtils/src/freemem/freemem.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AceUtils/src/AceUtils.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceUtils/src/crc_eeprom/CrcEeprom.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceUtils/src/crc_eeprom/crc_eeprom.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceUtils/src/crc_eeprom/EepromInterface.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceUtils/src/buffered_eeprom_stm32/buffered_eeprom_stm32.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceUtils/src/buffered_eeprom_stm32/BufferedEEPROMClass.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceUtils/src/mode_group/mode_group.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceUtils/src/mode_group/ModeNavigator.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceUtils/src/mode_group/ModeGroup.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceUtils/src/cli/DirectProcessorManager.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceUtils/src/cli/cli.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceUtils/src/cli/CommandHandler.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceUtils/src/cli/StreamProcessorCoroutine.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceUtils/src/cli/InputLine.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceUtils/src/cli/StreamProcessorManager.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceUtils/src/cli/ChannelProcessorCoroutine.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceUtils/src/cli/DirectProcessor.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceUtils/src/cli/CommandDispatcher.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceUtils/src/cli/StreamReaderCoroutine.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceUtils/src/cli/ChannelProcessorManager.h"
  "${CMAKE_CURRENT_LIST_DIR}/AceUtils/src/freemem/freemem.h"
)

target_include_directories(aceutils INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/AceUtils/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(aceutils INTERFACE
    arduino-compat
)
