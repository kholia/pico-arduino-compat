add_library(pac-webbino INTERFACE)

target_sources(pac-webbino INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Webbino/src/WebbinoInterfaces/WIZ5x00.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Webbino/src/WebbinoInterfaces/DigiFi.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Webbino/src/WebbinoInterfaces/AllWiFi.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Webbino/src/WebbinoInterfaces/ENC28J60.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Webbino/src/WebbinoInterfaces/FishinoIntf.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Webbino/src/WebbinoCore/HTTPRequest.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Webbino/src/WebbinoCore/WebServer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Webbino/src/webbino_config.h"
  "${CMAKE_CURRENT_LIST_DIR}/Webbino/src/webbino_common.h"
  "${CMAKE_CURRENT_LIST_DIR}/Webbino/src/Webbino.h"
  "${CMAKE_CURRENT_LIST_DIR}/Webbino/src/webbino_debug.h"
  "${CMAKE_CURRENT_LIST_DIR}/Webbino/src/WebbinoInterfaces/AllWiFi.h"
  "${CMAKE_CURRENT_LIST_DIR}/Webbino/src/WebbinoInterfaces/DigiFi.h"
  "${CMAKE_CURRENT_LIST_DIR}/Webbino/src/WebbinoInterfaces/ENC28J60.h"
  "${CMAKE_CURRENT_LIST_DIR}/Webbino/src/WebbinoInterfaces/FishinoIntf.h"
  "${CMAKE_CURRENT_LIST_DIR}/Webbino/src/WebbinoInterfaces/WIZ5x00.h"
  "${CMAKE_CURRENT_LIST_DIR}/Webbino/src/WebbinoCore/MimeTypes.h"
  "${CMAKE_CURRENT_LIST_DIR}/Webbino/src/WebbinoCore/WebClient.h"
  "${CMAKE_CURRENT_LIST_DIR}/Webbino/src/WebbinoCore/LittleFSStorage.h"
  "${CMAKE_CURRENT_LIST_DIR}/Webbino/src/WebbinoCore/WebServer.h"
  "${CMAKE_CURRENT_LIST_DIR}/Webbino/src/WebbinoCore/FlashStorage.h"
  "${CMAKE_CURRENT_LIST_DIR}/Webbino/src/WebbinoCore/Storage.h"
  "${CMAKE_CURRENT_LIST_DIR}/Webbino/src/WebbinoCore/NetworkInterface.h"
  "${CMAKE_CURRENT_LIST_DIR}/Webbino/src/WebbinoCore/SpiffsStorage.h"
  "${CMAKE_CURRENT_LIST_DIR}/Webbino/src/WebbinoCore/DummyStorage.h"
  "${CMAKE_CURRENT_LIST_DIR}/Webbino/src/WebbinoCore/SdStorage.h"
  "${CMAKE_CURRENT_LIST_DIR}/Webbino/src/WebbinoCore/Content.h"
  "${CMAKE_CURRENT_LIST_DIR}/Webbino/src/WebbinoCore/HTTPRequest.h"
  "${CMAKE_CURRENT_LIST_DIR}/Webbino/examples/LedControl/html.h"
  "${CMAKE_CURRENT_LIST_DIR}/Webbino/examples/SDWithFlashFallback/html.h"
  "${CMAKE_CURRENT_LIST_DIR}/Webbino/examples/FixedIPAddress/html.h"
  "${CMAKE_CURRENT_LIST_DIR}/Webbino/examples/AccessPointMode/html.h"
  "${CMAKE_CURRENT_LIST_DIR}/Webbino/examples/BasicAuth/html.h"
  "${CMAKE_CURRENT_LIST_DIR}/Webbino/examples/SimpleServer/html.h"
  "${CMAKE_CURRENT_LIST_DIR}/Webbino/examples/Ajax/html.h"
  "${CMAKE_CURRENT_LIST_DIR}/Webbino/examples/ReplacementTags/html.h"
)

target_include_directories(pac-webbino INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Webbino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET pac-sd)
    add_subdirectory(../../libs/sd build_pac-sd)
endif()

target_link_libraries(pac-webbino INTERFACE
    arduino-compat
    pac-sd
)
