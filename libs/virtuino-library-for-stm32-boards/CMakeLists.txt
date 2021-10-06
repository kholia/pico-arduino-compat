add_library(virtuino-library-for-stm32-boards INTERFACE)

target_sources(virtuino-library-for-stm32-boards INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/virtuino_stm32/VirtuinoEsp8266_WebServer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/virtuino_stm32/VirtuinoBluetooth.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/virtuino_stm32/VirtuinoEthernet_WebServer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/virtuino_stm32/Virtuino.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/virtuino_stm32/VirtuinoEthernet_WebServer.h"
  "${CMAKE_CURRENT_LIST_DIR}/virtuino_stm32/VirtuinoEsp8266_WebServer.h"
  "${CMAKE_CURRENT_LIST_DIR}/virtuino_stm32/VirtuinoBluetooth.h"
  "${CMAKE_CURRENT_LIST_DIR}/virtuino_stm32/Virtuino.h"
)

target_include_directories(virtuino-library-for-stm32-boards INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/virtuino_stm32"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(virtuino-library-for-stm32-boards INTERFACE
    arduino-compat
)
