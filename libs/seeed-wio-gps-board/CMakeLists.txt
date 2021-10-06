add_library(seeed-wio-gps-board INTERFACE)

target_sources(seeed-wio-gps-board INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Wio_GPS_Board/MC20_GPRS.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Wio_GPS_Board/MC20_Common.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Wio_GPS_Board/MC20_BT.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Wio_GPS_Board/MC20_GNSS.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Wio_GPS_Board/MC20_Arduino_Interface.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Wio_GPS_Board/MC20_BT.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Wio_GPS_Board/MC20_GNSS.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Wio_GPS_Board/MC20_Common.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Wio_GPS_Board/MC20_GPRS.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Wio_GPS_Board/MC20_Arduino_Interface.h"
)

target_include_directories(seeed-wio-gps-board INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Seeed_Wio_GPS_Board"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(seeed-wio-gps-board INTERFACE
    arduino-compat
)
