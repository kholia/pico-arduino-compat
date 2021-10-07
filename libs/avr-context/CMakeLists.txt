add_library(pac-avr-context INTERFACE)

target_sources(pac-avr-context INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/avr-context/avrcontext_arduino.c"
  "${CMAKE_CURRENT_LIST_DIR}/avr-context/avrcoro_impl.h"
  "${CMAKE_CURRENT_LIST_DIR}/avr-context/avrcontext_arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/avr-context/avrcontext_impl.h"
  "${CMAKE_CURRENT_LIST_DIR}/avr-context/avrcoro.h"
  "${CMAKE_CURRENT_LIST_DIR}/avr-context/avrcontext.h"
)

target_include_directories(pac-avr-context INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/avr-context"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-avr-context INTERFACE
    arduino-compat
)
