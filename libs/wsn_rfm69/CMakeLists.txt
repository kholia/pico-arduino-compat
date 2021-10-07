add_library(pac-wsn_rfm69 INTERFACE)

target_sources(pac-wsn_rfm69 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/WSN-for-RFM69-LowPowerLab/WSN_RFM69.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/WSN-for-RFM69-LowPowerLab/WSN_RFM69.h"
)

target_include_directories(pac-wsn_rfm69 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/WSN-for-RFM69-LowPowerLab"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-wsn_rfm69 INTERFACE
    arduino-compat
)
