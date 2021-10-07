add_library(pac-inifile INTERFACE)

target_sources(pac-inifile INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/IniFile/extras/test/readtest.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/IniFile/extras/test/IPAddress.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/IniFile/extras/test/ini_test.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/IniFile/extras/test/File.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/IniFile/src/IniFile.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/IniFile/extras/test/File.h"
  "${CMAKE_CURRENT_LIST_DIR}/IniFile/extras/test/Ethernet.h"
  "${CMAKE_CURRENT_LIST_DIR}/IniFile/extras/test/IPAddress.h"
  "${CMAKE_CURRENT_LIST_DIR}/IniFile/extras/test/arduino_compat.h"
  "${CMAKE_CURRENT_LIST_DIR}/IniFile/extras/test/SD.h"
  "${CMAKE_CURRENT_LIST_DIR}/IniFile/src/IniFile.h"
)

target_include_directories(pac-inifile INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/IniFile/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET pac-sd)
    add_subdirectory(../../libs/sd build_pac-sd)
endif()

target_link_libraries(pac-inifile INTERFACE
    arduino-compat
    pac-sd
)
