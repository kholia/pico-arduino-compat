add_library(pac-wio-3g-for-arduino INTERFACE)

target_sources(pac-wio-3g-for-arduino INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Wio_3G_for_Arduino/src/Wio3GClient.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Wio_3G_for_Arduino/src/Wio3GHardware.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Wio_3G_for_Arduino/src/Wio3G.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Wio_3G_for_Arduino/src/Internal/ArgumentParser.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Wio_3G_for_Arduino/src/Internal/StringBuilder.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Wio_3G_for_Arduino/src/Internal/AtSerial.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Wio_3G_for_Arduino/src/Internal/Debug.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Wio_3G_for_Arduino/src/Internal/Wio3GSK6812.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Wio_3G_for_Arduino/src/Internal/slre.901d42c/slre.c"
  "${CMAKE_CURRENT_LIST_DIR}/Wio_3G_for_Arduino/src/Wio3GforArduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/Wio_3G_for_Arduino/src/Wio3GHardware.h"
  "${CMAKE_CURRENT_LIST_DIR}/Wio_3G_for_Arduino/src/Wio3GClient.h"
  "${CMAKE_CURRENT_LIST_DIR}/Wio_3G_for_Arduino/src/Wio3G.h"
  "${CMAKE_CURRENT_LIST_DIR}/Wio_3G_for_Arduino/src/Wio3GConfig.h"
  "${CMAKE_CURRENT_LIST_DIR}/Wio_3G_for_Arduino/src/Internal/SerialAPI.h"
  "${CMAKE_CURRENT_LIST_DIR}/Wio_3G_for_Arduino/src/Internal/Debug.h"
  "${CMAKE_CURRENT_LIST_DIR}/Wio_3G_for_Arduino/src/Internal/StringBuilder.h"
  "${CMAKE_CURRENT_LIST_DIR}/Wio_3G_for_Arduino/src/Internal/Wio3GSK6812.h"
  "${CMAKE_CURRENT_LIST_DIR}/Wio_3G_for_Arduino/src/Internal/AtSerial.h"
  "${CMAKE_CURRENT_LIST_DIR}/Wio_3G_for_Arduino/src/Internal/Stopwatch.h"
  "${CMAKE_CURRENT_LIST_DIR}/Wio_3G_for_Arduino/src/Internal/ArgumentParser.h"
  "${CMAKE_CURRENT_LIST_DIR}/Wio_3G_for_Arduino/src/Internal/slre.901d42c/slre.h"
)

target_include_directories(pac-wio-3g-for-arduino INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Wio_3G_for_Arduino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-wio-3g-for-arduino INTERFACE
    arduino-compat
)
