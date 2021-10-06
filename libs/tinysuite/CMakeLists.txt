add_library(tinysuite INTERFACE)

target_sources(tinysuite INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TinySuite/src/TinyPinChangeB.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TinySuite/src/TinyUart.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TinySuite/src/TinyTimer1Compare.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TinySuite/src/TinyNmea.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TinySuite/src/TinySerial.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TinySuite/src/TinyUartWriter.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TinySuite/src/TinyBuffer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TinySuite/src/TinyWatchdog.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TinySuite/src/TinyTimer1Overflow.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TinySuite/src/TinyPinChange.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TinySuite/src/TinyUartBase.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TinySuite/src/TinyTimer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TinySuite/src/TinyTimer0Overflow.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TinySuite/src/TinyTimer0Compare.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TinySuite/src/TinyUartReader.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TinySuite/src/TinyTimer0Overflow.h"
  "${CMAKE_CURRENT_LIST_DIR}/TinySuite/src/TinyNmea.h"
  "${CMAKE_CURRENT_LIST_DIR}/TinySuite/src/TinyUartReader.h"
  "${CMAKE_CURRENT_LIST_DIR}/TinySuite/src/TinySerial.h"
  "${CMAKE_CURRENT_LIST_DIR}/TinySuite/src/TinyPinChangeB.h"
  "${CMAKE_CURRENT_LIST_DIR}/TinySuite/src/TinySleep.h"
  "${CMAKE_CURRENT_LIST_DIR}/TinySuite/src/TinyTimer1Overflow.h"
  "${CMAKE_CURRENT_LIST_DIR}/TinySuite/src/TinyUartConst.h"
  "${CMAKE_CURRENT_LIST_DIR}/TinySuite/src/TinyWatchdog.h"
  "${CMAKE_CURRENT_LIST_DIR}/TinySuite/src/TinyTimer.h"
  "${CMAKE_CURRENT_LIST_DIR}/TinySuite/src/TinyUartWriter.h"
  "${CMAKE_CURRENT_LIST_DIR}/TinySuite/src/TinyBuffer.h"
  "${CMAKE_CURRENT_LIST_DIR}/TinySuite/src/TinyTimer1Compare.h"
  "${CMAKE_CURRENT_LIST_DIR}/TinySuite/src/TinyUart.h"
  "${CMAKE_CURRENT_LIST_DIR}/TinySuite/src/TinyTimer0Compare.h"
  "${CMAKE_CURRENT_LIST_DIR}/TinySuite/src/TinyPinChange.h"
  "${CMAKE_CURRENT_LIST_DIR}/TinySuite/src/TinyUartBase.h"
  "${CMAKE_CURRENT_LIST_DIR}/TinySuite/src/TinyBufferConst.h"
  "${CMAKE_CURRENT_LIST_DIR}/TinySuite/src/TinyNmeaConst.h"
)

target_include_directories(tinysuite INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TinySuite/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(tinysuite INTERFACE
    arduino-compat
)
