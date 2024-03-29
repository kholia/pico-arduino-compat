add_library(pac-gsm INTERFACE)

target_sources(pac-gsm INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/GSM/src/GSM3ShieldV1ModemVerification.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/GSM/src/GSM3MobileVoiceProvider.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/GSM/src/GSM3ShieldV1AccessProvider.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/GSM/src/GSM3ShieldV1ClientProvider.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/GSM/src/GSM3MobileClientProvider.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/GSM/src/GSM3ShieldV1VoiceProvider.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/GSM/src/GSM3CircularBuffer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/GSM/src/GSM3ShieldV1PinManagement.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/GSM/src/GSM3MobileCellManagement.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/GSM/src/GSM3ShieldV1SMSProvider.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/GSM/src/GSM3ShieldV1ModemCore.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/GSM/src/GSM3MobileMockupProvider.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/GSM/src/GSM3ShieldV1MultiClientProvider.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/GSM/src/GSM3ShieldV1DirectModemProvider.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/GSM/src/GSM3MobileNetworkProvider.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/GSM/src/GSM3MobileServerService.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/GSM/src/GSM3ShieldV1BandManagement.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/GSM/src/GSM3SoftSerial.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/GSM/src/GSM3MobileDataNetworkProvider.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/GSM/src/GSM3MobileServerProvider.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/GSM/src/GSM3MobileClientService.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/GSM/src/GSM3MobileSMSProvider.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/GSM/src/GSM3ShieldV1MultiServerProvider.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/GSM/src/GSM3SMSService.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/GSM/src/GSM3ShieldV1DataNetworkProvider.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/GSM/src/GSM3ShieldV1ScanNetworks.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/GSM/src/GSM3MobileNetworkRegistry.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/GSM/src/GSM3ShieldV1CellManagement.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/GSM/src/GSM3MobileAccessProvider.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/GSM/src/GSM3ShieldV1BaseProvider.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/GSM/src/GSM3VoiceCallService.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/GSM/src/GSM3ShieldV1.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/GSM/src/GSM3ShieldV1ServerProvider.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/GSM/src/GSM3MobileSMSProvider.h"
  "${CMAKE_CURRENT_LIST_DIR}/GSM/src/GSM3ShieldV1DataNetworkProvider.h"
  "${CMAKE_CURRENT_LIST_DIR}/GSM/src/GSM3ShieldV1MultiClientProvider.h"
  "${CMAKE_CURRENT_LIST_DIR}/GSM/src/GSM3MobileServerService.h"
  "${CMAKE_CURRENT_LIST_DIR}/GSM/src/GSM3ShieldV1.h"
  "${CMAKE_CURRENT_LIST_DIR}/GSM/src/GSM3ShieldV1MultiServerProvider.h"
  "${CMAKE_CURRENT_LIST_DIR}/GSM/src/GSM3MobileVoiceProvider.h"
  "${CMAKE_CURRENT_LIST_DIR}/GSM/src/GSM3MobileClientService.h"
  "${CMAKE_CURRENT_LIST_DIR}/GSM/src/GSM3ShieldV1CellManagement.h"
  "${CMAKE_CURRENT_LIST_DIR}/GSM/src/GSM3MobileAccessProvider.h"
  "${CMAKE_CURRENT_LIST_DIR}/GSM/src/GSM3ShieldV1VoiceProvider.h"
  "${CMAKE_CURRENT_LIST_DIR}/GSM/src/GSM3CircularBuffer.h"
  "${CMAKE_CURRENT_LIST_DIR}/GSM/src/GSM3ShieldV1BaseProvider.h"
  "${CMAKE_CURRENT_LIST_DIR}/GSM/src/GSM3MobileNetworkRegistry.h"
  "${CMAKE_CURRENT_LIST_DIR}/GSM/src/GSM3ShieldV1ModemCore.h"
  "${CMAKE_CURRENT_LIST_DIR}/GSM/src/GSM3ShieldV1ServerProvider.h"
  "${CMAKE_CURRENT_LIST_DIR}/GSM/src/GSM3ShieldV1BandManagement.h"
  "${CMAKE_CURRENT_LIST_DIR}/GSM/src/GSM3SMSService.h"
  "${CMAKE_CURRENT_LIST_DIR}/GSM/src/GSM3ShieldV1DirectModemProvider.h"
  "${CMAKE_CURRENT_LIST_DIR}/GSM/src/GSM3MobileClientProvider.h"
  "${CMAKE_CURRENT_LIST_DIR}/GSM/src/GSM3ShieldV1ScanNetworks.h"
  "${CMAKE_CURRENT_LIST_DIR}/GSM/src/GSM.h"
  "${CMAKE_CURRENT_LIST_DIR}/GSM/src/GSM3ShieldV1PinManagement.h"
  "${CMAKE_CURRENT_LIST_DIR}/GSM/src/GSM3ShieldV1ClientProvider.h"
  "${CMAKE_CURRENT_LIST_DIR}/GSM/src/GSM3MobileServerProvider.h"
  "${CMAKE_CURRENT_LIST_DIR}/GSM/src/GSM3MobileCellManagement.h"
  "${CMAKE_CURRENT_LIST_DIR}/GSM/src/GSM3ShieldV1AccessProvider.h"
  "${CMAKE_CURRENT_LIST_DIR}/GSM/src/GSM3ShieldV1SMSProvider.h"
  "${CMAKE_CURRENT_LIST_DIR}/GSM/src/GSM3MobileDataNetworkProvider.h"
  "${CMAKE_CURRENT_LIST_DIR}/GSM/src/GSM3ShieldV1ModemVerification.h"
  "${CMAKE_CURRENT_LIST_DIR}/GSM/src/GSM3SoftSerial.h"
  "${CMAKE_CURRENT_LIST_DIR}/GSM/src/GSM3IO.h"
  "${CMAKE_CURRENT_LIST_DIR}/GSM/src/GSM3MobileNetworkProvider.h"
  "${CMAKE_CURRENT_LIST_DIR}/GSM/src/GSM3VoiceCallService.h"
  "${CMAKE_CURRENT_LIST_DIR}/GSM/src/GSM3MobileMockupProvider.h"
)

target_include_directories(pac-gsm INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/GSM/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-gsm INTERFACE
    arduino-compat
)
