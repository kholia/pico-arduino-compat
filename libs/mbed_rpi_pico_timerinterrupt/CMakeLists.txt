add_library(mbed_rpi_pico_timerinterrupt INTERFACE)

target_sources(mbed_rpi_pico_timerinterrupt INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MBED_RPI_PICO_TimerInterrupt/src_cpp/MBED_RPi_Pico_ISR_Timer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MBED_RPI_PICO_TimerInterrupt/src_cpp/MBED_RPi_Pico_TimerInterrupt.h"
  "${CMAKE_CURRENT_LIST_DIR}/MBED_RPI_PICO_TimerInterrupt/src_cpp/TimerInterrupt_Generic_Debug.h"
  "${CMAKE_CURRENT_LIST_DIR}/MBED_RPI_PICO_TimerInterrupt/src_cpp/MBED_RPi_Pico_ISR_Timer.h"
  "${CMAKE_CURRENT_LIST_DIR}/MBED_RPI_PICO_TimerInterrupt/src/MBED_RPi_Pico_TimerInterrupt.h"
  "${CMAKE_CURRENT_LIST_DIR}/MBED_RPI_PICO_TimerInterrupt/src/TimerInterrupt_Generic_Debug.h"
  "${CMAKE_CURRENT_LIST_DIR}/MBED_RPI_PICO_TimerInterrupt/src/MBED_RPi_Pico_ISR_Timer.h"
  "${CMAKE_CURRENT_LIST_DIR}/MBED_RPI_PICO_TimerInterrupt/src/MBED_RPi_Pico_ISR_Timer-Impl.h"
  "${CMAKE_CURRENT_LIST_DIR}/MBED_RPI_PICO_TimerInterrupt/src_h/MBED_RPi_Pico_TimerInterrupt.h"
  "${CMAKE_CURRENT_LIST_DIR}/MBED_RPI_PICO_TimerInterrupt/src_h/TimerInterrupt_Generic_Debug.h"
  "${CMAKE_CURRENT_LIST_DIR}/MBED_RPI_PICO_TimerInterrupt/src_h/MBED_RPi_Pico_ISR_Timer.h"
  "${CMAKE_CURRENT_LIST_DIR}/MBED_RPI_PICO_TimerInterrupt/src_h/MBED_RPi_Pico_ISR_Timer-Impl.h"
)

target_include_directories(mbed_rpi_pico_timerinterrupt INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MBED_RPI_PICO_TimerInterrupt/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(mbed_rpi_pico_timerinterrupt INTERFACE
    arduino-compat
)
