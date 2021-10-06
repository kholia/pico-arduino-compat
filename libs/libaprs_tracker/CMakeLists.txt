add_library(libaprs_tracker INTERFACE)

target_sources(libaprs_tracker INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/LibAPRS_Tracker/src/AX25.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LibAPRS_Tracker/src/LibAPRS_Tracker.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LibAPRS_Tracker/src/AFSK.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LibAPRS_Tracker/src/CRC-CCIT.c"
  "${CMAKE_CURRENT_LIST_DIR}/LibAPRS_Tracker/src/AX25.h"
  "${CMAKE_CURRENT_LIST_DIR}/LibAPRS_Tracker/src/AFSK.h"
  "${CMAKE_CURRENT_LIST_DIR}/LibAPRS_Tracker/src/FIFO.h"
  "${CMAKE_CURRENT_LIST_DIR}/LibAPRS_Tracker/src/CRC-CCIT.h"
  "${CMAKE_CURRENT_LIST_DIR}/LibAPRS_Tracker/src/constants.h"
  "${CMAKE_CURRENT_LIST_DIR}/LibAPRS_Tracker/src/device.h"
  "${CMAKE_CURRENT_LIST_DIR}/LibAPRS_Tracker/src/LibAPRS_Tracker.h"
  "${CMAKE_CURRENT_LIST_DIR}/LibAPRS_Tracker/src/HDLC.h"
)

target_include_directories(libaprs_tracker INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/LibAPRS_Tracker/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(libaprs_tracker INTERFACE
    arduino-compat
)
