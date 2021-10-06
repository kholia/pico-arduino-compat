add_library(wioterminal_wifimanager INTERFACE)

target_sources(wioterminal_wifimanager INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/WIOTerminal_WiFiManager/src_cpp/WIOTerminal_WiFiManager.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/WIOTerminal_WiFiManager/src_cpp/WIOTerminal_WiFiManager_Debug.h"
  "${CMAKE_CURRENT_LIST_DIR}/WIOTerminal_WiFiManager/src_cpp/WIOTerminal_WiFiManager.h"
  "${CMAKE_CURRENT_LIST_DIR}/WIOTerminal_WiFiManager/Packages_Patches/Seeeduino/hardware/samd/1.8.1/cores/arduino/Arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/WIOTerminal_WiFiManager/Packages_Patches/Seeeduino/hardware/samd/1.7.8/cores/arduino/Arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/WIOTerminal_WiFiManager/Packages_Patches/Seeeduino/hardware/samd/1.7.7/cores/arduino/Arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/WIOTerminal_WiFiManager/Packages_Patches/Seeeduino/hardware/samd/1.7.9/cores/arduino/Arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/WIOTerminal_WiFiManager/src/WIOTerminal_WiFiManager_Debug.h"
  "${CMAKE_CURRENT_LIST_DIR}/WIOTerminal_WiFiManager/src/WIOTerminal_WiFiManager-Impl.h"
  "${CMAKE_CURRENT_LIST_DIR}/WIOTerminal_WiFiManager/src/WIOTerminal_WiFiManager.h"
  "${CMAKE_CURRENT_LIST_DIR}/WIOTerminal_WiFiManager/src_h/WIOTerminal_WiFiManager_Debug.h"
  "${CMAKE_CURRENT_LIST_DIR}/WIOTerminal_WiFiManager/src_h/WIOTerminal_WiFiManager-Impl.h"
  "${CMAKE_CURRENT_LIST_DIR}/WIOTerminal_WiFiManager/src_h/WIOTerminal_WiFiManager.h"
)

target_include_directories(wioterminal_wifimanager INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/WIOTerminal_WiFiManager/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(wioterminal_wifimanager INTERFACE
    arduino-compat
)
