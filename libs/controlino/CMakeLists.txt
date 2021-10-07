add_library(pac-controlino INTERFACE)

target_sources(pac-controlino INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Controlino/src/button/button.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Controlino/src/control/control.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Controlino/src/multiplexer/multiplexer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Controlino/src/selector/selector.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Controlino/src/pinmode/pinmode.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Controlino/src/key/key.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Controlino/src/potentiometer/potentiometer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Controlino/src/Controlino.h"
  "${CMAKE_CURRENT_LIST_DIR}/Controlino/src/button/button.h"
  "${CMAKE_CURRENT_LIST_DIR}/Controlino/src/control/control.h"
  "${CMAKE_CURRENT_LIST_DIR}/Controlino/src/pin/pin.h"
  "${CMAKE_CURRENT_LIST_DIR}/Controlino/src/multiplexer/multiplexer.h"
  "${CMAKE_CURRENT_LIST_DIR}/Controlino/src/selector/selector.h"
  "${CMAKE_CURRENT_LIST_DIR}/Controlino/src/mode/mode.h"
  "${CMAKE_CURRENT_LIST_DIR}/Controlino/src/pinmode/pinmode.h"
  "${CMAKE_CURRENT_LIST_DIR}/Controlino/src/key/key.h"
  "${CMAKE_CURRENT_LIST_DIR}/Controlino/src/potentiometer/potentiometer.h"
)

target_include_directories(pac-controlino INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Controlino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-controlino INTERFACE
    arduino-compat
)
