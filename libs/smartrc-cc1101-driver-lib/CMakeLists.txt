add_library(pac-smartrc-cc1101-driver-lib INTERFACE)

target_sources(pac-smartrc-cc1101-driver-lib INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SmartRC-CC1101-Driver-Lib/ELECHOUSE_CC1101_SRC_DRV.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SmartRC-CC1101-Driver-Lib/ELECHOUSE_CC1101_SRC_DRV.h"
)

target_include_directories(pac-smartrc-cc1101-driver-lib INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SmartRC-CC1101-Driver-Lib"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-smartrc-cc1101-driver-lib INTERFACE
    arduino-compat
)
