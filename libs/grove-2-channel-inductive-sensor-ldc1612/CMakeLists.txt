add_library(pac-grove-2-channel-inductive-sensor-ldc1612 INTERFACE)

target_sources(pac-grove-2-channel-inductive-sensor-ldc1612 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_LDC1612/Seeed_LDC1612.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_LDC1612/Seeed_LDC1612.h"
)

target_include_directories(pac-grove-2-channel-inductive-sensor-ldc1612 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Seeed_LDC1612"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-grove-2-channel-inductive-sensor-ldc1612 INTERFACE
    arduino-compat
)
