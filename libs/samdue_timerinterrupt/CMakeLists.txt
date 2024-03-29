add_library(pac-samdue_timerinterrupt INTERFACE)

target_sources(pac-samdue_timerinterrupt INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SAMDUE_TimerInterrupt/src_cpp/SAMDUE_ISR_Timer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SAMDUE_TimerInterrupt/LibraryPatches/UIPEthernet/UIPEthernet.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SAMDUE_TimerInterrupt/LibraryPatches/UIPEthernet/utility/Enc28J60Network.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SAMDUE_TimerInterrupt/LibraryPatches/UIPEthernet-2.0.9/UIPEthernet.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SAMDUE_TimerInterrupt/LibraryPatches/UIPEthernet-2.0.9/utility/Enc28J60Network.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SAMDUE_TimerInterrupt/LibraryPatches/Ethernet2/src/Ethernet2.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SAMDUE_TimerInterrupt/LibraryPatches/Ethernet2/src/EthernetUdp2.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SAMDUE_TimerInterrupt/LibraryPatches/Ethernet/src/Ethernet.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SAMDUE_TimerInterrupt/LibraryPatches/Ethernet/src/EthernetServer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SAMDUE_TimerInterrupt/LibraryPatches/Ethernet/src/utility/w5100.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SAMDUE_TimerInterrupt/LibraryPatches/EthernetLarge/src/EthernetLarge.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SAMDUE_TimerInterrupt/LibraryPatches/EthernetLarge/src/EthernetServer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SAMDUE_TimerInterrupt/LibraryPatches/EthernetLarge/src/utility/w5100.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SAMDUE_TimerInterrupt/LibraryPatches/Ethernet3/src/Ethernet3.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SAMDUE_TimerInterrupt/src_cpp/SAMDUE_ISR_Timer.h"
  "${CMAKE_CURRENT_LIST_DIR}/SAMDUE_TimerInterrupt/src_cpp/SAMDUETimerInterrupt.h"
  "${CMAKE_CURRENT_LIST_DIR}/SAMDUE_TimerInterrupt/src_cpp/TimerInterrupt_Generic_Debug.h"
  "${CMAKE_CURRENT_LIST_DIR}/SAMDUE_TimerInterrupt/LibraryPatches/UIPEthernet/UIPEthernet.h"
  "${CMAKE_CURRENT_LIST_DIR}/SAMDUE_TimerInterrupt/LibraryPatches/UIPEthernet/utility/Enc28J60Network.h"
  "${CMAKE_CURRENT_LIST_DIR}/SAMDUE_TimerInterrupt/LibraryPatches/UIPEthernet-2.0.9/UIPEthernet.h"
  "${CMAKE_CURRENT_LIST_DIR}/SAMDUE_TimerInterrupt/LibraryPatches/UIPEthernet-2.0.9/utility/Enc28J60Network.h"
  "${CMAKE_CURRENT_LIST_DIR}/SAMDUE_TimerInterrupt/LibraryPatches/esp32/cores/esp32/Server.h"
  "${CMAKE_CURRENT_LIST_DIR}/SAMDUE_TimerInterrupt/LibraryPatches/Ethernet2/src/EthernetUdp2.h"
  "${CMAKE_CURRENT_LIST_DIR}/SAMDUE_TimerInterrupt/LibraryPatches/Ethernet2/src/Ethernet2.h"
  "${CMAKE_CURRENT_LIST_DIR}/SAMDUE_TimerInterrupt/LibraryPatches/Ethernet/src/Ethernet.h"
  "${CMAKE_CURRENT_LIST_DIR}/SAMDUE_TimerInterrupt/LibraryPatches/Ethernet/src/utility/w5100.h"
  "${CMAKE_CURRENT_LIST_DIR}/SAMDUE_TimerInterrupt/LibraryPatches/EthernetLarge/src/EthernetLarge.h"
  "${CMAKE_CURRENT_LIST_DIR}/SAMDUE_TimerInterrupt/LibraryPatches/EthernetLarge/src/utility/w5100.h"
  "${CMAKE_CURRENT_LIST_DIR}/SAMDUE_TimerInterrupt/LibraryPatches/Ethernet3/src/Ethernet3.h"
  "${CMAKE_CURRENT_LIST_DIR}/SAMDUE_TimerInterrupt/src/SAMDUE_ISR_Timer.h"
  "${CMAKE_CURRENT_LIST_DIR}/SAMDUE_TimerInterrupt/src/SAMDUETimerInterrupt.h"
  "${CMAKE_CURRENT_LIST_DIR}/SAMDUE_TimerInterrupt/src/TimerInterrupt_Generic_Debug.h"
  "${CMAKE_CURRENT_LIST_DIR}/SAMDUE_TimerInterrupt/src/SAMDUE_ISR_Timer-Impl.h"
  "${CMAKE_CURRENT_LIST_DIR}/SAMDUE_TimerInterrupt/src_h/SAMDUE_ISR_Timer.h"
  "${CMAKE_CURRENT_LIST_DIR}/SAMDUE_TimerInterrupt/src_h/SAMDUETimerInterrupt.h"
  "${CMAKE_CURRENT_LIST_DIR}/SAMDUE_TimerInterrupt/src_h/TimerInterrupt_Generic_Debug.h"
  "${CMAKE_CURRENT_LIST_DIR}/SAMDUE_TimerInterrupt/src_h/SAMDUE_ISR_Timer-Impl.h"
)

target_include_directories(pac-samdue_timerinterrupt INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SAMDUE_TimerInterrupt/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-samdue_timerinterrupt INTERFACE
    arduino-compat
)
