add_library(pac-rpi_pico_timerinterrupt INTERFACE)

target_sources(pac-rpi_pico_timerinterrupt INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/RPI_PICO_TimerInterrupt/src_cpp/RPi_Pico_ISR_Timer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RPI_PICO_TimerInterrupt/src_cpp/TimerInterrupt_Generic_Debug.h"
  "${CMAKE_CURRENT_LIST_DIR}/RPI_PICO_TimerInterrupt/src_cpp/RPi_Pico_ISR_Timer.h"
  "${CMAKE_CURRENT_LIST_DIR}/RPI_PICO_TimerInterrupt/src_cpp/RPi_Pico_TimerInterrupt.h"
  "${CMAKE_CURRENT_LIST_DIR}/RPI_PICO_TimerInterrupt/Packages_Patches/rp2040/hardware/rp2040/1.4.0/cores/rp2040/Arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/RPI_PICO_TimerInterrupt/Packages_Patches/rp2040/hardware/rp2040/1.3.1/cores/rp2040/Arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/RPI_PICO_TimerInterrupt/src/RPi_Pico_ISR_Timer-Impl.h"
  "${CMAKE_CURRENT_LIST_DIR}/RPI_PICO_TimerInterrupt/src/TimerInterrupt_Generic_Debug.h"
  "${CMAKE_CURRENT_LIST_DIR}/RPI_PICO_TimerInterrupt/src/RPi_Pico_ISR_Timer.h"
  "${CMAKE_CURRENT_LIST_DIR}/RPI_PICO_TimerInterrupt/src/RPi_Pico_TimerInterrupt.h"
  "${CMAKE_CURRENT_LIST_DIR}/RPI_PICO_TimerInterrupt/src_h/RPi_Pico_ISR_Timer-Impl.h"
  "${CMAKE_CURRENT_LIST_DIR}/RPI_PICO_TimerInterrupt/src_h/TimerInterrupt_Generic_Debug.h"
  "${CMAKE_CURRENT_LIST_DIR}/RPI_PICO_TimerInterrupt/src_h/RPi_Pico_ISR_Timer.h"
  "${CMAKE_CURRENT_LIST_DIR}/RPI_PICO_TimerInterrupt/src_h/RPi_Pico_TimerInterrupt.h"
)

target_include_directories(pac-rpi_pico_timerinterrupt INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/RPI_PICO_TimerInterrupt/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-rpi_pico_timerinterrupt INTERFACE
    arduino-compat
)
