add_library(pac-gsmsim INTERFACE)

target_sources(pac-gsmsim INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/GSMSim/src/GSMSim.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/GSMSim/src/GSMSimUSSD.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/GSMSim/src/GSMSimGPRS.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/GSMSim/src/GSMSimTime.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/GSMSim/src/GSMSimSMS.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/GSMSim/src/GSMSimDTMF.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/GSMSim/src/GSMSimCall.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/GSMSim/src/GSMSimHTTP.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/GSMSim/src/GSMSimFMRadio.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/GSMSim/src/GSMSimEmail.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/GSMSim/src/GSMSimEmail.h"
  "${CMAKE_CURRENT_LIST_DIR}/GSMSim/src/GSMSimDTMF.h"
  "${CMAKE_CURRENT_LIST_DIR}/GSMSim/src/GSMSimUSSD.h"
  "${CMAKE_CURRENT_LIST_DIR}/GSMSim/src/GSMSimFMRadio.h"
  "${CMAKE_CURRENT_LIST_DIR}/GSMSim/src/GSMSimGPRS.h"
  "${CMAKE_CURRENT_LIST_DIR}/GSMSim/src/GSMSimHTTP.h"
  "${CMAKE_CURRENT_LIST_DIR}/GSMSim/src/GSMSimSMS.h"
  "${CMAKE_CURRENT_LIST_DIR}/GSMSim/src/GSMSim.h"
  "${CMAKE_CURRENT_LIST_DIR}/GSMSim/src/GSMSimCall.h"
  "${CMAKE_CURRENT_LIST_DIR}/GSMSim/src/GSMSimTime.h"
)

target_include_directories(pac-gsmsim INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/GSMSim/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-gsmsim INTERFACE
    arduino-compat
)
