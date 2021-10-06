add_library(ps3-controller-host INTERFACE)

target_sources(ps3-controller-host INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/esp32-ps3/src/Ps3Controller.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/esp32-ps3/src/ps3_parser.c"
  "${CMAKE_CURRENT_LIST_DIR}/esp32-ps3/src/ps3.c"
  "${CMAKE_CURRENT_LIST_DIR}/esp32-ps3/src/ps3_l2cap.c"
  "${CMAKE_CURRENT_LIST_DIR}/esp32-ps3/src/ps3_spp.c"
  "${CMAKE_CURRENT_LIST_DIR}/esp32-ps3/src/Ps3Controller.h"
  "${CMAKE_CURRENT_LIST_DIR}/esp32-ps3/src/osi/allocator.h"
  "${CMAKE_CURRENT_LIST_DIR}/esp32-ps3/src/include/ps3_int.h"
  "${CMAKE_CURRENT_LIST_DIR}/esp32-ps3/src/include/ps3.h"
  "${CMAKE_CURRENT_LIST_DIR}/esp32-ps3/src/common/bt_target.h"
  "${CMAKE_CURRENT_LIST_DIR}/esp32-ps3/src/stack/gap_api.h"
  "${CMAKE_CURRENT_LIST_DIR}/esp32-ps3/src/stack/bt_types.h"
  "${CMAKE_CURRENT_LIST_DIR}/esp32-ps3/src/stack/l2cdefs.h"
  "${CMAKE_CURRENT_LIST_DIR}/esp32-ps3/src/stack/profiles_api.h"
  "${CMAKE_CURRENT_LIST_DIR}/esp32-ps3/src/stack/hcidefs.h"
  "${CMAKE_CURRENT_LIST_DIR}/esp32-ps3/src/stack/l2c_api.h"
  "${CMAKE_CURRENT_LIST_DIR}/esp32-ps3/src/stack/btm_api.h"
)

target_include_directories(ps3-controller-host INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/esp32-ps3/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(ps3-controller-host INTERFACE
    arduino-compat
)
