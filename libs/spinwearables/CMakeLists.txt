add_library(spinwearables INTERFACE)

target_sources(spinwearables INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SpinWearablesFirmware/src/SpinWearables.h"
  "${CMAKE_CURRENT_LIST_DIR}/SpinWearablesFirmware/examples/RNN/net.h"
)

target_include_directories(spinwearables INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SpinWearablesFirmware/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(spinwearables INTERFACE
    arduino-compat
)
