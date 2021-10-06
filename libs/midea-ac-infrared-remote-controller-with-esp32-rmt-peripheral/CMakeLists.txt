add_library(midea-ac-infrared-remote-controller-with-esp32-rmt-peripheral INTERFACE)

target_sources(midea-ac-infrared-remote-controller-with-esp32-rmt-peripheral INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/esp32_rmt_midea_ir_tx/src/esp32_rmt_midea_ir_tx.c"
  "${CMAKE_CURRENT_LIST_DIR}/esp32_rmt_midea_ir_tx/src/midea_ir.c"
  "${CMAKE_CURRENT_LIST_DIR}/esp32_rmt_midea_ir_tx/src/midea_ir.h"
  "${CMAKE_CURRENT_LIST_DIR}/esp32_rmt_midea_ir_tx/src/esp32_rmt_midea_ir_tx.h"
)

target_include_directories(midea-ac-infrared-remote-controller-with-esp32-rmt-peripheral INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/esp32_rmt_midea_ir_tx/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(midea-ac-infrared-remote-controller-with-esp32-rmt-peripheral INTERFACE
    arduino-compat
)
