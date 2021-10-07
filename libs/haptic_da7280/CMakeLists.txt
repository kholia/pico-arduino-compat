add_library(pac-haptic_da7280 INTERFACE)

target_sources(pac-haptic_da7280 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Haptic_DA7280/src/Haptic_DA7280.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Haptic_DA7280/src/Haptic_DA7280.h"
  "${CMAKE_CURRENT_LIST_DIR}/Haptic_DA7280/src/Haptic_DA7280_registers.h"
)

target_include_directories(pac-haptic_da7280 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Haptic_DA7280/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-haptic_da7280 INTERFACE
    arduino-compat
)
