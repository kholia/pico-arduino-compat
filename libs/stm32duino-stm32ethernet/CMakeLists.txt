add_library(pac-stm32duino-stm32ethernet INTERFACE)

target_sources(pac-stm32duino-stm32ethernet INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/STM32Ethernet/src/EthernetClient.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/STM32Ethernet/src/STM32Ethernet.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/STM32Ethernet/src/EthernetUdp.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/STM32Ethernet/src/Dhcp.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/STM32Ethernet/src/EthernetServer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/STM32Ethernet/src/Dns.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/STM32Ethernet/src/utility/stm32_eth.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/STM32Ethernet/src/utility/ethernetif.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/STM32Ethernet/src/Dhcp.h"
  "${CMAKE_CURRENT_LIST_DIR}/STM32Ethernet/src/EthernetUdp.h"
  "${CMAKE_CURRENT_LIST_DIR}/STM32Ethernet/src/lwipopts.h"
  "${CMAKE_CURRENT_LIST_DIR}/STM32Ethernet/src/Dns.h"
  "${CMAKE_CURRENT_LIST_DIR}/STM32Ethernet/src/EthernetClient.h"
  "${CMAKE_CURRENT_LIST_DIR}/STM32Ethernet/src/lwipopts_default.h"
  "${CMAKE_CURRENT_LIST_DIR}/STM32Ethernet/src/STM32Ethernet.h"
  "${CMAKE_CURRENT_LIST_DIR}/STM32Ethernet/src/EthernetServer.h"
  "${CMAKE_CURRENT_LIST_DIR}/STM32Ethernet/src/utility/ethernetif.h"
  "${CMAKE_CURRENT_LIST_DIR}/STM32Ethernet/src/utility/stm32_eth.h"
)

target_include_directories(pac-stm32duino-stm32ethernet INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/STM32Ethernet/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-stm32duino-stm32ethernet INTERFACE
    arduino-compat
)
