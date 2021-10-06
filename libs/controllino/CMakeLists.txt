add_library(controllino INTERFACE)

target_sources(controllino INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/CONTROLLINO_Library/Controllino.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/CONTROLLINO_Library/Bootloaders/MAXI/source/stk500boot.c"
  "${CMAKE_CURRENT_LIST_DIR}/CONTROLLINO_Library/Bootloaders/MINI/source/optiboot.c"
  "${CMAKE_CURRENT_LIST_DIR}/CONTROLLINO_Library/Controllino.h"
  "${CMAKE_CURRENT_LIST_DIR}/CONTROLLINO_Library/MAXI/DemoModbusRTUMaster/ModbusRtu.h"
  "${CMAKE_CURRENT_LIST_DIR}/CONTROLLINO_Library/MAXI/DemoModbusRTUSlave/ModbusRtu.h"
  "${CMAKE_CURRENT_LIST_DIR}/CONTROLLINO_Library/MEGA/DemoModbusRTUMaster/ModbusRtu.h"
  "${CMAKE_CURRENT_LIST_DIR}/CONTROLLINO_Library/MEGA/DemoModbusRTUSlave/ModbusRtu.h"
)

target_include_directories(controllino INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/CONTROLLINO_Library"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(controllino INTERFACE
    arduino-compat
)
