add_library(magellan_bc95 INTERFACE)

target_sources(magellan_bc95 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Magellan_BC95/src/Magellan_BC95.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Magellan_BC95/src/AT_BC95.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Magellan_BC95/src/AIS_BC95_API.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Magellan_BC95/src/Magellan_BC95.h"
  "${CMAKE_CURRENT_LIST_DIR}/Magellan_BC95/src/board.h"
  "${CMAKE_CURRENT_LIST_DIR}/Magellan_BC95/src/AT_BC95.h"
  "${CMAKE_CURRENT_LIST_DIR}/Magellan_BC95/src/AIS_BC95_API.h"
)

target_include_directories(magellan_bc95 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Magellan_BC95/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(magellan_bc95 INTERFACE
    arduino-compat
)
