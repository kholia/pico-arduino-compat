add_library(pac-magellan_sim7020e INTERFACE)

target_sources(pac-magellan_sim7020e INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Magellan_SIM7020E/src/Magellan_SIM7020E.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Magellan_SIM7020E/src/AIS_SIM7020E_API.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Magellan_SIM7020E/src/AT_SIM7020E.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Magellan_SIM7020E/src/Magellan_SIM7020E.h"
  "${CMAKE_CURRENT_LIST_DIR}/Magellan_SIM7020E/src/AIS_SIM7020E_API.h"
  "${CMAKE_CURRENT_LIST_DIR}/Magellan_SIM7020E/src/board.h"
  "${CMAKE_CURRENT_LIST_DIR}/Magellan_SIM7020E/src/AT_SIM7020E.h"
)

target_include_directories(pac-magellan_sim7020e INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Magellan_SIM7020E/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-magellan_sim7020e INTERFACE
    arduino-compat
)
