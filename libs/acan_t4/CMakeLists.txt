add_library(pac-acan_t4 INTERFACE)

target_sources(pac-acan_t4 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/acan-t4/src/ACAN_T4.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/acan-t4/src/ACAN_T4FD.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/acan-t4/src/ACAN_T4_T4FD_rootCANClock.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/acan-t4/src/ACAN_T4FD_Settings.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/acan-t4/src/ACAN_T4_Settings.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/acan-t4/src/ACAN_T4_Settings.h"
  "${CMAKE_CURRENT_LIST_DIR}/acan-t4/src/CANFDMessage.h"
  "${CMAKE_CURRENT_LIST_DIR}/acan-t4/src/ACAN_T4_T4FD_rootCANClock.h"
  "${CMAKE_CURRENT_LIST_DIR}/acan-t4/src/ACANFD_DataBitRateFactor.h"
  "${CMAKE_CURRENT_LIST_DIR}/acan-t4/src/ACAN_T4.h"
  "${CMAKE_CURRENT_LIST_DIR}/acan-t4/src/ACAN_T4FD_Settings.h"
  "${CMAKE_CURRENT_LIST_DIR}/acan-t4/src/CANMessage.h"
)

target_include_directories(pac-acan_t4 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/acan-t4/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-acan_t4 INTERFACE
    arduino-compat
)
