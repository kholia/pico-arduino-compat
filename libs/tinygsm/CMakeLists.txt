add_library(tinygsm INTERFACE)

target_sources(tinygsm INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TinyGSM/src/TinyGsmClientSIM5360.h"
  "${CMAKE_CURRENT_LIST_DIR}/TinyGSM/src/TinyGsmClient.h"
  "${CMAKE_CURRENT_LIST_DIR}/TinyGSM/src/TinyGSM.h"
  "${CMAKE_CURRENT_LIST_DIR}/TinyGSM/src/TinyGsmClientSIM7600.h"
  "${CMAKE_CURRENT_LIST_DIR}/TinyGSM/src/TinyGsmClientSaraR4.h"
  "${CMAKE_CURRENT_LIST_DIR}/TinyGSM/src/TinyGsmClientSIM70xx.h"
  "${CMAKE_CURRENT_LIST_DIR}/TinyGSM/src/TinyGsmClientXBee.h"
  "${CMAKE_CURRENT_LIST_DIR}/TinyGSM/src/TinyGsmClientMC60.h"
  "${CMAKE_CURRENT_LIST_DIR}/TinyGSM/src/TinyGsmCommon.h"
  "${CMAKE_CURRENT_LIST_DIR}/TinyGSM/src/TinyGsmClientA6.h"
  "${CMAKE_CURRENT_LIST_DIR}/TinyGSM/src/TinyGsmClientSequansMonarch.h"
  "${CMAKE_CURRENT_LIST_DIR}/TinyGSM/src/TinyGsmClientM590.h"
  "${CMAKE_CURRENT_LIST_DIR}/TinyGSM/src/TinyGsmClientUBLOX.h"
  "${CMAKE_CURRENT_LIST_DIR}/TinyGSM/src/TinyGsmClientM95.h"
  "${CMAKE_CURRENT_LIST_DIR}/TinyGSM/src/TinyGsmClientSIM7080.h"
  "${CMAKE_CURRENT_LIST_DIR}/TinyGSM/src/TinyGsmFifo.h"
  "${CMAKE_CURRENT_LIST_DIR}/TinyGSM/src/TinyGsmClientSIM7000SSL.h"
  "${CMAKE_CURRENT_LIST_DIR}/TinyGSM/src/TinyGsmClientSIM7000.h"
  "${CMAKE_CURRENT_LIST_DIR}/TinyGSM/src/TinyGsmClientSIM808.h"
  "${CMAKE_CURRENT_LIST_DIR}/TinyGSM/src/TinyGsmClientSIM800.h"
  "${CMAKE_CURRENT_LIST_DIR}/TinyGSM/src/TinyGsmClientESP8266.h"
  "${CMAKE_CURRENT_LIST_DIR}/TinyGSM/src/TinyGsmClientBG96.h"
  "${CMAKE_CURRENT_LIST_DIR}/TinyGSM/src/ArduinoCompat/IPAddress.h"
  "${CMAKE_CURRENT_LIST_DIR}/TinyGSM/src/ArduinoCompat/Client.h"
  "${CMAKE_CURRENT_LIST_DIR}/TinyGSM/examples/more/SIM800_SslSetCert/DSTRootCAX3.h"
  "${CMAKE_CURRENT_LIST_DIR}/TinyGSM/examples/more/SIM800_SslSetCert/COMODORSACertificationAuthority.h"
  "${CMAKE_CURRENT_LIST_DIR}/TinyGSM/examples/more/SIM800_SslSetCert/DSTRootCAX3.der.h"
)

target_include_directories(tinygsm INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TinyGSM/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(tinygsm INTERFACE
    arduino-compat
)
