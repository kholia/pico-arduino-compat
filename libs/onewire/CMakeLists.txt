add_library(pac-onewire INTERFACE)

target_sources(pac-onewire INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/OneWire/OneWire.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/OneWire/OneWire.h"
  "${CMAKE_CURRENT_LIST_DIR}/OneWire/util/OneWire_direct_gpio.h"
  "${CMAKE_CURRENT_LIST_DIR}/OneWire/util/OneWire_direct_regtype.h"
)

target_include_directories(pac-onewire INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/OneWire"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-onewire INTERFACE
    arduino-compat
)
