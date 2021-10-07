add_library(pac-rtt-cmsis-os INTERFACE)

target_sources(pac-rtt-cmsis-os INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/RTT-CMSIS-OS/src/rtt_cmsis_os2.c"
  "${CMAKE_CURRENT_LIST_DIR}/RTT-CMSIS-OS/src/cmsis_os1.c"
  "${CMAKE_CURRENT_LIST_DIR}/RTT-CMSIS-OS/src/os_systick.c"
  "${CMAKE_CURRENT_LIST_DIR}/RTT-CMSIS-OS/src/os_tick.h"
  "${CMAKE_CURRENT_LIST_DIR}/RTT-CMSIS-OS/src/cmsis_os2.h"
  "${CMAKE_CURRENT_LIST_DIR}/RTT-CMSIS-OS/src/cmsis_os.h"
)

target_include_directories(pac-rtt-cmsis-os INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/RTT-CMSIS-OS/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-rtt-cmsis-os INTERFACE
    arduino-compat
)
