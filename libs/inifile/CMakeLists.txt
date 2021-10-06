add_library(inifile INTERFACE)

target_sources(inifile INTERFACE
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

target_include_directories(inifile INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/IniFile/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET official-sd)
    add_subdirectory(../../official-libs/sd build_official-sd)
endif()

target_link_libraries(inifile INTERFACE
    arduino-compat
    official-sd
)
