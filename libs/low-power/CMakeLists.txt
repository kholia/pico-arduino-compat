add_library(low-power INTERFACE)

target_sources(low-power INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Low-Power/LowPower.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Low-Power/LowPower.h"
)

target_include_directories(low-power INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Low-Power"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(low-power INTERFACE
    arduino-compat
)
