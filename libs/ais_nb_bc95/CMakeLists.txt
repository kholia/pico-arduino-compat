add_library(ais_nb_bc95 INTERFACE)

target_sources(ais_nb_bc95 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/AIS_NB_BC95/src/AltSoftSerial.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AIS_NB_BC95/src/AIS_NB_BC95.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AIS_NB_BC95/src/AltSoftSerial.h"
  "${CMAKE_CURRENT_LIST_DIR}/AIS_NB_BC95/src/AIS_NB_BC95.h"
  "${CMAKE_CURRENT_LIST_DIR}/AIS_NB_BC95/src/config/AltSoftSerial_Boards.h"
  "${CMAKE_CURRENT_LIST_DIR}/AIS_NB_BC95/src/config/AltSoftSerial_Timers.h"
)

target_include_directories(ais_nb_bc95 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/AIS_NB_BC95/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(ais_nb_bc95 INTERFACE
    arduino-compat
)
