add_library(pac-analog-digital-multiplexers INTERFACE)

target_sources(pac-analog-digital-multiplexers INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduino-ad-mux-lib/test/main.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-ad-mux-lib/src/Mux.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-ad-mux-lib/examples/SignalPinSwitchExample/SignalPinSwitchExample.ino.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-ad-mux-lib/examples/DigitalSignalWriteExample/DigitalSignalWriteExample.ino.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-ad-mux-lib/examples/AnalogSignalReadExample/AnalogSignalReadExample.ino.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-ad-mux-lib/examples/DigitalSignalReadExample/DigitalSignalReadExample.ino.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-ad-mux-lib/examples/AnalogSignalWriteExample/AnalogSignalWriteExample.ino.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-ad-mux-lib/src/Mux.h"
)

target_include_directories(pac-analog-digital-multiplexers INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduino-ad-mux-lib/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-analog-digital-multiplexers INTERFACE
    arduino-compat
)
