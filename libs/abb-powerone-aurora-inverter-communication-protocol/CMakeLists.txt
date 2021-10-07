add_library(pac-abb-powerone-aurora-inverter-communication-protocol INTERFACE)

target_sources(pac-abb-powerone-aurora-inverter-communication-protocol INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ABB_Aurora_Solar_Inverter_Library/Aurora.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ABB_Aurora_Solar_Inverter_Library/Aurora.h"
  "${CMAKE_CURRENT_LIST_DIR}/ABB_Aurora_Solar_Inverter_Library/include/utils.h"
  "${CMAKE_CURRENT_LIST_DIR}/ABB_Aurora_Solar_Inverter_Library/include/statesNaming.h"
  "${CMAKE_CURRENT_LIST_DIR}/ABB_Aurora_Solar_Inverter_Library/include/names.h"
)

target_include_directories(pac-abb-powerone-aurora-inverter-communication-protocol INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ABB_Aurora_Solar_Inverter_Library"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-abb-powerone-aurora-inverter-communication-protocol INTERFACE
    arduino-compat
)
