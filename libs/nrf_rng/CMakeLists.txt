add_library(nrf_rng INTERFACE)

target_sources(nrf_rng INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/hw_rng/src/hw_rng.h"
)

target_include_directories(nrf_rng INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/hw_rng/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(nrf_rng INTERFACE
    arduino-compat
)
