add_library(mkrnb INTERFACE)

target_sources(mkrnb INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MKRNB/src/NBSSLClient.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MKRNB/src/NB_SMS.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MKRNB/src/NBScanner.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MKRNB/src/Modem.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MKRNB/src/NBPIN.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MKRNB/src/NB.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MKRNB/src/GPRS.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MKRNB/src/NBFileUtils.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MKRNB/src/NBModem.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MKRNB/src/NBUdp.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MKRNB/src/NBClient.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MKRNB/src/utility/NBSocketBuffer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MKRNB/src/MKRNB.h"
  "${CMAKE_CURRENT_LIST_DIR}/MKRNB/src/NBScanner.h"
  "${CMAKE_CURRENT_LIST_DIR}/MKRNB/src/NBUdp.h"
  "${CMAKE_CURRENT_LIST_DIR}/MKRNB/src/NBClient.h"
  "${CMAKE_CURRENT_LIST_DIR}/MKRNB/src/NBModem.h"
  "${CMAKE_CURRENT_LIST_DIR}/MKRNB/src/NBSSLClient.h"
  "${CMAKE_CURRENT_LIST_DIR}/MKRNB/src/GPRS.h"
  "${CMAKE_CURRENT_LIST_DIR}/MKRNB/src/NB.h"
  "${CMAKE_CURRENT_LIST_DIR}/MKRNB/src/NB_SMS.h"
  "${CMAKE_CURRENT_LIST_DIR}/MKRNB/src/NBFileUtils.h"
  "${CMAKE_CURRENT_LIST_DIR}/MKRNB/src/Modem.h"
  "${CMAKE_CURRENT_LIST_DIR}/MKRNB/src/NBPIN.h"
  "${CMAKE_CURRENT_LIST_DIR}/MKRNB/src/utility/NBRootCerts.h"
  "${CMAKE_CURRENT_LIST_DIR}/MKRNB/src/utility/NBSocketBuffer.h"
  "${CMAKE_CURRENT_LIST_DIR}/MKRNB/examples/SendSMS/arduino_secrets.h"
  "${CMAKE_CURRENT_LIST_DIR}/MKRNB/examples/NBSSLWebClient/arduino_secrets.h"
  "${CMAKE_CURRENT_LIST_DIR}/MKRNB/examples/ReceiveSMS/arduino_secrets.h"
  "${CMAKE_CURRENT_LIST_DIR}/MKRNB/examples/Tools/NBScanNetworks/arduino_secrets.h"
  "${CMAKE_CURRENT_LIST_DIR}/MKRNB/examples/Tools/TestGPRS/arduino_secrets.h"
  "${CMAKE_CURRENT_LIST_DIR}/MKRNB/examples/NBWebClient/arduino_secrets.h"
  "${CMAKE_CURRENT_LIST_DIR}/MKRNB/examples/GPRSUdpNtpClient/arduino_secrets.h"
)

target_include_directories(mkrnb INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MKRNB/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(mkrnb INTERFACE
    arduino-compat
)
