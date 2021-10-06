add_library(onewirehub INTERFACE)

target_sources(onewirehub INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/OneWireHub/main.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/OneWireHub/src/DS2413.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/OneWireHub/src/DS2433.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/OneWireHub/src/DS2431.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/OneWireHub/src/DS2502.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/OneWireHub/src/DS2408.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/OneWireHub/src/OneWireHub.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/OneWireHub/src/DS2506.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/OneWireHub/src/DS2423.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/OneWireHub/src/DS2401.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/OneWireHub/src/OneWireItem.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/OneWireHub/src/platform.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/OneWireHub/src/DS2438.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/OneWireHub/src/DS18B20.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/OneWireHub/src/DS2450.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/OneWireHub/src/BAE910.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/OneWireHub/src/DS2405.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/OneWireHub/src/DS2890.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/OneWireHub/src/DS2401.h"
  "${CMAKE_CURRENT_LIST_DIR}/OneWireHub/src/BAE910.h"
  "${CMAKE_CURRENT_LIST_DIR}/OneWireHub/src/DS2890.h"
  "${CMAKE_CURRENT_LIST_DIR}/OneWireHub/src/DS2423.h"
  "${CMAKE_CURRENT_LIST_DIR}/OneWireHub/src/OneWireHub.h"
  "${CMAKE_CURRENT_LIST_DIR}/OneWireHub/src/DS2502.h"
  "${CMAKE_CURRENT_LIST_DIR}/OneWireHub/src/platform.h"
  "${CMAKE_CURRENT_LIST_DIR}/OneWireHub/src/DS2433.h"
  "${CMAKE_CURRENT_LIST_DIR}/OneWireHub/src/OneWireItem.h"
  "${CMAKE_CURRENT_LIST_DIR}/OneWireHub/src/DS2431.h"
  "${CMAKE_CURRENT_LIST_DIR}/OneWireHub/src/DS2413.h"
  "${CMAKE_CURRENT_LIST_DIR}/OneWireHub/src/OneWireHub_config.h"
  "${CMAKE_CURRENT_LIST_DIR}/OneWireHub/src/DS2438.h"
  "${CMAKE_CURRENT_LIST_DIR}/OneWireHub/src/DS18B20.h"
  "${CMAKE_CURRENT_LIST_DIR}/OneWireHub/src/DS2450.h"
  "${CMAKE_CURRENT_LIST_DIR}/OneWireHub/src/DS2506.h"
  "${CMAKE_CURRENT_LIST_DIR}/OneWireHub/src/DS2408.h"
  "${CMAKE_CURRENT_LIST_DIR}/OneWireHub/src/DS2405.h"
)

target_include_directories(onewirehub INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/OneWireHub/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(onewirehub INTERFACE
    arduino-compat
)
