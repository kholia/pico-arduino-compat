add_library(iq-module-communication INTERFACE)

target_sources(iq-module-communication INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/iq-module-communication-arduino/src/generic_interface.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/iq-module-communication-arduino/src/client_communication.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/iq-module-communication-arduino/src/propeller_motor_control_client.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/iq-module-communication-arduino/src/temperature_monitor_uc_client.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/iq-module-communication-arduino/src/serial_interface_client.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/iq-module-communication-arduino/src/client_communication.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/iq-module-communication-arduino/src/iq_serial.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/iq-module-communication-arduino/src/servo_input_parser_client.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/iq-module-communication-arduino/src/generic_interface.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/iq-module-communication-arduino/src/temperature_estimator_client.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/iq-module-communication-arduino/src/step_direction_input_client.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/iq-module-communication-arduino/src/buzzer_control_client.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/iq-module-communication-arduino/src/iq_module_communication.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/iq-module-communication-arduino/src/multi_turn_angle_control_client.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/iq-module-communication-arduino/src/esc_propeller_input_parser_client.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/iq-module-communication-arduino/src/system_control_client.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/iq-module-communication-arduino/src/brushless_drive_client.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/iq-module-communication-arduino/src/anticogging_client.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/iq-module-communication-arduino/src/hobby_input_client.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/iq-module-communication-arduino/src/persistent_memory_client.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/iq-module-communication-arduino/src/power_monitor_client.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/iq-module-communication-arduino/src/crc_helper.c"
  "${CMAKE_CURRENT_LIST_DIR}/iq-module-communication-arduino/src/byte_queue.c"
  "${CMAKE_CURRENT_LIST_DIR}/iq-module-communication-arduino/src/packet_finder.c"
  "${CMAKE_CURRENT_LIST_DIR}/iq-module-communication-arduino/src/byte_queue.h"
  "${CMAKE_CURRENT_LIST_DIR}/iq-module-communication-arduino/src/packet_finder.h"
  "${CMAKE_CURRENT_LIST_DIR}/iq-module-communication-arduino/src/bipbuffer.h"
  "${CMAKE_CURRENT_LIST_DIR}/iq-module-communication-arduino/src/crc_helper.h"
  "${CMAKE_CURRENT_LIST_DIR}/iq-module-communication-arduino/src/communication_interface.h"
)

target_include_directories(iq-module-communication INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/iq-module-communication-arduino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(iq-module-communication INTERFACE
    arduino-compat
)
