add_library(sensirion-core INTERFACE)

target_sources(sensirion-core INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduino-core/src/SensirionI2CCommunication.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-core/src/SensirionShdlcTxFrame.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-core/src/SensirionShdlcCommunication.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-core/src/SensirionI2CTxFrame.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-core/src/SensirionRxFrame.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-core/src/SensirionErrors.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-core/src/SensirionI2CTxFrame.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-core/src/SensirionShdlcCommunication.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-core/src/SensirionRxFrame.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-core/src/SensirionShdlcTxFrame.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-core/src/SensirionShdlcRxFrame.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-core/src/SensirionCoreArduinoLibrary.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-core/src/SensirionI2CRxFrame.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-core/src/SensirionErrors.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-core/src/SensirionI2CCommunication.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-core/src/SensirionCore.h"
)

target_include_directories(sensirion-core INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduino-core/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(sensirion-core INTERFACE
    arduino-compat
)
