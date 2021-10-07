add_library(pac-gprsbee INTERFACE)

target_sources(pac-gprsbee INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/GPRSbee/src/GPRSbee.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/GPRSbee/src/Sodaq_GSM_Modem.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/GPRSbee/examples/sodaq_wunderground/SQ_Command.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/GPRSbee/examples/sodaq_wunderground/SQ_Diag.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/GPRSbee/examples/sodaq_wunderground/SQ_Utils.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/GPRSbee/examples/sodaq_wunderground/SQ_StartupCommands.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/GPRSbee/examples/sodaq_wunderground/MyWatchdog.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/GPRSbee/examples/sodaq_wunderground/Config.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/GPRSbee/src/Sodaq_GSM_Modem.h"
  "${CMAKE_CURRENT_LIST_DIR}/GPRSbee/src/GPRSbee.h"
  "${CMAKE_CURRENT_LIST_DIR}/GPRSbee/src/Sodaq_OnOffBee.h"
  "${CMAKE_CURRENT_LIST_DIR}/GPRSbee/examples/test_ftp/Diag.h"
  "${CMAKE_CURRENT_LIST_DIR}/GPRSbee/examples/httpget/Diag.h"
  "${CMAKE_CURRENT_LIST_DIR}/GPRSbee/examples/sodaq_wunderground/MyWatchdog.h"
  "${CMAKE_CURRENT_LIST_DIR}/GPRSbee/examples/sodaq_wunderground/SQ_Utils.h"
  "${CMAKE_CURRENT_LIST_DIR}/GPRSbee/examples/sodaq_wunderground/Config.h"
  "${CMAKE_CURRENT_LIST_DIR}/GPRSbee/examples/sodaq_wunderground/SQ_Command.h"
  "${CMAKE_CURRENT_LIST_DIR}/GPRSbee/examples/sodaq_wunderground/pindefs.h"
  "${CMAKE_CURRENT_LIST_DIR}/GPRSbee/examples/sodaq_wunderground/SQ_StartupCommands.h"
  "${CMAKE_CURRENT_LIST_DIR}/GPRSbee/examples/sodaq_wunderground/SQ_Diag.h"
)

target_include_directories(pac-gprsbee INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/GPRSbee/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-gprsbee INTERFACE
    arduino-compat
)
