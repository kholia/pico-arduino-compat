add_library(pac-maximwire INTERFACE)

target_sources(pac-maximwire INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MaximWire/src/HAL/Common.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MaximWire/src/HAL/NRF52840.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MaximWire/src/DS18B20.h"
  "${CMAKE_CURRENT_LIST_DIR}/MaximWire/src/MaximWire.h"
  "${CMAKE_CURRENT_LIST_DIR}/MaximWire/src/HAL/Common.h"
  "${CMAKE_CURRENT_LIST_DIR}/MaximWire/src/HAL/NRF52840.h"
)

target_include_directories(pac-maximwire INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MaximWire/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-maximwire INTERFACE
    arduino-compat
)
