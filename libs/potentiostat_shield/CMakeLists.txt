add_library(potentiostat_shield INTERFACE)

target_sources(potentiostat_shield INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Potentiostat_Shield/src/Potentiostat_Shield.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Potentiostat_Shield/src/Potentiostat/Potentiostat_Serial_Com.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Potentiostat_Shield/src/Potentiostat/Potentiostat_SW_PID.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Potentiostat_Shield/src/Potentiostat/Potentiostat_State.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Potentiostat_Shield/src/Potentiostat/Potentiostat_EC_Tech.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Potentiostat_Shield/src/Potentiostat_Shield.h"
  "${CMAKE_CURRENT_LIST_DIR}/Potentiostat_Shield/src/Potentiostat/Potentiostat_Serial_Com.h"
  "${CMAKE_CURRENT_LIST_DIR}/Potentiostat_Shield/src/Potentiostat/Potentiostat_State.h"
  "${CMAKE_CURRENT_LIST_DIR}/Potentiostat_Shield/src/Potentiostat/Potentiostat_SW_PID.h"
  "${CMAKE_CURRENT_LIST_DIR}/Potentiostat_Shield/src/Potentiostat/Potentiostat_EC_Tech.h"
)

target_include_directories(potentiostat_shield INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Potentiostat_Shield/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(potentiostat_shield INTERFACE
    arduino-compat
)
