add_library(asyncudp_stm32 INTERFACE)

target_sources(asyncudp_stm32 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/AsyncUDP_STM32/Packages_Patches/STM32/hardware/stm32/1.9.0/variants/NUCLEO_L053R8/variant.h"
  "${CMAKE_CURRENT_LIST_DIR}/AsyncUDP_STM32/Packages_Patches/STM32/hardware/stm32/1.9.0/variants/NUCLEO_F767ZI/variant.h"
  "${CMAKE_CURRENT_LIST_DIR}/AsyncUDP_STM32/Packages_Patches/STM32/hardware/stm32/1.9.0/system/STM32F7xx/stm32f7xx_hal_conf_default.h"
  "${CMAKE_CURRENT_LIST_DIR}/AsyncUDP_STM32/Packages_Patches/STM32/hardware/stm32/1.9.0/system/STM32F4xx/stm32f4xx_hal_conf_default.h"
  "${CMAKE_CURRENT_LIST_DIR}/AsyncUDP_STM32/Packages_Patches/STM32/hardware/stm32/2.1.0/variants/STM32F7xx/F765Z(G-I)T_F767Z(G-I)T_F777ZIT/variant_NUCLEO_F767ZI.h"
  "${CMAKE_CURRENT_LIST_DIR}/AsyncUDP_STM32/Packages_Patches/STM32/hardware/stm32/2.1.0/variants/STM32L0xx/L052R(6-8)T_L053R(6-8)T_L063R8T/variant_generic.h"
  "${CMAKE_CURRENT_LIST_DIR}/AsyncUDP_STM32/Packages_Patches/STM32/hardware/stm32/2.1.0/system/STM32F7xx/stm32f7xx_hal_conf_default.h"
  "${CMAKE_CURRENT_LIST_DIR}/AsyncUDP_STM32/Packages_Patches/STM32/hardware/stm32/2.1.0/system/STM32F4xx/stm32f4xx_hal_conf_default.h"
  "${CMAKE_CURRENT_LIST_DIR}/AsyncUDP_STM32/Packages_Patches/STM32/hardware/stm32/2.0.0/variants/L052R(6-8)H_L053R(6-8)H/variant_generic.h"
  "${CMAKE_CURRENT_LIST_DIR}/AsyncUDP_STM32/Packages_Patches/STM32/hardware/stm32/2.0.0/variants/F765Z(G-I)T_F767Z(G-I)T_F777ZIT/variant_NUCLEO_F767ZI.h"
  "${CMAKE_CURRENT_LIST_DIR}/AsyncUDP_STM32/Packages_Patches/STM32/hardware/stm32/2.0.0/system/STM32F7xx/stm32f7xx_hal_conf_default.h"
  "${CMAKE_CURRENT_LIST_DIR}/AsyncUDP_STM32/Packages_Patches/STM32/hardware/stm32/2.0.0/system/STM32F4xx/stm32f4xx_hal_conf_default.h"
  "${CMAKE_CURRENT_LIST_DIR}/AsyncUDP_STM32/src/AsyncUDP_STM32.h"
  "${CMAKE_CURRENT_LIST_DIR}/AsyncUDP_STM32/src/AsyncUDP_Impl_STM32.h"
  "${CMAKE_CURRENT_LIST_DIR}/AsyncUDP_STM32/src/AsyncUDP_Debug_STM32.h"
  "${CMAKE_CURRENT_LIST_DIR}/AsyncUDP_STM32/examples/AsyncUdpNTPClient_LAN8720/hal_conf_extra.h"
  "${CMAKE_CURRENT_LIST_DIR}/AsyncUDP_STM32/examples/AsyncUdpNTPClient_LAN8720/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/AsyncUDP_STM32/examples/AsyncUDPMulticastServer_LAN8720/hal_conf_extra.h"
  "${CMAKE_CURRENT_LIST_DIR}/AsyncUDP_STM32/examples/AsyncUDPServer_LAN8720/hal_conf_extra.h"
  "${CMAKE_CURRENT_LIST_DIR}/AsyncUDP_STM32/examples/AsyncUdpSendReceive_LAN8720/hal_conf_extra.h"
  "${CMAKE_CURRENT_LIST_DIR}/AsyncUDP_STM32/examples/AsyncUdpSendReceive_LAN8720/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/AsyncUDP_STM32/examples/AsyncUdpNTPClient/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/AsyncUDP_STM32/examples/AsyncUdpSendReceive/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/AsyncUDP_STM32/examples/AsyncUDPClient_LAN8720/hal_conf_extra.h"
)

target_include_directories(asyncudp_stm32 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/AsyncUDP_STM32/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(asyncudp_stm32 INTERFACE
    arduino-compat
)
