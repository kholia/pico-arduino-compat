add_library(nrf51_radio_library INTERFACE)

target_sources(nrf51_radio_library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/NRF51_Radio_library/NRF51_Radio_library.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/NRF51_Radio_library/NRF51_Radio_library.h"
)

target_include_directories(nrf51_radio_library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/NRF51_Radio_library"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(nrf51_radio_library INTERFACE
    arduino-compat
)
