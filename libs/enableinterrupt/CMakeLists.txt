add_library(pac-enableinterrupt INTERFACE)

target_sources(pac-enableinterrupt INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/EnableInterrupt/examples/SimpleWithLibrary/Useless.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EnableInterrupt/EnableInterrupt.h"
  "${CMAKE_CURRENT_LIST_DIR}/EnableInterrupt/examples/SimpleWithLibrary/Useless.h"
  "${CMAKE_CURRENT_LIST_DIR}/EnableInterrupt/utility/ei_pindefs_speed.h"
  "${CMAKE_CURRENT_LIST_DIR}/EnableInterrupt/utility/ei_PinChange328.h"
  "${CMAKE_CURRENT_LIST_DIR}/EnableInterrupt/utility/ei_portj_speed.h"
  "${CMAKE_CURRENT_LIST_DIR}/EnableInterrupt/utility/ei_PinChange2560.h"
  "${CMAKE_CURRENT_LIST_DIR}/EnableInterrupt/utility/ei_External1284.h"
  "${CMAKE_CURRENT_LIST_DIR}/EnableInterrupt/utility/ei_PinChangeTiny25.h"
  "${CMAKE_CURRENT_LIST_DIR}/EnableInterrupt/utility/ei_portk_speed.h"
  "${CMAKE_CURRENT_LIST_DIR}/EnableInterrupt/utility/ei_PinChange1284.h"
  "${CMAKE_CURRENT_LIST_DIR}/EnableInterrupt/utility/ei_portc_speed.h"
  "${CMAKE_CURRENT_LIST_DIR}/EnableInterrupt/utility/ei_portb_speed.h"
  "${CMAKE_CURRENT_LIST_DIR}/EnableInterrupt/utility/ei_ExternalTiny25.h"
  "${CMAKE_CURRENT_LIST_DIR}/EnableInterrupt/utility/ei_PinChangeLeonardo.h"
  "${CMAKE_CURRENT_LIST_DIR}/EnableInterrupt/utility/ei_portd_speed.h"
  "${CMAKE_CURRENT_LIST_DIR}/EnableInterrupt/utility/ei_porta_speed.h"
  "${CMAKE_CURRENT_LIST_DIR}/EnableInterrupt/utility/ei_ExternalLeonardo.h"
  "${CMAKE_CURRENT_LIST_DIR}/EnableInterrupt/utility/ei_ExternalTiny24.h"
  "${CMAKE_CURRENT_LIST_DIR}/EnableInterrupt/utility/ei_External328.h"
  "${CMAKE_CURRENT_LIST_DIR}/EnableInterrupt/utility/ei_External2560.h"
  "${CMAKE_CURRENT_LIST_DIR}/EnableInterrupt/utility/ei_PinChangeTiny24.h"
)

target_include_directories(pac-enableinterrupt INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/EnableInterrupt"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-enableinterrupt INTERFACE
    arduino-compat
)
