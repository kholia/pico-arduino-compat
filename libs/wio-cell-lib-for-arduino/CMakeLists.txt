add_library(pac-wio-cell-lib-for-arduino INTERFACE)

target_sources(pac-wio-cell-lib-for-arduino INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Wio_cell_lib_for_Arduino/src/WioCellularClient.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Wio_cell_lib_for_Arduino/src/WioCellularHardware.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Wio_cell_lib_for_Arduino/src/WioCellular.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Wio_cell_lib_for_Arduino/src/Internal/WioSK6812.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Wio_cell_lib_for_Arduino/src/Internal/ArgumentParser.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Wio_cell_lib_for_Arduino/src/Internal/StringBuilder.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Wio_cell_lib_for_Arduino/src/Internal/AtSerial.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Wio_cell_lib_for_Arduino/src/Internal/Debug.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Wio_cell_lib_for_Arduino/src/Internal/slre.901d42c/slre.c"
  "${CMAKE_CURRENT_LIST_DIR}/Wio_cell_lib_for_Arduino/src/WioCellLibforArduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/Wio_cell_lib_for_Arduino/src/WioCellularClient.h"
  "${CMAKE_CURRENT_LIST_DIR}/Wio_cell_lib_for_Arduino/src/WioCellularHttpHeader.h"
  "${CMAKE_CURRENT_LIST_DIR}/Wio_cell_lib_for_Arduino/src/WioCellularHardware.h"
  "${CMAKE_CURRENT_LIST_DIR}/Wio_cell_lib_for_Arduino/src/WioCellularConfig.h"
  "${CMAKE_CURRENT_LIST_DIR}/Wio_cell_lib_for_Arduino/src/WioCellular.h"
  "${CMAKE_CURRENT_LIST_DIR}/Wio_cell_lib_for_Arduino/src/Internal/WioSK6812.h"
  "${CMAKE_CURRENT_LIST_DIR}/Wio_cell_lib_for_Arduino/src/Internal/SerialAPI.h"
  "${CMAKE_CURRENT_LIST_DIR}/Wio_cell_lib_for_Arduino/src/Internal/Debug.h"
  "${CMAKE_CURRENT_LIST_DIR}/Wio_cell_lib_for_Arduino/src/Internal/StringBuilder.h"
  "${CMAKE_CURRENT_LIST_DIR}/Wio_cell_lib_for_Arduino/src/Internal/AtSerial.h"
  "${CMAKE_CURRENT_LIST_DIR}/Wio_cell_lib_for_Arduino/src/Internal/Stopwatch.h"
  "${CMAKE_CURRENT_LIST_DIR}/Wio_cell_lib_for_Arduino/src/Internal/ArgumentParser.h"
  "${CMAKE_CURRENT_LIST_DIR}/Wio_cell_lib_for_Arduino/src/Internal/slre.901d42c/slre.h"
)

target_include_directories(pac-wio-cell-lib-for-arduino INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Wio_cell_lib_for_Arduino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-wio-cell-lib-for-arduino INTERFACE
    arduino-compat
)
