add_library(107-arduino-nmea-parser INTERFACE)

target_sources(107-arduino-nmea-parser INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/107-Arduino-NMEA-Parser/extras/test/src/test_checksum.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/107-Arduino-NMEA-Parser/extras/test/src/test_Types.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/107-Arduino-NMEA-Parser/extras/test/src/test_rmc.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/107-Arduino-NMEA-Parser/extras/test/src/test_GxRMC.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/107-Arduino-NMEA-Parser/extras/test/src/test_GxGGA.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/107-Arduino-NMEA-Parser/extras/test/src/test_ArduinoNmeaParser.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/107-Arduino-NMEA-Parser/extras/test/src/test_gga.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/107-Arduino-NMEA-Parser/extras/test/src/test_main.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/107-Arduino-NMEA-Parser/extras/test/src/ArduinoNmeaParser/test_OnGgaUpdateFunc.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/107-Arduino-NMEA-Parser/extras/test/src/ArduinoNmeaParser/test_OnRmcUpdateFunc.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/107-Arduino-NMEA-Parser/src/ArduinoNmeaParser.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/107-Arduino-NMEA-Parser/src/nmea/GxGGA.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/107-Arduino-NMEA-Parser/src/nmea/GxRMC.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/107-Arduino-NMEA-Parser/src/nmea/Types.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/107-Arduino-NMEA-Parser/src/nmea/util/rmc.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/107-Arduino-NMEA-Parser/src/nmea/util/gga.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/107-Arduino-NMEA-Parser/src/nmea/util/common.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/107-Arduino-NMEA-Parser/src/nmea/util/checksum.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/107-Arduino-NMEA-Parser/extras/test/external/catch/v2.12.1/include/catch.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/107-Arduino-NMEA-Parser/src/nmea/util/timegm.c"
  "${CMAKE_CURRENT_LIST_DIR}/107-Arduino-NMEA-Parser/src/ArduinoNmeaParser.h"
  "${CMAKE_CURRENT_LIST_DIR}/107-Arduino-NMEA-Parser/src/nmea/Types.h"
  "${CMAKE_CURRENT_LIST_DIR}/107-Arduino-NMEA-Parser/src/nmea/GxRMC.h"
  "${CMAKE_CURRENT_LIST_DIR}/107-Arduino-NMEA-Parser/src/nmea/GxGGA.h"
  "${CMAKE_CURRENT_LIST_DIR}/107-Arduino-NMEA-Parser/src/nmea/util/rmc.h"
  "${CMAKE_CURRENT_LIST_DIR}/107-Arduino-NMEA-Parser/src/nmea/util/checksum.h"
  "${CMAKE_CURRENT_LIST_DIR}/107-Arduino-NMEA-Parser/src/nmea/util/common.h"
  "${CMAKE_CURRENT_LIST_DIR}/107-Arduino-NMEA-Parser/src/nmea/util/gga.h"
)

target_include_directories(107-arduino-nmea-parser INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/107-Arduino-NMEA-Parser/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(107-arduino-nmea-parser INTERFACE
    arduino-compat
)
