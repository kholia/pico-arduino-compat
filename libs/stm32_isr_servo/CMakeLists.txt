add_library(pac-stm32_isr_servo INTERFACE)

target_sources(pac-stm32_isr_servo INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/STM32_ISR_Servo/src/STM32_ISR_Servo.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/STM32_ISR_Servo/Packages_Patches/STM32/hardware/stm32/1.9.0/variants/NUCLEO_L053R8/variant.h"
  "${CMAKE_CURRENT_LIST_DIR}/STM32_ISR_Servo/Packages_Patches/STM32/hardware/stm32/1.9.0/variants/NUCLEO_F767ZI/variant.h"
  "${CMAKE_CURRENT_LIST_DIR}/STM32_ISR_Servo/Packages_Patches/STM32/hardware/stm32/1.9.0/system/STM32F7xx/stm32f7xx_hal_conf_default.h"
  "${CMAKE_CURRENT_LIST_DIR}/STM32_ISR_Servo/Packages_Patches/STM32/hardware/stm32/1.9.0/system/STM32F4xx/stm32f4xx_hal_conf_default.h"
  "${CMAKE_CURRENT_LIST_DIR}/STM32_ISR_Servo/Packages_Patches/STM32/hardware/stm32/2.1.0/variants/STM32F7xx/F765Z(G-I)T_F767Z(G-I)T_F777ZIT/variant_NUCLEO_F767ZI.h"
  "${CMAKE_CURRENT_LIST_DIR}/STM32_ISR_Servo/Packages_Patches/STM32/hardware/stm32/2.1.0/variants/STM32L0xx/L052R(6-8)T_L053R(6-8)T_L063R8T/variant_generic.h"
  "${CMAKE_CURRENT_LIST_DIR}/STM32_ISR_Servo/Packages_Patches/STM32/hardware/stm32/2.1.0/system/STM32F7xx/stm32f7xx_hal_conf_default.h"
  "${CMAKE_CURRENT_LIST_DIR}/STM32_ISR_Servo/Packages_Patches/STM32/hardware/stm32/2.1.0/system/STM32F4xx/stm32f4xx_hal_conf_default.h"
  "${CMAKE_CURRENT_LIST_DIR}/STM32_ISR_Servo/Packages_Patches/STM32/hardware/stm32/2.0.0/variants/L052R(6-8)H_L053R(6-8)H/variant_generic.h"
  "${CMAKE_CURRENT_LIST_DIR}/STM32_ISR_Servo/Packages_Patches/STM32/hardware/stm32/2.0.0/variants/F765Z(G-I)T_F767Z(G-I)T_F777ZIT/variant_NUCLEO_F767ZI.h"
  "${CMAKE_CURRENT_LIST_DIR}/STM32_ISR_Servo/Packages_Patches/STM32/hardware/stm32/2.0.0/system/STM32F7xx/stm32f7xx_hal_conf_default.h"
  "${CMAKE_CURRENT_LIST_DIR}/STM32_ISR_Servo/Packages_Patches/STM32/hardware/stm32/2.0.0/system/STM32F4xx/stm32f4xx_hal_conf_default.h"
  "${CMAKE_CURRENT_LIST_DIR}/STM32_ISR_Servo/src/STM32_ISR_Servo.h"
  "${CMAKE_CURRENT_LIST_DIR}/STM32_ISR_Servo/src/STM32_FastTimerInterrupt.h"
  "${CMAKE_CURRENT_LIST_DIR}/STM32_ISR_Servo/src/STM32_ISR_Servo_Debug.h"
)

target_include_directories(pac-stm32_isr_servo INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/STM32_ISR_Servo/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-stm32_isr_servo INTERFACE
    arduino-compat
)
