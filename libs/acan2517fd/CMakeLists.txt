add_library(pac-acan2517fd INTERFACE)

target_sources(pac-acan2517fd INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/acan2517FD/src/ACAN2517FD.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/acan2517FD/src/ACAN2517FDSettings.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/acan2517FD/src/ACAN2517FD.h"
  "${CMAKE_CURRENT_LIST_DIR}/acan2517FD/src/ACANFDBuffer.h"
  "${CMAKE_CURRENT_LIST_DIR}/acan2517FD/src/ACAN2517FDFilters.h"
  "${CMAKE_CURRENT_LIST_DIR}/acan2517FD/src/ACAN2517FDSettings.h"
  "${CMAKE_CURRENT_LIST_DIR}/acan2517FD/src/CANFDMessage.h"
  "${CMAKE_CURRENT_LIST_DIR}/acan2517FD/src/ACANFD_DataBitRateFactor.h"
  "${CMAKE_CURRENT_LIST_DIR}/acan2517FD/src/CANMessage.h"
)

target_include_directories(pac-acan2517fd INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/acan2517FD/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-acan2517fd INTERFACE
    arduino-compat
)
