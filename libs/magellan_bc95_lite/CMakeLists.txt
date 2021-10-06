add_library(magellan_bc95_lite INTERFACE)

target_sources(magellan_bc95_lite INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Magellan_BC95_lite/src/Magellan_BC95_lite.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Magellan_BC95_lite/src/Magellan_BC95_lite.h"
  "${CMAKE_CURRENT_LIST_DIR}/Magellan_BC95_lite/src/config/AltSoftSerial_Boards.h"
  "${CMAKE_CURRENT_LIST_DIR}/Magellan_BC95_lite/src/config/AltSoftSerial_Timers.h"
)

target_include_directories(magellan_bc95_lite INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Magellan_BC95_lite/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(magellan_bc95_lite INTERFACE
    arduino-compat
)
