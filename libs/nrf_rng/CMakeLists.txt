add_library(pac-nrf_rng INTERFACE)

target_sources(pac-nrf_rng INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/hw_rng/src/hw_rng.h"
)

target_include_directories(pac-nrf_rng INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/hw_rng/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-nrf_rng INTERFACE
    arduino-compat
)
