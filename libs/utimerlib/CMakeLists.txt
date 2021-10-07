add_library(pac-utimerlib INTERFACE)

target_sources(pac-utimerlib INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/uTimerLib/src/uTimerLib.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/uTimerLib/src/hardware/uTimerLib.ATTINY.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/uTimerLib/src/hardware/uTimerLib.STM32.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/uTimerLib/src/hardware/uTimerLib.SAMD51.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/uTimerLib/src/hardware/uTimerLib.AVR.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/uTimerLib/src/hardware/uTimerLib.SAM.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/uTimerLib/src/hardware/uTimerLib.ESP8266.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/uTimerLib/src/hardware/uTimerLib.DIGISPARK_AVR.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/uTimerLib/src/hardware/uTimerLib.ESP32.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/uTimerLib/src/hardware/uTimerLib.SAMD21.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/uTimerLib/src/hardware/uTimerLib.UNSUPPORTED.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/uTimerLib/src/uTimerLib.h"
)

target_include_directories(pac-utimerlib INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/uTimerLib/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-utimerlib INTERFACE
    arduino-compat
)
