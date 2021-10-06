add_library(rfcodes INTERFACE)

target_sources(rfcodes INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/RFCodes/src/SignalCollector.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RFCodes/src/SignalParser.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RFCodes/src/RFCodes.h"
  "${CMAKE_CURRENT_LIST_DIR}/RFCodes/src/debugout.h"
  "${CMAKE_CURRENT_LIST_DIR}/RFCodes/src/protocols.h"
  "${CMAKE_CURRENT_LIST_DIR}/RFCodes/src/SignalParser.h"
  "${CMAKE_CURRENT_LIST_DIR}/RFCodes/src/SignalCollector.h"
  "${CMAKE_CURRENT_LIST_DIR}/RFCodes/src/ircodes.h"
)

target_include_directories(rfcodes INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/RFCodes/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(rfcodes INTERFACE
    arduino-compat
)
