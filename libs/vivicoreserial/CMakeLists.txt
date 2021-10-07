add_library(pac-vivicoreserial INTERFACE)

target_sources(pac-vivicoreserial INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/VivicoreSerial/VivicoreSerialDataCode.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/VivicoreSerial/VivicoreSerial.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/VivicoreSerial/VivicoreSerialDataCode.h"
  "${CMAKE_CURRENT_LIST_DIR}/VivicoreSerial/VivicoreSerialVersion.h"
  "${CMAKE_CURRENT_LIST_DIR}/VivicoreSerial/VivicoreSerialDebug.h"
  "${CMAKE_CURRENT_LIST_DIR}/VivicoreSerial/VivicoreSerial.h"
  "${CMAKE_CURRENT_LIST_DIR}/VivicoreSerial/CommunicationProtocol.h"
  "${CMAKE_CURRENT_LIST_DIR}/VivicoreSerial/examples/09_message_board/31FL3731regs.h"
)

target_include_directories(pac-vivicoreserial INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/VivicoreSerial"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-vivicoreserial INTERFACE
    arduino-compat
)
