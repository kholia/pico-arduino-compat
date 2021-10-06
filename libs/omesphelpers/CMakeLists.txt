add_library(omesphelpers INTERFACE)

target_sources(omesphelpers INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/OmEspHelpers/src/OmBlinker.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/OmEspHelpers/src/OmUtil.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/OmEspHelpers/src/OmEeprom.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/OmEspHelpers/src/OmOta.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/OmEspHelpers/src/OmLog.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/OmEspHelpers/src/OmWebPages.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/OmEspHelpers/src/OmNtp.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/OmEspHelpers/src/OmWebServer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/OmEspHelpers/src/OmBmp.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/OmEspHelpers/src/OmPrintfStream.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/OmEspHelpers/src/OmXmlWriter.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/OmEspHelpers/examples/WebServerSketch1/jpgImage.c"
  "${CMAKE_CURRENT_LIST_DIR}/OmEspHelpers/src/OmBmp.h"
  "${CMAKE_CURRENT_LIST_DIR}/OmEspHelpers/src/OmBlinker.h"
  "${CMAKE_CURRENT_LIST_DIR}/OmEspHelpers/src/OmLog.h"
  "${CMAKE_CURRENT_LIST_DIR}/OmEspHelpers/src/OmUtil.h"
  "${CMAKE_CURRENT_LIST_DIR}/OmEspHelpers/src/OmEspHelpers.h"
  "${CMAKE_CURRENT_LIST_DIR}/OmEspHelpers/src/OmOta.h"
  "${CMAKE_CURRENT_LIST_DIR}/OmEspHelpers/src/OmWebRequest.h"
  "${CMAKE_CURRENT_LIST_DIR}/OmEspHelpers/src/OmNtp.h"
  "${CMAKE_CURRENT_LIST_DIR}/OmEspHelpers/src/OmPrintfStream.h"
  "${CMAKE_CURRENT_LIST_DIR}/OmEspHelpers/src/OmWebPages.h"
  "${CMAKE_CURRENT_LIST_DIR}/OmEspHelpers/src/OmWebServer.h"
  "${CMAKE_CURRENT_LIST_DIR}/OmEspHelpers/src/OmRotaryEncoder.h"
  "${CMAKE_CURRENT_LIST_DIR}/OmEspHelpers/src/OmXmlWriter.h"
  "${CMAKE_CURRENT_LIST_DIR}/OmEspHelpers/src/OmEeprom.h"
  "${CMAKE_CURRENT_LIST_DIR}/OmEspHelpers/examples/WebServerSketch1/jpgImage.h"
)

target_include_directories(omesphelpers INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/OmEspHelpers/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(omesphelpers INTERFACE
    arduino-compat
)
