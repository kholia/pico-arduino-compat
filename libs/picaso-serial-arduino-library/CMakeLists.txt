add_library(pac-picaso-serial-arduino-library INTERFACE)

target_sources(pac-picaso-serial-arduino-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Picaso-Serial-Arduino-Library/src/Picaso_Serial_4DLib.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Picaso-Serial-Arduino-Library/src/Picaso_Serial_4DLib.h"
  "${CMAKE_CURRENT_LIST_DIR}/Picaso-Serial-Arduino-Library/src/Picaso_Const4D.h"
  "${CMAKE_CURRENT_LIST_DIR}/Picaso-Serial-Arduino-Library/examples/BigDemo/BigDemo.h"
)

target_include_directories(pac-picaso-serial-arduino-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Picaso-Serial-Arduino-Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-picaso-serial-arduino-library INTERFACE
    arduino-compat
)
