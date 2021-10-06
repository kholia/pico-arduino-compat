add_library(pico-dmx INTERFACE)

target_sources(pico-dmx INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Pico-DMX/src/DmxInput.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Pico-DMX/src/DmxOutput.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Pico-DMX/src/DmxInput.h"
  "${CMAKE_CURRENT_LIST_DIR}/Pico-DMX/src/DmxOutput.h"
  "${CMAKE_CURRENT_LIST_DIR}/Pico-DMX/src/DmxInput.pio.h"
  "${CMAKE_CURRENT_LIST_DIR}/Pico-DMX/src/DmxOutput.pio.h"
)

target_include_directories(pico-dmx INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Pico-DMX/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pico-dmx INTERFACE
    arduino-compat
)
