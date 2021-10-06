add_library(electronic-cats-pn7150 INTERFACE)

target_sources(electronic-cats-pn7150 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ElectronicCats-PN7150/src/P2P_NDEF.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ElectronicCats-PN7150/src/Electroniccats_PN7150.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ElectronicCats-PN7150/src/T4T_NDEF_emu.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ElectronicCats-PN7150/src/tool.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ElectronicCats-PN7150/src/RW_NDEF_MIFARE.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ElectronicCats-PN7150/src/ndef_helper.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ElectronicCats-PN7150/src/RW_NDEF_T4T.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ElectronicCats-PN7150/src/RW_NDEF.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ElectronicCats-PN7150/src/RW_NDEF_T3T.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ElectronicCats-PN7150/src/RW_NDEF_T2T.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ElectronicCats-PN7150/src/RW_NDEF_T1T.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ElectronicCats-PN7150/src/RW_NDEF_T2T.h"
  "${CMAKE_CURRENT_LIST_DIR}/ElectronicCats-PN7150/src/RW_NDEF.h"
  "${CMAKE_CURRENT_LIST_DIR}/ElectronicCats-PN7150/src/RW_NDEF_T3T.h"
  "${CMAKE_CURRENT_LIST_DIR}/ElectronicCats-PN7150/src/RW_NDEF_T1T.h"
  "${CMAKE_CURRENT_LIST_DIR}/ElectronicCats-PN7150/src/P2P_NDEF.h"
  "${CMAKE_CURRENT_LIST_DIR}/ElectronicCats-PN7150/src/RW_NDEF_MIFARE.h"
  "${CMAKE_CURRENT_LIST_DIR}/ElectronicCats-PN7150/src/T4T_NDEF_emu.h"
  "${CMAKE_CURRENT_LIST_DIR}/ElectronicCats-PN7150/src/RW_NDEF_T4T.h"
  "${CMAKE_CURRENT_LIST_DIR}/ElectronicCats-PN7150/src/Electroniccats_PN7150.h"
  "${CMAKE_CURRENT_LIST_DIR}/ElectronicCats-PN7150/src/tool.h"
  "${CMAKE_CURRENT_LIST_DIR}/ElectronicCats-PN7150/src/ndef_helper.h"
)

target_include_directories(electronic-cats-pn7150 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ElectronicCats-PN7150/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(electronic-cats-pn7150 INTERFACE
    arduino-compat
)
