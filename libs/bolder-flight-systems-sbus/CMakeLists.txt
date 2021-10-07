add_library(pac-bolder-flight-systems-sbus INTERFACE)

target_sources(pac-bolder-flight-systems-sbus INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SBUS/include/sbus/sbus.h"
)

target_include_directories(pac-bolder-flight-systems-sbus INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SBUS/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-bolder-flight-systems-sbus INTERFACE
    arduino-compat
)
