add_library(arduinocloudstorage INTERFACE)

target_sources(arduinocloudstorage INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-CloudStorage/src/CloudStorage.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-CloudStorage/src/WifiConnection.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-CloudStorage/src/Http/RequestInterface.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-CloudStorage/src/Http/Esp8266RequestImpl.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-CloudStorage/src/Http/Client.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-CloudStorage/src/Http/EspClient.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-CloudStorage/src/Http/GenericEspRequestImpl.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-CloudStorage/src/Utils/ResultWrapper.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-CloudStorage/src/Utils/AnyValue.h"
)

target_include_directories(arduinocloudstorage INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino-CloudStorage/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(arduinocloudstorage INTERFACE
    arduino-compat
)
