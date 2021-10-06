add_library(wolkconnect INTERFACE)

target_sources(wolkconnect INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/WolkConnect-Arduino/src/MQTTClient.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/WolkConnect-Arduino/src/WolkConn.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/WolkConnect-Arduino/src/utility/reading.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/WolkConnect-Arduino/src/utility/actuator_command.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/WolkConnect-Arduino/src/utility/actuator_status.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/WolkConnect-Arduino/src/utility/circular_buffer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/WolkConnect-Arduino/src/utility/json_parser.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/WolkConnect-Arduino/src/utility/outbound_message_factory.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/WolkConnect-Arduino/src/utility/parser.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/WolkConnect-Arduino/src/utility/configuration_command.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/WolkConnect-Arduino/src/utility/jsmn.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/WolkConnect-Arduino/src/utility/in_memory_persistence.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/WolkConnect-Arduino/src/utility/configuration_item.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/WolkConnect-Arduino/src/utility/WolkQueue.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/WolkConnect-Arduino/src/utility/outbound_message.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/WolkConnect-Arduino/src/utility/persistence.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/WolkConnect-Arduino/src/utility/manifest_item.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/WolkConnect-Arduino/tests/OutboundMessageFactoryTest.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/WolkConnect-Arduino/src/WolkConn.h"
  "${CMAKE_CURRENT_LIST_DIR}/WolkConnect-Arduino/src/MQTTClient.h"
  "${CMAKE_CURRENT_LIST_DIR}/WolkConnect-Arduino/src/utility/configuration_command.h"
  "${CMAKE_CURRENT_LIST_DIR}/WolkConnect-Arduino/src/utility/WolkQueue.h"
  "${CMAKE_CURRENT_LIST_DIR}/WolkConnect-Arduino/src/utility/jsmn.h"
  "${CMAKE_CURRENT_LIST_DIR}/WolkConnect-Arduino/src/utility/actuator_command.h"
  "${CMAKE_CURRENT_LIST_DIR}/WolkConnect-Arduino/src/utility/circular_buffer.h"
  "${CMAKE_CURRENT_LIST_DIR}/WolkConnect-Arduino/src/utility/configuration_item.h"
  "${CMAKE_CURRENT_LIST_DIR}/WolkConnect-Arduino/src/utility/wolk_utils.h"
  "${CMAKE_CURRENT_LIST_DIR}/WolkConnect-Arduino/src/utility/actuator_status.h"
  "${CMAKE_CURRENT_LIST_DIR}/WolkConnect-Arduino/src/utility/size_definitions.h"
  "${CMAKE_CURRENT_LIST_DIR}/WolkConnect-Arduino/src/utility/persistence.h"
  "${CMAKE_CURRENT_LIST_DIR}/WolkConnect-Arduino/src/utility/outbound_message_factory.h"
  "${CMAKE_CURRENT_LIST_DIR}/WolkConnect-Arduino/src/utility/parser.h"
  "${CMAKE_CURRENT_LIST_DIR}/WolkConnect-Arduino/src/utility/manifest_item.h"
  "${CMAKE_CURRENT_LIST_DIR}/WolkConnect-Arduino/src/utility/in_memory_persistence.h"
  "${CMAKE_CURRENT_LIST_DIR}/WolkConnect-Arduino/src/utility/reading.h"
  "${CMAKE_CURRENT_LIST_DIR}/WolkConnect-Arduino/src/utility/outbound_message.h"
  "${CMAKE_CURRENT_LIST_DIR}/WolkConnect-Arduino/src/utility/json_parser.h"
)

target_include_directories(wolkconnect INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/WolkConnect-Arduino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(wolkconnect INTERFACE
    arduino-compat
)
