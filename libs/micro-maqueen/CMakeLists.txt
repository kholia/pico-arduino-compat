add_library(pac-micro-maqueen INTERFACE)

target_sources(pac-micro-maqueen INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/micro-Maqueen-Arduino-Library/src/Maqueen.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/micro-Maqueen-Arduino-Library/examples/library_example5_ble_controller/packetParser.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/micro-Maqueen-Arduino-Library/src/Maqueen_cfg.h"
  "${CMAKE_CURRENT_LIST_DIR}/micro-Maqueen-Arduino-Library/src/musical_notes.h"
  "${CMAKE_CURRENT_LIST_DIR}/micro-Maqueen-Arduino-Library/src/images.h"
  "${CMAKE_CURRENT_LIST_DIR}/micro-Maqueen-Arduino-Library/src/Maqueen.h"
  "${CMAKE_CURRENT_LIST_DIR}/micro-Maqueen-Arduino-Library/examples/More/testing/BlinkUsingCustomTask/taskBlinkLed.h"
  "${CMAKE_CURRENT_LIST_DIR}/micro-Maqueen-Arduino-Library/examples/More/testing/BlinkUsingTaskMacros_flash_leds/taskBlinkLed.h"
)

target_include_directories(pac-micro-maqueen INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/micro-Maqueen-Arduino-Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-micro-maqueen INTERFACE
    arduino-compat
)
