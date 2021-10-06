add_library(sixfab_cellulariot INTERFACE)

target_sources(sixfab_cellulariot INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Sixfab_Arduino_CellularIoT_Library/Sixfab_MMA8452Q.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Sixfab_Arduino_CellularIoT_Library/Sixfab_HDC1080.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Sixfab_Arduino_CellularIoT_Library/Sixfab_CellularIoT.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Sixfab_Arduino_CellularIoT_Library/Sixfab_MMA8452Q.h"
  "${CMAKE_CURRENT_LIST_DIR}/Sixfab_Arduino_CellularIoT_Library/Sixfab_HDC1080.h"
  "${CMAKE_CURRENT_LIST_DIR}/Sixfab_Arduino_CellularIoT_Library/Sixfab_CellularIoT.h"
)

target_include_directories(sixfab_cellulariot INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Sixfab_Arduino_CellularIoT_Library"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(sixfab_cellulariot INTERFACE
    arduino-compat
)
