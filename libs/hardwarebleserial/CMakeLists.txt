add_library(pac-hardwarebleserial INTERFACE)

target_sources(pac-hardwarebleserial INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-HardwareBLESerial/src/HardwareBLESerial.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-HardwareBLESerial/src/HardwareBLESerial.h"
)

target_include_directories(pac-hardwarebleserial INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino-HardwareBLESerial/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-hardwarebleserial INTERFACE
    arduino-compat
)
