add_library(aspen-sim800 INTERFACE)

target_sources(aspen-sim800 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SIM800/src/SIM800.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SIM800/src/core/simserial.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SIM800/src/core/debug.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SIM800/src/core/strfn.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SIM800/src/atcmds/calls.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SIM800/src/atcmds/ip.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SIM800/src/atcmds/simcom.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SIM800/src/atcmds/ftp.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SIM800/src/atcmds/gprs.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SIM800/src/atcmds/sms.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SIM800/src/atcmds/stk.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SIM800/src/atcmds/general.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SIM800/src/atcmds/http.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SIM800/src/atcmds/mms.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SIM800/src/atcmds/fm.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SIM800/src/atcmds/email.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SIM800/src/SIM800.h"
  "${CMAKE_CURRENT_LIST_DIR}/SIM800/src/core/strfn.h"
  "${CMAKE_CURRENT_LIST_DIR}/SIM800/src/core/simserial.h"
  "${CMAKE_CURRENT_LIST_DIR}/SIM800/src/core/debug.h"
  "${CMAKE_CURRENT_LIST_DIR}/SIM800/src/atcmds/http.h"
  "${CMAKE_CURRENT_LIST_DIR}/SIM800/src/atcmds/fm.h"
  "${CMAKE_CURRENT_LIST_DIR}/SIM800/src/atcmds/email.h"
  "${CMAKE_CURRENT_LIST_DIR}/SIM800/src/atcmds/general.h"
  "${CMAKE_CURRENT_LIST_DIR}/SIM800/src/atcmds/ip.h"
  "${CMAKE_CURRENT_LIST_DIR}/SIM800/src/atcmds/mms.h"
  "${CMAKE_CURRENT_LIST_DIR}/SIM800/src/atcmds/stk.h"
  "${CMAKE_CURRENT_LIST_DIR}/SIM800/src/atcmds/gprs.h"
  "${CMAKE_CURRENT_LIST_DIR}/SIM800/src/atcmds/simcom.h"
  "${CMAKE_CURRENT_LIST_DIR}/SIM800/src/atcmds/calls.h"
  "${CMAKE_CURRENT_LIST_DIR}/SIM800/src/atcmds/ftp.h"
  "${CMAKE_CURRENT_LIST_DIR}/SIM800/src/atcmds/sms.h"
)

target_include_directories(aspen-sim800 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SIM800/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(aspen-sim800 INTERFACE
    arduino-compat
)
