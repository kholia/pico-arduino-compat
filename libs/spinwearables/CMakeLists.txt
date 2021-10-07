add_library(pac-spinwearables INTERFACE)

target_sources(pac-spinwearables INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SpinWearablesFirmware/src/SpinWearables.h"
  "${CMAKE_CURRENT_LIST_DIR}/SpinWearablesFirmware/examples/RNN/net.h"
)

target_include_directories(pac-spinwearables INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SpinWearablesFirmware/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-spinwearables INTERFACE
    arduino-compat
)
