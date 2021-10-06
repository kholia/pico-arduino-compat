add_library(unified-log INTERFACE)

target_sources(unified-log INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoUnifiedLog/LogHandler.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoUnifiedLog/GenericLog.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoUnifiedLog/LogMqttModule.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoUnifiedLog/LogSerialModule.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoUnifiedLog/NamedLog.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoUnifiedLog/NamedLog.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoUnifiedLog/LogSerialModule.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoUnifiedLog/LogHandler.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoUnifiedLog/GenericLog.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoUnifiedLog/LogMqttModule.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoUnifiedLog/LogModule.h"
)

target_include_directories(unified-log INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ArduinoUnifiedLog"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(unified-log INTERFACE
    arduino-compat
)
