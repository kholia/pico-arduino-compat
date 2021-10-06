add_library(goldelox-serial-arduino-library INTERFACE)

target_sources(goldelox-serial-arduino-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Goldelox-Serial-Arduino-Library/src/Goldelox_Serial_4DLib.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Goldelox-Serial-Arduino-Library/src/Goldelox_Serial_4DLib.h"
  "${CMAKE_CURRENT_LIST_DIR}/Goldelox-Serial-Arduino-Library/src/Goldelox_Const4DSerial.h"
  "${CMAKE_CURRENT_LIST_DIR}/Goldelox-Serial-Arduino-Library/src/Goldelox_Const4D.h"
  "${CMAKE_CURRENT_LIST_DIR}/Goldelox-Serial-Arduino-Library/src/Goldelox_Types4D.h"
  "${CMAKE_CURRENT_LIST_DIR}/Goldelox-Serial-Arduino-Library/examples/GoldeloxBigDemo/GoldeloxBigDemo.h"
)

target_include_directories(goldelox-serial-arduino-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Goldelox-Serial-Arduino-Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(goldelox-serial-arduino-library INTERFACE
    arduino-compat
)
