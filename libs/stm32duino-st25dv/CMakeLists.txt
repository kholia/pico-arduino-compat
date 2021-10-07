add_library(pac-stm32duino-st25dv INTERFACE)

target_sources(pac-stm32duino-st25dv INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ST25DV/src/ST25DVSensor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ST25DV/src/BSP/st25dv_nfctag.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ST25DV/src/libNDEF/lib_NDEF_Wifi.c"
  "${CMAKE_CURRENT_LIST_DIR}/ST25DV/src/libNDEF/lib_NDEF_Text.c"
  "${CMAKE_CURRENT_LIST_DIR}/ST25DV/src/libNDEF/lib_NDEF_URI.c"
  "${CMAKE_CURRENT_LIST_DIR}/ST25DV/src/libNDEF/tagtype5_wrapper.c"
  "${CMAKE_CURRENT_LIST_DIR}/ST25DV/src/libNDEF/lib_NDEF.c"
  "${CMAKE_CURRENT_LIST_DIR}/ST25DV/src/libNDEF/lib_NDEF_Bluetooth.c"
  "${CMAKE_CURRENT_LIST_DIR}/ST25DV/src/libNDEF/lib_NDEF_Geo.c"
  "${CMAKE_CURRENT_LIST_DIR}/ST25DV/src/libNDEF/lib_NDEF_AAR.c"
  "${CMAKE_CURRENT_LIST_DIR}/ST25DV/src/libNDEF/lib_NDEF_MyApp.c"
  "${CMAKE_CURRENT_LIST_DIR}/ST25DV/src/libNDEF/lib_NDEF_Handover.c"
  "${CMAKE_CURRENT_LIST_DIR}/ST25DV/src/libNDEF/lib_NDEF_SMS.c"
  "${CMAKE_CURRENT_LIST_DIR}/ST25DV/src/libNDEF/lib_NDEF_Email.c"
  "${CMAKE_CURRENT_LIST_DIR}/ST25DV/src/libNDEF/lib_NDEF_Vcard.c"
  "${CMAKE_CURRENT_LIST_DIR}/ST25DV/src/ST25DV/st25dv.c"
  "${CMAKE_CURRENT_LIST_DIR}/ST25DV/src/ST25DVSensor.h"
  "${CMAKE_CURRENT_LIST_DIR}/ST25DV/src/BSP/st25dv_nfctag.h"
  "${CMAKE_CURRENT_LIST_DIR}/ST25DV/src/libNDEF/NDEFcommon.h"
  "${CMAKE_CURRENT_LIST_DIR}/ST25DV/src/libNDEF/lib_NDEF_AAR.h"
  "${CMAKE_CURRENT_LIST_DIR}/ST25DV/src/libNDEF/lib_NDEF_Handover.h"
  "${CMAKE_CURRENT_LIST_DIR}/ST25DV/src/libNDEF/lib_NDEF_Text.h"
  "${CMAKE_CURRENT_LIST_DIR}/ST25DV/src/libNDEF/lib_wrapper.h"
  "${CMAKE_CURRENT_LIST_DIR}/ST25DV/src/libNDEF/lib_NDEF_Bluetooth.h"
  "${CMAKE_CURRENT_LIST_DIR}/ST25DV/src/libNDEF/lib_NDEF.h"
  "${CMAKE_CURRENT_LIST_DIR}/ST25DV/src/libNDEF/lib_NDEF_Wifi.h"
  "${CMAKE_CURRENT_LIST_DIR}/ST25DV/src/libNDEF/lib_NDEF_Email.h"
  "${CMAKE_CURRENT_LIST_DIR}/ST25DV/src/libNDEF/tagtype5_wrapper.h"
  "${CMAKE_CURRENT_LIST_DIR}/ST25DV/src/libNDEF/lib_NDEF_SMS.h"
  "${CMAKE_CURRENT_LIST_DIR}/ST25DV/src/libNDEF/lib_NDEF_MyApp.h"
  "${CMAKE_CURRENT_LIST_DIR}/ST25DV/src/libNDEF/lib_NDEF_Geo.h"
  "${CMAKE_CURRENT_LIST_DIR}/ST25DV/src/libNDEF/lib_NDEF_Vcard.h"
  "${CMAKE_CURRENT_LIST_DIR}/ST25DV/src/libNDEF/lib_NDEF_URI.h"
  "${CMAKE_CURRENT_LIST_DIR}/ST25DV/src/ST25DV/st25dv.h"
)

target_include_directories(pac-stm32duino-st25dv INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ST25DV/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-stm32duino-st25dv INTERFACE
    arduino-compat
)
