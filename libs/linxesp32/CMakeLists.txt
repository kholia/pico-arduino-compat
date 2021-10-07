add_library(pac-linxesp32 INTERFACE)

target_sources(pac-linxesp32 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/LinxESP32/src/LinxSerialListener.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LinxESP32/src/LinxESP32.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LinxESP32/src/LinxESP32WifiListener.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LinxESP32/src/utility/LinxListener.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LinxESP32/src/utility/LinxWiringDevice.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LinxESP32/src/utility/LinxDevice.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LinxESP32/src/LinxSerialListener.h"
  "${CMAKE_CURRENT_LIST_DIR}/LinxESP32/src/LinxESP32.h"
  "${CMAKE_CURRENT_LIST_DIR}/LinxESP32/src/LinxESP32WifiListener.h"
  "${CMAKE_CURRENT_LIST_DIR}/LinxESP32/src/config/LinxConfig.h"
  "${CMAKE_CURRENT_LIST_DIR}/LinxESP32/src/utility/LinxListener.h"
  "${CMAKE_CURRENT_LIST_DIR}/LinxESP32/src/utility/LinxDevice.h"
  "${CMAKE_CURRENT_LIST_DIR}/LinxESP32/src/utility/LinxWiringDevice.h"
)

target_include_directories(pac-linxesp32 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/LinxESP32/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-linxesp32 INTERFACE
    arduino-compat
)
