add_library(sid6581 INTERFACE)

target_sources(sid6581 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SID6581/src/SID6581.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SID6581/src/modules/MOS/MOS_CPU_Controls.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SID6581/src/modules/Player/SID_Player.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SID6581/src/modules/HVSC/SID_HVSC_Indexer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SID6581/extras/Send_sid_via_serial.c"
  "${CMAKE_CURRENT_LIST_DIR}/SID6581/extras/traduct_2.c"
  "${CMAKE_CURRENT_LIST_DIR}/SID6581/src/SID6581.h"
  "${CMAKE_CURRENT_LIST_DIR}/SID6581/src/modules/MOS/MOS_CPU_Controls.h"
  "${CMAKE_CURRENT_LIST_DIR}/SID6581/src/modules/MOS/MOS_Registers.h"
  "${CMAKE_CURRENT_LIST_DIR}/SID6581/src/modules/MD5Hash/SID_MD5.h"
  "${CMAKE_CURRENT_LIST_DIR}/SID6581/src/modules/Instruments/SID_Instruments.h"
  "${CMAKE_CURRENT_LIST_DIR}/SID6581/src/modules/Instruments/samples.h"
  "${CMAKE_CURRENT_LIST_DIR}/SID6581/src/modules/Player/SID_Track.h"
  "${CMAKE_CURRENT_LIST_DIR}/SID6581/src/modules/Player/SID_Player.h"
  "${CMAKE_CURRENT_LIST_DIR}/SID6581/src/modules/HVSC/SID_HVSC_Indexer.h"
)

target_include_directories(sid6581 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SID6581/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(sid6581 INTERFACE
    arduino-compat
)
