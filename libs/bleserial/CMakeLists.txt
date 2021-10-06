add_library(bleserial INTERFACE)

target_sources(bleserial INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/BLESerial/src/BLESerial.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/BLESerial/src/BLESerial.h"
  "${CMAKE_CURRENT_LIST_DIR}/BLESerial/src/utility/BLEConstants.h"
)

target_include_directories(bleserial INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/BLESerial/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(bleserial INTERFACE
    arduino-compat
)
