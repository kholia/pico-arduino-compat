add_library(automaton INTERFACE)

target_sources(automaton INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Automaton/src/Atm_comparator.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Automaton/src/Automaton.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Automaton/src/Atm_bit.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Automaton/src/atm_counter.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Automaton/src/Atm_controller.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Automaton/src/Machine.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Automaton/src/Atm_player.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Automaton/src/Atm_fade.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Automaton/src/Atm_button.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Automaton/src/Atm_timer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Automaton/src/atm_connector.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Automaton/src/Atm_analog.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Automaton/src/Atm_fan.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Automaton/src/Atm_led.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Automaton/src/Atm_command.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Automaton/src/atm_timer_millis.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Automaton/src/Atm_digital.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Automaton/src/Atm_step.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Automaton/src/Atm_encoder.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Automaton/examples/blink_modular/Atm_blink.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Automaton/examples/extern_LED/Atm_led_mcp.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Automaton/examples/extern_LED/main.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Automaton/examples/knight_rider2/Atm_sweep.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Automaton/src/Atm_comparator.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/Automaton/src/Atm_fan.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/Automaton/src/Atm_encoder.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/Automaton/src/Atm_analog.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/Automaton/src/Atm_step.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/Automaton/src/Atm_digital.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/Automaton/src/Atm_controller.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/Automaton/src/Atm_fade.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/Automaton/src/Atm_bit.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/Automaton/src/Atm_player.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/Automaton/src/Atm_command.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/Automaton/src/atm_connector.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/Automaton/src/Machine.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/Automaton/src/Atm_timer.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/Automaton/src/atm_timer_millis.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/Automaton/src/Atm_button.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/Automaton/src/atm_serial_debug.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/Automaton/src/atm_counter.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/Automaton/src/Atm_led.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/Automaton/src/Automaton.h"
  "${CMAKE_CURRENT_LIST_DIR}/Automaton/examples/blink_modular/Atm_blink.h"
  "${CMAKE_CURRENT_LIST_DIR}/Automaton/examples/extern_LED/Atm_led_mcp.h"
  "${CMAKE_CURRENT_LIST_DIR}/Automaton/examples/frere_jacques/musical_notes.h"
  "${CMAKE_CURRENT_LIST_DIR}/Automaton/examples/knight_rider2/Atm_sweep.h"
)

target_include_directories(automaton INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Automaton/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(automaton INTERFACE
    arduino-compat
)
