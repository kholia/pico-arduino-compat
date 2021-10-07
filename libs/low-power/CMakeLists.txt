add_library(pac-low-power INTERFACE)

target_sources(pac-low-power INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Low-Power/LowPower.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Low-Power/LowPower.h"
)

target_include_directories(pac-low-power INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Low-Power"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-low-power INTERFACE
    arduino-compat
)
