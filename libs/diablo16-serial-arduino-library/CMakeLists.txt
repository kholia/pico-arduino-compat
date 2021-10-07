add_library(pac-diablo16-serial-arduino-library INTERFACE)

target_sources(pac-diablo16-serial-arduino-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Diablo16-Serial-Arduino-Library/src/Diablo_Serial_4DLib.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Diablo16-Serial-Arduino-Library/src/Diablo_Const4D.h"
  "${CMAKE_CURRENT_LIST_DIR}/Diablo16-Serial-Arduino-Library/src/Diablo_Serial_4DLib.h"
  "${CMAKE_CURRENT_LIST_DIR}/Diablo16-Serial-Arduino-Library/examples/BigDemo/BigDemo.h"
)

target_include_directories(pac-diablo16-serial-arduino-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Diablo16-Serial-Arduino-Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-diablo16-serial-arduino-library INTERFACE
    arduino-compat
)
