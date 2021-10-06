add_library(pf INTERFACE)

target_sources(pf INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/PF/src/pff.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PF/src/avr_mmcp.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PF/src/PetitSerial.h"
  "${CMAKE_CURRENT_LIST_DIR}/PF/src/PF.h"
  "${CMAKE_CURRENT_LIST_DIR}/PF/src/diskio.h"
  "${CMAKE_CURRENT_LIST_DIR}/PF/src/integer.h"
  "${CMAKE_CURRENT_LIST_DIR}/PF/src/pffArduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/PF/src/pff.h"
  "${CMAKE_CURRENT_LIST_DIR}/PF/src/pffconf.h"
)

target_include_directories(pf INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/PF/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pf INTERFACE
    arduino-compat
)
