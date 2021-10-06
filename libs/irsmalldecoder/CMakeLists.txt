add_library(irsmalldecoder INTERFACE)

target_sources(irsmalldecoder INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/IRsmallDecoder/src/IRsmallDProtocolStructs.h"
  "${CMAKE_CURRENT_LIST_DIR}/IRsmallDecoder/src/IRsmallD_RC5.h"
  "${CMAKE_CURRENT_LIST_DIR}/IRsmallDecoder/src/IRsmallD_SAMSUNG32.h"
  "${CMAKE_CURRENT_LIST_DIR}/IRsmallDecoder/src/IRsmallD_SIRC_basic.h"
  "${CMAKE_CURRENT_LIST_DIR}/IRsmallDecoder/src/IRsmallD_SAMSUNG.h"
  "${CMAKE_CURRENT_LIST_DIR}/IRsmallDecoder/src/IRsmallDecoder.h"
  "${CMAKE_CURRENT_LIST_DIR}/IRsmallDecoder/src/IRsmallDDebug.h"
  "${CMAKE_CURRENT_LIST_DIR}/IRsmallDecoder/src/IRsmallD_SIRC_multi.h"
  "${CMAKE_CURRENT_LIST_DIR}/IRsmallDecoder/src/IRsmallD_NEC.h"
  "${CMAKE_CURRENT_LIST_DIR}/IRsmallDecoder/src/IRsmallDProtocolCheck.h"
)

target_include_directories(irsmalldecoder INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/IRsmallDecoder/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(irsmalldecoder INTERFACE
    arduino-compat
)
