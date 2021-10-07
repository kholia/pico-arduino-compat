add_library(pac-adafruit-cc3000-library INTERFACE)

target_sources(pac-adafruit-cc3000-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_CC3000_Library/Adafruit_CC3000.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_CC3000_Library/Adafruit_CC3000_Server.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_CC3000_Library/ccspi.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_CC3000_Library/examples/ntpTest/sntp.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_CC3000_Library/utility/debug.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_CC3000_Library/utility/hci.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_CC3000_Library/utility/cc3000_common.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_CC3000_Library/utility/socket.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_CC3000_Library/utility/evnt_handler.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_CC3000_Library/utility/wlan.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_CC3000_Library/utility/nvmem.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_CC3000_Library/utility/security.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_CC3000_Library/utility/netapp.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_CC3000_Library/ccspi.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_CC3000_Library/Adafruit_CC3000_Server.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_CC3000_Library/Adafruit_CC3000.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_CC3000_Library/examples/driverpatch_1_14/driverpatchinc_1_14.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_CC3000_Library/examples/ntpTest/sntp.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_CC3000_Library/examples/driverpatch_1_12/driverpatchinc.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_CC3000_Library/examples/driverpatch_1_11/driverpatchinc.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_CC3000_Library/examples/driverpatch_1_13/driverpatchinc_1_13.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_CC3000_Library/utility/data_types.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_CC3000_Library/utility/nvmem.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_CC3000_Library/utility/host_driver_version.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_CC3000_Library/utility/security.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_CC3000_Library/utility/evnt_handler.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_CC3000_Library/utility/wlan.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_CC3000_Library/utility/cc3000_common.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_CC3000_Library/utility/hci.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_CC3000_Library/utility/error_codes.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_CC3000_Library/utility/socket.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_CC3000_Library/utility/debug.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_CC3000_Library/utility/netapp.h"
)

target_include_directories(pac-adafruit-cc3000-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_CC3000_Library"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-adafruit-cc3000-library INTERFACE
    arduino-compat
)
