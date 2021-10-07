add_library(pac-autoconnect INTERFACE)

target_sources(pac-autoconnect INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/AutoConnect/src/AutoConnectTicker.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AutoConnect/src/AutoConnectOTA.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AutoConnect/src/AutoConnect.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AutoConnect/src/AutoConnectConfigAux.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AutoConnect/src/AutoConnectUpdate.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AutoConnect/src/AutoConnectCredential.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AutoConnect/src/AutoConnectAux.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AutoConnect/src/AutoConnectPage.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AutoConnect/examples/WebUpdate/HTTPUpdateServer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AutoConnect/examples/mqttRSSI_NA/param.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AutoConnect/src/AutoConnectAux.h"
  "${CMAKE_CURRENT_LIST_DIR}/AutoConnect/src/AutoConnectElementBasis.h"
  "${CMAKE_CURRENT_LIST_DIR}/AutoConnect/src/AutoConnect.h"
  "${CMAKE_CURRENT_LIST_DIR}/AutoConnect/src/AutoConnectTypes.h"
  "${CMAKE_CURRENT_LIST_DIR}/AutoConnect/src/AutoConnectUploadImpl.h"
  "${CMAKE_CURRENT_LIST_DIR}/AutoConnect/src/AutoConnectUpdate.h"
  "${CMAKE_CURRENT_LIST_DIR}/AutoConnect/src/AutoConnectTicker.h"
  "${CMAKE_CURRENT_LIST_DIR}/AutoConnect/src/AutoConnectConfigAux.h"
  "${CMAKE_CURRENT_LIST_DIR}/AutoConnect/src/AutoConnectDefs.h"
  "${CMAKE_CURRENT_LIST_DIR}/AutoConnect/src/AutoConnectOTA.h"
  "${CMAKE_CURRENT_LIST_DIR}/AutoConnect/src/AutoConnectElement.h"
  "${CMAKE_CURRENT_LIST_DIR}/AutoConnect/src/AutoConnectUpdatePage.h"
  "${CMAKE_CURRENT_LIST_DIR}/AutoConnect/src/AutoConnectElementJsonImpl.h"
  "${CMAKE_CURRENT_LIST_DIR}/AutoConnect/src/AutoConnectJsonDefs.h"
  "${CMAKE_CURRENT_LIST_DIR}/AutoConnect/src/AutoConnectOTAPage.h"
  "${CMAKE_CURRENT_LIST_DIR}/AutoConnect/src/AutoConnectUpload.h"
  "${CMAKE_CURRENT_LIST_DIR}/AutoConnect/src/AutoConnectElementBasisImpl.h"
  "${CMAKE_CURRENT_LIST_DIR}/AutoConnect/src/AutoConnectCredential.h"
  "${CMAKE_CURRENT_LIST_DIR}/AutoConnect/src/AutoConnectLabels.h"
  "${CMAKE_CURRENT_LIST_DIR}/AutoConnect/src/AutoConnectFS.h"
  "${CMAKE_CURRENT_LIST_DIR}/AutoConnect/src/AutoConnectPage.h"
  "${CMAKE_CURRENT_LIST_DIR}/AutoConnect/src/AutoConnectElementJson.h"
  "${CMAKE_CURRENT_LIST_DIR}/AutoConnect/examples/WebUpdate/HTTPUpdateServer.h"
  "${CMAKE_CURRENT_LIST_DIR}/AutoConnect/examples/FSBrowser/extras/index_htm.h"
  "${CMAKE_CURRENT_LIST_DIR}/AutoConnect/examples/MyLabels/mylabels.h"
  "${CMAKE_CURRENT_LIST_DIR}/AutoConnect/examples/mqttRSSI_NA/param.h"
)

target_include_directories(pac-autoconnect INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/AutoConnect/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET pac-sd)
    add_subdirectory(../../libs/sd build_pac-sd)
endif()

target_link_libraries(pac-autoconnect INTERFACE
    arduino-compat
    pac-sd
)
