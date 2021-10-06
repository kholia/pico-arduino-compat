add_library(altsoftserial INTERFACE)

target_sources(altsoftserial INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/AltSoftSerial/AltSoftSerial.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AltSoftSerial/AltSoftSerial.h"
  "${CMAKE_CURRENT_LIST_DIR}/AltSoftSerial/config/AltSoftSerial_Boards.h"
  "${CMAKE_CURRENT_LIST_DIR}/AltSoftSerial/config/AltSoftSerial_Timers.h"
)

target_include_directories(altsoftserial INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/AltSoftSerial"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(altsoftserial INTERFACE
    arduino-compat
)
