add_library(rp2040_rtc INTERFACE)

target_sources(rp2040_rtc INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/RP2040_RTC/LibraryPatches/UIPEthernet/UIPEthernet.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RP2040_RTC/LibraryPatches/UIPEthernet/utility/Enc28J60Network.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RP2040_RTC/LibraryPatches/UIPEthernet-2.0.9/UIPEthernet.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RP2040_RTC/LibraryPatches/UIPEthernet-2.0.9/utility/Enc28J60Network.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RP2040_RTC/LibraryPatches/Ethernet2/src/Ethernet2.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RP2040_RTC/LibraryPatches/Ethernet2/src/EthernetUdp2.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RP2040_RTC/LibraryPatches/Ethernet/src/Ethernet.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RP2040_RTC/LibraryPatches/Ethernet/src/EthernetServer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RP2040_RTC/LibraryPatches/Ethernet/src/utility/w5100.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RP2040_RTC/LibraryPatches/EthernetLarge/src/EthernetLarge.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RP2040_RTC/LibraryPatches/EthernetLarge/src/EthernetServer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RP2040_RTC/LibraryPatches/EthernetLarge/src/utility/w5100.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RP2040_RTC/LibraryPatches/Ethernet3/src/Ethernet3.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RP2040_RTC/LibraryPatches/UIPEthernet/UIPEthernet.h"
  "${CMAKE_CURRENT_LIST_DIR}/RP2040_RTC/LibraryPatches/UIPEthernet/utility/Enc28J60Network.h"
  "${CMAKE_CURRENT_LIST_DIR}/RP2040_RTC/LibraryPatches/UIPEthernet-2.0.9/UIPEthernet.h"
  "${CMAKE_CURRENT_LIST_DIR}/RP2040_RTC/LibraryPatches/UIPEthernet-2.0.9/utility/Enc28J60Network.h"
  "${CMAKE_CURRENT_LIST_DIR}/RP2040_RTC/LibraryPatches/esp32/cores/esp32/Server.h"
  "${CMAKE_CURRENT_LIST_DIR}/RP2040_RTC/LibraryPatches/Ethernet2/src/EthernetUdp2.h"
  "${CMAKE_CURRENT_LIST_DIR}/RP2040_RTC/LibraryPatches/Ethernet2/src/Ethernet2.h"
  "${CMAKE_CURRENT_LIST_DIR}/RP2040_RTC/LibraryPatches/Ethernet/src/Ethernet.h"
  "${CMAKE_CURRENT_LIST_DIR}/RP2040_RTC/LibraryPatches/Ethernet/src/utility/w5100.h"
  "${CMAKE_CURRENT_LIST_DIR}/RP2040_RTC/LibraryPatches/EthernetLarge/src/EthernetLarge.h"
  "${CMAKE_CURRENT_LIST_DIR}/RP2040_RTC/LibraryPatches/EthernetLarge/src/utility/w5100.h"
  "${CMAKE_CURRENT_LIST_DIR}/RP2040_RTC/LibraryPatches/Ethernet3/src/Ethernet3.h"
  "${CMAKE_CURRENT_LIST_DIR}/RP2040_RTC/src/DateTime_Generic.h"
  "${CMAKE_CURRENT_LIST_DIR}/RP2040_RTC/src/RP2040_RTC.h"
  "${CMAKE_CURRENT_LIST_DIR}/RP2040_RTC/examples/Alarm/RP2040_RTC_Alarm/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/RP2040_RTC/examples/Alarm/RP2040_RTC_Alarm_WiFiNINA/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/RP2040_RTC/examples/Alarm/RP2040_RTC_Alarm_Ethernet/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/RP2040_RTC/examples/Time/RP2040_RTC_Time_Ethernet/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/RP2040_RTC/examples/Time/RP2040_RTC_Time/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/RP2040_RTC/examples/Time/RP2040_RTC_Time_WiFiNINA/defines.h"
)

target_include_directories(rp2040_rtc INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/RP2040_RTC/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(rp2040_rtc INTERFACE
    arduino-compat
)
