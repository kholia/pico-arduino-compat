add_library(asyncudp_wt32_eth01 INTERFACE)

target_sources(asyncudp_wt32_eth01 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/AsyncUDP_WT32_ETH01/LibraryPatches/esp32/cores/esp32/Server.h"
  "${CMAKE_CURRENT_LIST_DIR}/AsyncUDP_WT32_ETH01/src/AsyncUDP_WT32_ETH01_Impl.h"
  "${CMAKE_CURRENT_LIST_DIR}/AsyncUDP_WT32_ETH01/src/AsyncUDP_WT32_ETH01.h"
  "${CMAKE_CURRENT_LIST_DIR}/AsyncUDP_WT32_ETH01/src/AsyncUDP_WT32_ETH01_Debug.h"
)

target_include_directories(asyncudp_wt32_eth01 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/AsyncUDP_WT32_ETH01/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(asyncudp_wt32_eth01 INTERFACE
    arduino-compat
)
