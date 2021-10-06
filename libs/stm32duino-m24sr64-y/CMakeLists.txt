add_library(stm32duino-m24sr64-y INTERFACE)

target_sources(stm32duino-m24sr64-y INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/M24SR64-Y/src/RecordMimeType.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/M24SR64-Y/src/RecordText.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/M24SR64-Y/src/RecordWifiConf.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/M24SR64-Y/src/RecordGeo.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/M24SR64-Y/src/RecordAAR.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/M24SR64-Y/src/RecordURI.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/M24SR64-Y/src/RecordVCard.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/M24SR64-Y/src/RecordSMS.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/M24SR64-Y/src/M24SR.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/M24SR64-Y/src/NDefNfcTagM24SR.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/M24SR64-Y/src/Message.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/M24SR64-Y/src/RecordMail.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/M24SR64-Y/src/RecordSMS.h"
  "${CMAKE_CURRENT_LIST_DIR}/M24SR64-Y/src/RecordVCard.h"
  "${CMAKE_CURRENT_LIST_DIR}/M24SR64-Y/src/RecordWifiConf.h"
  "${CMAKE_CURRENT_LIST_DIR}/M24SR64-Y/src/RecordText.h"
  "${CMAKE_CURRENT_LIST_DIR}/M24SR64-Y/src/Component.h"
  "${CMAKE_CURRENT_LIST_DIR}/M24SR64-Y/src/Record.h"
  "${CMAKE_CURRENT_LIST_DIR}/M24SR64-Y/src/RecordMimeType.h"
  "${CMAKE_CURRENT_LIST_DIR}/M24SR64-Y/src/EmptyRecord.h"
  "${CMAKE_CURRENT_LIST_DIR}/M24SR64-Y/src/RecordMail.h"
  "${CMAKE_CURRENT_LIST_DIR}/M24SR64-Y/src/RecordHeader.h"
  "${CMAKE_CURRENT_LIST_DIR}/M24SR64-Y/src/Message.h"
  "${CMAKE_CURRENT_LIST_DIR}/M24SR64-Y/src/RecordURI.h"
  "${CMAKE_CURRENT_LIST_DIR}/M24SR64-Y/src/M24SR.h"
  "${CMAKE_CURRENT_LIST_DIR}/M24SR64-Y/src/NDefNfcTag.h"
  "${CMAKE_CURRENT_LIST_DIR}/M24SR64-Y/src/RecordGeo.h"
  "${CMAKE_CURRENT_LIST_DIR}/M24SR64-Y/src/m24sr_def.h"
  "${CMAKE_CURRENT_LIST_DIR}/M24SR64-Y/src/RecordAAR.h"
  "${CMAKE_CURRENT_LIST_DIR}/M24SR64-Y/src/Nfc.h"
  "${CMAKE_CURRENT_LIST_DIR}/M24SR64-Y/src/NDefNfcTagM24SR.h"
)

target_include_directories(stm32duino-m24sr64-y INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/M24SR64-Y/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(stm32duino-m24sr64-y INTERFACE
    arduino-compat
)
