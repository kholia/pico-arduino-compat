add_library(wio-lte-for-arduino INTERFACE)

target_sources(wio-lte-for-arduino INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/WioLTEforArduino/src/WioLTE.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/WioLTEforArduino/src/WioLTEHardware.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/WioLTEforArduino/src/WioLTEClient.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/WioLTEforArduino/src/Internal/WioSK6812.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/WioLTEforArduino/src/Internal/ArgumentParser.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/WioLTEforArduino/src/Internal/StringBuilder.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/WioLTEforArduino/src/Internal/AtSerial.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/WioLTEforArduino/src/Internal/Debug.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/WioLTEforArduino/src/Internal/slre.901d42c/slre.c"
  "${CMAKE_CURRENT_LIST_DIR}/WioLTEforArduino/src/WioLTEConfig.h"
  "${CMAKE_CURRENT_LIST_DIR}/WioLTEforArduino/src/WioLTE.h"
  "${CMAKE_CURRENT_LIST_DIR}/WioLTEforArduino/src/WioLTEHardwarePin.h"
  "${CMAKE_CURRENT_LIST_DIR}/WioLTEforArduino/src/WioLTEHardware.h"
  "${CMAKE_CURRENT_LIST_DIR}/WioLTEforArduino/src/WioLTEClient.h"
  "${CMAKE_CURRENT_LIST_DIR}/WioLTEforArduino/src/WioLTEHttpHeader.h"
  "${CMAKE_CURRENT_LIST_DIR}/WioLTEforArduino/src/WioLTEforArduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/WioLTEforArduino/src/Internal/WioSK6812.h"
  "${CMAKE_CURRENT_LIST_DIR}/WioLTEforArduino/src/Internal/SerialAPI.h"
  "${CMAKE_CURRENT_LIST_DIR}/WioLTEforArduino/src/Internal/Debug.h"
  "${CMAKE_CURRENT_LIST_DIR}/WioLTEforArduino/src/Internal/StringBuilder.h"
  "${CMAKE_CURRENT_LIST_DIR}/WioLTEforArduino/src/Internal/AtSerial.h"
  "${CMAKE_CURRENT_LIST_DIR}/WioLTEforArduino/src/Internal/Stopwatch.h"
  "${CMAKE_CURRENT_LIST_DIR}/WioLTEforArduino/src/Internal/ArgumentParser.h"
  "${CMAKE_CURRENT_LIST_DIR}/WioLTEforArduino/src/Internal/slre.901d42c/slre.h"
  "${CMAKE_CURRENT_LIST_DIR}/WioLTEforArduino/src/Internal/CMSIS/cmsis_gcc.h"
  "${CMAKE_CURRENT_LIST_DIR}/WioLTEforArduino/src/Internal/CMSIS/core_cm4.h"
)

target_include_directories(wio-lte-for-arduino INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/WioLTEforArduino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(wio-lte-for-arduino INTERFACE
    arduino-compat
)
