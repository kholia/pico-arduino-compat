add_library(arduino_portentabreakout INTERFACE)

target_sources(arduino_portentabreakout INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_PortentaBreakout/src/utility/RTC/Timestamp.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_PortentaBreakout/src/utility/RTC/RTC.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_PortentaBreakout/src/Arduino_PortentaBreakout.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_PortentaBreakout/src/utility/RTC/RTC.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_PortentaBreakout/src/utility/RTC/Timestamp.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_PortentaBreakout/src/utility/RTC/TimeSyncProvider.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_PortentaBreakout/src/utility/RTC/RealTimeClock.h"
)

target_include_directories(arduino_portentabreakout INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino_PortentaBreakout/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(arduino_portentabreakout INTERFACE
    arduino-compat
)
