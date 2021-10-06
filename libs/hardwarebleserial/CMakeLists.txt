add_library(hardwarebleserial INTERFACE)

target_sources(hardwarebleserial INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-HardwareBLESerial/src/HardwareBLESerial.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-HardwareBLESerial/src/HardwareBLESerial.h"
)

target_include_directories(hardwarebleserial INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino-HardwareBLESerial/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(hardwarebleserial INTERFACE
    arduino-compat
)
