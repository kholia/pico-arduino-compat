add_library(nrf_hal INTERFACE)

target_sources(nrf_hal INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/NRF_HAL/src/nrf_hal.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/NRF_HAL/src/nrf_hal.h"
)

target_include_directories(nrf_hal INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/NRF_HAL/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(nrf_hal INTERFACE
    arduino-compat
)
