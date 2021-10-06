add_library(haptic_da7280 INTERFACE)

target_sources(haptic_da7280 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Haptic_DA7280/src/Haptic_DA7280.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Haptic_DA7280/src/Haptic_DA7280.h"
  "${CMAKE_CURRENT_LIST_DIR}/Haptic_DA7280/src/Haptic_DA7280_registers.h"
)

target_include_directories(haptic_da7280 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Haptic_DA7280/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(haptic_da7280 INTERFACE
    arduino-compat
)
