add_library(pac-barebonesim800 INTERFACE)

target_sources(pac-barebonesim800 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/BareBoneSim800/AltSoftSerial.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/BareBoneSim800/BareBoneSim800.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/BareBoneSim800/AltSoftSerial.h"
  "${CMAKE_CURRENT_LIST_DIR}/BareBoneSim800/BareBoneSim800.h"
  "${CMAKE_CURRENT_LIST_DIR}/BareBoneSim800/config/AltSoftSerial_Boards.h"
  "${CMAKE_CURRENT_LIST_DIR}/BareBoneSim800/config/AltSoftSerial_Timers.h"
)

target_include_directories(pac-barebonesim800 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/BareBoneSim800"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-barebonesim800 INTERFACE
    arduino-compat
)
