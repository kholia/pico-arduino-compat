add_library(pac-timeinterrupt INTERFACE)

target_sources(pac-timeinterrupt INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TimeInterrupt/src/TimeInterrupt.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TimeInterrupt/src/avr/InterruptList.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TimeInterrupt/src/TimeInterrupt.h"
  "${CMAKE_CURRENT_LIST_DIR}/TimeInterrupt/src/avr/InterruptList.h"
)

target_include_directories(pac-timeinterrupt INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TimeInterrupt/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-timeinterrupt INTERFACE
    arduino-compat
)
