add_library(pac-jtag INTERFACE)

target_sources(pac-jtag INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/JTAG/src/JTAGTAP.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/JTAG/src/PlayXSVFJTAGArduino.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/JTAG/src/XSVFPlayerJTAG.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/JTAG/src/JTAGPort.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/JTAG/src/PlayXSVF.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/JTAG/src/JTAGPortArduino.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/JTAG/src/JTAGPortAVR.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/JTAG/src/XSVFPlayer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/JTAG/src/PlayXSVFJTAGAVR.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/JTAG/src/ArduinoPin.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/JTAG/src/SerialComm.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/JTAG/src/JTAGPort.h"
  "${CMAKE_CURRENT_LIST_DIR}/JTAG/src/XSVFPlayer.h"
  "${CMAKE_CURRENT_LIST_DIR}/JTAG/src/JTAGTAP.h"
  "${CMAKE_CURRENT_LIST_DIR}/JTAG/src/XSVFPlayerJTAG.h"
  "${CMAKE_CURRENT_LIST_DIR}/JTAG/src/ArduinoPin.h"
  "${CMAKE_CURRENT_LIST_DIR}/JTAG/src/PlayXSVFJTAGArduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/JTAG/src/JTAGPortAVR.h"
  "${CMAKE_CURRENT_LIST_DIR}/JTAG/src/SerialComm.h"
  "${CMAKE_CURRENT_LIST_DIR}/JTAG/src/JTAGPortArduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/JTAG/src/PlayXSVFJTAGAVR.h"
  "${CMAKE_CURRENT_LIST_DIR}/JTAG/src/PlayXSVF.h"
)

target_include_directories(pac-jtag INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/JTAG/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-jtag INTERFACE
    arduino-compat
)
