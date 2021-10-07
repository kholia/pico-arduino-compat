add_library(pac-snmp-manager INTERFACE)

target_sources(pac-snmp-manager INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_SNMP_Manager/src/SNMPGet.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_SNMP_Manager/src/BER.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_SNMP_Manager/src/Arduino_SNMP_Manager.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_SNMP_Manager/src/SNMPGetResponse.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_SNMP_Manager/src/VarBinds.h"
)

target_include_directories(pac-snmp-manager INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino_SNMP_Manager/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-snmp-manager INTERFACE
    arduino-compat
)
