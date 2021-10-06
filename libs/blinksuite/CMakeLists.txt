add_library(blinksuite INTERFACE)

target_sources(blinksuite INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/BlinkSuite-Arduino/src/BlinkBase.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/BlinkSuite-Arduino/src/BlinkShiftRegister.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/BlinkSuite-Arduino/src/BlinkPin.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/BlinkSuite-Arduino/src/BlinkShiftRegister.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/BlinkSuite-Arduino/src/BlinkShiftRegister.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlinkSuite-Arduino/src/BlinkPin.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlinkSuite-Arduino/src/BlinkBase.h"
)

target_include_directories(blinksuite INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/BlinkSuite-Arduino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(blinksuite INTERFACE
    arduino-compat
)
