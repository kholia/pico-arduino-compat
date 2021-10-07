add_library(pac-modi INTERFACE)

target_sources(pac-modi INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MODI-Arduino/src/MODI.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MODI-Arduino/src/MODI_Interface.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MODI-Arduino/src/mcp_can.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MODI-Arduino/src/mcp_can.h"
  "${CMAKE_CURRENT_LIST_DIR}/MODI-Arduino/src/MODI_property.h"
  "${CMAKE_CURRENT_LIST_DIR}/MODI-Arduino/src/types.h"
  "${CMAKE_CURRENT_LIST_DIR}/MODI-Arduino/src/mcp_can_dfs.h"
  "${CMAKE_CURRENT_LIST_DIR}/MODI-Arduino/src/MODI.h"
  "${CMAKE_CURRENT_LIST_DIR}/MODI-Arduino/src/MODI_Interface.h"
)

target_include_directories(pac-modi INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MODI-Arduino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-modi INTERFACE
    arduino-compat
)
