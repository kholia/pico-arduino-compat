add_library(embedis INTERFACE)

target_sources(embedis INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/embedis/arduino/Stream.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/embedis/arduino/WString.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/embedis/arduino/Print.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/embedis/src/Embedis.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/embedis/tests/readwrite.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/embedis/tests/predicates.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/embedis/tests/protocol.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/embedis/tests/main.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/embedis/tests/pubsub.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/embedis/tests/misc.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/embedis/tests/dict.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/embedis/arduino/Print.h"
  "${CMAKE_CURRENT_LIST_DIR}/embedis/arduino/Printable.h"
  "${CMAKE_CURRENT_LIST_DIR}/embedis/arduino/WString.h"
  "${CMAKE_CURRENT_LIST_DIR}/embedis/arduino/Stream.h"
  "${CMAKE_CURRENT_LIST_DIR}/embedis/arduino/Arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/embedis/arduino/avr/pgmspace.h"
  "${CMAKE_CURRENT_LIST_DIR}/embedis/src/Embedis.h"
  "${CMAKE_CURRENT_LIST_DIR}/embedis/examples/Flip_n_Click/Embedis_Due/flip_n_click_pins.h"
  "${CMAKE_CURRENT_LIST_DIR}/embedis/tests/main.h"
)

target_include_directories(embedis INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/embedis/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(embedis INTERFACE
    arduino-compat
)
