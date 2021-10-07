add_library(pac-atmel-tss463c-van-bus-datalink-controller-library INTERFACE)

target_sources(pac-atmel-tss463c-van-bus-datalink-controller-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduino_tss463_van/src/tss463.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino_tss463_van/src/tss46x_van.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino_tss463_van/src/tss46x_with_serial.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino_tss463_van/src/tss461_intel.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino_tss463_van/examples/tss461_with_mcp23s17_van_monitor/tss461_with_mcp23s17_intel.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino_tss463_van/src/itss46x.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino_tss463_van/src/tss461_intel.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino_tss463_van/src/tss46x_with_serial.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino_tss463_van/src/tss46x_definitions.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino_tss463_van/src/tss46x_register_structs.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino_tss463_van/src/tss46x_van.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino_tss463_van/src/tss463.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino_tss463_van/examples/tss461_with_mcp23s17_van_monitor/tss461_with_mcp23s17_intel.h"
)

target_include_directories(pac-atmel-tss463c-van-bus-datalink-controller-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduino_tss463_van/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-atmel-tss463c-van-bus-datalink-controller-library INTERFACE
    arduino-compat
)
