add_library(pac-tlc5940 INTERFACE)

target_sources(pac-tlc5940 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Tlc5940/Tlc5940.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Tlc5940/tlc_fades.h"
  "${CMAKE_CURRENT_LIST_DIR}/Tlc5940/Tlc5940.h"
  "${CMAKE_CURRENT_LIST_DIR}/Tlc5940/tlc_progmem_utils.h"
  "${CMAKE_CURRENT_LIST_DIR}/Tlc5940/tlc_config.h"
  "${CMAKE_CURRENT_LIST_DIR}/Tlc5940/tlc_shifts.h"
  "${CMAKE_CURRENT_LIST_DIR}/Tlc5940/tlc_servos.h"
  "${CMAKE_CURRENT_LIST_DIR}/Tlc5940/tlc_animations.h"
  "${CMAKE_CURRENT_LIST_DIR}/Tlc5940/pinouts/ATmega_xx4.h"
  "${CMAKE_CURRENT_LIST_DIR}/Tlc5940/pinouts/Teensy_KinetisK20.h"
  "${CMAKE_CURRENT_LIST_DIR}/Tlc5940/pinouts/ATmega_xx8.h"
  "${CMAKE_CURRENT_LIST_DIR}/Tlc5940/pinouts/Teensypp_xxx6.h"
  "${CMAKE_CURRENT_LIST_DIR}/Tlc5940/pinouts/ATmega_8.h"
  "${CMAKE_CURRENT_LIST_DIR}/Tlc5940/pinouts/chip_includes.h"
  "${CMAKE_CURRENT_LIST_DIR}/Tlc5940/pinouts/Arduino_Mega.h"
  "${CMAKE_CURRENT_LIST_DIR}/Tlc5940/pinouts/Teensy_xxU4.h"
  "${CMAKE_CURRENT_LIST_DIR}/Tlc5940/pinouts/pin_functions.h"
  "${CMAKE_CURRENT_LIST_DIR}/Tlc5940/examples/BasicAnimations/ani_arduino.h"
)

target_include_directories(pac-tlc5940 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Tlc5940"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-tlc5940 INTERFACE
    arduino-compat
)
