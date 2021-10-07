add_library(pac-mkrgsm INTERFACE)

target_sources(pac-mkrgsm INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MKRGSM/src/GSMUdp.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MKRGSM/src/GSMFileUtils.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MKRGSM/src/GSM.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MKRGSM/src/GSMModem.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MKRGSM/src/GSMHttpUtils.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MKRGSM/src/GSMVoiceCall.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MKRGSM/src/GSM_SMS.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MKRGSM/src/GSMPIN.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MKRGSM/src/GSMLocation.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MKRGSM/src/GSMClient.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MKRGSM/src/Modem.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MKRGSM/src/GPRS.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MKRGSM/src/GSMSSLClient.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MKRGSM/src/GSMScanner.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MKRGSM/src/GSMServer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MKRGSM/src/GSMBand.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MKRGSM/src/utility/GSMSocketBuffer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MKRGSM/src/GSMModem.h"
  "${CMAKE_CURRENT_LIST_DIR}/MKRGSM/src/GSM_SMS.h"
  "${CMAKE_CURRENT_LIST_DIR}/MKRGSM/src/GSMClient.h"
  "${CMAKE_CURRENT_LIST_DIR}/MKRGSM/src/GSMScanner.h"
  "${CMAKE_CURRENT_LIST_DIR}/MKRGSM/src/GSMLocation.h"
  "${CMAKE_CURRENT_LIST_DIR}/MKRGSM/src/GSMUdp.h"
  "${CMAKE_CURRENT_LIST_DIR}/MKRGSM/src/GSM.h"
  "${CMAKE_CURRENT_LIST_DIR}/MKRGSM/src/GSMPIN.h"
  "${CMAKE_CURRENT_LIST_DIR}/MKRGSM/src/GSMFileUtils.h"
  "${CMAKE_CURRENT_LIST_DIR}/MKRGSM/src/MKRGSM.h"
  "${CMAKE_CURRENT_LIST_DIR}/MKRGSM/src/GPRS.h"
  "${CMAKE_CURRENT_LIST_DIR}/MKRGSM/src/GSMHttpUtils.h"
  "${CMAKE_CURRENT_LIST_DIR}/MKRGSM/src/GSMBand.h"
  "${CMAKE_CURRENT_LIST_DIR}/MKRGSM/src/GSMVoiceCall.h"
  "${CMAKE_CURRENT_LIST_DIR}/MKRGSM/src/GSMSSLClient.h"
  "${CMAKE_CURRENT_LIST_DIR}/MKRGSM/src/Modem.h"
  "${CMAKE_CURRENT_LIST_DIR}/MKRGSM/src/GSMServer.h"
  "${CMAKE_CURRENT_LIST_DIR}/MKRGSM/src/utility/GSMSocketBuffer.h"
  "${CMAKE_CURRENT_LIST_DIR}/MKRGSM/src/utility/GSMRootCerts.h"
  "${CMAKE_CURRENT_LIST_DIR}/MKRGSM/examples/GPRSPing/arduino_secrets.h"
  "${CMAKE_CURRENT_LIST_DIR}/MKRGSM/examples/GsmWebClient/arduino_secrets.h"
  "${CMAKE_CURRENT_LIST_DIR}/MKRGSM/examples/SendSMS/arduino_secrets.h"
  "${CMAKE_CURRENT_LIST_DIR}/MKRGSM/examples/GsmWebServer/arduino_secrets.h"
  "${CMAKE_CURRENT_LIST_DIR}/MKRGSM/examples/ReceiveVoiceCall/arduino_secrets.h"
  "${CMAKE_CURRENT_LIST_DIR}/MKRGSM/examples/SSLCertificateManagement/arduino_secrets.h"
  "${CMAKE_CURRENT_LIST_DIR}/MKRGSM/examples/MakeVoiceCall/arduino_secrets.h"
  "${CMAKE_CURRENT_LIST_DIR}/MKRGSM/examples/ReceiveSMS/arduino_secrets.h"
  "${CMAKE_CURRENT_LIST_DIR}/MKRGSM/examples/Tools/HttpUtilsGet/arduino_secrets.h"
  "${CMAKE_CURRENT_LIST_DIR}/MKRGSM/examples/Tools/FileUtilsJsonFile/Config.h"
  "${CMAKE_CURRENT_LIST_DIR}/MKRGSM/examples/Tools/GsmScanNetworks/arduino_secrets.h"
  "${CMAKE_CURRENT_LIST_DIR}/MKRGSM/examples/Tools/TestGPRS/arduino_secrets.h"
  "${CMAKE_CURRENT_LIST_DIR}/MKRGSM/examples/Tools/HttpUtilsSSLGet/arduino_secrets.h"
  "${CMAKE_CURRENT_LIST_DIR}/MKRGSM/examples/Tools/TestWebServer/arduino_secrets.h"
  "${CMAKE_CURRENT_LIST_DIR}/MKRGSM/examples/Tools/FileUtilsHttpDownload/arduino_secrets.h"
  "${CMAKE_CURRENT_LIST_DIR}/MKRGSM/examples/Tools/FileUtilsHttpDownload/Helpers.h"
  "${CMAKE_CURRENT_LIST_DIR}/MKRGSM/examples/GsmLocation/arduino_secrets.h"
  "${CMAKE_CURRENT_LIST_DIR}/MKRGSM/examples/GsmSSLWebClient/arduino_secrets.h"
  "${CMAKE_CURRENT_LIST_DIR}/MKRGSM/examples/GPRSUdpNtpClient/arduino_secrets.h"
)

target_include_directories(pac-mkrgsm INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MKRGSM/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-mkrgsm INTERFACE
    arduino-compat
)
