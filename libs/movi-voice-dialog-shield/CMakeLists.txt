add_library(pac-movi-voice-dialog-shield INTERFACE)

target_sources(pac-movi-voice-dialog-shield INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MOVIArduinoAPI/MOVIShield.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MOVIArduinoAPI/piduino_light/HardwareSerial.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MOVIArduinoAPI/piduino_light/piduinowrapper.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MOVIArduinoAPI/piduino_light/Arduino.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MOVIArduinoAPI/piduino_light/IPAddress.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MOVIArduinoAPI/piduino_light/WString.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MOVIArduinoAPI/piduino_light/sysfsio.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MOVIArduinoAPI/piduino_light/stdlib_noniso.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MOVIArduinoAPI/piduino_light/Print.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MOVIArduinoAPI/piduino_light/WMath.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MOVIArduinoAPI/MOVIShield.h"
  "${CMAKE_CURRENT_LIST_DIR}/MOVIArduinoAPI/piduino_light/HardwareSerial.h"
  "${CMAKE_CURRENT_LIST_DIR}/MOVIArduinoAPI/piduino_light/sysfsio.h"
  "${CMAKE_CURRENT_LIST_DIR}/MOVIArduinoAPI/piduino_light/WCharacter.h"
  "${CMAKE_CURRENT_LIST_DIR}/MOVIArduinoAPI/piduino_light/Print.h"
  "${CMAKE_CURRENT_LIST_DIR}/MOVIArduinoAPI/piduino_light/binary.h"
  "${CMAKE_CURRENT_LIST_DIR}/MOVIArduinoAPI/piduino_light/WProgram.h"
  "${CMAKE_CURRENT_LIST_DIR}/MOVIArduinoAPI/piduino_light/stdlib_noniso.h"
  "${CMAKE_CURRENT_LIST_DIR}/MOVIArduinoAPI/piduino_light/Printable.h"
  "${CMAKE_CURRENT_LIST_DIR}/MOVIArduinoAPI/piduino_light/WString.h"
  "${CMAKE_CURRENT_LIST_DIR}/MOVIArduinoAPI/piduino_light/IPAddress.h"
  "${CMAKE_CURRENT_LIST_DIR}/MOVIArduinoAPI/piduino_light/Stream.h"
  "${CMAKE_CURRENT_LIST_DIR}/MOVIArduinoAPI/piduino_light/Udp.h"
  "${CMAKE_CURRENT_LIST_DIR}/MOVIArduinoAPI/piduino_light/Client.h"
  "${CMAKE_CURRENT_LIST_DIR}/MOVIArduinoAPI/piduino_light/pgmspace.h"
  "${CMAKE_CURRENT_LIST_DIR}/MOVIArduinoAPI/piduino_light/Arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/MOVIArduinoAPI/piduino_light/Server.h"
)

target_include_directories(pac-movi-voice-dialog-shield INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MOVIArduinoAPI"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-movi-voice-dialog-shield INTERFACE
    arduino-compat
)
