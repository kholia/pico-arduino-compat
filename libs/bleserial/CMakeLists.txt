add_library(pac-bleserial INTERFACE)

target_sources(pac-bleserial INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/BLESerial/src/BLESerial.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/BLESerial/src/BLESerial.h"
  "${CMAKE_CURRENT_LIST_DIR}/BLESerial/src/utility/BLEConstants.h"
)

target_include_directories(pac-bleserial INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/BLESerial/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-bleserial INTERFACE
    arduino-compat
)
