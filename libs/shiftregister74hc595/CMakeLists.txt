add_library(pac-shiftregister74hc595 INTERFACE)

target_sources(pac-shiftregister74hc595 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ShiftRegister74HC595/src/ShiftRegister74HC595.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ShiftRegister74HC595/src/ShiftRegister74HC595.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/ShiftRegister74HC595/src/ShiftRegister74HC595.h"
)

target_include_directories(pac-shiftregister74hc595 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ShiftRegister74HC595/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-shiftregister74hc595 INTERFACE
    arduino-compat
)
