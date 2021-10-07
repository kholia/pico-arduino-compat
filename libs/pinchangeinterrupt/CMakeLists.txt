add_library(pac-pinchangeinterrupt INTERFACE)

target_sources(pac-pinchangeinterrupt INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/PinChangeInterrupt/src/PinChangeInterrupt3.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PinChangeInterrupt/src/PinChangeInterrupt1.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PinChangeInterrupt/src/PinChangeInterrupt.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PinChangeInterrupt/src/PinChangeInterrupt0.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PinChangeInterrupt/src/PinChangeInterrupt2.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PinChangeInterrupt/src/PinChangeInterrupt.h"
  "${CMAKE_CURRENT_LIST_DIR}/PinChangeInterrupt/src/PinChangeInterruptBoards.h"
  "${CMAKE_CURRENT_LIST_DIR}/PinChangeInterrupt/src/PinChangeInterruptSettings.h"
  "${CMAKE_CURRENT_LIST_DIR}/PinChangeInterrupt/src/PinChangeInterruptPins.h"
)

target_include_directories(pac-pinchangeinterrupt INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/PinChangeInterrupt/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-pinchangeinterrupt INTERFACE
    arduino-compat
)
