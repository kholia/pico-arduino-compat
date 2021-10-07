add_library(pac-dio2 INTERFACE)

target_sources(pac-dio2 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/DIO2/VStudio/DIO2.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DIO2/VStudio/DIO2.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/DIO2/src/digital2.c"
  "${CMAKE_CURRENT_LIST_DIR}/DIO2/VStudio/DIO2.h"
  "${CMAKE_CURRENT_LIST_DIR}/DIO2/board/standard/pins2_arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/DIO2/board/nano/pins2_arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/DIO2/board/mega/pins2_arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/DIO2/board/micro/pins2_arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/DIO2/board/dummy/pins2_arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/DIO2/board/leonardo/pins2_arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/DIO2/src/DIO2.h"
)

target_include_directories(pac-dio2 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/DIO2/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-dio2 INTERFACE
    arduino-compat
)
