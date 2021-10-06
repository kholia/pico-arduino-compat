add_library(asyncdnsserver_stm32 INTERFACE)

target_sources(asyncdnsserver_stm32 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/AsyncDNSServer_STM32/LibraryPatches/UIPEthernet/UIPEthernet.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AsyncDNSServer_STM32/LibraryPatches/UIPEthernet/utility/Enc28J60Network.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AsyncDNSServer_STM32/LibraryPatches/UIPEthernet-2.0.9/UIPEthernet.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AsyncDNSServer_STM32/LibraryPatches/UIPEthernet-2.0.9/utility/Enc28J60Network.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AsyncDNSServer_STM32/LibraryPatches/Ethernet2/src/Ethernet2.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AsyncDNSServer_STM32/LibraryPatches/Ethernet2/src/EthernetUdp2.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AsyncDNSServer_STM32/LibraryPatches/Ethernet/src/Ethernet.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AsyncDNSServer_STM32/LibraryPatches/Ethernet/src/EthernetServer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AsyncDNSServer_STM32/LibraryPatches/Ethernet/src/utility/w5100.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AsyncDNSServer_STM32/LibraryPatches/EthernetLarge/src/EthernetLarge.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AsyncDNSServer_STM32/LibraryPatches/EthernetLarge/src/EthernetServer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AsyncDNSServer_STM32/LibraryPatches/EthernetLarge/src/utility/w5100.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AsyncDNSServer_STM32/LibraryPatches/Ethernet3/src/Ethernet3.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AsyncDNSServer_STM32/LibraryPatches/UIPEthernet/UIPEthernet.h"
  "${CMAKE_CURRENT_LIST_DIR}/AsyncDNSServer_STM32/LibraryPatches/UIPEthernet/utility/Enc28J60Network.h"
  "${CMAKE_CURRENT_LIST_DIR}/AsyncDNSServer_STM32/LibraryPatches/UIPEthernet-2.0.9/UIPEthernet.h"
  "${CMAKE_CURRENT_LIST_DIR}/AsyncDNSServer_STM32/LibraryPatches/UIPEthernet-2.0.9/utility/Enc28J60Network.h"
  "${CMAKE_CURRENT_LIST_DIR}/AsyncDNSServer_STM32/LibraryPatches/esp32/cores/esp32/Server.h"
  "${CMAKE_CURRENT_LIST_DIR}/AsyncDNSServer_STM32/LibraryPatches/Ethernet2/src/EthernetUdp2.h"
  "${CMAKE_CURRENT_LIST_DIR}/AsyncDNSServer_STM32/LibraryPatches/Ethernet2/src/Ethernet2.h"
  "${CMAKE_CURRENT_LIST_DIR}/AsyncDNSServer_STM32/LibraryPatches/Ethernet/src/Ethernet.h"
  "${CMAKE_CURRENT_LIST_DIR}/AsyncDNSServer_STM32/LibraryPatches/Ethernet/src/utility/w5100.h"
  "${CMAKE_CURRENT_LIST_DIR}/AsyncDNSServer_STM32/LibraryPatches/EthernetLarge/src/EthernetLarge.h"
  "${CMAKE_CURRENT_LIST_DIR}/AsyncDNSServer_STM32/LibraryPatches/EthernetLarge/src/utility/w5100.h"
  "${CMAKE_CURRENT_LIST_DIR}/AsyncDNSServer_STM32/LibraryPatches/Ethernet3/src/Ethernet3.h"
  "${CMAKE_CURRENT_LIST_DIR}/AsyncDNSServer_STM32/Packages_Patches/STM32/hardware/stm32/1.9.0/variants/NUCLEO_L053R8/variant.h"
  "${CMAKE_CURRENT_LIST_DIR}/AsyncDNSServer_STM32/Packages_Patches/STM32/hardware/stm32/1.9.0/variants/NUCLEO_F767ZI/variant.h"
  "${CMAKE_CURRENT_LIST_DIR}/AsyncDNSServer_STM32/Packages_Patches/STM32/hardware/stm32/1.9.0/system/STM32F7xx/stm32f7xx_hal_conf_default.h"
  "${CMAKE_CURRENT_LIST_DIR}/AsyncDNSServer_STM32/Packages_Patches/STM32/hardware/stm32/1.9.0/system/STM32F4xx/stm32f4xx_hal_conf_default.h"
  "${CMAKE_CURRENT_LIST_DIR}/AsyncDNSServer_STM32/Packages_Patches/STM32/hardware/stm32/2.1.0/variants/STM32F7xx/F765Z(G-I)T_F767Z(G-I)T_F777ZIT/variant_NUCLEO_F767ZI.h"
  "${CMAKE_CURRENT_LIST_DIR}/AsyncDNSServer_STM32/Packages_Patches/STM32/hardware/stm32/2.1.0/variants/STM32L0xx/L052R(6-8)T_L053R(6-8)T_L063R8T/variant_generic.h"
  "${CMAKE_CURRENT_LIST_DIR}/AsyncDNSServer_STM32/Packages_Patches/STM32/hardware/stm32/2.1.0/system/STM32F7xx/stm32f7xx_hal_conf_default.h"
  "${CMAKE_CURRENT_LIST_DIR}/AsyncDNSServer_STM32/Packages_Patches/STM32/hardware/stm32/2.1.0/system/STM32F4xx/stm32f4xx_hal_conf_default.h"
  "${CMAKE_CURRENT_LIST_DIR}/AsyncDNSServer_STM32/Packages_Patches/STM32/hardware/stm32/2.0.0/variants/L052R(6-8)H_L053R(6-8)H/variant_generic.h"
  "${CMAKE_CURRENT_LIST_DIR}/AsyncDNSServer_STM32/Packages_Patches/STM32/hardware/stm32/2.0.0/variants/F765Z(G-I)T_F767Z(G-I)T_F777ZIT/variant_NUCLEO_F767ZI.h"
  "${CMAKE_CURRENT_LIST_DIR}/AsyncDNSServer_STM32/Packages_Patches/STM32/hardware/stm32/2.0.0/system/STM32F7xx/stm32f7xx_hal_conf_default.h"
  "${CMAKE_CURRENT_LIST_DIR}/AsyncDNSServer_STM32/Packages_Patches/STM32/hardware/stm32/2.0.0/system/STM32F4xx/stm32f4xx_hal_conf_default.h"
  "${CMAKE_CURRENT_LIST_DIR}/AsyncDNSServer_STM32/src/AsyncDNSServer_Impl_STM32.h"
  "${CMAKE_CURRENT_LIST_DIR}/AsyncDNSServer_STM32/src/AsyncDNSServer_Debug_STM32.h"
  "${CMAKE_CURRENT_LIST_DIR}/AsyncDNSServer_STM32/src/AsyncDNSServer_STM32.h"
  "${CMAKE_CURRENT_LIST_DIR}/AsyncDNSServer_STM32/examples/AsyncCaptivePortal_STM32_LAN8720/hal_conf_extra.h"
  "${CMAKE_CURRENT_LIST_DIR}/AsyncDNSServer_STM32/examples/AsyncCaptivePortal_STM32_LAN8720/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/AsyncDNSServer_STM32/examples/AsyncCaptivePortalAdvanced_STM32_LAN8720/hal_conf_extra.h"
  "${CMAKE_CURRENT_LIST_DIR}/AsyncDNSServer_STM32/examples/AsyncCaptivePortalAdvanced_STM32_LAN8720/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/AsyncDNSServer_STM32/examples/AsyncDNServerFull_STM32_LAN8720/hal_conf_extra.h"
  "${CMAKE_CURRENT_LIST_DIR}/AsyncDNSServer_STM32/examples/AsyncDNServerFull_STM32_LAN8720/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/AsyncDNSServer_STM32/examples/AsyncDNSServer_STM32/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/AsyncDNSServer_STM32/examples/AsyncDNSServer_STM32_LAN8720/hal_conf_extra.h"
  "${CMAKE_CURRENT_LIST_DIR}/AsyncDNSServer_STM32/examples/AsyncDNSServer_STM32_LAN8720/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/AsyncDNSServer_STM32/examples/AsyncCaptivePortalAdvanced_STM32/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/AsyncDNSServer_STM32/examples/AsyncCaptivePortal_STM32/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/AsyncDNSServer_STM32/examples/AsyncDNServerFull_STM32/defines.h"
)

target_include_directories(asyncdnsserver_stm32 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/AsyncDNSServer_STM32/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(asyncdnsserver_stm32 INTERFACE
    arduino-compat
)
