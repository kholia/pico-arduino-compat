add_library(pac-loconet INTERFACE)

target_sources(pac-loconet INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/LocoNet/LocoNet.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LocoNet/utility/ln_sw_uart.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LocoNet/utility/ln_buf.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LocoNet/examples/LocoBOD/vcDebounce.c"
  "${CMAKE_CURRENT_LIST_DIR}/LocoNet/utility/utils.c"
  "${CMAKE_CURRENT_LIST_DIR}/LocoNet/LocoNet.h"
  "${CMAKE_CURRENT_LIST_DIR}/LocoNet/examples/LocoBOD/vcDebounce.h"
  "${CMAKE_CURRENT_LIST_DIR}/LocoNet/utility/ln_opc.h"
  "${CMAKE_CURRENT_LIST_DIR}/LocoNet/utility/utils.h"
  "${CMAKE_CURRENT_LIST_DIR}/LocoNet/utility/ln_buf.h"
  "${CMAKE_CURRENT_LIST_DIR}/LocoNet/utility/ln_config.h"
  "${CMAKE_CURRENT_LIST_DIR}/LocoNet/utility/ln_sw_uart.h"
)

target_include_directories(pac-loconet INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/LocoNet"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-loconet INTERFACE
    arduino-compat
)
