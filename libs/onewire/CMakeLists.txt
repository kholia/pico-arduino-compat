add_library(onewire INTERFACE)

target_sources(onewire INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/OneWire/OneWire.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/OneWire/OneWire.h"
  "${CMAKE_CURRENT_LIST_DIR}/OneWire/util/OneWire_direct_gpio.h"
  "${CMAKE_CURRENT_LIST_DIR}/OneWire/util/OneWire_direct_regtype.h"
)

target_include_directories(onewire INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/OneWire"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(onewire INTERFACE
    arduino-compat
)
