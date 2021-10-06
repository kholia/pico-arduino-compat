add_library(samd_timerinterrupt INTERFACE)

target_sources(samd_timerinterrupt INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SAMD_TimerInterrupt/src_cpp/SAMD_ISR_Timer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SAMD_TimerInterrupt/LibraryPatches/UIPEthernet/UIPEthernet.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SAMD_TimerInterrupt/LibraryPatches/UIPEthernet/utility/Enc28J60Network.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SAMD_TimerInterrupt/LibraryPatches/UIPEthernet-2.0.9/UIPEthernet.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SAMD_TimerInterrupt/LibraryPatches/UIPEthernet-2.0.9/utility/Enc28J60Network.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SAMD_TimerInterrupt/LibraryPatches/Ethernet2/src/Ethernet2.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SAMD_TimerInterrupt/LibraryPatches/Ethernet2/src/EthernetUdp2.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SAMD_TimerInterrupt/LibraryPatches/Ethernet/src/Ethernet.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SAMD_TimerInterrupt/LibraryPatches/Ethernet/src/EthernetServer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SAMD_TimerInterrupt/LibraryPatches/Ethernet/src/utility/w5100.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SAMD_TimerInterrupt/LibraryPatches/EthernetLarge/src/EthernetLarge.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SAMD_TimerInterrupt/LibraryPatches/EthernetLarge/src/EthernetServer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SAMD_TimerInterrupt/LibraryPatches/EthernetLarge/src/utility/w5100.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SAMD_TimerInterrupt/LibraryPatches/Ethernet3/src/Ethernet3.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SAMD_TimerInterrupt/src_cpp/TimerInterrupt_Generic_Debug.h"
  "${CMAKE_CURRENT_LIST_DIR}/SAMD_TimerInterrupt/src_cpp/SAMDTimerInterrupt.h"
  "${CMAKE_CURRENT_LIST_DIR}/SAMD_TimerInterrupt/src_cpp/SAMD_ISR_Timer.h"
  "${CMAKE_CURRENT_LIST_DIR}/SAMD_TimerInterrupt/LibraryPatches/UIPEthernet/UIPEthernet.h"
  "${CMAKE_CURRENT_LIST_DIR}/SAMD_TimerInterrupt/LibraryPatches/UIPEthernet/utility/Enc28J60Network.h"
  "${CMAKE_CURRENT_LIST_DIR}/SAMD_TimerInterrupt/LibraryPatches/UIPEthernet-2.0.9/UIPEthernet.h"
  "${CMAKE_CURRENT_LIST_DIR}/SAMD_TimerInterrupt/LibraryPatches/UIPEthernet-2.0.9/utility/Enc28J60Network.h"
  "${CMAKE_CURRENT_LIST_DIR}/SAMD_TimerInterrupt/LibraryPatches/esp32/cores/esp32/Server.h"
  "${CMAKE_CURRENT_LIST_DIR}/SAMD_TimerInterrupt/LibraryPatches/Ethernet2/src/EthernetUdp2.h"
  "${CMAKE_CURRENT_LIST_DIR}/SAMD_TimerInterrupt/LibraryPatches/Ethernet2/src/Ethernet2.h"
  "${CMAKE_CURRENT_LIST_DIR}/SAMD_TimerInterrupt/LibraryPatches/Ethernet/src/Ethernet.h"
  "${CMAKE_CURRENT_LIST_DIR}/SAMD_TimerInterrupt/LibraryPatches/Ethernet/src/utility/w5100.h"
  "${CMAKE_CURRENT_LIST_DIR}/SAMD_TimerInterrupt/LibraryPatches/EthernetLarge/src/EthernetLarge.h"
  "${CMAKE_CURRENT_LIST_DIR}/SAMD_TimerInterrupt/LibraryPatches/EthernetLarge/src/utility/w5100.h"
  "${CMAKE_CURRENT_LIST_DIR}/SAMD_TimerInterrupt/LibraryPatches/Ethernet3/src/Ethernet3.h"
  "${CMAKE_CURRENT_LIST_DIR}/SAMD_TimerInterrupt/Packages_Patches/Seeeduino/hardware/samd/1.8.1/cores/arduino/Arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/SAMD_TimerInterrupt/Packages_Patches/Seeeduino/hardware/samd/1.7.8/cores/arduino/Arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/SAMD_TimerInterrupt/Packages_Patches/Seeeduino/hardware/samd/1.7.7/cores/arduino/Arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/SAMD_TimerInterrupt/Packages_Patches/Seeeduino/hardware/samd/1.7.9/cores/arduino/Arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/SAMD_TimerInterrupt/Packages_Patches/arduino/hardware/samd/1.8.6/cores/arduino/Arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/SAMD_TimerInterrupt/Packages_Patches/arduino/hardware/samd/1.8.9/cores/arduino/Arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/SAMD_TimerInterrupt/Packages_Patches/arduino/hardware/samd/1.8.8/cores/Arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/SAMD_TimerInterrupt/Packages_Patches/arduino/hardware/samd/1.8.8/cores/arduino/Arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/SAMD_TimerInterrupt/Packages_Patches/arduino/hardware/samd/1.8.7/cores/arduino/Arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/SAMD_TimerInterrupt/src/TimerInterrupt_Generic_Debug.h"
  "${CMAKE_CURRENT_LIST_DIR}/SAMD_TimerInterrupt/src/SAMDTimerInterrupt.h"
  "${CMAKE_CURRENT_LIST_DIR}/SAMD_TimerInterrupt/src/SAMD_ISR_Timer-Impl.h"
  "${CMAKE_CURRENT_LIST_DIR}/SAMD_TimerInterrupt/src/SAMD_ISR_Timer.h"
  "${CMAKE_CURRENT_LIST_DIR}/SAMD_TimerInterrupt/src_h/TimerInterrupt_Generic_Debug.h"
  "${CMAKE_CURRENT_LIST_DIR}/SAMD_TimerInterrupt/src_h/SAMDTimerInterrupt.h"
  "${CMAKE_CURRENT_LIST_DIR}/SAMD_TimerInterrupt/src_h/SAMD_ISR_Timer-Impl.h"
  "${CMAKE_CURRENT_LIST_DIR}/SAMD_TimerInterrupt/src_h/SAMD_ISR_Timer.h"
)

target_include_directories(samd_timerinterrupt INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SAMD_TimerInterrupt/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(samd_timerinterrupt INTERFACE
    arduino-compat
)
